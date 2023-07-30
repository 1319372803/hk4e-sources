// File: /home/cong.zou/work_repo/ext/luabind_d/src/class.cpp

// Line 61: range 0000000015309E10-0000000015309E9D
void __fastcall luabind::detail::class_registration::~class_registration(
        luabind::detail::class_registration *const this)
{
  luabind::scope *p_m_default_members; // rdi
  std::_Vector_base<luabind::detail::(anonymous namespace)::cast_entry,std::allocator<luabind::detail::(anonymous namespace)::cast_entry> >::pointer M_start; // rdi
  std::_Vector_base<std::pair<luabind::type_id,void* (*)(void*)>>::pointer v4; // rdi
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::_Rb_tree_node_base::_Base_ptr v6; // rdi

  p_m_default_members = &this->m_default_members;
  p_m_default_members[-21].m_chain = (luabind::detail::registration *)(&`vtable for'luabind::detail::class_registration
                                                                     + 2);
  luabind::scope::~scope(p_m_default_members);
  luabind::scope::~scope(&this->m_members);
  luabind::scope::~scope(&this->m_scope);
  M_start = this->m_casts._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
  v4 = this->m_bases._M_impl._M_start;
  if ( v4 )
    operator delete(v4);
  M_parent = this->m_static_constants._M_t._M_impl._M_header._M_parent;
  while ( M_parent )
  {
    std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int>>,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int>>>::_M_erase(
      &this->m_static_constants._M_t,
      (std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int> >,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > >::_Link_type)M_parent->_M_right);
    v6 = M_parent;
    M_parent = M_parent->_M_left;
    operator delete(v6);
  }
  luabind::detail::registration::~registration(this);
};

// Line 61: range 0000000015309D70-0000000015309E0A
void __fastcall luabind::detail::class_registration::~class_registration(
        luabind::detail::class_registration *const this)
{
  luabind::scope *p_m_default_members; // rdi
  std::_Vector_base<luabind::detail::(anonymous namespace)::cast_entry,std::allocator<luabind::detail::(anonymous namespace)::cast_entry> >::pointer M_start; // rdi
  std::_Vector_base<std::pair<luabind::type_id,void* (*)(void*)>>::pointer v4; // rdi
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::_Rb_tree_node_base::_Base_ptr v6; // rdi

  p_m_default_members = &this->m_default_members;
  p_m_default_members[-21].m_chain = (luabind::detail::registration *)(&`vtable for'luabind::detail::class_registration
                                                                     + 2);
  luabind::scope::~scope(p_m_default_members);
  luabind::scope::~scope(&this->m_members);
  luabind::scope::~scope(&this->m_scope);
  M_start = this->m_casts._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
  v4 = this->m_bases._M_impl._M_start;
  if ( v4 )
    operator delete(v4);
  M_parent = this->m_static_constants._M_t._M_impl._M_header._M_parent;
  while ( M_parent )
  {
    std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int>>,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int>>>::_M_erase(
      &this->m_static_constants._M_t,
      (std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int> >,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > >::_Link_type)M_parent->_M_right);
    v6 = M_parent;
    M_parent = M_parent->_M_left;
    operator delete(v6);
  }
  luabind::detail::registration::~registration(this);
  operator delete(this, 0xB0uLL);
};

