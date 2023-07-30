// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/qparms.cpp

// Line 39: range 000000000CF9B8B0-000000000CF9B8C2
size_t __fastcall mysqlpp::SQLQueryParms::escape_string(
        const mysqlpp::SQLQueryParms *const this,
        std::string *ps,
        const char *original,
        size_t length)
{
  mysqlpp::Query *parent; // rdi

  parent = this->parent_;
  if ( parent )
    return mysqlpp::Query::escape_string(parent, ps, original, length);
  else
    return 0LL;
};

// Line 46: range 000000000CF9B8D0-000000000CF9B8E2
size_t __fastcall mysqlpp::SQLQueryParms::escape_string(
        const mysqlpp::SQLQueryParms *const this,
        char *escaped,
        const char *original,
        size_t length)
{
  mysqlpp::Query *parent; // rdi

  parent = this->parent_;
  if ( parent )
    return mysqlpp::Query::escape_string(parent, escaped, original, length);
  else
    return 0LL;
};

// Line 51: range 000000000CF9BCF0-000000000CF9BFA0
mysqlpp::SQLTypeAdapter *__fastcall mysqlpp::SQLQueryParms::operator[](
        std::vector<mysqlpp::SQLTypeAdapter> *this,
        const char *src)
{
  mysqlpp::SQLBuffer *counted; // rax
  unsigned __int64 v4; // rcx
  std::tuple<> *v5; // r8
  size_t v6; // r12
  __int64 *v7; // rdx
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_start; // r15
  mysqlpp::SQLBuffer *data; // rbx
  std::_Rb_tree_node_base *p_is_processed; // r10
  size_t v11; // r12
  void *v12; // r11
  std::_Rb_tree_iterator<std::pair<const std::string,short int> >::_Base_ptr M_node; // r14
  size_t v14; // r9
  size_t v15; // rdx
  signed __int64 v16; // rax
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  size_t v18; // rdx
  int v19; // eax
  __int64 v20; // r12
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v21; // rdx
  unsigned __int64 M_color_low; // rbx
  mysqlpp::SQLTypeAdapter *v23; // r12
  __int64 *v25; // rdi
  void *v26; // [rsp+0h] [rbp-98h]
  std::_Rb_tree_node_base *v27; // [rsp+8h] [rbp-90h]
  size_t v28; // [rsp+10h] [rbp-88h]
  mysqlpp::SQLTypeAdapter v29; // [rsp+20h] [rbp-78h] BYREF
  void *s2; // [rsp+40h] [rbp-58h] BYREF
  size_t n; // [rsp+48h] [rbp-50h]
  __int64 v32[9]; // [rsp+50h] [rbp-48h] BYREF

  if ( !this[1]._M_impl._M_start )
    mysqlpp::SQLQueryParms::operator[](this, src);
  s2 = v32;
  if ( !src )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  counted = (mysqlpp::SQLBuffer *)strlen(src);
  v29.buffer_.counted_ = counted;
  v6 = (size_t)counted;
  if ( (unsigned __int64)counted > 0xF )
  {
    s2 = (void *)std::string::_M_create(&s2, &v29, 0LL);
    v25 = (__int64 *)s2;
    v32[0] = (__int64)v29.buffer_.counted_;
    goto LABEL_35;
  }
  if ( counted != (mysqlpp::SQLBuffer *)1 )
  {
    if ( !counted )
    {
      v7 = v32;
      goto LABEL_6;
    }
    v25 = v32;
LABEL_35:
    memcpy(v25, src, v6);
    counted = v29.buffer_.counted_;
    v7 = (__int64 *)s2;
    goto LABEL_6;
  }
  LOBYTE(v32[0]) = *src;
  v7 = v32;
LABEL_6:
  n = (size_t)counted;
  *((_BYTE *)&counted->data_ + (_QWORD)v7) = 0;
  M_start = this[1]._M_impl._M_start;
  data = M_start[6].buffer_.counted_;
  p_is_processed = (std::_Rb_tree_node_base *)&M_start[5].is_processed_;
  if ( !data )
  {
    M_node = (std::_Rb_tree_iterator<std::pair<const std::string,short int> >::_Base_ptr)&M_start[5].is_processed_;
    goto LABEL_26;
  }
  v11 = n;
  v12 = s2;
  M_node = (std::_Rb_tree_iterator<std::pair<const std::string,short int> >::_Base_ptr)&M_start[5].is_processed_;
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)&data[1].type_.num_;
      v15 = v11;
      if ( v14 <= v11 )
        v15 = *(_QWORD *)&data[1].type_.num_;
      if ( v15 )
      {
        v28 = *(_QWORD *)&data[1].type_.num_;
        v27 = p_is_processed;
        v26 = v12;
        LODWORD(v16) = memcmp((const void *)data[1].length_, v12, v15);
        v12 = v26;
        p_is_processed = v27;
        v14 = v28;
        if ( (_DWORD)v16 )
          goto LABEL_15;
      }
      v4 = 0x80000000LL;
      v16 = v14 - v11;
      if ( (__int64)(v14 - v11) >= 0x80000000LL )
        break;
      v4 = 0xFFFFFFFF7FFFFFFFLL;
      if ( v16 > (__int64)0xFFFFFFFF7FFFFFFFLL )
      {
LABEL_15:
        if ( (int)v16 >= 0 )
          break;
      }
      data = (mysqlpp::SQLBuffer *)data[1].data_;
      if ( !data )
        goto LABEL_17;
    }
    M_node = (std::_Rb_tree_iterator<std::pair<const std::string,short int> >::_Base_ptr)data;
    data = *(mysqlpp::SQLBuffer **)&data->type_.num_;
  }
  while ( data );
