// File: /home/cong.zou/work_repo/ext/luabind_d/src/inheritance.cpp

// Line 142: range 000000001530CB80-000000001530D175
_BYTE *__fastcall luabind::detail::cast_graph::impl::cast(
        luabind::detail::cast_graph::impl *this,
        _BYTE *a2,
        boost::tuples::cons<long unsigned int,boost::tuples::cons<long unsigned int,boost::tuples::cons<long int,boost::tuples::null_type> > >::stored_head_type a3,
        std::_Rb_tree_node_base *a4,
        boost::tuples::cons<long unsigned int,boost::tuples::cons<long int,boost::tuples::null_type> >::stored_head_type a5,
        _BYTE *a6)
{
  bool v7; // cf
  unsigned __int64 v8; // rdx
  _BYTE *result; // rax
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v12; // rdx
  luabind::detail::`anonymous namespace'::queue_entry **v13; // rbx
  luabind::detail::`anonymous namespace'::queue_entry *v14; // rax
  std::pair<boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long int,int> > *v15; // rdx
  signed __int64 v16; // rax
  __int64 v17; // rbx
  std::vector<long unsigned int>::size_type v18; // rsi
  std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Elt_pointer M_cur; // rsi
  __int64 p; // r14
  luabind::detail::class_id vertex_id; // rbx
  std::_Vector_base<long unsigned int>::pointer M_start; // rax
  boost::tuples::cons<long unsigned int,boost::tuples::cons<long unsigned int,boost::tuples::cons<long int,boost::tuples::null_type> > >::stored_head_type head; // rbx
  boost::tuples::cons<long unsigned int,boost::tuples::cons<long int,boost::tuples::null_type> >::stored_head_type v24; // r15
  boost::tuples::cons<long unsigned int,boost::tuples::cons<long unsigned int,boost::tuples::cons<long unsigned int,boost::tuples::cons<long int,boost::tuples::null_type> > > >::stored_head_type v25; // rax
  luabind::detail::`anonymous namespace'::queue_entry *v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  std::_Rb_tree_node_base::_Base_ptr M_right; // rax
  std::_Deque_base<luabind::detail::(anonymous namespace)::queue_entry,std::allocator<luabind::detail::(anonymous namespace)::queue_entry> >::_Map_pointer M_map; // rdi
  std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Map_pointer v31; // rbp
  std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Map_pointer M_node; // rbx
  __int64 v33; // r12
  void *v34; // rdi
  __int64 v36; // [rsp+0h] [rbp-108h]
  __int64 v37; // [rsp+0h] [rbp-108h]
  int distance; // [rsp+14h] [rbp-F4h]
  boost::tuples::cons<long int,boost::tuples::null_type>::stored_head_type v40; // [rsp+28h] [rbp-E0h]
  std::vector<long unsigned int> v41; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-C0h]
  std::pair<boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long int,int> > v43; // [rsp+50h] [rbp-B8h] BYREF
  std::deque<luabind::detail::(anonymous namespace)::queue_entry,std::allocator<luabind::detail::(anonymous namespace)::queue_entry> > v44; // [rsp+80h] [rbp-88h] BYREF

  if ( (std::_Rb_tree_node_base *)a3 == a4 )
    return a2;
  v7 = a3 < (unsigned __int64)a4;
  v8 = (unsigned __int64)a4;
  if ( !v7 )
    v8 = a3;
  if ( this->m_vertices._M_impl._M_finish - this->m_vertices._M_impl._M_start <= v8 )
    return 0LL;
  M_parent = this->m_cache.m_cache._M_t._M_impl._M_header._M_parent;
  v40 = a6 - a2;
  if ( M_parent )
  {
    v12 = &this->m_cache.m_cache._M_t._M_impl.std::_Rb_tree_header;
    do
    {
      if ( a3 > *(_QWORD *)&M_parent[1]._M_color
        || a3 == *(_QWORD *)&M_parent[1]._M_color
        && (a4 > M_parent[1]._M_parent
         || a4 == M_parent[1]._M_parent
         && ((std::_Rb_tree_node_base::_Base_ptr)a5 > M_parent[1]._M_left
          || (std::_Rb_tree_node_base::_Base_ptr)a5 == M_parent[1]._M_left && v40 > (__int64)M_parent[1]._M_right)) )
      {
        M_parent = M_parent->_M_right;
      }
      else
      {
        v12 = (std::_Rb_tree_header *)M_parent;
        M_parent = M_parent->_M_left;
      }
    }
    while ( M_parent );
    if ( &this->m_cache.m_cache._M_t._M_impl.std::_Rb_tree_header != v12
      && a3 >= v12->_M_node_count
      && (a3 != v12->_M_node_count
       || (unsigned __int64)a4 >= *(_QWORD *)&v12[1]._M_header._M_color
       && (a4 != *(std::_Rb_tree_node_base **)&v12[1]._M_header._M_color
        || (std::_Rb_tree_node_base::_Base_ptr)a5 >= v12[1]._M_header._M_parent
        && ((std::_Rb_tree_node_base::_Base_ptr)a5 != v12[1]._M_header._M_parent
         || v40 >= (__int64)v12[1]._M_header._M_left))) )
    {
      M_right = v12[1]._M_header._M_right;
      if ( M_right != (std::_Rb_tree_node_base::_Base_ptr)0x7FFFFFFFFFFFFFFFLL )
      {
        if ( M_right != (std::_Rb_tree_node_base::_Base_ptr)0x7FFFFFFFFFFFFFFELL )
          return (char *)M_right + (_QWORD)a2;
        return 0LL;
      }
    }
  }
  v44._M_impl._M_map_size = 8LL;
  v44._M_impl._M_map = (std::_Deque_base<luabind::detail::(anonymous namespace)::queue_entry,std::allocator<luabind::detail::(anonymous namespace)::queue_entry> >::_Map_pointer)operator new(0x40uLL);
  v13 = v44._M_impl._M_map + 3;
  v14 = (luabind::detail::`anonymous namespace'::queue_entry *)operator new(0x1F8uLL);
  *((_QWORD *)v44._M_impl._M_map + 3) = v14;
  v44._M_impl._M_finish._M_first = v14;
  v44._M_impl._M_finish._M_cur = v14;
  v44._M_impl._M_start._M_node = v13;
  v43.first.head = (boost::tuples::cons<long unsigned int,boost::tuples::cons<long unsigned int,boost::tuples::cons<long unsigned int,boost::tuples::cons<long int,boost::tuples::null_type> > > >::stored_head_type)a2;
  v44._M_impl._M_start._M_last = v14 + 21;
  v44._M_impl._M_finish._M_node = v13;
  v44._M_impl._M_finish._M_last = v14 + 21;
  v43.first.tail.head = a3;
  LODWORD(v43.first.tail.tail.head) = 0;
  *(__m128i *)&v44._M_impl._M_start._M_cur = _mm_unpacklo_epi64(
                                               (__m128i)(unsigned __int64)v14,
                                               (__m128i)(unsigned __int64)v14);
  std::deque<luabind::detail::`anonymous namespace'::queue_entry>::emplace_back<luabind::detail::`anonymous namespace'::queue_entry>(
    &v44,
    (luabind::detail::`anonymous namespace'::queue_entry *)&v43,
    v14 + 21);
  v16 = (char *)this->m_vertices._M_impl._M_finish - (char *)this->m_vertices._M_impl._M_start;
  memset(&v41, 0, sizeof(v41));
  v42 = 0LL;
  v17 = v16 >> 5;
  v18 = ((v16 & 0x7E0) != 0) + ((unsigned __int64)(v16 >> 5) >> 6);
  if ( v18 )
    std::vector<unsigned long>::_M_default_append(&v41, v18);
  v42 = v17;
  M_cur = v44._M_impl._M_start._M_cur;
  if ( v44._M_impl._M_start._M_cur == v44._M_impl._M_finish._M_cur )
  {
LABEL_40:
    v43.second.second = -1;
    v43.first.tail.tail.head = a5;
    *(__m128i *)&v43.first.head = _mm_unpacklo_epi64((__m128i)a3, (__m128i)(unsigned __int64)a4);
    v43.first.tail.tail.tail.head = v40;
    v43.second.first = 0x7FFFFFFFFFFFFFFELL;
    std::_Rb_tree<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>,std::_Select1st<std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>>,std::less<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>,std::allocator<std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>>>::_M_emplace_unique<std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long,int>>>(
      &this->m_cache.m_cache._M_t,
      &v43,
      v15);
    result = 0LL;
  }
  else
  {
    while ( 1 )
    {
      p = (__int64)M_cur->p;
      vertex_id = M_cur->vertex_id;
      distance = M_cur->distance;
      if ( M_cur == v44._M_impl._M_start._M_last - 1 )
      {
        operator delete(v44._M_impl._M_start._M_first);
        M_cur = (std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Elt_pointer)*((_QWORD *)v44._M_impl._M_start._M_node + 1);
        *(__m128i *)&v44._M_impl._M_start._M_cur = _mm_unpacklo_epi64(
                                                     (__m128i)(unsigned __int64)M_cur,
                                                     (__m128i)(unsigned __int64)M_cur);
        *(__m128i *)&v44._M_impl._M_start._M_last = _mm_unpacklo_epi64(
                                                      (__m128i)(unsigned __int64)&M_cur[21],
                                                      (__m128i)(unsigned __int64)(v44._M_impl._M_start._M_node + 1));
      }
      else
      {
        v44._M_impl._M_start._M_cur = ++M_cur;
      }
      M_start = v41._M_impl._M_start;
      v41._M_impl._M_start[vertex_id >> 6] |= 1LL << (vertex_id & 0x3F);
      v15 = (std::pair<boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long int,int> > *)&this->m_vertices._M_impl._M_start[vertex_id];
      if ( (std::_Rb_tree_node_base *)v15->first.head == a4 )
        break;
      head = v15->first.tail.head;
      v24 = v15->first.tail.tail.head;
      if ( head != v24 )
      {
        while ( 1 )
        {
          v15 = (std::pair<boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long int,int> > *)(*(_QWORD *)head >> 6);
          if ( ((1LL << (*(_BYTE *)head & 0x3F)) & M_start[(_QWORD)v15]) == 0 )
          {
            v25 = (*(__int64 (__fastcall **)(__int64))(head + 8))(p);
            if ( v25 )
            {
              v26 = *(luabind::detail::`anonymous namespace'::queue_entry **)head;
              v43.first.head = v25;
              v43.first.tail.head = (boost::tuples::cons<long unsigned int,boost::tuples::cons<long unsigned int,boost::tuples::cons<long int,boost::tuples::null_type> > >::stored_head_type)v26;
              LODWORD(v43.first.tail.tail.head) = distance + 1;
              std::deque<luabind::detail::`anonymous namespace'::queue_entry>::emplace_back<luabind::detail::`anonymous namespace'::queue_entry>(
                &v44,
                (luabind::detail::`anonymous namespace'::queue_entry *)&v43,
                v26);
            }
          }
          head += 16LL;
          if ( v24 == head )
            break;
          M_start = v41._M_impl._M_start;
        }
        M_cur = v44._M_impl._M_start._M_cur;
      }
      if ( v44._M_impl._M_finish._M_cur == M_cur )
        goto LABEL_40;
    }
    v43.first.tail.tail.head = a5;
    v43.second.second = distance;
    v43.first.tail.tail.tail.head = v40;
    v43.second.first = p - (_QWORD)a2;
    *(__m128i *)&v43.first.head = _mm_unpacklo_epi64((__m128i)a3, (__m128i)(unsigned __int64)a4);
    std::_Rb_tree<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>,std::_Select1st<std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>>,std::less<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>,std::allocator<std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>>>::_M_emplace_unique<std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long,int>>>(
      &this->m_cache.m_cache._M_t,
      &v43,
      v15);
    result = (_BYTE *)p;
  }
  v27 = v42 & 0x3F;
  if ( (v42 & 0x3F) != 0 )
  {
    if ( v41._M_impl._M_start == v41._M_impl._M_finish )
      __assert_fail(
        "size() > 0 && num_blocks() > 0",
        "../boost/../boost_1_70_0d/boost/dynamic_bitset/dynamic_bitset.hpp",
        0x7DAu,
        "const Block& boost::dynamic_bitset<Block, Allocator>::m_highest_block() const [with Block = long unsigned int; A"
        "llocator = std::allocator<long unsigned int>]");
    if ( ((-1LL << v27) & *(v41._M_impl._M_finish - 1)) != 0 )
      goto LABEL_44;
  }
  v28 = v41._M_impl._M_finish - v41._M_impl._M_start;
  if ( v28 > v41._M_impl._M_end_of_storage - v41._M_impl._M_start || v28 != (v27 != 0) + (v42 >> 6) )
LABEL_44:
    __assert_fail(
      "m_check_invariants()",
      "../boost/../boost_1_70_0d/boost/dynamic_bitset/dynamic_bitset.hpp",
      0x2B9u,
      "boost::dynamic_bitset<Block, Allocator>::~dynamic_bitset() [with Block = long unsigned int; Allocator = std::alloc"
      "ator<long unsigned int>]");
  if ( v41._M_impl._M_start )
  {
    v36 = (__int64)result;
    operator delete(v41._M_impl._M_start);
    result = (_BYTE *)v36;
  }
  M_map = v44._M_impl._M_map;
  if ( v44._M_impl._M_map )
  {
    v31 = v44._M_impl._M_finish._M_node + 1;
    M_node = v44._M_impl._M_start._M_node;
    if ( v44._M_impl._M_finish._M_node + 1 > v44._M_impl._M_start._M_node )
    {
      v33 = (__int64)result;
      do
      {
        v34 = *M_node++;
        operator delete(v34);
      }
      while ( v31 > M_node );
      M_map = v44._M_impl._M_map;
      result = (_BYTE *)v33;
    }
    v37 = (__int64)result;
    operator delete(M_map);
    return (_BYTE *)v37;
  }
  return result;
};

// Line 200: range 000000001530C4D0-000000001530CA93
void __fastcall luabind::detail::cast_graph::impl::insert(
        luabind::detail::cast_graph::impl *const this,
        luabind::detail::class_id src,
        luabind::detail::class_id target,
        luabind::detail::cast_function cast)
{
  luabind::detail::class_id v4; // r10
  std::_Vector_base<luabind::detail::(anonymous namespace)::vertex,std::allocator<luabind::detail::(anonymous namespace)::vertex> >::pointer M_finish; // rbx
  luabind::detail::`anonymous namespace'::vertex *M_start; // r9
  signed __int64 v10; // r14
  unsigned __int64 v11; // r15
  luabind::detail::`anonymous namespace'::vertex *v12; // r14
  char *v13; // r15
  _QWORD *p_target; // r8
  luabind::detail::class_id *v15; // rbx
  unsigned __int64 v16; // rsi
  __int64 j; // rax
  luabind::detail::class_id *v18; // rdx
  __int64 v19; // rdx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::_Rb_tree_node_base::_Base_ptr v21; // rdi
  __int64 v22; // rax
  signed __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r10
  luabind::detail::`anonymous namespace'::edge *v28; // r9
  luabind::detail::class_id *v29; // rdx
  unsigned __int64 v30; // rcx
  luabind::detail::class_id *v31; // rdx
  luabind::detail::class_id v32; // rdi
  luabind::detail::class_id v33; // rsi
  __int64 v34; // rcx
  char *v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned __int64 v38; // r10
  luabind::detail::`anonymous namespace'::vertex *M_end_of_storage; // r11
  __int64 v40; // r8
  __int128 v41; // xmm0
  signed __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // rcx
  luabind::detail::`anonymous namespace'::vertex *v46; // rax
  __int64 v47; // rcx
  char *v48; // rdx
  luabind::detail::`anonymous namespace'::vertex *v49; // rcx
  luabind::detail::`anonymous namespace'::vertex *v50; // rdx
  luabind::detail::class_id v51; // rdi
  __m128i v52; // xmm2
  luabind::detail::`anonymous namespace'::edge *v53; // rbx
  __int64 v54; // r11
  luabind::detail::`anonymous namespace'::vertex *v55; // rax
  std::_Vector_base<luabind::detail::(anonymous namespace)::vertex,std::allocator<luabind::detail::(anonymous namespace)::vertex> >::pointer v56; // rdi
  luabind::detail::`anonymous namespace'::vertex *v57; // rdx
  std::_Vector_base<luabind::detail::(anonymous namespace)::vertex,std::allocator<luabind::detail::(anonymous namespace)::vertex> >::pointer i; // rax
  luabind::detail::class_id id; // rcx
  __m128i v60; // xmm3
  unsigned __int64 v61; // [rsp+8h] [rbp-60h]
  luabind::detail::`anonymous namespace'::edge *v62; // [rsp+8h] [rbp-60h]
  unsigned __int64 v63; // [rsp+8h] [rbp-60h]
  unsigned __int64 v64; // [rsp+8h] [rbp-60h]
  __int64 v65; // [rsp+8h] [rbp-60h]
  unsigned __int64 v66; // [rsp+8h] [rbp-60h]
  std::_Vector_base<luabind::detail::(anonymous namespace)::edge,std::allocator<luabind::detail::(anonymous namespace)::edge> >::pointer v67; // [rsp+10h] [rbp-58h]
  void *v68; // [rsp+10h] [rbp-58h]
  void *v69; // [rsp+10h] [rbp-58h]
  luabind::detail::`anonymous namespace'::vertex *v70; // [rsp+10h] [rbp-58h]
  void *v71; // [rsp+10h] [rbp-58h]
  void *v72; // [rsp+10h] [rbp-58h]
  signed __int64 v73; // [rsp+18h] [rbp-50h]
  unsigned __int64 v74; // [rsp+18h] [rbp-50h]
  signed __int64 v75; // [rsp+18h] [rbp-50h]
  __int64 v76; // [rsp+18h] [rbp-50h]
  __int64 v77; // [rsp+18h] [rbp-50h]
  luabind::detail::`anonymous namespace'::vertex *v78; // [rsp+18h] [rbp-50h]
  luabind::detail::class_id srca; // [rsp+20h] [rbp-48h]
  luabind::detail::class_id srcb; // [rsp+20h] [rbp-48h]
  luabind::detail::class_id srcc; // [rsp+20h] [rbp-48h]

  v4 = src;
  M_finish = this->m_vertices._M_impl._M_finish;
  M_start = this->m_vertices._M_impl._M_start;
  if ( target >= src )
    v4 = target;
  v10 = (char *)M_finish - (char *)M_start;
  v11 = M_finish - M_start;
  if ( v11 <= v4 )
  {
    v38 = v4 + 1;
    if ( v38 > 0x3FFFFFFFFFFFFFFLL )
      std::__throw_length_error((const char *)&stru_1A1700D9.json_name_ + 7);
    M_end_of_storage = this->m_vertices._M_impl._M_end_of_storage;
    v40 = M_finish - M_start;
    if ( v38 > M_end_of_storage - M_start )
    {
      v54 = 32 * v38;
      if ( v38 )
      {
        v71 = (void *)v38;
        v65 = 32 * v38;
        v77 = M_finish - M_start;
        v55 = (luabind::detail::`anonymous namespace'::vertex *)operator new(32 * v38);
        M_finish = this->m_vertices._M_impl._M_finish;
        v56 = this->m_vertices._M_impl._M_start;
        v54 = v65;
        v38 = (unsigned __int64)v71;
        M_start = v55;
        v40 = v77;
      }
      else
      {
        v56 = this->m_vertices._M_impl._M_start;
        M_start = 0LL;
      }
      v57 = M_start;
      for ( i = v56; i != M_finish; v57[-1].edges._M_impl._M_end_of_storage = i[-1].edges._M_impl._M_end_of_storage )
      {
        id = i->id;
        v60 = _mm_loadu_si128((const __m128i *)&i->edges);
        ++i;
        ++v57;
        v57[-1].id = id;
        *(__m128i *)&v57[-1].edges._M_impl._M_start = v60;
      }
      if ( v56 )
      {
        srcc = v54;
        v78 = M_start;
        v72 = (void *)v40;
        v66 = v38;
        operator delete(v56);
        v54 = srcc;
        M_start = v78;
        v40 = (__int64)v72;
        v38 = v66;
      }
      M_finish = (luabind::detail::`anonymous namespace'::vertex *)((char *)M_start + v10);
      M_end_of_storage = (luabind::detail::`anonymous namespace'::vertex *)((char *)M_start + v54);
      this->m_vertices._M_impl._M_start = M_start;
      this->m_vertices._M_impl._M_finish = (luabind::detail::`anonymous namespace'::vertex *)((char *)M_start + v10);
      this->m_vertices._M_impl._M_end_of_storage = M_end_of_storage;
    }
    if ( v38 > v11 )
    {
      v41 = 0LL;
      while ( M_end_of_storage != M_finish )
      {
        M_finish->id = v40;
        ++M_finish;
        *(_OWORD *)&M_finish[-1].edges._M_impl._M_start = v41;
        M_finish[-1].edges._M_impl._M_end_of_storage = 0LL;
        this->m_vertices._M_impl._M_finish = M_finish;
LABEL_39:
        if ( v38 <= ++v40 )
          goto LABEL_4;
      }
      v42 = (char *)M_end_of_storage - (char *)M_start;
      v43 = M_end_of_storage - M_start;
      if ( v43 == 0x3FFFFFFFFFFFFFFLL )
        goto LABEL_76;
      if ( v43 )
      {
        v44 = 0x3FFFFFFFFFFFFFFLL;
        v45 = 2 * v43;
        if ( v43 <= 2 * v43 )
        {
          if ( !v45 )
          {
            v47 = 32LL;
            M_end_of_storage = 0LL;
            v46 = 0LL;
            goto LABEL_45;
          }
          if ( v45 > 0x3FFFFFFFFFFFFFFLL )
            v45 = 0x3FFFFFFFFFFFFFFLL;
          v44 = v45;
        }
      }
      else
      {
        v44 = 1LL;
      }
      srca = (luabind::detail::class_id)M_start;
      v75 = (char *)M_end_of_storage - (char *)M_start;
      v69 = (void *)v40;
      v63 = v38;
      v46 = (luabind::detail::`anonymous namespace'::vertex *)operator new(v44 * 32);
      v38 = v63;
      v40 = (__int64)v69;
      v41 = 0LL;
      v42 = v75;
      M_start = (luabind::detail::`anonymous namespace'::vertex *)srca;
      M_end_of_storage = &v46[v44];
      v47 = (__int64)&v46[1];
LABEL_45:
      v48 = (char *)v46 + v42;
      *(_QWORD *)v48 = v40;
      *((_QWORD *)v48 + 3) = 0LL;
      *(_OWORD *)(v48 + 8) = v41;
      if ( M_finish == M_start )
      {
        M_finish = (std::_Vector_base<luabind::detail::(anonymous namespace)::vertex,std::allocator<luabind::detail::(anonymous namespace)::vertex> >::pointer)v47;
      }
      else
      {
        v49 = v46;
        v50 = M_start;
        do
        {
          v51 = v50->id;
          v52 = _mm_loadu_si128((const __m128i *)&v50->edges);
          ++v50;
          ++v49;
          v49[-1].id = v51;
          *(__m128i *)&v49[-1].edges._M_impl._M_start = v52;
          v49[-1].edges._M_impl._M_end_of_storage = v50[-1].edges._M_impl._M_end_of_storage;
        }
        while ( v50 != M_finish );
        M_finish = (luabind::detail::`anonymous namespace'::vertex *)((char *)v46
                                                                    + (char *)M_finish
                                                                    - (char *)M_start
                                                                    + 32);
      }
      if ( M_start )
      {
        srcb = (luabind::detail::class_id)v46;
        v76 = v40;
        v70 = M_end_of_storage;
        v64 = v38;
        operator delete(M_start);
        v46 = (luabind::detail::`anonymous namespace'::vertex *)srcb;
        v41 = 0LL;
        v40 = v76;
        M_end_of_storage = v70;
        v38 = v64;
      }
      this->m_vertices._M_impl._M_end_of_storage = M_end_of_storage;
      M_start = v46;
      *(__m128i *)&this->m_vertices._M_impl._M_start = _mm_unpacklo_epi64(
                                                         (__m128i)(unsigned __int64)v46,
                                                         (__m128i)(unsigned __int64)M_finish);
      goto LABEL_39;
    }
  }
LABEL_4:
  v12 = &M_start[src];
  v13 = (char *)v12->edges._M_impl._M_finish;
  p_target = &v12->edges._M_impl._M_start->target;
  v15 = p_target;
  v16 = (v13 - (char *)p_target) >> 4;
  for ( j = v16; j > 0; j >>= 1 )
  {
    while ( 1 )
    {
      v18 = &v15[2 * (j >> 1)];
      if ( *v18 >= target )
        break;
      v15 = v18 + 2;
      j = j - (j >> 1) - 1;
      if ( j <= 0 )
        goto LABEL_8;
    }
  }
LABEL_8:
  if ( v15 != (luabind::detail::class_id *)v13 )
  {
    if ( *v15 == target )
      return;
    if ( v13 != (char *)v12->edges._M_impl._M_end_of_storage )
    {
      v19 = *((_QWORD *)v13 - 2);
      *((_QWORD *)v13 + 1) = *((_QWORD *)v13 - 1);
      *(_QWORD *)v13 = v19;
      v12->edges._M_impl._M_finish = (std::_Vector_base<luabind::detail::(anonymous namespace)::edge,std::allocator<luabind::detail::(anonymous namespace)::edge> >::pointer)(v13 + 16);
      if ( v15 != (luabind::detail::class_id *)(v13 - 16) )
        memmove(v15 + 2, v15, v13 - 16 - (char *)v15);
      *v15 = target;
      v15[1] = (luabind::detail::class_id)cast;
      goto LABEL_14;
    }
LABEL_19:
    v22 = 0x7FFFFFFFFFFFFFFLL;
    v23 = (char *)v15 - (char *)p_target;
    if ( v16 == 0x7FFFFFFFFFFFFFFLL )
LABEL_76:
      std::__throw_length_error("vector::_M_realloc_insert");
    if ( v16 )
    {
      v24 = 0x7FFFFFFFFFFFFFF0LL;
      v25 = 2 * v16;
      if ( v16 <= 2 * v16 )
      {
        if ( !v25 )
        {
          v27 = 16LL;
          v28 = 0LL;
          v26 = 0LL;
          goto LABEL_23;
        }
        if ( v25 <= 0x7FFFFFFFFFFFFFFLL )
          v22 = 2 * v16;
        v24 = 16 * v22;
      }
    }
    else
    {
      v24 = 16LL;
    }
    v73 = (char *)v15 - (char *)p_target;
    v67 = v12->edges._M_impl._M_start;
    v61 = v24;
    v26 = operator new(v24);
    p_target = &v67->target;
    v23 = v73;
    v27 = v26 + 16;
    v28 = (luabind::detail::`anonymous namespace'::edge *)(v26 + v61);
LABEL_23:
    v29 = (luabind::detail::class_id *)(v26 + v23);
    *v29 = target;
    v29[1] = (luabind::detail::class_id)cast;
    if ( v15 != p_target )
    {
      v30 = v26;
      v31 = p_target;
      do
      {
        v32 = *v31;
        v33 = v31[1];
        v31 += 2;
        v30 += 16LL;
        *(_QWORD *)(v30 - 16) = v32;
        *(_QWORD *)(v30 - 8) = v33;
      }
      while ( v15 != v31 );
      v27 = v26 + (char *)v15 - (char *)p_target + 16;
    }
    if ( v15 != (luabind::detail::class_id *)v13 )
    {
      v34 = v27;
      v35 = (char *)v15;
      do
      {
        v36 = *(_QWORD *)v35;
        v37 = *((_QWORD *)v35 + 1);
        v35 += 16;
        v34 += 16LL;
        *(_QWORD *)(v34 - 16) = v36;
        *(_QWORD *)(v34 - 8) = v37;
      }
      while ( v13 != v35 );
      v27 += v13 - (char *)v15;
    }
    if ( p_target )
    {
      v74 = v26;
      v68 = (void *)v27;
      v62 = v28;
      operator delete(p_target);
      v26 = v74;
      v27 = (__int64)v68;
      v28 = v62;
    }
    v12->edges._M_impl._M_end_of_storage = v28;
    *(__m128i *)&v12->edges._M_impl._M_start = _mm_unpacklo_epi64((__m128i)v26, (__m128i)(unsigned __int64)v27);
    goto LABEL_14;
  }
  if ( v15 == (luabind::detail::class_id *)v12->edges._M_impl._M_end_of_storage )
    goto LABEL_19;
  *v15 = target;
  v53 = (luabind::detail::`anonymous namespace'::edge *)(v15 + 2);
  v53[-1].cast = cast;
  v12->edges._M_impl._M_finish = v53;
LABEL_14:
  M_parent = this->m_cache.m_cache._M_t._M_impl._M_header._M_parent;
  while ( M_parent )
  {
    std::_Rb_tree<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>,std::_Select1st<std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>>,std::less<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>,std::allocator<std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>>>::_M_erase(
      &this->m_cache.m_cache._M_t,
      (std::_Rb_tree<boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<const boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long int,int> >,std::_Select1st<std::pair<const boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long int,int> > >,std::less<boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,std::allocator<std::pair<const boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long int,int> > > >::_Link_type)M_parent->_M_right);
    v21 = M_parent;
    M_parent = M_parent->_M_left;
    operator delete(v21);
  }
  this->m_cache.m_cache._M_t._M_impl._M_header._M_parent = 0LL;
  this->m_cache.m_cache._M_t._M_impl._M_header._M_left = &this->m_cache.m_cache._M_t._M_impl._M_header;
  this->m_cache.m_cache._M_t._M_impl._M_header._M_right = &this->m_cache.m_cache._M_t._M_impl._M_header;
  this->m_cache.m_cache._M_t._M_impl._M_node_count = 0LL;
};

// Line 227: range 000000001530D180-000000001530D18E
std::pair<void*,int> __fastcall luabind::detail::cast_graph::cast(
        const luabind::detail::cast_graph *const this,
        void *p,
        luabind::detail::class_id src,
        luabind::detail::class_id target,
        luabind::detail::class_id dynamic_id,
        const void *dynamic_ptr)
{
  luabind::detail::cast_graph::impl *px; // rdi
  std::pair<void*,int> result; // 0:rax.12

  px = this->m_impl.px;
  if ( !px )
    boost::scoped_ptr<luabind::detail::cast_graph::impl>::operator->(0LL);
  result.first = luabind::detail::cast_graph::impl::cast(
                   px,
                   p,
                   src,
                   (std::_Rb_tree_node_base *)target,
                   dynamic_id,
                   dynamic_ptr);
  return result;
};

// Line 232: range 000000001530CAA0-000000001530CAAE
void __fastcall luabind::detail::cast_graph::insert(
        luabind::detail::cast_graph *const this,
        luabind::detail::class_id src,
        luabind::detail::class_id target,
        luabind::detail::cast_function cast)
{
  luabind::detail::cast_graph::impl *px; // rdi

  px = this->m_impl.px;
  if ( !px )
    boost::scoped_ptr<luabind::detail::cast_graph::impl>::operator->(0LL);
  luabind::detail::cast_graph::impl::insert(px, src, target, cast);
};

// Line 235: range 000000001530C3D0-000000001530C414
void __fastcall luabind::detail::cast_graph::cast_graph(luabind::detail::cast_graph *const this)
{
  __int64 v1; // rax

  v1 = operator new(0x48uLL);
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_DWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 40) = 0LL;
  *(_QWORD *)(v1 + 48) = v1 + 32;
  *(_QWORD *)(v1 + 56) = v1 + 32;
  *(_QWORD *)(v1 + 64) = 0LL;
  this->m_impl.px = (luabind::detail::cast_graph::impl *)v1;
  *(_OWORD *)v1 = 0LL;
};

// Line 239: range 000000001530C420-000000001530C4C4
void __fastcall luabind::detail::cast_graph::~cast_graph(luabind::detail::cast_graph *const this)
{
  luabind::detail::cast_graph::impl *px; // r12
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbp
  std::_Rb_tree_node_base::_Base_ptr v3; // rdi
  std::_Vector_base<luabind::detail::(anonymous namespace)::vertex,std::allocator<luabind::detail::(anonymous namespace)::vertex> >::pointer M_finish; // rbx
  _QWORD *p_id; // rbp
  void *v6; // rdi

  px = this->m_impl.px;
  if ( this->m_impl.px )
  {
    M_parent = px->m_cache.m_cache._M_t._M_impl._M_header._M_parent;
    while ( M_parent )
    {
      std::_Rb_tree<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>,std::_Select1st<std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>>,std::less<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>,std::allocator<std::pair<boost::tuples::tuple<unsigned long,unsigned long,unsigned long,long,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const,std::pair<long,int>>>>::_M_erase(
        &px->m_cache.m_cache._M_t,
        (std::_Rb_tree<boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<const boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long int,int> >,std::_Select1st<std::pair<const boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long int,int> > >,std::less<boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,std::allocator<std::pair<const boost::tuples::tuple<long unsigned int,long unsigned int,long unsigned int,long int,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::pair<long int,int> > > >::_Link_type)M_parent->_M_right);
      v3 = M_parent;
      M_parent = M_parent->_M_left;
      operator delete(v3);
    }
    M_finish = px->m_vertices._M_impl._M_finish;
    p_id = &px->m_vertices._M_impl._M_start->id;
    if ( M_finish != px->m_vertices._M_impl._M_start )
    {
      do
      {
        while ( 1 )
        {
          v6 = (void *)p_id[1];
          if ( !v6 )
            break;
          operator delete(v6);
          p_id += 4;
          if ( M_finish == (std::_Vector_base<luabind::detail::(anonymous namespace)::vertex,std::allocator<luabind::detail::(anonymous namespace)::vertex> >::pointer)p_id )
          {
            p_id = &px->m_vertices._M_impl._M_start->id;
            goto LABEL_8;
          }
        }
        p_id += 4;
      }
      while ( M_finish != (std::_Vector_base<luabind::detail::(anonymous namespace)::vertex,std::allocator<luabind::detail::(anonymous namespace)::vertex> >::pointer)p_id );
      p_id = &px->m_vertices._M_impl._M_start->id;
    }
LABEL_8:
    if ( p_id )
      operator delete(p_id);
    operator delete(px, 0x48uLL);
  }
};

// Line 243: range 000000001530CAC0-000000001530CB7B
luabind::detail::class_id __fastcall luabind::detail::allocate_class_id(const luabind::type_id *cls)
{
  std::pair<luabind::type_id,long unsigned int> *v1; // rdx
  std::pair<std::_Rb_tree_iterator<std::pair<const luabind::type_id,long unsigned int> >,bool> v2; // rax
  std::pair<luabind::type_id,long unsigned int> v4; // [rsp+0h] [rbp-18h] BYREF

  if ( !(_BYTE)`guard variable for'luabind::detail::allocate_class_id(luabind::type_id const&)::registered
    && __cxa_guard_acquire(&`guard variable for'luabind::detail::allocate_class_id(luabind::type_id const&)::registered) )
  {
    luabind::detail::allocate_class_id(luabind::type_id const&)::registered._M_t._M_impl._M_header._M_color = _S_red;
    luabind::detail::allocate_class_id(luabind::type_id const&)::registered._M_t._M_impl._M_header._M_parent = 0LL;
    luabind::detail::allocate_class_id(luabind::type_id const&)::registered._M_t._M_impl._M_header._M_left = &luabind::detail::allocate_class_id(luabind::type_id const&)::registered._M_t._M_impl._M_header;
    luabind::detail::allocate_class_id(luabind::type_id const&)::registered._M_t._M_impl._M_header._M_right = &luabind::detail::allocate_class_id(luabind::type_id const&)::registered._M_t._M_impl._M_header;
    luabind::detail::allocate_class_id(luabind::type_id const&)::registered._M_t._M_impl._M_node_count = 0LL;
    __cxa_guard_release(&`guard variable for'luabind::detail::allocate_class_id(luabind::type_id const&)::registered);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<luabind::type_id,unsigned long>::~map,
      &luabind::detail::allocate_class_id(luabind::type_id const&)::registered,
      &_dso_handle);
  }
  v4.first = (luabind::type_id)cls->id;
  v4.second = luabind::detail::allocate_class_id(luabind::type_id const&)::id;
  v2 = std::_Rb_tree<luabind::type_id,std::pair<luabind::type_id const,unsigned long>,std::_Select1st<std::pair<luabind::type_id const,unsigned long>>,std::less<luabind::type_id>,std::allocator<std::pair<luabind::type_id const,unsigned long>>>::_M_emplace_unique<std::pair<luabind::type_id,unsigned long>>(
         &luabind::detail::allocate_class_id(luabind::type_id const&)::registered._M_t,
         &v4,
         v1);
  if ( v2.second )
    ++luabind::detail::allocate_class_id(luabind::type_id const&)::id;
  return (luabind::detail::class_id)v2.first._M_node[1]._M_parent;
};
