// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/feature_switch_mgr.cpp

// Line 105: range 000000000CF27F7C-000000000CF28079
void __fastcall ZN6FriendCI210BaseSwitchEj(Friend *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN6FriendCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'Friend + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 105: range 000000000CF353B0-000000000CF353DA
void __cdecl Friend::~Friend(Friend *const this)
{
  Friend::~Friend(this);
  operator delete(this, 0x10uLL);
};

// Line 105: range 000000000CF35362-000000000CF353AF
void __cdecl Friend::~Friend(Friend *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Friend + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 106: range 000000000CF281A6-000000000CF282A3
void __fastcall ZN12AskAddFriendCI210BaseSwitchEj(AskAddFriend *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12AskAddFriendCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'AskAddFriend + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 106: range 000000000CF35336-000000000CF35360
void __cdecl AskAddFriend::~AskAddFriend(AskAddFriend *const this)
{
  AskAddFriend::~AskAddFriend(this);
  operator delete(this, 0x10uLL);
};

// Line 106: range 000000000CF352E8-000000000CF35335
void __cdecl AskAddFriend::~AskAddFriend(AskAddFriend *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AskAddFriend + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 107: range 000000000CEC58D2-000000000CEC5977
bool __cdecl TowerFloor::isSwitchFeatureClosed(const TowerFloor *const this, uint32_t feature_id, uint32_t feature_id2)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->floor_index);
  }
  if ( feature_id != this->floor_index )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_index);
  }
  return feature_id2 == this->level_index;
};

// Line 107: range 000000000CEC576A-000000000CEC58D0
bool __cdecl TowerFloor::operator==(const TowerFloor *const this, const BaseSwitch *rhs)
{
  const TowerFloor *v2; // rax
  uint32_t *p_floor_index; // rax
  uint32_t floor_index; // ecx
  uint32_t level_index; // ecx
  const TowerFloor *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const TowerFloor *)__dynamic_cast(
                               rhs,
                               (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                               (const struct __class_type_info *)&`typeinfo for'TowerFloor,
                               0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_floor_index = &v2->floor_index;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->floor_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->floor_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_floor_index);
  }
  floor_index = cls_ptr->floor_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->floor_index);
  }
  if ( floor_index != this->floor_index )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cls_ptr->level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cls_ptr->level_index);
  }
  level_index = cls_ptr->level_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_index);
  }
  return level_index == this->level_index;
};

// Line 107: range 000000000CEC5172-000000000CEC5769
int32_t __cdecl TowerFloor::parseFromJsonStr(TowerFloor *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  Json::Value_0 *v9; // rax
  Json::Value_0 *v10; // rax
  common::milog::MiLogStream *v12; // rdx
  Json::Value *v13; // rax
  uint32_t v14; // ecx
  Json::Value *v15; // rax
  uint32_t v16; // edx
  int32_t result; // eax
  char v18[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:107 240 272 10 reader:107";
  *(_QWORD *)(v2 + 16) = TowerFloor::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      107);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "floor_index");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "floor_index"), !Json::Value::isUInt(v8))
      || (v9 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "level_index"), Json::Value::isNull(v9))
      || (v10 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "level_index"), !Json::Value::isUInt(v10)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        107);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v13 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "floor_index");
      v14 = Json::Value::asUInt(v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->floor_index);
      }
      this->floor_index = v14;
      v15 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "level_index");
      v16 = Json::Value::asUInt(v15);
      if ( *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->level_index);
      }
      this->level_index = v16;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 107: range 000000000CF283DA-000000000CF2855B
void __fastcall ZN10TowerFloorCI210BaseSwitchEj(TowerFloor *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN10TowerFloorCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'TowerFloor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->floor_index);
  }
  this->floor_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_index);
  }
  this->level_index = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 107: range 000000000CF3526E-000000000CF352BB
void __cdecl TowerFloor::~TowerFloor(TowerFloor *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TowerFloor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 107: range 000000000CF352BC-000000000CF352E6
void __cdecl TowerFloor::~TowerFloor(TowerFloor *const this)
{
  TowerFloor::~TowerFloor(this);
  operator delete(this, 0x18uLL);
};

// Line 108: range 000000000CF28688-000000000CF28785
void __fastcall ZN2MpCI210BaseSwitchEj(Mp *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN2MpCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'Mp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 108: range 000000000CF351F4-000000000CF35241
void __cdecl Mp::~Mp(Mp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Mp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 108: range 000000000CF35242-000000000CF3526C
void __cdecl Mp::~Mp(Mp *const this)
{
  Mp::~Mp(this);
  operator delete(this, 0x10uLL);
};

// Line 109: range 000000000CF288B2-000000000CF289AF
void __fastcall ZN7BlossomCI210BaseSwitchEj(Blossom *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN7BlossomCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'Blossom + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 109: range 000000000CF3517A-000000000CF351C7
void __cdecl Blossom::~Blossom(Blossom *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Blossom + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 109: range 000000000CF351C8-000000000CF351F2
void __cdecl Blossom::~Blossom(Blossom *const this)
{
  Blossom::~Blossom(this);
  operator delete(this, 0x10uLL);
};

// Line 110: range 000000000CEC5FA6-000000000CEC5FFE
bool __cdecl Dungeon::isSwitchFeatureClosed(const Dungeon *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id);
  }
  return feature_id == this->dungeon_id;
};

// Line 110: range 000000000CEC5EC6-000000000CEC5FA4
bool __cdecl Dungeon::operator==(const Dungeon *const this, const BaseSwitch *rhs)
{
  const Dungeon *v2; // rax
  uint32_t *p_dungeon_id; // rax
  uint32_t dungeon_id; // ecx
  const Dungeon *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const Dungeon *)__dynamic_cast(
                            rhs,
                            (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                            (const struct __class_type_info *)&`typeinfo for'Dungeon,
                            0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_dungeon_id = &v2->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_dungeon_id);
  }
  dungeon_id = cls_ptr->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id);
  }
  return dungeon_id == this->dungeon_id;
};

// Line 110: range 000000000CEC5978-000000000CEC5EC4
int32_t __cdecl Dungeon::parseFromJsonStr(Dungeon *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:110 240 272 10 reader:110";
  *(_QWORD *)(v2 + 16) = Dungeon::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      110);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "dungeon_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "dungeon_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        110);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "dungeon_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->dungeon_id);
      }
      this->dungeon_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 110: range 000000000CF28ADC-000000000CF28C1F
void __fastcall ZN7DungeonCI210BaseSwitchEj(Dungeon *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN7DungeonCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'Dungeon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id);
  }
  this->dungeon_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 110: range 000000000CF35100-000000000CF3514D
void __cdecl Dungeon::~Dungeon(Dungeon *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Dungeon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 110: range 000000000CF3514E-000000000CF35178
void __cdecl Dungeon::~Dungeon(Dungeon *const this)
{
  Dungeon::~Dungeon(this);
  operator delete(this, 0x10uLL);
};

// Line 111: range 000000000CF28D4C-000000000CF28E49
void __fastcall ZN19CustomDungeonSwitchCI210BaseSwitchEj(CustomDungeonSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN19CustomDungeonSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'CustomDungeonSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 111: range 000000000CF350D4-000000000CF350FE
void __cdecl CustomDungeonSwitch::~CustomDungeonSwitch(CustomDungeonSwitch *const this)
{
  CustomDungeonSwitch::~CustomDungeonSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 111: range 000000000CF35086-000000000CF350D3
void __cdecl CustomDungeonSwitch::~CustomDungeonSwitch(CustomDungeonSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CustomDungeonSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 112: range 000000000CEC662E-000000000CEC6686
bool __cdecl CustomDungeonId::isSwitchFeatureClosed(const CustomDungeonId *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id);
  }
  return feature_id == this->dungeon_id;
};

// Line 112: range 000000000CEC654E-000000000CEC662C
bool __cdecl CustomDungeonId::operator==(const CustomDungeonId *const this, const BaseSwitch *rhs)
{
  const CustomDungeonId *v2; // rax
  uint32_t *p_dungeon_id; // rax
  uint32_t dungeon_id; // ecx
  const CustomDungeonId *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const CustomDungeonId *)__dynamic_cast(
                                    rhs,
                                    (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                    (const struct __class_type_info *)&`typeinfo for'CustomDungeonId,
                                    0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_dungeon_id = &v2->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_dungeon_id);
  }
  dungeon_id = cls_ptr->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id);
  }
  return dungeon_id == this->dungeon_id;
};

// Line 112: range 000000000CEC6000-000000000CEC654C
int32_t __cdecl CustomDungeonId::parseFromJsonStr(CustomDungeonId *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:112 240 272 10 reader:112";
  *(_QWORD *)(v2 + 16) = CustomDungeonId::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      112);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "dungeon_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "dungeon_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        112);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "dungeon_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->dungeon_id);
      }
      this->dungeon_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 112: range 000000000CF28F76-000000000CF290B9
void __fastcall ZN15CustomDungeonIdCI210BaseSwitchEj(CustomDungeonId *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN15CustomDungeonIdCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'CustomDungeonId + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id);
  }
  this->dungeon_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 112: range 000000000CF3500C-000000000CF35059
void __cdecl CustomDungeonId::~CustomDungeonId(CustomDungeonId *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CustomDungeonId + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 112: range 000000000CF3505A-000000000CF35084
void __cdecl CustomDungeonId::~CustomDungeonId(CustomDungeonId *const this)
{
  CustomDungeonId::~CustomDungeonId(this);
  operator delete(this, 0x10uLL);
};

// Line 113: range 000000000CF291E6-000000000CF292E3
void __fastcall ZN10BattlePassCI210BaseSwitchEj(BattlePass *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN10BattlePassCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'BattlePass + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 113: range 000000000CF34FE0-000000000CF3500A
void __cdecl BattlePass::~BattlePass(BattlePass *const this)
{
  BattlePass::~BattlePass(this);
  operator delete(this, 0x10uLL);
};

// Line 113: range 000000000CF34F92-000000000CF34FDF
void __cdecl BattlePass::~BattlePass(BattlePass *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BattlePass + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 114: range 000000000CF29410-000000000CF2950D
void __fastcall ZN12PushPlatformCI210BaseSwitchEj(PushPlatform *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12PushPlatformCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'PushPlatform + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 114: range 000000000CF34F66-000000000CF34F90
void __cdecl PushPlatform::~PushPlatform(PushPlatform *const this)
{
  PushPlatform::~PushPlatform(this);
  operator delete(this, 0x10uLL);
};

// Line 114: range 000000000CF34F18-000000000CF34F65
void __cdecl PushPlatform::~PushPlatform(PushPlatform *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PushPlatform + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 115: range 000000000CEC6CB6-000000000CEC6D0E
bool __cdecl Recharge::isSwitchFeatureClosed(const Recharge *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id);
  }
  return feature_id == this->config_id;
};

// Line 115: range 000000000CEC6BD6-000000000CEC6CB4
bool __cdecl Recharge::operator==(const Recharge *const this, const BaseSwitch *rhs)
{
  const Recharge *v2; // rax
  uint32_t *p_config_id; // rax
  uint32_t config_id; // ecx
  const Recharge *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const Recharge *)__dynamic_cast(
                             rhs,
                             (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                             (const struct __class_type_info *)&`typeinfo for'Recharge,
                             0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_config_id = &v2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_config_id);
  }
  config_id = cls_ptr->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id);
  }
  return config_id == this->config_id;
};

// Line 115: range 000000000CEC6688-000000000CEC6BD4
int32_t __cdecl Recharge::parseFromJsonStr(Recharge *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:115 240 272 10 reader:115";
  *(_QWORD *)(v2 + 16) = Recharge::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      115);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "config_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "config_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        115);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "config_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->config_id);
      }
      this->config_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 115: range 000000000CF2963A-000000000CF2977D
void __fastcall ZN8RechargeCI210BaseSwitchEj(Recharge *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN8RechargeCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'Recharge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 115: range 000000000CF34EEC-000000000CF34F16
void __cdecl Recharge::~Recharge(Recharge *const this)
{
  Recharge::~Recharge(this);
  operator delete(this, 0x10uLL);
};

// Line 115: range 000000000CF34E9E-000000000CF34EEB
void __cdecl Recharge::~Recharge(Recharge *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Recharge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 116: range 000000000CF2A288-000000000CF2A385
void __fastcall ZN20ChangeGameTimeSwitchCI210BaseSwitchEj(ChangeGameTimeSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN20ChangeGameTimeSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'ChangeGameTimeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 116: range 000000000CF34E24-000000000CF34E71
void __cdecl ChangeGameTimeSwitch::~ChangeGameTimeSwitch(ChangeGameTimeSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChangeGameTimeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 116: range 000000000CF34E72-000000000CF34E9C
void __cdecl ChangeGameTimeSwitch::~ChangeGameTimeSwitch(ChangeGameTimeSwitch *const this)
{
  ChangeGameTimeSwitch::~ChangeGameTimeSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 117: range 000000000CEC7470-000000000CEC7515
bool __cdecl Shop::isSwitchFeatureClosed(const Shop *const this, uint32_t feature_id, uint32_t feature_id2)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shop_type);
  }
  if ( feature_id != this->shop_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->goods_id);
  }
  return feature_id2 == this->goods_id;
};

// Line 117: range 000000000CEC7308-000000000CEC746E
bool __cdecl Shop::operator==(const Shop *const this, const BaseSwitch *rhs)
{
  const Shop *v2; // rax
  uint32_t *p_shop_type; // rax
  uint32_t shop_type; // ecx
  uint32_t goods_id; // ecx
  const Shop *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const Shop *)__dynamic_cast(
                         rhs,
                         (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                         (const struct __class_type_info *)&`typeinfo for'Shop,
                         0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_shop_type = &v2->shop_type;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->shop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_shop_type);
  }
  shop_type = cls_ptr->shop_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shop_type);
  }
  if ( shop_type != this->shop_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cls_ptr->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cls_ptr->goods_id);
  }
  goods_id = cls_ptr->goods_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->goods_id);
  }
  return goods_id == this->goods_id;
};

// Line 117: range 000000000CEC6D10-000000000CEC7307
int32_t __cdecl Shop::parseFromJsonStr(Shop *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  Json::Value_0 *v9; // rax
  Json::Value_0 *v10; // rax
  common::milog::MiLogStream *v12; // rdx
  Json::Value *v13; // rax
  uint32_t v14; // ecx
  Json::Value *v15; // rax
  uint32_t v16; // edx
  int32_t result; // eax
  char v18[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:117 240 272 10 reader:117";
  *(_QWORD *)(v2 + 16) = Shop::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "shop_type");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "shop_type"), !Json::Value::isUInt(v8))
      || (v9 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "goods_id"), Json::Value::isNull(v9))
      || (v10 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "goods_id"), !Json::Value::isUInt(v10)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        117);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v13 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "shop_type");
      v14 = Json::Value::asUInt(v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->shop_type);
      }
      this->shop_type = v14;
      v15 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "goods_id");
      v16 = Json::Value::asUInt(v15);
      if ( *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->goods_id);
      }
      this->goods_id = v16;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 117: range 000000000CF2A4BC-000000000CF2A63D
void __fastcall ZN4ShopCI210BaseSwitchEj(Shop *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN4ShopCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'Shop + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shop_type);
  }
  this->shop_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->goods_id);
  }
  this->goods_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 117: range 000000000CF34DAA-000000000CF34DF7
void __cdecl Shop::~Shop(Shop *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Shop + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 117: range 000000000CF34DF8-000000000CF34E22
void __cdecl Shop::~Shop(Shop *const this)
{
  Shop::~Shop(this);
  operator delete(this, 0x18uLL);
};

// Line 118: range 000000000CEC7B44-000000000CEC7B9C
bool __cdecl DailyTask::isSwitchFeatureClosed(const DailyTask *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->task_id);
  }
  return feature_id == this->task_id;
};

// Line 118: range 000000000CEC7A64-000000000CEC7B42
bool __cdecl DailyTask::operator==(const DailyTask *const this, const BaseSwitch *rhs)
{
  const DailyTask *v2; // rax
  uint32_t *p_task_id; // rax
  uint32_t task_id; // ecx
  const DailyTask *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const DailyTask *)__dynamic_cast(
                              rhs,
                              (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                              (const struct __class_type_info *)&`typeinfo for'DailyTask,
                              0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_task_id = &v2->task_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_task_id);
  }
  task_id = cls_ptr->task_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->task_id);
  }
  return task_id == this->task_id;
};

// Line 118: range 000000000CEC7516-000000000CEC7A62
int32_t __cdecl DailyTask::parseFromJsonStr(DailyTask *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:118 240 272 10 reader:118";
  *(_QWORD *)(v2 + 16) = DailyTask::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      118);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "task_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "task_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        118);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "task_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->task_id);
      }
      this->task_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 118: range 000000000CF2A76A-000000000CF2A8AD
void __fastcall ZN9DailyTaskCI210BaseSwitchEj(DailyTask *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN9DailyTaskCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'DailyTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->task_id);
  }
  this->task_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 118: range 000000000CF34D7E-000000000CF34DA8
void __cdecl DailyTask::~DailyTask(DailyTask *const this)
{
  DailyTask::~DailyTask(this);
  operator delete(this, 0x10uLL);
};

// Line 118: range 000000000CF34D30-000000000CF34D7D
void __cdecl DailyTask::~DailyTask(DailyTask *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DailyTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 119: range 000000000CEC81CC-000000000CEC8224
bool __cdecl RandTask::isSwitchFeatureClosed(const RandTask *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->task_id);
  }
  return feature_id == this->task_id;
};

// Line 119: range 000000000CEC80EC-000000000CEC81CA
bool __cdecl RandTask::operator==(const RandTask *const this, const BaseSwitch *rhs)
{
  const RandTask *v2; // rax
  uint32_t *p_task_id; // rax
  uint32_t task_id; // ecx
  const RandTask *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const RandTask *)__dynamic_cast(
                             rhs,
                             (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                             (const struct __class_type_info *)&`typeinfo for'RandTask,
                             0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_task_id = &v2->task_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_task_id);
  }
  task_id = cls_ptr->task_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->task_id);
  }
  return task_id == this->task_id;
};

// Line 119: range 000000000CEC7B9E-000000000CEC80EA
int32_t __cdecl RandTask::parseFromJsonStr(RandTask *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:119 240 272 10 reader:119";
  *(_QWORD *)(v2 + 16) = RandTask::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      119);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "task_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "task_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        119);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "task_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->task_id);
      }
      this->task_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 119: range 000000000CF2A9DA-000000000CF2AB1D
void __fastcall ZN8RandTaskCI210BaseSwitchEj(RandTask *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN8RandTaskCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'RandTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->task_id);
  }
  this->task_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 119: range 000000000CF34D04-000000000CF34D2E
void __cdecl RandTask::~RandTask(RandTask *const this)
{
  RandTask::~RandTask(this);
  operator delete(this, 0x10uLL);
};

// Line 119: range 000000000CF34CB6-000000000CF34D03
void __cdecl RandTask::~RandTask(RandTask *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RandTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 120: range 000000000CEC8854-000000000CEC88AC
bool __cdecl ForgeSwitch::isSwitchFeatureClosed(const ForgeSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->forge_id);
  }
  return feature_id == this->forge_id;
};

// Line 120: range 000000000CEC8774-000000000CEC8852
bool __cdecl ForgeSwitch::operator==(const ForgeSwitch *const this, const BaseSwitch *rhs)
{
  const ForgeSwitch *v2; // rax
  uint32_t *p_forge_id; // rax
  uint32_t forge_id; // ecx
  const ForgeSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const ForgeSwitch *)__dynamic_cast(
                                rhs,
                                (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                (const struct __class_type_info *)&`typeinfo for'ForgeSwitch,
                                0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_forge_id = &v2->forge_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->forge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->forge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_forge_id);
  }
  forge_id = cls_ptr->forge_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->forge_id);
  }
  return forge_id == this->forge_id;
};

// Line 120: range 000000000CEC8226-000000000CEC8772
int32_t __cdecl ForgeSwitch::parseFromJsonStr(ForgeSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:120 240 272 10 reader:120";
  *(_QWORD *)(v2 + 16) = ForgeSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      120);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "forge_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "forge_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        120);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "forge_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->forge_id);
      }
      this->forge_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 120: range 000000000CF2AC4A-000000000CF2AD8D
void __fastcall ZN11ForgeSwitchCI210BaseSwitchEj(ForgeSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN11ForgeSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'ForgeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forge_id);
  }
  this->forge_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 120: range 000000000CF34C3C-000000000CF34C89
void __cdecl ForgeSwitch::~ForgeSwitch(ForgeSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ForgeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 120: range 000000000CF34C8A-000000000CF34CB4
void __cdecl ForgeSwitch::~ForgeSwitch(ForgeSwitch *const this)
{
  ForgeSwitch::~ForgeSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 121: range 000000000CEC8EDC-000000000CEC8F34
bool __cdecl CookSwitch::isSwitchFeatureClosed(const CookSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->recipe_id);
  }
  return feature_id == this->recipe_id;
};

// Line 121: range 000000000CEC8DFC-000000000CEC8EDA
bool __cdecl CookSwitch::operator==(const CookSwitch *const this, const BaseSwitch *rhs)
{
  const CookSwitch *v2; // rax
  uint32_t *p_recipe_id; // rax
  uint32_t recipe_id; // ecx
  const CookSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const CookSwitch *)__dynamic_cast(
                               rhs,
                               (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                               (const struct __class_type_info *)&`typeinfo for'CookSwitch,
                               0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_recipe_id = &v2->recipe_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->recipe_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->recipe_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_recipe_id);
  }
  recipe_id = cls_ptr->recipe_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->recipe_id);
  }
  return recipe_id == this->recipe_id;
};

// Line 121: range 000000000CEC88AE-000000000CEC8DFA
int32_t __cdecl CookSwitch::parseFromJsonStr(CookSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:121 240 272 10 reader:121";
  *(_QWORD *)(v2 + 16) = CookSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      121);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "recipe_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "recipe_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        121);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "recipe_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->recipe_id);
      }
      this->recipe_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 121: range 000000000CF2AEBA-000000000CF2AFFD
void __fastcall ZN10CookSwitchCI210BaseSwitchEj(CookSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN10CookSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'CookSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->recipe_id);
  }
  this->recipe_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 121: range 000000000CF34C10-000000000CF34C3A
void __cdecl CookSwitch::~CookSwitch(CookSwitch *const this)
{
  CookSwitch::~CookSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 121: range 000000000CF34BC2-000000000CF34C0F
void __cdecl CookSwitch::~CookSwitch(CookSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CookSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 122: range 000000000CEC9564-000000000CEC95BC
bool __cdecl CombineSwitch::isSwitchFeatureClosed(const CombineSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->combine_id);
  }
  return feature_id == this->combine_id;
};

// Line 122: range 000000000CEC9484-000000000CEC9562
bool __cdecl CombineSwitch::operator==(const CombineSwitch *const this, const BaseSwitch *rhs)
{
  const CombineSwitch *v2; // rax
  uint32_t *p_combine_id; // rax
  uint32_t combine_id; // ecx
  const CombineSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const CombineSwitch *)__dynamic_cast(
                                  rhs,
                                  (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                  (const struct __class_type_info *)&`typeinfo for'CombineSwitch,
                                  0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_combine_id = &v2->combine_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->combine_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->combine_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_combine_id);
  }
  combine_id = cls_ptr->combine_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->combine_id);
  }
  return combine_id == this->combine_id;
};

// Line 122: range 000000000CEC8F36-000000000CEC9482
int32_t __cdecl CombineSwitch::parseFromJsonStr(CombineSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:122 240 272 10 reader:122";
  *(_QWORD *)(v2 + 16) = CombineSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      122);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "combine_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "combine_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        122);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "combine_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->combine_id);
      }
      this->combine_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 122: range 000000000CF2B12A-000000000CF2B26D
void __fastcall ZN13CombineSwitchCI210BaseSwitchEj(CombineSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN13CombineSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'CombineSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combine_id);
  }
  this->combine_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 122: range 000000000CF34B48-000000000CF34B95
void __cdecl CombineSwitch::~CombineSwitch(CombineSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CombineSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 122: range 000000000CF34B96-000000000CF34BC0
void __cdecl CombineSwitch::~CombineSwitch(CombineSwitch *const this)
{
  CombineSwitch::~CombineSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 123: range 000000000CEC9BEC-000000000CEC9C44
bool __cdecl WeaponSwitch::isSwitchFeatureClosed(const WeaponSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->weapon_id);
  }
  return feature_id == this->weapon_id;
};

// Line 123: range 000000000CEC9B0C-000000000CEC9BEA
bool __cdecl WeaponSwitch::operator==(const WeaponSwitch *const this, const BaseSwitch *rhs)
{
  const WeaponSwitch *v2; // rax
  uint32_t *p_weapon_id; // rax
  uint32_t weapon_id; // ecx
  const WeaponSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const WeaponSwitch *)__dynamic_cast(
                                 rhs,
                                 (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                 (const struct __class_type_info *)&`typeinfo for'WeaponSwitch,
                                 0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_weapon_id = &v2->weapon_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->weapon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->weapon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_weapon_id);
  }
  weapon_id = cls_ptr->weapon_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->weapon_id);
  }
  return weapon_id == this->weapon_id;
};

// Line 123: range 000000000CEC95BE-000000000CEC9B0A
int32_t __cdecl WeaponSwitch::parseFromJsonStr(WeaponSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:123 240 272 10 reader:123";
  *(_QWORD *)(v2 + 16) = WeaponSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      123);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "weapon_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "weapon_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        123);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "weapon_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->weapon_id);
      }
      this->weapon_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 123: range 000000000CF2B39A-000000000CF2B4DD
void __fastcall ZN12WeaponSwitchCI210BaseSwitchEj(WeaponSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12WeaponSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'WeaponSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weapon_id);
  }
  this->weapon_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 123: range 000000000CF34B1C-000000000CF34B46
void __cdecl WeaponSwitch::~WeaponSwitch(WeaponSwitch *const this)
{
  WeaponSwitch::~WeaponSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 123: range 000000000CF34ACE-000000000CF34B1B
void __cdecl WeaponSwitch::~WeaponSwitch(WeaponSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'WeaponSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 124: range 000000000CECA274-000000000CECA2CC
bool __cdecl ReliquarySwitch::isSwitchFeatureClosed(const ReliquarySwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->reliquary_id);
  }
  return feature_id == this->reliquary_id;
};

// Line 124: range 000000000CECA194-000000000CECA272
bool __cdecl ReliquarySwitch::operator==(const ReliquarySwitch *const this, const BaseSwitch *rhs)
{
  const ReliquarySwitch *v2; // rax
  uint32_t *p_reliquary_id; // rax
  uint32_t reliquary_id; // ecx
  const ReliquarySwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const ReliquarySwitch *)__dynamic_cast(
                                    rhs,
                                    (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                    (const struct __class_type_info *)&`typeinfo for'ReliquarySwitch,
                                    0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_reliquary_id = &v2->reliquary_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->reliquary_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->reliquary_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_reliquary_id);
  }
  reliquary_id = cls_ptr->reliquary_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->reliquary_id);
  }
  return reliquary_id == this->reliquary_id;
};

// Line 124: range 000000000CEC9C46-000000000CECA192
int32_t __cdecl ReliquarySwitch::parseFromJsonStr(ReliquarySwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:124 240 272 10 reader:124";
  *(_QWORD *)(v2 + 16) = ReliquarySwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      124);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "reliquary_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "reliquary_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        124);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "reliquary_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->reliquary_id);
      }
      this->reliquary_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 124: range 000000000CF2B60A-000000000CF2B74D
void __fastcall ZN15ReliquarySwitchCI210BaseSwitchEj(ReliquarySwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN15ReliquarySwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'ReliquarySwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reliquary_id);
  }
  this->reliquary_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 124: range 000000000CF34A54-000000000CF34AA1
void __cdecl ReliquarySwitch::~ReliquarySwitch(ReliquarySwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReliquarySwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 124: range 000000000CF34AA2-000000000CF34ACC
void __cdecl ReliquarySwitch::~ReliquarySwitch(ReliquarySwitch *const this)
{
  ReliquarySwitch::~ReliquarySwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 125: range 000000000CECA8FC-000000000CECA954
bool __cdecl ItemSwitch::isSwitchFeatureClosed(const ItemSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->item_id);
  }
  return feature_id == this->item_id;
};