LABEL_17:
  if ( p_is_processed == M_node )
    goto LABEL_26;
  M_parent = M_node[1]._M_parent;
  v18 = (size_t)M_parent;
  if ( v11 <= (unsigned __int64)M_parent )
    v18 = v11;
  if ( v18 && (v19 = memcmp(v12, *(const void **)&M_node[1]._M_color, v18)) != 0 )
  {
LABEL_25:
    if ( v19 < 0 )
      goto LABEL_26;
  }
  else
  {
    v20 = v11 - (_QWORD)M_parent;
    if ( v20 <= 0x7FFFFFFF )
    {
      if ( v20 >= (__int64)0xFFFFFFFF80000000LL )
      {
        v19 = v20;
        goto LABEL_25;
      }
LABEL_26:
      v29.buffer_.counted_ = (mysqlpp::SQLBuffer *)&s2;
      M_node = std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
                 (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > > *const)&M_start[5].buffer_.refs_,
                 (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::const_iterator)M_node,
                 (const std::piecewise_construct_t *)&v29,
                 (std::tuple<std::string&&> *)v4,
                 v5)._M_node;
    }
  }
  v21 = this->_M_impl._M_start;
  M_color_low = SLOWORD(M_node[2]._M_color);
  if ( M_color_low >= 0xAAAAAAAAAAAAAAABLL * (((char *)this->_M_impl._M_finish - (char *)this->_M_impl._M_start) >> 3) )
  {
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(&v29, &off_1B23A528[4], 0);
    std::vector<mysqlpp::SQLTypeAdapter>::_M_fill_insert(
      this,
      (std::vector<mysqlpp::SQLTypeAdapter>::iterator)this->_M_impl._M_finish,
      M_color_low - 0xAAAAAAAAAAAAAAABLL * (((char *)this->_M_impl._M_finish - (char *)this->_M_impl._M_start) >> 3) + 1,
      &v29);
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v29.buffer_);
    v21 = this->_M_impl._M_start;
  }
  v23 = &v21[M_color_low];
  if ( s2 != v32 )
    operator delete(s2);
  return v23;
};

// Line 55: range 000000000C739C4A-000000000C739C86
void __noreturn mysqlpp::SQLQueryParms::operator[]()
{
  mysqlpp::Exception *exception; // rbp

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x28uLL);
  mysqlpp::Exception::Exception(exception, "SQLQueryParms object has no parent!");
  *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::ObjectNotInitialized + 2;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::ObjectNotInitialized,
    (void (__fastcall *)(void *))mysqlpp::ObjectNotInitialized::~ObjectNotInitialized);
};

