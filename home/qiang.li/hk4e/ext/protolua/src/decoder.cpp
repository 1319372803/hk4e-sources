// File: /home/qiang.li/hk4e/ext/protolua/src/decoder.cpp

// Line 20: range 000000000DBFEED0-000000000DBFEF5E
bool __fastcall protolua::decodeField(
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        lua_State_0 *L)
{
  google::protobuf::FieldDescriptor::Label label; // eax

  if ( (unsigned __int8)google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field) )
    return protolua::decodeTable(message, field, L);
  label = field->label_;
  switch ( label )
  {
    case LABEL_REQUIRED:
      return protolua::decodeRequired(message, field, L);
    case LABEL_OPTIONAL:
      return protolua::decodeOptional(message, field, L);
    case LABEL_REPEATED:
      return protolua::decodeRepeated(message, field, L);
  }
  return 0;
};

// Line 34: range 000000000DBFEA00-000000000DBFEA75
bool __fastcall protolua::decodeRequired(
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        lua_State_0 *L)
{
  __int64 (*v5)(void); // rdx
  __int64 v6; // rdx
  __int64 v7; // rdi
  lua_State *v8; // rcx

  v5 = (__int64 (*)(void))*((_QWORD *)message->_vptr_MessageLite + 23);
  if ( (char *)v5 == (char *)google::protobuf::Message::GetReflection )
  {
    (*((void (**)(void))message->_vptr_MessageLite + 24))();
    v7 = v6;
  }
  else
  {
    v7 = v5();
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v7 + 40LL))(
          v7,
          message,
          field) )
    printf("decodeRequired field notFound, field=%s\n", field->full_name_->_M_dataplus._M_p);
  return protolua::decodeSingle(
           (protolua *)message,
           (const google::protobuf::Message *)field,
           (const google::protobuf::FieldDescriptor *)L,
           v8);
};

// Line 45: range 000000000DBFEA80-000000000DBFEAF2
bool __fastcall protolua::decodeOptional(
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        lua_State_0 *L)
{
  __int64 (*v5)(void); // rdx
  lua_State *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi

  v5 = (__int64 (*)(void))*((_QWORD *)message->_vptr_MessageLite + 23);
  if ( (char *)v5 == (char *)google::protobuf::Message::GetReflection )
  {
    (*((void (**)(void))message->_vptr_MessageLite + 24))();
    v8 = v7;
  }
  else
  {
    v8 = v5();
  }
  if ( !field->containing_oneof_
    || (*(unsigned __int8 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v8 + 40LL))(
         v8,
         message,
         field) )
  {
    return protolua::decodeSingle(
             (protolua *)message,
             (const google::protobuf::Message *)field,
             (const google::protobuf::FieldDescriptor *)L,
             v6);
  }
  lua_pushnil(L);
  return 1;
};

// Line 57: range 000000000DBFEDE0-000000000DBFEEC5
bool __fastcall protolua::decodeRepeated(
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        lua_State_0 *L)
{
  __int64 (*v5)(void); // rdx
  __int64 v6; // rdx
  __int64 v7; // rdi
  int v8; // ebx
  int v9; // r8d
  __int64 v10; // r15
  __int64 i; // rbx
  char v12; // r12

  v5 = (__int64 (*)(void))*((_QWORD *)message->_vptr_MessageLite + 23);
  if ( (char *)v5 == (char *)google::protobuf::Message::GetReflection )
  {
    (*((void (**)(void))message->_vptr_MessageLite + 24))();
    v7 = v6;
  }
  else
  {
    v7 = v5();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v7 + 48LL))(
         v7,
         message,
         field);
  lua_createtable(L, v8, 0);
  if ( v8 <= 0 )
    return 1;
  v10 = (unsigned int)(v8 - 1);
  for ( i = 0LL; ; ++i )
  {
    v12 = protolua::decodeMultiple(
            (protolua *)message,
            (const google::protobuf::Message *)field,
            (const google::protobuf::FieldDescriptor *)L,
            (lua_State *)(unsigned int)i,
            v9);
    if ( !v12 )
      break;
    lua_seti(L, -2, i + 1);
    if ( v10 == i )
      return 1;
  }
  printf("fail, file:%s, func:%s, line:%u\n", "src/decoder.cpp", "decodeRepeated", 63LL);
  return v12;
};

