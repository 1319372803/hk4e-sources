// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/deque.tcc

// Line 162: range 000000000F87A34E-000000000F87A479
std::deque<Coordinate>::reference __fastcall std::deque<Coordinate>::emplace_back<Coordinate>(
        std::deque<Coordinate> *const this,
        Coordinate *a2,
        Coordinate *__args_0)
{
  Coordinate *M_cur; // rcx
  Coordinate *v4; // rsi
  Coordinate *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  if ( M_cur == this->_M_impl._M_finish._M_last - 1 )
  {
    v5 = std::forward<Coordinate>(a2);
    std::deque<Coordinate>::_M_push_back_aux<Coordinate>(this, v5, v5);
  }
  else
  {
    v4 = std::forward<Coordinate>(a2);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    std::allocator_traits<std::allocator<Coordinate>>::construct<Coordinate,Coordinate>(
      (std::allocator_traits<std::allocator<Coordinate> >::allocator_type *)this,
      this->_M_impl._M_finish._M_cur,
      v4,
      this->_M_impl._M_finish._M_cur);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    ++this->_M_impl._M_finish._M_cur;
  }
  return std::deque<Coordinate>::back(this);
};

// Line 162: range 000000000F7F39F8-000000000F7F3B23
std::deque<LuaIndexCheckerContext>::reference __fastcall std::deque<LuaIndexCheckerContext>::emplace_back<std::set<std::string> &>(
        std::deque<LuaIndexCheckerContext> *const this,
        std::set<std::string> *a2,
        std::set<std::string> *__args_0)
{
  LuaIndexCheckerContext *M_cur; // rcx
  std::set<std::string> *v4; // rsi
  std::set<std::string> *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  if ( M_cur == this->_M_impl._M_finish._M_last - 1 )
  {
    v5 = std::forward<std::set<std::string> &>(a2);
    std::deque<LuaIndexCheckerContext>::_M_push_back_aux<std::set<std::string> &>(this, v5, v5);
  }
  else
  {
    v4 = std::forward<std::set<std::string> &>(a2);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    std::allocator_traits<std::allocator<LuaIndexCheckerContext>>::construct<LuaIndexCheckerContext,std::set<std::string> &>(
      (std::allocator_traits<std::allocator<LuaIndexCheckerContext> >::allocator_type *)this,
      this->_M_impl._M_finish._M_cur,
      v4,
      (std::set<std::string> *)this->_M_impl._M_finish._M_cur);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    ++this->_M_impl._M_finish._M_cur;
  }
  return std::deque<LuaIndexCheckerContext>::back(this);
};

// Line 162: range 000000000D429AE8-000000000D429C13
std::deque<std::__detail::_StateSeq<std::regex_traits<char> >>::reference __fastcall std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
        std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *const this,
        std::__detail::_StateSeq<std::regex_traits<char> > *a2,
        std::__detail::_StateSeq<std::regex_traits<char> > *__args_0)
{
  std::__detail::_StateSeq<std::regex_traits<char> > *M_cur; // rcx
  std::__detail::_StateSeq<std::regex_traits<char> > *v4; // rsi
  std::__detail::_StateSeq<std::regex_traits<char> > *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  if ( M_cur == this->_M_impl._M_finish._M_last - 1 )
  {
    v5 = std::forward<std::__detail::_StateSeq<std::regex_traits<char>>>(a2);
    std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_push_back_aux<std::__detail::_StateSeq<std::regex_traits<char>>>(
      this,
      v5,
      v5);
  }
  else
  {
    v4 = std::forward<std::__detail::_StateSeq<std::regex_traits<char>>>(a2);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    std::allocator_traits<std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::construct<std::__detail::_StateSeq<std::regex_traits<char>>,std::__detail::_StateSeq<std::regex_traits<char>>>(
      (std::allocator_traits<std::allocator<std::__detail::_StateSeq<std::regex_traits<char> > > >::allocator_type *)this,
      this->_M_impl._M_finish._M_cur,
      v4,
      this->_M_impl._M_finish._M_cur);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    ++this->_M_impl._M_finish._M_cur;
  }
  return std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::back(this);
};

// Line 162: range 000000000F889A00-000000000F889B2B
std::deque<std::any>::reference __fastcall std::deque<std::any>::emplace_back<std::any>(
        std::deque<std::any> *const this,
        std::any *a2,
        std::any *__args_0)
{
  std::any *M_cur; // rcx
  std::any *v4; // rsi
  std::any *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  if ( M_cur == this->_M_impl._M_finish._M_last - 1 )
  {
    v5 = std::forward<std::any>(a2);
    std::deque<std::any>::_M_push_back_aux<std::any>(this, v5, v5);
  }
  else
  {
    v4 = std::forward<std::any>(a2);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    std::allocator_traits<std::allocator<std::any>>::construct<std::any,std::any>(
      (std::allocator_traits<std::allocator<std::any> >::allocator_type *)this,
      this->_M_impl._M_finish._M_cur,
      v4,
      this->_M_impl._M_finish._M_cur);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    ++this->_M_impl._M_finish._M_cur;
  }
  return std::deque<std::any>::back(this);
};

// Line 162: range 000000000F8BD690-000000000F8BD7BB
std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::reference __fastcall std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::emplace_back<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(
        std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *const this,
        std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *a2,
        std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *__args_0)
{
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *M_cur; // rcx
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *v4; // rsi
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  if ( M_cur == this->_M_impl._M_finish._M_last - 1 )
  {
    v5 = std::forward<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(a2);
    std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_push_back_aux<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(
      this,
      v5,
      v5);
  }
  else
  {
    v4 = std::forward<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(a2);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    std::allocator_traits<std::allocator<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>>::construct<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(
      (std::allocator_traits<std::allocator<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > > >::allocator_type *)this,
      this->_M_impl._M_finish._M_cur,
      v4,
      this->_M_impl._M_finish._M_cur);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    ++this->_M_impl._M_finish._M_cur;
  }
  return std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::back(this);
};

// Line 162: range 000000000F8BE674-000000000F8BE79F
std::deque<std::set<std::string>>::reference __fastcall std::deque<std::set<std::string>>::emplace_back<std::set<std::string>>(
        std::deque<std::set<std::string>> *const this,
        std::set<std::string> *a2,
        std::set<std::string> *__args_0)
{
  std::set<std::string> *M_cur; // rcx
  std::set<std::string> *v4; // rsi
  std::set<std::string> *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  if ( M_cur == this->_M_impl._M_finish._M_last - 1 )
  {
    v5 = std::forward<std::set<std::string>>(a2);
    std::deque<std::set<std::string>>::_M_push_back_aux<std::set<std::string>>(this, v5, v5);
  }
  else
  {
    v4 = std::forward<std::set<std::string>>(a2);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    std::allocator_traits<std::allocator<std::set<std::string>>>::construct<std::set<std::string>,std::set<std::string>>(
      (std::allocator_traits<std::allocator<std::set<std::string> > >::allocator_type *)this,
      this->_M_impl._M_finish._M_cur,
      v4,
      this->_M_impl._M_finish._M_cur);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish);
    ++this->_M_impl._M_finish._M_cur;
  }
  return std::deque<std::set<std::string>>::back(this);
};

// Line 162: range 0000000014ED8A6A-0000000014ED8CD0
std::deque<std::string>::reference __fastcall std::deque<std::string>::emplace_back<std::string&>(
        std::deque<std::string> *const this,
        std::string *a2,
        std::string *__args_0,
        std::forward_iterator_tag a4)
{
  unsigned __int64 v6; // r14
  std::string *M_cur; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer *p_M_last; // rax
  unsigned __int64 v9; // rdx
  char *M_p; // rsi
  std::string::size_type *p_M_string_length; // rax
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_first; // rcx
  std::deque<std::string>::reference result; // rax
  __int64 vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer anonymous0; // [rsp+20h] [rbp+20h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer anonymous1; // [rsp+28h] [rbp+28h]
  __m128i anonymous2; // [rsp+30h] [rbp+30h]

  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_1(96LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 32 32 5 __tmp";
  vars0[2] = (__int64)std::deque<std::string>::emplace_back<std::string&>;
  v6 = (unsigned __int64)vars0 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    p_M_last = (std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer *)__asan_report_load8(&this->_M_impl._M_finish);
    goto LABEL_15;
  }
  M_cur = this->_M_impl._M_finish._M_cur;
  p_M_last = &this->_M_impl._M_finish._M_last;
  v9 = (unsigned __int64)&this->_M_impl._M_finish._M_last >> 3;
  if ( *(_BYTE *)(v9 + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(p_M_last);
LABEL_16:
    __asan_report_store8();
    goto LABEL_17;
  }
  if ( M_cur == this->_M_impl._M_finish._M_last - 1 )
  {
LABEL_19:
    std::deque<std::string>::_M_push_back_aux<std::string&>(this, a2, (std::string *)v9);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  M_cur->_M_dataplus._M_p = M_cur->_anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    p_M_string_length = (std::string::size_type *)__asan_report_load8(a2);
    goto LABEL_18;
  }
  M_p = a2->_M_dataplus._M_p;
  p_M_string_length = &a2->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_M_string_length);
    goto LABEL_19;
  }
  std::string::_M_construct<char *>(M_cur, M_p, &M_p[a2->_M_string_length], a4);
  ++this->_M_impl._M_finish._M_cur;
LABEL_10:
  if ( *(_BYTE *)((((unsigned __int64)&this->_M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->_M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 79) & 7)
    || *(char *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load_n(&this->_M_impl._M_finish, 32LL);
  }
  else
  {
    M_first = this->_M_impl._M_finish._M_first;
    anonymous0 = this->_M_impl._M_finish._M_cur;
    anonymous1 = M_first;
    anonymous2 = _mm_loadu_si128((const __m128i *)&this->_M_impl._M_finish._M_last);
    if ( M_first != anonymous0 )
    {
LABEL_13:
      result = anonymous0 - 1;
      *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8008) = 0;
      return result;
    }
  }
  if ( !*(_BYTE *)(((unsigned __int64)(anonymous2.m128i_i64[1] - 8) >> 3) + 0x7FFF8000) )
  {
    anonymous0 = (std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer)(*(_QWORD *)(anonymous2.m128i_i64[1] - 8)
                                                                                           + 512LL);
    goto LABEL_13;
  }
  result = (std::deque<std::string>::reference)__asan_report_load8(anonymous2.m128i_i64[1] - 8);
  vars0[0] = 1172321806LL;
  *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8008) = -168430091;
  return result;
};

