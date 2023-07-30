// File: /home/qiang.li/hk4e/ext/protolua/src/encoder.cpp

// Line 20: range 000000000DBFF760-000000000DBFF81F
bool __fastcall protolua::encodeField(
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        lua_State_0 *L,
        int index)
{
  google::protobuf::FieldDescriptor::Label label; // eax

  if ( (unsigned __int8)google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)field) )
    return protolua::encodeTable(message, field, L, index);
  label = field->label_;
  switch ( label )
  {
    case LABEL_REQUIRED:
      return protolua::encodeRequired(message, field, L, index);
    case LABEL_OPTIONAL:
      return protolua::encodeOptional(message, field, L, index);
    case LABEL_REPEATED:
      return protolua::encodeRepeated(message, field, L, index);
  }
  return 0;
};

// Line 34: range 000000000DBFFDE0-000000000DBFFE4D
bool __fastcall protolua::encodeRequired(
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        lua_State_0 *L,
        int index)
{
  int v6; // r8d

  if ( lua_type(L, index) )
    return protolua::encodeSingle(
             (protolua *)message,
             (google::protobuf::Message *)field,
             (const google::protobuf::FieldDescriptor *)L,
             (lua_State *)(unsigned int)index,
             v6);
  printf("encodeRequired field nil, field=%s\n", field->full_name_->_M_dataplus._M_p);
  return 1;
};

// Line 45: range 000000000DBFFE50-000000000DBFFEA7
bool __fastcall protolua::encodeOptional(
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        lua_State_0 *L,
        int index)
{
  int v6; // r8d

  if ( lua_type(L, index) )
    return protolua::encodeSingle(
             (protolua *)message,
             (google::protobuf::Message *)field,
             (const google::protobuf::FieldDescriptor *)L,
             (lua_State *)(unsigned int)index,
             v6);
  else
    return 1;
};

// Line 55: range 000000000DBFF620-000000000DBFF756
bool __fastcall protolua::encodeRepeated(
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        lua_State_0 *L,
        int index)
{
  int v6; // eax
  lua_Integer v7; // r15
  unsigned int v8; // eax
  int v9; // r8d
  char v10; // r12
  __int64 v12; // [rsp+8h] [rbp-40h]

  if ( lua_type(L, index) )
  {
    if ( lua_type(L, index) == 5 )
    {
      v6 = luaL_len(L, index);
      if ( v6 <= 0 )
      {
        return 1;
      }
      else
      {
        v7 = 1LL;
        v12 = (unsigned int)(v6 - 1) + 2LL;
        while ( 1 )
        {
          lua_geti(L, index, v7);
          v8 = lua_absindex(L, -1);
          v10 = protolua::encodeMultiple(
                  (protolua *)message,
                  (google::protobuf::Message *)field,
                  (const google::protobuf::FieldDescriptor *)L,
                  (lua_State *)v8,
                  v9);
          if ( !v10 )
            break;
          ++v7;
          lua_settop(L, -2);
          if ( v7 == v12 )
            return 1;
        }
        printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "encodeRepeated", 72LL);
      }
    }
    else
    {
      v10 = 0;
      printf("encodeRepeated field isn't a table, field=%s\n", field->full_name_->_M_dataplus._M_p);
    }
  }
  else
  {
    v10 = 1;
    printf("encodeRepeated field nil, field=%s\n", field->full_name_->_M_dataplus._M_p);
  }
  return v10;
};

// Line 79: range 000000000DBFF830-000000000DBFFA08
bool __fastcall protolua::encodeTable(
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        lua_State_0 *L,
        int index)
{
  const google::protobuf::Message::Reflection *(__fastcall *v6)(const google::protobuf::Message *const); // rdx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  google::protobuf::Message *v12; // rbp
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  google::protobuf::FieldDescriptor *v16; // [rsp+0h] [rbp-48h]

  if ( lua_type(L, index) )
  {
    if ( lua_type(L, index) == 5 )
    {
      v6 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)message->_vptr_MessageLite + 23);
      if ( v6 == google::protobuf::Message::GetReflection )
      {
        (*((void (__fastcall **)(google::protobuf::Message *))message->_vptr_MessageLite + 24))(message);
        v8 = v7;
      }
      else
      {
        v8 = (__int64)v6(message);
      }
      v9 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)field);
      if ( *(_DWORD *)(v9 + 104) == 2 )
      {
        v16 = *(google::protobuf::FieldDescriptor **)(v9 + 40);
        lua_pushnil(L);
        while ( 1 )
        {
          if ( !lua_next(L, index) )
            return 1;
          v12 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v8 + 600LL))(
                                               v8,
                                               message,
                                               field,
                                               0LL);
          v13 = lua_absindex(L, -2);
          if ( !protolua::encodeField(v12, v16, L, v13) )
          {
            v15 = 102LL;
            goto LABEL_18;
          }
          v14 = lua_absindex(L, -1);
          if ( !protolua::encodeField(v12, v16 + 1, L, v14) )
            break;
          lua_settop(L, -2);
        }
        v15 = 103LL;