// Line 85: range 0000000015309700-00000000153097D3
void __fastcall luabind::detail::class_registration::class_registration(
        luabind::detail::class_registration *this,
        const char *a2)
{
  luabind::detail::registration::registration(this);
  this->m_static_constants._M_t._M_impl._M_header._M_color = _S_red;
  this->m_static_constants._M_t._M_impl._M_header._M_parent = 0LL;
  *(_OWORD *)&this->m_bases._M_impl._M_start = 0LL;
  this->_vptr_registration = (int (**)(...))(&`vtable for'luabind::detail::class_registration + 2);
  this->m_static_constants._M_t._M_impl._M_header._M_left = &this->m_static_constants._M_t._M_impl._M_header;
  this->m_static_constants._M_t._M_impl._M_header._M_right = &this->m_static_constants._M_t._M_impl._M_header;
  this->m_static_constants._M_t._M_impl._M_node_count = 0LL;
  this->m_bases._M_impl._M_end_of_storage = 0LL;
  this->m_type.id = (const std::type_info *)&`typeinfo for'luabind::detail::null_type;
  this->m_wrapper_type.id = (const std::type_info *)&`typeinfo for'luabind::detail::null_type;
  this->m_casts._M_impl._M_start = 0LL;
  this->m_casts._M_impl._M_finish = 0LL;
  this->m_casts._M_impl._M_end_of_storage = 0LL;
  luabind::scope::scope(&this->m_scope);
  luabind::scope::scope(&this->m_members);
  luabind::scope::scope(&this->m_default_members);
  this->m_name = a2;
};

// Line 85: range 000000000C73C118-000000000C73C162
void __fastcall __noreturn luabind::detail::class_registration::class_registration()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  luabind::scope *v2; // r12
  luabind::scope *v3; // r13
  void *v4; // rdi
  void *v5; // rdi

  luabind::scope::~scope(v3);
  luabind::scope::~scope(v2);
  v4 = *(void **)(v1 + 128);
  if ( v4 )
    operator delete(v4);
  v5 = *(void **)(v1 + 72);
  if ( v5 )
    operator delete(v5);
  std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int>>,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int>>>::_M_erase(
    (std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int> >,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > > *const)(v1 + 24),
    *(std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int> >,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > >::_Link_type *)(v1 + 40));
  luabind::detail::registration::~registration((luabind::detail::registration *const)v1);
  _Unwind_Resume(v0);
};

// Line 91: range 0000000015308F70-00000000153096F3
int __fastcall luabind::detail::class_registration::register_(luabind::detail::class_registration *this, lua_State *a2)
{
  luabind::detail::class_registry *registry; // r14
  luabind::detail::class_rep *v5; // r12
  std::vector<luabind::detail::class_rep*> *v6; // r14
  std::_Vector_base<luabind::detail::class_rep*>::pointer M_start; // rax
  luabind::detail::class_id m_id; // rbx
  unsigned __int64 v9; // rdx
  luabind::detail::class_id m_wrapper_id; // rbx
  unsigned __int64 v11; // rdx
  std::_Rb_tree_node_base *M_parent; // rax
  std::_Rb_tree_node_base::_Base_ptr v13; // rdx
  std::size_t M_node_count; // rsi
  std::_Rb_tree_header *v15; // rcx
  std::_Rb_tree_header *v16; // rdi
  std::_Rb_tree_node_base::_Base_ptr M_left; // rdx
  std::_Rb_tree_node_base *v18; // rax
  std::_Rb_tree_node_base::_Base_ptr M_right; // rdx
  std::_Rb_tree_node_base *v20; // rax
  luabind::detail::cast_graph *v21; // r15
  std::pair<luabind::type_id,int> *v22; // rdx
  const std::type_info *id; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<const luabind::type_id,long unsigned int> >,bool> v24; // rax
  std::_Rb_tree_node_base *v25; // rbx
  std::pair<std::_Rb_tree_iterator<std::pair<const luabind::type_id,long unsigned int> >,bool> v26; // rax
  std::_Rb_tree_node_base::_Base_ptr v27; // rdx
  std::_Vector_base<luabind::detail::(anonymous namespace)::cast_entry,std::allocator<luabind::detail::(anonymous namespace)::cast_entry> >::pointer v28; // rbx
  std::_Vector_base<std::pair<luabind::type_id,void* (*)(void*)>>::pointer v29; // r15
  __int64 v30; // rbx
  luabind::detail::class_id v31; // rsi
  luabind::detail::class_rep **v32; // rdx
  std::_Rb_tree_color M_color; // edx
  int result; // eax
  luabind::detail::class_id v35; // rsi
  luabind::detail::class_rep **v36; // rdx
  std::_Rb_tree_color v37; // eax
  const luabind::detail::class_registry *v38; // [rsp+8h] [rbp-90h]
  std::_Rb_tree_node_base *v39; // [rsp+10h] [rbp-88h]
  std::_Vector_base<luabind::detail::(anonymous namespace)::cast_entry,std::allocator<luabind::detail::(anonymous namespace)::cast_entry> >::pointer i; // [rsp+10h] [rbp-88h]
  std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,long unsigned int>,std::_Select1st<std::pair<const luabind::type_id,long unsigned int> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,long unsigned int> > > *v41; // [rsp+18h] [rbp-80h]
  luabind::detail::class_id v42; // [rsp+20h] [rbp-78h]
  int v44; // [rsp+38h] [rbp-60h]
  int v45; // [rsp+48h] [rbp-50h]
  std::pair<luabind::type_id,int> v46; // [rsp+50h] [rbp-48h] BYREF

  v44 = lua_gettop(a2);
  if ( lua_type(a2, -1) != 5 )
    __assert_fail(
      "lua_type(L, -1) == 5",
      "src/class.cpp",
      0x5Eu,
      "virtual void luabind::detail::class_registration::register_(lua_State*) const");
  lua_pushstring(a2, this->m_name);
  registry = luabind::detail::class_registry::get_registry(a2);
  lua_newuserdata(a2, 0xA8uLL);
  v5 = (luabind::detail::class_rep *)lua_touserdata(a2, -1);
  luabind::detail::class_rep::class_rep(v5, &this->m_type, this->m_name, a2);
  luabind::detail::class_registry::add_class(registry, &this->m_type, v5);
  lua_pushstring(a2, "__luabind_class_map");
  lua_rawget(a2, -1001000);
  v6 = (std::vector<luabind::detail::class_rep*> *)lua_touserdata(a2, -1);
  lua_settop(a2, -2);
  M_start = v6->_M_impl._M_start;
  m_id = this->m_id;
  v9 = v6->_M_impl._M_finish - v6->_M_impl._M_start;
  if ( m_id >= v9 )
  {
    v35 = m_id + 1;
    if ( v9 < m_id + 1 )
    {
      std::vector<luabind::detail::class_rep *>::_M_default_append(v6, v35 - v9);
      M_start = v6->_M_impl._M_start;
    }
    else if ( v9 > m_id + 1 )
    {
      v36 = &M_start[v35];
      if ( v6->_M_impl._M_finish != v36 )
        v6->_M_impl._M_finish = v36;
    }
  }
  M_start[m_id] = v5;
  m_wrapper_id = this->m_wrapper_id;
  v42 = luabind::detail::registered_class<luabind::detail::null_type>::id;
  if ( m_wrapper_id != luabind::detail::registered_class<luabind::detail::null_type>::id )
  {
    v11 = v6->_M_impl._M_finish - M_start;
    if ( m_wrapper_id >= v11 )
    {
      v31 = m_wrapper_id + 1;
      if ( v11 < m_wrapper_id + 1 )
      {
        std::vector<luabind::detail::class_rep *>::_M_default_append(v6, v31 - v11);
        M_start = v6->_M_impl._M_start;
      }
      else if ( v11 > m_wrapper_id + 1 )
      {
        v32 = &M_start[v31];
        if ( v6->_M_impl._M_finish != v32 )
          v6->_M_impl._M_finish = v32;
      }
    }
    M_start[m_wrapper_id] = v5;
  }
  M_parent = v5->m_static_constants._M_t._M_impl._M_header._M_parent;
  v13 = this->m_static_constants._M_t._M_impl._M_header._M_parent;
  if ( M_parent )
  {
    M_node_count = v5->m_static_constants._M_t._M_impl._M_node_count;
    v15 = &v5->m_static_constants._M_t._M_impl.std::_Rb_tree_header;
    v16 = &this->m_static_constants._M_t._M_impl.std::_Rb_tree_header;
    if ( v13 )
    {
      v5->m_static_constants._M_t._M_impl._M_header._M_parent = v13;
      M_left = this->m_static_constants._M_t._M_impl._M_header._M_left;
      this->m_static_constants._M_t._M_impl._M_header._M_parent = M_parent;
      v18 = v5->m_static_constants._M_t._M_impl._M_header._M_left;
      v5->m_static_constants._M_t._M_impl._M_header._M_left = M_left;
      M_right = this->m_static_constants._M_t._M_impl._M_header._M_right;
      this->m_static_constants._M_t._M_impl._M_header._M_left = v18;
      v20 = v5->m_static_constants._M_t._M_impl._M_header._M_right;
      v5->m_static_constants._M_t._M_impl._M_header._M_right = M_right;
      this->m_static_constants._M_t._M_impl._M_header._M_right = v20;
      v5->m_static_constants._M_t._M_impl._M_header._M_parent->_M_parent = &v15->_M_header;
      this->m_static_constants._M_t._M_impl._M_header._M_parent->_M_parent = &v16->_M_header;
      v5->m_static_constants._M_t._M_impl._M_node_count = this->m_static_constants._M_t._M_impl._M_node_count;
      this->m_static_constants._M_t._M_impl._M_node_count = M_node_count;
    }
    else
    {
      M_color = v5->m_static_constants._M_t._M_impl._M_header._M_color;
      this->m_static_constants._M_t._M_impl._M_header._M_parent = M_parent;
      this->m_static_constants._M_t._M_impl._M_header._M_color = M_color;
      this->m_static_constants._M_t._M_impl._M_header._M_left = v5->m_static_constants._M_t._M_impl._M_header._M_left;
      this->m_static_constants._M_t._M_impl._M_header._M_right = v5->m_static_constants._M_t._M_impl._M_header._M_right;
      M_parent->_M_parent = &v16->_M_header;
      this->m_static_constants._M_t._M_impl._M_node_count = M_node_count;
      v5->m_static_constants._M_t._M_impl._M_header._M_parent = 0LL;
      v5->m_static_constants._M_t._M_impl._M_header._M_left = &v15->_M_header;
      v5->m_static_constants._M_t._M_impl._M_header._M_right = &v15->_M_header;
      v5->m_static_constants._M_t._M_impl._M_node_count = 0LL;
    }
  }
  else if ( v13 )
  {
    v37 = this->m_static_constants._M_t._M_impl._M_header._M_color;
    v5->m_static_constants._M_t._M_impl._M_header._M_parent = v13;
    v5->m_static_constants._M_t._M_impl._M_header._M_color = v37;
    v5->m_static_constants._M_t._M_impl._M_header._M_left = this->m_static_constants._M_t._M_impl._M_header._M_left;
    v5->m_static_constants._M_t._M_impl._M_header._M_right = this->m_static_constants._M_t._M_impl._M_header._M_right;
    v13->_M_parent = &v5->m_static_constants._M_t._M_impl._M_header;
    v5->m_static_constants._M_t._M_impl._M_node_count = this->m_static_constants._M_t._M_impl._M_node_count;
    this->m_static_constants._M_t._M_impl._M_header._M_parent = 0LL;
    this->m_static_constants._M_t._M_impl._M_header._M_left = &this->m_static_constants._M_t._M_impl._M_header;
    this->m_static_constants._M_t._M_impl._M_header._M_right = &this->m_static_constants._M_t._M_impl._M_header;
    this->m_static_constants._M_t._M_impl._M_node_count = 0LL;
  }
  v38 = luabind::detail::class_registry::get_registry(a2);
  lua_rawgeti(a2, -1001000, v5->m_default_table.m_index);
  luabind::scope::register_(&this->m_scope, a2);
  luabind::scope::register_(&this->m_default_members, a2);
  lua_settop(a2, -2);
  lua_rawgeti(a2, -1001000, v5->m_table.m_index);
  luabind::scope::register_(&this->m_members, a2);
  lua_settop(a2, -2);
  lua_pushstring(a2, "__luabind_cast_graph");
  lua_gettable(a2, -1001000);
  v21 = (luabind::detail::cast_graph *)lua_touserdata(a2, -1);
  lua_settop(a2, -2);
  lua_pushstring(a2, "__luabind_class_id_map");
  lua_gettable(a2, -1001000);
  v41 = (std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,long unsigned int>,std::_Select1st<std::pair<const luabind::type_id,long unsigned int> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,long unsigned int> > > *)lua_touserdata(a2, -1);
  lua_settop(a2, -2);
  v39 = (std::_Rb_tree_node_base *)this->m_id;
  if ( (unsigned __int64)v39 >= luabind::detail::class_id_map::local_id_base )
    goto LABEL_51;
  id = this->m_type.id;
  v46.second = 0;
  v46.first.id = id;
  v24 = std::_Rb_tree<luabind::type_id,std::pair<luabind::type_id const,unsigned long>,std::_Select1st<std::pair<luabind::type_id const,unsigned long>>,std::less<luabind::type_id>,std::allocator<std::pair<luabind::type_id const,unsigned long>>>::_M_emplace_unique<std::pair<luabind::type_id,int>>(
          v41,
          &v46,
          v22);
  if ( !v24.second )
  {
    *(_QWORD *)&v24.second = v24.first._M_node[1]._M_parent;
    if ( v39 != *(std::_Rb_tree_node_base **)&v24.second
      && luabind::detail::class_id_map::local_id_base > *(_QWORD *)&v24.second )
    {
LABEL_52:
      __assert_fail(
        "result.second || result.first->second == id || result.first->second >= local_id_base",
        ".//include/luabind/detail/inheritance.hpp",
        0x62u,
        "void luabind::detail::class_id_map::put(luabind::detail::class_id, const luabind::type_id&)");
    }
  }
  v24.first._M_node[1]._M_parent = v39;
  if ( m_wrapper_id == v42 )
    goto LABEL_19;
  v25 = (std::_Rb_tree_node_base *)this->m_wrapper_id;
  if ( (unsigned __int64)v25 >= luabind::detail::class_id_map::local_id_base )
LABEL_51:
    __assert_fail(
      "id < local_id_base",
      ".//include/luabind/detail/inheritance.hpp",
      0x5Du,
      "void luabind::detail::class_id_map::put(luabind::detail::class_id, const luabind::type_id&)");
  v24.first._M_node = (std::_Rb_tree_iterator<std::pair<const luabind::type_id,long unsigned int> >::_Base_ptr)this->m_wrapper_type.id;
  v46.second = 0;
  v46.first.id = (const std::type_info *)v24.first._M_node;
  v26 = std::_Rb_tree<luabind::type_id,std::pair<luabind::type_id const,unsigned long>,std::_Select1st<std::pair<luabind::type_id const,unsigned long>>,std::less<luabind::type_id>,std::allocator<std::pair<luabind::type_id const,unsigned long>>>::_M_emplace_unique<std::pair<luabind::type_id,int>>(
          v41,
          &v46,
          *(std::pair<luabind::type_id,int> **)&v24.second);
  if ( !v26.second )
  {
    v27 = v26.first._M_node[1]._M_parent;
    if ( luabind::detail::class_id_map::local_id_base > (unsigned __int64)v27 && v25 != v27 )
      goto LABEL_52;
  }
  v26.first._M_node[1]._M_parent = v25;
LABEL_19:
  v28 = this->m_casts._M_impl._M_start;
  for ( i = this->m_casts._M_impl._M_finish; i != v28; ++v28 )
    luabind::detail::cast_graph::insert(v21, v28->src, v28->target, v28->cast);
  v29 = this->m_bases._M_impl._M_start;
  if ( v29 != this->m_bases._M_impl._M_finish )
  {
    while ( 1 )
    {
      v45 = lua_gettop(a2);
      *(_QWORD *)&v46.second = luabind::detail::class_registry::find_class(v38, &v29->first);
      v30 = *(_QWORD *)&v46.second;
      LODWORD(v46.first.id) = 0;
      luabind::detail::class_rep::add_base_class(v5, (const luabind::detail::class_rep::base_info *)&v46);
      lua_rawgeti(a2, -1001000, v5->m_table.m_index);
      lua_rawgeti(a2, -1001000, *(int *)(v30 + 64));
      lua_pushnil(a2);
      while ( lua_next(a2, -2) )
      {
        lua_pushvalue(a2, -2);
        lua_gettable(a2, -5);
        if ( lua_type(a2, -1) )
        {
          lua_settop(a2, -3);
        }
        else
        {
          lua_settop(a2, -2);
          lua_pushvalue(a2, -2);
          lua_rotate(a2, -2, 1);
          lua_settable(a2, -5);
        }
      }
      lua_settop(a2, -3);
      lua_rawgeti(a2, -1001000, v5->m_default_table.m_index);
      lua_rawgeti(a2, -1001000, *(int *)(v30 + 80));
      lua_pushnil(a2);
      while ( lua_next(a2, -2) )
      {
        lua_pushvalue(a2, -2);
        lua_gettable(a2, -5);
        if ( lua_type(a2, -1) )
        {
          lua_settop(a2, -3);
        }
        else
        {
          lua_settop(a2, -2);
          lua_pushvalue(a2, -2);
          lua_rotate(a2, -2, 1);
          lua_settable(a2, -5);
        }
      }
      lua_settop(a2, -3);
      if ( v45 != lua_gettop(a2) )
        break;
      if ( this->m_bases._M_impl._M_finish == ++v29 )
        goto LABEL_39;
    }
LABEL_49:
    __assert_fail(
      "m_stack == lua_gettop(m_L)",
      ".//include/luabind/detail/debug.hpp",
      0x2Au,
      "luabind::detail::stack_checker_type::~stack_checker_type()");
  }
LABEL_39:
  lua_settable(a2, -3);
  result = lua_gettop(a2);
  if ( v44 != result )
    goto LABEL_49;
  return result;
};

// Line 171: range 000000000C73C0FC-000000000C73C113
void __fastcall __noreturn luabind::detail::class_registration::register_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        luabind::detail::stack_checker_type a12,
        luabind::detail::stack_checker_type a13)
{
  struct _Unwind_Exception *v13; // rbp

  luabind::detail::stack_checker_type::~stack_checker_type(&a13);
  luabind::detail::stack_checker_type::~stack_checker_type(&a12);
  _Unwind_Resume(v13);
};

// Line 237: range 00000000153097E0-0000000015309843
void __fastcall luabind::detail::class_base::class_base(luabind::detail::class_base *this, const char *a2)
{
  luabind::detail::class_registration *v2; // rbp
  std::auto_ptr<luabind::detail::registration> reg; // [rsp+8h] [rbp-20h] BYREF

  v2 = (luabind::detail::class_registration *)operator new(0xB0uLL);
  luabind::detail::class_registration::class_registration(v2, a2);
  this->m_registration = v2;
  reg._M_ptr = v2;
  luabind::scope::scope(this, (std::auto_ptr<luabind::detail::registration>)&reg);
  if ( reg._M_ptr )
    (*((void (__fastcall **)(luabind::detail::registration *))reg._M_ptr->_vptr_registration + 1))(reg._M_ptr);
};

// Line 239: range 000000000C73C168-000000000C73C178
void __fastcall __noreturn luabind::detail::class_base::class_base()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0xB0uLL);
  _Unwind_Resume(v1);
};

// Line 248: range 0000000015308B00-0000000015308B1A
void __fastcall luabind::detail::class_base::init(
        luabind::detail::class_base *const this,
        const luabind::type_id *type_id_,
        luabind::detail::class_id id,
        const luabind::type_id *wrapper_type,
        luabind::detail::class_id wrapper_id)
{
  luabind::detail::class_registration *m_registration; // rax
  const std::type_info *v6; // rsi
  const std::type_info *v7; // rdx

  m_registration = this->m_registration;
  v6 = type_id_->id;
  m_registration->m_id = id;
  m_registration->m_type.id = v6;
  v7 = wrapper_type->id;
  m_registration->m_wrapper_id = wrapper_id;
  m_registration->m_wrapper_type.id = v7;
};

// Line 255: range 0000000015309850-0000000015309898
void __fastcall luabind::detail::class_base::add_base(
        luabind::detail::class_base *const this,
        const luabind::type_id *base,
        luabind::detail::cast_function cast)
{
  std::pair<luabind::type_id,void* (*)(void*)> *v3; // rcx
  const std::type_info *id; // rax
  luabind::detail::class_registration *m_registration; // rdi
  _QWORD *p_id; // rsi
  std::pair<luabind::type_id,void* (*)(void*)> *v7; // rsi
  const std::type_info *v8; // [rsp+0h] [rbp-18h] BYREF
  luabind::detail::cast_function casta; // [rsp+8h] [rbp-10h]

  id = base->id;
  m_registration = this->m_registration;
  casta = cast;
  v8 = id;
  p_id = &m_registration->m_bases._M_impl._M_finish->first.id;
  if ( p_id == (_QWORD *)m_registration->m_bases._M_impl._M_end_of_storage )
  {
    std::vector<std::pair<luabind::type_id,void * (*)(void *)>>::_M_realloc_insert<std::pair<luabind::type_id,void * (*)(void *)>>(
      &m_registration->m_bases,
      (std::vector<std::pair<luabind::type_id,void* (*)(void*)>>::iterator)p_id,
      (std::pair<luabind::type_id,void* (*)(void*)> *)&v8,
      v3);
  }
  else
  {
    *p_id = id;
    v7 = (std::pair<luabind::type_id,void* (*)(void*)> *)(p_id + 2);
    v7[-1].second = cast;
    m_registration->m_bases._M_impl._M_finish = v7;
  }
};

// Line 260: range 0000000015308B20-0000000015308B7B
void __fastcall luabind::detail::class_base::add_member(
        luabind::detail::class_base *this,
        luabind::detail::registration *a2)
{
  luabind::detail::class_registration *m_registration; // r12
  luabind::detail::registration *v3; // [rsp+0h] [rbp-28h] BYREF
  luabind::scope s; // [rsp+8h] [rbp-20h] BYREF

  m_registration = this->m_registration;
  v3 = a2;
  luabind::scope::scope(&s, (std::auto_ptr<luabind::detail::registration>)&v3);
  luabind::scope::operator,(&m_registration->m_members, (luabind::scope)&s);
  luabind::scope::~scope(&s);
  if ( v3 )
    (*((void (__fastcall **)(luabind::detail::registration *))v3->_vptr_registration + 1))(v3);
};

// Line 262: range 000000000C73C096-000000000C73C0B0
void __fastcall __noreturn luabind::detail::class_base::add_member()
{
  luabind::scope *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  luabind::scope::~scope(v0);
  if ( retaddr )
    (*(void (__fastcall **)(void *))(*(_QWORD *)retaddr + 8LL))(retaddr);
  _Unwind_Resume(v1);
};

// Line 266: range 0000000015308B80-0000000015308BDB
void __fastcall luabind::detail::class_base::add_default_member(
        luabind::detail::class_base *this,
        luabind::detail::registration *a2)
{
  luabind::detail::class_registration *m_registration; // r12
  luabind::detail::registration *v3; // [rsp+0h] [rbp-28h] BYREF
  luabind::scope s; // [rsp+8h] [rbp-20h] BYREF

  m_registration = this->m_registration;
  v3 = a2;
  luabind::scope::scope(&s, (std::auto_ptr<luabind::detail::registration>)&v3);
  luabind::scope::operator,(&m_registration->m_default_members, (luabind::scope)&s);
  luabind::scope::~scope(&s);
  if ( v3 )
    (*((void (__fastcall **)(luabind::detail::registration *))v3->_vptr_registration + 1))(v3);
};

// Line 268: range 000000000C73C0B6-000000000C73C0D0
void __fastcall __noreturn luabind::detail::class_base::add_default_member()
{
  luabind::scope *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  luabind::scope::~scope(v0);
  if ( retaddr )
    (*(void (__fastcall **)(void *))(*(_QWORD *)retaddr + 8LL))(retaddr);
  _Unwind_Resume(v1);
};

// Line 273: range 0000000015308BE0-0000000015308BE8
const char *__fastcall luabind::detail::class_base::name(const luabind::detail::class_base *const this)
{
  return this->m_registration->m_name;
};

// Line 277: range 00000000153098A0-00000000153099A4
void __fastcall luabind::detail::class_base::add_static_constant(
        luabind::detail::class_base *const this,
        const char *name,
        int val)
{
  luabind::detail::class_registration *m_registration; // r13
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::_Rb_tree_node_base *p_M_header; // r15
  std::_Rb_tree_node_base *first; // rbp
  __int64 v9; // rax
  std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int> >,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > >::const_iterator v10; // rsi
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_hint_unique_pos; // rax
  bool v12; // di
  std::_Rb_tree_node_base *v13; // rdi
  std::_Rb_tree_node_base *second; // [rsp+8h] [rbp-40h]

  m_registration = this->m_registration;
  M_parent = m_registration->m_static_constants._M_t._M_impl._M_header._M_parent;
  p_M_header = &m_registration->m_static_constants._M_t._M_impl._M_header;
  first = &m_registration->m_static_constants._M_t._M_impl._M_header;
  if ( !M_parent )
    goto LABEL_9;
  do
  {
    while ( strcmp(*(const char **)&M_parent[1]._M_color, name) >= 0 )
    {
      first = M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( p_M_header == first || strcmp(name, *(const char **)&first[1]._M_color) < 0 )
  {
LABEL_9:
    v9 = operator new(0x30uLL);
    v10._M_node = first;
    *(_QWORD *)(v9 + 32) = name;
    first = (std::_Rb_tree_node_base *)v9;
    *(_DWORD *)(v9 + 40) = 0;
    insert_hint_unique_pos = std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int>>,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int>>>::_M_get_insert_hint_unique_pos(
                               &m_registration->m_static_constants._M_t,
                               v10,
                               (const std::_Rb_tree<char const*,std::pair<char const* const,int>,std::_Select1st<std::pair<char const* const,int> >,luabind::detail::ltstr,std::allocator<std::pair<char const* const,int> > >::key_type *)(v9 + 32));
    if ( insert_hint_unique_pos.second )
    {
      if ( p_M_header == insert_hint_unique_pos.second || insert_hint_unique_pos.first )
      {
        v12 = 1;
      }
      else
      {
        second = insert_hint_unique_pos.second;
        LODWORD(insert_hint_unique_pos.first) = strcmp(
                                                  *(const char **)&first[1]._M_color,
                                                  *(const char **)&insert_hint_unique_pos.second[1]._M_color);
        insert_hint_unique_pos.second = second;
        v12 = SLODWORD(insert_hint_unique_pos.first) < 0;
      }
      std::_Rb_tree_insert_and_rebalance(
        v12,
        first,
        insert_hint_unique_pos.second,
        &m_registration->m_static_constants._M_t._M_impl._M_header);
      ++m_registration->m_static_constants._M_t._M_impl._M_node_count;
    }
    else
    {
      v13 = first;
      first = insert_hint_unique_pos.first;
      operator delete(v13);
    }
  }
  LODWORD(first[1]._M_parent) = val;
};

// Line 282: range 0000000015308BF0-0000000015308C2D
void __fastcall luabind::detail::class_base::add_inner_scope(luabind::detail::class_base *this, luabind::scope *a2)
{
  luabind::scope *p_m_scope; // r12
  luabind::scope s; // [rsp+8h] [rbp-20h] BYREF

  p_m_scope = &this->m_registration->m_scope;
  luabind::scope::scope(&s, a2);
  luabind::scope::operator,(p_m_scope, (luabind::scope)&s);
  luabind::scope::~scope(&s);
};

// Line 283: range 000000000C73C0D6-000000000C73C0E1
void __fastcall __noreturn luabind::detail::class_base::add_inner_scope()
{
  luabind::scope *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  luabind::scope::~scope(v0);
  _Unwind_Resume(v1);
};

// Line 288: range 0000000015308C40-0000000015308DEA
void __fastcall luabind::detail::class_base::add_cast(
        luabind::detail::class_base *const this,
        luabind::detail::class_id src,
        luabind::detail::class_id target,
        luabind::detail::cast_function cast)
{
  luabind::detail::class_registration *m_registration; // r13
  std::_Vector_base<luabind::detail::(anonymous namespace)::cast_entry,std::allocator<luabind::detail::(anonymous namespace)::cast_entry> >::pointer M_finish; // rbx
  luabind::detail::`anonymous namespace'::cast_entry *v6; // rbx
  __m128i *M_start; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  luabind::detail::`anonymous namespace'::cast_entry *v14; // r15
  unsigned __int64 v15; // rax
  __m128 *v16; // r12
  unsigned __int64 v17; // rcx
  const __m128i *v18; // rdx
  __m128i v19; // xmm2
  luabind::detail::class_id targeta; // [rsp+8h] [rbp-50h] BYREF
  luabind::detail::class_id srca; // [rsp+10h] [rbp-48h]
  luabind::detail::cast_function casta; // [rsp+18h] [rbp-40h]

  m_registration = this->m_registration;
  srca = src;
  targeta = target;
  M_finish = m_registration->m_casts._M_impl._M_finish;
  if ( M_finish != m_registration->m_casts._M_impl._M_end_of_storage )
  {
    M_finish->cast = cast;
    v6 = M_finish + 1;
    *(__m128 *)&v6[-1].src = _mm_loadh_ps((const double *)&targeta);
    m_registration->m_casts._M_impl._M_finish = v6;
    return;
  }
  M_start = (__m128i *)m_registration->m_casts._M_impl._M_start;
  v8 = 0xAAAAAAAAAAAAAAABLL * (((char *)M_finish - (char *)M_start) >> 3);
  v9 = 0x555555555555555LL;
  if ( v8 == 0x555555555555555LL )
    std::__throw_length_error("vector::_M_realloc_insert");
  if ( v8 )
  {
    v10 = 0x7FFFFFFFFFFFFFF8LL;
    v11 = 0x5555555555555556LL * (((char *)M_finish - (char *)M_start) >> 3);
    if ( 0xAAAAAAAAAAAAAAABLL * (((char *)M_finish - (char *)M_start) >> 3) <= v11 )
    {
      if ( !v11 )
      {
        v15 = 24LL;
        v14 = 0LL;
        v13 = 0LL;
        goto LABEL_7;
      }
      if ( v11 <= 0x555555555555555LL )
        v9 = 0x5555555555555556LL * (((char *)M_finish - (char *)M_start) >> 3);
      v10 = 24 * v9;
    }
  }
  else
  {
    v10 = 24LL;
  }
  casta = cast;
  v12 = operator new(v10);
  cast = casta;
  v13 = v12;
  v14 = (luabind::detail::`anonymous namespace'::cast_entry *)(v12 + v10);
  v15 = v12 + 24;
LABEL_7:
  v16 = (__m128 *)(v13 + (char *)M_finish - (char *)M_start);
  v16[1].m128_u64[0] = (unsigned __int64)cast;
  *v16 = _mm_loadh_ps((const double *)&targeta);
  if ( M_finish != (std::_Vector_base<luabind::detail::(anonymous namespace)::cast_entry,std::allocator<luabind::detail::(anonymous namespace)::cast_entry> >::pointer)M_start )
  {
    v17 = v13;
    v18 = M_start;
    do
    {
      v19 = _mm_loadu_si128(v18);
      v18 = (const __m128i *)((char *)v18 + 24);
      v17 += 24LL;
      *(__m128i *)(v17 - 24) = v19;
      *(_QWORD *)(v17 - 8) = v18[-1].m128i_i64[1];
    }
    while ( M_finish != (std::_Vector_base<luabind::detail::(anonymous namespace)::cast_entry,std::allocator<luabind::detail::(anonymous namespace)::cast_entry> >::pointer)v18 );
    v15 = v13 + 8 * ((unsigned __int64)((char *)&M_finish[-1] - (char *)M_start) >> 3) + 48;
  }
  if ( M_start )
  {
    targeta = v15;
    operator delete(M_start);
    v15 = targeta;
  }
  m_registration->m_casts._M_impl._M_end_of_storage = v14;
  *(__m128i *)&m_registration->m_casts._M_impl._M_start = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v15);
};

