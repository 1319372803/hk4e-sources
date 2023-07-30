// File: /home/qiang.li/hk4e/ext/protolua/src/protolua.cpp

// Line 11: range 000000000DBFDB10-000000000DBFDBB8
int __fastcall protolua::parse(lua_State_0 *L)
{
  char *v1; // r12
  lua_State *v2; // rdx

  if ( lua_gettop(L) != 1 )
    __assert_fail("lua_gettop(L) == 1", "src/protolua.cpp", 0xCu, "int protolua::parse(lua_State*)");
  luaL_checktype(L, 1, 4);
  v1 = (char *)lua_tolstring(L, 1, 0LL);
  if ( (unsigned __int8)protolua::protoParse((protolua *)v1, L, v2) )
  {
    lua_pushboolean(L, 1);
  }
  else
  {
    printf("proto.parse fail, file=%s\n", v1);
    lua_pushboolean(L, 0);
  }
  return 1;
};

// Line 28: range 000000000DBFD9B0-000000000DBFDA43
int __fastcall protolua::create(lua_State_0 *L)
{
  protolua *v1; // r12

  if ( lua_gettop(L) != 1 )
    __assert_fail("lua_gettop(L) == 1", "src/protolua.cpp", 0x1Du, "int protolua::create(lua_State*)");
  luaL_checktype(L, 1, 4);
  v1 = (protolua *)lua_tolstring(L, 1, 0LL);
  if ( (unsigned __int8)protolua::protoDecode(v1, (char *)L, 0LL, 0LL) )
    return lua_gettop(L) - 1;
  printf("proto.create fail, proto=%s\n", (const char *)v1);
  return 0;
};

// Line 42: range 000000000DBFDE10-000000000DBFDEA0
int __fastcall protolua::belong(lua_State_0 *L)
{
  protolua *v1; // rax
  __int64 MessageTypeByName; // rax

  if ( lua_gettop(L) != 1 )
    __assert_fail("lua_gettop(L) == 1", "src/protolua.cpp", 0x2Bu, "int protolua::belong(lua_State*)");
  luaL_checktype(L, 1, 4);
  v1 = (protolua *)lua_tolstring(L, 1, 0LL);
  MessageTypeByName = protolua::protoFindMessageTypeByName(v1, (const char *)1);
  if ( !MessageTypeByName )
    return 0;
  lua_pushstring(L, ***(const char ****)(MessageTypeByName + 16));
  return 1;
};

// Line 59: range 000000000DBFDA50-000000000DBFDB03
int __fastcall protolua::encode(lua_State_0 *L)
{
  protolua *v1; // r12
  unsigned __int64 *v2; // r9

  if ( lua_gettop(L) != 2 )
    __assert_fail("lua_gettop(L) == 2", "src/protolua.cpp", 0x3Cu, "int protolua::encode(lua_State*)");
  luaL_checktype(L, 1, 4);
  luaL_checktype(L, 2, 5);
  v1 = (protolua *)lua_tolstring(L, 1, 0LL);
  if ( (unsigned __int8)protolua::protoEncode(v1, (char *)L, (lua_State *)2, 0LL, 0LL, v2) )
    return lua_gettop(L) - 2;
  printf("proto.encode fail, proto=%s\n", (const char *)v1);
  return 0;
};