// Line 125: range 000000000CECA81C-000000000CECA8FA
bool __cdecl ItemSwitch::operator==(const ItemSwitch *const this, const BaseSwitch *rhs)
{
  const ItemSwitch *v2; // rax
  uint32_t *p_item_id; // rax
  uint32_t item_id; // ecx
  const ItemSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const ItemSwitch *)__dynamic_cast(
                               rhs,
                               (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                               (const struct __class_type_info *)&`typeinfo for'ItemSwitch,
                               0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_item_id = &v2->item_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_item_id);
  }
  item_id = cls_ptr->item_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->item_id);
  }
  return item_id == this->item_id;
};

// Line 125: range 000000000CECA2CE-000000000CECA81A
int32_t __cdecl ItemSwitch::parseFromJsonStr(ItemSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:125 240 272 10 reader:125";
  *(_QWORD *)(v2 + 16) = ItemSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      125);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "item_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "item_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        125);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "item_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->item_id);
      }
      this->item_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 125: range 000000000CF2B87A-000000000CF2B9BD
void __fastcall ZN10ItemSwitchCI210BaseSwitchEj(ItemSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN10ItemSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'ItemSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_id);
  }
  this->item_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 125: range 000000000CF34A28-000000000CF34A52
void __cdecl ItemSwitch::~ItemSwitch(ItemSwitch *const this)
{
  ItemSwitch::~ItemSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 125: range 000000000CF349DA-000000000CF34A27
void __cdecl ItemSwitch::~ItemSwitch(ItemSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ItemSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 126: range 000000000CECAF84-000000000CECAFDC
bool __cdecl AvatarSwitch::isSwitchFeatureClosed(const AvatarSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->avatar_id);
  }
  return feature_id == this->avatar_id;
};

// Line 126: range 000000000CECAEA4-000000000CECAF82
bool __cdecl AvatarSwitch::operator==(const AvatarSwitch *const this, const BaseSwitch *rhs)
{
  const AvatarSwitch *v2; // rax
  uint32_t *p_avatar_id; // rax
  uint32_t avatar_id; // ecx
  const AvatarSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const AvatarSwitch *)__dynamic_cast(
                                 rhs,
                                 (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                 (const struct __class_type_info *)&`typeinfo for'AvatarSwitch,
                                 0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_avatar_id = &v2->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_avatar_id);
  }
  avatar_id = cls_ptr->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->avatar_id);
  }
  return avatar_id == this->avatar_id;
};

// Line 126: range 000000000CECA956-000000000CECAEA2
int32_t __cdecl AvatarSwitch::parseFromJsonStr(AvatarSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:126 240 272 10 reader:126";
  *(_QWORD *)(v2 + 16) = AvatarSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      126);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "avatar_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "avatar_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        126);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "avatar_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->avatar_id);
      }
      this->avatar_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 126: range 000000000CF2BAEA-000000000CF2BC2D
void __fastcall ZN12AvatarSwitchCI210BaseSwitchEj(AvatarSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12AvatarSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'AvatarSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_id);
  }
  this->avatar_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 126: range 000000000CF349AE-000000000CF349D8
void __cdecl AvatarSwitch::~AvatarSwitch(AvatarSwitch *const this)
{
  AvatarSwitch::~AvatarSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 126: range 000000000CF34960-000000000CF349AD
void __cdecl AvatarSwitch::~AvatarSwitch(AvatarSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AvatarSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 127: range 000000000CECB73E-000000000CECB7E3
bool __cdecl CityReputationSwitch::isSwitchFeatureClosed(
        const CityReputationSwitch *const this,
        uint32_t feature_id,
        uint32_t feature_id2)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->city_id);
  }
  if ( feature_id != this->city_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entrance_id);
  }
  return feature_id2 == this->entrance_id;
};

// Line 127: range 000000000CECB5D6-000000000CECB73C
bool __cdecl CityReputationSwitch::operator==(const CityReputationSwitch *const this, const BaseSwitch *rhs)
{
  const CityReputationSwitch *v2; // rax
  uint32_t *p_city_id; // rax
  uint32_t city_id; // ecx
  uint32_t entrance_id; // ecx
  const CityReputationSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const CityReputationSwitch *)__dynamic_cast(
                                         rhs,
                                         (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                         (const struct __class_type_info *)&`typeinfo for'CityReputationSwitch,
                                         0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_city_id = &v2->city_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_city_id);
  }
  city_id = cls_ptr->city_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->city_id);
  }
  if ( city_id != this->city_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->entrance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cls_ptr->entrance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cls_ptr->entrance_id);
  }
  entrance_id = cls_ptr->entrance_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entrance_id);
  }
  return entrance_id == this->entrance_id;
};

// Line 127: range 000000000CECAFDE-000000000CECB5D5
int32_t __cdecl CityReputationSwitch::parseFromJsonStr(CityReputationSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  Json::Value_0 *v9; // rax
  Json::Value_0 *v10; // rax
  common::milog::MiLogStream *v12; // rdx
  Json::Value *v13; // rax
  uint32_t v14; // ecx
  Json::Value *v15; // rax
  uint32_t v16; // edx
  int32_t result; // eax
  char v18[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:127 240 272 10 reader:127";
  *(_QWORD *)(v2 + 16) = CityReputationSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      127);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "city_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "city_id"), !Json::Value::isUInt(v8))
      || (v9 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "entrance_id"), Json::Value::isNull(v9))
      || (v10 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "entrance_id"), !Json::Value::isUInt(v10)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        127);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v13 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "city_id");
      v14 = Json::Value::asUInt(v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->city_id);
      }
      this->city_id = v14;
      v15 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "entrance_id");
      v16 = Json::Value::asUInt(v15);
      if ( *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->entrance_id);
      }
      this->entrance_id = v16;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 127: range 000000000CF2BD64-000000000CF2BEE5
void __fastcall ZN20CityReputationSwitchCI210BaseSwitchEj(CityReputationSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN20CityReputationSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'CityReputationSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->city_id);
  }
  this->city_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entrance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entrance_id);
  }
  this->entrance_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 127: range 000000000CF34934-000000000CF3495E
void __cdecl CityReputationSwitch::~CityReputationSwitch(CityReputationSwitch *const this)
{
  CityReputationSwitch::~CityReputationSwitch(this);
  operator delete(this, 0x18uLL);
};

// Line 127: range 000000000CF348E6-000000000CF34933
void __cdecl CityReputationSwitch::~CityReputationSwitch(CityReputationSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CityReputationSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 128: range 000000000CECBE12-000000000CECBE6A
bool __cdecl MpPlaySwitch::isSwitchFeatureClosed(const MpPlaySwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->play_id);
  }
  return feature_id == this->play_id;
};

// Line 128: range 000000000CECBD32-000000000CECBE10
bool __cdecl MpPlaySwitch::operator==(const MpPlaySwitch *const this, const BaseSwitch *rhs)
{
  const MpPlaySwitch *v2; // rax
  uint32_t *p_play_id; // rax
  uint32_t play_id; // ecx
  const MpPlaySwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const MpPlaySwitch *)__dynamic_cast(
                                 rhs,
                                 (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                 (const struct __class_type_info *)&`typeinfo for'MpPlaySwitch,
                                 0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_play_id = &v2->play_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->play_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->play_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_play_id);
  }
  play_id = cls_ptr->play_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->play_id);
  }
  return play_id == this->play_id;
};

// Line 128: range 000000000CECB7E4-000000000CECBD30
int32_t __cdecl MpPlaySwitch::parseFromJsonStr(MpPlaySwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:128 240 272 10 reader:128";
  *(_QWORD *)(v2 + 16) = MpPlaySwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      128);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "play_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "play_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        128);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "play_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->play_id);
      }
      this->play_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 128: range 000000000CF2C012-000000000CF2C155
void __fastcall ZN12MpPlaySwitchCI210BaseSwitchEj(MpPlaySwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12MpPlaySwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'MpPlaySwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->play_id);
  }
  this->play_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 128: range 000000000CF3486C-000000000CF348B9
void __cdecl MpPlaySwitch::~MpPlaySwitch(MpPlaySwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MpPlaySwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 128: range 000000000CF348BA-000000000CF348E4
void __cdecl MpPlaySwitch::~MpPlaySwitch(MpPlaySwitch *const this)
{
  MpPlaySwitch::~MpPlaySwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 129: range 000000000CF2C282-000000000CF2C37F
void __fastcall ZN16SightGroupSwitchCI210BaseSwitchEj(SightGroupSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN16SightGroupSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'SightGroupSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 129: range 000000000CF34840-000000000CF3486A
void __cdecl SightGroupSwitch::~SightGroupSwitch(SightGroupSwitch *const this)
{
  SightGroupSwitch::~SightGroupSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 129: range 000000000CF347F2-000000000CF3483F
void __cdecl SightGroupSwitch::~SightGroupSwitch(SightGroupSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SightGroupSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 130: range 000000000CF2C4AC-000000000CF2C5A9
void __fastcall ZN20NotifyEyePointSwitchCI210BaseSwitchEj(NotifyEyePointSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN20NotifyEyePointSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'NotifyEyePointSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 130: range 000000000CF347C6-000000000CF347F0
void __cdecl NotifyEyePointSwitch::~NotifyEyePointSwitch(NotifyEyePointSwitch *const this)
{
  NotifyEyePointSwitch::~NotifyEyePointSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 130: range 000000000CF34778-000000000CF347C5
void __cdecl NotifyEyePointSwitch::~NotifyEyePointSwitch(NotifyEyePointSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NotifyEyePointSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 131: range 000000000CF2C6D6-000000000CF2C7D3
void __fastcall ZN19EyePointAsEyeSwitchCI210BaseSwitchEj(EyePointAsEyeSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN19EyePointAsEyeSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'EyePointAsEyeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 131: range 000000000CF346FE-000000000CF3474B
void __cdecl EyePointAsEyeSwitch::~EyePointAsEyeSwitch(EyePointAsEyeSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EyePointAsEyeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 131: range 000000000CF3474C-000000000CF34776
void __cdecl EyePointAsEyeSwitch::~EyePointAsEyeSwitch(EyePointAsEyeSwitch *const this)
{
  EyePointAsEyeSwitch::~EyePointAsEyeSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 132: range 000000000CF2C900-000000000CF2C9FD
void __fastcall ZN21GroupVisionTypeSwitchCI210BaseSwitchEj(GroupVisionTypeSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN21GroupVisionTypeSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'GroupVisionTypeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 132: range 000000000CF346D2-000000000CF346FC
void __cdecl GroupVisionTypeSwitch::~GroupVisionTypeSwitch(GroupVisionTypeSwitch *const this)
{
  GroupVisionTypeSwitch::~GroupVisionTypeSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 132: range 000000000CF34684-000000000CF346D1
void __cdecl GroupVisionTypeSwitch::~GroupVisionTypeSwitch(GroupVisionTypeSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GroupVisionTypeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 133: range 000000000CECC49A-000000000CECC4F2
bool __cdecl OfferingSwitch::isSwitchFeatureClosed(const OfferingSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->offering_id);
  }
  return feature_id == this->offering_id;
};

// Line 133: range 000000000CECC3BA-000000000CECC498
bool __cdecl OfferingSwitch::operator==(const OfferingSwitch *const this, const BaseSwitch *rhs)
{
  const OfferingSwitch *v2; // rax
  uint32_t *p_offering_id; // rax
  uint32_t offering_id; // ecx
  const OfferingSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const OfferingSwitch *)__dynamic_cast(
                                   rhs,
                                   (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                   (const struct __class_type_info *)&`typeinfo for'OfferingSwitch,
                                   0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_offering_id = &v2->offering_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->offering_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->offering_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_offering_id);
  }
  offering_id = cls_ptr->offering_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->offering_id);
  }
  return offering_id == this->offering_id;
};

// Line 133: range 000000000CECBE6C-000000000CECC3B8
int32_t __cdecl OfferingSwitch::parseFromJsonStr(OfferingSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:133 240 272 10 reader:133";
  *(_QWORD *)(v2 + 16) = OfferingSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      133);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "offering_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "offering_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        133);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "offering_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->offering_id);
      }
      this->offering_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 133: range 000000000CF2CB2A-000000000CF2CC6D
void __fastcall ZN14OfferingSwitchCI210BaseSwitchEj(OfferingSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN14OfferingSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'OfferingSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->offering_id);
  }
  this->offering_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 133: range 000000000CF34658-000000000CF34682
void __cdecl OfferingSwitch::~OfferingSwitch(OfferingSwitch *const this)
{
  OfferingSwitch::~OfferingSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 133: range 000000000CF3460A-000000000CF34657
void __cdecl OfferingSwitch::~OfferingSwitch(OfferingSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OfferingSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 134: range 000000000CECCB22-000000000CECCB7A
bool __cdecl RoutineSwitch::isSwitchFeatureClosed(const RoutineSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->routine_id);
  }
  return feature_id == this->routine_id;
};

// Line 134: range 000000000CECCA42-000000000CECCB20
bool __cdecl RoutineSwitch::operator==(const RoutineSwitch *const this, const BaseSwitch *rhs)
{
  const RoutineSwitch *v2; // rax
  uint32_t *p_routine_id; // rax
  uint32_t routine_id; // ecx
  const RoutineSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const RoutineSwitch *)__dynamic_cast(
                                  rhs,
                                  (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                  (const struct __class_type_info *)&`typeinfo for'RoutineSwitch,
                                  0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_routine_id = &v2->routine_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->routine_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->routine_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_routine_id);
  }
  routine_id = cls_ptr->routine_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->routine_id);
  }
  return routine_id == this->routine_id;
};

// Line 134: range 000000000CECC4F4-000000000CECCA40
int32_t __cdecl RoutineSwitch::parseFromJsonStr(RoutineSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:134 240 272 10 reader:134";
  *(_QWORD *)(v2 + 16) = RoutineSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      134);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "routine_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "routine_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        134);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "routine_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->routine_id);
      }
      this->routine_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 134: range 000000000CF2CD9A-000000000CF2CEDD
void __fastcall ZN13RoutineSwitchCI210BaseSwitchEj(RoutineSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN13RoutineSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'RoutineSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->routine_id);
  }
  this->routine_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 134: range 000000000CF34590-000000000CF345DD
void __cdecl RoutineSwitch::~RoutineSwitch(RoutineSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RoutineSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 134: range 000000000CF345DE-000000000CF34608
void __cdecl RoutineSwitch::~RoutineSwitch(RoutineSwitch *const this)
{
  RoutineSwitch::~RoutineSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 135: range 000000000CECD1AA-000000000CECD202
bool __cdecl ActivitySaleSwitch::isSwitchFeatureClosed(const ActivitySaleSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sale_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sale_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sale_id);
  }
  return feature_id == this->sale_id;
};

// Line 135: range 000000000CECD0CA-000000000CECD1A8
bool __cdecl ActivitySaleSwitch::operator==(const ActivitySaleSwitch *const this, const BaseSwitch *rhs)
{
  const ActivitySaleSwitch *v2; // rax
  uint32_t *p_sale_id; // rax
  uint32_t sale_id; // ecx
  const ActivitySaleSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const ActivitySaleSwitch *)__dynamic_cast(
                                       rhs,
                                       (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                       (const struct __class_type_info *)&`typeinfo for'ActivitySaleSwitch,
                                       0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_sale_id = &v2->sale_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->sale_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->sale_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_sale_id);
  }
  sale_id = cls_ptr->sale_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->sale_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sale_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sale_id);
  }
  return sale_id == this->sale_id;
};

// Line 135: range 000000000CECCB7C-000000000CECD0C8
int32_t __cdecl ActivitySaleSwitch::parseFromJsonStr(ActivitySaleSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:135 240 272 10 reader:135";
  *(_QWORD *)(v2 + 16) = ActivitySaleSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      135);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "sale_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "sale_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        135);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "sale_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->sale_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sale_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->sale_id);
      }
      this->sale_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 135: range 000000000CF2D29A-000000000CF2D3DD
void __fastcall ZN18ActivitySaleSwitchCI210BaseSwitchEj(ActivitySaleSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN18ActivitySaleSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'ActivitySaleSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->sale_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sale_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sale_id);
  }
  this->sale_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 135: range 000000000CF34564-000000000CF3458E
void __cdecl ActivitySaleSwitch::~ActivitySaleSwitch(ActivitySaleSwitch *const this)
{
  ActivitySaleSwitch::~ActivitySaleSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 135: range 000000000CF34516-000000000CF34563
void __cdecl ActivitySaleSwitch::~ActivitySaleSwitch(ActivitySaleSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivitySaleSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 136: range 000000000CF2D50A-000000000CF2D607
void __fastcall ZN16MechanicusSwitchCI210BaseSwitchEj(MechanicusSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN16MechanicusSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'MechanicusSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 136: range 000000000CF344EA-000000000CF34514
void __cdecl MechanicusSwitch::~MechanicusSwitch(MechanicusSwitch *const this)
{
  MechanicusSwitch::~MechanicusSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 136: range 000000000CF3449C-000000000CF344E9
void __cdecl MechanicusSwitch::~MechanicusSwitch(MechanicusSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MechanicusSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 137: range 000000000CF2D734-000000000CF2D831
void __fastcall ZN22MechanicusPunishSwitchCI210BaseSwitchEj(MechanicusPunishSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN22MechanicusPunishSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'MechanicusPunishSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 137: range 000000000CF34470-000000000CF3449A
void __cdecl MechanicusPunishSwitch::~MechanicusPunishSwitch(MechanicusPunishSwitch *const this)
{
  MechanicusPunishSwitch::~MechanicusPunishSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 137: range 000000000CF34422-000000000CF3446F
void __cdecl MechanicusPunishSwitch::~MechanicusPunishSwitch(MechanicusPunishSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MechanicusPunishSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 138: range 000000000CF2D95E-000000000CF2DA5B
void __fastcall ZN22WorldLevelAdjustSwitchCI210BaseSwitchEj(WorldLevelAdjustSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN22WorldLevelAdjustSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'WorldLevelAdjustSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 138: range 000000000CF343A8-000000000CF343F5
void __cdecl WorldLevelAdjustSwitch::~WorldLevelAdjustSwitch(WorldLevelAdjustSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'WorldLevelAdjustSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 138: range 000000000CF343F6-000000000CF34420
void __cdecl WorldLevelAdjustSwitch::~WorldLevelAdjustSwitch(WorldLevelAdjustSwitch *const this)
{
  WorldLevelAdjustSwitch::~WorldLevelAdjustSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 139: range 000000000CF2DB88-000000000CF2DC85
void __fastcall ZN20EnterHomeWorldSwitchCI210BaseSwitchEj(EnterHomeWorldSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN20EnterHomeWorldSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'EnterHomeWorldSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 139: range 000000000CF3437C-000000000CF343A6
void __cdecl EnterHomeWorldSwitch::~EnterHomeWorldSwitch(EnterHomeWorldSwitch *const this)
{
  EnterHomeWorldSwitch::~EnterHomeWorldSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 139: range 000000000CF3432E-000000000CF3437B
void __cdecl EnterHomeWorldSwitch::~EnterHomeWorldSwitch(EnterHomeWorldSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EnterHomeWorldSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 140: range 000000000CF2DDB2-000000000CF2DEAF
void __fastcall ZN12HomeMpSwitchCI210BaseSwitchEj(HomeMpSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12HomeMpSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'HomeMpSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 140: range 000000000CF34302-000000000CF3432C
void __cdecl HomeMpSwitch::~HomeMpSwitch(HomeMpSwitch *const this)
{
  HomeMpSwitch::~HomeMpSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 140: range 000000000CF342B4-000000000CF34301
void __cdecl HomeMpSwitch::~HomeMpSwitch(HomeMpSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeMpSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 141: range 000000000CF2DFDC-000000000CF2E0D9
void __fastcall ZN18HomeEditModeSwitchCI210BaseSwitchEj(HomeEditModeSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN18HomeEditModeSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'HomeEditModeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 141: range 000000000CF34288-000000000CF342B2
void __cdecl HomeEditModeSwitch::~HomeEditModeSwitch(HomeEditModeSwitch *const this)
{
  HomeEditModeSwitch::~HomeEditModeSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 141: range 000000000CF3423A-000000000CF34287
void __cdecl HomeEditModeSwitch::~HomeEditModeSwitch(HomeEditModeSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeEditModeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 142: range 000000000CECD832-000000000CECD88A
bool __cdecl HomeModuleSwitch::isSwitchFeatureClosed(const HomeModuleSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->home_module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->home_module_id);
  }
  return feature_id == this->home_module_id;
};

// Line 142: range 000000000CECD752-000000000CECD830
bool __cdecl HomeModuleSwitch::operator==(const HomeModuleSwitch *const this, const BaseSwitch *rhs)
{
  const HomeModuleSwitch *v2; // rax
  uint32_t *p_home_module_id; // rax
  uint32_t home_module_id; // ecx
  const HomeModuleSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const HomeModuleSwitch *)__dynamic_cast(
                                     rhs,
                                     (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                     (const struct __class_type_info *)&`typeinfo for'HomeModuleSwitch,
                                     0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_home_module_id = &v2->home_module_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->home_module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->home_module_id >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(p_home_module_id);
  }
  home_module_id = cls_ptr->home_module_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->home_module_id);
  }
  return home_module_id == this->home_module_id;
};

// Line 142: range 000000000CECD204-000000000CECD750
int32_t __cdecl HomeModuleSwitch::parseFromJsonStr(HomeModuleSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:142 240 272 10 reader:142";
  *(_QWORD *)(v2 + 16) = HomeModuleSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      142);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "home_module_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "home_module_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        142);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "home_module_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_module_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_module_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->home_module_id);
      }
      this->home_module_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000CF2E206-000000000CF2E349
void __fastcall ZN16HomeModuleSwitchCI210BaseSwitchEj(HomeModuleSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN16HomeModuleSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'HomeModuleSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_module_id);
  }
  this->home_module_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 142: range 000000000CF3420E-000000000CF34238
void __cdecl HomeModuleSwitch::~HomeModuleSwitch(HomeModuleSwitch *const this)
{
  HomeModuleSwitch::~HomeModuleSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 142: range 000000000CF341C0-000000000CF3420D
void __cdecl HomeModuleSwitch::~HomeModuleSwitch(HomeModuleSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeModuleSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 143: range 000000000CECDEBA-000000000CECDF12
bool __cdecl HomeFurnitureMakeSwitch::isSwitchFeatureClosed(
        const HomeFurnitureMakeSwitch *const this,
        uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->furniture_id);
  }
  return feature_id == this->furniture_id;
};

// Line 143: range 000000000CECDDDA-000000000CECDEB8
bool __cdecl HomeFurnitureMakeSwitch::operator==(const HomeFurnitureMakeSwitch *const this, const BaseSwitch *rhs)
{
  const HomeFurnitureMakeSwitch *v2; // rax
  uint32_t *p_furniture_id; // rax
  uint32_t furniture_id; // ecx
  const HomeFurnitureMakeSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const HomeFurnitureMakeSwitch *)__dynamic_cast(
                                            rhs,
                                            (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                            (const struct __class_type_info *)&`typeinfo for'HomeFurnitureMakeSwitch,
                                            0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_furniture_id = &v2->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_furniture_id);
  }
  furniture_id = cls_ptr->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->furniture_id);
  }
  return furniture_id == this->furniture_id;
};

// Line 143: range 000000000CECD88C-000000000CECDDD8
int32_t __cdecl HomeFurnitureMakeSwitch::parseFromJsonStr(HomeFurnitureMakeSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:143 240 272 10 reader:143";
  *(_QWORD *)(v2 + 16) = HomeFurnitureMakeSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      143);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "furniture_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "furniture_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        143);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "furniture_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->furniture_id);
      }
      this->furniture_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 143: range 000000000CF2E476-000000000CF2E5B9
void __fastcall ZN23HomeFurnitureMakeSwitchCI210BaseSwitchEj(HomeFurnitureMakeSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN23HomeFurnitureMakeSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'HomeFurnitureMakeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 143: range 000000000CF34146-000000000CF34193
void __cdecl HomeFurnitureMakeSwitch::~HomeFurnitureMakeSwitch(HomeFurnitureMakeSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeFurnitureMakeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 143: range 000000000CF34194-000000000CF341BE
void __cdecl HomeFurnitureMakeSwitch::~HomeFurnitureMakeSwitch(HomeFurnitureMakeSwitch *const this)
{
  HomeFurnitureMakeSwitch::~HomeFurnitureMakeSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 144: range 000000000CECE542-000000000CECE59A
bool __cdecl HomeLimitedShop::isSwitchFeatureClosed(const HomeLimitedShop *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->goods_id);
  }
  return feature_id == this->goods_id;
};

// Line 144: range 000000000CECE462-000000000CECE540
bool __cdecl HomeLimitedShop::operator==(const HomeLimitedShop *const this, const BaseSwitch *rhs)
{
  const HomeLimitedShop *v2; // rax
  uint32_t *p_goods_id; // rax
  uint32_t goods_id; // ecx
  const HomeLimitedShop *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const HomeLimitedShop *)__dynamic_cast(
                                    rhs,
                                    (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                    (const struct __class_type_info *)&`typeinfo for'HomeLimitedShop,
                                    0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_goods_id = &v2->goods_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->goods_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->goods_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_goods_id);
  }
  goods_id = cls_ptr->goods_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->goods_id);
  }
  return goods_id == this->goods_id;
};

// Line 144: range 000000000CECDF14-000000000CECE460
int32_t __cdecl HomeLimitedShop::parseFromJsonStr(HomeLimitedShop *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:144 240 272 10 reader:144";
  *(_QWORD *)(v2 + 16) = HomeLimitedShop::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      144);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "goods_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "goods_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        144);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "goods_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->goods_id);
      }
      this->goods_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 144: range 000000000CF2E6E6-000000000CF2E829
void __fastcall ZN15HomeLimitedShopCI210BaseSwitchEj(HomeLimitedShop *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN15HomeLimitedShopCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'HomeLimitedShop + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->goods_id);
  }
  this->goods_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 144: range 000000000CF340CC-000000000CF34119
void __cdecl HomeLimitedShop::~HomeLimitedShop(HomeLimitedShop *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeLimitedShop + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 144: range 000000000CF3411A-000000000CF34144
void __cdecl HomeLimitedShop::~HomeLimitedShop(HomeLimitedShop *const this)
{
  HomeLimitedShop::~HomeLimitedShop(this);
  operator delete(this, 0x10uLL);
};

// Line 145: range 000000000CECEBCA-000000000CECEC22
bool __cdecl GadgetInteractSwitch::isSwitchFeatureClosed(const GadgetInteractSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gadget_id);
  }
  return feature_id == this->gadget_id;
};

// Line 145: range 000000000CECEAEA-000000000CECEBC8
bool __cdecl GadgetInteractSwitch::operator==(const GadgetInteractSwitch *const this, const BaseSwitch *rhs)
{
  const GadgetInteractSwitch *v2; // rax
  uint32_t *p_gadget_id; // rax
  uint32_t gadget_id; // ecx
  const GadgetInteractSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const GadgetInteractSwitch *)__dynamic_cast(
                                         rhs,
                                         (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                         (const struct __class_type_info *)&`typeinfo for'GadgetInteractSwitch,
                                         0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_gadget_id = &v2->gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_gadget_id);
  }
  gadget_id = cls_ptr->gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gadget_id);
  }
  return gadget_id == this->gadget_id;
};

// Line 145: range 000000000CECE59C-000000000CECEAE8
int32_t __cdecl GadgetInteractSwitch::parseFromJsonStr(GadgetInteractSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:145 240 272 10 reader:145";
  *(_QWORD *)(v2 + 16) = GadgetInteractSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      145);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "gadget_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "gadget_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        145);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "gadget_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->gadget_id);
      }
      this->gadget_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 145: range 000000000CF2E956-000000000CF2EA99
void __fastcall ZN20GadgetInteractSwitchCI210BaseSwitchEj(GadgetInteractSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN20GadgetInteractSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'GadgetInteractSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id);
  }
  this->gadget_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 145: range 000000000CF34052-000000000CF3409F
void __cdecl GadgetInteractSwitch::~GadgetInteractSwitch(GadgetInteractSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetInteractSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 145: range 000000000CF340A0-000000000CF340CA
void __cdecl GadgetInteractSwitch::~GadgetInteractSwitch(GadgetInteractSwitch *const this)
{
  GadgetInteractSwitch::~GadgetInteractSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 146: range 000000000CF2EBC6-000000000CF2ECC3
void __fastcall ZN17ReunionMarkSwitchCI210BaseSwitchEj(ReunionMarkSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN17ReunionMarkSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'ReunionMarkSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 146: range 000000000CF33FD8-000000000CF34025
void __cdecl ReunionMarkSwitch::~ReunionMarkSwitch(ReunionMarkSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReunionMarkSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 146: range 000000000CF34026-000000000CF34050
void __cdecl ReunionMarkSwitch::~ReunionMarkSwitch(ReunionMarkSwitch *const this)
{
  ReunionMarkSwitch::~ReunionMarkSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 147: range 000000000CECF252-000000000CECF2AA
bool __cdecl RandomQuestTemplateSwitch::isSwitchFeatureClosed(
        const RandomQuestTemplateSwitch *const this,
        uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->template_id);
  }
  return feature_id == this->template_id;
};

// Line 147: range 000000000CECF172-000000000CECF250
bool __cdecl RandomQuestTemplateSwitch::operator==(const RandomQuestTemplateSwitch *const this, const BaseSwitch *rhs)
{
  const RandomQuestTemplateSwitch *v2; // rax
  uint32_t *p_template_id; // rax
  uint32_t template_id; // ecx
  const RandomQuestTemplateSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const RandomQuestTemplateSwitch *)__dynamic_cast(
                                              rhs,
                                              (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                              (const struct __class_type_info *)&`typeinfo for'RandomQuestTemplateSwitch,
                                              0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_template_id = &v2->template_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->template_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->template_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_template_id);
  }
  template_id = cls_ptr->template_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->template_id);
  }
  return template_id == this->template_id;
};