// Line 70: range 000000000DBFEF70-000000000DBFF0E9
bool __fastcall protolua::decodeTable(
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        lua_State_0 *L)
{
  __int64 (*v5)(void); // rdx
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rax
  const google::protobuf::FieldDescriptor *v11; // r15
  unsigned int v12; // ebx
  const google::protobuf::Message *v13; // rdi
  __int64 v14; // rcx
  int field_size; // [rsp+14h] [rbp-44h]

  v5 = (__int64 (*)(void))*((_QWORD *)message->_vptr_MessageLite + 23);
  if ( (char *)v5 == (char *)google::protobuf::Message::GetReflection )
  {
    (*((void (**)(void))message->_vptr_MessageLite + 24))();
    v7 = v6;
  }
  else
  {
    v7 = v5();
  }
  field_size = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v7 + 48LL))(
                 v7,
                 message,
                 field);
  v8 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)field);
  if ( *(_DWORD *)(v8 + 104) == 2 )
  {
    v11 = *(const google::protobuf::FieldDescriptor **)(v8 + 40);
    lua_createtable(L, 0, field_size);
    if ( field_size <= 0 )
    {
      return 1;
    }
    else
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = (const google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v7 + 416LL))(
                                                   v7,
                                                   message,
                                                   field,
                                                   v12);
        if ( !protolua::decodeField(v13, v11, L) )
        {
          v14 = 83LL;
          goto LABEL_12;
        }
        if ( !protolua::decodeField(v13, v11 + 1, L) )
          break;
        ++v12;
        lua_settable(L, -3);
        if ( field_size == v12 )
          return 1;
      }
      v14 = 84LL;
LABEL_12:
      printf("fail, file:%s, func:%s, line:%u\n", "src/decoder.cpp", "decodeTable", v14);
      return 0;
    }
  }
  else
  {
    printf("fail, file:%s, func:%s, line:%u\n", "src/decoder.cpp", "decodeTable", 75LL);
    return 0;
  }
};