// Line 60: range 000000000CF9BFB0-000000000CF9C1E0
__int64 __fastcall mysqlpp::SQLQueryParms::operator[](_QWORD *a1, const char *a2)
{
  size_t v3; // rax
  std::tuple<> *v4; // r8
  size_t v5; // r14
  __int64 *v6; // rdx
  std::tuple<std::string&&> *v7; // rcx
  std::string *M_head_impl; // rbx
  std::_Rb_tree_node_base *v9; // r11
  size_t v10; // rbp
  __int64 *v11; // r14
  std::_Rb_tree_iterator<std::pair<const std::string,short int> >::_Base_ptr M_node; // r15
  size_t M_string_length; // r10
  size_t v14; // rdx
  signed __int64 v15; // rax
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  size_t v17; // rdx
  int v18; // eax
  __int64 v19; // rbp
  std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::iterator v20; // rax
  __int64 v21; // r12
  __int64 *v23; // rdi
  std::tuple<std::string&&> *v24; // [rsp+0h] [rbp-88h]
  std::tuple<std::string&&> *v25; // [rsp+0h] [rbp-88h]
  std::_Rb_tree_node_base *v26; // [rsp+8h] [rbp-80h]
  size_t v27; // [rsp+10h] [rbp-78h]
  std::piecewise_construct_t v28[8]; // [rsp+28h] [rbp-60h] BYREF
  void *s2; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  __int64 v31[9]; // [rsp+40h] [rbp-48h] BYREF

  if ( !a1[3] )
    mysqlpp::SQLQueryParms::operator[]();
  s2 = v31;
  if ( !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v3 = strlen(a2);
  *(_QWORD *)v28[0].gap0 = v3;
  v5 = v3;
  if ( v3 > 0xF )
  {
    s2 = (void *)std::string::_M_create(&s2, v28, 0LL);
    v23 = (__int64 *)s2;
    v31[0] = *(_QWORD *)v28[0].gap0;
    goto LABEL_33;
  }
  if ( v3 != 1 )
  {
    if ( !v3 )
    {
      v6 = v31;
      goto LABEL_6;
    }
    v23 = v31;
LABEL_33:
    memcpy(v23, a2, v5);
    v3 = *(_QWORD *)v28[0].gap0;
    v6 = (__int64 *)s2;
    goto LABEL_6;
  }
  LOBYTE(v31[0]) = *a2;
  v6 = v31;
LABEL_6:
  n = v3;
  *((_BYTE *)v6 + v3) = 0;
  v7 = (std::tuple<std::string&&> *)a1[3];
  M_head_impl = v7[18]._M_head_impl;
  v9 = (std::_Rb_tree_node_base *)&v7[17];
  if ( !M_head_impl )
  {
    M_node = (std::_Rb_tree_iterator<std::pair<const std::string,short int> >::_Base_ptr)&v7[17];
    goto LABEL_26;
  }
  v10 = n;
  v11 = (__int64 *)s2;
  M_node = (std::_Rb_tree_iterator<std::pair<const std::string,short int> >::_Base_ptr)&v7[17];
  do
  {
    while ( 1 )
    {
      M_string_length = M_head_impl[1]._M_string_length;
      v14 = v10;
      if ( M_string_length <= v10 )
        v14 = M_head_impl[1]._M_string_length;
      if ( v14 )
      {
        v27 = M_head_impl[1]._M_string_length;
        v26 = v9;
        v24 = v7;
        LODWORD(v15) = memcmp(M_head_impl[1]._M_dataplus._M_p, v11, v14);
        v7 = v24;
        v9 = v26;
        M_string_length = v27;
        if ( (_DWORD)v15 )
          goto LABEL_15;
      }
      v15 = M_string_length - v10;
      if ( (__int64)(M_string_length - v10) >= 0x80000000LL )
        break;
      if ( v15 > (__int64)0xFFFFFFFF7FFFFFFFLL )
      {
LABEL_15:
        if ( (int)v15 >= 0 )
          break;
      }
      M_head_impl = (std::string *)*(&M_head_impl->_anon_0._M_allocated_capacity + 1);
      if ( !M_head_impl )
        goto LABEL_17;
    }
    M_node = (std::_Rb_tree_iterator<std::pair<const std::string,short int> >::_Base_ptr)M_head_impl;
    M_head_impl = (std::string *)M_head_impl->_anon_0._M_allocated_capacity;
  }
  while ( M_head_impl );
LABEL_17:
  if ( v9 == M_node )
    goto LABEL_26;
  M_parent = M_node[1]._M_parent;
  v17 = (size_t)M_parent;
  if ( v10 <= (unsigned __int64)M_parent )
    v17 = v10;
  if ( v17 && (v25 = v7, v18 = memcmp(v11, *(const void **)&M_node[1]._M_color, v17), v7 = v25, v18) )
  {
LABEL_25:
    if ( v18 < 0 )
      goto LABEL_26;
  }
  else
  {
    v19 = v10 - (_QWORD)M_parent;
    if ( v19 <= 0x7FFFFFFF )
    {
      if ( v19 >= (__int64)0xFFFFFFFF80000000LL )
      {
        v18 = v19;
        goto LABEL_25;
      }
LABEL_26:
      *(_QWORD *)v28[0].gap0 = &s2;
      v20._M_node = std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string&&>,std::tuple<>>(
                      (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > > *const)&v7[16],
                      (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::const_iterator)M_node,
                      v28,
                      v7,
                      v4)._M_node;
      v11 = (__int64 *)s2;
      M_node = v20._M_node;
    }
  }
  v21 = *a1 + 24LL * SLOWORD(M_node[2]._M_color);
  if ( v11 != v31 )
    operator delete(v11);
  return v21;
};

// Line 64: range 000000000C739CAA-000000000C739CE6
void __noreturn mysqlpp::SQLQueryParms::operator[]()
{
  mysqlpp::Exception *exception; // rbp

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x28uLL);
  mysqlpp::Exception::Exception(exception, "SQLQueryParms object has no parent!");
  *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::ObjectNotInitialized + 2;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::ObjectNotInitialized,
    (void (__fastcall *)(void *))mysqlpp::ObjectNotInitialized::~ObjectNotInitialized);
};