// Line 147: range 000000000CECEC24-000000000CECF170
int32_t __cdecl RandomQuestTemplateSwitch::parseFromJsonStr(
        RandomQuestTemplateSwitch *const this,
        const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:147 240 272 10 reader:147";
  *(_QWORD *)(v2 + 16) = RandomQuestTemplateSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      147);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "template_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "template_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        147);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "template_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->template_id);
      }
      this->template_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 147: range 000000000CF2EDF0-000000000CF2EF33
void __fastcall ZN25RandomQuestTemplateSwitchCI210BaseSwitchEj(RandomQuestTemplateSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN25RandomQuestTemplateSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'RandomQuestTemplateSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->template_id);
  }
  this->template_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 147: range 000000000CF33FAC-000000000CF33FD6
void __cdecl RandomQuestTemplateSwitch::~RandomQuestTemplateSwitch(RandomQuestTemplateSwitch *const this)
{
  RandomQuestTemplateSwitch::~RandomQuestTemplateSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 147: range 000000000CF33F5E-000000000CF33FAB
void __cdecl RandomQuestTemplateSwitch::~RandomQuestTemplateSwitch(RandomQuestTemplateSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RandomQuestTemplateSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 148: range 000000000CF2F060-000000000CF2F15D
void __fastcall ZN24MinorsRechargeHintSwitchCI210BaseSwitchEj(MinorsRechargeHintSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN24MinorsRechargeHintSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'MinorsRechargeHintSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 148: range 000000000CF33F32-000000000CF33F5C
void __cdecl MinorsRechargeHintSwitch::~MinorsRechargeHintSwitch(MinorsRechargeHintSwitch *const this)
{
  MinorsRechargeHintSwitch::~MinorsRechargeHintSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 148: range 000000000CF33EE4-000000000CF33F31
void __cdecl MinorsRechargeHintSwitch::~MinorsRechargeHintSwitch(MinorsRechargeHintSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MinorsRechargeHintSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 149: range 000000000CF2F28A-000000000CF2F387
void __fastcall ZN25MinorsGachaRestrictSwitchCI210BaseSwitchEj(MinorsGachaRestrictSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN25MinorsGachaRestrictSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'MinorsGachaRestrictSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 149: range 000000000CF33EB8-000000000CF33EE2
void __cdecl MinorsGachaRestrictSwitch::~MinorsGachaRestrictSwitch(MinorsGachaRestrictSwitch *const this)
{
  MinorsGachaRestrictSwitch::~MinorsGachaRestrictSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 149: range 000000000CF33E6A-000000000CF33EB7
void __cdecl MinorsGachaRestrictSwitch::~MinorsGachaRestrictSwitch(MinorsGachaRestrictSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MinorsGachaRestrictSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 150: range 000000000CECF8DA-000000000CECF932
bool __cdecl MinorsRegister::isSwitchFeatureClosed(const MinorsRegister *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->age >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->age >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->age);
  }
  return feature_id == this->age;
};

// Line 150: range 000000000CECF7FA-000000000CECF8D8
bool __cdecl MinorsRegister::operator==(const MinorsRegister *const this, const BaseSwitch *rhs)
{
  const MinorsRegister *v2; // rax
  uint32_t *p_age; // rax
  uint32_t age; // ecx
  const MinorsRegister *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const MinorsRegister *)__dynamic_cast(
                                   rhs,
                                   (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                   (const struct __class_type_info *)&`typeinfo for'MinorsRegister,
                                   0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_age = &v2->age;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->age >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->age >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_age);
  }
  age = cls_ptr->age;
  if ( *(_BYTE *)(((unsigned __int64)&this->age >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->age >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->age);
  }
  return age == this->age;
};

// Line 150: range 000000000CECF2AC-000000000CECF7F8
int32_t __cdecl MinorsRegister::parseFromJsonStr(MinorsRegister *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:150 240 272 10 reader:150";
  *(_QWORD *)(v2 + 16) = MinorsRegister::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      150);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), off_1A2B1780);
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), off_1A2B1780), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        150);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), off_1A2B1780);
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->age >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->age >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->age);
      }
      this->age = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 150: range 000000000CF2F4B4-000000000CF2F5F7
void __fastcall ZN14MinorsRegisterCI210BaseSwitchEj(MinorsRegister *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN14MinorsRegisterCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'MinorsRegister + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->age >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->age >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->age);
  }
  this->age = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 150: range 000000000CF33DF0-000000000CF33E3D
void __cdecl MinorsRegister::~MinorsRegister(MinorsRegister *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MinorsRegister + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 150: range 000000000CF33E3E-000000000CF33E68
void __cdecl MinorsRegister::~MinorsRegister(MinorsRegister *const this)
{
  MinorsRegister::~MinorsRegister(this);
  operator delete(this, 0x10uLL);
};

// Line 151: range 000000000CECFF62-000000000CECFFBA
bool __cdecl MatchLimitSwitch::isSwitchFeatureClosed(const MatchLimitSwitch *const this, uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->limit_id);
  }
  return feature_id == this->limit_id;
};

// Line 151: range 000000000CECFE82-000000000CECFF60
bool __cdecl MatchLimitSwitch::operator==(const MatchLimitSwitch *const this, const BaseSwitch *rhs)
{
  const MatchLimitSwitch *v2; // rax
  uint32_t *p_limit_id; // rax
  uint32_t limit_id; // ecx
  const MatchLimitSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const MatchLimitSwitch *)__dynamic_cast(
                                     rhs,
                                     (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                     (const struct __class_type_info *)&`typeinfo for'MatchLimitSwitch,
                                     0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_limit_id = &v2->limit_id;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->limit_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->limit_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_limit_id);
  }
  limit_id = cls_ptr->limit_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->limit_id);
  }
  return limit_id == this->limit_id;
};

// Line 151: range 000000000CECF934-000000000CECFE80
int32_t __cdecl MatchLimitSwitch::parseFromJsonStr(MatchLimitSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:151 240 272 10 reader:151";
  *(_QWORD *)(v2 + 16) = MatchLimitSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      151);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "limit_id");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "limit_id"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        151);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "limit_id");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->limit_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->limit_id);
      }
      this->limit_id = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 151: range 000000000CF2F724-000000000CF2F867
void __fastcall ZN16MatchLimitSwitchCI210BaseSwitchEj(MatchLimitSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN16MatchLimitSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'MatchLimitSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_id);
  }
  this->limit_id = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 151: range 000000000CF33D76-000000000CF33DC3
void __cdecl MatchLimitSwitch::~MatchLimitSwitch(MatchLimitSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MatchLimitSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 151: range 000000000CF33DC4-000000000CF33DEE
void __cdecl MatchLimitSwitch::~MatchLimitSwitch(MatchLimitSwitch *const this)
{
  MatchLimitSwitch::~MatchLimitSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 152: range 000000000CED071C-000000000CED07C1
bool __cdecl NicknameAuditSwitch::isSwitchFeatureClosed(
        const NicknameAuditSwitch *const this,
        uint32_t feature_id,
        uint32_t feature_id2)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->monthly_limit);
  }
  if ( feature_id != this->monthly_limit )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->auto_pass_hours);
  }
  return feature_id2 == this->auto_pass_hours;
};

// Line 152: range 000000000CED05B4-000000000CED071A
bool __cdecl NicknameAuditSwitch::operator==(const NicknameAuditSwitch *const this, const BaseSwitch *rhs)
{
  const NicknameAuditSwitch *v2; // rax
  uint32_t *p_monthly_limit; // rax
  uint32_t monthly_limit; // ecx
  uint32_t auto_pass_hours; // ecx
  const NicknameAuditSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const NicknameAuditSwitch *)__dynamic_cast(
                                        rhs,
                                        (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                        (const struct __class_type_info *)&`typeinfo for'NicknameAuditSwitch,
                                        0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_monthly_limit = &v2->monthly_limit;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->monthly_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->monthly_limit >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(p_monthly_limit);
  }
  monthly_limit = cls_ptr->monthly_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->monthly_limit);
  }
  if ( monthly_limit != this->monthly_limit )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->auto_pass_hours >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cls_ptr->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cls_ptr->auto_pass_hours);
  }
  auto_pass_hours = cls_ptr->auto_pass_hours;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->auto_pass_hours);
  }
  return auto_pass_hours == this->auto_pass_hours;
};

// Line 152: range 000000000CECFFBC-000000000CED05B3
int32_t __cdecl NicknameAuditSwitch::parseFromJsonStr(NicknameAuditSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  Json::Value_0 *v9; // rax
  Json::Value_0 *v10; // rax
  common::milog::MiLogStream *v12; // rdx
  Json::Value *v13; // rax
  uint32_t v14; // ecx
  Json::Value *v15; // rax
  uint32_t v16; // edx
  int32_t result; // eax
  char v18[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:152 240 272 10 reader:152";
  *(_QWORD *)(v2 + 16) = NicknameAuditSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      152);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "monthly_limit");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "monthly_limit"), !Json::Value::isUInt(v8))
      || (v9 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "auto_pass_hours"), Json::Value::isNull(v9))
      || (v10 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "auto_pass_hours"), !Json::Value::isUInt(v10)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        152);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v13 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "monthly_limit");
      v14 = Json::Value::asUInt(v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->monthly_limit);
      }
      this->monthly_limit = v14;
      v15 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "auto_pass_hours");
      v16 = Json::Value::asUInt(v15);
      if ( *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->auto_pass_hours);
      }
      this->auto_pass_hours = v16;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 152: range 000000000CF2F99E-000000000CF2FB1F
void __fastcall ZN19NicknameAuditSwitchCI210BaseSwitchEj(NicknameAuditSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN19NicknameAuditSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'NicknameAuditSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monthly_limit);
  }
  this->monthly_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->auto_pass_hours);
  }
  this->auto_pass_hours = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 152: range 000000000CF33CFC-000000000CF33D49
void __cdecl NicknameAuditSwitch::~NicknameAuditSwitch(NicknameAuditSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NicknameAuditSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 152: range 000000000CF33D4A-000000000CF33D74
void __cdecl NicknameAuditSwitch::~NicknameAuditSwitch(NicknameAuditSwitch *const this)
{
  NicknameAuditSwitch::~NicknameAuditSwitch(this);
  operator delete(this, 0x18uLL);
};

// Line 153: range 000000000CED0F22-000000000CED0FC7
bool __cdecl SignatureAuditSwitch::isSwitchFeatureClosed(
        const SignatureAuditSwitch *const this,
        uint32_t feature_id,
        uint32_t feature_id2)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->monthly_limit);
  }
  if ( feature_id != this->monthly_limit )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->auto_pass_hours);
  }
  return feature_id2 == this->auto_pass_hours;
};

// Line 153: range 000000000CED0DBA-000000000CED0F20
bool __cdecl SignatureAuditSwitch::operator==(const SignatureAuditSwitch *const this, const BaseSwitch *rhs)
{
  const SignatureAuditSwitch *v2; // rax
  uint32_t *p_monthly_limit; // rax
  uint32_t monthly_limit; // ecx
  uint32_t auto_pass_hours; // ecx
  const SignatureAuditSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const SignatureAuditSwitch *)__dynamic_cast(
                                         rhs,
                                         (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                         (const struct __class_type_info *)&`typeinfo for'SignatureAuditSwitch,
                                         0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_monthly_limit = &v2->monthly_limit;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->monthly_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->monthly_limit >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(p_monthly_limit);
  }
  monthly_limit = cls_ptr->monthly_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->monthly_limit);
  }
  if ( monthly_limit != this->monthly_limit )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->auto_pass_hours >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cls_ptr->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cls_ptr->auto_pass_hours);
  }
  auto_pass_hours = cls_ptr->auto_pass_hours;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->auto_pass_hours);
  }
  return auto_pass_hours == this->auto_pass_hours;
};

// Line 153: range 000000000CED07C2-000000000CED0DB9
int32_t __cdecl SignatureAuditSwitch::parseFromJsonStr(SignatureAuditSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  Json::Value_0 *v9; // rax
  Json::Value_0 *v10; // rax
  common::milog::MiLogStream *v12; // rdx
  Json::Value *v13; // rax
  uint32_t v14; // ecx
  Json::Value *v15; // rax
  uint32_t v16; // edx
  int32_t result; // eax
  char v18[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:153 240 272 10 reader:153";
  *(_QWORD *)(v2 + 16) = SignatureAuditSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      153);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "monthly_limit");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "monthly_limit"), !Json::Value::isUInt(v8))
      || (v9 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "auto_pass_hours"), Json::Value::isNull(v9))
      || (v10 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "auto_pass_hours"), !Json::Value::isUInt(v10)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        153);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v13 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "monthly_limit");
      v14 = Json::Value::asUInt(v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->monthly_limit);
      }
      this->monthly_limit = v14;
      v15 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "auto_pass_hours");
      v16 = Json::Value::asUInt(v15);
      if ( *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->auto_pass_hours);
      }
      this->auto_pass_hours = v16;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 153: range 000000000CF2FC56-000000000CF2FDD7
void __fastcall ZN20SignatureAuditSwitchCI210BaseSwitchEj(SignatureAuditSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN20SignatureAuditSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'SignatureAuditSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monthly_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monthly_limit);
  }
  this->monthly_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->auto_pass_hours);
  }
  this->auto_pass_hours = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 153: range 000000000CF33CD0-000000000CF33CFA
void __cdecl SignatureAuditSwitch::~SignatureAuditSwitch(SignatureAuditSwitch *const this)
{
  SignatureAuditSwitch::~SignatureAuditSwitch(this);
  operator delete(this, 0x18uLL);
};

// Line 153: range 000000000CF33C82-000000000CF33CCF
void __cdecl SignatureAuditSwitch::~SignatureAuditSwitch(SignatureAuditSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SignatureAuditSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 154: range 000000000CF2FF04-000000000CF30001
void __fastcall ZN23MatchRuleOptimizeSwitchCI210BaseSwitchEj(MatchRuleOptimizeSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN23MatchRuleOptimizeSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'MatchRuleOptimizeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 154: range 000000000CF33C56-000000000CF33C80
void __cdecl MatchRuleOptimizeSwitch::~MatchRuleOptimizeSwitch(MatchRuleOptimizeSwitch *const this)
{
  MatchRuleOptimizeSwitch::~MatchRuleOptimizeSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 154: range 000000000CF33C08-000000000CF33C55
void __cdecl MatchRuleOptimizeSwitch::~MatchRuleOptimizeSwitch(MatchRuleOptimizeSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MatchRuleOptimizeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 155: range 000000000CF3012E-000000000CF3022B
void __fastcall ZN24ReliquaryGuaranteeSwitchCI210BaseSwitchEj(ReliquaryGuaranteeSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN24ReliquaryGuaranteeSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'ReliquaryGuaranteeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 155: range 000000000CF33B8E-000000000CF33BDB
void __cdecl ReliquaryGuaranteeSwitch::~ReliquaryGuaranteeSwitch(ReliquaryGuaranteeSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReliquaryGuaranteeSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 155: range 000000000CF33BDC-000000000CF33C06
void __cdecl ReliquaryGuaranteeSwitch::~ReliquaryGuaranteeSwitch(ReliquaryGuaranteeSwitch *const this)
{
  ReliquaryGuaranteeSwitch::~ReliquaryGuaranteeSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 156: range 000000000CF30358-000000000CF30455
void __fastcall ZN29SecurityLibraryMd5CheckSwitchCI210BaseSwitchEj(SecurityLibraryMd5CheckSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN29SecurityLibraryMd5CheckSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'SecurityLibraryMd5CheckSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 156: range 000000000CF33B14-000000000CF33B61
void __cdecl SecurityLibraryMd5CheckSwitch::~SecurityLibraryMd5CheckSwitch(SecurityLibraryMd5CheckSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SecurityLibraryMd5CheckSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 156: range 000000000CF33B62-000000000CF33B8C
void __cdecl SecurityLibraryMd5CheckSwitch::~SecurityLibraryMd5CheckSwitch(SecurityLibraryMd5CheckSwitch *const this)
{
  SecurityLibraryMd5CheckSwitch::~SecurityLibraryMd5CheckSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 157: range 000000000CED15F6-000000000CED164E
bool __cdecl HomeAuditBeforeReleaseSwitch::isSwitchFeatureClosed(
        const HomeAuditBeforeReleaseSwitch *const this,
        uint32_t feature_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->check_hours >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_hours >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->check_hours);
  }
  return feature_id == this->check_hours;
};

// Line 157: range 000000000CED1516-000000000CED15F4
bool __cdecl HomeAuditBeforeReleaseSwitch::operator==(
        const HomeAuditBeforeReleaseSwitch *const this,
        const BaseSwitch *rhs)
{
  const HomeAuditBeforeReleaseSwitch *v2; // rax
  uint32_t *p_check_hours; // rax
  uint32_t check_hours; // ecx
  const HomeAuditBeforeReleaseSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const HomeAuditBeforeReleaseSwitch *)__dynamic_cast(
                                                 rhs,
                                                 (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                                 (const struct __class_type_info *)&`typeinfo for'HomeAuditBeforeReleaseSwitch,
                                                 0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  p_check_hours = &v2->check_hours;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->check_hours >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->check_hours >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_check_hours);
  }
  check_hours = cls_ptr->check_hours;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_hours >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_hours >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->check_hours);
  }
  return check_hours == this->check_hours;
};

// Line 157: range 000000000CED0FC8-000000000CED1514
int32_t __cdecl HomeAuditBeforeReleaseSwitch::parseFromJsonStr(
        HomeAuditBeforeReleaseSwitch *const this,
        const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  Json::Value *v11; // rax
  uint32_t v12; // ecx
  int32_t result; // eax
  char v14[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 40 8 jval:157 240 272 10 reader:157";
  *(_QWORD *)(v2 + 16) = HomeAuditBeforeReleaseSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  Json::Value::Value(v2 + 160, 0LL);
  Json::Reader::Reader((Json::Reader *)(v2 + 240));
  if ( !Json::Reader::parse((Json::Reader *const)(v2 + 240), str, (Json::Value *)(v2 + 160), 1) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      157);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "check_hours");
    if ( Json::Value::isNull(v7)
      || (v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "check_hours"), !Json::Value::isUInt(v8)) )
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "parseFromJsonStr",
        157);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[32])"json value is null or not uint:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "check_hours");
      v12 = Json::Value::asUInt(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->check_hours >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_hours >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->check_hours);
      }
      this->check_hours = v12;
      v6 = 0;
    }
  }
  Json::Reader::~Reader((Json::Reader *const)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 157: range 000000000CF30582-000000000CF306C5
void __fastcall ZN28HomeAuditBeforeReleaseSwitchCI210BaseSwitchEj(HomeAuditBeforeReleaseSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN28HomeAuditBeforeReleaseSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'HomeAuditBeforeReleaseSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_hours >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_hours >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->check_hours);
  }
  this->check_hours = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 157: range 000000000CF33AE8-000000000CF33B12
void __cdecl HomeAuditBeforeReleaseSwitch::~HomeAuditBeforeReleaseSwitch(HomeAuditBeforeReleaseSwitch *const this)
{
  HomeAuditBeforeReleaseSwitch::~HomeAuditBeforeReleaseSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 157: range 000000000CF33A9A-000000000CF33AE7
void __cdecl HomeAuditBeforeReleaseSwitch::~HomeAuditBeforeReleaseSwitch(HomeAuditBeforeReleaseSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeAuditBeforeReleaseSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 158: range 000000000CF307F2-000000000CF308EF
void __fastcall ZN9UgcSwitchCI210BaseSwitchEj(UgcSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN9UgcSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'UgcSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 158: range 000000000CF33A20-000000000CF33A6D
void __cdecl UgcSwitch::~UgcSwitch(UgcSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'UgcSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 158: range 000000000CF33A6E-000000000CF33A98
void __cdecl UgcSwitch::~UgcSwitch(UgcSwitch *const this)
{
  UgcSwitch::~UgcSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 159: range 000000000CF30A1C-000000000CF30B19
void __fastcall ZN16UgcPublishSwitchCI210BaseSwitchEj(UgcPublishSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN16UgcPublishSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'UgcPublishSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 159: range 000000000CF339A6-000000000CF339F3
void __cdecl UgcPublishSwitch::~UgcPublishSwitch(UgcPublishSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'UgcPublishSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 159: range 000000000CF339F4-000000000CF33A1E
void __cdecl UgcPublishSwitch::~UgcPublishSwitch(UgcPublishSwitch *const this)
{
  UgcPublishSwitch::~UgcPublishSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 160: range 000000000CF30C46-000000000CF30D43
void __fastcall ZN22SafeServerNotifySwitchCI210BaseSwitchEj(SafeServerNotifySwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN22SafeServerNotifySwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'SafeServerNotifySwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 160: range 000000000CF3397A-000000000CF339A4
void __cdecl SafeServerNotifySwitch::~SafeServerNotifySwitch(SafeServerNotifySwitch *const this)
{
  SafeServerNotifySwitch::~SafeServerNotifySwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 160: range 000000000CF3392C-000000000CF33979
void __cdecl SafeServerNotifySwitch::~SafeServerNotifySwitch(SafeServerNotifySwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SafeServerNotifySwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 161: range 000000000CF30E70-000000000CF30F6D
void __fastcall ZN26GeneralGachaRestrictSwitchCI210BaseSwitchEj(GeneralGachaRestrictSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN26GeneralGachaRestrictSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'GeneralGachaRestrictSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 161: range 000000000CF33900-000000000CF3392A
void __cdecl GeneralGachaRestrictSwitch::~GeneralGachaRestrictSwitch(GeneralGachaRestrictSwitch *const this)
{
  GeneralGachaRestrictSwitch::~GeneralGachaRestrictSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 161: range 000000000CF338B2-000000000CF338FF
void __cdecl GeneralGachaRestrictSwitch::~GeneralGachaRestrictSwitch(GeneralGachaRestrictSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GeneralGachaRestrictSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 162: range 000000000CF3109A-000000000CF31197
void __fastcall ZN19HomeBlueprintSwitchCI210BaseSwitchEj(HomeBlueprintSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN19HomeBlueprintSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'HomeBlueprintSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 162: range 000000000CF33886-000000000CF338B0
void __cdecl HomeBlueprintSwitch::~HomeBlueprintSwitch(HomeBlueprintSwitch *const this)
{
  HomeBlueprintSwitch::~HomeBlueprintSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 162: range 000000000CF33838-000000000CF33885
void __cdecl HomeBlueprintSwitch::~HomeBlueprintSwitch(HomeBlueprintSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeBlueprintSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 163: range 000000000CF312C4-000000000CF313C1
void __fastcall ZN21AntiOfflineKickSwitchCI210BaseSwitchEj(AntiOfflineKickSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN21AntiOfflineKickSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'AntiOfflineKickSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 163: range 000000000CF3380C-000000000CF33836
void __cdecl AntiOfflineKickSwitch::~AntiOfflineKickSwitch(AntiOfflineKickSwitch *const this)
{
  AntiOfflineKickSwitch::~AntiOfflineKickSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 163: range 000000000CF337BE-000000000CF3380B
void __cdecl AntiOfflineKickSwitch::~AntiOfflineKickSwitch(AntiOfflineKickSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AntiOfflineKickSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 164: range 000000000CF314EE-000000000CF315EB
void __fastcall ZN26EnvironmentErrorKickSwitchCI210BaseSwitchEj(EnvironmentErrorKickSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN26EnvironmentErrorKickSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'EnvironmentErrorKickSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 164: range 000000000CF33744-000000000CF33791
void __cdecl EnvironmentErrorKickSwitch::~EnvironmentErrorKickSwitch(EnvironmentErrorKickSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EnvironmentErrorKickSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 164: range 000000000CF33792-000000000CF337BC
void __cdecl EnvironmentErrorKickSwitch::~EnvironmentErrorKickSwitch(EnvironmentErrorKickSwitch *const this)
{
  EnvironmentErrorKickSwitch::~EnvironmentErrorKickSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 165: range 000000000CF31718-000000000CF31815
void __fastcall ZN28QuestAvatarRenameAuditSwitchCI210BaseSwitchEj(QuestAvatarRenameAuditSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN28QuestAvatarRenameAuditSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'QuestAvatarRenameAuditSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 165: range 000000000CF336CA-000000000CF33717
void __cdecl QuestAvatarRenameAuditSwitch::~QuestAvatarRenameAuditSwitch(QuestAvatarRenameAuditSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'QuestAvatarRenameAuditSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 165: range 000000000CF33718-000000000CF33742
void __cdecl QuestAvatarRenameAuditSwitch::~QuestAvatarRenameAuditSwitch(QuestAvatarRenameAuditSwitch *const this)
{
  QuestAvatarRenameAuditSwitch::~QuestAvatarRenameAuditSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 166: range 000000000CF31942-000000000CF31A3F
void __fastcall ZN27ItemAvatarRenameAuditSwitchCI210BaseSwitchEj(ItemAvatarRenameAuditSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN27ItemAvatarRenameAuditSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'ItemAvatarRenameAuditSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 166: range 000000000CF33650-000000000CF3369D
void __cdecl ItemAvatarRenameAuditSwitch::~ItemAvatarRenameAuditSwitch(ItemAvatarRenameAuditSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ItemAvatarRenameAuditSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 166: range 000000000CF3369E-000000000CF336C8
void __cdecl ItemAvatarRenameAuditSwitch::~ItemAvatarRenameAuditSwitch(ItemAvatarRenameAuditSwitch *const this)
{
  ItemAvatarRenameAuditSwitch::~ItemAvatarRenameAuditSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 167: range 000000000CF31B6C-000000000CF31C69
void __fastcall ZN16GCGPreviewSwitchCI210BaseSwitchEj(GCGPreviewSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN16GCGPreviewSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'GCGPreviewSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 167: range 000000000CF335D6-000000000CF33623
void __cdecl GCGPreviewSwitch::~GCGPreviewSwitch(GCGPreviewSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPreviewSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 167: range 000000000CF33624-000000000CF3364E
void __cdecl GCGPreviewSwitch::~GCGPreviewSwitch(GCGPreviewSwitch *const this)
{
  GCGPreviewSwitch::~GCGPreviewSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 168: range 000000000CF31D96-000000000CF31E93
void __fastcall ZN14GCGMatchSwitchCI210BaseSwitchEj(GCGMatchSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN14GCGMatchSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'GCGMatchSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 168: range 000000000CF335AA-000000000CF335D4
void __cdecl GCGMatchSwitch::~GCGMatchSwitch(GCGMatchSwitch *const this)
{
  GCGMatchSwitch::~GCGMatchSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 168: range 000000000CF3355C-000000000CF335A9
void __cdecl GCGMatchSwitch::~GCGMatchSwitch(GCGMatchSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMatchSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 169: range 000000000CF31FC0-000000000CF320BD
void __fastcall ZN12GCGPvpSwitchCI210BaseSwitchEj(GCGPvpSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12GCGPvpSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'GCGPvpSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 169: range 000000000CF334E2-000000000CF3352F
void __cdecl GCGPvpSwitch::~GCGPvpSwitch(GCGPvpSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPvpSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 169: range 000000000CF33530-000000000CF3355A
void __cdecl GCGPvpSwitch::~GCGPvpSwitch(GCGPvpSwitch *const this)
{
  GCGPvpSwitch::~GCGPvpSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 170: range 000000000CF321EA-000000000CF322E7
void __fastcall ZN12GCGPveSwitchCI210BaseSwitchEj(GCGPveSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12GCGPveSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'GCGPveSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 170: range 000000000CF334B6-000000000CF334E0
void __cdecl GCGPveSwitch::~GCGPveSwitch(GCGPveSwitch *const this)
{
  GCGPveSwitch::~GCGPveSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 170: range 000000000CF33468-000000000CF334B5
void __cdecl GCGPveSwitch::~GCGPveSwitch(GCGPveSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPveSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 171: range 000000000CF3264E-000000000CF3274B
void __fastcall ZN14IPRegionSwitchCI210BaseSwitchEj(IPRegionSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN14IPRegionSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'IPRegionSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 171: range 000000000CF333EE-000000000CF3343B
void __cdecl IPRegionSwitch::~IPRegionSwitch(IPRegionSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'IPRegionSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch(this);
};

// Line 171: range 000000000CF3343C-000000000CF33466
void __cdecl IPRegionSwitch::~IPRegionSwitch(IPRegionSwitch *const this)
{
  IPRegionSwitch::~IPRegionSwitch(this);
  operator delete(this, 0x10uLL);
};

// Line 177: range 000000000CF299C8-000000000CF29A25
void __cdecl KeyValueMapSwitch::~KeyValueMapSwitch(KeyValueMapSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'KeyValueMapSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->key_value_map);
  BaseSwitch::~BaseSwitch(this);
};

// Line 177: range 000000000CF29A26-000000000CF29A50
void __cdecl KeyValueMapSwitch::~KeyValueMapSwitch(KeyValueMapSwitch *const this)
{
  KeyValueMapSwitch::~KeyValueMapSwitch(this);
  operator delete(this, 0x48uLL);
};

// Line 179: range 000000000CF298BA-000000000CF299C7
void __fastcall ZN17KeyValueMapSwitchCI210BaseSwitchEj(KeyValueMapSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN17KeyValueMapSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'KeyValueMapSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->key_value_map);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 181: range 000000000CED1650-000000000CED288C
int32_t __cdecl KeyValueMapSwitch::parseFromJsonStr(KeyValueMapSwitch *const this, const std::string *str)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  _BOOL4 v7; // r15d
  const std::string *v8; // rsi
  bool v9; // al
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  const Json::Value *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  _BOOL4 v14; // r15d
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // r15d
  int v20; // edx
  unsigned int *v21; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // edx
  char v31[1264]; // [rsp+30h] [rbp-4F0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1216LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 32 4 7 key:208 48 4 9 value:214 64 8 9 <unknown> 96 16 8 iter:193 128 16 9 <unknown> 160 16 9"
                        " <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 11 key_str:207 448 32"
                        " 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 40 8 jval:186 720 40 12 json_key:195 800 "
                        "40 14 json_value:196 880 272 10 reader:187";
  *(_QWORD *)(v3 + 16) = KeyValueMapSwitch::parseFromJsonStr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959360;
  v5[536862742] = 62194;
  v5[536862743] = -234881024;
  v5[536862744] = -218959118;
  v5[536862746] = -218959360;
  v5[536862747] = 62194;
  v5[536862756] = -202116109;
  v5[536862757] = -202116109;
  std::unordered_map<unsigned int,unsigned int>::clear(&this->key_value_map);
  Json::Value::Value(v3 + 640, 0LL);
  Json::Reader::Reader((Json::Reader *)(v3 + 880));
  if ( !Json::Reader::parse((Json::Reader *const)(v3 + 880), str, (Json::Value *)(v3 + 640), 1) )
  {
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      190);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v7 = 0;
  }
  else
  {
    if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 128, str);
    Json::Value::begin((Json::Value_0 *const)(v3 + 640));
    v8 = (const std::string *)(v3 + 128);
    Json::ValueConstIterator::ValueConstIterator(
      (Json::ValueConstIterator *const)(v3 + 96),
      (const Json::ValueIterator *)(v3 + 128));
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
    while ( 1 )
    {
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v3 + 160, v8);
      Json::Value::end((Json::Value_0 *const)(v3 + 640));
      v9 = Json::ValueIteratorBase::operator!=(
             (const Json::ValueIteratorBase *const)(v3 + 96),
             (const Json::ValueIteratorBase::SelfType *)(v3 + 160));
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
      if ( !v9 )
        break;
      v10 = ((v3 + 720) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      if ( *(char *)(((v3 + 720) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 759) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 55) & 7) >= *(_BYTE *)(((v3 + 759) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 720, 40LL);
      }
      Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 720));
      v11 = ((v3 + 800) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueConstIterator::operator*((const Json::ValueConstIterator *const)(v3 + 96));
      Json::Value::Value((Json::Value *)(v3 + 800), v12);
      if ( !Json::Value::isString((const Json::Value_0 *const)(v3 + 720)) )
      {
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/feature_switch_mgr.cpp",
          "parseFromJsonStr",
          199);
        v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[29])"json_key is not string, str:");
        v8 = str;
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      else if ( !Json::Value::isUInt((const Json::Value_0 *const)(v3 + 800)) )
      {
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/feature_switch_mgr.cpp",
          "parseFromJsonStr",
          204);
        v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[29])"json_value is not uint, str:");
        v8 = str;
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      else
      {
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 384, 32LL);
        }
        Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 384), (Json::Value_0 *)(v3 + 720));
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 32);
        *(_DWORD *)(v3 + 32) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(
               (const std::string *)(v3 + 384),
               (unsigned int *)(v3 + 32),
               1) )
        {
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/feature_switch_mgr.cpp",
            "parseFromJsonStr",
            211);
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[11])"parse key:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v3 + 32));
          v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" fail, str:");
          v8 = str;
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, str);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v19 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v20 = Json::Value::asUInt((Json::Value *)(v3 + 800));
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 48);
          *(_DWORD *)(v3 + 48) = v20;
          v8 = (const std::string *)(v3 + 32);
          v22 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
                  &this->key_value_map,
                  (unsigned int *)(v3 + 32),
                  (unsigned int *)(v3 + 48),
                  (unsigned int *)&this->key_value_map,
                  v21);
          if ( !v22.second )
          {
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "src/feature_switch_mgr.cpp",
              "parseFromJsonStr",
              217);
            v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    (common::milog::MiLogStream *const)(v3 + 512),
                    (const char (*)[15])"duplicate key:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v3 + 32));
            v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" str:");
            v8 = str;
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, str);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v19 = 0;
          }
          else
          {
            v19 = 1;
          }
        }
        std::string::~string((void *)(v3 + 384));
        v14 = v19 == 1;
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 800));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 720));
      v26 = ((v3 + 720) >> 3) + 2147450880;
      *(_DWORD *)v26 = -117901064;
      *(_BYTE *)(v26 + 4) = -8;
      v27 = ((v3 + 800) >> 3) + 2147450880;
      *(_DWORD *)v27 = -117901064;
      *(_BYTE *)(v27 + 4) = -8;
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( !v14 )
      {
        v28 = 0;
        goto LABEL_44;
      }
      Json::ValueConstIterator::operator++((Json::ValueConstIterator *const)(v3 + 96));
    }
    v28 = 1;
LABEL_44:
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    v7 = v28 == 1;
  }
  Json::Reader::~Reader((Json::Reader *const)(v3 + 880));
  Json::Value::~Value((Json::Value_0 *const)(v3 + 640));
  if ( v7 )
    v2 = 0;
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 152) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1216LL, v31);
  }
  return v2;
};

// Line 220: range 000000000CED3644-000000000CED39E6
int32_t __cdecl RewardIdSwitch::parseFromJsonStr(RewardIdSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+10h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference __in; // [rsp+18h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *replace_reward_id; // [rsp+28h] [rbp-C8h]
  char v11[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:300 64 8 13 __for_end:300 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RewardIdSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  if ( KeyValueMapSwitch::parseFromJsonStr(this, str) )
  {
    result = -1;
  }
  else
  {
    __for_range = &this->key_value_map;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64)) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 32));
      std::get<0ul,unsigned int const,unsigned int>(__in);
      v6 = std::get<1ul,unsigned int const,unsigned int>(__in);
      replace_reward_id = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      if ( !*replace_reward_id )
        *replace_reward_id = 10000;
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 32));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      308);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[20])"replace reward_ids:");
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v7, &this->key_value_map);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 229: range 000000000CED288E-000000000CED28F9
bool __cdecl KeyValueMapSwitch::operator==(const KeyValueMapSwitch *const this, const BaseSwitch *rhs)
{
  char *v2; // rax

  if ( rhs )
    v2 = (char *)__dynamic_cast(
                   rhs,
                   (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                   (const struct __class_type_info *)&`typeinfo for'KeyValueMapSwitch,
                   0LL);
  else
    v2 = 0LL;
  return v2
      && std::operator==<unsigned int,unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>(
           &this->key_value_map,
           (const std::unordered_map<unsigned int,unsigned int> *)(v2 + 16));
};

// Line 240: range 000000000CF2A032-000000000CF2A05C
void __cdecl ValueSetSwitch::~ValueSetSwitch(ValueSetSwitch *const this)
{
  ValueSetSwitch::~ValueSetSwitch(this);
  operator delete(this, 0x48uLL);
};

// Line 240: range 000000000CF29FD4-000000000CF2A031
void __cdecl ValueSetSwitch::~ValueSetSwitch(ValueSetSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ValueSetSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  std::unordered_set<unsigned int>::~unordered_set(&this->value_set);
  BaseSwitch::~BaseSwitch(this);
};

// Line 242: range 000000000CF29EC6-000000000CF29FD3
void __fastcall ZN14ValueSetSwitchCI210BaseSwitchEj(ValueSetSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN14ValueSetSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'ValueSetSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  std::unordered_set<unsigned int>::unordered_set(&this->value_set);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 244: range 000000000CED28FA-000000000CED35BD
int32_t __cdecl ValueSetSwitch::parseFromJsonStr(ValueSetSwitch *const this, const std::string *str)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  _BOOL4 v7; // r15d
  const std::string *v8; // rsi
  bool v9; // al
  unsigned __int64 v10; // rax
  const Json::Value *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // r15d
  int v14; // edx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  unsigned __int64 v19; // rax
  int v20; // edx
  char v23[944]; // [rsp+30h] [rbp-3B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(896LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 4 9 value:264 48 8 9 <unknown> 80 16 8 iter:256 112 16 9 <unknown> 144 32 9 <unknown> 208 "
                        "32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 40 8 jval:249 480 40 14 json_value:258 "
                        "560 272 10 reader:250";
  *(_QWORD *)(v3 + 16) = ValueSetSwitch::parseFromJsonStr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -234881024;
  v5[536862734] = -218959118;
  v5[536862736] = -218959360;
  v5[536862737] = 62194;
  v5[536862746] = -202116109;
  v5[536862747] = -202116109;
  std::unordered_set<unsigned int>::clear(&this->value_set);
  Json::Value::Value(v3 + 400, 0LL);
  Json::Reader::Reader((Json::Reader *)(v3 + 560));
  if ( !Json::Reader::parse((Json::Reader *const)(v3 + 560), str, (Json::Value *)(v3 + 400), 1) )
  {
    if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 144, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 144),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      253);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v3 + 144),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 144));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v7 = 0;
  }
  else
  {
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 80, str);
    v8 = (const std::string *)(v3 + 400);
    Json::Value::begin((Json::Value_0 *const)(v3 + 400));
    while ( 1 )
    {
      *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v3 + 112, v8);
      Json::Value::end((Json::Value_0 *const)(v3 + 400));
      v9 = Json::ValueIteratorBase::operator!=(
             (const Json::ValueIteratorBase *const)(v3 + 80),
             (const Json::ValueIteratorBase::SelfType *)(v3 + 112));
      *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
      if ( !v9 )
        break;
      v10 = ((v3 + 480) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 80));
      Json::Value::Value((Json::Value *)(v3 + 480), v11);
      if ( !Json::Value::isUInt((const Json::Value_0 *const)(v3 + 480)) )
      {
        *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 208, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 208),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/feature_switch_mgr.cpp",
          "parseFromJsonStr",
          261);
        v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v3 + 208),
                (const char (*)[29])"json_value is not uint, str:");
        v8 = str;
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
        *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
      else
      {
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v14 = Json::Value::asUInt((Json::Value *)(v3 + 480));
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 32);
        *(_DWORD *)(v3 + 32) = v14;
        v8 = (const std::string *)(v3 + 32);
        v15 = std::unordered_set<unsigned int>::insert(
                &this->value_set,
                (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
        if ( !v15.second )
        {
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/feature_switch_mgr.cpp",
            "parseFromJsonStr",
            267);
          v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[17])"duplicate value:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v3 + 32));
          v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" str:");
          v8 = str;
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, str);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v13 = 0;
        }
        else
        {
          v13 = 1;
        }
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 480));
      v19 = ((v3 + 480) >> 3) + 2147450880;
      *(_DWORD *)v19 = -117901064;
      *(_BYTE *)(v19 + 4) = -8;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v13 != 1 )
      {
        v20 = 0;
        goto LABEL_29;
      }
      Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 80));
    }
    v20 = 1;