// Line 293: range 0000000015308DF0-0000000015308E81
void __fastcall luabind::detail::add_custom_name(const luabind::type_id *i, std::string *s)
{
  const char *v2; // r12

  if ( s->_M_string_length == 0x3FFFFFFFFFFFFFFFLL
    || s->_M_string_length == 4611686018427387902LL
    || (std::string::_M_append(s, " [", 2LL),
        v2 = (const char *)((**((_BYTE **)i->id + 1) == 42) + *((_QWORD *)i->id + 1)),
        strlen(v2) > 0x3FFFFFFFFFFFFFFFLL - s->_M_string_length)
    || (std::string::_M_append(s, v2), s->_M_string_length == 0x3FFFFFFFFFFFFFFFLL) )
  {
    std::__throw_length_error("basic_string::append");
  }
  std::string::_M_append(s, "]", 1LL);
};

// Line 300: range 0000000015308E90-0000000015308F65
std::string *__fastcall luabind::detail::get_class_name[abi:cxx11](std::string *s, lua_State_0 *L, luabind::type_id *i)
{
  luabind::detail::class_registry *registry; // rax
  luabind::detail::class_rep *v5; // rax
  const char *m_name; // rbp

  s->_M_dataplus._M_p = s->_anon_0._M_local_buf;
  s->_M_string_length = 0LL;
  s->_anon_0._M_local_buf[0] = 0;
  if ( !L )
    __assert_fail(
      "L",
      "src/class.cpp",
      0x12Fu,
      "std::string luabind::detail::get_class_name(lua_State*, const luabind::type_id&)");
  registry = luabind::detail::class_registry::get_registry(L);
  v5 = luabind::detail::class_registry::find_class(registry, i);
  if ( v5 )
  {
    m_name = v5->m_name;
    if ( strlen(m_name) > 0x3FFFFFFFFFFFFFFFLL - s->_M_string_length )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(s, m_name);
    return s;
  }
  else
  {
    std::string::_M_replace(s, 0LL, s->_M_string_length, "custom", 6LL);
    luabind::detail::add_custom_name(i, s);
    return s;
  }
};

// Line 336: range 000000000C7483E0-000000000C74843E
void __cdecl GLOBAL__sub_I_class_cpp()
{
  luabind::type_id cls; // [rsp+8h] [rbp-10h] BYREF

  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  if ( !`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id )
  {
    `guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id = 1;
    cls.id = (const std::type_info *)&`typeinfo for'luabind::detail::null_type;
    luabind::detail::registered_class<luabind::detail::null_type>::id = luabind::detail::allocate_class_id(&cls);
  }
};
