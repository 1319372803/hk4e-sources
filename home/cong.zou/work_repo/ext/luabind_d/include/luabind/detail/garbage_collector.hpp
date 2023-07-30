// File: /home/cong.zou/work_repo/ext/luabind_d/include/luabind/detail/garbage_collector.hpp

// Line 33: range 000000001530E620-000000001530E63C
int __fastcall luabind::detail::garbage_collector<luabind::detail::cast_graph>(lua_State_0 *L)
{
  luabind::detail::cast_graph *v1; // rax

  v1 = (luabind::detail::cast_graph *)lua_touserdata(L, -1);
  luabind::detail::cast_graph::~cast_graph(v1);
  return 0;
};

// Line 33: range 000000001530E640-000000001530E681
int __fastcall luabind::detail::garbage_collector<luabind::detail::class_id_map>(lua_State_0 *L)
{
  std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,long unsigned int>,std::_Select1st<std::pair<const luabind::type_id,long unsigned int> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,long unsigned int> > > *v1; // rax
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,long unsigned int>,std::_Select1st<std::pair<const luabind::type_id,long unsigned int> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,long unsigned int> > > *v3; // rbp
  std::_Rb_tree_node_base::_Base_ptr v4; // rdi

  v1 = (std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,long unsigned int>,std::_Select1st<std::pair<const luabind::type_id,long unsigned int> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,long unsigned int> > > *)lua_touserdata(L, -1);
  M_parent = v1->_M_impl._M_header._M_parent;
  if ( M_parent )
  {
    v3 = v1;
    do
    {
      std::_Rb_tree<luabind::type_id,std::pair<luabind::type_id const,unsigned long>,std::_Select1st<std::pair<luabind::type_id const,unsigned long>>,std::less<luabind::type_id>,std::allocator<std::pair<luabind::type_id const,unsigned long>>>::_M_erase(
        v3,
        (std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,long unsigned int>,std::_Select1st<std::pair<const luabind::type_id,long unsigned int> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,long unsigned int> > >::_Link_type)M_parent->_M_right);
      v4 = M_parent;
      M_parent = M_parent->_M_left;
      operator delete(v4);
    }
    while ( M_parent );
  }
  return 0;
};

// Line 33: range 000000001530E5F0-000000001530E611
int __fastcall luabind::detail::garbage_collector<luabind::detail::class_map>(lua_State_0 *L)
{
  void *v1; // rdi

  v1 = *(void **)lua_touserdata(L, -1);
  if ( v1 )
    operator delete(v1);
  return 0;
};

// Line 33: range 000000001530E690-000000001530E6D1
int __fastcall luabind::detail::garbage_collector<luabind::detail::class_registry>(lua_State_0 *L)
{
  std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,luabind::detail::class_rep*>,std::_Select1st<std::pair<const luabind::type_id,luabind::detail::class_rep*> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,luabind::detail::class_rep*> > > *v1; // rax
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,luabind::detail::class_rep*>,std::_Select1st<std::pair<const luabind::type_id,luabind::detail::class_rep*> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,luabind::detail::class_rep*> > > *v3; // rbp
  std::_Rb_tree_node_base::_Base_ptr v4; // rdi

  v1 = (std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,luabind::detail::class_rep*>,std::_Select1st<std::pair<const luabind::type_id,luabind::detail::class_rep*> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,luabind::detail::class_rep*> > > *)lua_touserdata(L, -1);
  M_parent = v1->_M_impl._M_header._M_parent;
  if ( M_parent )
  {
    v3 = v1;
    do
    {
      std::_Rb_tree<luabind::type_id,std::pair<luabind::type_id const,luabind::detail::class_rep *>,std::_Select1st<std::pair<luabind::type_id const,luabind::detail::class_rep *>>,std::less<luabind::type_id>,std::allocator<std::pair<luabind::type_id const,luabind::detail::class_rep *>>>::_M_erase(
        v3,
        (std::_Rb_tree<luabind::type_id,std::pair<const luabind::type_id,luabind::detail::class_rep*>,std::_Select1st<std::pair<const luabind::type_id,luabind::detail::class_rep*> >,std::less<luabind::type_id>,std::allocator<std::pair<const luabind::type_id,luabind::detail::class_rep*> > >::_Link_type)M_parent->_M_right);
      v4 = M_parent;
      M_parent = M_parent->_M_left;
      operator delete(v4);
    }
    while ( M_parent );
  }
  return 0;
};

// Line 33: range 000000001530A760-000000001530A77C
int __fastcall luabind::detail::garbage_collector<luabind::detail::class_rep>(lua_State_0 *L)
{
  luabind::detail::class_rep *v1; // rax

  v1 = (luabind::detail::class_rep *)lua_touserdata(L, -1);
  luabind::detail::class_rep::~class_rep(v1);
  return 0;
};