LABEL_29:
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    v7 = v20 == 1;
  }
  Json::Reader::~Reader((Json::Reader *const)(v3 + 560));
  Json::Value::~Value((Json::Value_0 *const)(v3 + 400));
  if ( v7 )
    v2 = 0;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 279: range 000000000CED35BE-000000000CED3629
bool __cdecl ValueSetSwitch::operator==(const ValueSetSwitch *const this, const BaseSwitch *rhs)
{
  char *v2; // rax

  if ( rhs )
    v2 = (char *)__dynamic_cast(
                   rhs,
                   (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                   (const struct __class_type_info *)&`typeinfo for'ValueSetSwitch,
                   0LL);
  else
    v2 = 0LL;
  return v2
      && std::operator==<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<unsigned int>>(
           &this->value_set,
           (const std::unordered_set<unsigned int> *)(v2 + 16));
};

// Line 291: range 000000000CF33374-000000000CF333C1
void __cdecl RewardIdSwitch::~RewardIdSwitch(RewardIdSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RewardIdSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  KeyValueMapSwitch::~KeyValueMapSwitch(this);
};

// Line 291: range 000000000CF333C2-000000000CF333EC
void __cdecl RewardIdSwitch::~RewardIdSwitch(RewardIdSwitch *const this)
{
  RewardIdSwitch::~RewardIdSwitch(this);
  operator delete(this, 0x48uLL);
};

// Line 293: range 000000000CF29A52-000000000CF29B4F
void __fastcall ZN14RewardIdSwitchCI210BaseSwitchEj(RewardIdSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN14RewardIdSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  ZN17KeyValueMapSwitchCI210BaseSwitchEj(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'RewardIdSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 311: range 000000000CED39E8-000000000CED3C30
__int64 __fastcall RewardIdSwitch::isRewardIdNeedBeReplaced(
        RewardIdSwitch *const this,
        uint32_t reward_id,
        unsigned __int64 replace_reward_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,unsigned int> *p_key_value_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 reward_id:311 64 8 8 iter:313 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RewardIdSwitch::isRewardIdNeedBeReplaced;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = reward_id;
  p_key_value_map = &this->key_value_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            p_key_value_map,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = &this->key_value_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v10->second;
    if ( *(_BYTE *)((replace_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((replace_reward_id & 7) + 3) >= *(_BYTE *)((replace_reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(replace_reward_id);
    }
    *(_DWORD *)replace_reward_id = second;
    result = 1LL;
  }
  if ( v14 == (char *)v3 )
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
  return result;
};

// Line 324: range 000000000CF33348-000000000CF33372
void __cdecl DropIdSwitch::~DropIdSwitch(DropIdSwitch *const this)
{
  DropIdSwitch::~DropIdSwitch(this);
  operator delete(this, 0x48uLL);
};

// Line 324: range 000000000CF332FA-000000000CF33347
void __cdecl DropIdSwitch::~DropIdSwitch(DropIdSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DropIdSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  KeyValueMapSwitch::~KeyValueMapSwitch(this);
};

// Line 326: range 000000000CF29C8C-000000000CF29D89
void __fastcall ZN12DropIdSwitchCI210BaseSwitchEj(DropIdSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12DropIdSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  ZN17KeyValueMapSwitchCI210BaseSwitchEj(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'DropIdSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 327: range 000000000CED3C32-000000000CED3FD4
int32_t __cdecl DropIdSwitch::parseFromJsonStr(DropIdSwitch *const this, const std::string *str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+10h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference __in; // [rsp+18h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *replace_drop_id; // [rsp+28h] [rbp-C8h]
  char v11[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:333 64 8 13 __for_end:333 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DropIdSwitch::parseFromJsonStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  if ( KeyValueMapSwitch::parseFromJsonStr(this, str) )
  {
    result = -1;
  }
  else
  {
    __for_range = &this->key_value_map;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64)) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 32));
      std::get<0ul,unsigned int const,unsigned int>(__in);
      v6 = std::get<1ul,unsigned int const,unsigned int>(__in);
      replace_drop_id = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      if ( !*replace_drop_id )
        *replace_drop_id = 1000101;
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 32));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      341);
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[18])"replace drop_ids:");
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v7, &this->key_value_map);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 344: range 000000000CED3FD6-000000000CED421E
__int64 __fastcall DropIdSwitch::isDropIdNeedBeReplaced(
        DropIdSwitch *const this,
        uint32_t drop_id,
        unsigned __int64 replace_drop_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,unsigned int> *p_key_value_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 drop_id:344 64 8 8 iter:346 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DropIdSwitch::isDropIdNeedBeReplaced;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = drop_id;
  p_key_value_map = &this->key_value_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            p_key_value_map,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = &this->key_value_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v10->second;
    if ( *(_BYTE *)((replace_drop_id >> 3) + 0x7FFF8000) != 0
      && (char)((replace_drop_id & 7) + 3) >= *(_BYTE *)((replace_drop_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(replace_drop_id);
    }
    *(_DWORD *)replace_drop_id = second;
    result = 1LL;
  }
  if ( v14 == (char *)v3 )
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
  return result;
};

// Line 357: range 000000000CF332CE-000000000CF332F8
void __cdecl GatherSwitch::~GatherSwitch(GatherSwitch *const this)
{
  GatherSwitch::~GatherSwitch(this);
  operator delete(this, 0x48uLL);
};

// Line 357: range 000000000CF33280-000000000CF332CD
void __cdecl GatherSwitch::~GatherSwitch(GatherSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GatherSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  ValueSetSwitch::~ValueSetSwitch(this);
};

// Line 359: range 000000000CF2A05E-000000000CF2A15B
void __fastcall ZN12GatherSwitchCI210BaseSwitchEj(GatherSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12GatherSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  ZN14ValueSetSwitchCI210BaseSwitchEj(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'GatherSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 360: range 000000000CED4220-000000000CED42EF
bool __fastcall GatherSwitch::isGatherIdClosed(GatherSwitch *const this, uint32_t gather_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 gather_id:360";
  *(_QWORD *)(v2 + 16) = GatherSwitch::isGatherIdClosed;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gather_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->value_set,
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

// Line 366: range 000000000CF33206-000000000CF33253
void __cdecl GCGBanCardSwitch::~GCGBanCardSwitch(GCGBanCardSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGBanCardSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  ValueSetSwitch::~ValueSetSwitch(this);
};

// Line 366: range 000000000CF33254-000000000CF3327E
void __cdecl GCGBanCardSwitch::~GCGBanCardSwitch(GCGBanCardSwitch *const this)
{
  GCGBanCardSwitch::~GCGBanCardSwitch(this);
  operator delete(this, 0x48uLL);
};

// Line 368: range 000000000CF32424-000000000CF32521
void __fastcall ZN16GCGBanCardSwitchCI210BaseSwitchEj(GCGBanCardSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN16GCGBanCardSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  ZN14ValueSetSwitchCI210BaseSwitchEj(this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'GCGBanCardSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 371: range 000000000CF3318C-000000000CF331D9
void __cdecl AnchorPointSwitch::~AnchorPointSwitch(AnchorPointSwitch *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AnchorPointSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v1;
  BaseSwitch::~BaseSwitch((BaseSwitch *const)this);
};

// Line 371: range 000000000CF331DA-000000000CF33204
void __cdecl AnchorPointSwitch::~AnchorPointSwitch(AnchorPointSwitch *const this)
{
  AnchorPointSwitch::~AnchorPointSwitch(this);
  operator delete(this, 0x20uLL);
};

// Line 376: range 000000000CF2D014-000000000CF2D16D
void __fastcall ZN17AnchorPointSwitchCI210BaseSwitchEj(AnchorPointSwitch *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN17AnchorPointSwitchCI210BaseSwitchEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  BaseSwitch::BaseSwitch((BaseSwitch *const)this, *(_DWORD *)(v2 + 32));
  v5 = (int (**)(...))(&`vtable for'AnchorPointSwitch + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BaseSwitch = v5;
  Vector3::Vector3(&this->position, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->range);
  }
  this->range = 0.0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 378: range 000000000CED444E-000000000CED5575
int32_t __cdecl AnchorPointSwitch::parseFromJsonStr(AnchorPointSwitch *const this, const std::string *str)
{
  double v2; // xmm0_8
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  _BOOL4 v7; // r14d
  Vector3 *p_position; // rcx
  float *p_y; // rcx
  float *p_z; // rcx
  float *p_range; // rcx
  std::pair<const std::string,float*> *i; // r14
  _DWORD *v13; // rax
  unsigned __int64 v14; // rax
  const std::pair<const std::string,float*> *v15; // rax
  unsigned __int64 v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  int v19; // r14d
  Json::Value_0 *v20; // rax
  Json::Value_0 *v21; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  Json::Value *v26; // rax
  _DWORD *v27; // rdx
  int v28; // edx
  unsigned __int64 v29; // rax
  _BOOL4 v30; // r14d
  int32_t v32; // [rsp+8h] [rbp-5A8h]
  std::map<std::string,float*> *__for_range; // [rsp+20h] [rbp-590h]
  std::tuple_element<0,std::pair<const std::string,float*> >::type *key_str; // [rsp+28h] [rbp-588h]
  unsigned __int64 value_ptr; // [rsp+30h] [rbp-580h]
  char v36[1392]; // [rsp+40h] [rbp-570h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1344LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 32 1 9 <unknown> 48 1 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9"
                        " <unknown> 192 8 15 __for_begin:396 224 8 13 __for_end:396 256 8 9 <unknown> 288 32 9 <unknown> "
                        "352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 40 8 jval:382 624 40 9 <unknown> 70"
                        "4 48 17 value_ptr_map:389 784 160 9 <unknown> 1008 272 10 reader:383";
  *(_QWORD *)(v3 + 16) = AnchorPointSwitch::parseFromJsonStr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862740] = -234881024;
  v5[536862741] = -218959118;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862749] = -219021312;
  v5[536862750] = -218959118;
  v5[536862751] = 62194;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  Json::Value::Value(v3 + 544, 0LL);
  Json::Reader::Reader((Json::Reader *)(v3 + 1008));
  if ( !Json::Reader::parse((Json::Reader *const)(v3 + 1008), str, (Json::Value *)(v3 + 544), 1) )
  {
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/feature_switch_mgr.cpp",
      "parseFromJsonStr",
      386);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)(v3 + 288),
           (const char (*)[19])"parse json failed:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v32 = -1;
    v7 = 0;
  }
  else
  {
    p_position = &this->position;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v3 + 64) = p_position;
    std::pair<std::string const,float *>::pair<char const(&)[2],float *,true>(
      (std::pair<const std::string,float*> *const)(v3 + 784),
      (const char (*)[2])"x",
      (float **)(v3 + 64));
    p_y = &this->position.y;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v3 + 96) = p_y;
    std::pair<std::string const,float *>::pair<char const(&)[2],float *,true>(
      (std::pair<const std::string,float*> *const)(v3 + 824),
      (const char (*)[2])"y",
      (float **)(v3 + 96));
    p_z = &this->position.z;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v3 + 128) = p_z;
    std::pair<std::string const,float *>::pair<char const(&)[2],float *,true>(
      (std::pair<const std::string,float*> *const)(v3 + 864),
      (const char (*)[2])"z",
      (float **)(v3 + 128));
    p_range = &this->range;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v3 + 160) = p_range;
    std::pair<std::string const,float *>::pair<char const(&)[6],float *,true>(
      (std::pair<const std::string,float*> *const)(v3 + 904),
      (const char (*)[6])"range",
      (float **)(v3 + 160));
    std::allocator<std::pair<std::string const,float *>>::allocator((std::allocator<std::pair<const std::string,float*> > *const)(v3 + 48));
    std::map<std::string,float *>::map(
      (std::map<std::string,float*> *const)(v3 + 704),
      (std::initializer_list<std::pair<const std::string,float*> >)__PAIR128__(4LL, v3 + 784),
      (const std::less<std::string > *)(v3 + 32),
      (const std::map<std::string,float*>::allocator_type *)(v3 + 48));
    std::allocator<std::pair<std::string const,float *>>::~allocator((std::allocator<std::pair<const std::string,float*> > *const)(v3 + 48));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,float*> *)(v3 + 944);
          i != (std::pair<const std::string,float*> *)(v3 + 784);
          std::pair<std::string const,float *>::~pair(i) )
    {
      --i;
    }
    v13 = (_DWORD *)(((v3 + 784) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    v13[2] = -117901064;
    v13[3] = -117901064;
    v13[4] = -117901064;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    __for_range = (std::map<std::string,float*> *)(v3 + 704);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<std::string,float*>::iterator *)(v3 + 192) = std::map<std::string,float *>::begin(__for_range);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<std::string,float*>::iterator *)(v3 + 224) = std::map<std::string,float *>::end(__for_range);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const std::string,float*> >::_Self *)(v3 + 192),
              (const std::_Rb_tree_iterator<std::pair<const std::string,float*> >::_Self *)(v3 + 224)) )
    {
      v14 = ((v3 + 624) >> 3) + 2147450880;
      *(_DWORD *)v14 = 0;
      *(_BYTE *)(v14 + 4) = 0;
      v15 = std::_Rb_tree_iterator<std::pair<std::string const,float *>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,float*> > *const)(v3 + 192));
      std::pair<std::string const,float *>::pair((std::pair<const std::string,float*> *const)(v3 + 624), v15);
      key_str = std::get<0ul,std::string const,float *>((std::pair<const std::string,float*> *)(v3 + 624));
      v16 = (unsigned __int64)std::get<1ul,std::string const,float *>((std::pair<const std::string,float*> *)(v3 + 624));
      value_ptr = v16;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8(v16);
      if ( *(_QWORD *)value_ptr )
      {
        v20 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 544), key_str);
        if ( Json::Value::isNull(v20)
          || (v21 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 544), key_str), !Json::Value::isDouble(v21)) )
        {
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/feature_switch_mgr.cpp",
            "parseFromJsonStr",
            405);
          v23 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[33])"json value is null or not float:");
          v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, key_str);
          v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" str:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, str);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v32 = -1;
          v19 = 0;
        }
        else
        {
          v26 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v3 + 544), key_str);
          Json::Value::asDouble(v26);
          if ( *(_BYTE *)((value_ptr >> 3) + 0x7FFF8000) )
            v2 = __asan_report_load8(value_ptr);
          v27 = *(_DWORD **)value_ptr;
          *(float *)&v2 = v2;
          if ( *(_BYTE *)((*(_QWORD *)value_ptr >> 3) + 0x7FFF8000LL) != 0
            && (char)((*(_QWORD *)value_ptr & 7) + 3) >= *(_BYTE *)((*(_QWORD *)value_ptr >> 3) + 0x7FFF8000LL) )
          {
            __asan_report_store4(*(_QWORD *)value_ptr);
          }
          *v27 = LODWORD(v2);
          v19 = 1;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/feature_switch_mgr.cpp",
          "parseFromJsonStr",
          400);
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[9])"key_str:");
        v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, key_str);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v18, (const char (*)[19])" value_ptr is null");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v32 = -1;
        v19 = 0;
      }
      std::pair<std::string const,float *>::~pair((std::pair<const std::string,float*> *const)(v3 + 624));
      if ( v19 != 1 )
      {
        v28 = 0;
        goto LABEL_48;
      }
      std::_Rb_tree_iterator<std::pair<std::string const,float *>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,float*> > *const)(v3 + 192));
    }
    v28 = 1;
LABEL_48:
    v29 = ((v3 + 624) >> 3) + 2147450880;
    *(_DWORD *)v29 = -117901064;
    *(_BYTE *)(v29 + 4) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    v30 = v28 == 1;
    std::map<std::string,float *>::~map((std::map<std::string,float*> *const)(v3 + 704));
    v7 = v30;
  }
  Json::Reader::~Reader((Json::Reader *const)(v3 + 1008));
  Json::Value::~Value((Json::Value_0 *const)(v3 + 544));
  if ( v7 )
    v32 = 0;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 168) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1344LL, v36);
  }
  return v32;
};

// Line 419: range 000000000CED5576-000000000CED5816
bool __cdecl AnchorPointSwitch::operator==(const AnchorPointSwitch *const this, const BaseSwitch *rhs)
{
  const AnchorPointSwitch *v2; // rax
  double v3; // xmm0_8
  double v4; // xmm0_8
  double v5; // xmm0_8
  double v6; // xmm0_8
  const AnchorPointSwitch *cls_ptr; // [rsp+18h] [rbp-8h]

  if ( rhs )
    v2 = (const AnchorPointSwitch *)__dynamic_cast(
                                      rhs,
                                      (const struct __class_type_info *)&`typeinfo for'BaseSwitch,
                                      (const struct __class_type_info *)&`typeinfo for'AnchorPointSwitch,
                                      0LL);
  else
    v2 = 0LL;
  cls_ptr = v2;
  if ( !v2 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position);
  }
  *(float *)&v3 = this->position.x;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->position >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&cls_ptr->position);
  }
  if ( *(float *)&v3 != cls_ptr->position.x )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->position.y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->position.y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->position.y);
  }
  *(float *)&v4 = this->position.y;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->position.y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cls_ptr->position.y >> 3) + 0x7FFF8000) <= 3 )
  {
    v4 = __asan_report_load4(&cls_ptr->position.y);
  }
  if ( *(float *)&v4 != cls_ptr->position.y )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->position.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position.z);
  }
  *(float *)&v5 = this->position.z;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->position.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cls_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cls_ptr->position.z >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&cls_ptr->position.z);
  }
  if ( *(float *)&v5 != cls_ptr->position.z )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->range);
  }
  *(float *)&v6 = this->range;
  if ( *(_BYTE *)(((unsigned __int64)&cls_ptr->range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cls_ptr->range >> 3) + 0x7FFF8000) <= 3 )
  {
    v6 = __asan_report_load4(&cls_ptr->range);
  }
  return *(float *)&v6 == cls_ptr->range;
};