// Line 69: range 000000000CF9B8F0-000000000CF9BB85
__int64 __fastcall mysqlpp::SQLQueryParms::operator+(__int64 a1, __int64 a2, const mysqlpp::SQLTypeAdapter **a3)
{
  const mysqlpp::SQLTypeAdapter *v6; // r15
  const mysqlpp::SQLTypeAdapter *v7; // rbx
  signed __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  mysqlpp::SQLTypeAdapter *v10; // r12
  mysqlpp::SQLTypeAdapter *v11; // r15
  const mysqlpp::SQLTypeAdapter *v12; // rbp
  const mysqlpp::SQLTypeAdapter *i; // rbx
  __int64 v14; // rax
  mysqlpp::SQLTypeAdapter *v16; // rax
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_end_of_storage; // rdx
  mysqlpp::SQLTypeAdapter *M_finish; // rbp
  const mysqlpp::SQLTypeAdapter *v19; // rax
  const mysqlpp::SQLTypeAdapter *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rbx
  const mysqlpp::SQLTypeAdapter *v23; // rax
  char v24; // di
  unsigned __int64 v25; // rbx
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_start; // rax
  mysqlpp::SQLTypeAdapter *v27; // [rsp+8h] [rbp-70h]
  std::vector<mysqlpp::SQLTypeAdapter> v28; // [rsp+10h] [rbp-68h] BYREF
  __int64 v29; // [rsp+28h] [rbp-50h]
  char v30; // [rsp+30h] [rbp-48h]

  v6 = *(const mysqlpp::SQLTypeAdapter **)(a2 + 8);
  v7 = *(const mysqlpp::SQLTypeAdapter **)a2;
  v8 = (signed __int64)v6 - *(_QWORD *)a2;
  v9 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 3);
  if ( v9 >= 0xAAAAAAAAAAAAAAABLL * (((char *)a3[1] - (char *)*a3) >> 3) )
  {
    *(_QWORD *)a1 = 0LL;
    v10 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( !v9 )
    {
LABEL_5:
      *(_QWORD *)a1 = v10;
      v11 = v10;
      *(_QWORD *)(a1 + 8) = v10;
      *(_QWORD *)(a1 + 16) = (char *)v10 + v8;
      v12 = *(const mysqlpp::SQLTypeAdapter **)(a2 + 8);
      for ( i = *(const mysqlpp::SQLTypeAdapter **)a2; v12 != i; ++v11 )
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v11, i++);
      v14 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)(a1 + 24) = v14;
      *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32);
      return a1;
    }
    if ( v9 <= 0x555555555555555LL )
    {
      v10 = (mysqlpp::SQLTypeAdapter *)operator new(v8);
      goto LABEL_5;
    }