// Line 91: range 000000000DBFE720-000000000DBFE9F1
__int64 __fastcall protolua::decodeSingle(
        protolua *this,
        google::protobuf::FieldDescriptor *a2,
        lua_State_0 *a3,
        lua_State *a4,
        double a5,
        lua_Number a6)
{
  const google::protobuf::Message::Reflection *(__fastcall *v7)(const google::protobuf::Message *const); // rdx
  __int64 v8; // rdx
  __int64 v9; // r13
  const google::protobuf::Message *v10; // rbp
  const google::protobuf::Descriptor *v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // r12d
  int v15; // eax
  lua_Integer v16; // rax
  unsigned int v17; // eax
  lua_Integer v18; // rax
  unsigned __int8 v19; // al
  int v20; // eax
  char *s[2]; // [rsp+0h] [rbp-48h] BYREF
  char v22; // [rsp+10h] [rbp-38h] BYREF

  v7 = *(const google::protobuf::Message::Reflection *(__fastcall **)(const google::protobuf::Message *const))(*(_QWORD *)this + 184LL);
  if ( v7 == google::protobuf::Message::GetReflection )
  {
    (*(void (__fastcall **)(protolua *, google::protobuf::FieldDescriptor *, const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const), lua_State *))(*(_QWORD *)this + 192LL))(
      this,
      a2,
      v7,
      a4);
    v9 = v8;
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(protolua *, google::protobuf::FieldDescriptor *, const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const), lua_State *))v7)(
           this,
           a2,
           v7,
           a4);
  }
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type(a2) )
  {
    case 1u:
      v13 = 1;
      (*(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v9 + 176LL))(
        v9,
        this,
        a2);
      lua_pushnumber(a3, a6);
      break;
    case 2u:
      v13 = 1;
      (*(float (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v9 + 168LL))(
        v9,
        this,
        a2);
      lua_pushnumber(a3, a6);
      break;
    case 3u:
    case 0x10u:
    case 0x12u:
      v13 = 1;
      v16 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v9 + 144LL))(
              v9,
              this,
              a2);
      lua_pushinteger(a3, v16);
      break;
    case 4u:
    case 6u:
      v13 = 1;
      v18 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v9 + 160LL))(
              v9,
              this,
              a2);
      lua_pushinteger(a3, v18);
      break;
    case 5u:
    case 0xFu:
    case 0x11u:
      v13 = 1;
      v15 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v9 + 136LL))(
              v9,
              this,
              a2);
      lua_pushinteger(a3, v15);
      break;
    case 7u:
    case 0xDu:
      v13 = 1;
      v17 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v9 + 152LL))(
              v9,
              this,
              a2);
      lua_pushinteger(a3, v17);
      break;
    case 8u:
      v13 = 1;
      v19 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v9 + 184LL))(
              v9,
              this,
              a2);
      lua_pushboolean(a3, v19);
      break;
    case 9u:
    case 0xCu:
      (*(void (__fastcall **)(char **, __int64, protolua *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v9 + 192LL))(
        s,
        v9,
        this,
        a2);
      lua_pushlstring(a3, s[0], (size_t)s[1]);
      if ( s[0] != &v22 )
        operator delete(s[0]);
      v13 = 1;
      break;
    case 0xAu:
    case 0xBu:
      v10 = (const google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v9 + 216LL))(
                                                 v9,
                                                 this,
                                                 a2,
                                                 0LL);
      v11 = (const google::protobuf::Descriptor *)google::protobuf::FieldDescriptor::message_type(a2);
      LOBYTE(v12) = protolua::decodeMessage(v10, v11, a3);
      v13 = v12;
      if ( !(_BYTE)v12 )
        printf("fail, file:%s, func:%s, line:%u\n", "src/decoder.cpp", "decodeSingle", 128LL);
      break;
    case 0xEu:
      v13 = 1;
      v20 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v9 + 208LL))(
              v9,
              this,
              a2);
      lua_pushinteger(a3, v20);
      break;
    default:
      v13 = 0;
      printf("decodeSingle field unknow type, field=%s\n", a2->full_name_->_M_dataplus._M_p);
      break;
  }
  return v13;
};