LABEL_18:
        printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "encodeTable", v15);
        return 0;
      }
      else
      {
        printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "encodeTable", 94LL);
        return 0;
      }
    }
    else
    {
      printf("encodeTable field isn't a table, field=%s\n", field->full_name_->_M_dataplus._M_p);
      return 0;
    }
  }
  else
  {
    printf("encodeTable field nil, field=%s\n", field->full_name_->_M_dataplus._M_p);
    return 1;
  }
};

// Line 110: range 000000000DBFFB20-000000000DBFFDD1
__int64 __fastcall protolua::encodeSingle(
        protolua *this,
        google::protobuf::FieldDescriptor *a2,
        lua_State_0 *a3,
        lua_State *a4)
{
  int v4; // r14d
  __int64 (*v7)(void); // rdx
  __int64 v8; // rdx
  __int64 v9; // r15
  google::protobuf::Message *v10; // rbp
  const google::protobuf::Descriptor *v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // r12d
  void (__fastcall *v15)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer); // rbx
  lua_Integer v16; // rax
  void (__fastcall *v17)(__int64, protolua *, google::protobuf::FieldDescriptor *, double); // rbx
  lua_Number v18; // xmm0_8
  void (__fastcall *v19)(__int64, protolua *, google::protobuf::FieldDescriptor *, float); // rbx
  float v20; // xmm0_4
  void (__fastcall *v21)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer); // rbx
  lua_Integer v22; // rcx
  const char *v23; // rsi
  __int64 v24; // rax
  void (__fastcall *v25)(__int64, protolua *, google::protobuf::FieldDescriptor *, std::string *); // rbx
  std::forward_iterator_tag v26; // cl
  size_t len; // [rsp+8h] [rbp-60h] BYREF
  std::string v28; // [rsp+10h] [rbp-58h] BYREF

  v4 = (int)a4;
  v7 = *(__int64 (**)(void))(*(_QWORD *)this + 184LL);
  if ( (char *)v7 == (char *)google::protobuf::Message::GetReflection )
  {
    (*(void (**)(void))(*(_QWORD *)this + 192LL))();
    v9 = v8;
  }
  else
  {
    v9 = v7();
  }
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type(a2) )
  {
    case 1u:
      v17 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, double))(*(_QWORD *)v9 + 272LL);
      v18 = lua_tonumberx(a3, v4, 0LL);
      v17(v9, this, a2, v18);
      return 1;
    case 2u:
      v19 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, float))(*(_QWORD *)v9 + 264LL);
      v20 = lua_tonumberx(a3, v4, 0LL);
      v19(v9, this, a2, v20);
      return 1;
    case 3u:
    case 0x10u:
    case 0x12u:
      v15 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 240LL);
      goto LABEL_9;
    case 4u:
    case 6u:
      v15 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 256LL);
      goto LABEL_9;
    case 5u:
    case 0xFu:
    case 0x11u:
      v15 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 232LL);
      goto LABEL_9;
    case 7u:
    case 0xDu:
      v15 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 248LL);
LABEL_9:
      v16 = lua_tointegerx(a3, v4, 0LL);
      v15(v9, this, a2, v16);
      goto LABEL_10;
    case 8u:
      v21 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 280LL);
      v22 = lua_toboolean(a3, v4) != 0;
      goto LABEL_18;
    case 9u:
    case 0xCu:
      len = 0LL;
      v23 = lua_tolstring(a3, v4, &len);
      v24 = *(_QWORD *)v9;
      v28._M_dataplus._M_p = v28._anon_0._M_local_buf;
      v25 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, std::string *))(v24 + 288);
      std::string::_M_construct<char const*>(&v28, v23, &v23[len], v26);
      v25(v9, this, a2, &v28);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28._M_dataplus._M_p != &v28._anon_0 )
        operator delete(v28._M_dataplus._M_p);
      goto LABEL_10;
    case 0xAu:
    case 0xBu:
      v10 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v9 + 312LL))(
                                           v9,
                                           this,
                                           a2,
                                           0LL);
      v11 = (const google::protobuf::Descriptor *)google::protobuf::FieldDescriptor::message_type(a2);
      LOBYTE(v12) = protolua::encodeMessage(v10, v11, a3, v4);
      v13 = v12;
      if ( !(_BYTE)v12 )
        printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "encodeSingle", 148LL);
      return v13;
    case 0xEu:
      v21 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 304LL);
      v22 = lua_tointegerx(a3, v4, 0LL);