// Line 429: range 000000000CED5818-000000000CED5882
bool __cdecl AnchorPointSwitch::isAnchorPointNeedToDelete(
        const AnchorPointSwitch *const this,
        const Vector3 *anchor_point_position)
{
  double v2; // xmm0_8

  *(float *)&v2 = getDistance(&this->position, anchor_point_position);
  if ( *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4(&this->range);
  }
  return this->range >= *(float *)&v2;
};

// Line 436: range 000000000CEB5850-000000000CEB8572
FeatureSwitchMgr *__fastcall FeatureSwitchMgr::createSwitch(
        FeatureSwitchMgr *const this,
        uint32_t switch_type,
        const std::string *json_str,
        __int64 a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // eax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  int v14; // [rsp+Ch] [rbp-A14h]
  char v15[2560]; // [rsp+20h] [rbp-A00h] BYREF

  v14 = (int)json_str;
  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_6(2528LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "76 48 4 15 switch_type:435 64 16 14 switch_ptr:437 96 16 9 <unknown> 128 16 9 <unknown> 160 16 9"
                        " <unknown> 192 16 9 <unknown> 224 16 9 <unknown> 256 16 9 <unknown> 288 16 9 <unknown> 320 16 9 "
                        "<unknown> 352 16 9 <unknown> 384 16 9 <unknown> 416 16 9 <unknown> 448 16 9 <unknown> 480 16 9 <"
                        "unknown> 512 16 9 <unknown> 544 16 9 <unknown> 576 16 9 <unknown> 608 16 9 <unknown> 640 16 9 <u"
                        "nknown> 672 16 9 <unknown> 704 16 9 <unknown> 736 16 9 <unknown> 768 16 9 <unknown> 800 16 9 <un"
                        "known> 832 16 9 <unknown> 864 16 9 <unknown> 896 16 9 <unknown> 928 16 9 <unknown> 960 16 9 <unk"
                        "nown> 992 16 9 <unknown> 1024 16 9 <unknown> 1056 16 9 <unknown> 1088 16 9 <unknown> 1120 16 9 <"
                        "unknown> 1152 16 9 <unknown> 1184 16 9 <unknown> 1216 16 9 <unknown> 1248 16 9 <unknown> 1280 16"
                        " 9 <unknown> 1312 16 9 <unknown> 1344 16 9 <unknown> 1376 16 9 <unknown> 1408 16 9 <unknown> 144"
                        "0 16 9 <unknown> 1472 16 9 <unknown> 1504 16 9 <unknown> 1536 16 9 <unknown> 1568 16 9 <unknown>"
                        " 1600 16 9 <unknown> 1632 16 9 <unknown> 1664 16 9 <unknown> 1696 16 9 <unknown> 1728 16 9 <unkn"
                        "own> 1760 16 9 <unknown> 1792 16 9 <unknown> 1824 16 9 <unknown> 1856 16 9 <unknown> 1888 16 9 <"
                        "unknown> 1920 16 9 <unknown> 1952 16 9 <unknown> 1984 16 9 <unknown> 2016 16 9 <unknown> 2048 16"
                        " 9 <unknown> 2080 16 9 <unknown> 2112 16 9 <unknown> 2144 16 9 <unknown> 2176 16 9 <unknown> 220"
                        "8 16 9 <unknown> 2240 16 9 <unknown> 2272 16 9 <unknown> 2304 16 9 <unknown> 2336 16 9 <unknown>"
                        " 2368 16 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = FeatureSwitchMgr::createSwitch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -219021312;
  v6[536862730] = -219021312;
  v6[536862731] = -219021312;
  v6[536862732] = -219021312;
  v6[536862733] = -219021312;
  v6[536862734] = -219021312;
  v6[536862735] = -219021312;
  v6[536862736] = -219021312;
  v6[536862737] = -219021312;
  v6[536862738] = -219021312;
  v6[536862739] = -219021312;
  v6[536862740] = -219021312;
  v6[536862741] = -219021312;
  v6[536862742] = -219021312;
  v6[536862743] = -219021312;
  v6[536862744] = -219021312;
  v6[536862745] = -219021312;
  v6[536862746] = -219021312;
  v6[536862747] = -219021312;
  v6[536862748] = -219021312;
  v6[536862749] = -219021312;
  v6[536862750] = -219021312;
  v6[536862751] = -219021312;
  v6[536862752] = -219021312;
  v6[536862753] = -219021312;
  v6[536862754] = -219021312;
  v6[536862755] = -219021312;
  v6[536862756] = -219021312;
  v6[536862757] = -219021312;
  v6[536862758] = -219021312;
  v6[536862759] = -219021312;
  v6[536862760] = -219021312;
  v6[536862761] = -219021312;
  v6[536862762] = -219021312;
  v6[536862763] = -219021312;
  v6[536862764] = -219021312;
  v6[536862765] = -219021312;
  v6[536862766] = -219021312;
  v6[536862767] = -219021312;
  v6[536862768] = -219021312;
  v6[536862769] = -219021312;
  v6[536862770] = -219021312;
  v6[536862771] = -219021312;
  v6[536862772] = -219021312;
  v6[536862773] = -219021312;
  v6[536862774] = -219021312;
  v6[536862775] = -219021312;
  v6[536862776] = -219021312;
  v6[536862777] = -219021312;
  v6[536862778] = -219021312;
  v6[536862779] = -219021312;
  v6[536862780] = -219021312;
  v6[536862781] = -219021312;
  v6[536862782] = -219021312;
  v6[536862783] = -219021312;
  v6[536862784] = -219021312;
  v6[536862785] = -219021312;
  v6[536862786] = -219021312;
  v6[536862787] = -219021312;
  v6[536862788] = -219021312;
  v6[536862789] = -219021312;
  v6[536862790] = -219021312;
  v6[536862791] = -219021312;
  v6[536862792] = -219021312;
  v6[536862793] = -219021312;
  v6[536862794] = -219021312;
  v6[536862796] = -218959118;
  v6[536862798] = -202116109;
  *(_DWORD *)(v4 + 48) = v14;
  std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v4 + 64), 0LL);
  v7 = *(_DWORD *)(v4 + 48);
  if ( v7 <= 0xCEC )
  {
    if ( v7 >= 0xCE5 )
    {
      switch ( v7 )
      {
        case 0xCE5u:
          if ( *(_WORD *)(((v4 + 2144) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v4 + 2144, 0LL);
          std::make_shared<QuestAvatarRenameAuditSwitch,unsigned int &>(
            (unsigned int *)(v4 + 2144),
            (unsigned int *)(v4 + 48));
          std::shared_ptr<BaseSwitch>::operator=<QuestAvatarRenameAuditSwitch>(
            (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
            (std::shared_ptr<QuestAvatarRenameAuditSwitch> *)(v4 + 2144));
          std::shared_ptr<QuestAvatarRenameAuditSwitch>::~shared_ptr((std::shared_ptr<QuestAvatarRenameAuditSwitch> *const)(v4 + 2144));
          *(_WORD *)(((v4 + 2144) >> 3) + 0x7FFF8000) = -1800;
          break;
        case 0xCE6u:
          if ( *(_WORD *)(((v4 + 2176) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v4 + 2176, 0LL);
          std::make_shared<ItemAvatarRenameAuditSwitch,unsigned int &>(
            (unsigned int *)(v4 + 2176),
            (unsigned int *)(v4 + 48));
          std::shared_ptr<BaseSwitch>::operator=<ItemAvatarRenameAuditSwitch>(
            (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
            (std::shared_ptr<ItemAvatarRenameAuditSwitch> *)(v4 + 2176));
          std::shared_ptr<ItemAvatarRenameAuditSwitch>::~shared_ptr((std::shared_ptr<ItemAvatarRenameAuditSwitch> *const)(v4 + 2176));
          *(_WORD *)(((v4 + 2176) >> 3) + 0x7FFF8000) = -1800;
          break;
        case 0xCE7u:
          if ( *(_WORD *)(((v4 + 2208) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v4 + 2208, 0LL);
          std::make_shared<GCGPreviewSwitch,unsigned int &>((unsigned int *)(v4 + 2208), (unsigned int *)(v4 + 48));
          std::shared_ptr<BaseSwitch>::operator=<GCGPreviewSwitch>(
            (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
            (std::shared_ptr<GCGPreviewSwitch> *)(v4 + 2208));
          std::shared_ptr<GCGPreviewSwitch>::~shared_ptr((std::shared_ptr<GCGPreviewSwitch> *const)(v4 + 2208));
          *(_WORD *)(((v4 + 2208) >> 3) + 0x7FFF8000) = -1800;
          break;
        case 0xCE8u:
          if ( *(_WORD *)(((v4 + 2240) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v4 + 2240, 0LL);
          std::make_shared<GCGMatchSwitch,unsigned int &>((unsigned int *)(v4 + 2240), (unsigned int *)(v4 + 48));
          std::shared_ptr<BaseSwitch>::operator=<GCGMatchSwitch>(
            (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
            (std::shared_ptr<GCGMatchSwitch> *)(v4 + 2240));
          std::shared_ptr<GCGMatchSwitch>::~shared_ptr((std::shared_ptr<GCGMatchSwitch> *const)(v4 + 2240));
          *(_WORD *)(((v4 + 2240) >> 3) + 0x7FFF8000) = -1800;
          break;
        case 0xCE9u:
          if ( *(_WORD *)(((v4 + 2272) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v4 + 2272, 0LL);
          std::make_shared<GCGPvpSwitch,unsigned int &>((unsigned int *)(v4 + 2272), (unsigned int *)(v4 + 48));
          std::shared_ptr<BaseSwitch>::operator=<GCGPvpSwitch>(
            (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
            (std::shared_ptr<GCGPvpSwitch> *)(v4 + 2272));
          std::shared_ptr<GCGPvpSwitch>::~shared_ptr((std::shared_ptr<GCGPvpSwitch> *const)(v4 + 2272));
          *(_WORD *)(((v4 + 2272) >> 3) + 0x7FFF8000) = -1800;
          break;
        case 0xCEAu:
          if ( *(_WORD *)(((v4 + 2304) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v4 + 2304, 0LL);
          std::make_shared<GCGPveSwitch,unsigned int &>((unsigned int *)(v4 + 2304), (unsigned int *)(v4 + 48));
          std::shared_ptr<BaseSwitch>::operator=<GCGPveSwitch>(
            (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
            (std::shared_ptr<GCGPveSwitch> *)(v4 + 2304));
          std::shared_ptr<GCGPveSwitch>::~shared_ptr((std::shared_ptr<GCGPveSwitch> *const)(v4 + 2304));
          *(_WORD *)(((v4 + 2304) >> 3) + 0x7FFF8000) = -1800;
          break;
        case 0xCEBu:
          if ( *(_WORD *)(((v4 + 2336) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v4 + 2336, 0LL);
          std::make_shared<GCGBanCardSwitch,unsigned int &>((unsigned int *)(v4 + 2336), (unsigned int *)(v4 + 48));
          std::shared_ptr<BaseSwitch>::operator=<GCGBanCardSwitch>(
            (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
            (std::shared_ptr<GCGBanCardSwitch> *)(v4 + 2336));
          std::shared_ptr<GCGBanCardSwitch>::~shared_ptr((std::shared_ptr<GCGBanCardSwitch> *const)(v4 + 2336));
          *(_WORD *)(((v4 + 2336) >> 3) + 0x7FFF8000) = -1800;
          break;
        case 0xCECu:
          if ( *(_WORD *)(((v4 + 2368) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v4 + 2368, 0LL);
          std::make_shared<IPRegionSwitch,unsigned int &>((unsigned int *)(v4 + 2368), (unsigned int *)(v4 + 48));
          std::shared_ptr<BaseSwitch>::operator=<IPRegionSwitch>(
            (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
            (std::shared_ptr<IPRegionSwitch> *)(v4 + 2368));
          std::shared_ptr<IPRegionSwitch>::~shared_ptr((std::shared_ptr<IPRegionSwitch> *const)(v4 + 2368));
          *(_WORD *)(((v4 + 2368) >> 3) + 0x7FFF8000) = -1800;
          break;
        default:
          break;
      }
    }
    else if ( v7 == 3203 )
    {
      if ( *(_WORD *)(((v4 + 2112) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v4 + 2112, 0LL);
      std::make_shared<EnvironmentErrorKickSwitch,unsigned int &>(
        (unsigned int *)(v4 + 2112),
        (unsigned int *)(v4 + 48));
      std::shared_ptr<BaseSwitch>::operator=<EnvironmentErrorKickSwitch>(
        (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
        (std::shared_ptr<EnvironmentErrorKickSwitch> *)(v4 + 2112));
      std::shared_ptr<EnvironmentErrorKickSwitch>::~shared_ptr((std::shared_ptr<EnvironmentErrorKickSwitch> *const)(v4 + 2112));
      *(_WORD *)(((v4 + 2112) >> 3) + 0x7FFF8000) = -1800;
    }
    else if ( v7 <= 0xC83 )
    {
      switch ( v7 )
      {
        case 0xC82u:
          if ( *(_WORD *)(((v4 + 2080) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v4 + 2080, 0LL);
          std::make_shared<AntiOfflineKickSwitch,unsigned int &>((unsigned int *)(v4 + 2080), (unsigned int *)(v4 + 48));
          std::shared_ptr<BaseSwitch>::operator=<AntiOfflineKickSwitch>(
            (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
            (std::shared_ptr<AntiOfflineKickSwitch> *)(v4 + 2080));
          std::shared_ptr<AntiOfflineKickSwitch>::~shared_ptr((std::shared_ptr<AntiOfflineKickSwitch> *const)(v4 + 2080));
          *(_WORD *)(((v4 + 2080) >> 3) + 0x7FFF8000) = -1800;
          break;
        case 0xC81u:
          if ( *(_WORD *)(((v4 + 2048) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v4 + 2048, 0LL);
          std::make_shared<HomeBlueprintSwitch,unsigned int &>((unsigned int *)(v4 + 2048), (unsigned int *)(v4 + 48));
          std::shared_ptr<BaseSwitch>::operator=<HomeBlueprintSwitch>(
            (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
            (std::shared_ptr<HomeBlueprintSwitch> *)(v4 + 2048));
          std::shared_ptr<HomeBlueprintSwitch>::~shared_ptr((std::shared_ptr<HomeBlueprintSwitch> *const)(v4 + 2048));
          *(_WORD *)(((v4 + 2048) >> 3) + 0x7FFF8000) = -1800;
          break;
        case 0xC1Du:
          if ( *(_WORD *)(((v4 + 2016) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v4 + 2016, 0LL);
          std::make_shared<GeneralGachaRestrictSwitch,unsigned int &>(
            (unsigned int *)(v4 + 2016),
            (unsigned int *)(v4 + 48));
          std::shared_ptr<BaseSwitch>::operator=<GeneralGachaRestrictSwitch>(
            (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
            (std::shared_ptr<GeneralGachaRestrictSwitch> *)(v4 + 2016));
          std::shared_ptr<GeneralGachaRestrictSwitch>::~shared_ptr((std::shared_ptr<GeneralGachaRestrictSwitch> *const)(v4 + 2016));
          *(_WORD *)(((v4 + 2016) >> 3) + 0x7FFF8000) = -1800;
          break;
        default:
          if ( v7 <= 0xC1D )
          {
            if ( v7 > 0x3C )
            {
              if ( v7 == 2801 )
              {
                if ( *(_WORD *)(((v4 + 1984) >> 3) + 0x7FFF8000) )
                  __asan_report_store16(v4 + 1984, 0LL);
                std::make_shared<SafeServerNotifySwitch,unsigned int &>(
                  (unsigned int *)(v4 + 1984),
                  (unsigned int *)(v4 + 48));
                std::shared_ptr<BaseSwitch>::operator=<SafeServerNotifySwitch>(
                  (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                  (std::shared_ptr<SafeServerNotifySwitch> *)(v4 + 1984));
                std::shared_ptr<SafeServerNotifySwitch>::~shared_ptr((std::shared_ptr<SafeServerNotifySwitch> *const)(v4 + 1984));
                *(_WORD *)(((v4 + 1984) >> 3) + 0x7FFF8000) = -1800;
              }
            }
            else if ( v7 )
            {
              switch ( v7 )
              {
                case 1u:
                  if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 96, 0LL);
                  std::make_shared<Friend,unsigned int &>((unsigned int *)(v4 + 96), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<Friend>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<Friend> *)(v4 + 96));
                  std::shared_ptr<Friend>::~shared_ptr((std::shared_ptr<Friend> *const)(v4 + 96));
                  *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 2u:
                  if ( *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 128, 0LL);
                  std::make_shared<AskAddFriend,unsigned int &>((unsigned int *)(v4 + 128), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<AskAddFriend>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<AskAddFriend> *)(v4 + 128));
                  std::shared_ptr<AskAddFriend>::~shared_ptr((std::shared_ptr<AskAddFriend> *const)(v4 + 128));
                  *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 3u:
                  if ( *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 160, 0LL);
                  std::make_shared<TowerFloor,unsigned int &>((unsigned int *)(v4 + 160), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<TowerFloor>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<TowerFloor> *)(v4 + 160));
                  std::shared_ptr<TowerFloor>::~shared_ptr((std::shared_ptr<TowerFloor> *const)(v4 + 160));
                  *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 4u:
                  if ( *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 192, 0LL);
                  std::make_shared<Mp,unsigned int &>((unsigned int *)(v4 + 192), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<Mp>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<Mp> *)(v4 + 192));
                  std::shared_ptr<Mp>::~shared_ptr((std::shared_ptr<Mp> *const)(v4 + 192));
                  *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 5u:
                  if ( *(_WORD *)(((v4 + 224) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 224, 0LL);
                  std::make_shared<Blossom,unsigned int &>((unsigned int *)(v4 + 224), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<Blossom>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<Blossom> *)(v4 + 224));
                  std::shared_ptr<Blossom>::~shared_ptr((std::shared_ptr<Blossom> *const)(v4 + 224));
                  *(_WORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 6u:
                  if ( *(_WORD *)(((v4 + 352) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 352, 0LL);
                  std::make_shared<BattlePass,unsigned int &>((unsigned int *)(v4 + 352), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<BattlePass>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<BattlePass> *)(v4 + 352));
                  std::shared_ptr<BattlePass>::~shared_ptr((std::shared_ptr<BattlePass> *const)(v4 + 352));
                  *(_WORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 7u:
                  if ( *(_WORD *)(((v4 + 256) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 256, 0LL);
                  std::make_shared<Dungeon,unsigned int &>((unsigned int *)(v4 + 256), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<Dungeon>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<Dungeon> *)(v4 + 256));
                  std::shared_ptr<Dungeon>::~shared_ptr((std::shared_ptr<Dungeon> *const)(v4 + 256));
                  *(_WORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 8u:
                  if ( *(_WORD *)(((v4 + 384) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 384, 0LL);
                  std::make_shared<PushPlatform,unsigned int &>((unsigned int *)(v4 + 384), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<PushPlatform>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<PushPlatform> *)(v4 + 384));
                  std::shared_ptr<PushPlatform>::~shared_ptr((std::shared_ptr<PushPlatform> *const)(v4 + 384));
                  *(_WORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 9u:
                  if ( *(_WORD *)(((v4 + 416) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 416, 0LL);
                  std::make_shared<Recharge,unsigned int &>((unsigned int *)(v4 + 416), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<Recharge>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<Recharge> *)(v4 + 416));
                  std::shared_ptr<Recharge>::~shared_ptr((std::shared_ptr<Recharge> *const)(v4 + 416));
                  *(_WORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0xAu:
                  if ( *(_WORD *)(((v4 + 576) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 576, 0LL);
                  std::make_shared<Shop,unsigned int &>((unsigned int *)(v4 + 576), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<Shop>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<Shop> *)(v4 + 576));
                  std::shared_ptr<Shop>::~shared_ptr((std::shared_ptr<Shop> *const)(v4 + 576));
                  *(_WORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0xBu:
                  if ( *(_WORD *)(((v4 + 608) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 608, 0LL);
                  std::make_shared<DailyTask,unsigned int &>((unsigned int *)(v4 + 608), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<DailyTask>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<DailyTask> *)(v4 + 608));
                  std::shared_ptr<DailyTask>::~shared_ptr((std::shared_ptr<DailyTask> *const)(v4 + 608));
                  *(_WORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0xCu:
                  if ( *(_WORD *)(((v4 + 640) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 640, 0LL);
                  std::make_shared<RandTask,unsigned int &>((unsigned int *)(v4 + 640), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<RandTask>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<RandTask> *)(v4 + 640));
                  std::shared_ptr<RandTask>::~shared_ptr((std::shared_ptr<RandTask> *const)(v4 + 640));
                  *(_WORD *)(((v4 + 640) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0xDu:
                  if ( *(_WORD *)(((v4 + 448) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 448, 0LL);
                  std::make_shared<RewardIdSwitch,unsigned int &>((unsigned int *)(v4 + 448), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<RewardIdSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<RewardIdSwitch> *)(v4 + 448));
                  std::shared_ptr<RewardIdSwitch>::~shared_ptr((std::shared_ptr<RewardIdSwitch> *const)(v4 + 448));
                  *(_WORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0xEu:
                  if ( *(_WORD *)(((v4 + 480) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 480, 0LL);
                  std::make_shared<DropIdSwitch,unsigned int &>((unsigned int *)(v4 + 480), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<DropIdSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<DropIdSwitch> *)(v4 + 480));
                  std::shared_ptr<DropIdSwitch>::~shared_ptr((std::shared_ptr<DropIdSwitch> *const)(v4 + 480));
                  *(_WORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0xFu:
                  if ( *(_WORD *)(((v4 + 512) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 512, 0LL);
                  std::make_shared<GatherSwitch,unsigned int &>((unsigned int *)(v4 + 512), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<GatherSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<GatherSwitch> *)(v4 + 512));
                  std::shared_ptr<GatherSwitch>::~shared_ptr((std::shared_ptr<GatherSwitch> *const)(v4 + 512));
                  *(_WORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x10u:
                  if ( *(_WORD *)(((v4 + 544) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 544, 0LL);
                  std::make_shared<ChangeGameTimeSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 544),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<ChangeGameTimeSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<ChangeGameTimeSwitch> *)(v4 + 544));
                  std::shared_ptr<ChangeGameTimeSwitch>::~shared_ptr((std::shared_ptr<ChangeGameTimeSwitch> *const)(v4 + 544));
                  *(_WORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x11u:
                  if ( *(_WORD *)(((v4 + 672) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 672, 0LL);
                  std::make_shared<ForgeSwitch,unsigned int &>((unsigned int *)(v4 + 672), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<ForgeSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<ForgeSwitch> *)(v4 + 672));
                  std::shared_ptr<ForgeSwitch>::~shared_ptr((std::shared_ptr<ForgeSwitch> *const)(v4 + 672));
                  *(_WORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x12u:
                  if ( *(_WORD *)(((v4 + 704) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 704, 0LL);
                  std::make_shared<CookSwitch,unsigned int &>((unsigned int *)(v4 + 704), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<CookSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<CookSwitch> *)(v4 + 704));
                  std::shared_ptr<CookSwitch>::~shared_ptr((std::shared_ptr<CookSwitch> *const)(v4 + 704));
                  *(_WORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x13u:
                  if ( *(_WORD *)(((v4 + 736) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 736, 0LL);
                  std::make_shared<CombineSwitch,unsigned int &>((unsigned int *)(v4 + 736), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<CombineSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<CombineSwitch> *)(v4 + 736));
                  std::shared_ptr<CombineSwitch>::~shared_ptr((std::shared_ptr<CombineSwitch> *const)(v4 + 736));
                  *(_WORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x14u:
                  if ( *(_WORD *)(((v4 + 768) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 768, 0LL);
                  std::make_shared<WeaponSwitch,unsigned int &>((unsigned int *)(v4 + 768), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<WeaponSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<WeaponSwitch> *)(v4 + 768));
                  std::shared_ptr<WeaponSwitch>::~shared_ptr((std::shared_ptr<WeaponSwitch> *const)(v4 + 768));
                  *(_WORD *)(((v4 + 768) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x15u:
                  if ( *(_WORD *)(((v4 + 800) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 800, 0LL);
                  std::make_shared<ReliquarySwitch,unsigned int &>(
                    (unsigned int *)(v4 + 800),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<ReliquarySwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<ReliquarySwitch> *)(v4 + 800));
                  std::shared_ptr<ReliquarySwitch>::~shared_ptr((std::shared_ptr<ReliquarySwitch> *const)(v4 + 800));
                  *(_WORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x16u:
                  if ( *(_WORD *)(((v4 + 832) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 832, 0LL);
                  std::make_shared<ItemSwitch,unsigned int &>((unsigned int *)(v4 + 832), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<ItemSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<ItemSwitch> *)(v4 + 832));
                  std::shared_ptr<ItemSwitch>::~shared_ptr((std::shared_ptr<ItemSwitch> *const)(v4 + 832));
                  *(_WORD *)(((v4 + 832) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x17u:
                  if ( *(_WORD *)(((v4 + 864) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 864, 0LL);
                  std::make_shared<AvatarSwitch,unsigned int &>((unsigned int *)(v4 + 864), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<AvatarSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<AvatarSwitch> *)(v4 + 864));
                  std::shared_ptr<AvatarSwitch>::~shared_ptr((std::shared_ptr<AvatarSwitch> *const)(v4 + 864));
                  *(_WORD *)(((v4 + 864) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x18u:
                  if ( *(_WORD *)(((v4 + 896) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 896, 0LL);
                  std::make_shared<CityReputationSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 896),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<CityReputationSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<CityReputationSwitch> *)(v4 + 896));
                  std::shared_ptr<CityReputationSwitch>::~shared_ptr((std::shared_ptr<CityReputationSwitch> *const)(v4 + 896));
                  *(_WORD *)(((v4 + 896) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x19u:
                  if ( *(_WORD *)(((v4 + 928) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 928, 0LL);
                  std::make_shared<MpPlaySwitch,unsigned int &>((unsigned int *)(v4 + 928), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<MpPlaySwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<MpPlaySwitch> *)(v4 + 928));
                  std::shared_ptr<MpPlaySwitch>::~shared_ptr((std::shared_ptr<MpPlaySwitch> *const)(v4 + 928));
                  *(_WORD *)(((v4 + 928) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x1Au:
                  if ( *(_WORD *)(((v4 + 960) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 960, 0LL);
                  std::make_shared<SightGroupSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 960),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<SightGroupSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<SightGroupSwitch> *)(v4 + 960));
                  std::shared_ptr<SightGroupSwitch>::~shared_ptr((std::shared_ptr<SightGroupSwitch> *const)(v4 + 960));
                  *(_WORD *)(((v4 + 960) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x1Bu:
                  if ( *(_WORD *)(((v4 + 992) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 992, 0LL);
                  std::make_shared<NotifyEyePointSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 992),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<NotifyEyePointSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<NotifyEyePointSwitch> *)(v4 + 992));
                  std::shared_ptr<NotifyEyePointSwitch>::~shared_ptr((std::shared_ptr<NotifyEyePointSwitch> *const)(v4 + 992));
                  *(_WORD *)(((v4 + 992) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x1Cu:
                  if ( *(_WORD *)(((v4 + 1024) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1024, 0LL);
                  std::make_shared<EyePointAsEyeSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1024),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<EyePointAsEyeSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<EyePointAsEyeSwitch> *)(v4 + 1024));
                  std::shared_ptr<EyePointAsEyeSwitch>::~shared_ptr((std::shared_ptr<EyePointAsEyeSwitch> *const)(v4 + 1024));
                  *(_WORD *)(((v4 + 1024) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x1Du:
                  if ( *(_WORD *)(((v4 + 1056) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1056, 0LL);
                  std::make_shared<GroupVisionTypeSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1056),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<GroupVisionTypeSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<GroupVisionTypeSwitch> *)(v4 + 1056));
                  std::shared_ptr<GroupVisionTypeSwitch>::~shared_ptr((std::shared_ptr<GroupVisionTypeSwitch> *const)(v4 + 1056));
                  *(_WORD *)(((v4 + 1056) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x1Eu:
                  if ( *(_WORD *)(((v4 + 1088) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1088, 0LL);
                  std::make_shared<OfferingSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1088),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<OfferingSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<OfferingSwitch> *)(v4 + 1088));
                  std::shared_ptr<OfferingSwitch>::~shared_ptr((std::shared_ptr<OfferingSwitch> *const)(v4 + 1088));
                  *(_WORD *)(((v4 + 1088) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x1Fu:
                  if ( *(_WORD *)(((v4 + 1120) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1120, 0LL);
                  std::make_shared<RoutineSwitch,unsigned int &>((unsigned int *)(v4 + 1120), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<RoutineSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<RoutineSwitch> *)(v4 + 1120));
                  std::shared_ptr<RoutineSwitch>::~shared_ptr((std::shared_ptr<RoutineSwitch> *const)(v4 + 1120));
                  *(_WORD *)(((v4 + 1120) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x20u:
                  if ( *(_WORD *)(((v4 + 1152) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1152, 0LL);
                  std::make_shared<AnchorPointSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1152),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<AnchorPointSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<AnchorPointSwitch> *)(v4 + 1152));
                  std::shared_ptr<AnchorPointSwitch>::~shared_ptr((std::shared_ptr<AnchorPointSwitch> *const)(v4 + 1152));
                  *(_WORD *)(((v4 + 1152) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x21u:
                  if ( *(_WORD *)(((v4 + 1184) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1184, 0LL);
                  std::make_shared<ActivitySaleSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1184),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<ActivitySaleSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<ActivitySaleSwitch> *)(v4 + 1184));
                  std::shared_ptr<ActivitySaleSwitch>::~shared_ptr((std::shared_ptr<ActivitySaleSwitch> *const)(v4 + 1184));
                  *(_WORD *)(((v4 + 1184) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x22u:
                  if ( *(_WORD *)(((v4 + 1216) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1216, 0LL);
                  std::make_shared<MechanicusSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1216),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<MechanicusSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<MechanicusSwitch> *)(v4 + 1216));
                  std::shared_ptr<MechanicusSwitch>::~shared_ptr((std::shared_ptr<MechanicusSwitch> *const)(v4 + 1216));
                  *(_WORD *)(((v4 + 1216) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x23u:
                  if ( *(_WORD *)(((v4 + 1248) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1248, 0LL);
                  std::make_shared<MechanicusPunishSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1248),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<MechanicusPunishSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<MechanicusPunishSwitch> *)(v4 + 1248));
                  std::shared_ptr<MechanicusPunishSwitch>::~shared_ptr((std::shared_ptr<MechanicusPunishSwitch> *const)(v4 + 1248));
                  *(_WORD *)(((v4 + 1248) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x24u:
                  if ( *(_WORD *)(((v4 + 1280) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1280, 0LL);
                  std::make_shared<WorldLevelAdjustSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1280),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<WorldLevelAdjustSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<WorldLevelAdjustSwitch> *)(v4 + 1280));
                  std::shared_ptr<WorldLevelAdjustSwitch>::~shared_ptr((std::shared_ptr<WorldLevelAdjustSwitch> *const)(v4 + 1280));
                  *(_WORD *)(((v4 + 1280) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x25u:
                  if ( *(_WORD *)(((v4 + 1312) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1312, 0LL);
                  std::make_shared<EnterHomeWorldSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1312),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<EnterHomeWorldSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<EnterHomeWorldSwitch> *)(v4 + 1312));
                  std::shared_ptr<EnterHomeWorldSwitch>::~shared_ptr((std::shared_ptr<EnterHomeWorldSwitch> *const)(v4 + 1312));
                  *(_WORD *)(((v4 + 1312) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x26u:
                  if ( *(_WORD *)(((v4 + 1344) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1344, 0LL);
                  std::make_shared<HomeMpSwitch,unsigned int &>((unsigned int *)(v4 + 1344), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<HomeMpSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<HomeMpSwitch> *)(v4 + 1344));
                  std::shared_ptr<HomeMpSwitch>::~shared_ptr((std::shared_ptr<HomeMpSwitch> *const)(v4 + 1344));
                  *(_WORD *)(((v4 + 1344) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x28u:
                  if ( *(_WORD *)(((v4 + 1376) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1376, 0LL);
                  std::make_shared<HomeEditModeSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1376),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<HomeEditModeSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<HomeEditModeSwitch> *)(v4 + 1376));
                  std::shared_ptr<HomeEditModeSwitch>::~shared_ptr((std::shared_ptr<HomeEditModeSwitch> *const)(v4 + 1376));
                  *(_WORD *)(((v4 + 1376) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x29u:
                  if ( *(_WORD *)(((v4 + 1408) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1408, 0LL);
                  std::make_shared<HomeModuleSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1408),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<HomeModuleSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<HomeModuleSwitch> *)(v4 + 1408));
                  std::shared_ptr<HomeModuleSwitch>::~shared_ptr((std::shared_ptr<HomeModuleSwitch> *const)(v4 + 1408));
                  *(_WORD *)(((v4 + 1408) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x2Au:
                  if ( *(_WORD *)(((v4 + 1440) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1440, 0LL);
                  std::make_shared<HomeFurnitureMakeSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1440),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<HomeFurnitureMakeSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<HomeFurnitureMakeSwitch> *)(v4 + 1440));
                  std::shared_ptr<HomeFurnitureMakeSwitch>::~shared_ptr((std::shared_ptr<HomeFurnitureMakeSwitch> *const)(v4 + 1440));
                  *(_WORD *)(((v4 + 1440) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x2Bu:
                  if ( *(_WORD *)(((v4 + 1472) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1472, 0LL);
                  std::make_shared<HomeLimitedShop,unsigned int &>(
                    (unsigned int *)(v4 + 1472),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<HomeLimitedShop>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<HomeLimitedShop> *)(v4 + 1472));
                  std::shared_ptr<HomeLimitedShop>::~shared_ptr((std::shared_ptr<HomeLimitedShop> *const)(v4 + 1472));
                  *(_WORD *)(((v4 + 1472) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x2Cu:
                  if ( *(_WORD *)(((v4 + 1504) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1504, 0LL);
                  std::make_shared<GadgetInteractSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1504),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<GadgetInteractSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<GadgetInteractSwitch> *)(v4 + 1504));
                  std::shared_ptr<GadgetInteractSwitch>::~shared_ptr((std::shared_ptr<GadgetInteractSwitch> *const)(v4 + 1504));
                  *(_WORD *)(((v4 + 1504) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x2Du:
                  if ( *(_WORD *)(((v4 + 1536) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1536, 0LL);
                  std::make_shared<ReunionMarkSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1536),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<ReunionMarkSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<ReunionMarkSwitch> *)(v4 + 1536));
                  std::shared_ptr<ReunionMarkSwitch>::~shared_ptr((std::shared_ptr<ReunionMarkSwitch> *const)(v4 + 1536));
                  *(_WORD *)(((v4 + 1536) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x2Eu:
                  if ( *(_WORD *)(((v4 + 1568) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1568, 0LL);
                  std::make_shared<RandomQuestTemplateSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1568),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<RandomQuestTemplateSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<RandomQuestTemplateSwitch> *)(v4 + 1568));
                  std::shared_ptr<RandomQuestTemplateSwitch>::~shared_ptr((std::shared_ptr<RandomQuestTemplateSwitch> *const)(v4 + 1568));
                  *(_WORD *)(((v4 + 1568) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x2Fu:
                  if ( *(_WORD *)(((v4 + 1600) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1600, 0LL);
                  std::make_shared<MinorsRechargeHintSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1600),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<MinorsRechargeHintSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<MinorsRechargeHintSwitch> *)(v4 + 1600));
                  std::shared_ptr<MinorsRechargeHintSwitch>::~shared_ptr((std::shared_ptr<MinorsRechargeHintSwitch> *const)(v4 + 1600));
                  *(_WORD *)(((v4 + 1600) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x30u:
                  if ( *(_WORD *)(((v4 + 1632) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1632, 0LL);
                  std::make_shared<MinorsGachaRestrictSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1632),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<MinorsGachaRestrictSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<MinorsGachaRestrictSwitch> *)(v4 + 1632));
                  std::shared_ptr<MinorsGachaRestrictSwitch>::~shared_ptr((std::shared_ptr<MinorsGachaRestrictSwitch> *const)(v4 + 1632));
                  *(_WORD *)(((v4 + 1632) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x31u:
                  if ( *(_WORD *)(((v4 + 288) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 288, 0LL);
                  std::make_shared<CustomDungeonSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 288),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<CustomDungeonSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<CustomDungeonSwitch> *)(v4 + 288));
                  std::shared_ptr<CustomDungeonSwitch>::~shared_ptr((std::shared_ptr<CustomDungeonSwitch> *const)(v4 + 288));
                  *(_WORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x32u:
                  if ( *(_WORD *)(((v4 + 1664) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1664, 0LL);
                  std::make_shared<MinorsRegister,unsigned int &>(
                    (unsigned int *)(v4 + 1664),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<MinorsRegister>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<MinorsRegister> *)(v4 + 1664));
                  std::shared_ptr<MinorsRegister>::~shared_ptr((std::shared_ptr<MinorsRegister> *const)(v4 + 1664));
                  *(_WORD *)(((v4 + 1664) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x33u:
                  if ( *(_WORD *)(((v4 + 1696) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1696, 0LL);
                  std::make_shared<MatchLimitSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1696),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<MatchLimitSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<MatchLimitSwitch> *)(v4 + 1696));
                  std::shared_ptr<MatchLimitSwitch>::~shared_ptr((std::shared_ptr<MatchLimitSwitch> *const)(v4 + 1696));
                  *(_WORD *)(((v4 + 1696) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x34u:
                  if ( *(_WORD *)(((v4 + 320) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 320, 0LL);
                  std::make_shared<CustomDungeonId,unsigned int &>(
                    (unsigned int *)(v4 + 320),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<CustomDungeonId>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<CustomDungeonId> *)(v4 + 320));
                  std::shared_ptr<CustomDungeonId>::~shared_ptr((std::shared_ptr<CustomDungeonId> *const)(v4 + 320));
                  *(_WORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x35u:
                  if ( *(_WORD *)(((v4 + 1728) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1728, 0LL);
                  std::make_shared<NicknameAuditSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1728),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<NicknameAuditSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<NicknameAuditSwitch> *)(v4 + 1728));
                  std::shared_ptr<NicknameAuditSwitch>::~shared_ptr((std::shared_ptr<NicknameAuditSwitch> *const)(v4 + 1728));
                  *(_WORD *)(((v4 + 1728) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x36u:
                  if ( *(_WORD *)(((v4 + 1760) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1760, 0LL);
                  std::make_shared<SignatureAuditSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1760),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<SignatureAuditSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<SignatureAuditSwitch> *)(v4 + 1760));
                  std::shared_ptr<SignatureAuditSwitch>::~shared_ptr((std::shared_ptr<SignatureAuditSwitch> *const)(v4 + 1760));
                  *(_WORD *)(((v4 + 1760) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x37u:
                  if ( *(_WORD *)(((v4 + 1792) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1792, 0LL);
                  std::make_shared<MatchRuleOptimizeSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1792),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<MatchRuleOptimizeSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<MatchRuleOptimizeSwitch> *)(v4 + 1792));
                  std::shared_ptr<MatchRuleOptimizeSwitch>::~shared_ptr((std::shared_ptr<MatchRuleOptimizeSwitch> *const)(v4 + 1792));
                  *(_WORD *)(((v4 + 1792) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x38u:
                  if ( *(_WORD *)(((v4 + 1824) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1824, 0LL);
                  std::make_shared<ReliquaryGuaranteeSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1824),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<ReliquaryGuaranteeSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<ReliquaryGuaranteeSwitch> *)(v4 + 1824));
                  std::shared_ptr<ReliquaryGuaranteeSwitch>::~shared_ptr((std::shared_ptr<ReliquaryGuaranteeSwitch> *const)(v4 + 1824));
                  *(_WORD *)(((v4 + 1824) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x39u:
                  if ( *(_WORD *)(((v4 + 1856) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1856, 0LL);
                  std::make_shared<SecurityLibraryMd5CheckSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1856),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<SecurityLibraryMd5CheckSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<SecurityLibraryMd5CheckSwitch> *)(v4 + 1856));
                  std::shared_ptr<SecurityLibraryMd5CheckSwitch>::~shared_ptr((std::shared_ptr<SecurityLibraryMd5CheckSwitch> *const)(v4 + 1856));
                  *(_WORD *)(((v4 + 1856) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x3Au:
                  if ( *(_WORD *)(((v4 + 1920) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1920, 0LL);
                  std::make_shared<UgcSwitch,unsigned int &>((unsigned int *)(v4 + 1920), (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<UgcSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<UgcSwitch> *)(v4 + 1920));
                  std::shared_ptr<UgcSwitch>::~shared_ptr((std::shared_ptr<UgcSwitch> *const)(v4 + 1920));
                  *(_WORD *)(((v4 + 1920) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x3Bu:
                  if ( *(_WORD *)(((v4 + 1952) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1952, 0LL);
                  std::make_shared<UgcPublishSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1952),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<UgcPublishSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<UgcPublishSwitch> *)(v4 + 1952));
                  std::shared_ptr<UgcPublishSwitch>::~shared_ptr((std::shared_ptr<UgcPublishSwitch> *const)(v4 + 1952));
                  *(_WORD *)(((v4 + 1952) >> 3) + 0x7FFF8000) = -1800;
                  break;
                case 0x3Cu:
                  if ( *(_WORD *)(((v4 + 1888) >> 3) + 0x7FFF8000) )
                    __asan_report_store16(v4 + 1888, 0LL);
                  std::make_shared<HomeAuditBeforeReleaseSwitch,unsigned int &>(
                    (unsigned int *)(v4 + 1888),
                    (unsigned int *)(v4 + 48));
                  std::shared_ptr<BaseSwitch>::operator=<HomeAuditBeforeReleaseSwitch>(
                    (std::shared_ptr<BaseSwitch> *const)(v4 + 64),
                    (std::shared_ptr<HomeAuditBeforeReleaseSwitch> *)(v4 + 1888));
                  std::shared_ptr<HomeAuditBeforeReleaseSwitch>::~shared_ptr((std::shared_ptr<HomeAuditBeforeReleaseSwitch> *const)(v4 + 1888));
                  *(_WORD *)(((v4 + 1888) >> 3) + 0x7FFF8000) = -1800;
                  break;
                default:
                  goto LABEL_235;
              }
            }
          }
          break;
      }
    }
  }
LABEL_235:
  if ( std::operator==<BaseSwitch>(0LL, (const std::shared_ptr<BaseSwitch> *)(v4 + 64)) )
  {
    *(_DWORD *)(((v4 + 2400) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 2400) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 2431) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 2431) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 2400, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 2400),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/feature_switch_mgr.cpp",
      "createSwitch",
      808);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)(v4 + 2400),
           (const char (*)[40])"[FEATURE_SWITCH] switch creates failed ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 2400));
    *(_DWORD *)(((v4 + 2400) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)this, 0LL);
  }
  else
  {
    v9 = std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9);
    v10 = (unsigned __int64)(v9->_vptr_BaseSwitch + 2);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9->_vptr_BaseSwitch + 2);
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64))v10)(
           v9,
           a4) )
    {
      *(_DWORD *)(((v4 + 2464) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 2464) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 2495) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 2495) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 2464, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 2464),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/feature_switch_mgr.cpp",
        "createSwitch",
        813);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v4 + 2464),
              (const char (*)[27])"switch parse json failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 2464));
      *(_DWORD *)(((v4 + 2464) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)this, 0LL);
    }
    else
    {
      std::shared_ptr<BaseSwitch>::shared_ptr(
        (std::shared_ptr<BaseSwitch> *const)this,
        (std::shared_ptr<BaseSwitch> *)(v4 + 64));
    }
  }
  std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v4 + 64));
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8134) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 316) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_6(v4, 2528LL, v15);
  }
  return this;
};

// Line 821: range 000000000CEB8574-000000000CEB8B65
__int64 __fastcall FeatureSwitchMgr::isFeatureClosed(FeatureSwitchMgr *const this, uint32_t type, uint32_t feature_id)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *v8; // rax
  bool v9; // al
  int v10; // eax
  std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+20h] [rbp-180h]
  __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> >::reference source_switch_ptr; // [rsp+28h] [rbp-178h]
  char v17[368]; // [rsp+30h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 8 type:820 64 8 8 iter:827 96 8 9 <unknown> 128 8 15 __for_begin:834 160 8 13 __for_end:8"
                        "34 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = FeatureSwitchMgr::isFeatureClosed;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862727] = -218959118;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 48) = type;
  if ( !proto::FeatureSwitchType_IsValid(*(_DWORD *)(v4 + 48)) )
  {
    if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/feature_switch_mgr.cpp",
      "isFeatureClosed",
      824);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v4 + 192),
      "invalid type %u",
      *(unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v3 = 0;
  }
  else
  {
    p_switch_map = &this->switch_map;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
    *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v4 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                                p_switch_map,
                                                                                                (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v4 + 48));
    v8 = &this->switch_map;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      v8 = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
    *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v4 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(v8);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v4 + 64),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v4 + 96));
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      v3 = 0;
    }
    else
    {
      __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v4 + 64))->second;
      *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v4 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v4 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>(
                (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v4 + 128),
                (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v4 + 160)) )
        {
          v10 = 1;
          goto LABEL_32;
        }
        source_switch_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v4 + 128));
        if ( std::operator==<BaseSwitch>(0LL, source_switch_ptr) )
          break;
        v11 = std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)source_switch_ptr);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v11);
        v12 = (unsigned __int64)(v11->_vptr_BaseSwitch + 4);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v11->_vptr_BaseSwitch + 4);
        if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v12)(
               v11,
               feature_id) )
        {
          v3 = 1;
          v10 = 0;
          goto LABEL_32;
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v4 + 128));
      }
      *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/feature_switch_mgr.cpp",
        "isFeatureClosed",
        838);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
        (common::milog::MiLogStream *const)(v4 + 256),
        (const char (*)[21])"switch is null fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
      v3 = 0;
      v10 = 0;
LABEL_32:
      if ( v10 == 1 )
        v3 = 0;
    }
  }
  result = v3;
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 851: range 000000000CEB8B66-000000000CEB9164
__int64 __fastcall FeatureSwitchMgr::isFeatureClosed(
        FeatureSwitchMgr *const this,
        uint32_t type,
        uint32_t feature_id,
        uint32_t feature_id2)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *v9; // rax
  bool v10; // al
  int v11; // eax
  std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+30h] [rbp-180h]
  __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> >::reference source_switch_ptr; // [rsp+38h] [rbp-178h]
  char v19[368]; // [rsp+40h] [rbp-170h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(320LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 48 4 8 type:850 64 8 8 iter:857 96 8 9 <unknown> 128 8 15 __for_begin:864 160 8 13 __for_end:8"
                        "64 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = FeatureSwitchMgr::isFeatureClosed;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862727] = -218959118;
  v7[536862729] = -202116109;
  *(_DWORD *)(v5 + 48) = type;
  if ( !proto::FeatureSwitchType_IsValid(*(_DWORD *)(v5 + 48)) )
  {
    if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 33) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/feature_switch_mgr.cpp",
      "isFeatureClosed",
      854);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v5 + 192),
      "invalid type %u",
      *(unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
    v4 = 0;
  }
  else
  {
    p_switch_map = &this->switch_map;
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
    *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v5 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                                p_switch_map,
                                                                                                (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v5 + 48));
    v9 = &this->switch_map;
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      v9 = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
    *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v5 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(v9);
    v10 = std::operator==(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v5 + 64),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v5 + 96));
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      v4 = 0;
    }
    else
    {
      __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v5 + 64))->second;
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v5 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
      *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v5 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>(
                (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v5 + 128),
                (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v5 + 160)) )
        {
          v11 = 1;
          goto LABEL_32;
        }
        source_switch_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v5 + 128));
        if ( std::operator==<BaseSwitch>(0LL, source_switch_ptr) )
          break;
        v12 = std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)source_switch_ptr);
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v12);
        v13 = (unsigned __int64)(v12->_vptr_BaseSwitch + 5);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v12->_vptr_BaseSwitch + 5);
        if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD))v13)(
               v12,
               feature_id,
               feature_id2) )
        {
          v4 = 1;
          v11 = 0;
          goto LABEL_32;
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v5 + 128));
      }
      *(_DWORD *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 31) & 7) >= *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/feature_switch_mgr.cpp",
        "isFeatureClosed",
        868);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
        (common::milog::MiLogStream *const)(v5 + 256),
        (const char (*)[21])"switch is null fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 256));
      v4 = 0;
      v11 = 0;
LABEL_32:
      if ( v11 == 1 )
        v4 = 0;
    }
  }
  result = v4;
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 880: range 000000000CEB9166-000000000CEB9909
bool __cdecl FeatureSwitchMgr::isSwitchExist(FeatureSwitchMgr *const this, BaseSwitchPtr *p_switch_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t *p_switch_type; // rdx
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v9; // al
  int v10; // eax
  std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int8 (__fastcall *v14)(std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r15
  std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  bool result; // al
  bool v17; // [rsp+Fh] [rbp-1C1h]
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+30h] [rbp-1A0h]
  __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> >::reference source_switch_ptr; // [rsp+38h] [rbp-198h]
  char v20[400]; // [rsp+40h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 8 iter:891 64 8 9 <unknown> 96 8 15 __for_begin:898 128 8 13 __for_end:898 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = FeatureSwitchMgr::isSwitchExist;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( std::operator==<BaseSwitch>(0LL, p_switch_ptr) )
  {
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/feature_switch_mgr.cpp",
      "isSwitchExist",
      883);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[19])"switch ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    v17 = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_switch_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v5->switch_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->switch_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v5->switch_type);
    }
    if ( !proto::FeatureSwitchType_IsValid(v5->switch_type) )
    {
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/feature_switch_mgr.cpp",
        "isSwitchExist",
        888);
      v6 = std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_switch_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v6->switch_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v6->switch_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v6->switch_type);
      }
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 224),
        "invalid type %u",
        v6->switch_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      v17 = 0;
    }
    else
    {
      p_switch_type = &std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_switch_ptr)->switch_type;
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 32) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                                  &this->switch_map,
                                                                                                  p_switch_type);
      p_switch_map = &this->switch_map;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
      *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
      v9 = std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 32),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v9 )
      {
        v17 = 0;
      }
      else
      {
        __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v2 + 32))->second;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v2 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>(
                  (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 96),
                  (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 128)) )
          {
            v10 = 1;
            goto LABEL_40;
          }
          source_switch_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 96));
          if ( std::operator==<BaseSwitch>(0LL, source_switch_ptr) )
            break;
          v11 = std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_switch_ptr);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v11);
          v13 = (unsigned __int64)(v12->_vptr_BaseSwitch + 3);
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v12->_vptr_BaseSwitch + 3);
          v14 = *(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v13;
          v15 = std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)source_switch_ptr);
          if ( v14(v12, v15) )
          {
            v17 = 1;
            v10 = 0;
            goto LABEL_40;
          }
          __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 96));
        }
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/feature_switch_mgr.cpp",
          "isSwitchExist",
          902);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          (common::milog::MiLogStream *const)(v2 + 288),
          (const char (*)[21])"switch is null fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        v17 = 0;
        v10 = 0;
LABEL_40:
        if ( v10 == 1 )
          v17 = 0;
      }
    }
  }
  result = v17;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 934: range 000000000CEB990A-000000000CEB9ABD
bool __cdecl FeatureSwitchMgr::isFriendListClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isFriendListClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 1;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 935: range 000000000CEB9ABE-000000000CEB9C71
bool __cdecl FeatureSwitchMgr::isAskAddFriendClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isAskAddFriendClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 2;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 936: range 000000000CEB9C72-000000000CEB9C9C
bool __cdecl FeatureSwitchMgr::isTowerFloorClosed(
        FeatureSwitchMgr *const this,
        uint32_t floor_index,
        uint32_t level_index)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 3u, floor_index, level_index);
};

// Line 937: range 000000000CEB9C9E-000000000CEB9E51
bool __cdecl FeatureSwitchMgr::isMpClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isMpClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 4;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 938: range 000000000CEB9E52-000000000CEBA005
bool __cdecl FeatureSwitchMgr::isBlossomClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isBlossomClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 5;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 939: range 000000000CEBA006-000000000CEBA02A
bool __cdecl FeatureSwitchMgr::isDungeonClosed(FeatureSwitchMgr *const this, uint32_t dungeon_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 7u, dungeon_id);
};

// Line 940: range 000000000CEBA02C-000000000CEBA1DF
bool __cdecl FeatureSwitchMgr::isCustomDungeonClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isCustomDungeonClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 49;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 941: range 000000000CEBA1E0-000000000CEBA204
bool __cdecl FeatureSwitchMgr::isCustomDungeonIdClosed(FeatureSwitchMgr *const this, uint32_t dungeon_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x34u, dungeon_id);
};

// Line 942: range 000000000CEBA206-000000000CEBA3B9
bool __cdecl FeatureSwitchMgr::isBattlePassClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isBattlePassClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 6;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 943: range 000000000CEBA3BA-000000000CEBA56D
bool __cdecl FeatureSwitchMgr::isPushPlatformClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isPushPlatformClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 8;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 945: range 000000000CEBA56E-000000000CEBA592
bool __cdecl FeatureSwitchMgr::isRechargeConfigIdClosed(FeatureSwitchMgr *const this, uint32_t config_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 9u, config_id);
};

// Line 946: range 000000000CEBA594-000000000CEBA747
bool __cdecl FeatureSwitchMgr::isChangeGameTimeClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isChangeGameTimeClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 16;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 947: range 000000000CEBA748-000000000CEBA8FB
bool __cdecl FeatureSwitchMgr::isMatchRuleOptimizeClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isMatchRuleOptimizeClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 55;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 948: range 000000000CEBA8FC-000000000CEBAAAF
bool __cdecl FeatureSwitchMgr::isHomeBlueprintClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isHomeBlueprintClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 3201;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 949: range 000000000CEBAAB0-000000000CEBAC63
bool __cdecl FeatureSwitchMgr::isQuestAvatarRenameAuditClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isQuestAvatarRenameAuditClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 3301;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 950: range 000000000CEBAC64-000000000CEBAE17
bool __cdecl FeatureSwitchMgr::isItemAvatarRenameAuditClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isItemAvatarRenameAuditClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 3302;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 951: range 000000000CEBAE18-000000000CEBAFCB
bool __cdecl FeatureSwitchMgr::isIpRegionClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isIpRegionClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 3308;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 954: range 000000000CEBAFCC-000000000CEBAFEA
bool __cdecl FeatureSwitchMgr::isRechargeSystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isRechargeConfigIdClosed(this, 0);
};

// Line 959: range 000000000CEBAFEC-000000000CEBB016
bool __cdecl FeatureSwitchMgr::isShopGoodsIdClosed(FeatureSwitchMgr *const this, uint32_t shop_type, uint32_t goods_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0xAu, shop_type, goods_id);
};

// Line 961: range 000000000CEBB018-000000000CEBB03E
bool __cdecl FeatureSwitchMgr::isShopClosed(FeatureSwitchMgr *const this, uint32_t shop_type)
{
  return FeatureSwitchMgr::isShopGoodsIdClosed(this, shop_type, 0);
};

// Line 966: range 000000000CEBB040-000000000CEBB064
bool __cdecl FeatureSwitchMgr::isForgeClosed(FeatureSwitchMgr *const this, uint32_t forge_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x11u, forge_id);
};

// Line 968: range 000000000CEBB066-000000000CEBB084
bool __cdecl FeatureSwitchMgr::isForgeSystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isForgeClosed(this, 0);
};

// Line 973: range 000000000CEBB086-000000000CEBB0AA
bool __cdecl FeatureSwitchMgr::isCookClosed(FeatureSwitchMgr *const this, uint32_t recipe_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x12u, recipe_id);
};

// Line 975: range 000000000CEBB0AC-000000000CEBB0CA
bool __cdecl FeatureSwitchMgr::isCookSystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isCookClosed(this, 0);
};

// Line 980: range 000000000CEBB0CC-000000000CEBB0F0
bool __cdecl FeatureSwitchMgr::isCombineClosed(FeatureSwitchMgr *const this, uint32_t combine_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x13u, combine_id);
};

// Line 982: range 000000000CEBB0F2-000000000CEBB110
bool __cdecl FeatureSwitchMgr::isCombineSystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isCombineClosed(this, 0);
};

// Line 987: range 000000000CEBB112-000000000CEBB136
bool __cdecl FeatureSwitchMgr::isWeaponClosed(FeatureSwitchMgr *const this, uint32_t weapon_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x14u, weapon_id);
};

// Line 989: range 000000000CEBB138-000000000CEBB156
bool __cdecl FeatureSwitchMgr::isWeaponSystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isWeaponClosed(this, 0);
};

// Line 994: range 000000000CEBB158-000000000CEBB17C
bool __cdecl FeatureSwitchMgr::isReliquaryClosed(FeatureSwitchMgr *const this, uint32_t reliquary_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x15u, reliquary_id);
};

// Line 996: range 000000000CEBB17E-000000000CEBB19C
bool __cdecl FeatureSwitchMgr::isReliquarySystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isReliquaryClosed(this, 0);
};

// Line 1001: range 000000000CEBB19E-000000000CEBB1C2
bool __cdecl FeatureSwitchMgr::isItemClosed(FeatureSwitchMgr *const this, uint32_t item_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x16u, item_id);
};

// Line 1003: range 000000000CEBB1C4-000000000CEBB1E2
bool __cdecl FeatureSwitchMgr::isItemSystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isItemClosed(this, 0);
};

// Line 1008: range 000000000CEBB1E4-000000000CEBB6E4
std::set<unsigned int> *__cdecl FeatureSwitchMgr::getAllClosedItem(
        std::set<unsigned int> *retstr,
        FeatureSwitchMgr *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  FeatureSwitchMgr *v5; // rdx
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v7; // al
  const std::shared_ptr<BaseSwitch> *v8; // rsi
  uint32_t *p_item_id; // rdx
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+18h] [rbp-138h]
  char v12[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 9 <unknown> 64 8 9 iter:1010 96 8 9 <unknown> 128 8 16 __for_begin:1015 160 8 14 __for_en"
                        "d:1015 192 16 20 base_switch_ptr:1015 224 16 20 item_switch_ptr:1017";
  *(_QWORD *)(v2 + 16) = FeatureSwitchMgr::getAllClosedItem;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -219021312;
  v4[536862727] = -202178560;
  std::set<unsigned int>::set(retstr);
  v5 = this;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 22;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v7 = std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( !v7 )
  {
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v2 + 64))->second;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v2 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v2 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 160)) )
    {
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      v8 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v2 + 192), v8);
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 224, v8);
      std::dynamic_pointer_cast<ItemSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v2 + 224));
      if ( !std::operator==<ItemSwitch>(0LL, (const std::shared_ptr<ItemSwitch> *)(v2 + 224)) )
      {
        p_item_id = &std::__shared_ptr_access<ItemSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ItemSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224))->item_id;
        std::set<unsigned int>::insert(retstr, p_item_id);
      }
      std::shared_ptr<ItemSwitch>::~shared_ptr((std::shared_ptr<ItemSwitch> *const)(v2 + 224));
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v2 + 192));
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -1800;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1027: range 000000000CEBB6E6-000000000CEBB8ED
proto::ClosedItemNotify *__cdecl FeatureSwitchMgr::getClosedItemNotify(
        proto::ClosedItemNotify *retstr,
        FeatureSwitchMgr *const this)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::RepeatedField<unsigned int> *v5; // r14
  char v7[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 9 <unknown>";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)FeatureSwitchMgr::getClosedItemNotify;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::ClosedItemNotify::ClosedItemNotify(retstr);
  v5 = proto::ClosedItemNotify::mutable_item_id_list(retstr);
  if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v2[1]._M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1]._M_t._M_impl._M_node_count + 7) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_store_n(&v2[1], 48LL);
  }
  FeatureSwitchMgr::getAllClosedItem(v2 + 1, this);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(v2 + 1, v5);
  std::set<unsigned int>::~set(v2 + 1);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1033: range 000000000CEBB8EE-000000000CEBB912