// Line 139: range 000000000DBFEB00-000000000DBFEDD1
__int64 __fastcall protolua::decodeMultiple(
        protolua *this,
        google::protobuf::FieldDescriptor *a2,
        lua_State_0 *a3,
        lua_State *a4,
        double a5,
        lua_Number a6)
{
  unsigned int v6; // r14d
  __int64 (*v8)(void); // rdx
  __int64 v9; // rdx
  __int64 v10; // r15
  const google::protobuf::Message *v11; // rbp
  const google::protobuf::Descriptor *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r12d
  int v16; // eax
  lua_Integer v17; // rax
  unsigned int v18; // eax
  lua_Integer v19; // rax
  unsigned __int8 v20; // al
  int v21; // eax
  char *s[2]; // [rsp+0h] [rbp-48h] BYREF
  char v23; // [rsp+10h] [rbp-38h] BYREF

  v6 = (unsigned int)a4;
  v8 = *(__int64 (**)(void))(*(_QWORD *)this + 184LL);
  if ( (char *)v8 == (char *)google::protobuf::Message::GetReflection )
  {
    (*(void (**)(void))(*(_QWORD *)this + 192LL))();
    v10 = v9;
  }
  else
  {
    v10 = v8();
  }
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type(a2) )
  {
    case 1u:
      v14 = 1;
      (*(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v10 + 376LL))(
        v10,
        this,
        a2,
        v6);
      lua_pushnumber(a3, a6);
      break;
    case 2u:
      v14 = 1;
      (*(float (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v10 + 368LL))(
        v10,
        this,
        a2,
        v6);
      lua_pushnumber(a3, a6);
      break;
    case 3u:
    case 0x10u:
    case 0x12u:
      v14 = 1;
      v17 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v10 + 344LL))(
              v10,
              this,
              a2,
              v6);
      lua_pushinteger(a3, v17);
      break;
    case 4u:
    case 6u:
      v14 = 1;
      v19 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v10 + 360LL))(
              v10,
              this,
              a2,
              v6);
      lua_pushinteger(a3, v19);
      break;
    case 5u:
    case 0xFu:
    case 0x11u:
      v14 = 1;
      v16 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v10 + 336LL))(
              v10,
              this,
              a2,
              v6);
      lua_pushinteger(a3, v16);
      break;
    case 7u:
    case 0xDu:
      v14 = 1;
      v18 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v10 + 352LL))(
              v10,
              this,
              a2,
              v6);
      lua_pushinteger(a3, v18);
      break;
    case 8u:
      v14 = 1;
      v20 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v10 + 384LL))(
              v10,
              this,
              a2,
              v6);
      lua_pushboolean(a3, v20);
      break;
    case 9u:
    case 0xCu:
      (*(void (__fastcall **)(char **, __int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v10 + 392LL))(
        s,
        v10,
        this,
        a2,
        v6);
      lua_pushlstring(a3, s[0], (size_t)s[1]);
      if ( s[0] != &v23 )
        operator delete(s[0]);
      v14 = 1;
      break;
    case 0xAu:
    case 0xBu:
      v11 = (const google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v10 + 416LL))(
                                                 v10,
                                                 this,
                                                 a2,
                                                 v6);
      v12 = (const google::protobuf::Descriptor *)google::protobuf::FieldDescriptor::message_type(a2);
      LOBYTE(v13) = protolua::decodeMessage(v11, v12, a3);
      v14 = v13;
      if ( !(_BYTE)v13 )
        printf("fail, file:%s, func:%s, line:%u\n", "src/decoder.cpp", "decodeMultiple", 176LL);
      break;
    case 0xEu:
      v14 = 1;
      v21 = (*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v10 + 408LL))(
              v10,
              this,
              a2,
              v6);
      lua_pushinteger(a3, v21);
      break;
    default:
      v14 = 0;
      printf("decodeMultiple field unknow type, field=%s\n", a2->full_name_->_M_dataplus._M_p);
      break;
  }
  return v14;
};

// Line 187: range 000000000DBFE650-000000000DBFE717
bool __fastcall protolua::decodeMessage(
        const google::protobuf::Message *message,
        const google::protobuf::Descriptor *descriptor,
        lua_State_0 *L)
{
  int field_count; // ebx
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  const google::protobuf::FieldDescriptor *v7; // r15
  bool v8; // r12
  __int64 v10; // [rsp+8h] [rbp-40h]

  field_count = descriptor->field_count_;
  lua_createtable(L, 0, field_count);
  if ( field_count <= 0 )
    return 1;
  v5 = (unsigned int)(field_count - 1);
  v6 = 0LL;
  v10 = 152 * (v5 + 1);
  while ( 1 )
  {
    v7 = &descriptor->fields_[v6 / 0x98];
    v8 = protolua::decodeField(message, v7, L);
    if ( !v8 )
      break;
    v6 += 152LL;
    lua_setfield(L, -2, v7->name_->_M_dataplus._M_p);
    if ( v6 == v10 )
      return 1;
  }
  printf("fail, file:%s, func:%s, line:%u\n", "src/decoder.cpp", "decodeMessage", 193LL);
  return v8;
};