LABEL_18:
      v21(v9, this, a2, v22);
LABEL_10:
      v13 = 1;
      break;
    default:
      v13 = 0;
      printf("encodeSingle field unknow type, field=%s\n", a2->full_name_->_M_dataplus._M_p);
      break;
  }
  return v13;
};

// Line 159: range 000000000DBFF360-000000000DBFF611
__int64 __fastcall protolua::encodeMultiple(
        protolua *this,
        google::protobuf::FieldDescriptor *a2,
        lua_State_0 *a3,
        lua_State *a4)
{
  int v4; // r14d
  __int64 (*v7)(void); // rdx
  __int64 v8; // rdx
  __int64 v9; // r15
  google::protobuf::Message *v10; // rbp
  const google::protobuf::Descriptor *v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // r12d
  void (__fastcall *v15)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer); // rbx
  lua_Integer v16; // rax
  void (__fastcall *v17)(__int64, protolua *, google::protobuf::FieldDescriptor *, double); // rbx
  lua_Number v18; // xmm0_8
  void (__fastcall *v19)(__int64, protolua *, google::protobuf::FieldDescriptor *, float); // rbx
  float v20; // xmm0_4
  void (__fastcall *v21)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer); // rbx
  lua_Integer v22; // rcx
  const char *v23; // rsi
  __int64 v24; // rax
  void (__fastcall *v25)(__int64, protolua *, google::protobuf::FieldDescriptor *, std::string *); // rbx
  std::forward_iterator_tag v26; // cl
  size_t len; // [rsp+8h] [rbp-60h] BYREF
  std::string v28; // [rsp+10h] [rbp-58h] BYREF

  v4 = (int)a4;
  v7 = *(__int64 (**)(void))(*(_QWORD *)this + 184LL);
  if ( (char *)v7 == (char *)google::protobuf::Message::GetReflection )
  {
    (*(void (**)(void))(*(_QWORD *)this + 192LL))();
    v9 = v8;
  }
  else
  {
    v9 = v7();
  }
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type(a2) )
  {
    case 1u:
      v17 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, double))(*(_QWORD *)v9 + 560LL);
      v18 = lua_tonumberx(a3, v4, 0LL);
      v17(v9, this, a2, v18);
      return 1;
    case 2u:
      v19 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, float))(*(_QWORD *)v9 + 552LL);
      v20 = lua_tonumberx(a3, v4, 0LL);
      v19(v9, this, a2, v20);
      return 1;
    case 3u:
    case 0x10u:
    case 0x12u:
      v15 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 528LL);
      goto LABEL_9;
    case 4u:
    case 6u:
      v15 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 544LL);
      goto LABEL_9;
    case 5u:
    case 0xFu:
    case 0x11u:
      v15 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 520LL);
      goto LABEL_9;
    case 7u:
    case 0xDu:
      v15 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 536LL);
LABEL_9:
      v16 = lua_tointegerx(a3, v4, 0LL);
      v15(v9, this, a2, v16);
      goto LABEL_10;
    case 8u:
      v21 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 568LL);
      v22 = lua_toboolean(a3, v4) != 0;
      goto LABEL_18;
    case 9u:
    case 0xCu:
      len = 0LL;
      v23 = lua_tolstring(a3, v4, &len);
      v24 = *(_QWORD *)v9;
      v28._M_dataplus._M_p = v28._anon_0._M_local_buf;
      v25 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, std::string *))(v24 + 576);
      std::string::_M_construct<char const*>(&v28, v23, &v23[len], v26);
      v25(v9, this, a2, &v28);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28._M_dataplus._M_p != &v28._anon_0 )
        operator delete(v28._M_dataplus._M_p);
      goto LABEL_10;
    case 0xAu:
    case 0xBu:
      v10 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v9 + 600LL))(
                                           v9,
                                           this,
                                           a2,
                                           0LL);
      v11 = (const google::protobuf::Descriptor *)google::protobuf::FieldDescriptor::message_type(a2);
      LOBYTE(v12) = protolua::encodeMessage(v10, v11, a3, v4);
      v13 = v12;
      if ( !(_BYTE)v12 )
        printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "encodeMultiple", 197LL);
      return v13;
    case 0xEu:
      v21 = *(void (__fastcall **)(__int64, protolua *, google::protobuf::FieldDescriptor *, lua_Integer))(*(_QWORD *)v9 + 592LL);
      v22 = lua_tointegerx(a3, v4, 0LL);