// Line 162: range 0000000014E27AD0-0000000014E27D16
void __fastcall std::deque<luabind::detail::`anonymous namespace'::queue_entry>::emplace_back<luabind::detail::`anonymous namespace'::queue_entry>(
        std::deque<luabind::detail::(anonymous namespace)::queue_entry,std::allocator<luabind::detail::(anonymous namespace)::queue_entry> > *const this,
        const __m128i *a2,
        luabind::detail::`anonymous namespace'::queue_entry *__args_0)
{
  luabind::detail::`anonymous namespace'::queue_entry *M_cur; // rax
  luabind::detail::`anonymous namespace'::queue_entry *v5; // rax
  std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Map_pointer M_node; // r13
  std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Map_pointer v7; // rsi
  signed __int64 v8; // r12
  __int64 v9; // rcx
  std::size_t M_map_size; // rdx
  __m128i *v11; // rax
  std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Map_pointer v12; // rdx
  luabind::detail::`anonymous namespace'::queue_entry *v13; // rax
  __int64 v14; // r14
  std::size_t v15; // rax
  std::size_t v16; // r13
  luabind::detail::`anonymous namespace'::queue_entry **v17; // rax
  std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Map_pointer v18; // rsi
  luabind::detail::`anonymous namespace'::queue_entry **v19; // r15
  __m128i *v20; // r14
  std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Map_pointer v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  luabind::detail::`anonymous namespace'::queue_entry *v24; // rax
  luabind::detail::`anonymous namespace'::queue_entry **v25; // r13
  size_t v26; // rdx

  M_cur = this->_M_impl._M_finish._M_cur;
  if ( M_cur == this->_M_impl._M_finish._M_last - 1 )
  {
    M_node = this->_M_impl._M_finish._M_node;
    v7 = this->_M_impl._M_start._M_node;
    v8 = (char *)M_node - (char *)v7;
    v9 = M_node - v7;
    if ( 0xAAAAAAAAAAAAAAABLL * (((char *)M_cur - (char *)this->_M_impl._M_finish._M_first) >> 3)
       + 21 * (v9 - 1)
       - 0x5555555555555555LL * (((char *)this->_M_impl._M_start._M_last - (char *)this->_M_impl._M_start._M_cur) >> 3) == 0x555555555555555LL )
      std::__throw_length_error("cannot create std::deque larger than max_size()");
    M_map_size = this->_M_impl._M_map_size;
    if ( M_map_size - (M_node - this->_M_impl._M_map) <= 1 )
    {
      v14 = v9 + 2;
      if ( M_map_size > 2 * (v9 + 2) )
      {
        v25 = M_node + 1;
        v20 = (__m128i *)&this->_M_impl._M_map[(M_map_size - v14) >> 1];
        v26 = (char *)v25 - (char *)v7;
        if ( v7 <= (std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Map_pointer)v20 )
        {
          if ( v7 != v25 )
            memmove(&v20->m128i_i8[v8 + 8 - v26], v7, v26);
        }
        else if ( v7 != v25 )
        {
          memmove(v20, v7, v26);
        }
      }
      else
      {
        v15 = 1LL;
        if ( M_map_size )
          v15 = this->_M_impl._M_map_size;
        v16 = M_map_size + v15 + 2;
        if ( v16 > 0xFFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v17 = (luabind::detail::`anonymous namespace'::queue_entry **)operator new(8 * v16);
        v18 = this->_M_impl._M_start._M_node;
        v19 = v17;
        v20 = (__m128i *)&v17[(v16 - v14) >> 1];
        v21 = this->_M_impl._M_finish._M_node + 1;
        if ( v21 != v18 )
          memmove(v20, v18, (char *)v21 - (char *)v18);
        operator delete(this->_M_impl._M_map);
        this->_M_impl._M_map = v19;
        this->_M_impl._M_map_size = v16;
      }
      v22 = v20->m128i_i64[0];
      v23 = _mm_loadl_epi64(v20);
      M_node = (std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Map_pointer)((char *)v20->m128i_i64 + v8);
      this->_M_impl._M_start._M_node = (std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Map_pointer)v20;
      this->_M_impl._M_finish._M_node = (std::_Deque_iterator<luabind::detail::(anonymous namespace)::queue_entry,luabind::detail::(anonymous namespace)::queue_entry&,luabind::detail::(anonymous namespace)::queue_entry*>::_Map_pointer)((char *)v20->m128i_i64 + v8);
      *(__m128i *)&this->_M_impl._M_start._M_first = _mm_unpacklo_epi64(v23, (__m128i)(unsigned __int64)(v22 + 504));
      v24 = *(luabind::detail::`anonymous namespace'::queue_entry **)((char *)v20->m128i_i64 + v8);
      this->_M_impl._M_finish._M_first = v24;
      this->_M_impl._M_finish._M_last = v24 + 21;
    }
    M_node[1] = (luabind::detail::`anonymous namespace'::queue_entry *)operator new(0x1F8uLL);
    v11 = (__m128i *)this->_M_impl._M_finish._M_cur;
    *v11 = _mm_load_si128(a2);
    v11[1].m128i_i64[0] = a2[1].m128i_i64[0];
    v12 = this->_M_impl._M_finish._M_node;
    v13 = v12[1];
    *(__m128i *)&this->_M_impl._M_finish._M_cur = _mm_unpacklo_epi64(
                                                    (__m128i)(unsigned __int64)v13,
                                                    (__m128i)(unsigned __int64)v13);
    *(__m128i *)&this->_M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                     (__m128i)(unsigned __int64)&v13[21],
                                                     (__m128i)(unsigned __int64)(v12 + 1));
  }
  else
  {
    v5 = M_cur + 1;
    *(__m128i *)&v5[-1].p = _mm_load_si128(a2);
    *(_QWORD *)&v5[-1].distance = a2[1].m128i_i64[0];
    this->_M_impl._M_finish._M_cur = v5;
  }
};

// Line 162: range 000000000C7EF3C0-000000000C7EF658
void __fastcall std::deque<std::string>::emplace_back<std::string>(
        std::deque<std::string>_0 *const this,
        std::string *a2,
        std::string *__args_0)
{
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer_0 M_cur; // rax
  std::string::size_type v6; // rcx
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0 M_node; // r13
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0 v8; // rsi
  signed __int64 v9; // r12
  __int64 v10; // rcx
  std::size_t M_map_size; // rdx
  std::_Deque_base<std::string>::_Map_pointer_0 M_map; // rdi
  __m128i *v13; // rax
  std::string::size_type M_string_length; // rcx
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0 v15; // rdx
  std::string *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  std::size_t v19; // r13
  std::string **v20; // rax
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0 v21; // rsi
  std::string **v22; // r15
  _QWORD *v23; // r14
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0 v24; // rdx
  std::string *v25; // rax
  std::string *v26; // rax
  std::string **v27; // r13
  size_t v28; // rdx

  M_cur = this->_M_impl._M_finish._M_cur;
  if ( M_cur == this->_M_impl._M_finish._M_last - 1 )
  {
    M_node = this->_M_impl._M_finish._M_node;
    v8 = this->_M_impl._M_start._M_node;
    v9 = (char *)M_node - (char *)v8;
    v10 = M_node - v8;
    if ( M_cur
       - this->_M_impl._M_finish._M_first
       + 16 * (v10 - 1)
       + this->_M_impl._M_start._M_last
       - this->_M_impl._M_start._M_cur == 0x3FFFFFFFFFFFFFFLL )
      std::__throw_length_error("cannot create std::deque larger than max_size()");
    M_map_size = this->_M_impl._M_map_size;
    M_map = this->_M_impl._M_map;
    if ( M_map_size - (M_node - M_map) <= 1 )
    {
      v17 = v10 + 2;
      if ( M_map_size > 2 * (v10 + 2) )
      {
        v27 = M_node + 1;
        v23 = &M_map[(M_map_size - v17) >> 1];
        v28 = (char *)v27 - (char *)v8;
        if ( v8 <= v23 )
        {
          if ( v8 != v27 )
            memmove((char *)v23 + v9 + 8 - v28, v8, v28);
        }
        else if ( v8 != v27 )
        {
          memmove(v23, v8, v28);
        }
      }
      else
      {
        v18 = 1LL;
        if ( M_map_size )
          v18 = M_map_size;
        v19 = M_map_size + v18 + 2;
        if ( v19 > 0xFFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v20 = (std::string **)operator new(8 * v19);
        v21 = this->_M_impl._M_start._M_node;
        v22 = v20;
        v23 = &v20[(v19 - v17) >> 1];
        v24 = this->_M_impl._M_finish._M_node + 1;
        if ( v24 != v21 )
          memmove(v23, v21, (char *)v24 - (char *)v21);
        operator delete(this->_M_impl._M_map);
        this->_M_impl._M_map = v22;
        this->_M_impl._M_map_size = v19;
      }
      v25 = (std::string *)*v23;
      M_node = (std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0)((char *)v23 + v9);
      this->_M_impl._M_start._M_node = (std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0)v23;
      this->_M_impl._M_finish._M_node = (std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0)((char *)v23 + v9);
      this->_M_impl._M_start._M_first = v25;
      this->_M_impl._M_start._M_last = v25 + 16;
      v26 = *(std::string **)((char *)v23 + v9);
      this->_M_impl._M_finish._M_first = v26;
      this->_M_impl._M_finish._M_last = v26 + 16;
    }
    M_node[1] = (std::string *)operator new(0x200uLL);
    v13 = (__m128i *)this->_M_impl._M_finish._M_cur;
    v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a2->_M_dataplus._M_p == &a2->_anon_0 )
    {
      v13[1] = _mm_loadu_si128((const __m128i *)&a2->_anon_0);
    }
    else
    {
      v13->m128i_i64[0] = (__int64)a2->_M_dataplus._M_p;
      v13[1].m128i_i64[0] = a2->_anon_0._M_allocated_capacity;
    }
    M_string_length = a2->_M_string_length;
    a2->_M_dataplus._M_p = a2->_anon_0._M_local_buf;
    a2->_M_string_length = 0LL;
    v13->m128i_i64[1] = M_string_length;
    a2->_anon_0._M_local_buf[0] = 0;
    v15 = this->_M_impl._M_finish._M_node + 1;
    v16 = *v15;
    this->_M_impl._M_finish._M_node = v15;
    this->_M_impl._M_finish._M_first = v16;
    this->_M_impl._M_finish._M_last = v16 + 16;
    this->_M_impl._M_finish._M_cur = v16;
  }
  else
  {
    M_cur->_M_dataplus._M_p = M_cur->_anon_0._M_local_buf;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a2->_M_dataplus._M_p == &a2->_anon_0 )
    {
      M_cur->_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)&a2->_anon_0);
    }
    else
    {
      M_cur->_M_dataplus._M_p = a2->_M_dataplus._M_p;
      M_cur->_anon_0._M_allocated_capacity = a2->_anon_0._M_allocated_capacity;
    }
    v6 = a2->_M_string_length;
    a2->_M_dataplus._M_p = a2->_anon_0._M_local_buf;
    a2->_M_string_length = 0LL;
    M_cur->_M_string_length = v6;
    a2->_anon_0._M_local_buf[0] = 0;
    ++this->_M_impl._M_finish._M_cur;
  }
};

// Line 348: range 0000000014DFCC80-0000000014DFCDAD
void __fastcall std::deque<Json::OurReader::ErrorInfo>::_M_default_append(
        std::deque<Json::OurReader::ErrorInfo> *const this,
        std::deque<Json::OurReader::ErrorInfo>::size_type __n)
{
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_last; // rsi
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_cur; // rax
  unsigned __int64 v6; // rdx
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_first; // rdi
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer M_node; // rcx
  signed __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v12; // r9
  Json::OurReader::ErrorInfo *v13; // rdx
  __m128i v14; // xmm1
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer *v15; // rcx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r8

  M_last = this->_M_impl._M_finish._M_last;
  M_cur = this->_M_impl._M_finish._M_cur;
  v6 = M_last - M_cur - 1;
  if ( __n > v6 )
  {
    std::deque<Json::OurReader::ErrorInfo>::_M_new_elements_at_back(this, __n - v6);
    M_cur = this->_M_impl._M_finish._M_cur;
    M_last = this->_M_impl._M_finish._M_last;
  }
  M_first = this->_M_impl._M_finish._M_first;
  M_node = this->_M_impl._M_finish._M_node;
  v9 = __n + M_cur - M_first;
  if ( v9 < 0 )
  {
    v10 = ~((unsigned __int64)~v9 >> 3);
  }
  else
  {
    if ( v9 <= 7 )
    {
      v12 = this->_M_impl._M_finish._M_node;
      v14 = (__m128i)(unsigned __int64)M_last;
      v13 = &M_cur[__n];
      goto LABEL_7;
    }
    v10 = v9 >> 3;
  }
  v11 = v10;
  v12 = &M_node[v11];
  M_first = M_node[v11];
  v13 = &M_first[v9 - v11 * 8];
  v14 = (__m128i)(unsigned __int64)&M_first[8];
LABEL_7:
  v15 = M_node + 1;
  while ( M_cur != v13 )
  {
    while ( 1 )
    {
      p_anon_0 = &M_cur->message_._anon_0;
      ++M_cur;
      *(_OWORD *)&M_cur[-1].token_.end_ = 0LL;
      *(_OWORD *)&M_cur[-1].message_._M_string_length = 0LL;
      *(_OWORD *)&M_cur[-1].token_.type_ = 0LL;
      *(std::string::$CFBEC286C7F52157F7E59FC354047095 *)((char *)&M_cur[-1].message_._anon_0 + 8) = 0LL;
      M_cur[-1].message_._M_dataplus._M_p = (std::string::pointer)p_anon_0;
      M_cur[-1].message_._anon_0._M_local_buf[0] = 0;
      if ( M_last != M_cur )
        break;
      M_cur = *v15++;
      M_last = M_cur + 8;
      if ( M_cur == v13 )
        goto LABEL_11;
    }
  }
LABEL_11:
  *(__m128i *)&this->_M_impl._M_finish._M_cur = _mm_unpacklo_epi64(
                                                  (__m128i)(unsigned __int64)M_cur,
                                                  (__m128i)(unsigned __int64)M_first);
  *(__m128i *)&this->_M_impl._M_finish._M_last = _mm_unpacklo_epi64(v14, (__m128i)(unsigned __int64)v12);
};

// Line 348: range 0000000014DF99A0-0000000014DF9ACD
void __fastcall std::deque<Json::Reader::ErrorInfo>::_M_default_append(
        std::deque<Json::Reader::ErrorInfo> *const this,
        std::deque<Json::Reader::ErrorInfo>::size_type __n)
{
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_last; // rsi
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_cur; // rax
  unsigned __int64 v6; // rdx
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_first; // rdi
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer M_node; // rcx
  signed __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer v12; // r9
  Json::Reader::ErrorInfo *v13; // rdx
  __m128i v14; // xmm1
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer *v15; // rcx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r8

  M_last = this->_M_impl._M_finish._M_last;
  M_cur = this->_M_impl._M_finish._M_cur;
  v6 = M_last - M_cur - 1;
  if ( __n > v6 )
  {
    std::deque<Json::Reader::ErrorInfo>::_M_new_elements_at_back(this, __n - v6);
    M_cur = this->_M_impl._M_finish._M_cur;
    M_last = this->_M_impl._M_finish._M_last;
  }
  M_first = this->_M_impl._M_finish._M_first;
  M_node = this->_M_impl._M_finish._M_node;
  v9 = __n + M_cur - M_first;
  if ( v9 < 0 )
  {
    v10 = ~((unsigned __int64)~v9 >> 3);
  }
  else
  {
    if ( v9 <= 7 )
    {
      v12 = this->_M_impl._M_finish._M_node;
      v14 = (__m128i)(unsigned __int64)M_last;
      v13 = &M_cur[__n];
      goto LABEL_7;
    }
    v10 = v9 >> 3;
  }
  v11 = v10;
  v12 = &M_node[v11];
  M_first = M_node[v11];
  v13 = &M_first[v9 - v11 * 8];
  v14 = (__m128i)(unsigned __int64)&M_first[8];
LABEL_7:
  v15 = M_node + 1;
  while ( M_cur != v13 )
  {
    while ( 1 )
    {
      p_anon_0 = &M_cur->message_._anon_0;
      ++M_cur;
      *(_OWORD *)&M_cur[-1].token_.end_ = 0LL;
      *(_OWORD *)&M_cur[-1].message_._M_string_length = 0LL;
      *(_OWORD *)&M_cur[-1].token_.type_ = 0LL;
      *(std::string::$CFBEC286C7F52157F7E59FC354047095 *)((char *)&M_cur[-1].message_._anon_0 + 8) = 0LL;
      M_cur[-1].message_._M_dataplus._M_p = (std::string::pointer)p_anon_0;
      M_cur[-1].message_._anon_0._M_local_buf[0] = 0;
      if ( M_last != M_cur )
        break;
      M_cur = *v15++;
      M_last = M_cur + 8;
      if ( M_cur == v13 )
        goto LABEL_11;
    }
  }
LABEL_11:
  *(__m128i *)&this->_M_impl._M_finish._M_cur = _mm_unpacklo_epi64(
                                                  (__m128i)(unsigned __int64)M_cur,
                                                  (__m128i)(unsigned __int64)M_first);
  *(__m128i *)&this->_M_impl._M_finish._M_last = _mm_unpacklo_epi64(v14, (__m128i)(unsigned __int64)v12);
};

// Line 479: range 000000000F87B2D6-000000000F87B481
void __fastcall std::deque<Coordinate>::_M_push_back_aux<Coordinate const&>(
        std::deque<Coordinate> *const this,
        Coordinate *a2,
        const Coordinate *__args_0)
{
  std::deque<Coordinate>::size_type v3; // rbx
  std::deque<Coordinate> *v4; // rax
  std::_Deque_iterator<Coordinate,Coordinate&,Coordinate*>::_Map_pointer v5; // rbx
  std::_Deque_base<Coordinate>::_Ptr node; // rax
  const Coordinate *v7; // rsi
  std::_Deque_iterator<Coordinate,Coordinate&,Coordinate*> *p_M_finish; // rdx
  Coordinate *M_first; // rdx

  v3 = std::deque<Coordinate>::size(this);
  if ( v3 == std::deque<Coordinate>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<Coordinate>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<Coordinate> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<Coordinate>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<Coordinate const&>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<Coordinate>>::construct<Coordinate,Coordinate const&>(
    (std::allocator_traits<std::allocator<Coordinate> >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<Coordinate,Coordinate&,Coordinate*>::_M_set_node(p_M_finish, this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 000000000F8EA9DE-000000000F8EAB89
void __fastcall std::deque<Coordinate>::_M_push_back_aux<Coordinate>(
        std::deque<Coordinate> *const this,
        Coordinate *a2,
        Coordinate *__args_0)
{
  std::deque<Coordinate>::size_type v3; // rbx
  std::deque<Coordinate> *v4; // rax
  std::_Deque_iterator<Coordinate,Coordinate&,Coordinate*>::_Map_pointer v5; // rbx
  std::_Deque_base<Coordinate>::_Ptr node; // rax
  Coordinate *v7; // rsi
  std::_Deque_iterator<Coordinate,Coordinate&,Coordinate*> *p_M_finish; // rdx
  Coordinate *M_first; // rdx

  v3 = std::deque<Coordinate>::size(this);
  if ( v3 == std::deque<Coordinate>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<Coordinate>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<Coordinate> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<Coordinate>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<Coordinate>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<Coordinate>>::construct<Coordinate,Coordinate>(
    (std::allocator_traits<std::allocator<Coordinate> >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<Coordinate,Coordinate&,Coordinate*>::_M_set_node(p_M_finish, this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 0000000014E00D20-0000000014E00EDE
void __fastcall std::deque<Json::OurReader::ErrorInfo>::_M_push_back_aux<Json::OurReader::ErrorInfo const&>(
        std::deque<Json::OurReader::ErrorInfo> *const this,
        const __m128i *a2,
        const Json::OurReader::ErrorInfo *__args_0)
{
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer M_node; // rbp
  Json::OurReader::ErrorInfo *v5; // rax
  __m128i v6; // xmm1
  std::string::size_type v7; // r13
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_cur; // rbp
  Json::OurReader::Location v9; // rax
  void *p_anon_0; // rdi
  std::string::pointer v11; // r14
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v12; // rdx
  Json::OurReader::ErrorInfo *v13; // rax
  __int64 v14; // rax
  std::string::size_type v15[6]; // [rsp+8h] [rbp-30h] BYREF

  M_node = this->_M_impl._M_finish._M_node;
  if ( this->_M_impl._M_finish._M_cur
     - this->_M_impl._M_finish._M_first
     + (char *)M_node
     - (char *)this->_M_impl._M_start._M_node
     - 8
     + this->_M_impl._M_start._M_last
     - this->_M_impl._M_start._M_cur == 0x1FFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( this->_M_impl._M_map_size - (M_node - this->_M_impl._M_map) <= 1 )
  {
    std::deque<Json::OurReader::ErrorInfo>::_M_reallocate_map(this, 1uLL, 0);
    M_node = this->_M_impl._M_finish._M_node;
  }
  v5 = (Json::OurReader::ErrorInfo *)operator new(0x200uLL);
  v6 = _mm_loadu_si128(a2);
  v7 = a2[2].m128i_u64[0];
  M_node[1] = v5;
  M_cur = this->_M_impl._M_finish._M_cur;
  v9 = (Json::OurReader::Location)a2[1].m128i_i64[0];
  p_anon_0 = &M_cur->message_._anon_0;
  *(__m128i *)&M_cur->token_.type_ = v6;
  M_cur->token_.end_ = v9;
  M_cur->message_._M_dataplus._M_p = M_cur->message_._anon_0._M_local_buf;
  v11 = (std::string::pointer)a2[1].m128i_i64[1];
  if ( &v11[v7] && !v11 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v15[0] = v7;
  if ( v7 > 0xF )
  {
    v14 = std::string::_M_create(&M_cur->message_, v15, 0LL);
    M_cur->message_._M_dataplus._M_p = (std::string::pointer)v14;
    p_anon_0 = (void *)v14;
    M_cur->message_._anon_0._M_allocated_capacity = v15[0];
    goto LABEL_13;
  }
  if ( v7 != 1 )
  {
    if ( !v7 )
      goto LABEL_9;
LABEL_13:
    memcpy(p_anon_0, v11, v7);
    v7 = v15[0];
    p_anon_0 = M_cur->message_._M_dataplus._M_p;
    goto LABEL_9;
  }
  M_cur->message_._anon_0._M_local_buf[0] = *v11;
LABEL_9:
  M_cur->message_._M_string_length = v7;
  *((_BYTE *)p_anon_0 + v7) = 0;
  v12 = this->_M_impl._M_finish._M_node;
  M_cur->extra_ = (Json::OurReader::Location)a2[3].m128i_i64[1];
  v13 = v12[1];
  *(__m128i *)&this->_M_impl._M_finish._M_cur = _mm_unpacklo_epi64(
                                                  (__m128i)(unsigned __int64)v13,
                                                  (__m128i)(unsigned __int64)v13);
  *(__m128i *)&this->_M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                   (__m128i)(unsigned __int64)&v13[8],
                                                   (__m128i)(unsigned __int64)(v12 + 1));
};

// Line 479: range 0000000014E008C0-0000000014E00A7E
void __fastcall std::deque<Json::Reader::ErrorInfo>::_M_push_back_aux<Json::Reader::ErrorInfo const&>(
        std::deque<Json::Reader::ErrorInfo> *const this,
        const __m128i *a2,
        const Json::Reader::ErrorInfo *__args_0)
{
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer M_node; // rbp
  Json::Reader::ErrorInfo *v5; // rax
  __m128i v6; // xmm1
  std::string::size_type v7; // r13
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Elt_pointer M_cur; // rbp
  Json::Reader::Location v9; // rax
  void *p_anon_0; // rdi
  std::string::pointer v11; // r14
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer v12; // rdx
  Json::Reader::ErrorInfo *v13; // rax
  __int64 v14; // rax
  std::string::size_type v15[6]; // [rsp+8h] [rbp-30h] BYREF

  M_node = this->_M_impl._M_finish._M_node;
  if ( this->_M_impl._M_finish._M_cur
     - this->_M_impl._M_finish._M_first
     + (char *)M_node
     - (char *)this->_M_impl._M_start._M_node
     - 8
     + this->_M_impl._M_start._M_last
     - this->_M_impl._M_start._M_cur == 0x1FFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( this->_M_impl._M_map_size - (M_node - this->_M_impl._M_map) <= 1 )
  {
    std::deque<Json::Reader::ErrorInfo>::_M_reallocate_map(this, 1uLL, 0);
    M_node = this->_M_impl._M_finish._M_node;
  }
  v5 = (Json::Reader::ErrorInfo *)operator new(0x200uLL);
  v6 = _mm_loadu_si128(a2);
  v7 = a2[2].m128i_u64[0];
  M_node[1] = v5;
  M_cur = this->_M_impl._M_finish._M_cur;
  v9 = (Json::Reader::Location)a2[1].m128i_i64[0];
  p_anon_0 = &M_cur->message_._anon_0;
  *(__m128i *)&M_cur->token_.type_ = v6;
  M_cur->token_.end_ = v9;
  M_cur->message_._M_dataplus._M_p = M_cur->message_._anon_0._M_local_buf;
  v11 = (std::string::pointer)a2[1].m128i_i64[1];
  if ( &v11[v7] && !v11 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v15[0] = v7;
  if ( v7 > 0xF )
  {
    v14 = std::string::_M_create(&M_cur->message_, v15, 0LL);
    M_cur->message_._M_dataplus._M_p = (std::string::pointer)v14;
    p_anon_0 = (void *)v14;
    M_cur->message_._anon_0._M_allocated_capacity = v15[0];
    goto LABEL_13;
  }
  if ( v7 != 1 )
  {
    if ( !v7 )
      goto LABEL_9;
LABEL_13:
    memcpy(p_anon_0, v11, v7);
    v7 = v15[0];
    p_anon_0 = M_cur->message_._M_dataplus._M_p;
    goto LABEL_9;
  }
  M_cur->message_._anon_0._M_local_buf[0] = *v11;
LABEL_9:
  M_cur->message_._M_string_length = v7;
  *((_BYTE *)p_anon_0 + v7) = 0;
  v12 = this->_M_impl._M_finish._M_node;
  M_cur->extra_ = (Json::Reader::Location)a2[3].m128i_i64[1];
  v13 = v12[1];
  *(__m128i *)&this->_M_impl._M_finish._M_cur = _mm_unpacklo_epi64(
                                                  (__m128i)(unsigned __int64)v13,
                                                  (__m128i)(unsigned __int64)v13);
  *(__m128i *)&this->_M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                   (__m128i)(unsigned __int64)&v13[8],
                                                   (__m128i)(unsigned __int64)(v12 + 1));
};

// Line 479: range 0000000014E00550-0000000014E00736
void __fastcall std::deque<Json::Value *>::_M_push_back_aux<Json::Value *>(
        std::deque<Json::Value*> *const this,
        Json::Value **a2,
        Json::Value **__args_0)
{
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer M_node; // r13
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer v6; // rsi
  signed __int64 v7; // r12
  signed __int64 v8; // rcx
  __int64 v9; // rdi
  std::size_t M_map_size; // rdx
  Json::Value **v11; // rax
  Json::Value *v12; // rdx
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer v13; // rdx
  Json::Value **v14; // rax
  __int64 v15; // r14
  std::size_t v16; // rax
  std::size_t v17; // r13
  Json::Value ***v18; // rax
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer v19; // rsi
  Json::Value ***v20; // r15
  __m128i *v21; // r14
  std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  Json::Value **v25; // rax
  Json::Value ***v26; // r13
  size_t v27; // rdx

  M_node = this->_M_impl._M_finish._M_node;
  v6 = this->_M_impl._M_start._M_node;
  v7 = (char *)M_node - (char *)v6;
  v8 = this->_M_impl._M_finish._M_cur - this->_M_impl._M_finish._M_first;
  v9 = M_node - v6;
  if ( v8 + ((v9 - 1) << 6) + this->_M_impl._M_start._M_last - this->_M_impl._M_start._M_cur == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  M_map_size = this->_M_impl._M_map_size;
  if ( M_map_size - (M_node - this->_M_impl._M_map) <= 1 )
  {
    v15 = v9 + 2;
    if ( M_map_size > 2 * (v9 + 2) )
    {
      v26 = M_node + 1;
      v21 = (__m128i *)&this->_M_impl._M_map[(M_map_size - v15) >> 1];
      v27 = (char *)v26 - (char *)v6;
      if ( v6 <= (std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer)v21 )
      {
        if ( v6 != v26 )
          memmove(&v21->m128i_i8[v7 + 8 - v27], v6, v27);
      }
      else if ( v6 != v26 )
      {
        memmove(v21, v6, v27);
      }
    }
    else
    {
      v16 = 1LL;
      if ( M_map_size )
        v16 = this->_M_impl._M_map_size;
      v17 = M_map_size + v16 + 2;
      if ( v17 > 0xFFFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v18 = (Json::Value ***)operator new(8 * v17);
      v19 = this->_M_impl._M_start._M_node;
      v20 = v18;
      v21 = (__m128i *)&v18[(v17 - v15) >> 1];
      v22 = this->_M_impl._M_finish._M_node + 1;
      if ( v22 != v19 )
        memmove(v21, v19, (char *)v22 - (char *)v19);
      operator delete(this->_M_impl._M_map);
      this->_M_impl._M_map = v20;
      this->_M_impl._M_map_size = v17;
    }
    v23 = v21->m128i_i64[0];
    v24 = _mm_loadl_epi64(v21);
    M_node = (std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer)((char *)v21->m128i_i64 + v7);
    this->_M_impl._M_start._M_node = (std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer)v21;
    this->_M_impl._M_finish._M_node = (std::_Deque_iterator<Json::Value*,Json::Value*&,Json::Value**>::_Map_pointer)((char *)v21->m128i_i64 + v7);
    *(__m128i *)&this->_M_impl._M_start._M_first = _mm_unpacklo_epi64(v24, (__m128i)(unsigned __int64)(v23 + 512));
    v25 = *(Json::Value ***)((char *)v21->m128i_i64 + v7);
    this->_M_impl._M_finish._M_first = v25;
    this->_M_impl._M_finish._M_last = v25 + 64;
  }
  v11 = (Json::Value **)operator new(0x200uLL);
  v12 = *a2;
  M_node[1] = v11;
  *this->_M_impl._M_finish._M_cur = v12;
  v13 = this->_M_impl._M_finish._M_node;
  v14 = v13[1];
  *(__m128i *)&this->_M_impl._M_finish._M_cur = _mm_unpacklo_epi64(
                                                  (__m128i)(unsigned __int64)v14,
                                                  (__m128i)(unsigned __int64)v14);
  *(__m128i *)&this->_M_impl._M_finish._M_last = _mm_unpacklo_epi64(
                                                   (__m128i)(unsigned __int64)(v14 + 64),
                                                   (__m128i)(unsigned __int64)(v13 + 1));
};

// Line 479: range 000000000F850DA4-000000000F850FDE
void __fastcall std::deque<LuaIndexCheckerContext>::_M_push_back_aux<std::set<std::string> &>(
        std::deque<LuaIndexCheckerContext> *const this,
        std::set<std::string> *a2,
        std::set<std::string> *__args_0)
{
  std::deque<LuaIndexCheckerContext>::size_type v3; // rbx
  std::deque<LuaIndexCheckerContext> *v4; // rax
  std::_Deque_iterator<LuaIndexCheckerContext,LuaIndexCheckerContext&,LuaIndexCheckerContext*>::_Map_pointer v5; // rbx
  std::_Deque_base<LuaIndexCheckerContext>::_Ptr node; // rax
  std::set<std::string> *v7; // rsi
  std::_Deque_iterator<LuaIndexCheckerContext,LuaIndexCheckerContext&,LuaIndexCheckerContext*> *p_M_finish; // rdx
  LuaIndexCheckerContext *M_first; // rdx

  v3 = std::deque<LuaIndexCheckerContext>::size(this);
  if ( v3 == std::deque<LuaIndexCheckerContext>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<LuaIndexCheckerContext>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<LuaIndexCheckerContext> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<LuaIndexCheckerContext>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<std::set<std::string> &>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<LuaIndexCheckerContext>>::construct<LuaIndexCheckerContext,std::set<std::string> &>(
    (std::allocator_traits<std::allocator<LuaIndexCheckerContext> >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    (std::set<std::string> *)this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<LuaIndexCheckerContext,LuaIndexCheckerContext&,LuaIndexCheckerContext*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 0000000014EB99DC-0000000014EBA41D
void __fastcall std::deque<PacketLog>::_M_push_back_aux<PacketLog>(
        std::deque<PacketLog> *const this,
        unsigned __int64 a2,
        PacketLog *__args_0)
{
  unsigned __int64 p_M_node; // rdi
  void *p_M_map_size; // rdi
  void *p_M_finish; // rdi
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Map_pointer M_node; // r12
  PacketLog *v9; // rax
  unsigned __int64 M_cur; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v11; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rax
  std::string *v13; // rax
  PacketLog *v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v17; // rdx
  std::string::size_type *v18; // rdx
  std::string::size_type *v19; // rdx
  std::deque<PacketLog> *p_M_first; // rdi
  char v21; // al
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Map_pointer v22; // rax
  PacketLog *v23; // rax
  std::string::size_type v24; // r11
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v25; // rcx
  PacketLog *v26; // rdx

  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)((p_M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_37;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_M_node);
    goto LABEL_38;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(p_M_node);
    goto LABEL_39;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(p_M_node);
    goto LABEL_40;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(p_M_node);
    goto LABEL_41;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_M_node);
LABEL_42:
    __asan_handle_no_return(p_M_node);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  if ( 0xAAAAAAAAAAAAAAABLL * (((char *)this->_M_impl._M_start._M_last - (char *)this->_M_impl._M_start._M_cur) >> 4)
     + 2 * (5 * (this->_M_impl._M_finish._M_node - this->_M_impl._M_start._M_node) - 5)
     - 0x5555555555555555LL * (((char *)this->_M_impl._M_finish._M_cur - (char *)this->_M_impl._M_finish._M_first) >> 4) == 0x2AAAAAAAAAAAAAALL )
    goto LABEL_42;
  p_M_map_size = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_map_size);
    goto LABEL_44;
  }
  p_M_map_size = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(p_M_map_size);
    goto LABEL_45;
  }
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    if ( this->_M_impl._M_map_size - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map) > 1 )
      goto LABEL_12;
    goto LABEL_46;
  }
LABEL_45:
  __asan_report_load8(this);
LABEL_46:
  std::deque<PacketLog>::_M_reallocate_map(this, 1uLL, 0);
LABEL_12:
  p_M_finish = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_48;
  }
  M_node = this->_M_impl._M_finish._M_node;
  v9 = (PacketLog *)operator new(0x1E0uLL);
  p_M_finish = M_node + 1;
  if ( *(_BYTE *)(((unsigned __int64)(M_node + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_store8();
    goto LABEL_49;
  }
  M_node[1] = v9;
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(p_M_finish);
    goto LABEL_50;
  }
  M_cur = (unsigned __int64)this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)((a2 >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(a2);
    goto LABEL_51;
  }
  if ( *(_BYTE *)((M_cur >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_store8();
    goto LABEL_52;
  }
  *(_QWORD *)M_cur = *(_QWORD *)a2;
  if ( *(_BYTE *)(((M_cur + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8();
    goto LABEL_53;
  }
  *(_QWORD *)(M_cur + 8) = 0LL;
  v11 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(a2 + 8);
  if ( *(_BYTE *)(((a2 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(v11);
    goto LABEL_54;
  }
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(M_cur + 8) = v12;
  *(_QWORD *)a2 = 0LL;
  if ( *(_BYTE *)(((M_cur + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_store8();
    goto LABEL_55;
  }
  *(_QWORD *)(M_cur + 16) = M_cur + 32;
  v13 = (std::string *)(a2 + 16);
  if ( *(_BYTE *)(((a2 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    M_cur = (unsigned __int64)v13;
    v15 = __asan_report_load8(v13);
    goto LABEL_56;
  }
  v14 = *(PacketLog **)(a2 + 16);
  v15 = a2 + 32;
  if ( v14 != (PacketLog *)(a2 + 32) )
  {
    v16 = (M_cur + 16) >> 3;
    if ( !*(_BYTE *)(v16 + 0x7FFF8000) )
    {
      *(_QWORD *)(M_cur + 16) = v14;
      v17 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(a2 + 32);
      if ( !*(_BYTE *)(((a2 + 32) >> 3) + 0x7FFF8000) )
      {
        v16 = (M_cur + 32) >> 3;
        if ( !*(_BYTE *)(v16 + 0x7FFF8000) )
        {
          *(_QWORD *)(M_cur + 32) = *(_QWORD *)(a2 + 32);
          goto LABEL_26;
        }
LABEL_65:
        __asan_report_store8();
        goto LABEL_66;
      }
LABEL_64:
      __asan_report_load8(v17);
      goto LABEL_65;
    }
LABEL_63:
    __asan_report_store8();
    goto LABEL_64;
  }
LABEL_56:
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v15 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v15 & 7)
    || *(_BYTE *)(((a2 + 47) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((a2 + 47) >> 3) + 0x7FFF8000) <= (unsigned __int8)((a2 + 47) & 7) )
  {
    __asan_report_load_n(v15, 16LL);
LABEL_62:
    v16 = 16LL;
    __asan_report_store_n(v25, 16LL);
    goto LABEL_63;
  }
  v24 = *(_QWORD *)(a2 + 40);
  v25 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(M_cur + 32);
  v16 = *(unsigned __int8 *)(((M_cur + 47) >> 3) + 0x7FFF8000);
  if ( *(_BYTE *)(((M_cur + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((M_cur + 32) >> 3) + 0x7FFF8000) <= (unsigned __int8)((M_cur + 32) & 7)
    || (_BYTE)v16 != 0 && (char)v16 <= (char)((M_cur + 47) & 7) )
  {
    goto LABEL_62;
  }
  *(_QWORD *)(M_cur + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(M_cur + 40) = v24;
LABEL_26:
  v18 = (std::string::size_type *)(a2 + 24);
  if ( *(_BYTE *)(((a2 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v18);
    goto LABEL_67;
  }
  v19 = (std::string::size_type *)(M_cur + 24);
  v16 = (M_cur + 24) >> 3;
  if ( *(_BYTE *)(v16 + 0x7FFF8000) )
  {
LABEL_67:
    p_M_first = (std::deque<PacketLog> *)v19;
    __asan_report_store8();
LABEL_68:
    __asan_report_store1(p_M_first);
    goto LABEL_69;
  }
  *(_QWORD *)(M_cur + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = v15;
  *(_QWORD *)(a2 + 24) = 0LL;
  p_M_first = (std::deque<PacketLog> *)(a2 + 32);
  v21 = *(_BYTE *)(((a2 + 32) >> 3) + 0x7FFF8000);
  if ( v21 <= (char)((a2 + 32) & 7) && v21 )
    goto LABEL_68;
  *(_BYTE *)(a2 + 32) = 0;
  p_M_first = (std::deque<PacketLog> *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(p_M_first);
    goto LABEL_70;
  }
  v22 = this->_M_impl._M_finish._M_node;
  p_M_first = (std::deque<PacketLog> *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_store8();
    goto LABEL_71;
  }
  this->_M_impl._M_finish._M_node = v22 + 1;
  p_M_first = (std::deque<PacketLog> *)(v22 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v22 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(p_M_first);
    goto LABEL_72;
  }
  v23 = v22[1];
  p_M_first = (std::deque<PacketLog> *)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_store8();
    goto LABEL_73;
  }
  this->_M_impl._M_finish._M_first = v23;
  p_M_first = (std::deque<PacketLog> *)&this->_M_impl._M_finish._M_last;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
    this->_M_impl._M_finish._M_last = v23 + 10;
    this->_M_impl._M_finish._M_cur = v23;
    return;
  }
LABEL_73:
  __asan_report_store8();
  std::deque<PacketLog>::emplace_back<PacketLog>(p_M_first, (PacketLog *)v16, v26);
};

// Line 479: range 0000000014EB669E-0000000014EB7379
void __fastcall std::deque<StatLog>::_M_push_back_aux<StatLog const>(
        std::deque<StatLog> *const this,
        unsigned __int64 a2,
        const StatLog *__args_0)
{
  unsigned __int64 p_M_node; // rdi
  void *p_M_map_size; // rdi
  void *p_M_finish; // rdi
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Map_pointer M_node; // r12
  StatLog *v9; // rax
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer M_cur; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v11; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rax
  volatile signed __int32 *p_M_use_count; // rdx
  char v14; // cl
  MessagePtr *v15; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v16; // rcx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rax
  volatile signed __int32 *v18; // rdx
  char v19; // cl
  MessagePtr *v20; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v21; // rcx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rax
  volatile signed __int32 *v23; // rdx
  char v24; // cl
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_body_ext_ptr; // rdx
  MessagePtr *v26; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v27; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  char v29; // dl
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Map_pointer *v30; // rdi
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Map_pointer v31; // rax
  StatLog *v32; // rax
  char v33; // si
  char v34; // si
  char v35; // si
  char v36; // cl

  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)((p_M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_58;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(p_M_node);
    goto LABEL_59;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(p_M_node);
    goto LABEL_60;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8(p_M_node);
    goto LABEL_61;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_load8(p_M_node);
    goto LABEL_62;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_load8(p_M_node);
LABEL_63:
    __asan_handle_no_return(p_M_node);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  if ( this->_M_impl._M_start._M_last
     - this->_M_impl._M_start._M_cur
     + (char *)this->_M_impl._M_finish._M_node
     - (char *)this->_M_impl._M_start._M_node
     - 8
     + this->_M_impl._M_finish._M_cur
     - this->_M_impl._M_finish._M_first == 0x1FFFFFFFFFFFFFFLL )
    goto LABEL_63;
  p_M_map_size = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_map_size);
    goto LABEL_65;
  }
  p_M_map_size = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8(p_M_map_size);
    goto LABEL_66;
  }
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    if ( this->_M_impl._M_map_size - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map) > 1 )
      goto LABEL_12;
    goto LABEL_67;
  }
LABEL_66:
  __asan_report_load8(this);
LABEL_67:
  std::deque<StatLog>::_M_reallocate_map(this, 1uLL, 0);
LABEL_12:
  p_M_finish = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_69;
  }
  M_node = this->_M_impl._M_finish._M_node;
  v9 = (StatLog *)operator new(0x200uLL);
  p_M_finish = M_node + 1;
  if ( *(_BYTE *)(((unsigned __int64)(M_node + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_store8();
    goto LABEL_70;
  }
  M_node[1] = v9;
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load8(p_M_finish);
    goto LABEL_71;
  }
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)((a2 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(a2);
    goto LABEL_72;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_store8();
    goto LABEL_73;
  }
  M_cur->head_ptr._M_ptr = *(std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **)a2;
  v11 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(a2 + 8);
  if ( *(_BYTE *)(((a2 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v11);
    goto LABEL_74;
  }
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(a2 + 8);
  if ( *(_BYTE *)(((unsigned __int64)&M_cur->head_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_store8();
    goto LABEL_75;
  }
  M_cur->head_ptr._M_refcount._M_pi = v12;
  if ( !v12 )
    goto LABEL_24;
  p_M_use_count = &v12->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_76;
  v14 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v14 || !v14 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_24;
  }
LABEL_75:
  M_cur = (std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer)p_M_use_count;
  v12 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_76:
  v33 = *(_BYTE *)(((unsigned __int64)&v12->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v12 + 8) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(&v12->_M_use_count);
    goto LABEL_80;
  }
  ++v12->_M_use_count;
LABEL_24:
  v15 = (MessagePtr *)(a2 + 16);
  if ( *(_BYTE *)(((a2 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_load8(v15);
    goto LABEL_81;
  }
  if ( *(_BYTE *)(((unsigned __int64)&M_cur->head_ext_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_store8();
    goto LABEL_82;
  }
  M_cur->head_ext_ptr._M_ptr = *(std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **)(a2 + 16);
  v16 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(a2 + 24);
  if ( *(_BYTE *)(((a2 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_load8(v16);
    goto LABEL_83;
  }
  v17 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(a2 + 24);
  if ( *(_BYTE *)(((unsigned __int64)&M_cur->head_ext_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_store8();
    goto LABEL_84;
  }
  M_cur->head_ext_ptr._M_refcount._M_pi = v17;
  if ( !v17 )
    goto LABEL_33;
  v18 = &v17->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_85;
  v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
  {
    _InterlockedAdd(v18, 1u);
    goto LABEL_33;
  }
LABEL_84:
  M_cur = (std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer)v18;
  v17 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v18);
LABEL_85:
  v34 = *(_BYTE *)(((unsigned __int64)&v17->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 8) & 7) + 3) >= v34 && v34 )
  {
    __asan_report_load4(&v17->_M_use_count);
    goto LABEL_89;
  }
  ++v17->_M_use_count;
LABEL_33:
  v20 = (MessagePtr *)(a2 + 32);
  if ( *(_BYTE *)(((a2 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_load8(v20);
    goto LABEL_90;
  }
  if ( *(_BYTE *)(((unsigned __int64)&M_cur->body_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    __asan_report_store8();
    goto LABEL_91;
  }
  M_cur->body_ptr._M_ptr = *(std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **)(a2 + 32);
  v21 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(a2 + 40);
  if ( *(_BYTE *)(((a2 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(v21);
    goto LABEL_92;
  }
  v22 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(a2 + 40);
  if ( *(_BYTE *)(((unsigned __int64)&M_cur->body_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_store8();
    goto LABEL_93;
  }
  M_cur->body_ptr._M_refcount._M_pi = v22;
  if ( !v22 )
    goto LABEL_42;
  v23 = &v22->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_94;
  v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v23 & 7) + 3) < v24 || !v24 )
  {
    _InterlockedAdd(v23, 1u);
    goto LABEL_42;
  }
LABEL_93:
  M_cur = (std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer)v23;
  v22 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v23);
LABEL_94:
  v35 = *(_BYTE *)(((unsigned __int64)&v22->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 8) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(&v22->_M_use_count);
    goto LABEL_98;
  }
  ++v22->_M_use_count;
LABEL_42:
  p_body_ext_ptr = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&M_cur->body_ext_ptr;
  v26 = (MessagePtr *)(a2 + 48);
  if ( *(_BYTE *)(((a2 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8(v26);
    goto LABEL_99;
  }
  if ( *(_BYTE *)(((unsigned __int64)p_body_ext_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    v27 = p_body_ext_ptr;
    __asan_report_store8();
    goto LABEL_100;
  }
  M_cur->body_ext_ptr._M_ptr = *(std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **)(a2 + 48);
  v27 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(a2 + 56);
  if ( *(_BYTE *)(((a2 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(v27);
    goto LABEL_101;
  }
  v28 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(a2 + 56);
  v27 = p_body_ext_ptr + 1;
  if ( *(_BYTE *)(((unsigned __int64)&p_body_ext_ptr[1] >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_store8();
    goto LABEL_102;
  }
  p_body_ext_ptr[1]._M_pi = v28;
  if ( !v28 )
    goto LABEL_51;
  v27 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&v28->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_103;
  v29 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v27 & 7) + 3) < v29 || !v29 )
  {
    _InterlockedAdd((volatile signed __int32 *)v27, 1u);
    goto LABEL_51;
  }
LABEL_102:
  v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v27);
LABEL_103:
  v30 = (std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Map_pointer *)&v28->_M_use_count;
  v36 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v36 && v36 )
  {
    __asan_report_load4(v30);
    goto LABEL_107;
  }
  ++v28->_M_use_count;
LABEL_51:
  v30 = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_load8(v30);
    goto LABEL_108;
  }
  v31 = this->_M_impl._M_finish._M_node;
  v30 = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_store8();
    goto LABEL_109;
  }
  this->_M_impl._M_finish._M_node = v31 + 1;
  v30 = (std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Map_pointer *)(v31 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v31 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    __asan_report_load8(v30);
    goto LABEL_110;
  }
  v32 = v31[1];
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_store8();
    goto LABEL_111;
  }
  this->_M_impl._M_finish._M_first = v32;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_store8();
    JUMPOUT(0x14EB6D6BLL);
  }
  this->_M_impl._M_finish._M_last = v32 + 8;
  this->_M_impl._M_finish._M_cur = v32;
};

// Line 479: range 000000000C7CF3A0-000000000C7CF574
void __fastcall std::deque<google::protobuf::util::converter::DefaultValueObjectWriter::Node *>::_M_push_back_aux<google::protobuf::util::converter::DefaultValueObjectWriter::Node * const&>(
        std::deque<google::protobuf::util::converter::DefaultValueObjectWriter::Node*> *const this,
        google::protobuf::util::converter::DefaultValueObjectWriter::Node **a2,
        google::protobuf::util::converter::DefaultValueObjectWriter::Node *const *__args_0)
{
  std::_Deque_iterator<google::protobuf::util::converter::DefaultValueObjectWriter::Node*,google::protobuf::util::converter::DefaultValueObjectWriter::Node*&,google::protobuf::util::converter::DefaultValueObjectWriter::Node**>::_Map_pointer M_node; // r13
  std::_Deque_iterator<google::protobuf::util::converter::DefaultValueObjectWriter::Node*,google::protobuf::util::converter::DefaultValueObjectWriter::Node*&,google::protobuf::util::converter::DefaultValueObjectWriter::Node**>::_Map_pointer v6; // rsi
  signed __int64 v7; // r12
  signed __int64 v8; // rcx
  __int64 v9; // rdi
  std::size_t M_map_size; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v11; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v12; // rdx
  std::_Deque_iterator<google::protobuf::util::converter::DefaultValueObjectWriter::Node*,google::protobuf::util::converter::DefaultValueObjectWriter::Node*&,google::protobuf::util::converter::DefaultValueObjectWriter::Node**>::_Map_pointer v13; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v14; // rax
  __int64 v15; // r14
  std::size_t v16; // rax
  std::size_t v17; // r13
  google::protobuf::util::converter::DefaultValueObjectWriter::Node ***v18; // rax
  std::_Deque_iterator<google::protobuf::util::converter::DefaultValueObjectWriter::Node*,google::protobuf::util::converter::DefaultValueObjectWriter::Node*&,google::protobuf::util::converter::DefaultValueObjectWriter::Node**>::_Map_pointer v19; // rsi
  google::protobuf::util::converter::DefaultValueObjectWriter::Node ***v20; // r15
  google::protobuf::util::converter::DefaultValueObjectWriter::Node ***v21; // r14
  std::_Deque_iterator<google::protobuf::util::converter::DefaultValueObjectWriter::Node*,google::protobuf::util::converter::DefaultValueObjectWriter::Node*&,google::protobuf::util::converter::DefaultValueObjectWriter::Node**>::_Map_pointer v22; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v23; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v24; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node ***v25; // r13
  size_t v26; // rdx

  M_node = this->_M_impl._M_finish._M_node;
  v6 = this->_M_impl._M_start._M_node;
  v7 = (char *)M_node - (char *)v6;
  v8 = this->_M_impl._M_finish._M_cur - this->_M_impl._M_finish._M_first;
  v9 = M_node - v6;
  if ( v8 + ((v9 - 1) << 6) + this->_M_impl._M_start._M_last - this->_M_impl._M_start._M_cur == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  M_map_size = this->_M_impl._M_map_size;
  if ( M_map_size - (M_node - this->_M_impl._M_map) <= 1 )
  {
    v15 = v9 + 2;
    if ( M_map_size > 2 * (v9 + 2) )
    {
      v25 = M_node + 1;
      v21 = &this->_M_impl._M_map[(M_map_size - v15) >> 1];
      v26 = (char *)v25 - (char *)v6;
      if ( v6 <= v21 )
      {
        if ( v6 != v25 )
          memmove((char *)v21 + v7 + 8 - v26, v6, v26);
      }
      else if ( v6 != v25 )
      {
        memmove(v21, v6, v26);
      }
    }
    else
    {
      v16 = 1LL;
      if ( M_map_size )
        v16 = this->_M_impl._M_map_size;
      v17 = M_map_size + v16 + 2;
      if ( v17 > 0xFFFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v18 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node ***)operator new(8 * v17);
      v19 = this->_M_impl._M_start._M_node;
      v20 = v18;
      v21 = &v18[(v17 - v15) >> 1];
      v22 = this->_M_impl._M_finish._M_node + 1;
      if ( v22 != v19 )
        memmove(v21, v19, (char *)v22 - (char *)v19);
      operator delete(this->_M_impl._M_map);
      this->_M_impl._M_map = v20;
      this->_M_impl._M_map_size = v17;
    }
    v23 = *v21;
    M_node = (google::protobuf::util::converter::DefaultValueObjectWriter::Node ***)((char *)v21 + v7);
    this->_M_impl._M_start._M_node = v21;
    this->_M_impl._M_finish._M_node = (google::protobuf::util::converter::DefaultValueObjectWriter::Node ***)((char *)v21 + v7);
    this->_M_impl._M_start._M_first = v23;
    this->_M_impl._M_start._M_last = v23 + 64;
    v24 = *(google::protobuf::util::converter::DefaultValueObjectWriter::Node ***)((char *)v21 + v7);
    this->_M_impl._M_finish._M_first = v24;
    this->_M_impl._M_finish._M_last = v24 + 64;
  }
  v11 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node **)operator new(0x200uLL);
  v12 = *a2;
  M_node[1] = v11;
  *this->_M_impl._M_finish._M_cur = v12;
  v13 = this->_M_impl._M_finish._M_node + 1;
  v14 = *v13;
  this->_M_impl._M_finish._M_node = v13;
  this->_M_impl._M_finish._M_first = v14;
  this->_M_impl._M_finish._M_last = v14 + 64;
  this->_M_impl._M_finish._M_cur = v14;
};

// Line 479: range 000000000C7D3B60-000000000C7D3C27
void __fastcall std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_push_back_aux<google::protobuf::util::converter::JsonStreamParser::ParseType>(
        std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType> *const this,
        google::protobuf::util::converter::JsonStreamParser::ParseType *a2,
        google::protobuf::util::converter::JsonStreamParser::ParseType *__args_0)
{
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Map_pointer M_node; // r12
  google::protobuf::util::converter::JsonStreamParser::ParseType *v4; // rax
  google::protobuf::util::converter::JsonStreamParser::ParseType v5; // edx
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Map_pointer v6; // rdx
  google::protobuf::util::converter::JsonStreamParser::ParseType *v7; // rax

  M_node = this->_M_impl._M_finish._M_node;
  if ( ((M_node - this->_M_impl._M_start._M_node - 1) << 7)
     + this->_M_impl._M_finish._M_cur
     - this->_M_impl._M_finish._M_first
     + this->_M_impl._M_start._M_last
     - this->_M_impl._M_start._M_cur == 0x1FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( this->_M_impl._M_map_size - (M_node - this->_M_impl._M_map) <= 1 )
  {
    std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_reallocate_map(this, 1uLL, 0);
    M_node = this->_M_impl._M_finish._M_node;
  }
  v4 = (google::protobuf::util::converter::JsonStreamParser::ParseType *)operator new(0x200uLL);
  v5 = *a2;
  M_node[1] = v4;
  *this->_M_impl._M_finish._M_cur = v5;
  v6 = this->_M_impl._M_finish._M_node + 1;
  v7 = *v6;
  this->_M_impl._M_finish._M_node = v6;
  this->_M_impl._M_finish._M_first = v7;
  this->_M_impl._M_finish._M_last = v7 + 128;
  this->_M_impl._M_finish._M_cur = v7;
};

// Line 479: range 000000000C7E2280-000000000C7E2454
void __fastcall std::deque<google::protobuf::util::converter::ProtoWriter::SizeInfo>::_M_push_back_aux<google::protobuf::util::converter::ProtoWriter::SizeInfo const&>(
        std::deque<google::protobuf::util::converter::ProtoWriter::SizeInfo> *const this,
        const google::protobuf::util::converter::ProtoWriter::SizeInfo *a2,
        const google::protobuf::util::converter::ProtoWriter::SizeInfo *__args_0)
{
  std::_Deque_iterator<google::protobuf::util::converter::ProtoWriter::SizeInfo,google::protobuf::util::converter::ProtoWriter::SizeInfo&,google::protobuf::util::converter::ProtoWriter::SizeInfo*>::_Map_pointer M_node; // r13
  std::_Deque_iterator<google::protobuf::util::converter::ProtoWriter::SizeInfo,google::protobuf::util::converter::ProtoWriter::SizeInfo&,google::protobuf::util::converter::ProtoWriter::SizeInfo*>::_Map_pointer v6; // rsi
  signed __int64 v7; // r12
  signed __int64 v8; // rcx
  __int64 v9; // rdi
  std::size_t M_map_size; // rdx
  google::protobuf::util::converter::ProtoWriter::SizeInfo v11; // rax
  google::protobuf::util::converter::ProtoWriter::SizeInfo v12; // rdx
  std::_Deque_iterator<google::protobuf::util::converter::ProtoWriter::SizeInfo,google::protobuf::util::converter::ProtoWriter::SizeInfo&,google::protobuf::util::converter::ProtoWriter::SizeInfo*>::_Map_pointer v13; // rdx
  google::protobuf::util::converter::ProtoWriter::SizeInfo *v14; // rax
  __int64 v15; // r14
  std::size_t v16; // rax
  std::size_t v17; // r13
  google::protobuf::util::converter::ProtoWriter::SizeInfo *v18; // rax
  std::_Deque_iterator<google::protobuf::util::converter::ProtoWriter::SizeInfo,google::protobuf::util::converter::ProtoWriter::SizeInfo&,google::protobuf::util::converter::ProtoWriter::SizeInfo*>::_Map_pointer v19; // rsi
  google::protobuf::util::converter::ProtoWriter::SizeInfo *v20; // r15
  google::protobuf::util::converter::ProtoWriter::SizeInfo *v21; // r14
  std::_Deque_iterator<google::protobuf::util::converter::ProtoWriter::SizeInfo,google::protobuf::util::converter::ProtoWriter::SizeInfo&,google::protobuf::util::converter::ProtoWriter::SizeInfo*>::_Map_pointer v22; // rdx
  google::protobuf::util::converter::ProtoWriter::SizeInfo *v23; // rax
  google::protobuf::util::converter::ProtoWriter::SizeInfo *v24; // rax
  google::protobuf::util::converter::ProtoWriter::SizeInfo *v25; // r13
  size_t v26; // rdx

  M_node = this->_M_impl._M_finish._M_node;
  v6 = this->_M_impl._M_start._M_node;
  v7 = (char *)M_node - (char *)v6;
  v8 = this->_M_impl._M_finish._M_cur - this->_M_impl._M_finish._M_first;
  v9 = M_node - v6;
  if ( v8 + ((v9 - 1) << 6) + this->_M_impl._M_start._M_last - this->_M_impl._M_start._M_cur == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  M_map_size = this->_M_impl._M_map_size;
  if ( M_map_size - (M_node - this->_M_impl._M_map) <= 1 )
  {
    v15 = v9 + 2;
    if ( M_map_size > 2 * (v9 + 2) )
    {
      v25 = M_node + 1;
      v21 = &this->_M_impl._M_map[(M_map_size - v15) >> 1];
      v26 = (char *)v25 - (char *)v6;
      if ( v6 <= v21 )
      {
        if ( v6 != v25 )
          memmove((char *)v21 + v7 + 8 - v26, v6, v26);
      }
      else if ( v6 != v25 )
      {
        memmove(v21, v6, v26);
      }
    }
    else
    {
      v16 = 1LL;
      if ( M_map_size )
        v16 = this->_M_impl._M_map_size;
      v17 = M_map_size + v16 + 2;
      if ( v17 > 0xFFFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v18 = (google::protobuf::util::converter::ProtoWriter::SizeInfo *)operator new(8 * v17);
      v19 = this->_M_impl._M_start._M_node;
      v20 = v18;
      v21 = &v18[(v17 - v15) >> 1];
      v22 = this->_M_impl._M_finish._M_node + 1;
      if ( v22 != v19 )
        memmove(v21, v19, (char *)v22 - (char *)v19);
      operator delete(this->_M_impl._M_map);
      this->_M_impl._M_map = v20;
      this->_M_impl._M_map_size = v17;
    }
    v23 = (google::protobuf::util::converter::ProtoWriter::SizeInfo *)*v21;
    M_node = (google::protobuf::util::converter::ProtoWriter::SizeInfo *)((char *)v21 + v7);
    this->_M_impl._M_start._M_node = v21;
    this->_M_impl._M_finish._M_node = (google::protobuf::util::converter::ProtoWriter::SizeInfo *)((char *)v21 + v7);
    this->_M_impl._M_start._M_first = v23;
    this->_M_impl._M_start._M_last = v23 + 64;
    v24 = *(google::protobuf::util::converter::ProtoWriter::SizeInfo **)((char *)v21 + v7);
    this->_M_impl._M_finish._M_first = v24;
    this->_M_impl._M_finish._M_last = v24 + 64;
  }
  v11 = (google::protobuf::util::converter::ProtoWriter::SizeInfo)operator new(0x200uLL);
  v12 = *a2;
  M_node[1] = v11;
  *this->_M_impl._M_finish._M_cur = v12;
  v13 = this->_M_impl._M_finish._M_node + 1;
  v14 = (google::protobuf::util::converter::ProtoWriter::SizeInfo *)*v13;
  this->_M_impl._M_finish._M_node = v13;
  this->_M_impl._M_finish._M_first = v14;
  this->_M_impl._M_finish._M_last = v14 + 64;
  this->_M_impl._M_finish._M_cur = v14;
};

// Line 479: range 0000000014E8CDB6-0000000014E8D0C4
void __fastcall std::deque<jaegertracing::SpanContext const*>::_M_push_back_aux<jaegertracing::SpanContext const* const&>(
        std::deque<const jaegertracing::SpanContext*> *const this,
        __int64 a2,
        const jaegertracing::SpanContext *const *__args_0)
{
  unsigned __int64 p_M_node; // rdi
  unsigned __int64 v5; // rbp
  void *p_M_map_size; // rdi
  void *p_M_finish; // rdi
  std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer M_node; // r12
  const jaegertracing::SpanContext **v9; // rax
  unsigned __int64 M_cur; // rdi
  std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer v11; // rax
  const jaegertracing::SpanContext **v12; // rax
  std::size_t v13; // rdx

  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)((p_M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_24;
  }
  v5 = a2;
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_M_node);
    goto LABEL_25;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_M_node);
    goto LABEL_26;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_M_node);
    goto LABEL_27;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_M_node);
    goto LABEL_28;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(p_M_node);
LABEL_29:
    __asan_handle_no_return(p_M_node);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  if ( this->_M_impl._M_start._M_last
     - this->_M_impl._M_start._M_cur
     + ((this->_M_impl._M_finish._M_node - this->_M_impl._M_start._M_node - 1) << 6)
     + this->_M_impl._M_finish._M_cur
     - this->_M_impl._M_finish._M_first == 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_29;
  p_M_map_size = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_map_size);
    goto LABEL_31;
  }
  p_M_map_size = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(p_M_map_size);
    goto LABEL_32;
  }
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    if ( this->_M_impl._M_map_size - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map) > 1 )
      goto LABEL_12;
    goto LABEL_33;
  }
LABEL_32:
  __asan_report_load8(this);
LABEL_33:
  a2 = 1LL;
  std::deque<jaegertracing::SpanContext const*>::_M_reallocate_map(this, 1uLL, 0);
LABEL_12:
  p_M_finish = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_35;
  }
  M_node = this->_M_impl._M_finish._M_node;
  v9 = (const jaegertracing::SpanContext **)operator new(0x200uLL);
  p_M_finish = M_node + 1;
  if ( *(_BYTE *)(((unsigned __int64)(M_node + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
    goto LABEL_36;
  }
  M_node[1] = v9;
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_M_finish);
    goto LABEL_37;
  }
  M_cur = (unsigned __int64)this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    M_cur = v5;
    __asan_report_load8(v5);
    goto LABEL_38;
  }
  if ( *(_BYTE *)((M_cur >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_store8();
    goto LABEL_39;
  }
  *(_QWORD *)M_cur = *(_QWORD *)v5;
  M_cur = (unsigned __int64)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(M_cur);
    goto LABEL_40;
  }
  v11 = this->_M_impl._M_finish._M_node;
  M_cur = (unsigned __int64)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_store8();
    goto LABEL_41;
  }
  this->_M_impl._M_finish._M_node = v11 + 1;
  M_cur = (unsigned __int64)(v11 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(M_cur);
    goto LABEL_42;
  }
  v12 = v11[1];
  M_cur = (unsigned __int64)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  this->_M_impl._M_finish._M_first = v12;
  M_cur = (unsigned __int64)&this->_M_impl._M_finish._M_last;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
    this->_M_impl._M_finish._M_last = v12 + 64;
    this->_M_impl._M_finish._M_cur = v12;
    return;
  }
LABEL_43:
  __asan_report_store8();
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<unsigned long const,std::shared_ptr<SpanHolder>>,false>>>::_M_deallocate_buckets(
    (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,false> > > *const)M_cur,
    (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,false> > >::__bucket_type *)a2,
    v13);
};

// Line 479: range 000000000D469F70-000000000D46A11B
void __fastcall std::deque<long>::_M_push_back_aux<long const&>(
        std::deque<long int> *const this,
        std::remove_reference<long int const&>::type *a2,
        const __int64 *__args_0)
{
  std::deque<long int>::size_type v3; // rbx
  std::deque<long int> *v4; // rax
  std::_Deque_iterator<long int,long int&,long int*>::_Map_pointer v5; // rbx
  std::_Deque_base<long int>::_Ptr node; // rax
  const __int64 *v7; // rsi
  std::_Deque_iterator<long int,long int&,long int*> *p_M_finish; // rdx
  __int64 *M_first; // rdx

  v3 = std::deque<long>::size(this);
  if ( v3 == std::deque<long>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<long>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<long int> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<long>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<long const&>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<long>>::construct<long,long const&>(
    (std::allocator_traits<std::allocator<long int> >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<long,long &,long *>::_M_set_node(p_M_finish, this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 000000000CA304B0-000000000CA30686
void __fastcall std::deque<mysqlpp::Option *>::_M_push_back_aux<mysqlpp::Option * const&>(
        std::deque<mysqlpp::Option*> *const this,
        mysqlpp::Option **a2,
        mysqlpp::Option *const *__args_0)
{
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Map_pointer M_node; // r13
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Map_pointer v6; // rsi
  signed __int64 v7; // r12
  signed __int64 v8; // rcx
  __int64 v9; // rdi
  std::size_t M_map_size; // rdx
  mysqlpp::Option **v11; // rax
  mysqlpp::Option *v12; // rdx
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Map_pointer v13; // rdx
  mysqlpp::Option **v14; // rax
  __int64 v15; // r14
  std::size_t v16; // rax
  std::size_t v17; // r13
  mysqlpp::Option ***v18; // rax
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Map_pointer v19; // rsi
  mysqlpp::Option ***v20; // r15
  mysqlpp::Option ***v21; // r14
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Map_pointer v22; // rdx
  mysqlpp::Option **v23; // rax
  mysqlpp::Option **v24; // rax
  mysqlpp::Option ***v25; // r13
  size_t v26; // rdx

  M_node = this->_M_impl._M_finish._M_node;
  v6 = this->_M_impl._M_start._M_node;
  v7 = (char *)M_node - (char *)v6;
  v8 = this->_M_impl._M_finish._M_cur - this->_M_impl._M_finish._M_first;
  v9 = M_node - v6;
  if ( v8 + ((v9 - 1) << 6) + this->_M_impl._M_start._M_last - this->_M_impl._M_start._M_cur == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  M_map_size = this->_M_impl._M_map_size;
  if ( M_map_size - (M_node - this->_M_impl._M_map) <= 1 )
  {
    v15 = v9 + 2;
    if ( M_map_size > 2 * (v9 + 2) )
    {
      v25 = M_node + 1;
      v21 = &this->_M_impl._M_map[(M_map_size - v15) >> 1];
      v26 = (char *)v25 - (char *)v6;
      if ( v6 <= v21 )
      {
        if ( v6 != v25 )
          memmove((char *)v21 + v7 + 8 - v26, v6, v26);
      }
      else if ( v6 != v25 )
      {
        memmove(v21, v6, v26);
      }
    }
    else
    {
      v16 = 1LL;
      if ( M_map_size )
        v16 = this->_M_impl._M_map_size;
      v17 = M_map_size + v16 + 2;
      if ( v17 > 0xFFFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v18 = (mysqlpp::Option ***)operator new(8 * v17);
      v19 = this->_M_impl._M_start._M_node;
      v20 = v18;
      v21 = &v18[(v17 - v15) >> 1];
      v22 = this->_M_impl._M_finish._M_node + 1;
      if ( v22 != v19 )
        memmove(v21, v19, (char *)v22 - (char *)v19);
      operator delete(this->_M_impl._M_map);
      this->_M_impl._M_map = v20;
      this->_M_impl._M_map_size = v17;
    }
    v23 = *v21;
    M_node = (mysqlpp::Option ***)((char *)v21 + v7);
    this->_M_impl._M_start._M_node = v21;
    this->_M_impl._M_finish._M_node = (mysqlpp::Option ***)((char *)v21 + v7);
    this->_M_impl._M_start._M_first = v23;
    this->_M_impl._M_start._M_last = v23 + 64;
    v24 = *(mysqlpp::Option ***)((char *)v21 + v7);
    this->_M_impl._M_finish._M_first = v24;
    this->_M_impl._M_finish._M_last = v24 + 64;
  }
  v11 = (mysqlpp::Option **)operator new(0x200uLL);
  v12 = *a2;
  M_node[1] = v11;
  *this->_M_impl._M_finish._M_cur = v12;
  v13 = this->_M_impl._M_finish._M_node + 1;
  v14 = *v13;
  this->_M_impl._M_finish._M_node = v13;
  this->_M_impl._M_finish._M_first = v14;
  this->_M_impl._M_finish._M_last = v14 + 64;
  this->_M_impl._M_finish._M_cur = v14;
};

// Line 479: range 000000000D448DB0-000000000D448F5B
void __fastcall std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_push_back_aux<std::__detail::_StateSeq<std::regex_traits<char>> const&>(
        std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *const this,
        std::__detail::_StateSeq<std::regex_traits<char> > *a2,
        const std::__detail::_StateSeq<std::regex_traits<char> > *__args_0)
{
  std::deque<std::__detail::_StateSeq<std::regex_traits<char> >>::size_type v3; // rbx
  std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *v4; // rax
  std::_Deque_iterator<std::__detail::_StateSeq<std::regex_traits<char> >,std::__detail::_StateSeq<std::regex_traits<char> >&,std::__detail::_StateSeq<std::regex_traits<char> >*>::_Map_pointer v5; // rbx
  std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char> >>::_Ptr node; // rax
  const std::__detail::_StateSeq<std::regex_traits<char> > *v7; // rsi
  std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char> >>::iterator *p_M_finish; // rdx
  std::__detail::_StateSeq<std::regex_traits<char> > *M_first; // rdx

  v3 = std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::size(this);
  if ( v3 == std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<std::__detail::_StateSeq<std::regex_traits<char>> const&>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::construct<std::__detail::_StateSeq<std::regex_traits<char>>,std::__detail::_StateSeq<std::regex_traits<char>> const&>(
    (std::allocator_traits<std::allocator<std::__detail::_StateSeq<std::regex_traits<char> > > >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::__detail::_StateSeq<std::regex_traits<char>>,std::__detail::_StateSeq<std::regex_traits<char>>&,std::__detail::_StateSeq<std::regex_traits<char>>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 000000000D448FA4-000000000D44914F
void __fastcall std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_push_back_aux<std::__detail::_StateSeq<std::regex_traits<char>>>(
        std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *const this,
        std::__detail::_StateSeq<std::regex_traits<char> > *a2,
        std::__detail::_StateSeq<std::regex_traits<char> > *__args_0)
{
  std::deque<std::__detail::_StateSeq<std::regex_traits<char> >>::size_type v3; // rbx
  std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *v4; // rax
  std::_Deque_iterator<std::__detail::_StateSeq<std::regex_traits<char> >,std::__detail::_StateSeq<std::regex_traits<char> >&,std::__detail::_StateSeq<std::regex_traits<char> >*>::_Map_pointer v5; // rbx
  std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char> >>::_Ptr node; // rax
  std::__detail::_StateSeq<std::regex_traits<char> > *v7; // rsi
  std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char> >>::iterator *p_M_finish; // rdx
  std::__detail::_StateSeq<std::regex_traits<char> > *M_first; // rdx

  v3 = std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::size(this);
  if ( v3 == std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<std::__detail::_StateSeq<std::regex_traits<char>>>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::construct<std::__detail::_StateSeq<std::regex_traits<char>>,std::__detail::_StateSeq<std::regex_traits<char>>>(
    (std::allocator_traits<std::allocator<std::__detail::_StateSeq<std::regex_traits<char> > > >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::__detail::_StateSeq<std::regex_traits<char>>,std::__detail::_StateSeq<std::regex_traits<char>>&,std::__detail::_StateSeq<std::regex_traits<char>>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 000000000F8F7F90-000000000F8F813B
void __fastcall std::deque<std::any>::_M_push_back_aux<std::any>(
        std::deque<std::any> *const this,
        std::any *a2,
        std::any *__args_0)
{
  std::deque<std::any>::size_type v3; // rbx
  std::deque<std::any> *v4; // rax
  std::_Deque_iterator<std::any,std::any&,std::any*>::_Map_pointer v5; // rbx
  std::_Deque_base<std::any>::_Ptr node; // rax
  std::any *v7; // rsi
  std::_Deque_iterator<std::any,std::any&,std::any*> *p_M_finish; // rdx
  std::any *M_first; // rdx

  v3 = std::deque<std::any>::size(this);
  if ( v3 == std::deque<std::any>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<std::any>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<std::any> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<std::any>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<std::any>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<std::any>>::construct<std::any,std::any>(
    (std::allocator_traits<std::allocator<std::any> >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::any,std::any&,std::any*>::_M_set_node(p_M_finish, this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 000000000F922492-000000000F92263D
void __fastcall std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_push_back_aux<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(
        std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *const this,
        std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *a2,
        std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *__args_0)
{
  std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::size_type v3; // rbx
  std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *v4; // rax
  std::_Deque_iterator<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >,std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >&,std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >*>::_Map_pointer v5; // rbx
  std::_Deque_base<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::_Ptr node; // rax
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *v7; // rsi
  std::_Deque_base<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::iterator *p_M_finish; // rdx
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *M_first; // rdx

  v3 = std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::size(this);
  if ( v3 == std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>>::construct<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(
    (std::allocator_traits<std::allocator<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > > >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>&,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 0000000019B4BA9E-0000000019B4C0D6
void __fastcall std::deque<std::pair<unsigned int,unsigned int>>::_M_push_back_aux<std::pair<unsigned int,unsigned int>>(
        std::deque<std::pair<unsigned int,unsigned int>> *const this,
        std::deque<std::pair<unsigned int,unsigned int>> *a2,
        std::pair<unsigned int,unsigned int> *__args_0)
{
  unsigned __int64 p_M_node; // rdi
  void *p_M_map_size; // rdi
  unsigned __int64 p_M_finish; // rdi
  std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer M_node; // r12
  std::pair<unsigned int,unsigned int> *v9; // rax
  signed __int8 v10; // cl
  __int64 v11; // rsi
  std::deque<std::pair<unsigned int,unsigned int>> *p_M_first; // rdi
  std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer v13; // rax
  std::pair<unsigned int,unsigned int> *v14; // rax
  std::pair<unsigned int,unsigned int> *v15; // rdx

  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)((p_M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_26;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_M_node);
    goto LABEL_27;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_M_node);
    goto LABEL_28;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(p_M_node);
    goto LABEL_29;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(p_M_node);
    goto LABEL_30;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_M_node);
LABEL_31:
    __asan_handle_no_return(p_M_node);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  if ( this->_M_impl._M_start._M_last
     - this->_M_impl._M_start._M_cur
     + ((this->_M_impl._M_finish._M_node - this->_M_impl._M_start._M_node - 1) << 6)
     + this->_M_impl._M_finish._M_cur
     - this->_M_impl._M_finish._M_first == 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_31;
  p_M_map_size = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_map_size);
    goto LABEL_33;
  }
  p_M_map_size = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_M_map_size);
    goto LABEL_34;
  }
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    if ( this->_M_impl._M_map_size - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map) > 1 )
      goto LABEL_12;
    goto LABEL_35;
  }
LABEL_34:
  __asan_report_load8(this);
LABEL_35:
  std::deque<std::pair<unsigned int,unsigned int>>::_M_reallocate_map(this, 1uLL, 0);
LABEL_12:
  p_M_finish = (unsigned __int64)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_37;
  }
  M_node = this->_M_impl._M_finish._M_node;
  v9 = (std::pair<unsigned int,unsigned int> *)operator new(0x200uLL);
  p_M_finish = (unsigned __int64)(M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)(M_node + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    goto LABEL_38;
  }
  M_node[1] = v9;
  p_M_finish = (unsigned __int64)&this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(p_M_finish);
LABEL_39:
    __asan_report_store_n(p_M_finish, 8LL);
LABEL_40:
    v11 = 8LL;
    p_M_first = a2;
    __asan_report_load_n(a2, 8LL);
    goto LABEL_41;
  }
  p_M_finish = (unsigned __int64)this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)((p_M_finish >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((p_M_finish >> 3) + 0x7FFF8000) <= ((__int64)this->_M_impl._M_finish._M_cur & 7)
    || *(_BYTE *)(((p_M_finish + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((p_M_finish + 7) >> 3) + 0x7FFF8000) <= (unsigned __int8)((p_M_finish + 7) & 7) )
  {
    goto LABEL_39;
  }
  v10 = *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000);
  v11 = (unsigned __int8)a2 & 7;
  LOBYTE(v11) = v10 <= (signed __int8)v11;
  if ( ((v10 != 0) & (unsigned __int8)v11) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->_M_impl._M_map + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&a2->_M_impl._M_map + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)a2 + 7) & 7) )
  {
    goto LABEL_40;
  }
  *(_QWORD *)p_M_finish = a2->_M_impl._M_map;
  p_M_first = (std::deque<std::pair<unsigned int,unsigned int>> *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_M_first);
    goto LABEL_42;
  }
  v13 = this->_M_impl._M_finish._M_node;
  p_M_first = (std::deque<std::pair<unsigned int,unsigned int>> *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  this->_M_impl._M_finish._M_node = v13 + 1;
  p_M_first = (std::deque<std::pair<unsigned int,unsigned int>> *)(v13 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v13 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_M_first);
    goto LABEL_44;
  }
  v14 = v13[1];
  p_M_first = (std::deque<std::pair<unsigned int,unsigned int>> *)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8();
    goto LABEL_45;
  }
  this->_M_impl._M_finish._M_first = v14;
  p_M_first = (std::deque<std::pair<unsigned int,unsigned int>> *)&this->_M_impl._M_finish._M_last;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
    this->_M_impl._M_finish._M_last = v14 + 64;
    this->_M_impl._M_finish._M_cur = v14;
    return;
  }
LABEL_45:
  __asan_report_store8();
  std::deque<std::pair<unsigned int,unsigned int>>::emplace_back<std::pair<unsigned int,unsigned int>>(
    p_M_first,
    (std::pair<unsigned int,unsigned int> *)v11,
    v15);
};

// Line 479: range 000000000F8BDC0C-000000000F8BDE46
void __fastcall std::deque<std::set<std::string>>::_M_push_back_aux<std::set<std::string> const&>(
        std::deque<std::set<std::string>> *const this,
        std::set<std::string> *a2,
        const std::set<std::string> *__args_0)
{
  std::deque<std::set<std::string>>::size_type v3; // rbx
  std::deque<std::set<std::string>> *v4; // rax
  std::_Deque_iterator<std::set<std::string>,std::set<std::string>&,std::set<std::string>*>::_Map_pointer v5; // rbx
  std::_Deque_base<std::set<std::string>>::_Ptr node; // rax
  const std::set<std::string> *v7; // rsi
  std::_Deque_iterator<std::set<std::string>,std::set<std::string>&,std::set<std::string>*> *p_M_finish; // rdx
  std::set<std::string> *M_first; // rdx

  v3 = std::deque<std::set<std::string>>::size(this);
  if ( v3 == std::deque<std::set<std::string>>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<std::set<std::string>>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<std::set<std::string>> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<std::set<std::string>>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<std::set<std::string> const&>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<std::set<std::string>>>::construct<std::set<std::string>,std::set<std::string> const&>(
    (std::allocator_traits<std::allocator<std::set<std::string> > >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::set<std::string>,std::set<std::string>&,std::set<std::string>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 000000000F92349A-000000000F923645
void __fastcall std::deque<std::set<std::string>>::_M_push_back_aux<std::set<std::string>>(
        std::deque<std::set<std::string>> *const this,
        std::set<std::string> *a2,
        std::set<std::string> *__args_0)
{
  std::deque<std::set<std::string>>::size_type v3; // rbx
  std::deque<std::set<std::string>> *v4; // rax
  std::_Deque_iterator<std::set<std::string>,std::set<std::string>&,std::set<std::string>*>::_Map_pointer v5; // rbx
  std::_Deque_base<std::set<std::string>>::_Ptr node; // rax
  std::set<std::string> *v7; // rsi
  std::_Deque_iterator<std::set<std::string>,std::set<std::string>&,std::set<std::string>*> *p_M_finish; // rdx
  std::set<std::string> *M_first; // rdx

  v3 = std::deque<std::set<std::string>>::size(this);
  if ( v3 == std::deque<std::set<std::string>>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<std::set<std::string>>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<std::set<std::string>> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<std::set<std::string>>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<std::set<std::string>>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<std::set<std::string>>>::construct<std::set<std::string>,std::set<std::string>>(
    (std::allocator_traits<std::allocator<std::set<std::string> > >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::set<std::string>,std::set<std::string>&,std::set<std::string>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 0000000014E7112A-0000000014E74A58
void __fastcall std::deque<std::shared_ptr<AsyncTask>>::_M_push_back_aux<std::shared_ptr<AsyncTask> const&>(
        std::deque<std::shared_ptr<AsyncTask>> *const this,
        __int64 a2,
        const std::shared_ptr<AsyncTask> *__args_0)
{
  unsigned __int64 p_M_node; // rdi
  unsigned __int64 v5; // rbp
  void *p_M_map_size; // rdi
  void *p_M_finish; // rdi
  std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer M_node; // r12
  std::shared_ptr<AsyncTask> *v9; // rax
  std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Elt_pointer M_cur; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v14; // rdi
  char v15; // dl
  std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer *v16; // rdi
  std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer v17; // rax
  std::shared_ptr<AsyncTask> *v18; // rax
  char v19; // cl

  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)((p_M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_31;
  }
  v5 = a2;
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(p_M_node);
    goto LABEL_32;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_M_node);
    goto LABEL_33;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_M_node);
    goto LABEL_34;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_node);
    goto LABEL_35;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_node);
LABEL_36:
    __asan_handle_no_return(p_M_node);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  if ( this->_M_impl._M_start._M_last
     - this->_M_impl._M_start._M_cur
     + 32 * (this->_M_impl._M_finish._M_node - this->_M_impl._M_start._M_node - 1)
     + this->_M_impl._M_finish._M_cur
     - this->_M_impl._M_finish._M_first == 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_36;
  p_M_map_size = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_map_size);
    goto LABEL_38;
  }
  p_M_map_size = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(p_M_map_size);
    goto LABEL_39;
  }
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    if ( this->_M_impl._M_map_size - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map) > 1 )
      goto LABEL_12;
    goto LABEL_40;
  }
LABEL_39:
  __asan_report_load8(this);
LABEL_40:
  a2 = 1LL;
  std::deque<std::shared_ptr<AsyncTask>>::_M_reallocate_map(this, 1uLL, 0);
LABEL_12:
  p_M_finish = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_42;
  }
  M_node = this->_M_impl._M_finish._M_node;
  v9 = (std::shared_ptr<AsyncTask> *)operator new(0x200uLL);
  p_M_finish = M_node + 1;
  if ( *(_BYTE *)(((unsigned __int64)(M_node + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  M_node[1] = v9;
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_M_finish);
    goto LABEL_44;
  }
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(v5);
    goto LABEL_45;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  M_cur->_M_ptr = *(std::__shared_ptr<AsyncTask,(__gnu_cxx::_Lock_policy)2>::element_type **)v5;
  v11 = v5 + 8;
  if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8(v11);
    goto LABEL_47;
  }
  v12 = *(_QWORD *)(v5 + 8);
  p_M_refcount = &M_cur->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_cur->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    v14 = p_M_refcount;
    __asan_report_store8();
    goto LABEL_48;
  }
  M_cur->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v12;
  if ( !v12 )
    goto LABEL_24;
  v14 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v12 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_49;
  v15 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v14 & 7) + 3) < v15 || !v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)v14, 1u);
    goto LABEL_24;
  }
LABEL_48:
  v12 = __asan_report_store4(v14);
LABEL_49:
  v16 = (std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer *)(v12 + 8);
  v19 = *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v12 + 8) & 7) + 3) >= v19 && v19 )
  {
    __asan_report_load4(v16);
    goto LABEL_53;
  }
  ++*(_DWORD *)(v12 + 8);
LABEL_24:
  v16 = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(v16);
    goto LABEL_54;
  }
  v17 = this->_M_impl._M_finish._M_node;
  v16 = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_store8();
    goto LABEL_55;
  }
  this->_M_impl._M_finish._M_node = v17 + 1;
  v16 = (std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer *)(v17 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v17 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_load8(v16);
    goto LABEL_56;
  }
  v18 = v17[1];
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  this->_M_impl._M_finish._M_first = v18;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
    this->_M_impl._M_finish._M_last = v18 + 32;
    this->_M_impl._M_finish._M_cur = v18;
    return;
  }
LABEL_57:
  __asan_report_store8();
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<AsyncTask,std::allocator<AsyncTask>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<AsyncTask,std::allocator<AsyncTask>,(__gnu_cxx::_Lock_policy)2> > *)a2);
};

// Line 479: range 000000000D0B7DB8-000000000D0B7F63
void __fastcall std::deque<std::shared_ptr<BaseDFNode>>::_M_push_back_aux<std::shared_ptr<BaseDFNode> const&>(
        std::deque<std::shared_ptr<BaseDFNode>> *const this,
        std::shared_ptr<BaseDFNode> *a2,
        const std::shared_ptr<BaseDFNode> *__args_0)
{
  std::deque<std::shared_ptr<BaseDFNode>>::size_type v3; // rbx
  std::deque<std::shared_ptr<BaseDFNode>> *v4; // rax
  std::_Deque_iterator<std::shared_ptr<BaseDFNode>,std::shared_ptr<BaseDFNode>&,std::shared_ptr<BaseDFNode>*>::_Map_pointer v5; // rbx
  std::_Deque_base<std::shared_ptr<BaseDFNode>>::_Ptr node; // rax
  const std::shared_ptr<BaseDFNode> *v7; // rsi
  std::_Deque_iterator<std::shared_ptr<BaseDFNode>,std::shared_ptr<BaseDFNode>&,std::shared_ptr<BaseDFNode>*> *p_M_finish; // rdx
  std::shared_ptr<BaseDFNode> *M_first; // rdx

  v3 = std::deque<std::shared_ptr<BaseDFNode>>::size(this);
  if ( v3 == std::deque<std::shared_ptr<BaseDFNode>>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<std::shared_ptr<BaseDFNode>>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<std::shared_ptr<BaseDFNode>> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<std::shared_ptr<BaseDFNode>>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<std::shared_ptr<BaseDFNode> const&>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<std::shared_ptr<BaseDFNode>>>::construct<std::shared_ptr<BaseDFNode>,std::shared_ptr<BaseDFNode> const&>(
    (std::allocator_traits<std::allocator<std::shared_ptr<BaseDFNode> > >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::shared_ptr<BaseDFNode>,std::shared_ptr<BaseDFNode>&,std::shared_ptr<BaseDFNode>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 000000000F89A032-000000000F89A1DD
void __fastcall std::deque<std::shared_ptr<CustomCommonNodeData>>::_M_push_back_aux<std::shared_ptr<CustomCommonNodeData> const&>(
        std::deque<std::shared_ptr<CustomCommonNodeData>> *const this,
        std::shared_ptr<CustomCommonNodeData> *a2,
        const std::shared_ptr<CustomCommonNodeData> *__args_0)
{
  std::deque<std::shared_ptr<CustomCommonNodeData>>::size_type v3; // rbx
  std::deque<std::shared_ptr<CustomCommonNodeData>> *v4; // rax
  std::_Deque_iterator<std::shared_ptr<CustomCommonNodeData>,std::shared_ptr<CustomCommonNodeData>&,std::shared_ptr<CustomCommonNodeData>*>::_Map_pointer v5; // rbx
  std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::_Ptr node; // rax
  const std::shared_ptr<CustomCommonNodeData> *v7; // rsi
  std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::iterator *p_M_finish; // rdx
  std::shared_ptr<CustomCommonNodeData> *M_first; // rdx

  v3 = std::deque<std::shared_ptr<CustomCommonNodeData>>::size(this);
  if ( v3 == std::deque<std::shared_ptr<CustomCommonNodeData>>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<std::shared_ptr<CustomCommonNodeData>>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<std::shared_ptr<CustomCommonNodeData>> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<std::shared_ptr<CustomCommonNodeData> const&>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<std::shared_ptr<CustomCommonNodeData>>>::construct<std::shared_ptr<CustomCommonNodeData>,std::shared_ptr<CustomCommonNodeData> const&>(
    (std::allocator_traits<std::allocator<std::shared_ptr<CustomCommonNodeData> > >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::shared_ptr<CustomCommonNodeData>,std::shared_ptr<CustomCommonNodeData>&,std::shared_ptr<CustomCommonNodeData>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 000000000F8C631E-000000000F8C64C9
void __fastcall std::deque<std::shared_ptr<LuaASTNode>>::_M_push_back_aux<std::shared_ptr<LuaASTNode> const&>(
        std::deque<std::shared_ptr<LuaASTNode>> *const this,
        std::shared_ptr<LuaASTNode> *a2,
        const std::shared_ptr<LuaASTNode> *__args_0)
{
  std::deque<std::shared_ptr<LuaASTNode>>::size_type v3; // rbx
  std::deque<std::shared_ptr<LuaASTNode>> *v4; // rax
  std::_Deque_iterator<std::shared_ptr<LuaASTNode>,std::shared_ptr<LuaASTNode>&,std::shared_ptr<LuaASTNode>*>::_Map_pointer v5; // rbx
  std::_Deque_base<std::shared_ptr<LuaASTNode>>::_Ptr node; // rax
  const std::shared_ptr<LuaASTNode> *v7; // rsi
  std::_Deque_iterator<std::shared_ptr<LuaASTNode>,std::shared_ptr<LuaASTNode>&,std::shared_ptr<LuaASTNode>*> *p_M_finish; // rdx
  std::shared_ptr<LuaASTNode> *M_first; // rdx

  v3 = std::deque<std::shared_ptr<LuaASTNode>>::size(this);
  if ( v3 == std::deque<std::shared_ptr<LuaASTNode>>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<std::shared_ptr<LuaASTNode>>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<std::shared_ptr<LuaASTNode>> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<std::shared_ptr<LuaASTNode>>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<std::shared_ptr<LuaASTNode> const&>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<std::shared_ptr<LuaASTNode>>>::construct<std::shared_ptr<LuaASTNode>,std::shared_ptr<LuaASTNode> const&>(
    (std::allocator_traits<std::allocator<std::shared_ptr<LuaASTNode> > >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::shared_ptr<LuaASTNode>,std::shared_ptr<LuaASTNode>&,std::shared_ptr<LuaASTNode>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 479: range 0000000014E3D166-0000000014E3D63C
void __fastcall std::deque<std::shared_ptr<MonitorValue>>::_M_push_back_aux<std::shared_ptr<MonitorValue> const&>(
        std::deque<std::shared_ptr<MonitorValue>> *const this,
        __int64 a2,
        const std::shared_ptr<MonitorValue> *__args_0)
{
  unsigned __int64 p_M_node; // rdi
  unsigned __int64 v5; // rbp
  void *p_M_map_size; // rdi
  void *p_M_finish; // rdi
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer M_node; // r12
  std::shared_ptr<MonitorValue> *v9; // rax
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer M_cur; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v14; // rdi
  char v15; // dl
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const ReportType,std::string >,false> > > *p_M_first; // rdi
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer v17; // rax
  std::shared_ptr<MonitorValue> *v18; // rax
  char v19; // cl
  const std::pair<const ReportType,std::string > *v20; // rdx

  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)((p_M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_31;
  }
  v5 = a2;
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(p_M_node);
    goto LABEL_32;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_M_node);
    goto LABEL_33;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_M_node);
    goto LABEL_34;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_node);
    goto LABEL_35;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_node);
LABEL_36:
    __asan_handle_no_return(p_M_node);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  if ( this->_M_impl._M_start._M_last
     - this->_M_impl._M_start._M_cur
     + 32 * (this->_M_impl._M_finish._M_node - this->_M_impl._M_start._M_node - 1)
     + this->_M_impl._M_finish._M_cur
     - this->_M_impl._M_finish._M_first == 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_36;
  p_M_map_size = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_map_size);
    goto LABEL_38;
  }
  p_M_map_size = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(p_M_map_size);
    goto LABEL_39;
  }
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    if ( this->_M_impl._M_map_size - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map) > 1 )
      goto LABEL_12;
    goto LABEL_40;
  }
LABEL_39:
  __asan_report_load8(this);
LABEL_40:
  a2 = 1LL;
  std::deque<std::shared_ptr<MonitorValue>>::_M_reallocate_map(this, 1uLL, 0);
LABEL_12:
  p_M_finish = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_42;
  }
  M_node = this->_M_impl._M_finish._M_node;
  v9 = (std::shared_ptr<MonitorValue> *)operator new(0x200uLL);
  p_M_finish = M_node + 1;
  if ( *(_BYTE *)(((unsigned __int64)(M_node + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  M_node[1] = v9;
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_M_finish);
    goto LABEL_44;
  }
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(v5);
    goto LABEL_45;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  M_cur->_M_ptr = *(std::__shared_ptr<MonitorValue,(__gnu_cxx::_Lock_policy)2>::element_type **)v5;
  v11 = v5 + 8;
  if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8(v11);
    goto LABEL_47;
  }
  v12 = *(_QWORD *)(v5 + 8);
  p_M_refcount = &M_cur->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_cur->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    v14 = p_M_refcount;
    __asan_report_store8();
    goto LABEL_48;
  }
  M_cur->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v12;
  if ( !v12 )
    goto LABEL_24;
  v14 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v12 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_49;
  v15 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v14 & 7) + 3) < v15 || !v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)v14, 1u);
    goto LABEL_24;
  }
LABEL_48:
  v12 = __asan_report_store4(v14);
LABEL_49:
  p_M_first = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const ReportType,std::string >,false> > > *)(v12 + 8);
  v19 = *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v12 + 8) & 7) + 3) >= v19 && v19 )
  {
    __asan_report_load4(p_M_first);
    goto LABEL_53;
  }
  ++*(_DWORD *)(v12 + 8);
LABEL_24:
  p_M_first = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const ReportType,std::string >,false> > > *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(p_M_first);
    goto LABEL_54;
  }
  v17 = this->_M_impl._M_finish._M_node;
  p_M_first = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const ReportType,std::string >,false> > > *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_store8();
    goto LABEL_55;
  }
  this->_M_impl._M_finish._M_node = v17 + 1;
  p_M_first = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const ReportType,std::string >,false> > > *)(v17 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v17 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_load8(p_M_first);
    goto LABEL_56;
  }
  v18 = v17[1];
  p_M_first = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const ReportType,std::string >,false> > > *)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  this->_M_impl._M_finish._M_first = v18;
  p_M_first = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const ReportType,std::string >,false> > > *)&this->_M_impl._M_finish._M_last;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
    this->_M_impl._M_finish._M_last = v18 + 32;
    this->_M_impl._M_finish._M_cur = v18;
    return;
  }
LABEL_57:
  __asan_report_store8();
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<ReportType const,std::string>,false>>>::_M_allocate_node<std::pair<ReportType const,std::string> const&>(
    p_M_first,
    (const std::pair<const ReportType,std::string > *)a2,
    v20);
};

// Line 479: range 0000000014E6460E-0000000014E65074
void __fastcall std::deque<std::shared_ptr<common::minet::Packet>>::_M_push_back_aux<std::shared_ptr<common::minet::Packet> const&>(
        std::deque<std::shared_ptr<common::minet::Packet>> *const this,
        __int64 a2,
        const std::shared_ptr<common::minet::Packet> *__args_0)
{
  unsigned __int64 p_M_node; // rdi
  unsigned __int64 v5; // rbp
  void *p_M_map_size; // rdi
  void *p_M_finish; // rdi
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer M_node; // r12
  std::shared_ptr<common::minet::Packet> *v9; // rax
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Elt_pointer M_cur; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v14; // rdi
  char v15; // dl
  std::deque<std::shared_ptr<common::minet::Packet>> *p_M_first; // rdi
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer v17; // rax
  std::shared_ptr<common::minet::Packet> *v18; // rax
  char v19; // cl
  std::shared_ptr<common::minet::Packet> *v20; // rdx

  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)((p_M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_31;
  }
  v5 = a2;
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(p_M_node);
    goto LABEL_32;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_M_node);
    goto LABEL_33;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_M_node);
    goto LABEL_34;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_node);
    goto LABEL_35;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_node);
LABEL_36:
    __asan_handle_no_return(p_M_node);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  if ( this->_M_impl._M_start._M_last
     - this->_M_impl._M_start._M_cur
     + 32 * (this->_M_impl._M_finish._M_node - this->_M_impl._M_start._M_node - 1)
     + this->_M_impl._M_finish._M_cur
     - this->_M_impl._M_finish._M_first == 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_36;
  p_M_map_size = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_map_size);
    goto LABEL_38;
  }
  p_M_map_size = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(p_M_map_size);
    goto LABEL_39;
  }
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    if ( this->_M_impl._M_map_size - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map) > 1 )
      goto LABEL_12;
    goto LABEL_40;
  }
LABEL_39:
  __asan_report_load8(this);
LABEL_40:
  a2 = 1LL;
  std::deque<std::shared_ptr<common::minet::Packet>>::_M_reallocate_map(this, 1uLL, 0);
LABEL_12:
  p_M_finish = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_42;
  }
  M_node = this->_M_impl._M_finish._M_node;
  v9 = (std::shared_ptr<common::minet::Packet> *)operator new(0x200uLL);
  p_M_finish = M_node + 1;
  if ( *(_BYTE *)(((unsigned __int64)(M_node + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  M_node[1] = v9;
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_M_finish);
    goto LABEL_44;
  }
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(v5);
    goto LABEL_45;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  M_cur->_M_ptr = *(std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type **)v5;
  v11 = v5 + 8;
  if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8(v11);
    goto LABEL_47;
  }
  v12 = *(_QWORD *)(v5 + 8);
  p_M_refcount = &M_cur->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_cur->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    v14 = p_M_refcount;
    __asan_report_store8();
    goto LABEL_48;
  }
  M_cur->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v12;
  if ( !v12 )
    goto LABEL_24;
  v14 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v12 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_49;
  v15 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v14 & 7) + 3) < v15 || !v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)v14, 1u);
    goto LABEL_24;
  }
LABEL_48:
  v12 = __asan_report_store4(v14);
LABEL_49:
  p_M_first = (std::deque<std::shared_ptr<common::minet::Packet>> *)(v12 + 8);
  v19 = *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v12 + 8) & 7) + 3) >= v19 && v19 )
  {
    __asan_report_load4(p_M_first);
    goto LABEL_53;
  }
  ++*(_DWORD *)(v12 + 8);
LABEL_24:
  p_M_first = (std::deque<std::shared_ptr<common::minet::Packet>> *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(p_M_first);
    goto LABEL_54;
  }
  v17 = this->_M_impl._M_finish._M_node;
  p_M_first = (std::deque<std::shared_ptr<common::minet::Packet>> *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_store8();
    goto LABEL_55;
  }
  this->_M_impl._M_finish._M_node = v17 + 1;
  p_M_first = (std::deque<std::shared_ptr<common::minet::Packet>> *)(v17 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v17 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_load8(p_M_first);
    goto LABEL_56;
  }
  v18 = v17[1];
  p_M_first = (std::deque<std::shared_ptr<common::minet::Packet>> *)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  this->_M_impl._M_finish._M_first = v18;
  p_M_first = (std::deque<std::shared_ptr<common::minet::Packet>> *)&this->_M_impl._M_finish._M_last;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
    this->_M_impl._M_finish._M_last = v18 + 32;
    this->_M_impl._M_finish._M_cur = v18;
    return;
  }
LABEL_57:
  __asan_report_store8();
  std::deque<std::shared_ptr<common::minet::Packet>>::_M_push_back_aux<std::shared_ptr<common::minet::Packet>&>(
    p_M_first,
    (std::shared_ptr<common::minet::Packet> *)a2,
    v20);
};

// Line 479: range 000000000C9A470E-000000000C9A4C19
void __fastcall std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384>>>>::_M_push_back_aux<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384>>> const&>(
        std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >> *const this,
        __int64 a2,
        const std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > *__args_0)
{
  unsigned __int64 p_M_node; // rdi
  unsigned __int64 v5; // rbp
  void *p_M_map_size; // rdi
  void *p_M_finish; // rdi
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer M_node; // r12
  std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > *v9; // rax
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Elt_pointer M_cur; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v14; // rdi
  char v15; // dl
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer *v16; // rdi
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer v17; // rax
  std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > *v18; // rax
  char v19; // cl

  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)((p_M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_31;
  }
  v5 = a2;
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(p_M_node);
    goto LABEL_32;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_M_node);
    goto LABEL_33;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_M_node);
    goto LABEL_34;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_node);
    goto LABEL_35;
  }
  p_M_node = (unsigned __int64)&this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_node);
LABEL_36:
    __asan_handle_no_return(p_M_node);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  if ( this->_M_impl._M_start._M_last
     - this->_M_impl._M_start._M_cur
     + 32 * (this->_M_impl._M_finish._M_node - this->_M_impl._M_start._M_node - 1)
     + this->_M_impl._M_finish._M_cur
     - this->_M_impl._M_finish._M_first == 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_36;
  p_M_map_size = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_map_size);
    goto LABEL_38;
  }
  p_M_map_size = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(p_M_map_size);
    goto LABEL_39;
  }
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    if ( this->_M_impl._M_map_size - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map) > 1 )
      goto LABEL_12;
    goto LABEL_40;
  }
LABEL_39:
  __asan_report_load8(this);
LABEL_40:
  a2 = 1LL;
  std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384>>>>::_M_reallocate_map(
    this,
    1uLL,
    0);
LABEL_12:
  p_M_finish = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_42;
  }
  M_node = this->_M_impl._M_finish._M_node;
  v9 = (std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > *)operator new(0x200uLL);
  p_M_finish = M_node + 1;
  if ( *(_BYTE *)(((unsigned __int64)(M_node + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  M_node[1] = v9;
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_M_finish);
    goto LABEL_44;
  }
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(v5);
    goto LABEL_45;
  }
  if ( *(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  M_cur->_M_ptr = *(std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type **)v5;
  v11 = v5 + 8;
  if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8(v11);
    goto LABEL_47;
  }
  v12 = *(_QWORD *)(v5 + 8);
  p_M_refcount = &M_cur->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_cur->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    v14 = p_M_refcount;
    __asan_report_store8();
    goto LABEL_48;
  }
  M_cur->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v12;
  if ( !v12 )
    goto LABEL_24;
  v14 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v12 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_49;
  v15 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v14 & 7) + 3) < v15 || !v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)v14, 1u);
    goto LABEL_24;
  }
LABEL_48:
  v12 = __asan_report_store4(v14);
LABEL_49:
  v16 = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer *)(v12 + 8);
  v19 = *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v12 + 8) & 7) + 3) >= v19 && v19 )
  {
    __asan_report_load4(v16);
    goto LABEL_53;
  }
  ++*(_DWORD *)(v12 + 8);
LABEL_24:
  v16 = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(v16);
    goto LABEL_54;
  }
  v17 = this->_M_impl._M_finish._M_node;
  v16 = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_store8();
    goto LABEL_55;
  }
  this->_M_impl._M_finish._M_node = v17 + 1;
  v16 = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer *)(v17 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v17 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_load8(v16);
    goto LABEL_56;
  }
  v18 = v17[1];
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  this->_M_impl._M_finish._M_first = v18;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
    this->_M_impl._M_finish._M_last = v18 + 32;
    this->_M_impl._M_finish._M_cur = v18;
    return;
  }
LABEL_57:
  __asan_report_store8();
  std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::StringStream<common::tools::FixedBuffer<16384>>,common::tools::perf::allocator<common::tools::StringStream<common::tools::FixedBuffer<16384>>,common::tools::StringStream<common::tools::FixedBuffer<16384>>>,(__gnu_cxx::_Lock_policy)2>,common::tools::StringStream<common::tools::FixedBuffer<16384>>>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::StringStream<common::tools::FixedBuffer<16384> >,common::tools::perf::allocator<common::tools::StringStream<common::tools::FixedBuffer<16384> >,common::tools::StringStream<common::tools::FixedBuffer<16384> > >,(__gnu_cxx::_Lock_policy)2>,common::tools::StringStream<common::tools::FixedBuffer<16384> > > *)a2);
};

// Line 479: range 0000000014ED86E8-0000000014ED8A65
void __fastcall std::deque<std::string>::_M_push_back_aux<std::string&>(
        std::deque<std::string> *const this,
        unsigned __int64 a2,
        std::string *__args_0)
{
  std::_Deque_base<std::string>::iterator *p_M_node; // rdi
  void *p_M_map_size; // rdi
  std::_Deque_base<std::string>::iterator *p_M_string_length; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer M_node; // r12
  std::string::size_type v8; // rax
  std::forward_iterator_tag v9; // cl
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer M_cur; // rdi
  std::string::size_type *v11; // rax
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer *v12; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer v13; // rax
  std::string *M_string_length; // rax
  void *v15; // rax
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer v16; // rax
  void *v17; // rdi

  p_M_node = (std::_Deque_base<std::string>::iterator *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)p_M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_20;
  }
  p_M_node = (std::_Deque_base<std::string>::iterator *)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(p_M_node);
    goto LABEL_21;
  }
  p_M_node = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(p_M_node);
    goto LABEL_22;
  }
  p_M_node = (std::_Deque_base<std::string>::iterator *)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_node);
    goto LABEL_23;
  }
  p_M_node = (std::_Deque_base<std::string>::iterator *)&this->_M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(p_M_node);
    goto LABEL_24;
  }
  p_M_node = &this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_M_node);
LABEL_25:
    __asan_handle_no_return(p_M_node);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  if ( this->_M_impl._M_start._M_last
     - this->_M_impl._M_start._M_cur
     + 16 * ((((char *)this->_M_impl._M_finish._M_node - (char *)this->_M_impl._M_start._M_node) >> 3) - 1)
     + this->_M_impl._M_finish._M_cur
     - this->_M_impl._M_finish._M_first == 0x3FFFFFFFFFFFFFFLL )
    goto LABEL_25;
  p_M_map_size = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_map_size);
    goto LABEL_27;
  }
  p_M_map_size = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_M_map_size);
    goto LABEL_28;
  }
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    if ( this->_M_impl._M_map_size - (((char *)this->_M_impl._M_finish._M_node - (char *)this->_M_impl._M_map) >> 3) > 1 )
      goto LABEL_12;
    goto LABEL_29;
  }
LABEL_28:
  __asan_report_load8(this);
LABEL_29:
  std::deque<std::string>::_M_reallocate_map(this, 1uLL, 0);
LABEL_12:
  p_M_string_length = (std::_Deque_base<std::string>::iterator *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
    goto LABEL_31;
  }
  M_node = this->_M_impl._M_finish._M_node;
  v8 = operator new(0x200uLL);
  p_M_string_length = (std::_Deque_base<std::string>::iterator *)&M_node->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&M_node->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8();
    goto LABEL_32;
  }
  M_node->_M_string_length = v8;
  p_M_string_length = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_M_string_length);
    goto LABEL_33;
  }
  M_cur = this->_M_impl._M_finish._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8();
    goto LABEL_34;
  }
  M_cur->_M_dataplus._M_p = M_cur->_anon_0._M_local_buf;
  if ( *(_BYTE *)((a2 >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    v11 = (std::string::size_type *)__asan_report_load8(a2);
    goto LABEL_35;
  }
  v11 = (std::string::size_type *)(a2 + 8);
  if ( !*(_BYTE *)(((a2 + 8) >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(M_cur, *(char **)a2, (char *)(*(_QWORD *)(a2 + 8) + *(_QWORD *)a2), v9);
    goto LABEL_36;
  }
LABEL_35:
  __asan_report_load8(v11);
LABEL_36:
  v12 = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v12);
    goto LABEL_43;
  }
  v13 = this->_M_impl._M_finish._M_node;
  v12 = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_store8();
    goto LABEL_44;
  }
  this->_M_impl._M_finish._M_node = (std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer)&v13->_M_string_length;
  v12 = (std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer *)&v13->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v13->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(v12);
    goto LABEL_45;
  }
  M_string_length = (std::string *)v13->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
LABEL_46:
    __asan_report_store8();
    __cxa_begin_catch(v15);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v16 = this->_M_impl._M_finish._M_node;
    if ( *(_BYTE *)(((unsigned __int64)&v16->_M_string_length >> 3) + 0x7FFF8000) )
      v16 = (std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer)__asan_report_load8(&v16->_M_string_length);
    v17 = (void *)v16->_M_string_length;
    operator delete(v17);
    __asan_handle_no_return(v17);
    __cxa_rethrow();
  }
  this->_M_impl._M_finish._M_first = M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    goto LABEL_46;
  this->_M_impl._M_finish._M_last = M_string_length + 16;
  this->_M_impl._M_finish._M_cur = M_string_length;
};

// Line 479: range 000000000F0BEDE6-000000000F0BEF91
void __fastcall std::deque<unsigned int>::_M_push_back_aux<unsigned int const&>(
        std::deque<unsigned int> *const this,
        std::remove_reference<unsigned int const&>::type *a2,
        const unsigned int *__args_0)
{
  std::deque<unsigned int>::size_type v3; // rbx
  std::deque<unsigned int> *v4; // rax
  std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*>::_Map_pointer v5; // rbx
  std::_Deque_base<unsigned int>::_Ptr node; // rax
  const unsigned int *v7; // rsi
  std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *p_M_finish; // rdx
  unsigned int *M_first; // rdx

  v3 = std::deque<unsigned int>::size(this);
  if ( v3 == std::deque<unsigned int>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  std::deque<unsigned int>::_M_reserve_map_at_back(this, 1uLL);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    v4 = (std::deque<unsigned int> *)__asan_report_load8(&this->_M_impl._M_finish._M_node);
  v5 = this->_M_impl._M_finish._M_node + 1;
  node = std::_Deque_base<unsigned int>::_M_allocate_node(v4);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v5 = node;
  v7 = std::forward<unsigned int const&>(a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish);
  std::allocator_traits<std::allocator<unsigned int>>::construct<unsigned int,unsigned int const&>(
    (std::allocator_traits<std::allocator<unsigned int> >::allocator_type *)this,
    this->_M_impl._M_finish._M_cur,
    v7,
    this->_M_impl._M_finish._M_cur);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_first);
  M_first = this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = M_first;
};

// Line 555: range 000000000F8BE562-000000000F8BE673
void __cdecl std::deque<LuaIndexCheckerContext>::_M_pop_back_aux(std::deque<LuaIndexCheckerContext> *const this)
{
  std::deque<LuaIndexCheckerContext> *v1; // rax
  std::_Deque_iterator<LuaIndexCheckerContext,LuaIndexCheckerContext&,LuaIndexCheckerContext*> *p_M_finish; // rdx
  LuaIndexCheckerContext *v3; // rcx
  LuaIndexCheckerContext *M_cur; // rbx
  std::allocator_traits<std::allocator<LuaIndexCheckerContext> >::allocator_type *Tp_allocator; // rax

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    v1 = (std::deque<LuaIndexCheckerContext> *)__asan_report_load8(&this->_M_impl._M_finish._M_first);
  std::_Deque_base<LuaIndexCheckerContext>::_M_deallocate_node(v1, this->_M_impl._M_finish._M_first);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<LuaIndexCheckerContext,LuaIndexCheckerContext&,LuaIndexCheckerContext*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node - 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  v3 = this->_M_impl._M_finish._M_last - 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = v3;
  M_cur = this->_M_impl._M_finish._M_cur;
  Tp_allocator = std::_Deque_base<LuaIndexCheckerContext>::_M_get_Tp_allocator(this);
  std::allocator_traits<std::allocator<LuaIndexCheckerContext>>::destroy<LuaIndexCheckerContext>(Tp_allocator, M_cur);
};

// Line 555: range 000000000D46A318-000000000D46A429
void __cdecl std::deque<long>::_M_pop_back_aux(std::deque<long int> *const this)
{
  std::deque<long int> *v1; // rax
  std::_Deque_iterator<long int,long int&,long int*> *p_M_finish; // rdx
  __int64 *v3; // rcx
  __int64 *M_cur; // rbx
  std::allocator_traits<std::allocator<long int> >::allocator_type *Tp_allocator; // rax

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    v1 = (std::deque<long int> *)__asan_report_load8(&this->_M_impl._M_finish._M_first);
  std::_Deque_base<long>::_M_deallocate_node(v1, this->_M_impl._M_finish._M_first);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<long,long &,long *>::_M_set_node(p_M_finish, this->_M_impl._M_finish._M_node - 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  v3 = this->_M_impl._M_finish._M_last - 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = v3;
  M_cur = this->_M_impl._M_finish._M_cur;
  Tp_allocator = std::_Deque_base<long>::_M_get_Tp_allocator(this);
  std::allocator_traits<std::allocator<long>>::destroy<long>(Tp_allocator, M_cur);
};

// Line 555: range 000000000D429DA8-000000000D429EB9
void __cdecl std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_pop_back_aux(
        std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *const this)
{
  std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *v1; // rax
  std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char> >>::iterator *p_M_finish; // rdx
  std::__detail::_StateSeq<std::regex_traits<char> > *v3; // rcx
  std::__detail::_StateSeq<std::regex_traits<char> > *M_cur; // rbx
  std::allocator_traits<std::allocator<std::__detail::_StateSeq<std::regex_traits<char> > > >::allocator_type *Tp_allocator; // rax

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    v1 = (std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *)__asan_report_load8(&this->_M_impl._M_finish._M_first);
  std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_deallocate_node(
    v1,
    this->_M_impl._M_finish._M_first);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::__detail::_StateSeq<std::regex_traits<char>>,std::__detail::_StateSeq<std::regex_traits<char>>&,std::__detail::_StateSeq<std::regex_traits<char>>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node - 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  v3 = this->_M_impl._M_finish._M_last - 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = v3;
  M_cur = this->_M_impl._M_finish._M_cur;
  Tp_allocator = std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_get_Tp_allocator(this);
  std::allocator_traits<std::allocator<std::__detail::_StateSeq<std::regex_traits<char>>>>::destroy<std::__detail::_StateSeq<std::regex_traits<char>>>(
    Tp_allocator,
    M_cur);
};

// Line 555: range 000000000F8BC53A-000000000F8BC64B
void __cdecl std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_pop_back_aux(
        std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *const this)
{
  std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *v1; // rax
  std::_Deque_base<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::iterator *p_M_finish; // rdx
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *v3; // rcx
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *M_cur; // rbx
  std::allocator_traits<std::allocator<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > > >::allocator_type *Tp_allocator; // rax

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    v1 = (std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *)__asan_report_load8(&this->_M_impl._M_finish._M_first);
  std::_Deque_base<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_deallocate_node(
    v1,
    this->_M_impl._M_finish._M_first);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>&,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node - 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  v3 = this->_M_impl._M_finish._M_last - 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = v3;
  M_cur = this->_M_impl._M_finish._M_cur;
  Tp_allocator = std::_Deque_base<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_get_Tp_allocator(this);
  std::allocator_traits<std::allocator<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>>::destroy<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(
    Tp_allocator,
    M_cur);
};

// Line 555: range 000000000F8BE42A-000000000F8BE53B
void __cdecl std::deque<std::set<std::string>>::_M_pop_back_aux(std::deque<std::set<std::string>> *const this)
{
  std::deque<std::set<std::string>> *v1; // rax
  std::_Deque_iterator<std::set<std::string>,std::set<std::string>&,std::set<std::string>*> *p_M_finish; // rdx
  std::set<std::string> *v3; // rcx
  std::set<std::string> *M_cur; // rbx
  std::allocator_traits<std::allocator<std::set<std::string> > >::allocator_type *Tp_allocator; // rax

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    v1 = (std::deque<std::set<std::string>> *)__asan_report_load8(&this->_M_impl._M_finish._M_first);
  std::_Deque_base<std::set<std::string>>::_M_deallocate_node(v1, this->_M_impl._M_finish._M_first);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::set<std::string>,std::set<std::string>&,std::set<std::string>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node - 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  v3 = this->_M_impl._M_finish._M_last - 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = v3;
  M_cur = this->_M_impl._M_finish._M_cur;
  Tp_allocator = std::_Deque_base<std::set<std::string>>::_M_get_Tp_allocator(this);
  std::allocator_traits<std::allocator<std::set<std::string>>>::destroy<std::set<std::string>>(Tp_allocator, M_cur);
};

// Line 555: range 000000000F8C66A0-000000000F8C67B1
void __cdecl std::deque<std::shared_ptr<LuaASTNode>>::_M_pop_back_aux(
        std::deque<std::shared_ptr<LuaASTNode>> *const this)
{
  std::deque<std::shared_ptr<LuaASTNode>> *v1; // rax
  std::_Deque_iterator<std::shared_ptr<LuaASTNode>,std::shared_ptr<LuaASTNode>&,std::shared_ptr<LuaASTNode>*> *p_M_finish; // rdx
  std::shared_ptr<LuaASTNode> *v3; // rcx
  std::shared_ptr<LuaASTNode> *M_cur; // rbx
  std::allocator_traits<std::allocator<std::shared_ptr<LuaASTNode> > >::allocator_type *Tp_allocator; // rax

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    v1 = (std::deque<std::shared_ptr<LuaASTNode>> *)__asan_report_load8(&this->_M_impl._M_finish._M_first);
  std::_Deque_base<std::shared_ptr<LuaASTNode>>::_M_deallocate_node(v1, this->_M_impl._M_finish._M_first);
  p_M_finish = &this->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  std::_Deque_iterator<std::shared_ptr<LuaASTNode>,std::shared_ptr<LuaASTNode>&,std::shared_ptr<LuaASTNode>*>::_M_set_node(
    p_M_finish,
    this->_M_impl._M_finish._M_node - 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_last);
  v3 = this->_M_impl._M_finish._M_last - 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_finish._M_cur = v3;
  M_cur = this->_M_impl._M_finish._M_cur;
  Tp_allocator = std::_Deque_base<std::shared_ptr<LuaASTNode>>::_M_get_Tp_allocator(this);
  std::allocator_traits<std::allocator<std::shared_ptr<LuaASTNode>>>::destroy<std::shared_ptr<LuaASTNode>>(
    Tp_allocator,
    M_cur);
};

// Line 555: range 0000000014E80838-0000000014E809E6
void __fastcall std::deque<jaegertracing::SpanContext const*>::_M_pop_back_aux(
        std::deque<const jaegertracing::SpanContext*> *const this)
{
  __int64 *v1; // rsi
  opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *p_M_first; // rdi
  std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer M_node; // rax
  const jaegertracing::SpanContext **v5; // rax
  const jaegertracing::SpanContext **v6; // rax
  const jaegertracing::SpanContext **v7; // rax

  p_M_first = (opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)p_M_first >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_first);
    goto LABEL_10;
  }
  operator delete(this->_M_impl._M_finish._M_first);
  p_M_first = (opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_load8(p_M_first);
    goto LABEL_11;
  }
  M_node = this->_M_impl._M_finish._M_node;
  p_M_first = (opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *)&this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8();
    goto LABEL_12;
  }
  this->_M_impl._M_finish._M_node = M_node - 1;
  p_M_first = (opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *)(M_node - 1);
  if ( *(_BYTE *)(((unsigned __int64)(M_node - 1) >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_M_first);
    goto LABEL_13;
  }
  v5 = *(M_node - 1);
  p_M_first = (opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *)&this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    goto LABEL_14;
  }
  this->_M_impl._M_finish._M_first = v5;
  v6 = v5 + 64;
  p_M_first = (opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *)&this->_M_impl._M_finish._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  this->_M_impl._M_finish._M_last = v6;
  v7 = v6 - 1;
  p_M_first = (opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *)&this->_M_impl._M_finish;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    this->_M_impl._M_finish._M_cur = v7;
    return;
  }
LABEL_15:
  __asan_report_store8();
  opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<long,opentracing::v3::util::detail::value_traits<long,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
    p_M_first,
    v1);
};

// Line 555: range 000000000C9A2F1C-000000000C9A32E2
void __fastcall std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384>>>>::_M_pop_back_aux(
        std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >> *const this)
{
  unsigned __int64 M_pi; // rbx
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Elt_pointer *p_M_first; // rdi
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer v3; // rax
  std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > *v4; // rax
  std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > *v5; // rax
  std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > *v6; // rax
  char v7; // dl
  signed __int32 v8; // eax
  char v9; // dl
  unsigned __int64 v10; // rdi
  char v11; // dl
  signed __int32 v12; // eax
  unsigned __int64 v13; // rdi
  char v14; // dl

  M_pi = (unsigned __int64)this;
  p_M_first = &this->_M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)p_M_first >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_first);
    goto LABEL_17;
  }
  operator delete(*(void **)(M_pi + 56));
  p_M_first = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Elt_pointer *)(M_pi + 72);
  if ( *(_BYTE *)(((M_pi + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(p_M_first);
    goto LABEL_18;
  }
  v3 = *(std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer *)(M_pi + 72);
  p_M_first = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Elt_pointer *)(M_pi + 72);
  if ( *(_BYTE *)(((M_pi + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  *(_QWORD *)(M_pi + 72) = v3 - 1;
  p_M_first = v3 - 1;
  if ( *(_BYTE *)(((unsigned __int64)(v3 - 1) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(p_M_first);
    goto LABEL_20;
  }
  v4 = *(v3 - 1);
  p_M_first = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Elt_pointer *)(M_pi + 56);
  if ( *(_BYTE *)(((M_pi + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8();
    goto LABEL_21;
  }
  *(_QWORD *)(M_pi + 56) = v4;
  v5 = v4 + 32;
  p_M_first = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Elt_pointer *)(M_pi + 64);
  if ( *(_BYTE *)(((M_pi + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  *(_QWORD *)(M_pi + 64) = v5;
  v6 = v5 - 1;
  p_M_first = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Elt_pointer *)(M_pi + 48);
  if ( *(_BYTE *)(((M_pi + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  *(_QWORD *)(M_pi + 48) = v6;
  p_M_first = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Elt_pointer *)&v6->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v6->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(p_M_first);
    goto LABEL_24;
  }
  M_pi = (unsigned __int64)v6->_M_refcount._M_pi;
  if ( !M_pi )
    return;
  p_M_first = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Elt_pointer *)(M_pi + 8);
  if ( !&_pthread_key_create )
    goto LABEL_25;
  v7 = *(_BYTE *)(((unsigned __int64)p_M_first >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_first & 7) + 3) < v7 || !v7 )
  {
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)p_M_first, 0xFFFFFFFF);
    goto LABEL_14;
  }
LABEL_24:
  __asan_report_store4(p_M_first);
LABEL_25:
  v9 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) >= v9 && v9 )
  {
    __asan_report_load4(M_pi + 8);
    goto LABEL_29;
  }
  v8 = *(_DWORD *)(M_pi + 8);
  *(_DWORD *)(M_pi + 8) = v8 - 1;
LABEL_14:
  if ( v8 != 1 )
    return;
LABEL_29:
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
    v10 = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_40;
  }
  v10 = *(_QWORD *)M_pi + 16LL;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(v10);
    goto LABEL_41;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 16LL))(M_pi);
  v10 = M_pi + 12;
  if ( !&_pthread_key_create )
    goto LABEL_42;
  v11 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
  if ( (char)((v10 & 7) + 3) < v11 || !v11 )
  {
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF);
    goto LABEL_35;
  }
LABEL_41:
  __asan_report_store4(v10);
LABEL_42:
  v14 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 12) & 7) + 3) >= v14 && v14 )
  {
    __asan_report_load4(M_pi + 12);
    goto LABEL_46;
  }
  v12 = *(_DWORD *)(M_pi + 12);
  *(_DWORD *)(M_pi + 12) = v12 - 1;
LABEL_35:
  if ( v12 == 1 )
  {
    if ( !*(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      v13 = *(_QWORD *)M_pi + 24LL;
      if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 24LL))(M_pi);
        return;
      }
LABEL_47:
      __asan_report_load8(v13);
      JUMPOUT(0xC9A31A1LL);
    }
LABEL_46:
    v13 = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_47;
  }
};

// Line 571: range 000000000F87AF22-000000000F87B054
void __cdecl std::deque<Coordinate>::_M_pop_front_aux(std::deque<Coordinate> *const this)
{
  Coordinate *M_cur; // rbx
  std::allocator_traits<std::allocator<Coordinate> >::allocator_type *Tp_allocator; // rax
  std::deque<Coordinate> *v3; // rax
  std::_Deque_iterator<Coordinate,Coordinate&,Coordinate*> *p_M_start; // rdx
  Coordinate *M_first; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start);
  M_cur = this->_M_impl._M_start._M_cur;
  Tp_allocator = std::_Deque_base<Coordinate>::_M_get_Tp_allocator(this);
  std::allocator_traits<std::allocator<Coordinate>>::destroy<Coordinate>(Tp_allocator, M_cur);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
    v3 = (std::deque<Coordinate> *)__asan_report_load8(&this->_M_impl._M_start._M_first);
  std::_Deque_base<Coordinate>::_M_deallocate_node(v3, this->_M_impl._M_start._M_first);
  p_M_start = &this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  std::_Deque_iterator<Coordinate,Coordinate&,Coordinate*>::_M_set_node(p_M_start, this->_M_impl._M_start._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_first);
  M_first = this->_M_impl._M_start._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_start._M_cur = M_first;
};

// Line 571: range 000000000F889BF0-000000000F889D22
void __cdecl std::deque<std::any>::_M_pop_front_aux(std::deque<std::any> *const this)
{
  std::any *M_cur; // rbx
  std::allocator_traits<std::allocator<std::any> >::allocator_type *Tp_allocator; // rax
  std::deque<std::any> *v3; // rax
  std::_Deque_iterator<std::any,std::any&,std::any*> *p_M_start; // rdx
  std::any *M_first; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start);
  M_cur = this->_M_impl._M_start._M_cur;
  Tp_allocator = std::_Deque_base<std::any>::_M_get_Tp_allocator(this);
  std::allocator_traits<std::allocator<std::any>>::destroy<std::any>(Tp_allocator, M_cur);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
    v3 = (std::deque<std::any> *)__asan_report_load8(&this->_M_impl._M_start._M_first);
  std::_Deque_base<std::any>::_M_deallocate_node(v3, this->_M_impl._M_start._M_first);
  p_M_start = &this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  std::_Deque_iterator<std::any,std::any&,std::any*>::_M_set_node(p_M_start, this->_M_impl._M_start._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_first);
  M_first = this->_M_impl._M_start._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_start._M_cur = M_first;
};

// Line 571: range 000000000D0B8028-000000000D0B815A
void __cdecl std::deque<std::shared_ptr<BaseDFNode>>::_M_pop_front_aux(
        std::deque<std::shared_ptr<BaseDFNode>> *const this)
{
  std::shared_ptr<BaseDFNode> *M_cur; // rbx
  std::allocator_traits<std::allocator<std::shared_ptr<BaseDFNode> > >::allocator_type *Tp_allocator; // rax
  std::deque<std::shared_ptr<BaseDFNode>> *v3; // rax
  std::_Deque_iterator<std::shared_ptr<BaseDFNode>,std::shared_ptr<BaseDFNode>&,std::shared_ptr<BaseDFNode>*> *p_M_start; // rdx
  std::shared_ptr<BaseDFNode> *M_first; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start);
  M_cur = this->_M_impl._M_start._M_cur;
  Tp_allocator = std::_Deque_base<std::shared_ptr<BaseDFNode>>::_M_get_Tp_allocator(this);
  std::allocator_traits<std::allocator<std::shared_ptr<BaseDFNode>>>::destroy<std::shared_ptr<BaseDFNode>>(
    Tp_allocator,
    M_cur);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
    v3 = (std::deque<std::shared_ptr<BaseDFNode>> *)__asan_report_load8(&this->_M_impl._M_start._M_first);
  std::_Deque_base<std::shared_ptr<BaseDFNode>>::_M_deallocate_node(v3, this->_M_impl._M_start._M_first);
  p_M_start = &this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  std::_Deque_iterator<std::shared_ptr<BaseDFNode>,std::shared_ptr<BaseDFNode>&,std::shared_ptr<BaseDFNode>*>::_M_set_node(
    p_M_start,
    this->_M_impl._M_start._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_first);
  M_first = this->_M_impl._M_start._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_start._M_cur = M_first;
};

// Line 571: range 000000000F89A27C-000000000F89A3AE
void __cdecl std::deque<std::shared_ptr<CustomCommonNodeData>>::_M_pop_front_aux(
        std::deque<std::shared_ptr<CustomCommonNodeData>> *const this)
{
  std::shared_ptr<CustomCommonNodeData> *M_cur; // rbx
  std::allocator_traits<std::allocator<std::shared_ptr<CustomCommonNodeData> > >::allocator_type *Tp_allocator; // rax
  std::deque<std::shared_ptr<CustomCommonNodeData>> *v3; // rax
  std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::iterator *p_M_start; // rdx
  std::shared_ptr<CustomCommonNodeData> *M_first; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start);
  M_cur = this->_M_impl._M_start._M_cur;
  Tp_allocator = std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::_M_get_Tp_allocator(this);
  std::allocator_traits<std::allocator<std::shared_ptr<CustomCommonNodeData>>>::destroy<std::shared_ptr<CustomCommonNodeData>>(
    Tp_allocator,
    M_cur);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
    v3 = (std::deque<std::shared_ptr<CustomCommonNodeData>> *)__asan_report_load8(&this->_M_impl._M_start._M_first);
  std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::_M_deallocate_node(v3, this->_M_impl._M_start._M_first);
  p_M_start = &this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  std::_Deque_iterator<std::shared_ptr<CustomCommonNodeData>,std::shared_ptr<CustomCommonNodeData>&,std::shared_ptr<CustomCommonNodeData>*>::_M_set_node(
    p_M_start,
    this->_M_impl._M_start._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_first);
  M_first = this->_M_impl._M_start._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_start._M_cur = M_first;
};

// Line 571: range 000000000F0BF030-000000000F0BF162
void __cdecl std::deque<unsigned int>::_M_pop_front_aux(std::deque<unsigned int> *const this)
{
  unsigned int *M_cur; // rbx
  std::allocator_traits<std::allocator<unsigned int> >::allocator_type *Tp_allocator; // rax
  std::deque<unsigned int> *v3; // rax
  std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *p_M_start; // rdx
  unsigned int *M_first; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start);
  M_cur = this->_M_impl._M_start._M_cur;
  Tp_allocator = std::_Deque_base<unsigned int>::_M_get_Tp_allocator(this);
  std::allocator_traits<std::allocator<unsigned int>>::destroy<unsigned int>(Tp_allocator, M_cur);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
    v3 = (std::deque<unsigned int> *)__asan_report_load8(&this->_M_impl._M_start._M_first);
  std::_Deque_base<unsigned int>::_M_deallocate_node(v3, this->_M_impl._M_start._M_first);
  p_M_start = &this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>::_M_set_node(
    p_M_start,
    this->_M_impl._M_start._M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_first);
  M_first = this->_M_impl._M_start._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_impl._M_start._M_cur = M_first;
};

// Line 571: range 0000000014E3A5DE-0000000014E3AEA6
void __fastcall std::deque<std::shared_ptr<MonitorValue>>::_M_pop_front_aux(
        std::deque<std::shared_ptr<MonitorValue>> *const this)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rbp
  std::vector<std::thread>::iterator v2; // rsi
  std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *p_M_start; // rdi
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer M_cur; // rax
  char v6; // dl
  signed __int32 M_use_count; // eax
  std::vector<std::thread> *p_M_first; // rdi
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer M_node; // rax
  std::shared_ptr<MonitorValue> *v10; // rax
  char v11; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v13; // dl
  signed __int32 M_weak_count; // eax
  char v15; // dl
  std::_Bind<void (MonitorReport::*(MonitorReport*))()> *v16; // rdx
  std::_Bind<void (MonitorReport::*(MonitorReport*))()> *v17; // rcx

  p_M_start = &this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)p_M_start >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_start);
    goto LABEL_18;
  }
  M_cur = this->_M_impl._M_start._M_cur;
  p_M_start = (std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *)&M_cur->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_cur->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_M_start);
    goto LABEL_19;
  }
  M_pi = M_cur->_M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_9;
  p_M_start = (std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v6 = *(_BYTE *)(((unsigned __int64)p_M_start >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_start & 7) + 3) < v6 || !v6 )
  {
    M_use_count = _InterlockedExchangeAdd((volatile signed __int32 *)p_M_start, 0xFFFFFFFF);
    goto LABEL_8;
  }
LABEL_19:
  __asan_report_store4(p_M_start);
LABEL_20:
  v11 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_24;
  }
  M_use_count = M_pi->_M_use_count;
  M_pi->_M_use_count = M_use_count - 1;
LABEL_8:
  if ( M_use_count != 1 )
    goto LABEL_9;
LABEL_24:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_35;
  }
  p_M_weak_count = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_36;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  p_M_weak_count = &M_pi->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_37;
  v13 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v13 || !v13 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_30;
  }
LABEL_36:
  __asan_report_store4(p_M_weak_count);
LABEL_37:
  v15 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
LABEL_41:
    p_M_first = (std::vector<std::thread> *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_42;
  }
  M_weak_count = M_pi->_M_weak_count;
  M_pi->_M_weak_count = M_weak_count - 1;
LABEL_30:
  if ( M_weak_count != 1 )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_41;
  p_M_first = (std::vector<std::thread> *)(M_pi->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)(((unsigned __int64)p_M_first >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(p_M_first);
    goto LABEL_43;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
LABEL_9:
  p_M_first = (std::vector<std::thread> *)&this->_M_impl._M_start._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_M_first);
    goto LABEL_44;
  }
  operator delete(this->_M_impl._M_start._M_first);
  p_M_first = (std::vector<std::thread> *)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(p_M_first);
    goto LABEL_45;
  }
  M_node = this->_M_impl._M_start._M_node;
  p_M_first = (std::vector<std::thread> *)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  this->_M_impl._M_start._M_node = M_node + 1;
  p_M_first = (std::vector<std::thread> *)(M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)(M_node + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8(p_M_first);
    goto LABEL_47;
  }
  v10 = M_node[1];
  p_M_first = (std::vector<std::thread> *)&this->_M_impl._M_start._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_store8();
    goto LABEL_48;
  }
  this->_M_impl._M_start._M_first = v10;
  p_M_first = (std::vector<std::thread> *)&this->_M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_store8();
    goto LABEL_49;
  }
  this->_M_impl._M_start._M_last = v10 + 32;
  p_M_first = (std::vector<std::thread> *)&this->_M_impl._M_start;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
  {
    this->_M_impl._M_start._M_cur = v10;
    return;
  }
LABEL_49:
  __asan_report_store8();
  std::vector<std::thread>::_M_realloc_insert<std::_Bind<void (MonitorReport::*)(void) ()(MonitorReport*)> &>(
    p_M_first,
    v2,
    v16,
    v17);
};

// Line 571: range 0000000014E6327A-0000000014E63607
void __fastcall std::deque<std::shared_ptr<common::minet::Packet>>::_M_pop_front_aux(
        std::deque<std::shared_ptr<common::minet::Packet>> *const this)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rbp
  std::_Rb_tree_node<std::pair<unsigned int const,StatLogMgr> > *v2; // rsi
  std::_Deque_base<std::shared_ptr<common::minet::Packet>>::iterator *p_M_start; // rdi
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Elt_pointer M_cur; // rax
  char v6; // dl
  signed __int32 M_use_count; // eax
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > > *p_M_first; // rdi
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer M_node; // rax
  std::shared_ptr<common::minet::Packet> *v10; // rax
  char v11; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v13; // dl
  signed __int32 M_weak_count; // eax
  char v15; // dl
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > >::_Base_ptr v16; // rdx
  const unsigned int *v17; // rcx

  p_M_start = &this->_M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)p_M_start >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_start);
    goto LABEL_18;
  }
  M_cur = this->_M_impl._M_start._M_cur;
  p_M_start = (std::_Deque_base<std::shared_ptr<common::minet::Packet>>::iterator *)&M_cur->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&M_cur->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_M_start);
    goto LABEL_19;
  }
  M_pi = M_cur->_M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_9;
  p_M_start = (std::_Deque_base<std::shared_ptr<common::minet::Packet>>::iterator *)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_20;
  v6 = *(_BYTE *)(((unsigned __int64)p_M_start >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_start & 7) + 3) < v6 || !v6 )
  {
    M_use_count = _InterlockedExchangeAdd((volatile signed __int32 *)p_M_start, 0xFFFFFFFF);
    goto LABEL_8;
  }
LABEL_19:
  __asan_report_store4(p_M_start);
LABEL_20:
  v11 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_24;
  }
  M_use_count = M_pi->_M_use_count;
  M_pi->_M_use_count = M_use_count - 1;
LABEL_8:
  if ( M_use_count != 1 )
    goto LABEL_9;
LABEL_24:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_35;
  }
  p_M_weak_count = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_36;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  p_M_weak_count = &M_pi->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_37;
  v13 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v13 || !v13 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_30;
  }
LABEL_36:
  __asan_report_store4(p_M_weak_count);
LABEL_37:
  v15 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
LABEL_41:
    p_M_first = (std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > > *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_42;
  }
  M_weak_count = M_pi->_M_weak_count;
  M_pi->_M_weak_count = M_weak_count - 1;
LABEL_30:
  if ( M_weak_count != 1 )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_41;
  p_M_first = (std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > > *)(M_pi->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)(((unsigned __int64)p_M_first >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(p_M_first);
    goto LABEL_43;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
LABEL_9:
  p_M_first = (std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > > *)&this->_M_impl._M_start._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_M_first);
    goto LABEL_44;
  }
  operator delete(this->_M_impl._M_start._M_first);
  p_M_first = (std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > > *)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(p_M_first);
    goto LABEL_45;
  }
  M_node = this->_M_impl._M_start._M_node;
  p_M_first = (std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > > *)&this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  this->_M_impl._M_start._M_node = M_node + 1;
  p_M_first = (std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > > *)(M_node + 1);
  if ( *(_BYTE *)(((unsigned __int64)(M_node + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8(p_M_first);
    goto LABEL_47;
  }
  v10 = M_node[1];
  p_M_first = (std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > > *)&this->_M_impl._M_start._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_store8();
    goto LABEL_48;
  }
  this->_M_impl._M_start._M_first = v10;
  p_M_first = (std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > > *)&this->_M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_store8();
    goto LABEL_49;
  }
  this->_M_impl._M_start._M_last = v10 + 32;
  p_M_first = (std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > > *)&this->_M_impl._M_start;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start >> 3) + 0x7FFF8000) )
  {
    this->_M_impl._M_start._M_cur = v10;
    return;
  }
LABEL_49:
  __asan_report_store8();
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr>>>::_M_lower_bound(
    p_M_first,
    v2,
    v16,
    v17);
};

// Line 854: range 0000000014DFFFF0-0000000014E0017A
void __fastcall std::deque<Json::OurReader::ErrorInfo>::_M_destroy_data_aux(
        std::deque<Json::OurReader::ErrorInfo> *const this,
        std::deque<Json::OurReader::ErrorInfo>::iterator __first,
        std::deque<Json::OurReader::ErrorInfo>::iterator __last)
{
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer M_cur; // rbp
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v4; // r12
  Json::OurReader::ErrorInfo *v5; // r15
  __int64 v6; // rbx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v8; // rdi
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Elt_pointer i; // rbx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v10; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v11; // rdi

  M_cur = __first._M_cur;
  v4 = __first._M_node + 1;
  if ( __last._M_node > __first._M_node + 1 )
  {
LABEL_2:
    while ( 2 )
    {
      v5 = *v4;
      v6 = (__int64)&(*v4)[8];
      do
      {
        while ( 1 )
        {
          M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5->message_._M_dataplus._M_p;
          if ( M_p == &v5->message_._anon_0 )
            break;
          operator delete(M_p);
          if ( (Json::OurReader::ErrorInfo *)v6 == ++v5 )
          {
            if ( __last._M_node > ++v4 )
              goto LABEL_2;
            goto LABEL_6;
          }
        }
        ++v5;
      }
      while ( (Json::OurReader::ErrorInfo *)v6 != v5 );
      if ( __last._M_node > ++v4 )
        continue;
      break;
    }
  }
LABEL_6:
  if ( __last._M_node == __first._M_node )
  {
    if ( __first._M_cur != __last._M_cur )
    {
      while ( 1 )
      {
        v11 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_cur->message_._M_dataplus._M_p;
        if ( v11 != &M_cur->message_._anon_0 )
          break;
LABEL_25:
        if ( __last._M_cur == ++M_cur )
          return;
      }
      while ( 1 )
      {
        operator delete(v11);
        if ( __last._M_cur == ++M_cur )
          break;
        v11 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_cur->message_._M_dataplus._M_p;
        if ( v11 == &M_cur->message_._anon_0 )
          goto LABEL_25;
      }
    }
  }
  else
  {
    if ( __first._M_last != __first._M_cur )
    {
      do
      {
        while ( 1 )
        {
          v8 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_cur->message_._M_dataplus._M_p;
          if ( v8 == &M_cur->message_._anon_0 )
            break;
          operator delete(v8);
          if ( __first._M_last == ++M_cur )
            goto LABEL_10;
        }
        ++M_cur;
      }
      while ( __first._M_last != M_cur );
    }
LABEL_10:
    for ( i = __last._M_first; __last._M_cur != i; ++i )
    {
      while ( 1 )
      {
        v10 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)i->message_._M_dataplus._M_p;
        if ( v10 == &i->message_._anon_0 )
          break;
        operator delete(v10);
        if ( __last._M_cur == ++i )
          return;
      }
    }
  }
};

// Line 854: range 000000000D0A93C8-000000000D0A97B8
void __fastcall std::deque<Json::Reader::ErrorInfo>::_M_destroy_data_aux(
        std::deque<Json::Reader::ErrorInfo> *const this,
        std::deque<Json::Reader::ErrorInfo>::iterator __first,
        std::deque<Json::Reader::ErrorInfo>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<Json::Reader::ErrorInfo> *Tp_allocator; // r14
  Json::Reader::ErrorInfo *v7; // r15
  Json::Reader::ErrorInfo *v8; // rcx
  Json::Reader::ErrorInfo **v9; // rcx
  std::allocator<Json::Reader::ErrorInfo> *v10; // rsi
  Json::Reader::ErrorInfo *v11; // rcx
  std::allocator<Json::Reader::ErrorInfo> *v12; // rsi
  Json::Reader::ErrorInfo *v13; // rcx
  std::allocator<Json::Reader::ErrorInfo> *v14; // rsi
  Json::Reader::ErrorInfo *v15; // rcx
  std::deque<Json::Reader::ErrorInfo>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<Json::Reader::ErrorInfo>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<Json::Reader::ErrorInfo>::iterator *)(v3 + 32) = __first;
  *(std::deque<Json::Reader::ErrorInfo>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<Json::Reader::ErrorInfo>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<Json::Reader::ErrorInfo>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<Json::Reader::ErrorInfo>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<Json::Reader::ErrorInfo *,Json::Reader::ErrorInfo>(*__node, v8, Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(Json::Reader::ErrorInfo ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(Json::Reader::ErrorInfo ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<Json::Reader::ErrorInfo>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(Json::Reader::ErrorInfo **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<Json::Reader::ErrorInfo *,Json::Reader::ErrorInfo>(*(Json::Reader::ErrorInfo **)(v3 + 32), v15, v14);
  }
  else
  {
    v10 = std::_Deque_base<Json::Reader::ErrorInfo>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(Json::Reader::ErrorInfo **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<Json::Reader::ErrorInfo *,Json::Reader::ErrorInfo>(*(Json::Reader::ErrorInfo **)(v3 + 32), v11, v10);
    v12 = std::_Deque_base<Json::Reader::ErrorInfo>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(Json::Reader::ErrorInfo **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<Json::Reader::ErrorInfo *,Json::Reader::ErrorInfo>(*(Json::Reader::ErrorInfo **)(v3 + 104), v13, v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000F8C07D2-000000000F8C0BC2
void __fastcall std::deque<LuaIndexCheckerContext>::_M_destroy_data_aux(
        std::deque<LuaIndexCheckerContext> *const this,
        std::deque<LuaIndexCheckerContext>::iterator __first,
        std::deque<LuaIndexCheckerContext>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<LuaIndexCheckerContext> *Tp_allocator; // r14
  LuaIndexCheckerContext *v7; // r15
  LuaIndexCheckerContext *v8; // rcx
  LuaIndexCheckerContext **v9; // rcx
  std::allocator<LuaIndexCheckerContext> *v10; // rsi
  LuaIndexCheckerContext *v11; // rcx
  std::allocator<LuaIndexCheckerContext> *v12; // rsi
  LuaIndexCheckerContext *v13; // rcx
  std::allocator<LuaIndexCheckerContext> *v14; // rsi
  LuaIndexCheckerContext *v15; // rcx
  std::deque<LuaIndexCheckerContext>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<LuaIndexCheckerContext>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<LuaIndexCheckerContext>::iterator *)(v3 + 32) = __first;
  *(std::deque<LuaIndexCheckerContext>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<LuaIndexCheckerContext>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<LuaIndexCheckerContext>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<LuaIndexCheckerContext>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<LuaIndexCheckerContext *,LuaIndexCheckerContext>(*__node, v8, Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(LuaIndexCheckerContext ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(LuaIndexCheckerContext ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<LuaIndexCheckerContext>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(LuaIndexCheckerContext **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<LuaIndexCheckerContext *,LuaIndexCheckerContext>(*(LuaIndexCheckerContext **)(v3 + 32), v15, v14);
  }
  else
  {
    v10 = std::_Deque_base<LuaIndexCheckerContext>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(LuaIndexCheckerContext **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<LuaIndexCheckerContext *,LuaIndexCheckerContext>(*(LuaIndexCheckerContext **)(v3 + 32), v11, v10);
    v12 = std::_Deque_base<LuaIndexCheckerContext>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(LuaIndexCheckerContext **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<LuaIndexCheckerContext *,LuaIndexCheckerContext>(*(LuaIndexCheckerContext **)(v3 + 104), v13, v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000C67259C-000000000C672998
void __fastcall std::deque<PacketLog>::_M_destroy_data_aux(
        std::deque<PacketLog> *const this,
        std::deque<PacketLog>::iterator __first,
        std::deque<PacketLog>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<PacketLog> *Tp_allocator; // r14
  PacketLog *v7; // r15
  PacketLog *v8; // rcx
  PacketLog **v9; // rcx
  std::allocator<PacketLog> *v10; // rsi
  PacketLog *v11; // rcx
  std::allocator<PacketLog> *v12; // rsi
  PacketLog *v13; // rcx
  std::allocator<PacketLog> *v14; // rsi
  PacketLog *v15; // rcx
  std::deque<PacketLog>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<PacketLog>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<PacketLog>::iterator *)(v3 + 32) = __first;
  *(std::deque<PacketLog>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<PacketLog>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<PacketLog>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<PacketLog>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<PacketLog *,PacketLog>(*__node, v8, Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(PacketLog ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(PacketLog ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<PacketLog>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(PacketLog **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<PacketLog *,PacketLog>(*(PacketLog **)(v3 + 32), v15, v14);
  }
  else
  {
    v10 = std::_Deque_base<PacketLog>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(PacketLog **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<PacketLog *,PacketLog>(*(PacketLog **)(v3 + 32), v11, v10);
    v12 = std::_Deque_base<PacketLog>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(PacketLog **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<PacketLog *,PacketLog>(*(PacketLog **)(v3 + 104), v13, v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000C69BC92-000000000C69C082
void __fastcall std::deque<StatLog>::_M_destroy_data_aux(
        std::deque<StatLog> *const this,
        std::deque<StatLog>::iterator __first,
        std::deque<StatLog>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<StatLog> *Tp_allocator; // r14
  StatLog *v7; // r15
  StatLog *v8; // rcx
  StatLog **v9; // rcx
  std::allocator<StatLog> *v10; // rsi
  StatLog *v11; // rcx
  std::allocator<StatLog> *v12; // rsi
  StatLog *v13; // rcx
  std::allocator<StatLog> *v14; // rsi
  StatLog *v15; // rcx
  std::deque<StatLog>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<StatLog>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<StatLog>::iterator *)(v3 + 32) = __first;
  *(std::deque<StatLog>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<StatLog>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<StatLog>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<StatLog>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<StatLog *,StatLog>(*__node, v8, Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(StatLog ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(StatLog ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<StatLog>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(StatLog **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<StatLog *,StatLog>(*(StatLog **)(v3 + 32), v15, v14);
  }
  else
  {
    v10 = std::_Deque_base<StatLog>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(StatLog **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<StatLog *,StatLog>(*(StatLog **)(v3 + 32), v11, v10);
    v12 = std::_Deque_base<StatLog>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(StatLog **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<StatLog *,StatLog>(*(StatLog **)(v3 + 104), v13, v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000F88960E-000000000F8899FE
void __fastcall std::deque<std::any>::_M_destroy_data_aux(
        std::deque<std::any> *const this,
        std::deque<std::any>::iterator __first,
        std::deque<std::any>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<std::any> *Tp_allocator; // r14
  std::any *v7; // r15
  std::any *v8; // rcx
  std::any **v9; // rcx
  std::allocator<std::any> *v10; // rsi
  std::any *v11; // rcx
  std::allocator<std::any> *v12; // rsi
  std::any *v13; // rcx
  std::allocator<std::any> *v14; // rsi
  std::any *v15; // rcx
  std::deque<std::any>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<std::any>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<std::any>::iterator *)(v3 + 32) = __first;
  *(std::deque<std::any>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<std::any>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<std::any>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<std::any>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<std::any *,std::any>(*__node, v8, Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(std::any ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(std::any ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<std::any>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(std::any **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::any *,std::any>(*(std::any **)(v3 + 32), v15, v14);
  }
  else
  {
    v10 = std::_Deque_base<std::any>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(std::any **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::any *,std::any>(*(std::any **)(v3 + 32), v11, v10);
    v12 = std::_Deque_base<std::any>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(std::any **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<std::any *,std::any>(*(std::any **)(v3 + 104), v13, v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000F9F02B0-000000000F9F06AC
void __fastcall std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_destroy_data_aux(
        std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *const this,
        std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::iterator __first,
        std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > > *Tp_allocator; // r14
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *v7; // r15
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *v8; // rcx
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **v9; // rcx
  std::allocator<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > > *v10; // rsi
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *v11; // rcx
  std::allocator<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > > *v12; // rsi
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *v13; // rcx
  std::allocator<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > > *v14; // rsi
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > *v15; // rcx
  std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::iterator *)(v3 + 32) = __first;
  *(std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL);
        ;
        ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>> *,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(
      *__node,
      v8,
      Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>> *,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(
      *(std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **)(v3 + 32),
      v15,
      v14);
  }
  else
  {
    v10 = std::_Deque_base<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>> *,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(
      *(std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **)(v3 + 32),
      v11,
      v10);
    v12 = std::_Deque_base<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>> *,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>(
      *(std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **)(v3 + 104),
      v13,
      v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000F8C01DE-000000000F8C05DA
void __fastcall std::deque<std::set<std::string>>::_M_destroy_data_aux(
        std::deque<std::set<std::string>> *const this,
        std::deque<std::set<std::string>>::iterator __first,
        std::deque<std::set<std::string>>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<std::set<std::string> > *Tp_allocator; // r14
  std::set<std::string> *v7; // r15
  std::set<std::string> *v8; // rcx
  std::set<std::string> **v9; // rcx
  std::allocator<std::set<std::string> > *v10; // rsi
  std::set<std::string> *v11; // rcx
  std::allocator<std::set<std::string> > *v12; // rsi
  std::set<std::string> *v13; // rcx
  std::allocator<std::set<std::string> > *v14; // rsi
  std::set<std::string> *v15; // rcx
  std::deque<std::set<std::string>>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<std::set<std::string>>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<std::set<std::string>>::iterator *)(v3 + 32) = __first;
  *(std::deque<std::set<std::string>>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<std::set<std::string>>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<std::set<std::string>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<std::set<std::string>>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<std::set<std::string> *,std::set<std::string>>(*__node, v8, Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(std::set<std::string> ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(std::set<std::string> ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<std::set<std::string>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(std::set<std::string> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::set<std::string> *,std::set<std::string>>(*(std::set<std::string> **)(v3 + 32), v15, v14);
  }
  else
  {
    v10 = std::_Deque_base<std::set<std::string>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(std::set<std::string> **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::set<std::string> *,std::set<std::string>>(*(std::set<std::string> **)(v3 + 32), v11, v10);
    v12 = std::_Deque_base<std::set<std::string>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(std::set<std::string> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<std::set<std::string> *,std::set<std::string>>(*(std::set<std::string> **)(v3 + 104), v13, v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000C672D0A-000000000C6730FA
void __fastcall std::deque<std::shared_ptr<AsyncTask>>::_M_destroy_data_aux(
        std::deque<std::shared_ptr<AsyncTask>> *const this,
        std::deque<std::shared_ptr<AsyncTask>>::iterator __first,
        std::deque<std::shared_ptr<AsyncTask>>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<std::shared_ptr<AsyncTask> > *Tp_allocator; // r14
  std::shared_ptr<AsyncTask> *v7; // r15
  std::shared_ptr<AsyncTask> *v8; // rcx
  std::shared_ptr<AsyncTask> **v9; // rcx
  std::allocator<std::shared_ptr<AsyncTask> > *v10; // rsi
  std::shared_ptr<AsyncTask> *v11; // rcx
  std::allocator<std::shared_ptr<AsyncTask> > *v12; // rsi
  std::shared_ptr<AsyncTask> *v13; // rcx
  std::allocator<std::shared_ptr<AsyncTask> > *v14; // rsi
  std::shared_ptr<AsyncTask> *v15; // rcx
  std::deque<std::shared_ptr<AsyncTask>>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<std::shared_ptr<AsyncTask>>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<std::shared_ptr<AsyncTask>>::iterator *)(v3 + 32) = __first;
  *(std::deque<std::shared_ptr<AsyncTask>>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<std::shared_ptr<AsyncTask>>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<std::shared_ptr<AsyncTask>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<std::shared_ptr<AsyncTask>>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<std::shared_ptr<AsyncTask> *,std::shared_ptr<AsyncTask>>(*__node, v8, Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(std::shared_ptr<AsyncTask> ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(std::shared_ptr<AsyncTask> ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<std::shared_ptr<AsyncTask>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(std::shared_ptr<AsyncTask> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::shared_ptr<AsyncTask> *,std::shared_ptr<AsyncTask>>(
      *(std::shared_ptr<AsyncTask> **)(v3 + 32),
      v15,
      v14);
  }
  else
  {
    v10 = std::_Deque_base<std::shared_ptr<AsyncTask>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(std::shared_ptr<AsyncTask> **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::shared_ptr<AsyncTask> *,std::shared_ptr<AsyncTask>>(
      *(std::shared_ptr<AsyncTask> **)(v3 + 32),
      v11,
      v10);
    v12 = std::_Deque_base<std::shared_ptr<AsyncTask>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(std::shared_ptr<AsyncTask> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<std::shared_ptr<AsyncTask> *,std::shared_ptr<AsyncTask>>(
      *(std::shared_ptr<AsyncTask> **)(v3 + 104),
      v13,
      v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000D0B797E-000000000D0B7D6E
void __fastcall std::deque<std::shared_ptr<BaseDFNode>>::_M_destroy_data_aux(
        std::deque<std::shared_ptr<BaseDFNode>> *const this,
        std::deque<std::shared_ptr<BaseDFNode>>::iterator __first,
        std::deque<std::shared_ptr<BaseDFNode>>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<std::shared_ptr<BaseDFNode> > *Tp_allocator; // r14
  std::shared_ptr<BaseDFNode> *v7; // r15
  std::shared_ptr<BaseDFNode> *v8; // rcx
  std::shared_ptr<BaseDFNode> **v9; // rcx
  std::allocator<std::shared_ptr<BaseDFNode> > *v10; // rsi
  std::shared_ptr<BaseDFNode> *v11; // rcx
  std::allocator<std::shared_ptr<BaseDFNode> > *v12; // rsi
  std::shared_ptr<BaseDFNode> *v13; // rcx
  std::allocator<std::shared_ptr<BaseDFNode> > *v14; // rsi
  std::shared_ptr<BaseDFNode> *v15; // rcx
  std::deque<std::shared_ptr<BaseDFNode>>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<std::shared_ptr<BaseDFNode>>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<std::shared_ptr<BaseDFNode>>::iterator *)(v3 + 32) = __first;
  *(std::deque<std::shared_ptr<BaseDFNode>>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<std::shared_ptr<BaseDFNode>>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<std::shared_ptr<BaseDFNode>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<std::shared_ptr<BaseDFNode>>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<std::shared_ptr<BaseDFNode> *,std::shared_ptr<BaseDFNode>>(*__node, v8, Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(std::shared_ptr<BaseDFNode> ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(std::shared_ptr<BaseDFNode> ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<std::shared_ptr<BaseDFNode>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(std::shared_ptr<BaseDFNode> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::shared_ptr<BaseDFNode> *,std::shared_ptr<BaseDFNode>>(
      *(std::shared_ptr<BaseDFNode> **)(v3 + 32),
      v15,
      v14);
  }
  else
  {
    v10 = std::_Deque_base<std::shared_ptr<BaseDFNode>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(std::shared_ptr<BaseDFNode> **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::shared_ptr<BaseDFNode> *,std::shared_ptr<BaseDFNode>>(
      *(std::shared_ptr<BaseDFNode> **)(v3 + 32),
      v11,
      v10);
    v12 = std::_Deque_base<std::shared_ptr<BaseDFNode>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(std::shared_ptr<BaseDFNode> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<std::shared_ptr<BaseDFNode> *,std::shared_ptr<BaseDFNode>>(
      *(std::shared_ptr<BaseDFNode> **)(v3 + 104),
      v13,
      v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000F899C40-000000000F89A030
void __fastcall std::deque<std::shared_ptr<CustomCommonNodeData>>::_M_destroy_data_aux(
        std::deque<std::shared_ptr<CustomCommonNodeData>> *const this,
        std::deque<std::shared_ptr<CustomCommonNodeData>>::iterator __first,
        std::deque<std::shared_ptr<CustomCommonNodeData>>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<std::shared_ptr<CustomCommonNodeData> > *Tp_allocator; // r14
  std::shared_ptr<CustomCommonNodeData> *v7; // r15
  std::shared_ptr<CustomCommonNodeData> *v8; // rcx
  std::shared_ptr<CustomCommonNodeData> **v9; // rcx
  std::allocator<std::shared_ptr<CustomCommonNodeData> > *v10; // rsi
  std::shared_ptr<CustomCommonNodeData> *v11; // rcx
  std::allocator<std::shared_ptr<CustomCommonNodeData> > *v12; // rsi
  std::shared_ptr<CustomCommonNodeData> *v13; // rcx
  std::allocator<std::shared_ptr<CustomCommonNodeData> > *v14; // rsi
  std::shared_ptr<CustomCommonNodeData> *v15; // rcx
  std::deque<std::shared_ptr<CustomCommonNodeData>>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<std::shared_ptr<CustomCommonNodeData>>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<std::shared_ptr<CustomCommonNodeData>>::iterator *)(v3 + 32) = __first;
  *(std::deque<std::shared_ptr<CustomCommonNodeData>>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<std::shared_ptr<CustomCommonNodeData>>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<std::shared_ptr<CustomCommonNodeData>>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<std::shared_ptr<CustomCommonNodeData> *,std::shared_ptr<CustomCommonNodeData>>(
      *__node,
      v8,
      Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(std::shared_ptr<CustomCommonNodeData> ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(std::shared_ptr<CustomCommonNodeData> ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(std::shared_ptr<CustomCommonNodeData> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::shared_ptr<CustomCommonNodeData> *,std::shared_ptr<CustomCommonNodeData>>(
      *(std::shared_ptr<CustomCommonNodeData> **)(v3 + 32),
      v15,
      v14);
  }
  else
  {
    v10 = std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(std::shared_ptr<CustomCommonNodeData> **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::shared_ptr<CustomCommonNodeData> *,std::shared_ptr<CustomCommonNodeData>>(
      *(std::shared_ptr<CustomCommonNodeData> **)(v3 + 32),
      v11,
      v10);
    v12 = std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(std::shared_ptr<CustomCommonNodeData> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<std::shared_ptr<CustomCommonNodeData> *,std::shared_ptr<CustomCommonNodeData>>(
      *(std::shared_ptr<CustomCommonNodeData> **)(v3 + 104),
      v13,
      v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000F8C5F2C-000000000F8C631C
void __fastcall std::deque<std::shared_ptr<LuaASTNode>>::_M_destroy_data_aux(
        std::deque<std::shared_ptr<LuaASTNode>> *const this,
        std::deque<std::shared_ptr<LuaASTNode>>::iterator __first,
        std::deque<std::shared_ptr<LuaASTNode>>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<std::shared_ptr<LuaASTNode> > *Tp_allocator; // r14
  std::shared_ptr<LuaASTNode> *v7; // r15
  std::shared_ptr<LuaASTNode> *v8; // rcx
  std::shared_ptr<LuaASTNode> **v9; // rcx
  std::allocator<std::shared_ptr<LuaASTNode> > *v10; // rsi
  std::shared_ptr<LuaASTNode> *v11; // rcx
  std::allocator<std::shared_ptr<LuaASTNode> > *v12; // rsi
  std::shared_ptr<LuaASTNode> *v13; // rcx
  std::allocator<std::shared_ptr<LuaASTNode> > *v14; // rsi
  std::shared_ptr<LuaASTNode> *v15; // rcx
  std::deque<std::shared_ptr<LuaASTNode>>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<std::shared_ptr<LuaASTNode>>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<std::shared_ptr<LuaASTNode>>::iterator *)(v3 + 32) = __first;
  *(std::deque<std::shared_ptr<LuaASTNode>>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<std::shared_ptr<LuaASTNode>>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<std::shared_ptr<LuaASTNode>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<std::shared_ptr<LuaASTNode>>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<std::shared_ptr<LuaASTNode> *,std::shared_ptr<LuaASTNode>>(*__node, v8, Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(std::shared_ptr<LuaASTNode> ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(std::shared_ptr<LuaASTNode> ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<std::shared_ptr<LuaASTNode>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(std::shared_ptr<LuaASTNode> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::shared_ptr<LuaASTNode> *,std::shared_ptr<LuaASTNode>>(
      *(std::shared_ptr<LuaASTNode> **)(v3 + 32),
      v15,
      v14);
  }
  else
  {
    v10 = std::_Deque_base<std::shared_ptr<LuaASTNode>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(std::shared_ptr<LuaASTNode> **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::shared_ptr<LuaASTNode> *,std::shared_ptr<LuaASTNode>>(
      *(std::shared_ptr<LuaASTNode> **)(v3 + 32),
      v11,
      v10);
    v12 = std::_Deque_base<std::shared_ptr<LuaASTNode>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(std::shared_ptr<LuaASTNode> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<std::shared_ptr<LuaASTNode> *,std::shared_ptr<LuaASTNode>>(
      *(std::shared_ptr<LuaASTNode> **)(v3 + 104),
      v13,
      v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000C69DF86-000000000C69E376
void __fastcall std::deque<std::shared_ptr<common::minet::Packet>>::_M_destroy_data_aux(
        std::deque<std::shared_ptr<common::minet::Packet>> *const this,
        std::deque<std::shared_ptr<common::minet::Packet>>::iterator __first,
        std::deque<std::shared_ptr<common::minet::Packet>>::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<std::shared_ptr<common::minet::Packet> > *Tp_allocator; // r14
  std::shared_ptr<common::minet::Packet> *v7; // r15
  std::shared_ptr<common::minet::Packet> *v8; // rcx
  std::shared_ptr<common::minet::Packet> **v9; // rcx
  std::allocator<std::shared_ptr<common::minet::Packet> > *v10; // rsi
  std::shared_ptr<common::minet::Packet> *v11; // rcx
  std::allocator<std::shared_ptr<common::minet::Packet> > *v12; // rsi
  std::shared_ptr<common::minet::Packet> *v13; // rcx
  std::allocator<std::shared_ptr<common::minet::Packet> > *v14; // rsi
  std::shared_ptr<common::minet::Packet> *v15; // rcx
  std::deque<std::shared_ptr<common::minet::Packet>>::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<std::shared_ptr<common::minet::Packet>>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<std::shared_ptr<common::minet::Packet>>::iterator *)(v3 + 32) = __first;
  *(std::deque<std::shared_ptr<common::minet::Packet>>::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<std::shared_ptr<common::minet::Packet>>::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<std::shared_ptr<common::minet::Packet>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<std::shared_ptr<common::minet::Packet>>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<std::shared_ptr<common::minet::Packet> *,std::shared_ptr<common::minet::Packet>>(
      *__node,
      v8,
      Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(std::shared_ptr<common::minet::Packet> ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(std::shared_ptr<common::minet::Packet> ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<std::shared_ptr<common::minet::Packet>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(std::shared_ptr<common::minet::Packet> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::shared_ptr<common::minet::Packet> *,std::shared_ptr<common::minet::Packet>>(
      *(std::shared_ptr<common::minet::Packet> **)(v3 + 32),
      v15,
      v14);
  }
  else
  {
    v10 = std::_Deque_base<std::shared_ptr<common::minet::Packet>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(std::shared_ptr<common::minet::Packet> **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::shared_ptr<common::minet::Packet> *,std::shared_ptr<common::minet::Packet>>(
      *(std::shared_ptr<common::minet::Packet> **)(v3 + 32),
      v11,
      v10);
    v12 = std::_Deque_base<std::shared_ptr<common::minet::Packet>>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(std::shared_ptr<common::minet::Packet> **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<std::shared_ptr<common::minet::Packet> *,std::shared_ptr<common::minet::Packet>>(
      *(std::shared_ptr<common::minet::Packet> **)(v3 + 104),
      v13,
      v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 854: range 000000000C679ECA-000000000C67A2BA
void __fastcall std::deque<std::string>::_M_destroy_data_aux(
        std::deque<std::string>_0 *const this,
        std::deque<std::string>_0::iterator __first,
        std::deque<std::string>_0::iterator __last)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::allocator<std::string > *Tp_allocator; // r14
  std::string *v7; // r15
  std::string *v8; // rcx
  std::string **v9; // rcx
  std::allocator<std::string > *v10; // rsi
  std::string *v11; // rcx
  std::allocator<std::string > *v12; // rsi
  std::string *v13; // rcx
  std::allocator<std::string > *v14; // rsi
  std::string *v15; // rcx
  std::deque<std::string>_0::_Map_pointer __node; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 11 __first:855 96 32 10 __last:855";
  *(_QWORD *)(v3 + 16) = std::deque<std::string>::_M_destroy_data_aux;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  *(std::deque<std::string>_0::iterator *)(v3 + 32) = __first;
  *(std::deque<std::string>_0::iterator *)(v3 + 96) = __last;
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  for ( __node = (std::deque<std::string>_0::_Map_pointer)(*(_QWORD *)(v3 + 56) + 8LL); ; ++__node )
  {
    if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 120);
    if ( (unsigned __int64)__node >= *(_QWORD *)(v3 + 120) )
      break;
    Tp_allocator = std::_Deque_base<std::string>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    v7 = *__node;
    v8 = &v7[std::deque<std::string>::_S_buffer_size()];
    if ( *(_BYTE *)(((unsigned __int64)__node >> 3) + 0x7FFF8000) )
      __asan_report_load8(__node);
    std::_Destroy<std::string *,std::string>(*__node, v8, Tp_allocator);
  }
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v9 = *(std::string ***)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 120);
  if ( v9 == *(std::string ***)(v3 + 120) )
  {
    v14 = std::_Deque_base<std::string>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v15 = *(std::string **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::string *,std::string>(*(std::string **)(v3 + 32), v15, v14);
  }
  else
  {
    v10 = std::_Deque_base<std::string>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 48);
    v11 = *(std::string **)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    std::_Destroy<std::string *,std::string>(*(std::string **)(v3 + 32), v11, v10);
    v12 = std::_Deque_base<std::string>::_M_get_Tp_allocator(this);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    v13 = *(std::string **)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 104);
    std::_Destroy<std::string *,std::string>(*(std::string **)(v3 + 104), v13, v12);
  }
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 901: range 0000000014E00EF0-0000000014E00FEE
void __fastcall std::deque<Json::OurReader::ErrorInfo>::_M_new_elements_at_back(
        std::deque<Json::OurReader::ErrorInfo> *const this,
        std::deque<Json::OurReader::ErrorInfo>::size_type __new_elems)
{
  std::deque<Json::OurReader::ErrorInfo>::size_type v2; // r12
  __int64 i; // rbx
  Json::OurReader::ErrorInfo **v4; // r13

  if ( 0x1FFFFFFFFFFFFFFLL
     - (unsigned __int64)(this->_M_impl._M_start._M_last
                        - this->_M_impl._M_start._M_cur
                        + this->_M_impl._M_finish._M_cur
                        - this->_M_impl._M_finish._M_first
                        + (char *)this->_M_impl._M_finish._M_node
                        - (char *)this->_M_impl._M_start._M_node
                        - 8) < __new_elems )
    std::__throw_length_error("deque::_M_new_elements_at_back");
  v2 = (__new_elems + 7) >> 3;
  if ( v2 + 1 > this->_M_impl._M_map_size - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map) )
    std::deque<Json::OurReader::ErrorInfo>::_M_reallocate_map(this, v2, 0);
  if ( v2 )
  {
    for ( i = 1LL; ; ++i )
    {
      v4 = &this->_M_impl._M_finish._M_node[i];
      *v4 = (Json::OurReader::ErrorInfo *)operator new(0x200uLL);
      if ( v2 == i )
        break;
    }
  }
};

// Line 901: range 0000000014E00A90-0000000014E00B8E
void __fastcall std::deque<Json::Reader::ErrorInfo>::_M_new_elements_at_back(
        std::deque<Json::Reader::ErrorInfo> *const this,
        std::deque<Json::Reader::ErrorInfo>::size_type __new_elems)
{
  std::deque<Json::Reader::ErrorInfo>::size_type v2; // r12
  __int64 i; // rbx
  Json::Reader::ErrorInfo **v4; // r13

  if ( 0x1FFFFFFFFFFFFFFLL
     - (unsigned __int64)(this->_M_impl._M_start._M_last
                        - this->_M_impl._M_start._M_cur
                        + this->_M_impl._M_finish._M_cur
                        - this->_M_impl._M_finish._M_first
                        + (char *)this->_M_impl._M_finish._M_node
                        - (char *)this->_M_impl._M_start._M_node
                        - 8) < __new_elems )
    std::__throw_length_error("deque::_M_new_elements_at_back");
  v2 = (__new_elems + 7) >> 3;
  if ( v2 + 1 > this->_M_impl._M_map_size - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map) )
    std::deque<Json::Reader::ErrorInfo>::_M_reallocate_map(this, v2, 0);
  if ( v2 )
  {
    for ( i = 1LL; ; ++i )
    {
      v4 = &this->_M_impl._M_finish._M_node[i];
      *v4 = (Json::Reader::ErrorInfo *)operator new(0x200uLL);
      if ( v2 == i )
        break;
    }
  }
};

// Line 926: range 0000000014E00BA0-0000000014E00D16
void __fastcall std::deque<Json::OurReader::ErrorInfo>::_M_reallocate_map(
        std::deque<Json::OurReader::ErrorInfo> *const this,
        std::deque<Json::OurReader::ErrorInfo>::size_type __nodes_to_add,
        bool __add_at_front)
{
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer M_node; // rsi
  std::size_t M_map_size; // rbx
  __int64 v6; // rbp
  std::deque<Json::OurReader::ErrorInfo>::size_type v7; // rcx
  std::size_t v8; // rbx
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v9; // rax
  __m128i *v10; // rbx
  size_t v11; // rdx
  std::deque<Json::OurReader::ErrorInfo>::size_type v12; // rax
  std::size_t v13; // r13
  Json::OurReader::ErrorInfo **v14; // rax
  Json::OurReader::ErrorInfo **v15; // r14
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v16; // rsi
  __int64 v17; // rbx
  std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer v18; // rdx
  __int64 v19; // rax
  __m128i v20; // xmm0
  Json::OurReader::ErrorInfo **v21; // rbx
  Json::OurReader::ErrorInfo *v22; // rax
  std::deque<Json::OurReader::ErrorInfo>::size_type v23; // [rsp+0h] [rbp-48h]

  M_node = this->_M_impl._M_start._M_node;
  M_map_size = this->_M_impl._M_map_size;
  v6 = (char *)this->_M_impl._M_finish._M_node - (char *)M_node;
  v7 = __nodes_to_add + (v6 >> 3) + 1;
  if ( M_map_size <= 2 * v7 )
  {
    v12 = __nodes_to_add;
    if ( M_map_size >= __nodes_to_add )
      v12 = this->_M_impl._M_map_size;
    v13 = M_map_size + v12 + 2;
    if ( v13 > 0xFFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v23 = __nodes_to_add + this->_M_impl._M_finish._M_node - M_node + 1;
    v14 = (Json::OurReader::ErrorInfo **)operator new(8 * v13);
    v15 = v14;
    v16 = this->_M_impl._M_start._M_node;
    v17 = (v13 - v23) >> 1;
    if ( __add_at_front )
      v17 += __nodes_to_add;
    v18 = this->_M_impl._M_finish._M_node + 1;
    v10 = (__m128i *)&v14[v17];
    if ( v18 != v16 )
      memmove(v10, v16, (char *)v18 - (char *)v16);
    operator delete(this->_M_impl._M_map);
    this->_M_impl._M_map = v15;
    this->_M_impl._M_map_size = v13;
  }
  else
  {
    v8 = (M_map_size - v7) >> 1;
    if ( __add_at_front )
      v8 += __nodes_to_add;
    v9 = this->_M_impl._M_finish._M_node + 1;
    v10 = (__m128i *)&this->_M_impl._M_map[v8];
    v11 = (char *)v9 - (char *)M_node;
    if ( M_node <= (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer)v10 )
    {
      if ( M_node != v9 )
        memmove(&v10->m128i_i8[v6 + 8 - v11], M_node, v11);
    }
    else if ( M_node != v9 )
    {
      memmove(v10, M_node, v11);
    }
  }
  v19 = v10->m128i_i64[0];
  v20 = _mm_loadl_epi64(v10);
  this->_M_impl._M_start._M_node = (std::_Deque_iterator<Json::OurReader::ErrorInfo,Json::OurReader::ErrorInfo&,Json::OurReader::ErrorInfo*>::_Map_pointer)v10;
  v21 = (Json::OurReader::ErrorInfo **)((char *)v10->m128i_i64 + v6);
  this->_M_impl._M_finish._M_node = v21;
  *(__m128i *)&this->_M_impl._M_start._M_first = _mm_unpacklo_epi64(v20, (__m128i)(unsigned __int64)(v19 + 512));
  v22 = *v21;
  this->_M_impl._M_finish._M_first = *v21;
  this->_M_impl._M_finish._M_last = v22 + 8;
};

// Line 926: range 0000000014E00740-0000000014E008B6
void __fastcall std::deque<Json::Reader::ErrorInfo>::_M_reallocate_map(
        std::deque<Json::Reader::ErrorInfo> *const this,
        std::deque<Json::Reader::ErrorInfo>::size_type __nodes_to_add,
        bool __add_at_front)
{
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer M_node; // rsi
  std::size_t M_map_size; // rbx
  __int64 v6; // rbp
  std::deque<Json::Reader::ErrorInfo>::size_type v7; // rcx
  std::size_t v8; // rbx
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer v9; // rax
  __m128i *v10; // rbx
  size_t v11; // rdx
  std::deque<Json::Reader::ErrorInfo>::size_type v12; // rax
  std::size_t v13; // r13
  Json::Reader::ErrorInfo **v14; // rax
  Json::Reader::ErrorInfo **v15; // r14
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer v16; // rsi
  __int64 v17; // rbx
  std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer v18; // rdx
  __int64 v19; // rax
  __m128i v20; // xmm0
  Json::Reader::ErrorInfo **v21; // rbx
  Json::Reader::ErrorInfo *v22; // rax
  std::deque<Json::Reader::ErrorInfo>::size_type v23; // [rsp+0h] [rbp-48h]

  M_node = this->_M_impl._M_start._M_node;
  M_map_size = this->_M_impl._M_map_size;
  v6 = (char *)this->_M_impl._M_finish._M_node - (char *)M_node;
  v7 = __nodes_to_add + (v6 >> 3) + 1;
  if ( M_map_size <= 2 * v7 )
  {
    v12 = __nodes_to_add;
    if ( M_map_size >= __nodes_to_add )
      v12 = this->_M_impl._M_map_size;
    v13 = M_map_size + v12 + 2;
    if ( v13 > 0xFFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v23 = __nodes_to_add + this->_M_impl._M_finish._M_node - M_node + 1;
    v14 = (Json::Reader::ErrorInfo **)operator new(8 * v13);
    v15 = v14;
    v16 = this->_M_impl._M_start._M_node;
    v17 = (v13 - v23) >> 1;
    if ( __add_at_front )
      v17 += __nodes_to_add;
    v18 = this->_M_impl._M_finish._M_node + 1;
    v10 = (__m128i *)&v14[v17];
    if ( v18 != v16 )
      memmove(v10, v16, (char *)v18 - (char *)v16);
    operator delete(this->_M_impl._M_map);
    this->_M_impl._M_map = v15;
    this->_M_impl._M_map_size = v13;
  }
  else
  {
    v8 = (M_map_size - v7) >> 1;
    if ( __add_at_front )
      v8 += __nodes_to_add;
    v9 = this->_M_impl._M_finish._M_node + 1;
    v10 = (__m128i *)&this->_M_impl._M_map[v8];
    v11 = (char *)v9 - (char *)M_node;
    if ( M_node <= (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer)v10 )
    {
      if ( M_node != v9 )
        memmove(&v10->m128i_i8[v6 + 8 - v11], M_node, v11);
    }
    else if ( M_node != v9 )
    {
      memmove(v10, M_node, v11);
    }
  }
  v19 = v10->m128i_i64[0];
  v20 = _mm_loadl_epi64(v10);
  this->_M_impl._M_start._M_node = (std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>::_Map_pointer)v10;
  v21 = (Json::Reader::ErrorInfo **)((char *)v10->m128i_i64 + v6);
  this->_M_impl._M_finish._M_node = v21;
  *(__m128i *)&this->_M_impl._M_start._M_first = _mm_unpacklo_epi64(v20, (__m128i)(unsigned __int64)(v19 + 512));
  v22 = *v21;
  this->_M_impl._M_finish._M_first = *v21;
  this->_M_impl._M_finish._M_last = v22 + 8;
};

// Line 926: range 000000000C7D39F0-000000000C7D3B56
void __fastcall std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::_M_reallocate_map(
        std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType> *const this,
        std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::size_type __nodes_to_add,
        bool __add_at_front)
{
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Map_pointer M_node; // rsi
  std::size_t M_map_size; // rbx
  __int64 v6; // rbp
  std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::size_type v7; // rcx
  std::size_t v8; // rbx
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Map_pointer v9; // rax
  google::protobuf::util::converter::JsonStreamParser::ParseType **v10; // rbx
  size_t v11; // rdx
  std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::size_type v12; // rax
  std::size_t v13; // r13
  google::protobuf::util::converter::JsonStreamParser::ParseType **v14; // rax
  google::protobuf::util::converter::JsonStreamParser::ParseType **v15; // r14
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Map_pointer v16; // rsi
  __int64 v17; // rbx
  std::_Deque_iterator<google::protobuf::util::converter::JsonStreamParser::ParseType,google::protobuf::util::converter::JsonStreamParser::ParseType&,google::protobuf::util::converter::JsonStreamParser::ParseType*>::_Map_pointer v18; // rdx
  google::protobuf::util::converter::JsonStreamParser::ParseType *v19; // rax
  google::protobuf::util::converter::JsonStreamParser::ParseType **v20; // rbx
  google::protobuf::util::converter::JsonStreamParser::ParseType *v21; // rax
  std::deque<google::protobuf::util::converter::JsonStreamParser::ParseType>::size_type v22; // [rsp+0h] [rbp-48h]

  M_node = this->_M_impl._M_start._M_node;
  M_map_size = this->_M_impl._M_map_size;
  v6 = (char *)this->_M_impl._M_finish._M_node - (char *)M_node;
  v7 = __nodes_to_add + (v6 >> 3) + 1;
  if ( M_map_size <= 2 * v7 )
  {
    v12 = __nodes_to_add;
    if ( M_map_size >= __nodes_to_add )
      v12 = this->_M_impl._M_map_size;
    v13 = M_map_size + v12 + 2;
    if ( v13 > 0xFFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v22 = __nodes_to_add + this->_M_impl._M_finish._M_node - M_node + 1;
    v14 = (google::protobuf::util::converter::JsonStreamParser::ParseType **)operator new(8 * v13);
    v15 = v14;
    v16 = this->_M_impl._M_start._M_node;
    v17 = (v13 - v22) >> 1;
    if ( __add_at_front )
      v17 += __nodes_to_add;
    v18 = this->_M_impl._M_finish._M_node + 1;
    v10 = &v14[v17];
    if ( v18 != v16 )
      memmove(v10, v16, (char *)v18 - (char *)v16);
    operator delete(this->_M_impl._M_map);
    this->_M_impl._M_map = v15;
    this->_M_impl._M_map_size = v13;
  }
  else
  {
    v8 = (M_map_size - v7) >> 1;
    if ( __add_at_front )
      v8 += __nodes_to_add;
    v9 = this->_M_impl._M_finish._M_node + 1;
    v10 = &this->_M_impl._M_map[v8];
    v11 = (char *)v9 - (char *)M_node;
    if ( M_node <= v10 )
    {
      if ( M_node != v9 )
        memmove((char *)v10 + v6 + 8 - v11, M_node, v11);
    }
    else if ( M_node != v9 )
    {
      memmove(v10, M_node, v11);
    }
  }
  v19 = *v10;
  this->_M_impl._M_start._M_node = v10;
  v20 = (google::protobuf::util::converter::JsonStreamParser::ParseType **)((char *)v10 + v6);
  this->_M_impl._M_finish._M_node = v20;
  this->_M_impl._M_start._M_first = v19;
  this->_M_impl._M_start._M_last = v19 + 128;
  v21 = *v20;
  this->_M_impl._M_finish._M_first = *v20;
  this->_M_impl._M_finish._M_last = v21 + 128;
};

// Line 926: range 0000000014E8C94C-0000000014E8CDB1
void __fastcall std::deque<jaegertracing::SpanContext const*>::_M_reallocate_map(
        std::deque<const jaegertracing::SpanContext*> *const this,
        std::deque<const jaegertracing::SpanContext*>::size_type __nodes_to_add,
        bool __add_at_front)
{
  std::deque<const jaegertracing::SpanContext*>::size_type v4; // r14
  unsigned __int64 v5; // rbp
  std::_Deque_base<const jaegertracing::SpanContext*>::_Map_pointer M_map; // r13
  unsigned __int64 v7; // r12
  void *p_M_node; // rdi
  std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer M_node; // rdx
  std::size_t v10; // rcx
  __int64 v11; // r15
  std::size_t M_map_size; // rax
  std::deque<const jaegertracing::SpanContext*> *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  std::deque<const jaegertracing::SpanContext*>::size_type v16; // r13
  std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer v17; // rdx
  std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer v18; // rdx
  std::size_t *p_M_map_size; // rdi
  __int64 v20; // r13
  std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer *v21; // rdi
  std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer v22; // rax
  std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer v23; // rsi
  const jaegertracing::SpanContext **v24; // rax
  const jaegertracing::SpanContext **v25; // rax
  const jaegertracing::SpanContext **v26; // rax
  const jaegertracing::SpanContext **v27; // rax
  std::size_t __new_map_size; // [rsp+10h] [rbp-88h]
  const jaegertracing::SpanContext ***__new_map; // [rsp+18h] [rbp-80h]
  char v31[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = __nodes_to_add;
  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v5 = v15;
  }
  M_map = (std::_Deque_base<const jaegertracing::SpanContext*>::_Map_pointer)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v5 + 16) = std::deque<jaegertracing::SpanContext const*>::_M_reallocate_map;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = __nodes_to_add;
  p_M_node = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_12;
  }
  M_node = this->_M_impl._M_finish._M_node;
  p_M_node = &this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_M_node);
    goto LABEL_13;
  }
  __nodes_to_add = (std::deque<const jaegertracing::SpanContext*>::size_type)this->_M_impl._M_start._M_node;
  v4 = (std::deque<const jaegertracing::SpanContext*>::size_type)M_node - __nodes_to_add;
  v10 = *(_QWORD *)(v5 + 32);
  v11 = v10 + ((__int64)((__int64)M_node - __nodes_to_add) >> 3) + 1;
  p_M_node = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_M_node);
    goto LABEL_14;
  }
  M_map_size = this->_M_impl._M_map_size;
  if ( M_map_size <= 2 * v11 )
  {
    p_M_map_size = &this->_M_impl._M_map_size;
    if ( v10 > M_map_size )
      p_M_map_size = (std::size_t *)(v5 + 32);
    if ( *(_BYTE *)(((unsigned __int64)p_M_map_size >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_map_size);
    }
    else
    {
      __new_map_size = *p_M_map_size + M_map_size + 2;
      if ( __new_map_size <= 0xFFFFFFFFFFFFFFFLL )
      {
        __new_map = (const jaegertracing::SpanContext ***)operator new(8 * __new_map_size);
        if ( __add_at_front )
          v20 = *(_QWORD *)(v5 + 32);
        else
          v20 = 0LL;
        v16 = (std::deque<const jaegertracing::SpanContext*>::size_type)&(&__new_map[(__new_map_size - v11) >> 1])[v20];
        v21 = &this->_M_impl._M_finish._M_node;
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v21);
        }
        else
        {
          v22 = this->_M_impl._M_finish._M_node + 1;
          v21 = &this->_M_impl._M_start._M_node;
          if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
          {
            v23 = this->_M_impl._M_start._M_node;
            if ( v22 != v23 )
              memmove((void *)v16, v23, (char *)v22 - (char *)v23);
            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            {
              operator delete(this->_M_impl._M_map);
              if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              {
                this->_M_impl._M_map = __new_map;
                if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
                {
                  this->_M_impl._M_map_size = __new_map_size;
                  goto LABEL_35;
                }
LABEL_52:
                __asan_report_store8();
                goto LABEL_53;
              }
LABEL_51:
              __asan_report_store8();
              goto LABEL_52;
            }
LABEL_50:
            __asan_report_load8(this);
            goto LABEL_51;
          }
        }
        __asan_report_load8(v21);
        goto LABEL_50;
      }
    }
    __asan_handle_no_return(p_M_map_size);
    std::__throw_bad_alloc();
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    v13 = this;
    __asan_report_load8(this);
    goto LABEL_15;
  }
  M_map = this->_M_impl._M_map;
  v13 = (std::deque<const jaegertracing::SpanContext*> *)(8 * ((M_map_size - v11) >> 1));
  if ( __add_at_front )
  {
    v14 = 8 * v10;
    goto LABEL_16;
  }
LABEL_15:
  v14 = 0LL;
LABEL_16:
  v16 = (std::deque<const jaegertracing::SpanContext*>::size_type)M_map + (_QWORD)v13 + v14;
  if ( __nodes_to_add <= v16 )
  {
    v18 = M_node + 1;
    if ( (std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer)__nodes_to_add != v18 )
      memmove(
        (void *)(v16 + v4 + 8 - ((_QWORD)v18 - __nodes_to_add)),
        (const void *)__nodes_to_add,
        (size_t)v18 - __nodes_to_add);
  }
  else
  {
    v17 = M_node + 1;
    if ( (std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer)__nodes_to_add != v17 )
      memmove((void *)v16, (const void *)__nodes_to_add, (size_t)v17 - __nodes_to_add);
  }
LABEL_35:
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  this->_M_impl._M_start._M_node = (std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer)v16;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(v16);
    goto LABEL_55;
  }
  v24 = *(const jaegertracing::SpanContext ***)v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  this->_M_impl._M_start._M_first = v24;
  v25 = v24 + 64;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  this->_M_impl._M_start._M_last = v25;
  v4 += v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
    goto LABEL_58;
  }
  this->_M_impl._M_finish._M_node = (std::_Deque_iterator<const jaegertracing::SpanContext*,const jaegertracing::SpanContext*&,const jaegertracing::SpanContext**>::_Map_pointer)v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v4);
    goto LABEL_59;
  }
  v26 = *(const jaegertracing::SpanContext ***)v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_store8();
    goto LABEL_60;
  }
  this->_M_impl._M_finish._M_first = v26;
  v27 = v26 + 64;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
    goto LABEL_61;
  }
  this->_M_impl._M_finish._M_last = v27;
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_61:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 926: range 0000000019B4B634-0000000019B4BA99
void __fastcall std::deque<std::pair<unsigned int,unsigned int>>::_M_reallocate_map(
        std::deque<std::pair<unsigned int,unsigned int>> *const this,
        std::deque<std::pair<unsigned int,unsigned int>>::size_type __nodes_to_add,
        bool __add_at_front)
{
  std::deque<std::pair<unsigned int,unsigned int>>::size_type v4; // r14
  unsigned __int64 v5; // rbp
  std::_Deque_base<std::pair<unsigned int,unsigned int>>::_Map_pointer M_map; // r13
  unsigned __int64 v7; // r12
  void *p_M_node; // rdi
  std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer M_node; // rdx
  std::size_t v10; // rcx
  __int64 v11; // r15
  std::size_t M_map_size; // rax
  std::deque<std::pair<unsigned int,unsigned int>> *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  std::deque<std::pair<unsigned int,unsigned int>>::size_type v16; // r13
  std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer v17; // rdx
  std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer v18; // rdx
  std::size_t *p_M_map_size; // rdi
  __int64 v20; // r13
  std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer *v21; // rdi
  std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer v22; // rax
  std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer v23; // rsi
  std::pair<unsigned int,unsigned int> *v24; // rax
  std::pair<unsigned int,unsigned int> *v25; // rax
  std::pair<unsigned int,unsigned int> *v26; // rax
  std::pair<unsigned int,unsigned int> *v27; // rax
  std::size_t __new_map_size; // [rsp+10h] [rbp-88h]
  std::pair<unsigned int,unsigned int> **__new_map; // [rsp+18h] [rbp-80h]
  char v31[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = __nodes_to_add;
  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v5 = v15;
  }
  M_map = (std::_Deque_base<std::pair<unsigned int,unsigned int>>::_Map_pointer)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v5 + 16) = std::deque<std::pair<unsigned int,unsigned int>>::_M_reallocate_map;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = __nodes_to_add;
  p_M_node = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_12;
  }
  M_node = this->_M_impl._M_finish._M_node;
  p_M_node = &this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_M_node);
    goto LABEL_13;
  }
  __nodes_to_add = (std::deque<std::pair<unsigned int,unsigned int>>::size_type)this->_M_impl._M_start._M_node;
  v4 = (std::deque<std::pair<unsigned int,unsigned int>>::size_type)M_node - __nodes_to_add;
  v10 = *(_QWORD *)(v5 + 32);
  v11 = v10 + ((__int64)((__int64)M_node - __nodes_to_add) >> 3) + 1;
  p_M_node = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_M_node);
    goto LABEL_14;
  }
  M_map_size = this->_M_impl._M_map_size;
  if ( M_map_size <= 2 * v11 )
  {
    p_M_map_size = &this->_M_impl._M_map_size;
    if ( v10 > M_map_size )
      p_M_map_size = (std::size_t *)(v5 + 32);
    if ( *(_BYTE *)(((unsigned __int64)p_M_map_size >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_map_size);
    }
    else
    {
      __new_map_size = *p_M_map_size + M_map_size + 2;
      if ( __new_map_size <= 0xFFFFFFFFFFFFFFFLL )
      {
        __new_map = (std::pair<unsigned int,unsigned int> **)operator new(8 * __new_map_size);
        if ( __add_at_front )
          v20 = *(_QWORD *)(v5 + 32);
        else
          v20 = 0LL;
        v16 = (std::deque<std::pair<unsigned int,unsigned int>>::size_type)&(&__new_map[(__new_map_size - v11) >> 1])[v20];
        v21 = &this->_M_impl._M_finish._M_node;
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v21);
        }
        else
        {
          v22 = this->_M_impl._M_finish._M_node + 1;
          v21 = &this->_M_impl._M_start._M_node;
          if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
          {
            v23 = this->_M_impl._M_start._M_node;
            if ( v22 != v23 )
              memmove((void *)v16, v23, (char *)v22 - (char *)v23);
            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            {
              operator delete(this->_M_impl._M_map);
              if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              {
                this->_M_impl._M_map = __new_map;
                if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
                {
                  this->_M_impl._M_map_size = __new_map_size;
                  goto LABEL_35;
                }
LABEL_52:
                __asan_report_store8();
                goto LABEL_53;
              }
LABEL_51:
              __asan_report_store8();
              goto LABEL_52;
            }
LABEL_50:
            __asan_report_load8(this);
            goto LABEL_51;
          }
        }
        __asan_report_load8(v21);
        goto LABEL_50;
      }
    }
    __asan_handle_no_return(p_M_map_size);
    std::__throw_bad_alloc();
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    v13 = this;
    __asan_report_load8(this);
    goto LABEL_15;
  }
  M_map = this->_M_impl._M_map;
  v13 = (std::deque<std::pair<unsigned int,unsigned int>> *)(8 * ((M_map_size - v11) >> 1));
  if ( __add_at_front )
  {
    v14 = 8 * v10;
    goto LABEL_16;
  }
LABEL_15:
  v14 = 0LL;
LABEL_16:
  v16 = (std::deque<std::pair<unsigned int,unsigned int>>::size_type)M_map + (_QWORD)v13 + v14;
  if ( __nodes_to_add <= v16 )
  {
    v18 = M_node + 1;
    if ( (std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer)__nodes_to_add != v18 )
      memmove(
        (void *)(v16 + v4 + 8 - ((_QWORD)v18 - __nodes_to_add)),
        (const void *)__nodes_to_add,
        (size_t)v18 - __nodes_to_add);
  }
  else
  {
    v17 = M_node + 1;
    if ( (std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer)__nodes_to_add != v17 )
      memmove((void *)v16, (const void *)__nodes_to_add, (size_t)v17 - __nodes_to_add);
  }
LABEL_35:
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  this->_M_impl._M_start._M_node = (std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer)v16;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(v16);
    goto LABEL_55;
  }
  v24 = *(std::pair<unsigned int,unsigned int> **)v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  this->_M_impl._M_start._M_first = v24;
  v25 = v24 + 64;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  this->_M_impl._M_start._M_last = v25;
  v4 += v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
    goto LABEL_58;
  }
  this->_M_impl._M_finish._M_node = (std::_Deque_iterator<std::pair<unsigned int,unsigned int>,std::pair<unsigned int,unsigned int>&,std::pair<unsigned int,unsigned int>*>::_Map_pointer)v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v4);
    goto LABEL_59;
  }
  v26 = *(std::pair<unsigned int,unsigned int> **)v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_store8();
    goto LABEL_60;
  }
  this->_M_impl._M_finish._M_first = v26;
  v27 = v26 + 64;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
    goto LABEL_61;
  }
  this->_M_impl._M_finish._M_last = v27;
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_61:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 926: range 0000000014E70CC0-0000000014E71125
void __fastcall std::deque<std::shared_ptr<AsyncTask>>::_M_reallocate_map(
        std::deque<std::shared_ptr<AsyncTask>> *const this,
        std::deque<std::shared_ptr<AsyncTask>>::size_type __nodes_to_add,
        bool __add_at_front)
{
  std::deque<std::shared_ptr<AsyncTask>>::size_type v4; // r14
  unsigned __int64 v5; // rbp
  std::_Deque_base<std::shared_ptr<AsyncTask>>::_Map_pointer M_map; // r13
  unsigned __int64 v7; // r12
  void *p_M_node; // rdi
  std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer M_node; // rdx
  std::size_t v10; // rcx
  __int64 v11; // r15
  std::size_t M_map_size; // rax
  std::deque<std::shared_ptr<AsyncTask>> *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  std::deque<std::shared_ptr<AsyncTask>>::size_type v16; // r13
  std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer v17; // rdx
  std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer v18; // rdx
  std::size_t *p_M_map_size; // rdi
  __int64 v20; // r13
  std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer *v21; // rdi
  std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer v22; // rax
  std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer v23; // rsi
  std::shared_ptr<AsyncTask> *v24; // rax
  std::shared_ptr<AsyncTask> *v25; // rax
  std::shared_ptr<AsyncTask> *v26; // rax
  std::shared_ptr<AsyncTask> *v27; // rax
  std::size_t __new_map_size; // [rsp+10h] [rbp-88h]
  std::shared_ptr<AsyncTask> **__new_map; // [rsp+18h] [rbp-80h]
  char v31[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = __nodes_to_add;
  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v5 = v15;
  }
  M_map = (std::_Deque_base<std::shared_ptr<AsyncTask>>::_Map_pointer)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v5 + 16) = std::deque<std::shared_ptr<AsyncTask>>::_M_reallocate_map;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = __nodes_to_add;
  p_M_node = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_12;
  }
  M_node = this->_M_impl._M_finish._M_node;
  p_M_node = &this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_M_node);
    goto LABEL_13;
  }
  __nodes_to_add = (std::deque<std::shared_ptr<AsyncTask>>::size_type)this->_M_impl._M_start._M_node;
  v4 = (std::deque<std::shared_ptr<AsyncTask>>::size_type)M_node - __nodes_to_add;
  v10 = *(_QWORD *)(v5 + 32);
  v11 = v10 + ((__int64)((__int64)M_node - __nodes_to_add) >> 3) + 1;
  p_M_node = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_M_node);
    goto LABEL_14;
  }
  M_map_size = this->_M_impl._M_map_size;
  if ( M_map_size <= 2 * v11 )
  {
    p_M_map_size = &this->_M_impl._M_map_size;
    if ( v10 > M_map_size )
      p_M_map_size = (std::size_t *)(v5 + 32);
    if ( *(_BYTE *)(((unsigned __int64)p_M_map_size >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_map_size);
    }
    else
    {
      __new_map_size = *p_M_map_size + M_map_size + 2;
      if ( __new_map_size <= 0xFFFFFFFFFFFFFFFLL )
      {
        __new_map = (std::shared_ptr<AsyncTask> **)operator new(8 * __new_map_size);
        if ( __add_at_front )
          v20 = 8LL * *(_QWORD *)(v5 + 32);
        else
          v20 = 0LL;
        v16 = (std::deque<std::shared_ptr<AsyncTask>>::size_type)&__new_map[(__new_map_size - v11) >> 1] + v20;
        v21 = &this->_M_impl._M_finish._M_node;
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v21);
        }
        else
        {
          v22 = this->_M_impl._M_finish._M_node + 1;
          v21 = &this->_M_impl._M_start._M_node;
          if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
          {
            v23 = this->_M_impl._M_start._M_node;
            if ( v22 != v23 )
              memmove((void *)v16, v23, (char *)v22 - (char *)v23);
            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            {
              operator delete(this->_M_impl._M_map);
              if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              {
                this->_M_impl._M_map = __new_map;
                if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
                {
                  this->_M_impl._M_map_size = __new_map_size;
                  goto LABEL_35;
                }
LABEL_52:
                __asan_report_store8();
                goto LABEL_53;
              }
LABEL_51:
              __asan_report_store8();
              goto LABEL_52;
            }
LABEL_50:
            __asan_report_load8(this);
            goto LABEL_51;
          }
        }
        __asan_report_load8(v21);
        goto LABEL_50;
      }
    }
    __asan_handle_no_return(p_M_map_size);
    std::__throw_bad_alloc();
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    v13 = this;
    __asan_report_load8(this);
    goto LABEL_15;
  }
  M_map = this->_M_impl._M_map;
  v13 = (std::deque<std::shared_ptr<AsyncTask>> *)(8 * ((M_map_size - v11) >> 1));
  if ( __add_at_front )
  {
    v14 = 8 * v10;
    goto LABEL_16;
  }
LABEL_15:
  v14 = 0LL;
LABEL_16:
  v16 = (std::deque<std::shared_ptr<AsyncTask>>::size_type)M_map + (_QWORD)v13 + v14;
  if ( __nodes_to_add <= v16 )
  {
    v18 = M_node + 1;
    if ( (std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer)__nodes_to_add != v18 )
      memmove(
        (void *)(v16 + v4 + 8 - ((_QWORD)v18 - __nodes_to_add)),
        (const void *)__nodes_to_add,
        (size_t)v18 - __nodes_to_add);
  }
  else
  {
    v17 = M_node + 1;
    if ( (std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer)__nodes_to_add != v17 )
      memmove((void *)v16, (const void *)__nodes_to_add, (size_t)v17 - __nodes_to_add);
  }
LABEL_35:
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  this->_M_impl._M_start._M_node = (std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer)v16;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(v16);
    goto LABEL_55;
  }
  v24 = *(std::shared_ptr<AsyncTask> **)v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  this->_M_impl._M_start._M_first = v24;
  v25 = v24 + 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  this->_M_impl._M_start._M_last = v25;
  v4 += v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
    goto LABEL_58;
  }
  this->_M_impl._M_finish._M_node = (std::_Deque_iterator<std::shared_ptr<AsyncTask>,std::shared_ptr<AsyncTask>&,std::shared_ptr<AsyncTask>*>::_Map_pointer)v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v4);
    goto LABEL_59;
  }
  v26 = *(std::shared_ptr<AsyncTask> **)v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_store8();
    goto LABEL_60;
  }
  this->_M_impl._M_finish._M_first = v26;
  v27 = v26 + 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
    goto LABEL_61;
  }
  this->_M_impl._M_finish._M_last = v27;
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_61:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 926: range 0000000014E3CCFC-0000000014E3D161
void __fastcall std::deque<std::shared_ptr<MonitorValue>>::_M_reallocate_map(
        std::deque<std::shared_ptr<MonitorValue>> *const this,
        std::deque<std::shared_ptr<MonitorValue>>::size_type __nodes_to_add,
        bool __add_at_front)
{
  std::deque<std::shared_ptr<MonitorValue>>::size_type v4; // r14
  unsigned __int64 v5; // rbp
  std::_Deque_base<std::shared_ptr<MonitorValue>>::_Map_pointer M_map; // r13
  unsigned __int64 v7; // r12
  void *p_M_node; // rdi
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer M_node; // rdx
  std::size_t v10; // rcx
  __int64 v11; // r15
  std::size_t M_map_size; // rax
  std::deque<std::shared_ptr<MonitorValue>> *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  std::deque<std::shared_ptr<MonitorValue>>::size_type v16; // r13
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer v17; // rdx
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer v18; // rdx
  std::size_t *p_M_map_size; // rdi
  __int64 v20; // r13
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *v21; // rdi
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer v22; // rax
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer v23; // rsi
  std::shared_ptr<MonitorValue> *v24; // rax
  std::shared_ptr<MonitorValue> *v25; // rax
  std::shared_ptr<MonitorValue> *v26; // rax
  std::shared_ptr<MonitorValue> *v27; // rax
  std::size_t __new_map_size; // [rsp+10h] [rbp-88h]
  std::shared_ptr<MonitorValue> **__new_map; // [rsp+18h] [rbp-80h]
  char v31[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = __nodes_to_add;
  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v5 = v15;
  }
  M_map = (std::_Deque_base<std::shared_ptr<MonitorValue>>::_Map_pointer)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v5 + 16) = std::deque<std::shared_ptr<MonitorValue>>::_M_reallocate_map;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = __nodes_to_add;
  p_M_node = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_12;
  }
  M_node = this->_M_impl._M_finish._M_node;
  p_M_node = &this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_M_node);
    goto LABEL_13;
  }
  __nodes_to_add = (std::deque<std::shared_ptr<MonitorValue>>::size_type)this->_M_impl._M_start._M_node;
  v4 = (std::deque<std::shared_ptr<MonitorValue>>::size_type)M_node - __nodes_to_add;
  v10 = *(_QWORD *)(v5 + 32);
  v11 = v10 + ((__int64)((__int64)M_node - __nodes_to_add) >> 3) + 1;
  p_M_node = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_M_node);
    goto LABEL_14;
  }
  M_map_size = this->_M_impl._M_map_size;
  if ( M_map_size <= 2 * v11 )
  {
    p_M_map_size = &this->_M_impl._M_map_size;
    if ( v10 > M_map_size )
      p_M_map_size = (std::size_t *)(v5 + 32);
    if ( *(_BYTE *)(((unsigned __int64)p_M_map_size >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_map_size);
    }
    else
    {
      __new_map_size = *p_M_map_size + M_map_size + 2;
      if ( __new_map_size <= 0xFFFFFFFFFFFFFFFLL )
      {
        __new_map = (std::shared_ptr<MonitorValue> **)operator new(8 * __new_map_size);
        if ( __add_at_front )
          v20 = 8LL * *(_QWORD *)(v5 + 32);
        else
          v20 = 0LL;
        v16 = (std::deque<std::shared_ptr<MonitorValue>>::size_type)&__new_map[(__new_map_size - v11) >> 1] + v20;
        v21 = &this->_M_impl._M_finish._M_node;
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v21);
        }
        else
        {
          v22 = this->_M_impl._M_finish._M_node + 1;
          v21 = &this->_M_impl._M_start._M_node;
          if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
          {
            v23 = this->_M_impl._M_start._M_node;
            if ( v22 != v23 )
              memmove((void *)v16, v23, (char *)v22 - (char *)v23);
            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            {
              operator delete(this->_M_impl._M_map);
              if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              {
                this->_M_impl._M_map = __new_map;
                if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
                {
                  this->_M_impl._M_map_size = __new_map_size;
                  goto LABEL_35;
                }
LABEL_52:
                __asan_report_store8();
                goto LABEL_53;
              }
LABEL_51:
              __asan_report_store8();
              goto LABEL_52;
            }
LABEL_50:
            __asan_report_load8(this);
            goto LABEL_51;
          }
        }
        __asan_report_load8(v21);
        goto LABEL_50;
      }
    }
    __asan_handle_no_return(p_M_map_size);
    std::__throw_bad_alloc();
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    v13 = this;
    __asan_report_load8(this);
    goto LABEL_15;
  }
  M_map = this->_M_impl._M_map;
  v13 = (std::deque<std::shared_ptr<MonitorValue>> *)(8 * ((M_map_size - v11) >> 1));
  if ( __add_at_front )
  {
    v14 = 8 * v10;
    goto LABEL_16;
  }
LABEL_15:
  v14 = 0LL;
LABEL_16:
  v16 = (std::deque<std::shared_ptr<MonitorValue>>::size_type)M_map + (_QWORD)v13 + v14;
  if ( __nodes_to_add <= v16 )
  {
    v18 = M_node + 1;
    if ( (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer)__nodes_to_add != v18 )
      memmove(
        (void *)(v16 + v4 + 8 - ((_QWORD)v18 - __nodes_to_add)),
        (const void *)__nodes_to_add,
        (size_t)v18 - __nodes_to_add);
  }
  else
  {
    v17 = M_node + 1;
    if ( (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer)__nodes_to_add != v17 )
      memmove((void *)v16, (const void *)__nodes_to_add, (size_t)v17 - __nodes_to_add);
  }
LABEL_35:
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  this->_M_impl._M_start._M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer)v16;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(v16);
    goto LABEL_55;
  }
  v24 = *(std::shared_ptr<MonitorValue> **)v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  this->_M_impl._M_start._M_first = v24;
  v25 = v24 + 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  this->_M_impl._M_start._M_last = v25;
  v4 += v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
    goto LABEL_58;
  }
  this->_M_impl._M_finish._M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer)v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v4);
    goto LABEL_59;
  }
  v26 = *(std::shared_ptr<MonitorValue> **)v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_store8();
    goto LABEL_60;
  }
  this->_M_impl._M_finish._M_first = v26;
  v27 = v26 + 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
    goto LABEL_61;
  }
  this->_M_impl._M_finish._M_last = v27;
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_61:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 926: range 0000000014E641A4-0000000014E64609
void __fastcall std::deque<std::shared_ptr<common::minet::Packet>>::_M_reallocate_map(
        std::deque<std::shared_ptr<common::minet::Packet>> *const this,
        std::deque<std::shared_ptr<common::minet::Packet>>::size_type __nodes_to_add,
        bool __add_at_front)
{
  std::deque<std::shared_ptr<common::minet::Packet>>::size_type v4; // r14
  unsigned __int64 v5; // rbp
  std::_Deque_base<std::shared_ptr<common::minet::Packet>>::_Map_pointer M_map; // r13
  unsigned __int64 v7; // r12
  void *p_M_node; // rdi
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer M_node; // rdx
  std::size_t v10; // rcx
  __int64 v11; // r15
  std::size_t M_map_size; // rax
  std::deque<std::shared_ptr<common::minet::Packet>> *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  std::deque<std::shared_ptr<common::minet::Packet>>::size_type v16; // r13
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer v17; // rdx
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer v18; // rdx
  std::size_t *p_M_map_size; // rdi
  __int64 v20; // r13
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer *v21; // rdi
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer v22; // rax
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer v23; // rsi
  std::shared_ptr<common::minet::Packet> *v24; // rax
  std::shared_ptr<common::minet::Packet> *v25; // rax
  std::shared_ptr<common::minet::Packet> *v26; // rax
  std::shared_ptr<common::minet::Packet> *v27; // rax
  std::size_t __new_map_size; // [rsp+10h] [rbp-88h]
  std::shared_ptr<common::minet::Packet> **__new_map; // [rsp+18h] [rbp-80h]
  char v31[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = __nodes_to_add;
  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v5 = v15;
  }
  M_map = (std::_Deque_base<std::shared_ptr<common::minet::Packet>>::_Map_pointer)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v5 + 16) = std::deque<std::shared_ptr<common::minet::Packet>>::_M_reallocate_map;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = __nodes_to_add;
  p_M_node = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_12;
  }
  M_node = this->_M_impl._M_finish._M_node;
  p_M_node = &this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_M_node);
    goto LABEL_13;
  }
  __nodes_to_add = (std::deque<std::shared_ptr<common::minet::Packet>>::size_type)this->_M_impl._M_start._M_node;
  v4 = (std::deque<std::shared_ptr<common::minet::Packet>>::size_type)M_node - __nodes_to_add;
  v10 = *(_QWORD *)(v5 + 32);
  v11 = v10 + ((__int64)((__int64)M_node - __nodes_to_add) >> 3) + 1;
  p_M_node = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_M_node);
    goto LABEL_14;
  }
  M_map_size = this->_M_impl._M_map_size;
  if ( M_map_size <= 2 * v11 )
  {
    p_M_map_size = &this->_M_impl._M_map_size;
    if ( v10 > M_map_size )
      p_M_map_size = (std::size_t *)(v5 + 32);
    if ( *(_BYTE *)(((unsigned __int64)p_M_map_size >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_map_size);
    }
    else
    {
      __new_map_size = *p_M_map_size + M_map_size + 2;
      if ( __new_map_size <= 0xFFFFFFFFFFFFFFFLL )
      {
        __new_map = (std::shared_ptr<common::minet::Packet> **)operator new(8 * __new_map_size);
        if ( __add_at_front )
          v20 = 8LL * *(_QWORD *)(v5 + 32);
        else
          v20 = 0LL;
        v16 = (std::deque<std::shared_ptr<common::minet::Packet>>::size_type)&__new_map[(__new_map_size - v11) >> 1]
            + v20;
        v21 = &this->_M_impl._M_finish._M_node;
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v21);
        }
        else
        {
          v22 = this->_M_impl._M_finish._M_node + 1;
          v21 = &this->_M_impl._M_start._M_node;
          if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
          {
            v23 = this->_M_impl._M_start._M_node;
            if ( v22 != v23 )
              memmove((void *)v16, v23, (char *)v22 - (char *)v23);
            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            {
              operator delete(this->_M_impl._M_map);
              if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              {
                this->_M_impl._M_map = __new_map;
                if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
                {
                  this->_M_impl._M_map_size = __new_map_size;
                  goto LABEL_35;
                }
LABEL_52:
                __asan_report_store8();
                goto LABEL_53;
              }
LABEL_51:
              __asan_report_store8();
              goto LABEL_52;
            }
LABEL_50:
            __asan_report_load8(this);
            goto LABEL_51;
          }
        }
        __asan_report_load8(v21);
        goto LABEL_50;
      }
    }
    __asan_handle_no_return(p_M_map_size);
    std::__throw_bad_alloc();
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    v13 = this;
    __asan_report_load8(this);
    goto LABEL_15;
  }
  M_map = this->_M_impl._M_map;
  v13 = (std::deque<std::shared_ptr<common::minet::Packet>> *)(8 * ((M_map_size - v11) >> 1));
  if ( __add_at_front )
  {
    v14 = 8 * v10;
    goto LABEL_16;
  }
LABEL_15:
  v14 = 0LL;
LABEL_16:
  v16 = (std::deque<std::shared_ptr<common::minet::Packet>>::size_type)M_map + (_QWORD)v13 + v14;
  if ( __nodes_to_add <= v16 )
  {
    v18 = M_node + 1;
    if ( (std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer)__nodes_to_add != v18 )
      memmove(
        (void *)(v16 + v4 + 8 - ((_QWORD)v18 - __nodes_to_add)),
        (const void *)__nodes_to_add,
        (size_t)v18 - __nodes_to_add);
  }
  else
  {
    v17 = M_node + 1;
    if ( (std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer)__nodes_to_add != v17 )
      memmove((void *)v16, (const void *)__nodes_to_add, (size_t)v17 - __nodes_to_add);
  }
LABEL_35:
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  this->_M_impl._M_start._M_node = (std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer)v16;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(v16);
    goto LABEL_55;
  }
  v24 = *(std::shared_ptr<common::minet::Packet> **)v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  this->_M_impl._M_start._M_first = v24;
  v25 = v24 + 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  this->_M_impl._M_start._M_last = v25;
  v4 += v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
    goto LABEL_58;
  }
  this->_M_impl._M_finish._M_node = (std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer)v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v4);
    goto LABEL_59;
  }
  v26 = *(std::shared_ptr<common::minet::Packet> **)v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_store8();
    goto LABEL_60;
  }
  this->_M_impl._M_finish._M_first = v26;
  v27 = v26 + 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
    goto LABEL_61;
  }
  this->_M_impl._M_finish._M_last = v27;
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_61:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 926: range 000000000C9A42A4-000000000C9A4709
void __fastcall std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384>>>>::_M_reallocate_map(
        std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >> *const this,
        std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >>::size_type __nodes_to_add,
        bool __add_at_front)
{
  std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >>::size_type v4; // r14
  unsigned __int64 v5; // rbp
  std::_Deque_base<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >>::_Map_pointer M_map; // r13
  unsigned __int64 v7; // r12
  void *p_M_node; // rdi
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer M_node; // rdx
  std::size_t v10; // rcx
  __int64 v11; // r15
  std::size_t M_map_size; // rax
  std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >> *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >>::size_type v16; // r13
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer v17; // rdx
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer v18; // rdx
  std::size_t *p_M_map_size; // rdi
  __int64 v20; // r13
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer *v21; // rdi
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer v22; // rax
  std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer v23; // rsi
  std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > *v24; // rax
  std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > *v25; // rax
  std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > *v26; // rax
  std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > *v27; // rax
  std::size_t __new_map_size; // [rsp+10h] [rbp-88h]
  std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > **__new_map; // [rsp+18h] [rbp-80h]
  char v31[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = __nodes_to_add;
  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v5 = v15;
  }
  M_map = (std::_Deque_base<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >>::_Map_pointer)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v5 + 16) = std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384>>>>::_M_reallocate_map;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = __nodes_to_add;
  p_M_node = &this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_12;
  }
  M_node = this->_M_impl._M_finish._M_node;
  p_M_node = &this->_M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_M_node);
    goto LABEL_13;
  }
  __nodes_to_add = (std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >>::size_type)this->_M_impl._M_start._M_node;
  v4 = (std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >>::size_type)M_node
     - __nodes_to_add;
  v10 = *(_QWORD *)(v5 + 32);
  v11 = v10 + ((__int64)((__int64)M_node - __nodes_to_add) >> 3) + 1;
  p_M_node = &this->_M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_M_node);
    goto LABEL_14;
  }
  M_map_size = this->_M_impl._M_map_size;
  if ( M_map_size <= 2 * v11 )
  {
    p_M_map_size = &this->_M_impl._M_map_size;
    if ( v10 > M_map_size )
      p_M_map_size = (std::size_t *)(v5 + 32);
    if ( *(_BYTE *)(((unsigned __int64)p_M_map_size >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_map_size);
    }
    else
    {
      __new_map_size = *p_M_map_size + M_map_size + 2;
      if ( __new_map_size <= 0xFFFFFFFFFFFFFFFLL )
      {
        __new_map = (std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > **)operator new(8 * __new_map_size);
        if ( __add_at_front )
          v20 = 8LL * *(_QWORD *)(v5 + 32);
        else
          v20 = 0LL;
        v16 = (std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >>::size_type)&__new_map[(__new_map_size - v11) >> 1]
            + v20;
        v21 = &this->_M_impl._M_finish._M_node;
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v21);
        }
        else
        {
          v22 = this->_M_impl._M_finish._M_node + 1;
          v21 = &this->_M_impl._M_start._M_node;
          if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
          {
            v23 = this->_M_impl._M_start._M_node;
            if ( v22 != v23 )
              memmove((void *)v16, v23, (char *)v22 - (char *)v23);
            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            {
              operator delete(this->_M_impl._M_map);
              if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              {
                this->_M_impl._M_map = __new_map;
                if ( !*(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
                {
                  this->_M_impl._M_map_size = __new_map_size;
                  goto LABEL_35;
                }
LABEL_52:
                __asan_report_store8();
                goto LABEL_53;
              }
LABEL_51:
              __asan_report_store8();
              goto LABEL_52;
            }
LABEL_50:
            __asan_report_load8(this);
            goto LABEL_51;
          }
        }
        __asan_report_load8(v21);
        goto LABEL_50;
      }
    }
    __asan_handle_no_return(p_M_map_size);
    std::__throw_bad_alloc();
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    v13 = this;
    __asan_report_load8(this);
    goto LABEL_15;
  }
  M_map = this->_M_impl._M_map;
  v13 = (std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >> *)(8 * ((M_map_size - v11) >> 1));
  if ( __add_at_front )
  {
    v14 = 8 * v10;
    goto LABEL_16;
  }
LABEL_15:
  v14 = 0LL;
LABEL_16:
  v16 = (std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >>::size_type)M_map
      + (_QWORD)v13
      + v14;
  if ( __nodes_to_add <= v16 )
  {
    v18 = M_node + 1;
    if ( (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer)__nodes_to_add != v18 )
      memmove(
        (void *)(v16 + v4 + 8 - ((_QWORD)v18 - __nodes_to_add)),
        (const void *)__nodes_to_add,
        (size_t)v18 - __nodes_to_add);
  }
  else
  {
    v17 = M_node + 1;
    if ( (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer)__nodes_to_add != v17 )
      memmove((void *)v16, (const void *)__nodes_to_add, (size_t)v17 - __nodes_to_add);
  }
LABEL_35:
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  this->_M_impl._M_start._M_node = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer)v16;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(v16);
    goto LABEL_55;
  }
  v24 = *(std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > **)v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  this->_M_impl._M_start._M_first = v24;
  v25 = v24 + 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  this->_M_impl._M_start._M_last = v25;
  v4 += v16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
    goto LABEL_58;
  }
  this->_M_impl._M_finish._M_node = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Map_pointer)v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v4);
    goto LABEL_59;
  }
  v26 = *(std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > > **)v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_store8();
    goto LABEL_60;
  }
  this->_M_impl._M_finish._M_first = v26;
  v27 = v26 + 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
    goto LABEL_61;
  }
  this->_M_impl._M_finish._M_last = v27;
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_61:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 926: range 000000000F94393A-000000000F943EFE
void __fastcall std::deque<Coordinate>::_M_reallocate_map(
        std::deque<Coordinate> *const this,
        std::deque<Coordinate>::size_type __nodes_to_add,
        bool __add_at_front)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Deque_iterator<Coordinate,Coordinate&,Coordinate*>::_Map_pointer M_node; // rcx
  __int64 v7; // rax
  Coordinate **v8; // rdx
  Coordinate **v9; // rcx
  std::size_t M_map_size; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  Coordinate **v13; // rcx
  std::deque<Coordinate> *v14; // rax
  std::size_t v15; // rdx
  Coordinate **__new_nstart; // [rsp+28h] [rbp-98h]
  std::deque<Coordinate>::size_type __old_num_nodes; // [rsp+30h] [rbp-90h]
  std::deque<Coordinate>::size_type __new_num_nodes; // [rsp+38h] [rbp-88h]
  std::size_t __new_map_size; // [rsp+40h] [rbp-80h]
  Coordinate **__new_map; // [rsp+48h] [rbp-78h]
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v3 + 16) = std::deque<Coordinate>::_M_reallocate_map;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = __nodes_to_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  M_node = this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  __old_num_nodes = M_node - this->_M_impl._M_start._M_node + 1;
  __new_num_nodes = *(_QWORD *)(v3 + 32) + __old_num_nodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_map_size);
  if ( this->_M_impl._M_map_size <= 2 * __new_num_nodes )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_map_size);
    M_map_size = this->_M_impl._M_map_size;
    v11 = (unsigned __int64)std::max<unsigned long>(&this->_M_impl._M_map_size, (const unsigned __int64 *)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    __new_map_size = M_map_size + *(_QWORD *)v11 + 2;
    __new_map = std::_Deque_base<Coordinate>::_M_allocate_map(this, __new_map_size);
    if ( __add_at_front )
      v12 = *(_QWORD *)(v3 + 32);
    else
      v12 = 0LL;
    __new_nstart = &(&__new_map[(__new_map_size - __new_num_nodes) >> 1])[v12];
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v13 = this->_M_impl._M_finish._M_node + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    std::copy<Coordinate **,Coordinate **>(this->_M_impl._M_start._M_node, v13, __new_nstart);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      v14 = (std::deque<Coordinate> *)__asan_report_load8(&this->_M_impl._M_map_size);
    v15 = this->_M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v14 = (std::deque<Coordinate> *)__asan_report_load8(this);
    std::_Deque_base<Coordinate>::_M_deallocate_map(v14, this->_M_impl._M_map, v15);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map = __new_map;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map_size = __new_map_size;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( __add_at_front )
      v7 = *(_QWORD *)(v3 + 32);
    else
      v7 = 0LL;
    __new_nstart = &(&this->_M_impl._M_map[(this->_M_impl._M_map_size - __new_num_nodes) >> 1])[v7];
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    if ( __new_nstart >= this->_M_impl._M_start._M_node )
    {
      v8 = &__new_nstart[__old_num_nodes];
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      v9 = this->_M_impl._M_finish._M_node + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_start._M_node);
      std::copy_backward<Coordinate **,Coordinate **>(this->_M_impl._M_start._M_node, v9, v8);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      std::copy<Coordinate **,Coordinate **>(
        this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
    }
  }
  std::_Deque_iterator<Coordinate,Coordinate&,Coordinate*>::_M_set_node(&this->_M_impl._M_start, __new_nstart);
  std::_Deque_iterator<Coordinate,Coordinate&,Coordinate*>::_M_set_node(
    &this->_M_impl._M_finish,
    &__new_nstart[__old_num_nodes - 1]);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 926: range 000000000F922DE6-000000000F9233AA
void __fastcall std::deque<LuaIndexCheckerContext>::_M_reallocate_map(
        std::deque<LuaIndexCheckerContext> *const this,
        std::deque<LuaIndexCheckerContext>::size_type __nodes_to_add,
        bool __add_at_front)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Deque_iterator<LuaIndexCheckerContext,LuaIndexCheckerContext&,LuaIndexCheckerContext*>::_Map_pointer M_node; // rcx
  __int64 v7; // rax
  LuaIndexCheckerContext **v8; // rdx
  LuaIndexCheckerContext **v9; // rcx
  std::size_t M_map_size; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  LuaIndexCheckerContext **v13; // rcx
  std::deque<LuaIndexCheckerContext> *v14; // rax
  std::size_t v15; // rdx
  LuaIndexCheckerContext **__new_nstart; // [rsp+28h] [rbp-98h]
  std::deque<LuaIndexCheckerContext>::size_type __old_num_nodes; // [rsp+30h] [rbp-90h]
  std::deque<LuaIndexCheckerContext>::size_type __new_num_nodes; // [rsp+38h] [rbp-88h]
  std::size_t __new_map_size; // [rsp+40h] [rbp-80h]
  LuaIndexCheckerContext **__new_map; // [rsp+48h] [rbp-78h]
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v3 + 16) = std::deque<LuaIndexCheckerContext>::_M_reallocate_map;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = __nodes_to_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  M_node = this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  __old_num_nodes = M_node - this->_M_impl._M_start._M_node + 1;
  __new_num_nodes = *(_QWORD *)(v3 + 32) + __old_num_nodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_map_size);
  if ( this->_M_impl._M_map_size <= 2 * __new_num_nodes )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_map_size);
    M_map_size = this->_M_impl._M_map_size;
    v11 = (unsigned __int64)std::max<unsigned long>(&this->_M_impl._M_map_size, (const unsigned __int64 *)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    __new_map_size = M_map_size + *(_QWORD *)v11 + 2;
    __new_map = std::_Deque_base<LuaIndexCheckerContext>::_M_allocate_map(this, __new_map_size);
    if ( __add_at_front )
      v12 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v12 = 0LL;
    __new_nstart = (LuaIndexCheckerContext **)((char *)&__new_map[(__new_map_size - __new_num_nodes) >> 1] + v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v13 = this->_M_impl._M_finish._M_node + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    std::copy<LuaIndexCheckerContext **,LuaIndexCheckerContext **>(this->_M_impl._M_start._M_node, v13, __new_nstart);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      v14 = (std::deque<LuaIndexCheckerContext> *)__asan_report_load8(&this->_M_impl._M_map_size);
    v15 = this->_M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v14 = (std::deque<LuaIndexCheckerContext> *)__asan_report_load8(this);
    std::_Deque_base<LuaIndexCheckerContext>::_M_deallocate_map(v14, this->_M_impl._M_map, v15);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map = __new_map;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map_size = __new_map_size;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( __add_at_front )
      v7 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v7 = 0LL;
    __new_nstart = (LuaIndexCheckerContext **)((char *)&this->_M_impl._M_map[(this->_M_impl._M_map_size - __new_num_nodes) >> 1]
                                             + v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    if ( __new_nstart >= this->_M_impl._M_start._M_node )
    {
      v8 = &__new_nstart[__old_num_nodes];
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      v9 = this->_M_impl._M_finish._M_node + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_start._M_node);
      std::copy_backward<LuaIndexCheckerContext **,LuaIndexCheckerContext **>(this->_M_impl._M_start._M_node, v9, v8);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      std::copy<LuaIndexCheckerContext **,LuaIndexCheckerContext **>(
        this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
    }
  }
  std::_Deque_iterator<LuaIndexCheckerContext,LuaIndexCheckerContext&,LuaIndexCheckerContext*>::_M_set_node(
    &this->_M_impl._M_start,
    __new_nstart);
  std::_Deque_iterator<LuaIndexCheckerContext,LuaIndexCheckerContext&,LuaIndexCheckerContext*>::_M_set_node(
    &this->_M_impl._M_finish,
    &__new_nstart[__old_num_nodes - 1]);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 926: range 000000000D48179E-000000000D481D62
void __fastcall std::deque<long>::_M_reallocate_map(
        std::deque<long int> *const this,
        std::deque<long int>::size_type __nodes_to_add,
        bool __add_at_front)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Deque_iterator<long int,long int&,long int*>::_Map_pointer M_node; // rcx
  __int64 v7; // rax
  __int64 **v8; // rdx
  __int64 **v9; // rcx
  std::size_t M_map_size; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 **v13; // rcx
  std::deque<long int> *v14; // rax
  std::size_t v15; // rdx
  __int64 **__new_nstart; // [rsp+28h] [rbp-98h]
  std::deque<long int>::size_type __old_num_nodes; // [rsp+30h] [rbp-90h]
  std::deque<long int>::size_type __new_num_nodes; // [rsp+38h] [rbp-88h]
  std::size_t __new_map_size; // [rsp+40h] [rbp-80h]
  __int64 **__new_map; // [rsp+48h] [rbp-78h]
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v3 + 16) = std::deque<long>::_M_reallocate_map;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = __nodes_to_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  M_node = this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  __old_num_nodes = M_node - this->_M_impl._M_start._M_node + 1;
  __new_num_nodes = *(_QWORD *)(v3 + 32) + __old_num_nodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_map_size);
  if ( this->_M_impl._M_map_size <= 2 * __new_num_nodes )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_map_size);
    M_map_size = this->_M_impl._M_map_size;
    v11 = (unsigned __int64)std::max<unsigned long>(&this->_M_impl._M_map_size, (const unsigned __int64 *)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    __new_map_size = M_map_size + *(_QWORD *)v11 + 2;
    __new_map = std::_Deque_base<long>::_M_allocate_map(this, __new_map_size);
    if ( __add_at_front )
      v12 = *(_QWORD *)(v3 + 32);
    else
      v12 = 0LL;
    __new_nstart = &(&__new_map[(__new_map_size - __new_num_nodes) >> 1])[v12];
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v13 = this->_M_impl._M_finish._M_node + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    std::copy<long **,long **>(this->_M_impl._M_start._M_node, v13, __new_nstart);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      v14 = (std::deque<long int> *)__asan_report_load8(&this->_M_impl._M_map_size);
    v15 = this->_M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v14 = (std::deque<long int> *)__asan_report_load8(this);
    std::_Deque_base<long>::_M_deallocate_map(v14, this->_M_impl._M_map, v15);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map = __new_map;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map_size = __new_map_size;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( __add_at_front )
      v7 = *(_QWORD *)(v3 + 32);
    else
      v7 = 0LL;
    __new_nstart = &(&this->_M_impl._M_map[(this->_M_impl._M_map_size - __new_num_nodes) >> 1])[v7];
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    if ( __new_nstart >= this->_M_impl._M_start._M_node )
    {
      v8 = &__new_nstart[__old_num_nodes];
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      v9 = this->_M_impl._M_finish._M_node + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_start._M_node);
      std::copy_backward<long **,long **>(this->_M_impl._M_start._M_node, v9, v8);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      std::copy<long **,long **>(this->_M_impl._M_start._M_node, this->_M_impl._M_finish._M_node + 1, __new_nstart);
    }
  }
  std::_Deque_iterator<long,long &,long *>::_M_set_node(&this->_M_impl._M_start, __new_nstart);
  std::_Deque_iterator<long,long &,long *>::_M_set_node(&this->_M_impl._M_finish, &__new_nstart[__old_num_nodes - 1]);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 926: range 000000000D46A70E-000000000D46ACD2
void __fastcall std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_reallocate_map(
        std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *const this,
        std::deque<std::__detail::_StateSeq<std::regex_traits<char> >>::size_type __nodes_to_add,
        bool __add_at_front)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Deque_iterator<std::__detail::_StateSeq<std::regex_traits<char> >,std::__detail::_StateSeq<std::regex_traits<char> >&,std::__detail::_StateSeq<std::regex_traits<char> >*>::_Map_pointer M_node; // rcx
  __int64 v7; // rax
  std::__detail::_StateSeq<std::regex_traits<char> > **v8; // rdx
  std::__detail::_StateSeq<std::regex_traits<char> > **v9; // rcx
  std::size_t M_map_size; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::__detail::_StateSeq<std::regex_traits<char> > **v13; // rcx
  std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *v14; // rax
  std::size_t v15; // rdx
  std::__detail::_StateSeq<std::regex_traits<char> > **__new_nstart; // [rsp+28h] [rbp-98h]
  std::deque<std::__detail::_StateSeq<std::regex_traits<char> >>::size_type __old_num_nodes; // [rsp+30h] [rbp-90h]
  std::deque<std::__detail::_StateSeq<std::regex_traits<char> >>::size_type __new_num_nodes; // [rsp+38h] [rbp-88h]
  std::size_t __new_map_size; // [rsp+40h] [rbp-80h]
  std::__detail::_StateSeq<std::regex_traits<char> > **__new_map; // [rsp+48h] [rbp-78h]
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v3 + 16) = std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_reallocate_map;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = __nodes_to_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  M_node = this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  __old_num_nodes = M_node - this->_M_impl._M_start._M_node + 1;
  __new_num_nodes = *(_QWORD *)(v3 + 32) + __old_num_nodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_map_size);
  if ( this->_M_impl._M_map_size <= 2 * __new_num_nodes )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_map_size);
    M_map_size = this->_M_impl._M_map_size;
    v11 = (unsigned __int64)std::max<unsigned long>(&this->_M_impl._M_map_size, (const unsigned __int64 *)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    __new_map_size = M_map_size + *(_QWORD *)v11 + 2;
    __new_map = std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_allocate_map(
                  this,
                  __new_map_size);
    if ( __add_at_front )
      v12 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v12 = 0LL;
    __new_nstart = (std::__detail::_StateSeq<std::regex_traits<char> > **)((char *)&__new_map[(__new_map_size
                                                                                             - __new_num_nodes) >> 1]
                                                                         + v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v13 = this->_M_impl._M_finish._M_node + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    std::copy<std::__detail::_StateSeq<std::regex_traits<char>> **,std::__detail::_StateSeq<std::regex_traits<char>> **>(
      this->_M_impl._M_start._M_node,
      v13,
      __new_nstart);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *)__asan_report_load8(&this->_M_impl._M_map_size);
    v15 = this->_M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::__detail::_StateSeq<std::regex_traits<char> >> *)__asan_report_load8(this);
    std::_Deque_base<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_deallocate_map(
      v14,
      this->_M_impl._M_map,
      v15);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map = __new_map;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map_size = __new_map_size;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( __add_at_front )
      v7 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v7 = 0LL;
    __new_nstart = (std::__detail::_StateSeq<std::regex_traits<char> > **)((char *)&this->_M_impl._M_map[(this->_M_impl._M_map_size - __new_num_nodes) >> 1]
                                                                         + v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    if ( __new_nstart >= this->_M_impl._M_start._M_node )
    {
      v8 = &__new_nstart[__old_num_nodes];
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      v9 = this->_M_impl._M_finish._M_node + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_start._M_node);
      std::copy_backward<std::__detail::_StateSeq<std::regex_traits<char>> **,std::__detail::_StateSeq<std::regex_traits<char>> **>(
        this->_M_impl._M_start._M_node,
        v9,
        v8);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      std::copy<std::__detail::_StateSeq<std::regex_traits<char>> **,std::__detail::_StateSeq<std::regex_traits<char>> **>(
        this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
    }
  }
  std::_Deque_iterator<std::__detail::_StateSeq<std::regex_traits<char>>,std::__detail::_StateSeq<std::regex_traits<char>>&,std::__detail::_StateSeq<std::regex_traits<char>>*>::_M_set_node(
    &this->_M_impl._M_start,
    __new_nstart);
  std::_Deque_iterator<std::__detail::_StateSeq<std::regex_traits<char>>,std::__detail::_StateSeq<std::regex_traits<char>>&,std::__detail::_StateSeq<std::regex_traits<char>>*>::_M_set_node(
    &this->_M_impl._M_finish,
    &__new_nstart[__old_num_nodes - 1]);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 926: range 000000000F988B90-000000000F989154
void __fastcall std::deque<std::any>::_M_reallocate_map(
        std::deque<std::any> *const this,
        std::deque<std::any>::size_type __nodes_to_add,
        bool __add_at_front)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Deque_iterator<std::any,std::any&,std::any*>::_Map_pointer M_node; // rcx
  __int64 v7; // rax
  std::any **v8; // rdx
  std::any **v9; // rcx
  std::size_t M_map_size; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::any **v13; // rcx
  std::deque<std::any> *v14; // rax
  std::size_t v15; // rdx
  std::any **__new_nstart; // [rsp+28h] [rbp-98h]
  std::deque<std::any>::size_type __old_num_nodes; // [rsp+30h] [rbp-90h]
  std::deque<std::any>::size_type __new_num_nodes; // [rsp+38h] [rbp-88h]
  std::size_t __new_map_size; // [rsp+40h] [rbp-80h]
  std::any **__new_map; // [rsp+48h] [rbp-78h]
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v3 + 16) = std::deque<std::any>::_M_reallocate_map;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = __nodes_to_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  M_node = this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  __old_num_nodes = M_node - this->_M_impl._M_start._M_node + 1;
  __new_num_nodes = *(_QWORD *)(v3 + 32) + __old_num_nodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_map_size);
  if ( this->_M_impl._M_map_size <= 2 * __new_num_nodes )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_map_size);
    M_map_size = this->_M_impl._M_map_size;
    v11 = (unsigned __int64)std::max<unsigned long>(&this->_M_impl._M_map_size, (const unsigned __int64 *)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    __new_map_size = M_map_size + *(_QWORD *)v11 + 2;
    __new_map = std::_Deque_base<std::any>::_M_allocate_map(this, __new_map_size);
    if ( __add_at_front )
      v12 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v12 = 0LL;
    __new_nstart = (std::any **)((char *)&__new_map[(__new_map_size - __new_num_nodes) >> 1] + v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v13 = this->_M_impl._M_finish._M_node + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    std::copy<std::any **,std::any **>(this->_M_impl._M_start._M_node, v13, __new_nstart);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::any> *)__asan_report_load8(&this->_M_impl._M_map_size);
    v15 = this->_M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::any> *)__asan_report_load8(this);
    std::_Deque_base<std::any>::_M_deallocate_map(v14, this->_M_impl._M_map, v15);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map = __new_map;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map_size = __new_map_size;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( __add_at_front )
      v7 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v7 = 0LL;
    __new_nstart = (std::any **)((char *)&this->_M_impl._M_map[(this->_M_impl._M_map_size - __new_num_nodes) >> 1] + v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    if ( __new_nstart >= this->_M_impl._M_start._M_node )
    {
      v8 = &__new_nstart[__old_num_nodes];
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      v9 = this->_M_impl._M_finish._M_node + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_start._M_node);
      std::copy_backward<std::any **,std::any **>(this->_M_impl._M_start._M_node, v9, v8);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      std::copy<std::any **,std::any **>(
        this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
    }
  }
  std::_Deque_iterator<std::any,std::any&,std::any*>::_M_set_node(&this->_M_impl._M_start, __new_nstart);
  std::_Deque_iterator<std::any,std::any&,std::any*>::_M_set_node(
    &this->_M_impl._M_finish,
    &__new_nstart[__old_num_nodes - 1]);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 926: range 000000000F99A6D6-000000000F99AC9A
void __fastcall std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_reallocate_map(
        std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *const this,
        std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::size_type __nodes_to_add,
        bool __add_at_front)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Deque_iterator<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >,std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >&,std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >*>::_Map_pointer M_node; // rcx
  __int64 v7; // rax
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **v8; // rdx
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **v9; // rcx
  std::size_t M_map_size; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **v13; // rcx
  std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *v14; // rax
  std::size_t v15; // rdx
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **__new_nstart; // [rsp+28h] [rbp-98h]
  std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::size_type __old_num_nodes; // [rsp+30h] [rbp-90h]
  std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >>::size_type __new_num_nodes; // [rsp+38h] [rbp-88h]
  std::size_t __new_map_size; // [rsp+40h] [rbp-80h]
  std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **__new_map; // [rsp+48h] [rbp-78h]
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v3 + 16) = std::deque<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_reallocate_map;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = __nodes_to_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  M_node = this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  __old_num_nodes = M_node - this->_M_impl._M_start._M_node + 1;
  __new_num_nodes = *(_QWORD *)(v3 + 32) + __old_num_nodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_map_size);
  if ( this->_M_impl._M_map_size <= 2 * __new_num_nodes )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_map_size);
    M_map_size = this->_M_impl._M_map_size;
    v11 = (unsigned __int64)std::max<unsigned long>(&this->_M_impl._M_map_size, (const unsigned __int64 *)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    __new_map_size = M_map_size + *(_QWORD *)v11 + 2;
    __new_map = std::_Deque_base<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_allocate_map(
                  this,
                  __new_map_size);
    if ( __add_at_front )
      v12 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v12 = 0LL;
    __new_nstart = (std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **)((char *)&__new_map[(__new_map_size - __new_num_nodes) >> 1]
                                                                                     + v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v13 = this->_M_impl._M_finish._M_node + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    std::copy<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>> **,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>> **>(
      this->_M_impl._M_start._M_node,
      v13,
      __new_nstart);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *)__asan_report_load8(&this->_M_impl._M_map_size);
    v15 = this->_M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> >> *)__asan_report_load8(this);
    std::_Deque_base<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>::_M_deallocate_map(
      v14,
      this->_M_impl._M_map,
      v15);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map = __new_map;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map_size = __new_map_size;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( __add_at_front )
      v7 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v7 = 0LL;
    __new_nstart = (std::pair<std::set<std::string>*,std::shared_ptr<LuaASTNode> > **)((char *)&this->_M_impl._M_map[(this->_M_impl._M_map_size - __new_num_nodes) >> 1]
                                                                                     + v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    if ( __new_nstart >= this->_M_impl._M_start._M_node )
    {
      v8 = &__new_nstart[__old_num_nodes];
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      v9 = this->_M_impl._M_finish._M_node + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_start._M_node);
      std::copy_backward<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>> **,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>> **>(
        this->_M_impl._M_start._M_node,
        v9,
        v8);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      std::copy<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>> **,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>> **>(
        this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
    }
  }
  std::_Deque_iterator<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>&,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>*>::_M_set_node(
    &this->_M_impl._M_start,
    __new_nstart);
  std::_Deque_iterator<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>&,std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>*>::_M_set_node(
    &this->_M_impl._M_finish,
    &__new_nstart[__old_num_nodes - 1]);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 926: range 000000000F969F7E-000000000F96A542
void __fastcall std::deque<std::set<std::string>>::_M_reallocate_map(
        std::deque<std::set<std::string>> *const this,
        std::deque<std::set<std::string>>::size_type __nodes_to_add,
        bool __add_at_front)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Deque_iterator<std::set<std::string>,std::set<std::string>&,std::set<std::string>*>::_Map_pointer M_node; // rcx
  __int64 v7; // rax
  std::set<std::string> **v8; // rdx
  std::set<std::string> **v9; // rcx
  std::size_t M_map_size; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::set<std::string> **v13; // rcx
  std::deque<std::set<std::string>> *v14; // rax
  std::size_t v15; // rdx
  std::set<std::string> **__new_nstart; // [rsp+28h] [rbp-98h]
  std::deque<std::set<std::string>>::size_type __old_num_nodes; // [rsp+30h] [rbp-90h]
  std::deque<std::set<std::string>>::size_type __new_num_nodes; // [rsp+38h] [rbp-88h]
  std::size_t __new_map_size; // [rsp+40h] [rbp-80h]
  std::set<std::string> **__new_map; // [rsp+48h] [rbp-78h]
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v3 + 16) = std::deque<std::set<std::string>>::_M_reallocate_map;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = __nodes_to_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  M_node = this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  __old_num_nodes = M_node - this->_M_impl._M_start._M_node + 1;
  __new_num_nodes = *(_QWORD *)(v3 + 32) + __old_num_nodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_map_size);
  if ( this->_M_impl._M_map_size <= 2 * __new_num_nodes )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_map_size);
    M_map_size = this->_M_impl._M_map_size;
    v11 = (unsigned __int64)std::max<unsigned long>(&this->_M_impl._M_map_size, (const unsigned __int64 *)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    __new_map_size = M_map_size + *(_QWORD *)v11 + 2;
    __new_map = std::_Deque_base<std::set<std::string>>::_M_allocate_map(this, __new_map_size);
    if ( __add_at_front )
      v12 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v12 = 0LL;
    __new_nstart = (std::set<std::string> **)((char *)&__new_map[(__new_map_size - __new_num_nodes) >> 1] + v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v13 = this->_M_impl._M_finish._M_node + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    std::copy<std::set<std::string> **,std::set<std::string> **>(this->_M_impl._M_start._M_node, v13, __new_nstart);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::set<std::string>> *)__asan_report_load8(&this->_M_impl._M_map_size);
    v15 = this->_M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::set<std::string>> *)__asan_report_load8(this);
    std::_Deque_base<std::set<std::string>>::_M_deallocate_map(v14, this->_M_impl._M_map, v15);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map = __new_map;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map_size = __new_map_size;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( __add_at_front )
      v7 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v7 = 0LL;
    __new_nstart = (std::set<std::string> **)((char *)&this->_M_impl._M_map[(this->_M_impl._M_map_size - __new_num_nodes) >> 1]
                                            + v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    if ( __new_nstart >= this->_M_impl._M_start._M_node )
    {
      v8 = &__new_nstart[__old_num_nodes];
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      v9 = this->_M_impl._M_finish._M_node + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_start._M_node);
      std::copy_backward<std::set<std::string> **,std::set<std::string> **>(this->_M_impl._M_start._M_node, v9, v8);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      std::copy<std::set<std::string> **,std::set<std::string> **>(
        this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
    }
  }
  std::_Deque_iterator<std::set<std::string>,std::set<std::string>&,std::set<std::string>*>::_M_set_node(
    &this->_M_impl._M_start,
    __new_nstart);
  std::_Deque_iterator<std::set<std::string>,std::set<std::string>&,std::set<std::string>*>::_M_set_node(
    &this->_M_impl._M_finish,
    &__new_nstart[__old_num_nodes - 1]);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 926: range 000000000D298D92-000000000D299356
void __fastcall std::deque<std::shared_ptr<BaseDFNode>>::_M_reallocate_map(
        std::deque<std::shared_ptr<BaseDFNode>> *const this,
        std::deque<std::shared_ptr<BaseDFNode>>::size_type __nodes_to_add,
        bool __add_at_front)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Deque_iterator<std::shared_ptr<BaseDFNode>,std::shared_ptr<BaseDFNode>&,std::shared_ptr<BaseDFNode>*>::_Map_pointer M_node; // rcx
  __int64 v7; // rax
  std::shared_ptr<BaseDFNode> **v8; // rdx
  std::shared_ptr<BaseDFNode> **v9; // rcx
  std::size_t M_map_size; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::shared_ptr<BaseDFNode> **v13; // rcx
  std::deque<std::shared_ptr<BaseDFNode>> *v14; // rax
  std::size_t v15; // rdx
  std::shared_ptr<BaseDFNode> **__new_nstart; // [rsp+28h] [rbp-98h]
  std::deque<std::shared_ptr<BaseDFNode>>::size_type __old_num_nodes; // [rsp+30h] [rbp-90h]
  std::deque<std::shared_ptr<BaseDFNode>>::size_type __new_num_nodes; // [rsp+38h] [rbp-88h]
  std::size_t __new_map_size; // [rsp+40h] [rbp-80h]
  std::shared_ptr<BaseDFNode> **__new_map; // [rsp+48h] [rbp-78h]
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v3 + 16) = std::deque<std::shared_ptr<BaseDFNode>>::_M_reallocate_map;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = __nodes_to_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  M_node = this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  __old_num_nodes = M_node - this->_M_impl._M_start._M_node + 1;
  __new_num_nodes = *(_QWORD *)(v3 + 32) + __old_num_nodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_map_size);
  if ( this->_M_impl._M_map_size <= 2 * __new_num_nodes )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_map_size);
    M_map_size = this->_M_impl._M_map_size;
    v11 = (unsigned __int64)std::max<unsigned long>(&this->_M_impl._M_map_size, (const unsigned __int64 *)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    __new_map_size = M_map_size + *(_QWORD *)v11 + 2;
    __new_map = std::_Deque_base<std::shared_ptr<BaseDFNode>>::_M_allocate_map(this, __new_map_size);
    if ( __add_at_front )
      v12 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v12 = 0LL;
    __new_nstart = (std::shared_ptr<BaseDFNode> **)((char *)&__new_map[(__new_map_size - __new_num_nodes) >> 1] + v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v13 = this->_M_impl._M_finish._M_node + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    std::copy<std::shared_ptr<BaseDFNode> **,std::shared_ptr<BaseDFNode> **>(
      this->_M_impl._M_start._M_node,
      v13,
      __new_nstart);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::shared_ptr<BaseDFNode>> *)__asan_report_load8(&this->_M_impl._M_map_size);
    v15 = this->_M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::shared_ptr<BaseDFNode>> *)__asan_report_load8(this);
    std::_Deque_base<std::shared_ptr<BaseDFNode>>::_M_deallocate_map(v14, this->_M_impl._M_map, v15);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map = __new_map;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map_size = __new_map_size;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( __add_at_front )
      v7 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v7 = 0LL;
    __new_nstart = (std::shared_ptr<BaseDFNode> **)((char *)&this->_M_impl._M_map[(this->_M_impl._M_map_size
                                                                                 - __new_num_nodes) >> 1]
                                                  + v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    if ( __new_nstart >= this->_M_impl._M_start._M_node )
    {
      v8 = &__new_nstart[__old_num_nodes];
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      v9 = this->_M_impl._M_finish._M_node + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_start._M_node);
      std::copy_backward<std::shared_ptr<BaseDFNode> **,std::shared_ptr<BaseDFNode> **>(
        this->_M_impl._M_start._M_node,
        v9,
        v8);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      std::copy<std::shared_ptr<BaseDFNode> **,std::shared_ptr<BaseDFNode> **>(
        this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
    }
  }
  std::_Deque_iterator<std::shared_ptr<BaseDFNode>,std::shared_ptr<BaseDFNode>&,std::shared_ptr<BaseDFNode>*>::_M_set_node(
    &this->_M_impl._M_start,
    __new_nstart);
  std::_Deque_iterator<std::shared_ptr<BaseDFNode>,std::shared_ptr<BaseDFNode>&,std::shared_ptr<BaseDFNode>*>::_M_set_node(
    &this->_M_impl._M_finish,
    &__new_nstart[__old_num_nodes - 1]);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 926: range 000000000F955160-000000000F955724
void __fastcall std::deque<std::shared_ptr<CustomCommonNodeData>>::_M_reallocate_map(
        std::deque<std::shared_ptr<CustomCommonNodeData>> *const this,
        std::deque<std::shared_ptr<CustomCommonNodeData>>::size_type __nodes_to_add,
        bool __add_at_front)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Deque_iterator<std::shared_ptr<CustomCommonNodeData>,std::shared_ptr<CustomCommonNodeData>&,std::shared_ptr<CustomCommonNodeData>*>::_Map_pointer M_node; // rcx
  __int64 v7; // rax
  std::shared_ptr<CustomCommonNodeData> **v8; // rdx
  std::shared_ptr<CustomCommonNodeData> **v9; // rcx
  std::size_t M_map_size; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::shared_ptr<CustomCommonNodeData> **v13; // rcx
  std::deque<std::shared_ptr<CustomCommonNodeData>> *v14; // rax
  std::size_t v15; // rdx
  std::shared_ptr<CustomCommonNodeData> **__new_nstart; // [rsp+28h] [rbp-98h]
  std::deque<std::shared_ptr<CustomCommonNodeData>>::size_type __old_num_nodes; // [rsp+30h] [rbp-90h]
  std::deque<std::shared_ptr<CustomCommonNodeData>>::size_type __new_num_nodes; // [rsp+38h] [rbp-88h]
  std::size_t __new_map_size; // [rsp+40h] [rbp-80h]
  std::shared_ptr<CustomCommonNodeData> **__new_map; // [rsp+48h] [rbp-78h]
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v3 + 16) = std::deque<std::shared_ptr<CustomCommonNodeData>>::_M_reallocate_map;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = __nodes_to_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  M_node = this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  __old_num_nodes = M_node - this->_M_impl._M_start._M_node + 1;
  __new_num_nodes = *(_QWORD *)(v3 + 32) + __old_num_nodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_map_size);
  if ( this->_M_impl._M_map_size <= 2 * __new_num_nodes )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_map_size);
    M_map_size = this->_M_impl._M_map_size;
    v11 = (unsigned __int64)std::max<unsigned long>(&this->_M_impl._M_map_size, (const unsigned __int64 *)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    __new_map_size = M_map_size + *(_QWORD *)v11 + 2;
    __new_map = std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::_M_allocate_map(this, __new_map_size);
    if ( __add_at_front )
      v12 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v12 = 0LL;
    __new_nstart = (std::shared_ptr<CustomCommonNodeData> **)((char *)&__new_map[(__new_map_size - __new_num_nodes) >> 1]
                                                            + v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v13 = this->_M_impl._M_finish._M_node + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    std::copy<std::shared_ptr<CustomCommonNodeData> **,std::shared_ptr<CustomCommonNodeData> **>(
      this->_M_impl._M_start._M_node,
      v13,
      __new_nstart);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::shared_ptr<CustomCommonNodeData>> *)__asan_report_load8(&this->_M_impl._M_map_size);
    v15 = this->_M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::shared_ptr<CustomCommonNodeData>> *)__asan_report_load8(this);
    std::_Deque_base<std::shared_ptr<CustomCommonNodeData>>::_M_deallocate_map(v14, this->_M_impl._M_map, v15);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map = __new_map;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map_size = __new_map_size;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( __add_at_front )
      v7 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v7 = 0LL;
    __new_nstart = (std::shared_ptr<CustomCommonNodeData> **)((char *)&this->_M_impl._M_map[(this->_M_impl._M_map_size
                                                                                           - __new_num_nodes) >> 1]
                                                            + v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    if ( __new_nstart >= this->_M_impl._M_start._M_node )
    {
      v8 = &__new_nstart[__old_num_nodes];
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      v9 = this->_M_impl._M_finish._M_node + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_start._M_node);
      std::copy_backward<std::shared_ptr<CustomCommonNodeData> **,std::shared_ptr<CustomCommonNodeData> **>(
        this->_M_impl._M_start._M_node,
        v9,
        v8);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      std::copy<std::shared_ptr<CustomCommonNodeData> **,std::shared_ptr<CustomCommonNodeData> **>(
        this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
    }
  }
  std::_Deque_iterator<std::shared_ptr<CustomCommonNodeData>,std::shared_ptr<CustomCommonNodeData>&,std::shared_ptr<CustomCommonNodeData>*>::_M_set_node(
    &this->_M_impl._M_start,
    __new_nstart);
  std::_Deque_iterator<std::shared_ptr<CustomCommonNodeData>,std::shared_ptr<CustomCommonNodeData>&,std::shared_ptr<CustomCommonNodeData>*>::_M_set_node(
    &this->_M_impl._M_finish,
    &__new_nstart[__old_num_nodes - 1]);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 926: range 000000000F96ECCC-000000000F96F290
void __fastcall std::deque<std::shared_ptr<LuaASTNode>>::_M_reallocate_map(
        std::deque<std::shared_ptr<LuaASTNode>> *const this,
        std::deque<std::shared_ptr<LuaASTNode>>::size_type __nodes_to_add,
        bool __add_at_front)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Deque_iterator<std::shared_ptr<LuaASTNode>,std::shared_ptr<LuaASTNode>&,std::shared_ptr<LuaASTNode>*>::_Map_pointer M_node; // rcx
  __int64 v7; // rax
  std::shared_ptr<LuaASTNode> **v8; // rdx
  std::shared_ptr<LuaASTNode> **v9; // rcx
  std::size_t M_map_size; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::shared_ptr<LuaASTNode> **v13; // rcx
  std::deque<std::shared_ptr<LuaASTNode>> *v14; // rax
  std::size_t v15; // rdx
  std::shared_ptr<LuaASTNode> **__new_nstart; // [rsp+28h] [rbp-98h]
  std::deque<std::shared_ptr<LuaASTNode>>::size_type __old_num_nodes; // [rsp+30h] [rbp-90h]
  std::deque<std::shared_ptr<LuaASTNode>>::size_type __new_num_nodes; // [rsp+38h] [rbp-88h]
  std::size_t __new_map_size; // [rsp+40h] [rbp-80h]
  std::shared_ptr<LuaASTNode> **__new_map; // [rsp+48h] [rbp-78h]
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v3 + 16) = std::deque<std::shared_ptr<LuaASTNode>>::_M_reallocate_map;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = __nodes_to_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  M_node = this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  __old_num_nodes = M_node - this->_M_impl._M_start._M_node + 1;
  __new_num_nodes = *(_QWORD *)(v3 + 32) + __old_num_nodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_map_size);
  if ( this->_M_impl._M_map_size <= 2 * __new_num_nodes )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_map_size);
    M_map_size = this->_M_impl._M_map_size;
    v11 = (unsigned __int64)std::max<unsigned long>(&this->_M_impl._M_map_size, (const unsigned __int64 *)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    __new_map_size = M_map_size + *(_QWORD *)v11 + 2;
    __new_map = std::_Deque_base<std::shared_ptr<LuaASTNode>>::_M_allocate_map(this, __new_map_size);
    if ( __add_at_front )
      v12 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v12 = 0LL;
    __new_nstart = (std::shared_ptr<LuaASTNode> **)((char *)&__new_map[(__new_map_size - __new_num_nodes) >> 1] + v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v13 = this->_M_impl._M_finish._M_node + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    std::copy<std::shared_ptr<LuaASTNode> **,std::shared_ptr<LuaASTNode> **>(
      this->_M_impl._M_start._M_node,
      v13,
      __new_nstart);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::shared_ptr<LuaASTNode>> *)__asan_report_load8(&this->_M_impl._M_map_size);
    v15 = this->_M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v14 = (std::deque<std::shared_ptr<LuaASTNode>> *)__asan_report_load8(this);
    std::_Deque_base<std::shared_ptr<LuaASTNode>>::_M_deallocate_map(v14, this->_M_impl._M_map, v15);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map = __new_map;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map_size = __new_map_size;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( __add_at_front )
      v7 = 8LL * *(_QWORD *)(v3 + 32);
    else
      v7 = 0LL;
    __new_nstart = (std::shared_ptr<LuaASTNode> **)((char *)&this->_M_impl._M_map[(this->_M_impl._M_map_size
                                                                                 - __new_num_nodes) >> 1]
                                                  + v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    if ( __new_nstart >= this->_M_impl._M_start._M_node )
    {
      v8 = &__new_nstart[__old_num_nodes];
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      v9 = this->_M_impl._M_finish._M_node + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_start._M_node);
      std::copy_backward<std::shared_ptr<LuaASTNode> **,std::shared_ptr<LuaASTNode> **>(
        this->_M_impl._M_start._M_node,
        v9,
        v8);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      std::copy<std::shared_ptr<LuaASTNode> **,std::shared_ptr<LuaASTNode> **>(
        this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
    }
  }
  std::_Deque_iterator<std::shared_ptr<LuaASTNode>,std::shared_ptr<LuaASTNode>&,std::shared_ptr<LuaASTNode>*>::_M_set_node(
    &this->_M_impl._M_start,
    __new_nstart);
  std::_Deque_iterator<std::shared_ptr<LuaASTNode>,std::shared_ptr<LuaASTNode>&,std::shared_ptr<LuaASTNode>*>::_M_set_node(
    &this->_M_impl._M_finish,
    &__new_nstart[__old_num_nodes - 1]);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 926: range 000000000F161C8C-000000000F162250
void __fastcall std::deque<unsigned int>::_M_reallocate_map(
        std::deque<unsigned int> *const this,
        std::deque<unsigned int>::size_type __nodes_to_add,
        bool __add_at_front)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*>::_Map_pointer M_node; // rcx
  __int64 v7; // rax
  unsigned int **v8; // rdx
  unsigned int **v9; // rcx
  std::size_t M_map_size; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned int **v13; // rcx
  std::deque<unsigned int> *v14; // rax
  std::size_t v15; // rdx
  unsigned int **__new_nstart; // [rsp+28h] [rbp-98h]
  std::deque<unsigned int>::size_type __old_num_nodes; // [rsp+30h] [rbp-90h]
  std::deque<unsigned int>::size_type __new_num_nodes; // [rsp+38h] [rbp-88h]
  std::size_t __new_map_size; // [rsp+40h] [rbp-80h]
  unsigned int **__new_map; // [rsp+48h] [rbp-78h]
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 __nodes_to_add:927";
  *(_QWORD *)(v3 + 16) = std::deque<unsigned int>::_M_reallocate_map;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = __nodes_to_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_finish._M_node);
  M_node = this->_M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_start._M_node);
  __old_num_nodes = M_node - this->_M_impl._M_start._M_node + 1;
  __new_num_nodes = *(_QWORD *)(v3 + 32) + __old_num_nodes;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_impl._M_map_size);
  if ( this->_M_impl._M_map_size <= 2 * __new_num_nodes )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_map_size);
    M_map_size = this->_M_impl._M_map_size;
    v11 = (unsigned __int64)std::max<unsigned long>(&this->_M_impl._M_map_size, (const unsigned __int64 *)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    __new_map_size = M_map_size + *(_QWORD *)v11 + 2;
    __new_map = std::_Deque_base<unsigned int>::_M_allocate_map(this, __new_map_size);
    if ( __add_at_front )
      v12 = *(_QWORD *)(v3 + 32);
    else
      v12 = 0LL;
    __new_nstart = &(&__new_map[(__new_map_size - __new_num_nodes) >> 1])[v12];
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_finish._M_node);
    v13 = this->_M_impl._M_finish._M_node + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    std::copy<unsigned int **,unsigned int **>(this->_M_impl._M_start._M_node, v13, __new_nstart);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      v14 = (std::deque<unsigned int> *)__asan_report_load8(&this->_M_impl._M_map_size);
    v15 = this->_M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v14 = (std::deque<unsigned int> *)__asan_report_load8(this);
    std::_Deque_base<unsigned int>::_M_deallocate_map(v14, this->_M_impl._M_map, v15);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map = __new_map;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->_M_impl._M_map_size = __new_map_size;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( __add_at_front )
      v7 = *(_QWORD *)(v3 + 32);
    else
      v7 = 0LL;
    __new_nstart = &(&this->_M_impl._M_map[(this->_M_impl._M_map_size - __new_num_nodes) >> 1])[v7];
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_impl._M_start._M_node);
    if ( __new_nstart >= this->_M_impl._M_start._M_node )
    {
      v8 = &__new_nstart[__old_num_nodes];
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      v9 = this->_M_impl._M_finish._M_node + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_start._M_node);
      std::copy_backward<unsigned int **,unsigned int **>(this->_M_impl._M_start._M_node, v9, v8);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_impl._M_finish._M_node);
      std::copy<unsigned int **,unsigned int **>(
        this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
    }
  }
  std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>::_M_set_node(&this->_M_impl._M_start, __new_nstart);
  std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>::_M_set_node(
    &this->_M_impl._M_finish,
    &__new_nstart[__old_num_nodes - 1]);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