bool __cdecl FeatureSwitchMgr::isAvatarClosed(FeatureSwitchMgr *const this, uint32_t avatar_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x17u, avatar_id);
};

// Line 1035: range 000000000CEBB914-000000000CEBB932
bool __cdecl FeatureSwitchMgr::isAvatarSystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isAvatarClosed(this, 0);
};

// Line 1040: range 000000000CEBB934-000000000CEBB95E
bool __cdecl FeatureSwitchMgr::isCityReputationEntranceClosed(
        FeatureSwitchMgr *const this,
        uint32_t city_id,
        uint32_t entrance_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x18u, city_id, entrance_id);
};

// Line 1042: range 000000000CEBB960-000000000CEBB986
bool __cdecl FeatureSwitchMgr::isCityReputationClosed(FeatureSwitchMgr *const this, uint32_t city_id)
{
  return FeatureSwitchMgr::isCityReputationEntranceClosed(this, city_id, 0);
};

// Line 1047: range 000000000CEBB988-000000000CEBB9AC
bool __cdecl FeatureSwitchMgr::isMatchLimitClosed(FeatureSwitchMgr *const this, uint32_t limit_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x33u, limit_id);
};

// Line 1048: range 000000000CEBB9AE-000000000CEBB9D2
bool __cdecl FeatureSwitchMgr::isDailyTaskIdClosed(FeatureSwitchMgr *const this, uint32_t task_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0xBu, task_id);
};

