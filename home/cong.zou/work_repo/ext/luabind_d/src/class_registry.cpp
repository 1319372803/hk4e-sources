// File: /home/cong.zou/work_repo/ext/luabind_d/src/class_registry.cpp

// Line 46: range 000000001530A250-000000001530A343
int __fastcall luabind::detail::`anonymous namespace'::create_cpp_class_metatable(lua_State_0 *L)
{
  lua_createtable(L, 0, 0);
  lua_pushstring(L, "__luabind_classrep");
  lua_pushboolean(L, 1);
  lua_rawset(L, -3);
  lua_pushstring(L, "__gc");
  lua_pushcclosure(L, luabind::detail::garbage_collector<luabind::detail::class_rep>, 0);
  lua_rawset(L, -3);
  lua_pushstring(L, "__call");
  lua_pushcclosure(L, luabind::detail::class_rep::constructor_dispatcher, 0);
  lua_rawset(L, -3);
  lua_pushstring(L, "__index");
  lua_pushcclosure(L, luabind::detail::class_rep::static_class_gettable, 0);
  lua_rawset(L, -3);
  lua_pushstring(L, "__newindex");
  lua_pushcclosure(L, luabind::detail::class_rep::lua_settable_dispatcher, 0);
  lua_rawset(L, -3);
  return luaL_ref(L, -1001000);
};

// Line 85: range 000000001530A470-000000001530A4D9
int __fastcall luabind::detail::class_registry::class_registry(luabind::detail::class_registry *this, lua_State *a2)
{
  int result; // eax

  this->m_classes._M_t._M_impl._M_header._M_color = _S_red;
  this->m_classes._M_t._M_impl._M_header._M_parent = 0LL;
  this->m_classes._M_t._M_impl._M_header._M_left = &this->m_classes._M_t._M_impl._M_header;
  this->m_classes._M_t._M_impl._M_header._M_right = &this->m_classes._M_t._M_impl._M_header;
  this->m_classes._M_t._M_impl._M_node_count = 0LL;
  this->m_cpp_class_metatable = luabind::detail::`anonymous namespace'::create_cpp_class_metatable(a2);
  this->m_lua_class_metatable = luabind::detail::`anonymous namespace'::create_cpp_class_metatable(a2);
  luabind::detail::push_instance_metatable(a2);
  result = luaL_ref(a2, -1001000);
  this->m_instance_metatable = result;
  return result;
};

// Line 94: range 000000001530A350-000000001530A39A
luabind::detail::class_registry *__fastcall luabind::detail::class_registry::get_registry(lua_State_0 *L)
{
  luabind::detail::class_registry *v1; // r12

  lua_pushstring(L, "__luabind_classes");
  lua_gettable(L, -1001000);
  v1 = (luabind::detail::class_registry *)lua_touserdata(L, -1);
  lua_settop(L, -2);
  return v1;
};

// Line 123: range 000000001530A4E0-000000001530A75B
void __fastcall luabind::detail::class_registry::add_class(
        luabind::detail::class_registry *const this,
        const luabind::type_id *info,
        luabind::detail::class_rep *crep)
{
  std::_Rb_tree_header *v4; // r12
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r14
  const std::type_info *v7; // r15
  std::_Rb_tree_header *v8; // rbp
  std::_Rb_tree_node_base::_Base_ptr v9; // rcx
  const char *v10; // r8
  const char *v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  const char *v14; // rsi
  unsigned int v15; // eax
  const char *v16; // r15
  const char *v17; // rdi
  unsigned int v18; // eax
  const char *v19; // rsi
  unsigned int v20; // eax
  std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,luabind::detail::class_rep*>,std::_Select1st<std::pair<const luabind::type_id,luabind::detail::class_rep*> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,luabind::detail::class_rep*> > >::const_iterator v21; // rsi
  const std::type_info *id; // rax
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_hint_unique_pos; // rax
  char first; // di
  std::_Rb_tree_header *v25; // rdi
  const char *v26; // rdi
  const char *v27; // rsi
  char *s1; // [rsp+8h] [rbp-50h]
  std::_Rb_tree_node_base *s1a; // [rsp+8h] [rbp-50h]
  std::_Rb_tree_node_base *v30; // [rsp+10h] [rbp-48h]

  v4 = &this->m_classes._M_t._M_impl.std::_Rb_tree_header;
  M_parent = this->m_classes._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
  {
    v8 = &this->m_classes._M_t._M_impl.std::_Rb_tree_header;
LABEL_23:
    v21._M_node = &v8->_M_header;
    v8 = (std::_Rb_tree_header *)operator new(0x30uLL);
    id = info->id;
    *(_QWORD *)&v8[1]._M_header._M_color = 0LL;
    v8->_M_node_count = (std::size_t)id;
    insert_hint_unique_pos = std::_Rb_tree<luabind::type_id,std::pair<luabind::type_id const,luabind::detail::class_rep *>,std::_Select1st<std::pair<luabind::type_id const,luabind::detail::class_rep *>>,std::less<luabind::type_id>,std::allocator<std::pair<luabind::type_id const,luabind::detail::class_rep *>>>::_M_get_insert_hint_unique_pos(
                               &this->m_classes._M_t,
                               v21,
                               (const std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,luabind::detail::class_rep*>,std::_Select1st<std::pair<const luabind::type_id,luabind::detail::class_rep*> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,luabind::detail::class_rep*> > >::key_type *)&v8->_M_node_count);
    if ( insert_hint_unique_pos.second )
    {
      if ( v4 == (std::_Rb_tree_header *)insert_hint_unique_pos.second || insert_hint_unique_pos.first )
      {
        first = 1;
      }
      else
      {
        v26 = *(const char **)(v8->_M_node_count + 8);
        v27 = *(const char **)(*(_QWORD *)&insert_hint_unique_pos.second[1]._M_color + 8LL);
        if ( *v26 != 42 || (LOBYTE(insert_hint_unique_pos.first) = v26 < v27, *v27 != 42) )
        {
          s1a = insert_hint_unique_pos.second;
          LODWORD(insert_hint_unique_pos.first) = strcmp(v26, v27);
          insert_hint_unique_pos.second = s1a;
          LODWORD(insert_hint_unique_pos.first) >>= 31;
        }
        first = (char)insert_hint_unique_pos.first;
      }
      std::_Rb_tree_insert_and_rebalance(first, &v8->_M_header, insert_hint_unique_pos.second, &v4->_M_header);
      ++this->m_classes._M_t._M_impl._M_node_count;
    }
    else
    {
      v25 = v8;
      v8 = (std::_Rb_tree_header *)insert_hint_unique_pos.first;
      operator delete(v25);
    }
    goto LABEL_28;
  }
  v7 = info->id;
  v8 = &this->m_classes._M_t._M_impl.std::_Rb_tree_header;
  v9 = this->m_classes._M_t._M_impl._M_header._M_parent;
  v10 = (const char *)*((_QWORD *)info->id + 1);
  do
  {
    while ( 1 )
    {
      v11 = *(const char **)(*(_QWORD *)&v9[1]._M_color + 8LL);
      if ( *v11 != 42 || (LOBYTE(v13) = v11 < v10, *v10 != 42) )
      {
        v30 = v9;
        s1 = (char *)v10;
        v12 = strcmp(v11, v10);
        v9 = v30;
        v10 = s1;
        v13 = v12 >> 31;
      }
      if ( (_BYTE)v13 )
        break;
      v8 = (std::_Rb_tree_header *)v9;
      v9 = v9->_M_left;
      if ( !v9 )
        goto LABEL_8;
    }
    v9 = v9->_M_right;
  }
  while ( v9 );
LABEL_8:
  if ( v4 != v8 )
  {
    v14 = *(const char **)(v8->_M_node_count + 8);
    if ( *v10 != 42 || (LOBYTE(v15) = v10 < v14, *v14 != 42) )
      v15 = (unsigned int)strcmp(v10, v14) >> 31;
    if ( !(_BYTE)v15 )
      __assert_fail(
        "(m_classes.find(info) == m_classes.end()) && \"you are trying to register a class twice\"",
        "src/class_registry.cpp",
        0x7Du,
        "void luabind::detail::class_registry::add_class(const luabind::type_id&, luabind::detail::class_rep*)");
    v8 = v4;
  }
  v16 = (const char *)*((_QWORD *)v7 + 1);
  do
  {
    while ( 1 )
    {
      v17 = *(const char **)(*(_QWORD *)&M_parent[1]._M_color + 8LL);
      if ( *v17 != 42 || (LOBYTE(v18) = v17 < v16, *v16 != 42) )
        v18 = (unsigned int)strcmp(v17, v16) >> 31;
      if ( (_BYTE)v18 )
        break;
      v8 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_19;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_19:
  if ( v4 == v8 )
    goto LABEL_23;
  v19 = *(const char **)(v8->_M_node_count + 8);
  if ( *v16 != 42 || (LOBYTE(v20) = v16 < v19, *v19 != 42) )
    v20 = (unsigned int)strcmp(v16, v19) >> 31;
  if ( (_BYTE)v20 )
    goto LABEL_23;
LABEL_28:
  *(_QWORD *)&v8[1]._M_header._M_color = crep;
};

// Line 131: range 000000001530A3A0-000000001530A463
luabind::detail::class_rep *__fastcall luabind::detail::class_registry::find_class(
        const luabind::detail::class_registry *const this,
        const luabind::type_id *info)
{
  luabind::detail::class_rep *M_parent; // r12
  std::_Rb_tree_header *v3; // r13
  std::_Rb_tree_header *v4; // rbx
  const char *v5; // rbp
  const char *v6; // rdi
  unsigned int v7; // eax
  const char *v8; // rsi
  unsigned int v9; // eax

  M_parent = (luabind::detail::class_rep *)this->m_classes._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    return M_parent;
  v3 = &this->m_classes._M_t._M_impl.std::_Rb_tree_header;
  v4 = &this->m_classes._M_t._M_impl.std::_Rb_tree_header;
  v5 = (const char *)*((_QWORD *)info->id + 1);
  do
  {
    while ( 1 )
    {
      v6 = (const char *)*((_QWORD *)M_parent->m_name + 1);
      if ( *v6 != 42 || (LOBYTE(v7) = v6 < v5, *v5 != 42) )
        v7 = (unsigned int)strcmp(v6, v5) >> 31;
      if ( (_BYTE)v7 )
        break;
      v4 = (std::_Rb_tree_header *)M_parent;
      M_parent = (luabind::detail::class_rep *)M_parent->m_bases._M_impl._M_finish;
      if ( !M_parent )
        goto LABEL_8;
    }
    M_parent = (luabind::detail::class_rep *)M_parent->m_bases._M_impl._M_end_of_storage;
  }
  while ( M_parent );
LABEL_8:
  if ( v3 == v4 )
    return M_parent;
  v8 = *(const char **)(v4->_M_node_count + 8);
  if ( *v5 != 42 || (LOBYTE(v9) = v5 < v8, *v8 != 42) )
    v9 = (unsigned int)strcmp(v5, v8) >> 31;
  if ( (_BYTE)v9 )
    return M_parent;
  else
    return *(luabind::detail::class_rep **)&v4[1]._M_header._M_color;
};