// Line 200: range 000000000DBFF0F0-000000000DBFF1DB
__int64 __fastcall protolua::protoDecode(protolua *this, char *a2, lua_State *a3, const char *a4)
{
  int v5; // ebx
  const google::protobuf::Descriptor *MessageTypeByName; // rax
  __int64 v7; // rcx
  const google::protobuf::Descriptor *v8; // rbp
  __int64 Prototype; // rax
  google::protobuf::Message *v10; // r13
  unsigned int v11; // r12d
  unsigned int v12; // eax

  v5 = (int)a4;
  MessageTypeByName = (const google::protobuf::Descriptor *)protolua::protoFindMessageTypeByName(this, a2);
  v7 = 202LL;
  if ( !MessageTypeByName )
    goto LABEL_10;
  v8 = MessageTypeByName;
  Prototype = google::protobuf::DynamicMessageFactory::GetPrototype(&protolua::g_factory, MessageTypeByName);
  if ( !Prototype )
  {
    v7 = 205LL;
LABEL_10:
    printf("fail, file:%s, func:%s, line:%u\n", "src/decoder.cpp", "protoDecode", v7);
    return 0LL;
  }
  v10 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Prototype + 24LL))(Prototype);
  v11 = google::protobuf::MessageLite::ParseFromArray(v10, a3, v5);
  if ( (_BYTE)v11 )
  {
    LOBYTE(v12) = protolua::decodeMessage(v10, v8, (lua_State_0 *)a2);
    v11 = v12;
  }
  else
  {
    printf("fail, file:%s, func:%s, line:%u\n", "src/decoder.cpp", "protoDecode", 208LL);
  }
  if ( v10 )
    (*((void (__fastcall **)(google::protobuf::Message *))v10->_vptr_MessageLite + 1))(v10);
  return v11;
};

// Line 215: range 000000000DBFF1E0-000000000DBFF34F
__int64 __fastcall protolua::protoUnpack(protolua *this, char *a2, lua_State *a3, const char *a4)
{
  int v5; // ebx
  const google::protobuf::Descriptor *MessageTypeByName; // rax
  __int64 v7; // rcx
  const google::protobuf::Descriptor *v8; // r14
  __int64 Prototype; // rax
  google::protobuf::Message *v10; // rbp
  unsigned int v11; // r12d
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer M_start; // rdi
  __int64 v13; // rbx
  unsigned int v14; // eax
  std::vector<const google::protobuf::FieldDescriptor*> v16; // [rsp+0h] [rbp-48h] BYREF

  v5 = (int)a4;
  MessageTypeByName = (const google::protobuf::Descriptor *)protolua::protoFindMessageTypeByName(this, a2);
  v7 = 217LL;
  if ( !MessageTypeByName )
    goto LABEL_16;
  v8 = MessageTypeByName;
  Prototype = google::protobuf::DynamicMessageFactory::GetPrototype(&protolua::g_factory, MessageTypeByName);
  if ( !Prototype )
  {
    v7 = 220LL;
LABEL_16:
    printf("fail, file:%s, func:%s, line:%u\n", "src/decoder.cpp", "protoUnpack", v7);
    return 0LL;
  }
  v10 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Prototype + 24LL))(Prototype);
  v11 = google::protobuf::MessageLite::ParseFromArray(v10, a3, v5);
  if ( (_BYTE)v11 )
  {
    protolua::sortFieldsByNumber(&v16, v8);
    M_start = v16._M_impl._M_start;
    if ( (int)(v16._M_impl._M_finish - v16._M_impl._M_start) > 0 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        LOBYTE(v14) = protolua::decodeField(v10, M_start[v13], (lua_State_0 *)a2);
        v11 = v14;
        if ( !(_BYTE)v14 )
          break;
        M_start = v16._M_impl._M_start;
        if ( (int)(v16._M_impl._M_finish - v16._M_impl._M_start) <= (int)++v13 )
          goto LABEL_9;
      }
      printf("fail, file:%s, func:%s, line:%u\n", "src/decoder.cpp", "protoUnpack", 229LL);
      M_start = v16._M_impl._M_start;
    }
LABEL_9:
    if ( M_start )
      operator delete(M_start);
  }
  else
  {
    printf("fail, file:%s, func:%s, line:%u\n", "src/decoder.cpp", "protoUnpack", 223LL);
  }
  if ( v10 )
    (*((void (__fastcall **)(google::protobuf::Message *))v10->_vptr_MessageLite + 1))(v10);
  return v11;
};

// Line 233: range 0000000000438920-0000000000438949
void __cdecl GLOBAL__sub_I_decoder_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