LABEL_18:
      v21(v9, this, a2, v22);
LABEL_10:
      v13 = 1;
      break;
    default:
      v13 = 0;
      printf("encodeMultiple field unknow type, field=%s\n", a2->full_name_->_M_dataplus._M_p);
      break;
  }
  return v13;
};

// Line 208: range 000000000DBFFA10-000000000DBFFB18
bool __fastcall protolua::encodeMessage(
        google::protobuf::Message *message,
        const google::protobuf::Descriptor *descriptor,
        lua_State_0 *L,
        int index)
{
  __int64 v6; // rbp
  int v7; // r12d
  google::protobuf::FieldDescriptor *v8; // r15
  int v9; // eax

  if ( lua_type(L, index) == 5 )
  {
    if ( descriptor->field_count_ <= 0 )
    {
      return 1;
    }
    else
    {
      v6 = 0LL;
      v7 = 0;
      while ( 1 )
      {
        v8 = &descriptor->fields_[v6];
        lua_getfield(L, index, v8->name_->_M_dataplus._M_p);
        v9 = lua_absindex(L, -1);
        if ( !protolua::encodeField(message, v8, L, v9) )
          break;
        ++v7;
        ++v6;
        lua_settop(L, -2);
        if ( descriptor->field_count_ <= v7 )
          return 1;
      }
      printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "encodeMessage", 219LL);
      return 0;
    }
  }
  else
  {
    printf("encodeMessage field isn't a table, field=%s\n", descriptor->full_name_->_M_dataplus._M_p);
    return 0;
  }
};

// Line 226: range 000000000DBFFEB0-000000000DC00086
__int64 __fastcall protolua::protoEncode(
        protolua *this,
        char *a2,
        lua_State *a3,
        void *a4,
        char *a5,
        unsigned __int64 *a6)
{
  int v6; // r15d
  const google::protobuf::Descriptor *MessageTypeByName; // rax
  __int64 v10; // rcx
  const google::protobuf::Descriptor *v11; // rbp
  __int64 Prototype; // r12
  int v13; // r15d
  google::protobuf::Message *v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int v18; // eax
  std::string s[2]; // [rsp+0h] [rbp-58h] BYREF

  v6 = (int)a3;
  MessageTypeByName = (const google::protobuf::Descriptor *)protolua::protoFindMessageTypeByName(this, a2);
  v10 = 228LL;
  if ( !MessageTypeByName )
    goto LABEL_17;
  v11 = MessageTypeByName;
  Prototype = google::protobuf::DynamicMessageFactory::GetPrototype(&protolua::g_factory, MessageTypeByName);
  if ( !Prototype )
  {
    v10 = 231LL;
LABEL_17:
    v16 = 0;
    printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "protoEncode", v10);
    return v16;
  }
  v13 = lua_absindex((lua_State_0 *)a2, v6);
  v14 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Prototype + 24LL))(Prototype);
  if ( !protolua::encodeMessage(v14, v11, (lua_State_0 *)a2, v13) )
  {
    printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "protoEncode", 235LL);
LABEL_20:
    v16 = 0;
    goto LABEL_14;
  }
  if ( !a4 || !a5 )
  {
    s[0]._anon_0._M_local_buf[0] = 0;
    s[0]._M_dataplus._M_p = s[0]._anon_0._M_local_buf;
    s[0]._M_string_length = 0LL;
    LOBYTE(v18) = google::protobuf::MessageLite::SerializeToString(v14, s);
    v16 = v18;
    if ( (_BYTE)v18 )
      lua_pushlstring((lua_State_0 *)a2, s[0]._M_dataplus._M_p, s[0]._M_string_length);
    else
      printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "protoEncode", 245LL);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s[0]._M_dataplus._M_p != &s[0]._anon_0 )
      operator delete(s[0]._M_dataplus._M_p);
LABEL_14:
    if ( !v14 )
      return v16;
    goto LABEL_8;
  }
  LOBYTE(v15) = google::protobuf::MessageLite::SerializeToArray(v14, a4, *(_DWORD *)a5);
  v16 = v15;
  if ( !(_BYTE)v15 )
  {
    printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "protoEncode", 239LL);
    goto LABEL_20;
  }
  *(_QWORD *)a5 = (*((__int64 (__fastcall **)(google::protobuf::Message *))v14->_vptr_MessageLite + 12))(v14);