// Line 75: range 000000000DBFD770-000000000DBFD83B
int __fastcall protolua::decode(lua_State_0 *L)
{
  protolua *v1; // r12
  lua_State *v2; // rax
  size_t size[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( lua_gettop(L) != 2 )
    __assert_fail("lua_gettop(L) == 2", "src/protolua.cpp", 0x4Cu, "int protolua::decode(lua_State*)");
  size[0] = 0LL;
  luaL_checktype(L, 1, 4);
  v1 = (protolua *)lua_tolstring(L, 1, 0LL);
  luaL_checktype(L, 2, 4);
  v2 = (lua_State *)lua_tolstring(L, 2, size);
  if ( (unsigned __int8)protolua::protoDecode(v1, (char *)L, v2, (const char *)size[0]) )
    return lua_gettop(L) - 2;
  printf("proto.decode fail, proto=%s\n", (const char *)v1);
  return 0;
};

// Line 93: range 000000000DBFD900-000000000DBFD9A0
int __fastcall protolua::pack(lua_State_0 *L)
{
  int v1; // ebx
  protolua *v2; // r12

  if ( lua_gettop(L) <= 0 )
    __assert_fail("lua_gettop(L) >= 1", "src/protolua.cpp", 0x5Eu, "int protolua::pack(lua_State*)");
  v1 = lua_gettop(L);
  luaL_checktype(L, 1, 4);
  v2 = (protolua *)lua_tolstring(L, 1, 0LL);
  if ( (unsigned __int8)protolua::protoPack(v2, (char *)L, (lua_State *)2, v1, 0LL, 0LL) )
    return lua_gettop(L) - v1;
  printf("proto.pack fail, proto=%s\n", (const char *)v2);
  return 0;
};

// Line 109: range 000000000DBFD840-000000000DBFD8FB
int __fastcall protolua::unpack(lua_State_0 *L)
{
  protolua *v1; // r12
  lua_State *v2; // rax
  size_t size[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( lua_gettop(L) != 2 )
    __assert_fail("lua_gettop(L) == 2", "src/protolua.cpp", 0x6Eu, "int protolua::unpack(lua_State*)");
  size[0] = 0LL;
  luaL_checktype(L, 1, 4);
  v1 = (protolua *)lua_tolstring(L, 1, 0LL);
  v2 = (lua_State *)lua_tolstring(L, 2, size);
  if ( (unsigned __int8)protolua::protoUnpack(v1, (char *)L, v2, (const char *)size[0]) )
    return lua_gettop(L) - 2;
  printf("proto.unpack fail, proto=%s\n", (const char *)v1);
  return 0;
};

// Line 155: range 000000000DBFE2A0-000000000DBFE2AE
void __fastcall protolua::ProtoErrorCollector::~ProtoErrorCollector(protolua::ProtoErrorCollector *const this)
{
  this->_vptr_MultiFileErrorCollector = (int (**)(...))(&`vtable for'protolua::ProtoErrorCollector + 2);
  google::protobuf::compiler::MultiFileErrorCollector::~MultiFileErrorCollector(this);
};

// Line 155: range 000000000DBFE2C0-000000000DBFE2E0
void __fastcall protolua::ProtoErrorCollector::~ProtoErrorCollector(protolua::ProtoErrorCollector *const this)
{
  this->_vptr_MultiFileErrorCollector = (int (**)(...))(&`vtable for'protolua::ProtoErrorCollector + 2);
  google::protobuf::compiler::MultiFileErrorCollector::~MultiFileErrorCollector(this);
  operator delete(this, 8uLL);
};

// Line 159: range 000000000DBFE280-000000000DBFE28F
void __fastcall protolua::ProtoErrorCollector::AddError(
        protolua::ProtoErrorCollector *const this,
        const std::string *filename,
        int line,
        int column,
        const std::string *message)
{
  printf("[file]%s line %d, column %d : %s\n", filename->_M_dataplus._M_p, line, column, message->_M_dataplus._M_p);
};

// Line 164: range 000000000DBFE260-000000000DBFE26F
void __fastcall protolua::ProtoErrorCollector::AddWarning(
        protolua::ProtoErrorCollector *const this,
        const std::string *filename,
        int line,
        int column,
        const std::string *message)
{
  printf("[file]%s line %d, column %d : %s\n", filename->_M_dataplus._M_p, line, column, message->_M_dataplus._M_p);
};

// Line 174: range 000000000DBFDBC0-000000000DBFDC36
int __fastcall protolua::initLib(lua_State_0 *L, const std::map<std::string,std::string> *path_map)
{
  std::forward_iterator_tag v2; // cl
  const std::_Rb_tree_node_base *i; // rbp

  lua_createtable(L, 0, 0);
  luaL_setfuncs(L, protolua::protoLib, 0);
  lua_setglobal(L, "proto");
  for ( i = path_map->_M_t._M_impl._M_header._M_left;
        &path_map->_M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)i;
        i = (const std::_Rb_tree_node_base *)std::_Rb_tree_increment(i) )
  {
    google::protobuf::compiler::DiskSourceTree::MapPath(
      (__int64)&protolua::g_sourceTree,
      (__int64)&i[1],
      (__int64)&i[2],
      v2);
  }
  return 0;
};

// Line 186: range 000000000DBFDC40-000000000DBFDE09
const google::protobuf::Descriptor *__fastcall protolua::protoFindMessageTypeByName(protolua *this, const char *a2)
{
  size_t v3; // rax
  std::string::size_type v4; // rbx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  const google::protobuf::Descriptor *MessageTypeByName; // rax
  google::protobuf::DescriptorPool *M_p; // rdi
  const google::protobuf::Descriptor *v8; // r12
  char *v10; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v11; // rdi
  __int64 v12; // rax
  const google::protobuf::DescriptorPool *v13; // r12
  size_t v14; // rax
  std::string::size_type v15; // rbx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v16; // rax
  char *v17; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v18; // rdi
  std::string v19[2]; // [rsp+0h] [rbp-48h] BYREF

  v19[0]._M_dataplus._M_p = v19[0]._anon_0._M_local_buf;
  if ( !this )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v3 = strlen((const char *)this);
  v4 = v3;
  if ( v3 > 0xF )
  {
    if ( v3 > 0x3FFFFFFFFFFFFFFFLL )
      goto LABEL_25;
    v10 = (char *)operator new(v3 + 1);
    v19[0]._anon_0._M_allocated_capacity = v4;
    v19[0]._M_dataplus._M_p = v10;
    v11 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10;
  }
  else
  {
    if ( v3 == 1 )
    {
      v19[0]._anon_0._M_local_buf[0] = *(_BYTE *)this;
      p_anon_0 = &v19[0]._anon_0;
      goto LABEL_5;
    }
    if ( !v3 )
    {
      p_anon_0 = &v19[0]._anon_0;
      goto LABEL_5;
    }
    v11 = &v19[0]._anon_0;
  }
  memcpy(v11, this, v4);
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19[0]._M_dataplus._M_p;
LABEL_5:
  v19[0]._M_string_length = v4;
  p_anon_0->_M_local_buf[v4] = 0;
  MessageTypeByName = google::protobuf::DescriptorPool::FindMessageTypeByName(&protolua::g_importer.pool_, v19);
  M_p = (google::protobuf::DescriptorPool *)v19[0]._M_dataplus._M_p;
  v8 = MessageTypeByName;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19[0]._M_dataplus._M_p != &v19[0]._anon_0 )
    operator delete(v19[0]._M_dataplus._M_p);
  if ( v8 )
    return v8;
  v12 = google::protobuf::DescriptorPool::generated_pool(M_p);
  v19[0]._M_dataplus._M_p = v19[0]._anon_0._M_local_buf;
  v13 = (const google::protobuf::DescriptorPool *)v12;
  v14 = strlen((const char *)this);
  v15 = v14;
  if ( v14 > 0xF )
  {
    if ( v14 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      v17 = (char *)operator new(v14 + 1);
      v19[0]._anon_0._M_allocated_capacity = v15;
      v19[0]._M_dataplus._M_p = v17;
      v18 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17;
LABEL_22:
      memcpy(v18, this, v15);
      v16 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19[0]._M_dataplus._M_p;
      goto LABEL_18;
    }
LABEL_25:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v14 == 1 )
  {
    v19[0]._anon_0._M_local_buf[0] = *(_BYTE *)this;
    v16 = &v19[0]._anon_0;
    goto LABEL_18;
  }
  if ( v14 )
  {
    v18 = &v19[0]._anon_0;
    goto LABEL_22;
  }
  v16 = &v19[0]._anon_0;
LABEL_18:
  v19[0]._M_string_length = v15;
  v16->_M_local_buf[v15] = 0;
  v8 = google::protobuf::DescriptorPool::FindMessageTypeByName(v13, v19);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19[0]._M_dataplus._M_p == &v19[0]._anon_0 )
    return v8;
  operator delete(v19[0]._M_dataplus._M_p);
  return v8;
};