LABEL_26:
    std::__throw_bad_alloc();
  }
  memset(&v28, 0, sizeof(v28));
  if ( v9 )
  {
    if ( v9 > 0x555555555555555LL )
      goto LABEL_26;
    v16 = (mysqlpp::SQLTypeAdapter *)operator new(v8);
    v6 = *(const mysqlpp::SQLTypeAdapter **)(a2 + 8);
    v7 = *(const mysqlpp::SQLTypeAdapter **)a2;
    v27 = v16;
  }
  else
  {
    v27 = 0LL;
  }
  M_end_of_storage = (mysqlpp::SQLTypeAdapter *)((char *)v27 + v8);
  v28._M_impl._M_start = v27;
  v28._M_impl._M_finish = v27;
  v28._M_impl._M_end_of_storage = (mysqlpp::SQLTypeAdapter *)((char *)v27 + v8);
  if ( v6 == v7 )
  {
    M_finish = v27;
    v19 = v7;
  }
  else
  {
    M_finish = v27;
    do
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(M_finish++, v7++);
    while ( v6 != v7 );
    v7 = *(const mysqlpp::SQLTypeAdapter **)a2;
    v19 = *(const mysqlpp::SQLTypeAdapter **)(a2 + 8);
    M_end_of_storage = v28._M_impl._M_end_of_storage;
  }
  v20 = *a3;
  v21 = *(_QWORD *)(a2 + 24);
  v28._M_impl._M_finish = M_finish;
  v22 = (char *)v19 - (char *)v7;
  v23 = a3[1];
  v24 = *(_BYTE *)(a2 + 32);
  v29 = v21;
  v25 = 0xAAAAAAAAAAAAAAABLL * (v22 >> 3);
  v30 = v24;
  if ( v25 < 0xAAAAAAAAAAAAAAABLL * (((char *)v23 - (char *)v20) >> 3) )
  {
    do
    {
      if ( M_finish == M_end_of_storage )
      {
        std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
          &v28,
          (std::vector<mysqlpp::SQLTypeAdapter>::iterator)M_finish,
          &v20[v25],
          v20);
        M_finish = v28._M_impl._M_finish;
      }
      else
      {
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(M_finish, &v20[v25]);
        M_finish = ++v28._M_impl._M_finish;
      }
      v20 = *a3;
      ++v25;
      M_end_of_storage = v28._M_impl._M_end_of_storage;
    }
    while ( v25 < 0xAAAAAAAAAAAAAAABLL * (((char *)a3[1] - (char *)*a3) >> 3) );
    v21 = v29;
    v24 = v30;
  }
  M_start = v28._M_impl._M_start;
  *(_QWORD *)(a1 + 8) = M_finish;
  *(_QWORD *)(a1 + 16) = M_end_of_storage;
  *(_QWORD *)a1 = M_start;
  *(_QWORD *)(a1 + 24) = v21;
  *(_BYTE *)(a1 + 32) = v24;
  return a1;
};

// Line 83: range 000000000C748330-000000000C748359
void __cdecl GLOBAL__sub_I_qparms_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