LABEL_8:
  (*((void (__fastcall **)(google::protobuf::Message *))v14->_vptr_MessageLite + 1))(v14);
  return v16;
};

// Line 254: range 000000000DC00090-000000000DC002D6
__int64 __fastcall protolua::protoPack(protolua *this, char *a2, lua_State *a3, int a4, void *a5, char *a6)
{
  int v7; // r14d
  const google::protobuf::Descriptor *MessageTypeByName; // rax
  __int64 v10; // rcx
  const google::protobuf::Descriptor *v11; // rbp
  __int64 Prototype; // rax
  int v13; // ebx
  int v14; // r14d
  google::protobuf::Message *v15; // r13
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer M_start; // rdx
  __int64 v17; // rbp
  __int64 v18; // rcx
  unsigned int v19; // r14d
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer v20; // rdi
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v27; // [rsp+8h] [rbp-80h]
  std::vector<const google::protobuf::FieldDescriptor*> v28; // [rsp+10h] [rbp-78h] BYREF
  std::string output; // [rsp+30h] [rbp-58h] BYREF

  v7 = (int)a3;
  MessageTypeByName = (const google::protobuf::Descriptor *)protolua::protoFindMessageTypeByName(this, a2);
  v10 = 256LL;
  if ( !MessageTypeByName )
    goto LABEL_22;
  v11 = MessageTypeByName;
  Prototype = google::protobuf::DynamicMessageFactory::GetPrototype(&protolua::g_factory, MessageTypeByName);
  if ( !Prototype )
  {
    v10 = 259LL;
LABEL_22:
    v19 = 0;
    printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "protoPack", v10);
    return v19;
  }
  v27 = Prototype;
  v13 = lua_absindex((lua_State_0 *)a2, v7);
  v14 = lua_absindex((lua_State_0 *)a2, a4);
  v15 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 24LL))(v27);
  protolua::sortFieldsByNumber(&v28, v11);
  M_start = v28._M_impl._M_start;
  if ( (int)(v28._M_impl._M_finish - v28._M_impl._M_start) > 0 )
  {
    v17 = 0LL;
    if ( v13 <= v14 )
    {
      while ( protolua::encodeField(v15, M_start[v17], (lua_State_0 *)a2, v13) )
      {
        M_start = v28._M_impl._M_start;
        if ( (int)v17 + 1 < (int)(v28._M_impl._M_finish - v28._M_impl._M_start) )
        {
          ++v13;
          ++v17;
          if ( v14 >= v13 )
            continue;
        }
        goto LABEL_16;
      }
      v18 = 268LL;
      goto LABEL_10;
    }
  }
LABEL_16:
  if ( !a5 || !a6 )
  {
    output._M_string_length = 0LL;
    output._M_dataplus._M_p = output._anon_0._M_local_buf;
    output._anon_0._M_local_buf[0] = 0;
    LOBYTE(v25) = google::protobuf::MessageLite::SerializeToString(v15, &output);
    v19 = v25;
    if ( (_BYTE)v25 )
      lua_pushlstring((lua_State_0 *)a2, output._M_dataplus._M_p, output._M_string_length);
    else
      printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "protoPack", 279LL);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)output._M_dataplus._M_p != &output._anon_0 )
      operator delete(output._M_dataplus._M_p);
LABEL_11:
    v20 = v28._M_impl._M_start;
    if ( !v28._M_impl._M_start )
      goto LABEL_13;
    goto LABEL_12;
  }
  LOBYTE(v22) = google::protobuf::MessageLite::SerializeToArray(v15, a5, *(_DWORD *)a6);
  v19 = v22;
  v18 = 273LL;
  if ( !(_BYTE)v22 )
  {
LABEL_10:
    printf("fail, file:%s, func:%s, line:%u\n", "src/encoder.cpp", "protoPack", v18);
    v19 = 0;
    goto LABEL_11;
  }
  v24 = (*((__int64 (__fastcall **)(google::protobuf::Message *, void *, __int64, __int64))v15->_vptr_MessageLite + 12))(
          v15,
          a5,
          v23,
          273LL);
  v20 = v28._M_impl._M_start;
  *(_QWORD *)a6 = v24;
  if ( !v20 )
    goto LABEL_14;
LABEL_12:
  operator delete(v20);
LABEL_13:
  if ( v15 )
LABEL_14:
    (*((void (__fastcall **)(google::protobuf::Message *))v15->_vptr_MessageLite + 1))(v15);
  return v19;
};

// Line 284: range 0000000000438950-0000000000438979
void __cdecl GLOBAL__sub_I_encoder_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