// Line 1049: range 000000000CEBB9D4-000000000CEBB9F8
bool __cdecl FeatureSwitchMgr::isRandTaskIdClosed(FeatureSwitchMgr *const this, uint32_t task_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0xCu, task_id);
};

// Line 1050: range 000000000CEBB9FA-000000000CEBBA1E
bool __cdecl FeatureSwitchMgr::isMpPlayClosed(FeatureSwitchMgr *const this, uint32_t play_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x19u, play_id);
};

// Line 1051: range 000000000CEBBA20-000000000CEBBBD3
bool __cdecl FeatureSwitchMgr::isSightGroupClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isSightGroupClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 26;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1052: range 000000000CEBBBD4-000000000CEBBD87
bool __cdecl FeatureSwitchMgr::isNotifyEyePointClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isNotifyEyePointClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 27;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1053: range 000000000CEBBD88-000000000CEBBF3B
bool __cdecl FeatureSwitchMgr::isEyePointAsEyeClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isEyePointAsEyeClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 28;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1054: range 000000000CEBBF3C-000000000CEBC0EF
bool __cdecl FeatureSwitchMgr::isGroupVisionTypeClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isGroupVisionTypeClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 29;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1055: range 000000000CEBC0F0-000000000CEBC114
bool __cdecl FeatureSwitchMgr::isOfferingIdClosed(FeatureSwitchMgr *const this, uint32_t offering_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x1Eu, offering_id);
};

// Line 1056: range 000000000CEBC116-000000000CEBC13A
bool __cdecl FeatureSwitchMgr::isRoutineIdClosed(FeatureSwitchMgr *const this, uint32_t routine_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x1Fu, routine_id);
};

// Line 1057: range 000000000CEBC13C-000000000CEBC160
bool __cdecl FeatureSwitchMgr::isActivitySaleClosed(FeatureSwitchMgr *const this, uint32_t sale_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x21u, sale_id);
};

// Line 1058: range 000000000CEBC162-000000000CEBC315
bool __cdecl FeatureSwitchMgr::isMechanicusClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isMechanicusClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 34;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1059: range 000000000CEBC316-000000000CEBC4C9
bool __cdecl FeatureSwitchMgr::isMechanicusPunishClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isMechanicusPunishClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 35;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1060: range 000000000CEBC4CA-000000000CEBC67D
bool __cdecl FeatureSwitchMgr::isWorldLevelAdjustClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isWorldLevelAdjustClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 36;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1061: range 000000000CEBC67E-000000000CEBC831
bool __cdecl FeatureSwitchMgr::isEnterHomeWorldClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isEnterHomeWorldClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 37;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1062: range 000000000CEBC832-000000000CEBC9E5
bool __cdecl FeatureSwitchMgr::isHomeMpClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isHomeMpClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 38;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1063: range 000000000CEBC9E6-000000000CEBCB99
bool __cdecl FeatureSwitchMgr::isHomeEditModeClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isHomeEditModeClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 40;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1064: range 000000000CEBCB9A-000000000CEBCBBE
bool __cdecl FeatureSwitchMgr::isHomeModuleClosed(FeatureSwitchMgr *const this, uint32_t home_module_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x29u, home_module_id);
};

// Line 1066: range 000000000CEBCBC0-000000000CEBCBE4
bool __cdecl FeatureSwitchMgr::isHomeFurnitureMakeClosed(FeatureSwitchMgr *const this, uint32_t furniture_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x2Au, furniture_id);
};

// Line 1068: range 000000000CEBCBE6-000000000CEBCC04
bool __cdecl FeatureSwitchMgr::isHomeFurnitureMakeSystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isHomeFurnitureMakeClosed(this, 0);
};

// Line 1072: range 000000000CEBCC06-000000000CEBCC2A
bool __cdecl FeatureSwitchMgr::isHomeLimitedShopClosed(FeatureSwitchMgr *const this, uint32_t goods_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x2Bu, goods_id);
};

// Line 1074: range 000000000CEBCC2C-000000000CEBCC4A
bool __cdecl FeatureSwitchMgr::isHomeLimitedShopSystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isHomeLimitedShopClosed(this, 0);
};

// Line 1078: range 000000000CEBCC4C-000000000CEBCC70
bool __cdecl FeatureSwitchMgr::isGadgetInteractClosed(FeatureSwitchMgr *const this, uint32_t gadget_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x2Cu, gadget_id);
};

// Line 1080: range 000000000CEBCC72-000000000CEBCC90
bool __cdecl FeatureSwitchMgr::isGadgetInteractSystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isGadgetInteractClosed(this, 0);
};

// Line 1085: range 000000000CEBCC92-000000000CEBCE45
bool __cdecl FeatureSwitchMgr::isReuionClosedWithMark(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isReuionClosedWithMark;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 45;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1087: range 000000000CEBCE46-000000000CEBCE6A
bool __cdecl FeatureSwitchMgr::isRandomQuestTemplateClosed(FeatureSwitchMgr *const this, uint32_t template_id)
{
  return FeatureSwitchMgr::isFeatureClosed(this, 0x2Eu, template_id);
};

// Line 1089: range 000000000CEBCE6C-000000000CEBCE8A
bool __cdecl FeatureSwitchMgr::isRandomQuestTemplateSystemClosed(FeatureSwitchMgr *const this)
{
  return FeatureSwitchMgr::isRandomQuestTemplateClosed(this, 0);
};

// Line 1094: range 000000000CEBCE8C-000000000CEBD03F
bool __cdecl FeatureSwitchMgr::isMinorsRechargeHintEnabled(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isMinorsRechargeHintEnabled;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 47;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1095: range 000000000CEBD040-000000000CEBD1F3
bool __cdecl FeatureSwitchMgr::isMinorsGachaRestrictEnabled(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isMinorsGachaRestrictEnabled;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 48;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1096: range 000000000CEBD1F4-000000000CEBD3A7
bool __cdecl FeatureSwitchMgr::isGeneralGachaRestrictEnabled(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isGeneralGachaRestrictEnabled;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 3101;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1098: range 000000000CEBD3A8-000000000CEBD55B
bool __cdecl FeatureSwitchMgr::isNicknameAuditEnabled(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isNicknameAuditEnabled;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 53;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1099: range 000000000CEBD55C-000000000CEBD70F
bool __cdecl FeatureSwitchMgr::isSignatureAuditEnabled(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isSignatureAuditEnabled;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 54;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1100: range 000000000CEBD710-000000000CEBD8C3
bool __cdecl FeatureSwitchMgr::isReliquaryGuaranteeClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isReliquaryGuaranteeClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 56;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1101: range 000000000CEBD8C4-000000000CEBDA77
bool __cdecl FeatureSwitchMgr::isSecurityLibraryMd5CheckClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isSecurityLibraryMd5CheckClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 57;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1102: range 000000000CEBDA78-000000000CEBDC2B
bool __cdecl FeatureSwitchMgr::isUgcClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isUgcClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 58;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1103: range 000000000CEBDC2C-000000000CEBDDDF
bool __cdecl FeatureSwitchMgr::isUgcPublishClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isUgcPublishClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 59;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1104: range 000000000CEBDDE0-000000000CEBDF93
bool __cdecl FeatureSwitchMgr::isSafeServerNotifyClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isSafeServerNotifyClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 2801;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1106: range 000000000CEBDF94-000000000CEBE147
bool __cdecl FeatureSwitchMgr::isHomeAuditBeforeReleaseEnabled(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isHomeAuditBeforeReleaseEnabled;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 60;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1107: range 000000000CEBE148-000000000CEBE2FB
bool __cdecl FeatureSwitchMgr::isAntiOfflineKickClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isAntiOfflineKickClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 3202;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1108: range 000000000CEBE2FC-000000000CEBE4AF
bool __cdecl FeatureSwitchMgr::isEnvironmentErrorKickClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isEnvironmentErrorKickClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 3203;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1110: range 000000000CEBE4B0-000000000CEBE663
bool __cdecl FeatureSwitchMgr::isGCGPreviewClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isGCGPreviewClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 3303;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1111: range 000000000CEBE664-000000000CEBE817
bool __cdecl FeatureSwitchMgr::isGCGMatchClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isGCGMatchClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 3304;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1112: range 000000000CEBE818-000000000CEBE9CB
bool __cdecl FeatureSwitchMgr::isGCGPvpClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isGCGPvpClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 3305;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1113: range 000000000CEBE9CC-000000000CEBEB7F
bool __cdecl FeatureSwitchMgr::isGCGPveClosed(FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  FeatureSwitchMgr *v5; // rdx
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::isGCGPveClosed;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v5 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 3306;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1120: range 000000000CEBEB80-000000000CEBF06D
bool __cdecl FeatureSwitchMgr::isRewardIdNeedBeReplaced(
        FeatureSwitchMgr *const this,
        uint32_t reward_id,
        uint32_t *replace_reward_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  FeatureSwitchMgr *v6; // rdx
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v8; // al
  const std::shared_ptr<BaseSwitch> *v9; // rsi
  int v10; // r14d
  std::__shared_ptr_access<RewardIdSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  int v12; // r14d
  int v13; // eax
  int v14; // eax
  bool result; // al
  bool v16; // [rsp+7h] [rbp-159h]
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+28h] [rbp-138h]
  char v20[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 9 <unknown> 64 8 9 iter:1121 96 8 9 <unknown> 128 8 16 __for_begin:1126 160 8 14 __for_en"
                        "d:1126 192 16 20 base_switch_ptr:1126 224 16 25 reward_id_switch_ptr:1128";
  *(_QWORD *)(v3 + 16) = FeatureSwitchMgr::isRewardIdNeedBeReplaced;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  v6 = this;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48);
  *(_DWORD *)(v3 + 48) = 13;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v3 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v6->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v3 + 48));
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v3 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v8 = std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v16 = 0;
  }
  else
  {
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v3 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v3 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v3 + 160)) )
    {
      *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      v9 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v3 + 128));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v3 + 192), v9);
      *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v3 + 224, v9);
      std::dynamic_pointer_cast<RewardIdSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v3 + 224));
      if ( std::operator==<RewardIdSwitch>(0LL, (const std::shared_ptr<RewardIdSwitch> *)(v3 + 224)) )
      {
        v10 = 0;
      }
      else
      {
        v11 = std::__shared_ptr_access<RewardIdSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RewardIdSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
        if ( (unsigned __int8)RewardIdSwitch::isRewardIdNeedBeReplaced(
                                v11,
                                reward_id,
                                (unsigned __int64)replace_reward_id) )
        {
          v16 = 1;
          v10 = 1;
        }
        else
        {
          v10 = 2;
        }
      }
      std::shared_ptr<RewardIdSwitch>::~shared_ptr((std::shared_ptr<RewardIdSwitch> *const)(v3 + 224));
      if ( v10 )
      {
        if ( v10 == 2 )
          v12 = 2;
        else
          v12 = 1;
      }
      else
      {
        v12 = 0;
      }
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v3 + 192));
      if ( v12 )
      {
        if ( v12 == 2 )
          v13 = 2;
        else
          v13 = 1;
      }
      else
      {
        v13 = 0;
      }
      *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -1800;
      if ( v13 && v13 != 2 )
      {
        v14 = 0;
        goto LABEL_40;
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v3 + 128));
    }
    v14 = 1;
LABEL_40:
    if ( v14 == 1 )
      v16 = 0;
  }
  result = v16;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1142: range 000000000CEBF06E-000000000CEBF55B
bool __cdecl FeatureSwitchMgr::isDropIdNeedBeReplaced(
        FeatureSwitchMgr *const this,
        uint32_t drop_id,
        uint32_t *replace_drop_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  FeatureSwitchMgr *v6; // rdx
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v8; // al
  const std::shared_ptr<BaseSwitch> *v9; // rsi
  int v10; // r14d
  std::__shared_ptr_access<DropIdSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  int v12; // r14d
  int v13; // eax
  int v14; // eax
  bool result; // al
  bool v16; // [rsp+7h] [rbp-159h]
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+28h] [rbp-138h]
  char v20[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 9 <unknown> 64 8 9 iter:1143 96 8 9 <unknown> 128 8 16 __for_begin:1148 160 8 14 __for_en"
                        "d:1148 192 16 20 base_switch_ptr:1148 224 16 23 drop_id_switch_ptr:1150";
  *(_QWORD *)(v3 + 16) = FeatureSwitchMgr::isDropIdNeedBeReplaced;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  v6 = this;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48);
  *(_DWORD *)(v3 + 48) = 14;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v3 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v6->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v3 + 48));
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v3 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v8 = std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v16 = 0;
  }
  else
  {
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v3 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v3 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v3 + 160)) )
    {
      *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      v9 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v3 + 128));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v3 + 192), v9);
      *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v3 + 224, v9);
      std::dynamic_pointer_cast<DropIdSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v3 + 224));
      if ( std::operator==<DropIdSwitch>(0LL, (const std::shared_ptr<DropIdSwitch> *)(v3 + 224)) )
      {
        v10 = 0;
      }
      else
      {
        v11 = std::__shared_ptr_access<DropIdSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DropIdSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
        if ( (unsigned __int8)DropIdSwitch::isDropIdNeedBeReplaced(v11, drop_id, (unsigned __int64)replace_drop_id) )
        {
          v16 = 1;
          v10 = 1;
        }
        else
        {
          v10 = 2;
        }
      }
      std::shared_ptr<DropIdSwitch>::~shared_ptr((std::shared_ptr<DropIdSwitch> *const)(v3 + 224));
      if ( v10 )
      {
        if ( v10 == 2 )
          v12 = 2;
        else
          v12 = 1;
      }
      else
      {
        v12 = 0;
      }
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v3 + 192));
      if ( v12 )
      {
        if ( v12 == 2 )
          v13 = 2;
        else
          v13 = 1;
      }
      else
      {
        v13 = 0;
      }
      *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -1800;
      if ( v13 && v13 != 2 )
      {
        v14 = 0;
        goto LABEL_40;
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v3 + 128));
    }
    v14 = 1;
LABEL_40:
    if ( v14 == 1 )
      v16 = 0;
  }
  result = v16;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1164: range 000000000CEBF55C-000000000CEBFA3B
bool __cdecl FeatureSwitchMgr::isGatherIdClosed(FeatureSwitchMgr *const this, uint32_t gather_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  FeatureSwitchMgr *v5; // rdx
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v7; // al
  const std::shared_ptr<BaseSwitch> *v8; // rsi
  int v9; // r14d
  std::__shared_ptr_access<GatherSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int v11; // r14d
  int v12; // eax
  int v13; // eax
  bool result; // al
  bool v15; // [rsp+3h] [rbp-14Dh]
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+18h] [rbp-138h]
  char v18[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 9 <unknown> 64 8 9 iter:1165 96 8 9 <unknown> 128 8 16 __for_begin:1170 160 8 14 __for_en"
                        "d:1170 192 16 20 base_switch_ptr:1170 224 16 22 gather_switch_ptr:1172";
  *(_QWORD *)(v2 + 16) = FeatureSwitchMgr::isGatherIdClosed;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -219021312;
  v4[536862727] = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 15;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v7 = std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v15 = 0;
  }
  else
  {
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v2 + 64))->second;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v2 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v2 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 160)) )
    {
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      v8 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v2 + 192), v8);
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 224, v8);
      std::dynamic_pointer_cast<GatherSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v2 + 224));
      if ( std::operator==<GatherSwitch>(0LL, (const std::shared_ptr<GatherSwitch> *)(v2 + 224)) )
      {
        v9 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<GatherSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GatherSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
        if ( GatherSwitch::isGatherIdClosed(v10, gather_id) )
        {
          v15 = 1;
          v9 = 1;
        }
        else
        {
          v9 = 2;
        }
      }
      std::shared_ptr<GatherSwitch>::~shared_ptr((std::shared_ptr<GatherSwitch> *const)(v2 + 224));
      if ( v9 )
      {
        if ( v9 == 2 )
          v11 = 2;
        else
          v11 = 1;
      }
      else
      {
        v11 = 0;
      }
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v2 + 192));
      if ( v11 )
      {
        if ( v11 == 2 )
          v12 = 2;
        else
          v12 = 1;
      }
      else
      {
        v12 = 0;
      }
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -1800;
      if ( v12 && v12 != 2 )
      {
        v13 = 0;
        goto LABEL_40;
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
    }
    v13 = 1;
LABEL_40:
    if ( v13 == 1 )
      v15 = 0;
  }
  result = v15;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1186: range 000000000CEBFA3C-000000000CEBFF1E
bool __cdecl FeatureSwitchMgr::isAnchorPointNeedToDelete(
        FeatureSwitchMgr *const this,
        const Vector3 *anchor_point_position)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  FeatureSwitchMgr *v5; // rdx
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v7; // al
  const std::shared_ptr<BaseSwitch> *v8; // rsi
  int v9; // r14d
  std::__shared_ptr_access<AnchorPointSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  int v11; // r14d
  int v12; // eax
  int v13; // eax
  bool result; // al
  bool v15; // [rsp+Fh] [rbp-151h]
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+28h] [rbp-138h]
  char v18[304]; // [rsp+30h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 9 <unknown> 64 8 9 iter:1187 96 8 9 <unknown> 128 8 16 __for_begin:1192 160 8 14 __for_en"
                        "d:1192 192 16 20 base_switch_ptr:1192 224 16 28 anchor_point_switch_ptr:1194";
  *(_QWORD *)(v2 + 16) = FeatureSwitchMgr::isAnchorPointNeedToDelete;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -219021312;
  v4[536862727] = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 32;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v7 = std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v15 = 0;
  }
  else
  {
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v2 + 64))->second;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v2 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v2 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 160)) )
    {
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      v8 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v2 + 192), v8);
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 224, v8);
      std::dynamic_pointer_cast<AnchorPointSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v2 + 224));
      if ( std::operator==<AnchorPointSwitch>(0LL, (const std::shared_ptr<AnchorPointSwitch> *)(v2 + 224)) )
      {
        v9 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<AnchorPointSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AnchorPointSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
        if ( AnchorPointSwitch::isAnchorPointNeedToDelete(v10, anchor_point_position) )
        {
          v15 = 1;
          v9 = 1;
        }
        else
        {
          v9 = 2;
        }
      }
      std::shared_ptr<AnchorPointSwitch>::~shared_ptr((std::shared_ptr<AnchorPointSwitch> *const)(v2 + 224));
      if ( v9 )
      {
        if ( v9 == 2 )
          v11 = 2;
        else
          v11 = 1;
      }
      else
      {
        v11 = 0;
      }
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v2 + 192));
      if ( v11 )
      {
        if ( v11 == 2 )
          v12 = 2;
        else
          v12 = 1;
      }
      else
      {
        v12 = 0;
      }
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -1800;
      if ( v12 && v12 != 2 )
      {
        v13 = 0;
        goto LABEL_40;
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
    }
    v13 = 1;
LABEL_40:
    if ( v13 == 1 )
      v15 = 0;
  }
  result = v15;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1208: range 000000000CEBFF20-000000000CEC0420