// Line 195: range 0000000000438840-0000000000438910
void __cdecl GLOBAL__sub_I_protolua_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  protolua::g_errorCollector._vptr_MultiFileErrorCollector = (int (**)(...))(&`vtable for'protolua::ProtoErrorCollector
                                                                           + 2);
  __cxa_atexit(
    (void (__fastcall *)(void *))protolua::ProtoErrorCollector::~ProtoErrorCollector,
    &protolua::g_errorCollector,
    &_dso_handle);
  google::protobuf::compiler::DiskSourceTree::DiskSourceTree(&protolua::g_sourceTree);
  __cxa_atexit(
    (void (__fastcall *)(void *))google::protobuf::compiler::DiskSourceTree::~DiskSourceTree,
    &protolua::g_sourceTree,
    &_dso_handle);
  google::protobuf::compiler::Importer::Importer(
    &protolua::g_importer,
    (std::_Rb_tree_node_base *)&protolua::g_sourceTree,
    &protolua::g_errorCollector);
  __cxa_atexit(
    (void (__fastcall *)(void *))google::protobuf::compiler::Importer::~Importer,
    &protolua::g_importer,
    &_dso_handle);
  google::protobuf::DynamicMessageFactory::DynamicMessageFactory(&protolua::g_factory);
  __cxa_atexit(
    (void (__fastcall *)(void *))google::protobuf::DynamicMessageFactory::~DynamicMessageFactory,
    &protolua::g_factory,
    &_dso_handle);
};
