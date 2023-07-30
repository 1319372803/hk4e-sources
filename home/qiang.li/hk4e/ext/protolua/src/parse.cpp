// File: /home/qiang.li/hk4e/ext/protolua/src/parse.cpp

// Line 10: range 000000000DBFD320-000000000DBFD3F2
bool __fastcall protolua::parseEnum(const google::protobuf::EnumDescriptor *enum_desc, lua_State_0 *L)
{
  int value_count; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  google::protobuf::EnumValueDescriptor *v5; // r12

  lua_getglobal(L, enum_desc->name_->_M_dataplus._M_p);
  if ( lua_type(L, -1) )
  {
    lua_settop(L, -2);
    return 1;
  }
  else
  {
    lua_settop(L, -2);
    lua_createtable(L, 0, 0);
    value_count = enum_desc->value_count_;
    if ( value_count > 0 )
    {
      v3 = 0LL;
      v4 = 8 * (5LL * (unsigned int)(value_count - 1) + 5);
      do
      {
        v5 = &enum_desc->values_[v3 / 0x28];
        v3 += 40LL;
        lua_pushstring(L, v5->name_->_M_dataplus._M_p);
        lua_pushinteger(L, v5->number_);
        lua_settable(L, -3);
      }
      while ( v4 != v3 );
    }
    lua_setglobal(L, enum_desc->name_->_M_dataplus._M_p);
    return 1;
  }
};

// Line 33: range 000000000DBFD400-000000000DBFD4D5
bool __fastcall protolua::parseMessage(const google::protobuf::Descriptor *message_desc, lua_State_0 *L)
{
  int enum_type_count; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  bool v5; // r12
  __int64 v6; // rcx
  int nested_type_count; // eax
  unsigned __int64 v9; // rbx
  __int64 v10; // r14

  enum_type_count = message_desc->enum_type_count_;
  if ( enum_type_count > 0 )
  {
    v3 = 0LL;
    v4 = 56 * ((unsigned int)(enum_type_count - 1) + 1LL);
    while ( 1 )
    {
      v5 = protolua::parseEnum(&message_desc->enum_types_[v3 / 0x38], L);
      if ( !v5 )
        break;
      v3 += 56LL;
      if ( v3 == v4 )
        goto LABEL_7;
    }
    v6 = 38LL;
    goto LABEL_6;
  }
LABEL_7:
  nested_type_count = message_desc->nested_type_count_;
  if ( nested_type_count > 0 )
  {
    v9 = 0LL;
    v10 = 16 * (9LL * (unsigned int)(nested_type_count - 1) + 9);
    while ( 1 )
    {
      v5 = protolua::parseMessage(&message_desc->nested_types_[v9 / 0x90], L);
      if ( !v5 )
        break;
      v9 += 144LL;
      if ( v10 == v9 )
        return 1;
    }
    v6 = 45LL;
LABEL_6:
    printf("fail, file:%s, func:%s, line:%u\n", "src/parse.cpp", "parseMessage", v6);
    return v5;
  }
  return 1;
};

// Line 51: range 000000000DBFD4E0-000000000DBFD611
bool __fastcall protolua::parseFile(const google::protobuf::FileDescriptor *file_desc, lua_State_0 *L)
{
  int dependency_count; // r13d
  int v3; // r14d
  const google::protobuf::FileDescriptor *v4; // rax
  bool v5; // r12
  int enum_type_count; // eax
  unsigned __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rcx
  int message_type_count; // eax
  unsigned __int64 v12; // r13
  __int64 v13; // r14

  dependency_count = file_desc->dependency_count_;
  if ( dependency_count > 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = (const google::protobuf::FileDescriptor *)google::protobuf::FileDescriptor::dependency(
                                                       (google::protobuf::FileDescriptor *)file_desc,
                                                       v3);
      v5 = protolua::parseFile(v4, L);
      if ( !v5 )
        break;
      if ( ++v3 == dependency_count )
        goto LABEL_5;
    }
    v9 = 56LL;
    goto LABEL_10;
  }
LABEL_5:
  enum_type_count = file_desc->enum_type_count_;
  if ( enum_type_count > 0 )
  {
    v7 = 0LL;
    v8 = 56 * ((unsigned int)(enum_type_count - 1) + 1LL);
    while ( 1 )
    {
      v5 = protolua::parseEnum(&file_desc->enum_types_[v7 / 0x38], L);
      if ( !v5 )
        break;
      v7 += 56LL;
      if ( v7 == v8 )
        goto LABEL_12;
    }
    v9 = 63LL;
    goto LABEL_10;
  }
LABEL_12:
  message_type_count = file_desc->message_type_count_;
  if ( message_type_count > 0 )
  {
    v12 = 0LL;
    v13 = 16 * (9LL * (unsigned int)(message_type_count - 1) + 9);
    while ( 1 )
    {
      v5 = protolua::parseMessage(&file_desc->message_types_[v12 / 0x90], L);
      if ( !v5 )
        break;
      v12 += 144LL;
      if ( v13 == v12 )
        return 1;
    }
    v9 = 70LL;
LABEL_10:
    printf("fail, file:%s, func:%s, line:%u\n", "src/parse.cpp", "parseFile", v9);
    return v5;
  }
  return 1;
};

// Line 76: range 000000000DBFD620-000000000DBFD763
__int64 __fastcall protolua::protoParse(protolua *this, lua_State_0 *L, lua_State *a3)
{
  size_t v4; // rax
  std::string::size_type v5; // rbx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  const google::protobuf::FileDescriptor *v7; // rbp
  unsigned int v8; // r12d
  unsigned int v9; // eax
  char *v11; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v12; // rdi
  std::string v13[2]; // [rsp+0h] [rbp-48h] BYREF

  v13[0]._M_dataplus._M_p = v13[0]._anon_0._M_local_buf;
  if ( !this )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v4 = strlen((const char *)this);
  v5 = v4;
  if ( v4 > 0xF )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::_M_create");
    v11 = (char *)operator new(v4 + 1);
    v13[0]._anon_0._M_allocated_capacity = v5;
    v13[0]._M_dataplus._M_p = v11;
    v12 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11;
  }
  else
  {
    if ( v4 == 1 )
    {
      v13[0]._anon_0._M_local_buf[0] = *(_BYTE *)this;
      p_anon_0 = &v13[0]._anon_0;
      goto LABEL_5;
    }
    if ( !v4 )
    {
      p_anon_0 = &v13[0]._anon_0;
      goto LABEL_5;
    }
    v12 = &v13[0]._anon_0;
  }
  memcpy(v12, this, v5);
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13[0]._M_dataplus._M_p;
LABEL_5:
  v13[0]._M_string_length = v5;
  p_anon_0->_M_local_buf[v5] = 0;
  v7 = (const google::protobuf::FileDescriptor *)google::protobuf::compiler::Importer::Import(
                                                   &protolua::g_importer,
                                                   v13);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13[0]._M_dataplus._M_p != &v13[0]._anon_0 )
    operator delete(v13[0]._M_dataplus._M_p);
  v8 = 0;
  if ( !v7 )
    return v8;
  LOBYTE(v9) = protolua::parseFile(v7, L);
  v8 = v9;
  if ( (_BYTE)v9 )
    return v8;
  printf("fail, file:%s, func:%s, line:%u\n", "src/parse.cpp", "protoParse", 83LL);
  return v8;
};

// Line 86: range 0000000000438810-0000000000438839
void __cdecl GLOBAL__sub_I_parse_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