std::set<unsigned int> *__cdecl FeatureSwitchMgr::getAllClosedHomeModule(
        std::set<unsigned int> *retstr,
        FeatureSwitchMgr *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  FeatureSwitchMgr *v5; // rdx
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v7; // al
  const std::shared_ptr<BaseSwitch> *v8; // rsi
  uint32_t *p_home_module_id; // rdx
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+18h] [rbp-138h]
  char v12[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 9 <unknown> 64 8 9 iter:1210 96 8 9 <unknown> 128 8 16 __for_begin:1215 160 8 14 __for_en"
                        "d:1215 192 16 20 base_switch_ptr:1215 224 16 27 home_module_switch_ptr:1217";
  *(_QWORD *)(v2 + 16) = FeatureSwitchMgr::getAllClosedHomeModule;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -219021312;
  v4[536862727] = -202178560;
  std::set<unsigned int>::set(retstr);
  v5 = this;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 41;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v7 = std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( !v7 )
  {
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v2 + 64))->second;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v2 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v2 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 160)) )
    {
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      v8 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v2 + 192), v8);
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 224, v8);
      std::dynamic_pointer_cast<HomeModuleSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v2 + 224));
      if ( !std::operator==<HomeModuleSwitch>(0LL, (const std::shared_ptr<HomeModuleSwitch> *)(v2 + 224)) )
      {
        p_home_module_id = &std::__shared_ptr_access<HomeModuleSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224))->home_module_id;
        std::set<unsigned int>::insert(retstr, p_home_module_id);
      }
      std::shared_ptr<HomeModuleSwitch>::~shared_ptr((std::shared_ptr<HomeModuleSwitch> *const)(v2 + 224));
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v2 + 192));
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -1800;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1228: range 000000000CEC0422-000000000CEC0922
std::set<unsigned int> *__cdecl FeatureSwitchMgr::getAllClosedHomeLimitedShopGoods(
        std::set<unsigned int> *retstr,
        FeatureSwitchMgr *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  FeatureSwitchMgr *v5; // rdx
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v7; // al
  const std::shared_ptr<BaseSwitch> *v8; // rsi
  uint32_t *p_goods_id; // rdx
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+18h] [rbp-138h]
  char v12[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 9 <unknown> 64 8 9 iter:1230 96 8 9 <unknown> 128 8 16 __for_begin:1235 160 8 14 __for_en"
                        "d:1235 192 16 20 base_switch_ptr:1235 224 16 27 home_module_switch_ptr:1237";
  *(_QWORD *)(v2 + 16) = FeatureSwitchMgr::getAllClosedHomeLimitedShopGoods;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -219021312;
  v4[536862727] = -202178560;
  std::set<unsigned int>::set(retstr);
  v5 = this;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 43;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                              &v5->switch_map,
                                                                                              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v2 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v7 = std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( !v7 )
  {
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v2 + 64))->second;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v2 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v2 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 160)) )
    {
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      v8 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v2 + 192), v8);
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 224, v8);
      std::dynamic_pointer_cast<HomeLimitedShop,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v2 + 224));
      if ( !std::operator==<HomeLimitedShop>(0LL, (const std::shared_ptr<HomeLimitedShop> *)(v2 + 224)) )
      {
        p_goods_id = &std::__shared_ptr_access<HomeLimitedShop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeLimitedShop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224))->goods_id;
        std::set<unsigned int>::insert(retstr, p_goods_id);
      }
      std::shared_ptr<HomeLimitedShop>::~shared_ptr((std::shared_ptr<HomeLimitedShop> *const)(v2 + 224));
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v2 + 192));
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -1800;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1248: range 000000000CEC0924-000000000CEC0FE0
uint32_t __cdecl FeatureSwitchMgr::getMinorsRegisterMinAge(const FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const FeatureSwitchMgr *v4; // rdx
  const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v6; // al
  const std::shared_ptr<BaseSwitch> *v7; // rsi
  std::__shared_ptr_access<MinorsRegister,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  common::milog::MiLogStream *v12; // rax
  uint32_t result; // eax
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+18h] [rbp-178h]
  char v15[368]; // [rsp+20h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 32 4 11 result:1249 48 4 9 <unknown> 64 8 9 iter:1250 96 8 9 <unknown> 128 8 16 __for_begin:12"
                        "53 160 8 14 __for_end:1253 192 16 20 base_switch_ptr:1253 224 16 15 switch_ptr:1255 256 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::getMinorsRegisterMinAge;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -218959360;
  v3[536862726] = -219021312;
  v3[536862727] = -219021312;
  v3[536862729] = -202116109;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 32);
  *(_DWORD *)(v1 + 32) = 0;
  v4 = this;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 50;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                                    &v4->switch_map,
                                                                                                    (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 48));
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v6 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96));
  *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v1 + 64))->second;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 128),
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 160)) )
    {
      *(_WORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
      v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 128));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 192), v7);
      *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v1 + 224, v7);
      std::dynamic_pointer_cast<MinorsRegister,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v1 + 224));
      if ( !std::operator==<MinorsRegister>(0LL, (const std::shared_ptr<MinorsRegister> *)(v1 + 224)) )
      {
        v8 = std::__shared_ptr_access<MinorsRegister,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MinorsRegister,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 224));
        v9 = (unsigned int *)std::max<unsigned int>(&v8->age, (const unsigned int *)(v1 + 32));
        v10 = (int *)v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        v11 = *v10;
        if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v1 + 32);
        *(_DWORD *)(v1 + 32) = v11;
      }
      std::shared_ptr<MinorsRegister>::~shared_ptr((std::shared_ptr<MinorsRegister> *const)(v1 + 224));
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 192));
      *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -1800;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 128));
    }
    *(_WORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
  }
  *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 256, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v1 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/feature_switch_mgr.cpp",
    "getMinorsRegisterMinAge",
    1263);
  v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
          (common::milog::MiLogStream *const)(v1 + 256),
          (const char (*)[10])" min age:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 32));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
  *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v1 + 32);
  result = *(_DWORD *)(v1 + 32);
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1268: range 000000000CEC0FE2-000000000CEC17B1
uint32_t __cdecl FeatureSwitchMgr::getMonthlySubmitNicknameLimit(const FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const FeatureSwitchMgr *v4; // rdx
  const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v6; // al
  const std::shared_ptr<BaseSwitch> *v7; // rsi
  int v8; // r14d
  std::__shared_ptr_access<NicknameAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  uint32_t *p_monthly_limit; // rax
  uint32_t monthly_limit; // ecx
  unsigned int *v12; // rax
  int *v13; // rdx
  int v14; // ecx
  common::milog::MiLogStream *v15; // rax
  uint32_t result; // eax
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+18h] [rbp-198h]
  char v18[400]; // [rsp+20h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 48 4 11 result:1269 64 4 9 <unknown> 80 4 9 <unknown> 96 8 9 iter:1270 128 8 9 <unknown> 160 "
                        "8 16 __for_begin:1273 192 8 14 __for_end:1273 224 16 20 base_switch_ptr:1273 256 16 15 switch_pt"
                        "r:1275 288 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::getMonthlySubmitNicknameLimit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -218959360;
  v3[536862726] = -218959360;
  v3[536862727] = -219021312;
  v3[536862728] = -219021312;
  v3[536862730] = -202116109;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 0;
  v4 = this;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 64);
  *(_DWORD *)(v1 + 64) = 53;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                                    &v4->switch_map,
                                                                                                    (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 64));
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
    p_switch_map = (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 128) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v6 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 128));
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v1 + 96))->second;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 192) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 160),
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 192)) )
    {
      *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
      v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 160));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 224), v7);
      *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v1 + 256, v7);
      std::dynamic_pointer_cast<NicknameAuditSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v1 + 256));
      if ( std::operator==<NicknameAuditSwitch>(0LL, (const std::shared_ptr<NicknameAuditSwitch> *)(v1 + 256)) )
      {
        v8 = 0;
      }
      else
      {
        v9 = std::__shared_ptr_access<NicknameAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NicknameAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 256));
        p_monthly_limit = &v9->monthly_limit;
        if ( *(_BYTE *)(((unsigned __int64)p_monthly_limit >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_monthly_limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_monthly_limit >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(p_monthly_limit);
        }
        monthly_limit = v9->monthly_limit;
        if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v1 + 48);
        *(_DWORD *)(v1 + 48) = monthly_limit;
        v8 = 1;
      }
      std::shared_ptr<NicknameAuditSwitch>::~shared_ptr((std::shared_ptr<NicknameAuditSwitch> *const)(v1 + 256));
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 224));
      *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -1800;
      if ( v8 )
        break;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 160));
    }
    *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
  }
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 80);
  *(_DWORD *)(v1 + 80) = 1;
  v12 = (unsigned int *)std::max<unsigned int>((const unsigned int *)(v1 + 80), (const unsigned int *)(v1 + 48));
  v13 = (int *)v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  v14 = *v13;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = v14;
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v1 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 288, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v1 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/feature_switch_mgr.cpp",
    "getMonthlySubmitNicknameLimit",
    1285);
  v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
          (common::milog::MiLogStream *const)(v1 + 288),
          (const char (*)[8])" limit:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 288));
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v1 + 48);
  result = *(_DWORD *)(v1 + 48);
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1290: range 000000000CEC17B2-000000000CEC1F78
uint32_t __cdecl FeatureSwitchMgr::getNicknameAuditAutoPassHours(const FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const FeatureSwitchMgr *v4; // rdx
  const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v6; // al
  const std::shared_ptr<BaseSwitch> *v7; // rsi
  int v8; // r14d
  std::__shared_ptr_access<NicknameAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t auto_pass_hours; // ecx
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  common::milog::MiLogStream *v14; // rax
  uint32_t result; // eax
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+18h] [rbp-198h]
  char v17[400]; // [rsp+20h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 48 4 11 result:1291 64 4 9 <unknown> 80 4 9 <unknown> 96 8 9 iter:1292 128 8 9 <unknown> 160 "
                        "8 16 __for_begin:1295 192 8 14 __for_end:1295 224 16 20 base_switch_ptr:1295 256 16 15 switch_pt"
                        "r:1297 288 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::getNicknameAuditAutoPassHours;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -218959360;
  v3[536862726] = -218959360;
  v3[536862727] = -219021312;
  v3[536862728] = -219021312;
  v3[536862730] = -202116109;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 0;
  v4 = this;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 64);
  *(_DWORD *)(v1 + 64) = 53;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                                    &v4->switch_map,
                                                                                                    (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 64));
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
    p_switch_map = (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 128) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v6 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 128));
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v1 + 96))->second;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 192) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 160),
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 192)) )
    {
      *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
      v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 160));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 224), v7);
      *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v1 + 256, v7);
      std::dynamic_pointer_cast<NicknameAuditSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v1 + 256));
      if ( std::operator==<NicknameAuditSwitch>(0LL, (const std::shared_ptr<NicknameAuditSwitch> *)(v1 + 256)) )
      {
        v8 = 0;
      }
      else
      {
        v9 = std::__shared_ptr_access<NicknameAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NicknameAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 256));
        if ( *(_BYTE *)(((unsigned __int64)&v9->auto_pass_hours >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v9->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v9->auto_pass_hours);
        }
        auto_pass_hours = v9->auto_pass_hours;
        if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v1 + 48);
        *(_DWORD *)(v1 + 48) = auto_pass_hours;
        v8 = 1;
      }
      std::shared_ptr<NicknameAuditSwitch>::~shared_ptr((std::shared_ptr<NicknameAuditSwitch> *const)(v1 + 256));
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 224));
      *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -1800;
      if ( v8 )
        break;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 160));
    }
    *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
  }
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 80);
  *(_DWORD *)(v1 + 80) = 1;
  v11 = (unsigned int *)std::max<unsigned int>((const unsigned int *)(v1 + 80), (const unsigned int *)(v1 + 48));
  v12 = (int *)v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v13 = *v12;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = v13;
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v1 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 288, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v1 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/feature_switch_mgr.cpp",
    "getNicknameAuditAutoPassHours",
    1307);
  v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
          (common::milog::MiLogStream *const)(v1 + 288),
          (const char (*)[18])" auto_pass_hours:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 288));
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v1 + 48);
  result = *(_DWORD *)(v1 + 48);
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1312: range 000000000CEC1F7A-000000000CEC1FF8
proto::NicknameAuditConfigNotify *__cdecl FeatureSwitchMgr::getNicknameAuditConfigNotify(
        proto::NicknameAuditConfigNotify *retstr,
        FeatureSwitchMgr *const this)
{
  bool isNicknameAuditEnabled; // dl
  uint32_t MonthlySubmitNicknameLimit; // edx

  proto::NicknameAuditConfigNotify::NicknameAuditConfigNotify(retstr);
  isNicknameAuditEnabled = FeatureSwitchMgr::isNicknameAuditEnabled(this);
  proto::NicknameAuditConfigNotify::set_is_open(retstr, isNicknameAuditEnabled);
  MonthlySubmitNicknameLimit = FeatureSwitchMgr::getMonthlySubmitNicknameLimit(this);
  proto::NicknameAuditConfigNotify::set_submit_limit(retstr, MonthlySubmitNicknameLimit);
  return retstr;
};

// Line 1320: range 000000000CEC1FFA-000000000CEC27C9
uint32_t __cdecl FeatureSwitchMgr::getMonthlySubmitSignatureLimit(const FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const FeatureSwitchMgr *v4; // rdx
  const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v6; // al
  const std::shared_ptr<BaseSwitch> *v7; // rsi
  int v8; // r14d
  std::__shared_ptr_access<SignatureAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  uint32_t *p_monthly_limit; // rax
  uint32_t monthly_limit; // ecx
  unsigned int *v12; // rax
  int *v13; // rdx
  int v14; // ecx
  common::milog::MiLogStream *v15; // rax
  uint32_t result; // eax
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+18h] [rbp-198h]
  char v18[400]; // [rsp+20h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 48 4 11 result:1321 64 4 9 <unknown> 80 4 9 <unknown> 96 8 9 iter:1322 128 8 9 <unknown> 160 "
                        "8 16 __for_begin:1325 192 8 14 __for_end:1325 224 16 20 base_switch_ptr:1325 256 16 15 switch_pt"
                        "r:1327 288 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::getMonthlySubmitSignatureLimit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -218959360;
  v3[536862726] = -218959360;
  v3[536862727] = -219021312;
  v3[536862728] = -219021312;
  v3[536862730] = -202116109;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 0;
  v4 = this;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 64);
  *(_DWORD *)(v1 + 64) = 54;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                                    &v4->switch_map,
                                                                                                    (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 64));
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
    p_switch_map = (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 128) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v6 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 128));
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v1 + 96))->second;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 192) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 160),
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 192)) )
    {
      *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
      v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 160));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 224), v7);
      *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v1 + 256, v7);
      std::dynamic_pointer_cast<SignatureAuditSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v1 + 256));
      if ( std::operator==<SignatureAuditSwitch>(0LL, (const std::shared_ptr<SignatureAuditSwitch> *)(v1 + 256)) )
      {
        v8 = 0;
      }
      else
      {
        v9 = std::__shared_ptr_access<SignatureAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SignatureAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 256));
        p_monthly_limit = &v9->monthly_limit;
        if ( *(_BYTE *)(((unsigned __int64)p_monthly_limit >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_monthly_limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_monthly_limit >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(p_monthly_limit);
        }
        monthly_limit = v9->monthly_limit;
        if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v1 + 48);
        *(_DWORD *)(v1 + 48) = monthly_limit;
        v8 = 1;
      }
      std::shared_ptr<SignatureAuditSwitch>::~shared_ptr((std::shared_ptr<SignatureAuditSwitch> *const)(v1 + 256));
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 224));
      *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -1800;
      if ( v8 )
        break;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 160));
    }
    *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
  }
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 80);
  *(_DWORD *)(v1 + 80) = 1;
  v12 = (unsigned int *)std::max<unsigned int>((const unsigned int *)(v1 + 80), (const unsigned int *)(v1 + 48));
  v13 = (int *)v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  v14 = *v13;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = v14;
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v1 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 288, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v1 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/feature_switch_mgr.cpp",
    "getMonthlySubmitSignatureLimit",
    1337);
  v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
          (common::milog::MiLogStream *const)(v1 + 288),
          (const char (*)[8])" limit:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 288));
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v1 + 48);
  result = *(_DWORD *)(v1 + 48);
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1342: range 000000000CEC27CA-000000000CEC2F90
uint32_t __cdecl FeatureSwitchMgr::getSignatureAuditAutoPassHours(const FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const FeatureSwitchMgr *v4; // rdx
  const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v6; // al
  const std::shared_ptr<BaseSwitch> *v7; // rsi
  int v8; // r14d
  std::__shared_ptr_access<SignatureAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t auto_pass_hours; // ecx
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  common::milog::MiLogStream *v14; // rax
  uint32_t result; // eax
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+18h] [rbp-198h]
  char v17[400]; // [rsp+20h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 48 4 11 result:1343 64 4 9 <unknown> 80 4 9 <unknown> 96 8 9 iter:1344 128 8 9 <unknown> 160 "
                        "8 16 __for_begin:1347 192 8 14 __for_end:1347 224 16 20 base_switch_ptr:1347 256 16 15 switch_pt"
                        "r:1349 288 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::getSignatureAuditAutoPassHours;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -218959360;
  v3[536862726] = -218959360;
  v3[536862727] = -219021312;
  v3[536862728] = -219021312;
  v3[536862730] = -202116109;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 0;
  v4 = this;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 64);
  *(_DWORD *)(v1 + 64) = 54;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                                    &v4->switch_map,
                                                                                                    (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 64));
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
    p_switch_map = (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 128) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v6 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 128));
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v1 + 96))->second;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 192) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 160),
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 192)) )
    {
      *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
      v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 160));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 224), v7);
      *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v1 + 256, v7);
      std::dynamic_pointer_cast<SignatureAuditSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v1 + 256));
      if ( std::operator==<SignatureAuditSwitch>(0LL, (const std::shared_ptr<SignatureAuditSwitch> *)(v1 + 256)) )
      {
        v8 = 0;
      }
      else
      {
        v9 = std::__shared_ptr_access<SignatureAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SignatureAuditSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 256));
        if ( *(_BYTE *)(((unsigned __int64)&v9->auto_pass_hours >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v9->auto_pass_hours >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v9->auto_pass_hours);
        }
        auto_pass_hours = v9->auto_pass_hours;
        if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v1 + 48);
        *(_DWORD *)(v1 + 48) = auto_pass_hours;
        v8 = 1;
      }
      std::shared_ptr<SignatureAuditSwitch>::~shared_ptr((std::shared_ptr<SignatureAuditSwitch> *const)(v1 + 256));
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 224));
      *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -1800;
      if ( v8 )
        break;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 160));
    }
    *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
  }
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 80);
  *(_DWORD *)(v1 + 80) = 1;
  v11 = (unsigned int *)std::max<unsigned int>((const unsigned int *)(v1 + 80), (const unsigned int *)(v1 + 48));
  v12 = (int *)v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v13 = *v12;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = v13;
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v1 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 288, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v1 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/feature_switch_mgr.cpp",
    "getSignatureAuditAutoPassHours",
    1359);
  v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
          (common::milog::MiLogStream *const)(v1 + 288),
          (const char (*)[18])" auto_pass_hours:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 288));
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v1 + 48);
  result = *(_DWORD *)(v1 + 48);
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1364: range 000000000CEC2F92-000000000CEC3010
proto::SignatureAuditConfigNotify *__cdecl FeatureSwitchMgr::getSignatureAuditConfigNotify(
        proto::SignatureAuditConfigNotify *retstr,
        FeatureSwitchMgr *const this)
{
  bool isSignatureAuditEnabled; // dl
  uint32_t MonthlySubmitSignatureLimit; // edx

  proto::SignatureAuditConfigNotify::SignatureAuditConfigNotify(retstr);
  isSignatureAuditEnabled = FeatureSwitchMgr::isSignatureAuditEnabled(this);
  proto::SignatureAuditConfigNotify::set_is_open(retstr, isSignatureAuditEnabled);
  MonthlySubmitSignatureLimit = FeatureSwitchMgr::getMonthlySubmitSignatureLimit(this);
  proto::SignatureAuditConfigNotify::set_submit_limit(retstr, MonthlySubmitSignatureLimit);
  return retstr;
};

// Line 1372: range 000000000CEC3012-000000000CEC37E1
uint32_t __cdecl FeatureSwitchMgr::getHomeAuditBeforeReleaseCheckHours(const FeatureSwitchMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const FeatureSwitchMgr *v4; // rdx
  const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v6; // al
  const std::shared_ptr<BaseSwitch> *v7; // rsi
  int v8; // r14d
  std::__shared_ptr_access<HomeAuditBeforeReleaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  uint32_t *p_check_hours; // rax
  uint32_t check_hours; // ecx
  unsigned int *v12; // rax
  int *v13; // rdx
  int v14; // ecx
  common::milog::MiLogStream *v15; // rax
  uint32_t result; // eax
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+18h] [rbp-198h]
  char v18[400]; // [rsp+20h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 48 4 11 result:1373 64 4 9 <unknown> 80 4 9 <unknown> 96 8 9 iter:1374 128 8 9 <unknown> 160 "
                        "8 16 __for_begin:1377 192 8 14 __for_end:1377 224 16 20 base_switch_ptr:1377 256 16 15 switch_pt"
                        "r:1379 288 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = FeatureSwitchMgr::getHomeAuditBeforeReleaseCheckHours;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -218959360;
  v3[536862726] = -218959360;
  v3[536862727] = -219021312;
  v3[536862728] = -219021312;
  v3[536862730] = -202116109;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = 0;
  v4 = this;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 64);
  *(_DWORD *)(v1 + 64) = 60;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                                    &v4->switch_map,
                                                                                                    (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v1 + 64));
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
    p_switch_map = (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v1 + 128) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v6 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v1 + 128));
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v1 + 96))->second;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v1 + 192) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 160),
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v1 + 192)) )
    {
      *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
      v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 160));
      std::shared_ptr<BaseSwitch>::shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 224), v7);
      *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v1 + 256, v7);
      std::dynamic_pointer_cast<HomeAuditBeforeReleaseSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v1 + 256));
      if ( std::operator==<HomeAuditBeforeReleaseSwitch>(
             0LL,
             (const std::shared_ptr<HomeAuditBeforeReleaseSwitch> *)(v1 + 256)) )
      {
        v8 = 0;
      }
      else
      {
        v9 = std::__shared_ptr_access<HomeAuditBeforeReleaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeAuditBeforeReleaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 256));
        p_check_hours = &v9->check_hours;
        if ( *(_BYTE *)(((unsigned __int64)p_check_hours >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_check_hours & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_check_hours >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_check_hours);
        }
        check_hours = v9->check_hours;
        if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v1 + 48);
        *(_DWORD *)(v1 + 48) = check_hours;
        v8 = 1;
      }
      std::shared_ptr<HomeAuditBeforeReleaseSwitch>::~shared_ptr((std::shared_ptr<HomeAuditBeforeReleaseSwitch> *const)(v1 + 256));
      std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v1 + 224));
      *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -1800;
      if ( v8 )
        break;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v1 + 160));
    }
    *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
  }
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 80);
  *(_DWORD *)(v1 + 80) = 1;
  v12 = (unsigned int *)std::max<unsigned int>((const unsigned int *)(v1 + 80), (const unsigned int *)(v1 + 48));
  v13 = (int *)v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  v14 = *v13;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 48);
  *(_DWORD *)(v1 + 48) = v14;
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v1 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 288, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v1 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/feature_switch_mgr.cpp",
    "getHomeAuditBeforeReleaseCheckHours",
    1389);
  v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
          (common::milog::MiLogStream *const)(v1 + 288),
          (const char (*)[14])" check_hours:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 288));
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v1 + 48);
  result = *(_DWORD *)(v1 + 48);
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1395: range 000000000CEC37E2-000000000CEC3CA1
std::set<unsigned int> *__cdecl FeatureSwitchMgr::getGCGBanCardSet(
        std::set<unsigned int> *retstr,
        const FeatureSwitchMgr *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const FeatureSwitchMgr *v5; // rdx
  const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  bool v7; // al
  std::__shared_ptr_access<GCGBanCardSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r14
  std::__shared_ptr_access<GCGBanCardSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *v11; // rcx
  std::vector<std::shared_ptr<BaseSwitch>> *__for_range; // [rsp+10h] [rbp-120h]
  char v14[272]; // [rsp+20h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 9 <unknown> 64 8 9 iter:1397 96 8 9 <unknown> 128 8 16 __for_begin:1400 160 8 14 __for_en"
                        "d:1400 192 16 15 switch_ptr:1402";
  *(_QWORD *)(v2 + 16) = FeatureSwitchMgr::getGCGBanCardSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -202178560;
  std::set<unsigned int>::set(retstr);
  v5 = this;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 3307;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                                    &v5->switch_map,
                                                                                                    (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  p_switch_map = &this->switch_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    p_switch_map = (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
  *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(p_switch_map);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v2 + 64))->second;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v2 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(__for_range);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::shared_ptr<BaseSwitch>>::const_iterator *)(v2 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>(
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v2 + 160)) )
    {
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 192, v2 + 160);
      std::dynamic_pointer_cast<GCGBanCardSwitch,BaseSwitch>((const std::shared_ptr<BaseSwitch> *)(v2 + 192));
      if ( !std::operator==<GCGBanCardSwitch>(0LL, (const std::shared_ptr<GCGBanCardSwitch> *)(v2 + 192)) )
      {
        v8 = std::__shared_ptr_access<GCGBanCardSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGBanCardSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
        M_cur = std::unordered_set<unsigned int>::end(&v8->value_set)._M_cur;
        v10 = std::__shared_ptr_access<GCGBanCardSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGBanCardSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
        v11 = std::unordered_set<unsigned int>::begin(&v10->value_set)._M_cur;
        std::set<unsigned int>::insert<std::__detail::_Node_iterator<unsigned int,true,false>>(
          retstr,
          (std::__detail::_Node_iterator<unsigned int,true,false>)v11,
          (std::__detail::_Node_iterator<unsigned int,true,false>)M_cur);
      }
      std::shared_ptr<GCGBanCardSwitch>::~shared_ptr((std::shared_ptr<GCGBanCardSwitch> *const)(v2 + 192));
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -1800;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> const*,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v2 + 128));
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return retstr;
};

// Line 1414: range 000000000CEC3CA2-000000000CEC4485
__int64 __fastcall FeatureSwitchMgr::updateFeatureSwitch(
        FeatureSwitchMgr *const this,
        __int64 type,
        const std::string *para)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::string *v7; // rdx
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *p_switch_map; // rax
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *v9; // rax
  bool v10; // al
  std::vector<std::shared_ptr<BaseSwitch>> *v11; // rax
  int v12; // eax
  int v13; // edx
  std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  unsigned __int64 v16; // rax
  std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  __int64 result; // rax
  unsigned __int8 (__fastcall *v19)(std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // [rsp+10h] [rbp-1D0h]
  bool found; // [rsp+37h] [rbp-1A9h]
  std::vector<std::shared_ptr<BaseSwitch>> *switch_ptr_vec; // [rsp+38h] [rbp-1A8h]
  __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> >::reference old_switch_ptr; // [rsp+48h] [rbp-198h]
  char v24[400]; // [rsp+50h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 9 type:1413 64 8 9 iter:1424 96 8 9 <unknown> 128 8 16 __for_begin:1434 160 8 14 __for_en"
                        "d:1434 192 16 15 switch_ptr:1416 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = FeatureSwitchMgr::updateFeatureSwitch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -219021312;
  v6[536862728] = -218959118;
  v6[536862730] = -202116109;
  *(_DWORD *)(v4 + 48) = type;
  v7 = (const std::string *)*(unsigned int *)(v4 + 48);
  if ( *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 192, type);
  FeatureSwitchMgr::createSwitch((FeatureSwitchMgr *const)(v4 + 192), (uint32_t)this, v7, (__int64)para);
  if ( std::operator==<BaseSwitch>(0LL, (const std::shared_ptr<BaseSwitch> *)(v4 + 192)) )
  {
    if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 1) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/feature_switch_mgr.cpp",
      "updateFeatureSwitch",
      1419);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v4 + 224),
      (const char (*)[20])"switch create fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
    *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
  }
  else
  {
    p_switch_map = &this->switch_map;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      p_switch_map = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
    *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v4 + 64) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::find(
                                                                                                p_switch_map,
                                                                                                (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v4 + 48));
    v9 = &this->switch_map;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      v9 = (std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>> *)__asan_report_store8();
    *(std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::iterator *)(v4 + 96) = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::end(v9);
    v10 = std::operator==(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v4 + 64),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > >::_Self *)(v4 + 96));
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      v11 = std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::operator[](
              &this->switch_map,
              (const std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::key_type *)(v4 + 48));
      std::vector<std::shared_ptr<BaseSwitch>>::emplace_back<std::shared_ptr<BaseSwitch>&>(
        v11,
        (std::shared_ptr<BaseSwitch> *)(v4 + 192),
        (std::shared_ptr<BaseSwitch> *)v11);
      v12 = 0;
    }
    else
    {
      found = 0;
      switch_ptr_vec = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<BaseSwitch>> > > *const)(v4 + 64))->second;
      *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v4 + 128) = std::vector<std::shared_ptr<BaseSwitch>>::begin(switch_ptr_vec);
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::shared_ptr<BaseSwitch>>::iterator *)(v4 + 160) = std::vector<std::shared_ptr<BaseSwitch>>::end(switch_ptr_vec);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>(
                (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v4 + 128),
                (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *)(v4 + 160)) )
          goto LABEL_33;
        old_switch_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v4 + 128));
        if ( std::operator==<BaseSwitch>(0LL, old_switch_ptr) )
          break;
        v14 = std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)old_switch_ptr);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v14);
        v16 = (unsigned __int64)(v15->_vptr_BaseSwitch + 3);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15->_vptr_BaseSwitch + 3);
        v19 = *(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v16;
        v17 = std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseSwitch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
        if ( v19(v15, v17) )
        {
          found = 1;
LABEL_33:
          v13 = 1;
          goto LABEL_34;
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch> *,std::vector<std::shared_ptr<BaseSwitch>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<BaseSwitch>*,std::vector<std::shared_ptr<BaseSwitch>> > *const)(v4 + 128));
      }
      *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/feature_switch_mgr.cpp",
        "updateFeatureSwitch",
        1438);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
        (common::milog::MiLogStream *const)(v4 + 288),
        (const char (*)[19])"switch ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
      *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
      v13 = 0;
LABEL_34:
      *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v13 == 1 )
      {
        if ( !found )
        {
          std::vector<std::shared_ptr<BaseSwitch>>::emplace_back<std::shared_ptr<BaseSwitch>&>(
            switch_ptr_vec,
            (std::shared_ptr<BaseSwitch> *)(v4 + 192),
            (std::shared_ptr<BaseSwitch> *)(v4 + 192));
          v12 = 0;
        }
        else
        {
          v12 = 2;
        }
      }
      else
      {
        v12 = 1;
      }
    }
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v12 || v12 == 2 )
      v3 = 0;
  }
  std::shared_ptr<BaseSwitch>::~shared_ptr((std::shared_ptr<BaseSwitch> *const)(v4 + 192));
  result = v3;
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1460: range 000000000CEC4486-000000000CEC4B7B
int32_t __cdecl FeatureSwitchMgr::refresh(
        FeatureSwitchMgr *const this,
        const data::DbFeatureSwitchOffConfigMgr *feature_switch_off_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_type; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // edx
  const char *v11; // rsi
  __int64 type; // rcx
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FeatureSwitchConfig>,false,false>::reference v14; // [rsp+18h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FeatureSwitchConfig> >::type *config; // [rsp+28h] [rbp-158h]
  char v16[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 16 __for_begin:1462 64 8 14 __for_end:1462 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = FeatureSwitchMgr::refresh;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  std::map<unsigned int,std::vector<std::shared_ptr<BaseSwitch>>>::clear(&this->switch_map);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::FeatureSwitchConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FeatureSwitchConfig>::begin(&feature_switch_off_config_mgr->feature_switch_config_map);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::FeatureSwitchConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FeatureSwitchConfig>::end(&feature_switch_off_config_mgr->feature_switch_config_map);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FeatureSwitchConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FeatureSwitchConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FeatureSwitchConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_24;
    }
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FeatureSwitchConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FeatureSwitchConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::FeatureSwitchConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::FeatureSwitchConfig> >::type *)std::get<1ul,unsigned int const,data::FeatureSwitchConfig>(v14);
    p_type = &config->type;
    if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_type);
    }
    if ( (unsigned int)FeatureSwitchMgr::updateFeatureSwitch(this, config->type, &config->msg) )
      break;
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/feature_switch_mgr.cpp",
      "refresh",
      1469);
    v11 = (const char *)std::string::c_str(&config->msg);
    if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->type);
    }
    type = config->type;
    if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(config);
    }
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 160),
      "[FEATURE_SWITCH] load switch db config succ, id:%u type:%u msg:%s",
      config->id,
      type,
      v11);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FeatureSwitchConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FeatureSwitchConfig>,false,false> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 96, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 96),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/feature_switch_mgr.cpp",
    "refresh",
    1466);
  v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[49])"[FEATURE_SWITCH] updateFeatureSwitch failed id: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->id);
  v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", msg: ");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &config->msg);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v10 = 0;
LABEL_24:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/feature_switch_mgr.cpp",
      "refresh",
      1471);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 224),
      "[FEATURE_SWITCH] Feature switch refresh succ");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = 0;
  }
  result = v2;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1473: range 000000000CEC4D60-000000000CEC4D74
void __cdecl GLOBAL__sub_I_feature_switch_mgr_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 1473: range 000000000CEC4B7C-000000000CEC4D5F
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  _BYTE *v6; // rcx
  _BYTE *v7; // rcx
  const char *v8; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/feature_switch_mgr.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8();
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8();
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8();
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8();
      boost::asio::error::misc_category = misc_category;
      v6 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v6 )
      {
        v7 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v7 = 1;
        v8 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v8;
      }
    }
    __asan_after_dynamic_init();
  }
};
