// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/fields.hpp

// Line 126: range 0000000019BDAFCE-0000000019BDB40B
// local variable allocation has failed, the output may be wrong!
boost::beast::http::basic_fields<std::allocator<char> >::const_iterator __fastcall boost::beast::http::basic_fields<std::allocator<char>>::find(
        const boost::beast::http::basic_fields<std::allocator<char> > *const this,
        boost::beast::string_view name,
        __int64 a3)
{
  const char *v3; // r12
  std::size_t len; // r14
  unsigned __int64 v6; // rbp
  const char *v7; // r13
  __int64 v8; // rsi
  boost::intrusive::rbtree_node<void*> **p_ptr; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbx
  char *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rsi
  boost::beast::string_view v15; // rax
  bool v16; // al
  boost::beast::string_view v17; // rax
  __int64 v18; // rax
  boost::beast::string_view v19; // rax
  std::size_t v20; // r13
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v21; // rbx
  boost::beast::string_view v22; // rax
  bool v23; // al
  __int64 v24; // rsi
  void *v25; // rdi
  boost::intrusive::rbtree_node<void*> **v26; // rdi
  unsigned __int64 v27; // rax
  boost::beast::string_view v29; // rax
  boost::beast::string_view v30; // rax
  __int64 v31; // rsi
  boost::intrusive::detail::uncast_types<const boost::intrusive::list_node<void*>*>::non_const_pointer v32; // rax
  boost::intrusive::detail::uncast_types<const boost::intrusive::rbtree_node<void*>*>::non_const_pointer v33; // [rsp+0h] [rbp-C8h]
  boost::intrusive::rbtree_node<void*> *v34; // [rsp+8h] [rbp-C0h]
  char *v36; // [rsp+20h] [rbp-A8h]
  const char *v37; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+38h] [rbp-90h]
  boost::intrusive::rbtree_node<void*> *ptr; // [rsp+48h] [rbp-80h] BYREF
  char v40[120]; // [rsp+50h] [rbp-78h] BYREF

  len = name.len_;
  v6 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_0(64LL);
    if ( v13 )
      v6 = v13;
  }
  v7 = (const char *)(v6 + 64);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 8 name:714";
  *(_QWORD *)(v6 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::find;
  v38 = v6 >> 3;
  *(_DWORD *)(v38 + 2147450880) = -235802127;
  *(_DWORD *)(v38 + 2147450884) = -202178560;
  *(_QWORD *)(v6 + 32) = len;
  *(_QWORD *)(v6 + 40) = a3;
  ptr = (boost::intrusive::rbtree_node<void*> *)(v8 + 8);
  v34 = boost::intrusive::detail::uncast<boost::intrusive::rbtree_node<void *> const*>((const boost::intrusive::rbtree_node<void*> *const *)&ptr);
  p_ptr = &ptr;
  v33 = boost::intrusive::detail::uncast<boost::intrusive::rbtree_node<void *> const*>((const boost::intrusive::rbtree_node<void*> *const *)&ptr);
  if ( *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
  {
    p_ptr = (boost::intrusive::rbtree_node<void*> **)(v14 + 8);
    __asan_report_load8(v14 + 8);
LABEL_7:
    __asan_handle_no_return(p_ptr);
    __assert_fail(
      off_1B5D9D60,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x3Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePtr,"
      " Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::elem"
      "ent; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 3; boos"
      "t::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocator<char"
      "> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtree_node<void*>*]");
  }
  v11 = *(_QWORD *)(v10 + 8);
  v36 = (char *)v6;
  v12 = (char *)(v6 + 64);
  v37 = v7;
  while ( v11 )
  {
    if ( v11 == 16 )
      goto LABEL_7;
    if ( *(_WORD *)(((unsigned __int64)(v12 - 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load16(v12 - 32);
    }
    else
    {
      v7 = (const char *)*((_QWORD *)v12 - 4);
      v3 = (const char *)*((_QWORD *)v12 - 3);
      v19 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)(v11 + 32));
      if ( v19.len_ < (unsigned __int64)v3 )
      {
        v16 = 1;
        goto LABEL_19;
      }
    }
    v15 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)(v11 + 32));
    if ( (unsigned __int64)v3 >= v15.len_ )
    {
      v17 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)(v11 + 32));
      v16 = std::__lexicographical_compare_impl<char const*,char const*,__gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::basic_string_view<char,std::char_traits<char>>,boost::basic_string_view<char,std::char_traits<char>>)::{lambda(char,char)#1}>>(
              v17.ptr_,
              &v17.ptr_[v17.len_],
              v7,
              &v3[(_QWORD)v7],
              (__gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::beast::string_view,boost::beast::string_view) const::<lambda(char,char)> >)v33);
    }
    else
    {
      v16 = 0;
    }
LABEL_19:
    if ( v16 )
    {
      p_ptr = (boost::intrusive::rbtree_node<void*> **)(v11 + 16);
      if ( !*(_BYTE *)(((unsigned __int64)(v11 + 16) >> 3) + 0x7FFF8000) )
      {
        v18 = *(_QWORD *)(v11 + 16);
        goto LABEL_13;
      }
      __asan_report_load8(p_ptr);
    }
    p_ptr = (boost::intrusive::rbtree_node<void*> **)(v11 + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_ptr);
      break;
    }
    v18 = *(_QWORD *)(v11 + 8);
    v33 = (boost::intrusive::detail::uncast_types<const boost::intrusive::rbtree_node<void*>*>::non_const_pointer)v11;
LABEL_13:
    v11 = v18;
  }
  v20 = (std::size_t)v37;
  if ( v34 == v33 )
    goto LABEL_32;
  if ( v33 == (boost::intrusive::detail::uncast_types<const boost::intrusive::rbtree_node<void*>*>::non_const_pointer)16 )
  {
    __asan_handle_no_return(p_ptr);
    __assert_fail(
      off_1B5D9D60,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x3Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePtr,"
      " Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::elem"
      "ent; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 3; boos"
      "t::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocator<char"
      "> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtree_node<void*>*]");
  }
  v21 = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)&v33[1];
  if ( *(_WORD *)(((unsigned __int64)(v37 - 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load16(v37 - 32);
LABEL_44:
    v29 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string(v21);
    if ( v20 <= v29.len_ )
    {
      v30 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string(v21);
      v23 = std::__lexicographical_compare_impl<char const*,char const*,__gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::basic_string_view<char,std::char_traits<char>>,boost::basic_string_view<char,std::char_traits<char>>)::{lambda(char,char)#1}>>(
              v3,
              &v3[v20],
              v30.ptr_,
              &v30.ptr_[v30.len_],
              (__gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::beast::string_view,boost::beast::string_view) const::<lambda(char,char)> >)v33);
    }
    else
    {
      v23 = 0;
    }
    goto LABEL_30;
  }
  v3 = (const char *)*((_QWORD *)v37 - 4);
  v20 = *((_QWORD *)v37 - 3);
  v22 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&v33[1]);
  if ( v20 >= v22.len_ )
    goto LABEL_44;
  v23 = 1;
LABEL_30:
  if ( !v23 )
    v34 = v33;
LABEL_32:
  ptr = (boost::intrusive::rbtree_node<void*> *)(v24 + 8);
  v25 = &ptr;
  if ( v34 != boost::intrusive::detail::uncast<boost::intrusive::rbtree_node<void *> const*>((const boost::intrusive::rbtree_node<void*> *const *)&ptr) )
  {
    if ( v34 != (boost::intrusive::rbtree_node<void*> *)16 )
    {
      ptr = (boost::intrusive::rbtree_node<void*> *)((char *)v34 - 16);
      v26 = &ptr;
      v27 = (unsigned __int64)boost::intrusive::detail::uncast<boost::beast::http::basic_fields<std::allocator<char>>::element const*>((const boost::beast::http::basic_fields<std::allocator<char> >::element *const *)&ptr);
      if ( !v27 )
      {
        __asan_handle_no_return(&ptr);
        __assert_fail(
          off_1B5D9D60,
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
          0x4Eu,
          "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr boost::intrusive::bhtraits_base<T, Nod"
          "ePtr, Tag, Type>::to_node_ptr(boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference) [with T = boo"
          "st::beast::http::basic_fields<std::allocator<char> >::element; NodePtr = boost::intrusive::list_node<void*>*; "
          "Tag = boost::intrusive::dft_tag; unsigned int Type = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>"
          "::node_ptr = boost::intrusive::list_node<void*>*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::refe"
          "rence = boost::beast::http::basic_fields<std::allocator<char> >::element&]");
      }
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
      {
        v26 = (boost::intrusive::rbtree_node<void*> **)v27;
        __asan_report_load8(v27);
      }
      else if ( *(_QWORD *)v27 )
      {
        if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          this->set_.size_ = v27;
          goto LABEL_39;
        }
        __asan_report_store8();
LABEL_55:
        *(_QWORD *)v36 = 1172321806LL;
        *(_QWORD *)(v38 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
        return (boost::beast::http::basic_fields<std::allocator<char> >::const_iterator)this;
      }
      __asan_handle_no_return(v26);
      __assert_fail(
        "!node_algorithms::inited(this->priv_value_traits().to_node_ptr(r))",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/list.hpp",
        0x52Bu,
        "boost::intrusive::list_impl<ValueTraits, SizeType, ConstantTimeSize, HeaderHolder>::const_iterator boost::intrus"
        "ive::list_impl<ValueTraits, SizeType, ConstantTimeSize, HeaderHolder>::iterator_to(boost::intrusive::list_impl<V"
        "alueTraits, SizeType, ConstantTimeSize, HeaderHolder>::const_reference) const [with ValueTraits = boost::intrusi"
        "ve::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element, boost::intrusive::list_node_trait"
        "s<void*>, boost::intrusive::normal_link, boost::intrusive::dft_tag, 1>; SizeType = long unsigned int; bool Const"
        "antTimeSize = false; HeaderHolder = void; boost::intrusive::list_impl<ValueTraits, SizeType, ConstantTimeSize, H"
        "eaderHolder>::const_iterator = boost::intrusive::list_iterator<boost::intrusive::bhtraits<boost::beast::http::ba"
        "sic_fields<std::allocator<char> >::element, boost::intrusive::list_node_traits<void*>, boost::intrusive::normal_"
        "link, boost::intrusive::dft_tag, 1>, true>; boost::intrusive::list_impl<ValueTraits, SizeType, ConstantTimeSize,"
        " HeaderHolder>::const_reference = const boost::beast::http::basic_fields<std::allocator<char> >::element&]");
    }
LABEL_50:
    __asan_handle_no_return(v25);
    __assert_fail(
      off_1B5D9D60,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x3Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePtr,"
      " Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::elem"
      "ent; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 3; boos"
      "t::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocator<char"
      "> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtree_node<void*>*]");
  }
  ptr = (boost::intrusive::rbtree_node<void*> *)(v31 + 40);
  v32 = boost::intrusive::detail::uncast<boost::intrusive::list_node<void *> const*>((const boost::intrusive::list_node<void*> *const *)&ptr);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v25 = (void *)this;
    __asan_report_store8();
    goto LABEL_50;
  }
  this->set_.size_ = (unsigned __int64)v32;
LABEL_39:
  if ( v40 != v36 )
    goto LABEL_55;
  *(_QWORD *)(v38 + 2147450880) = 0LL;
  return (boost::beast::http::basic_fields<std::allocator<char> >::const_iterator)this;
};

// Line 233: range 0000000019D0D3F2-0000000019D0E0F5
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::writer::writer(
        boost::beast::http::basic_fields<std::allocator<char> >::writer *const this,
        const boost::beast::http::basic_fields<std::allocator<char> > *f,
        unsigned int version,
        unsigned int code)
{
  boost::beast::string_view *p_target_or_reason; // rdi
  boost::optional<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > *p_view; // rcx
  char *buf; // rcx
  char *v8; // rax
  char v9; // cl
  char *v10; // rax
  char v11; // cl
  char *v12; // rax
  char v13; // cl
  char *v14; // rax
  char v15; // cl
  char *v16; // rcx
  char v17; // r8
  char *v18; // rax
  char v19; // cl
  unsigned int v20; // eax
  char *v21; // rdx
  char v22; // cl
  char *v23; // rdx
  char *v24; // rdx
  char v25; // cl
  char *v26; // rdx
  char v27; // cl
  char *v28; // rdx
  char v29; // cl
  char *v30; // rax
  char v31; // dl
  std::size_t *p_len; // rax
  const char *v33; // r13
  std::size_t len; // r14
  const boost::beast::http::basic_fields<std::allocator<char> > *v35; // r12
  boost::intrusive::list_node<void*> *v36; // rbp
  boost::intrusive::list_node<void*> *v37; // rax
  boost::beast::string_view v38; // rax
  boost::beast::http::chunk_crlf bn_4; // [rsp+7h] [rbp-71h] BYREF
  boost::intrusive::list_node<void*> *ptr; // [rsp+8h] [rbp-70h] BYREF
  boost::asio::const_buffer bn_0; // [rsp+10h] [rbp-68h] BYREF
  boost::asio::const_buffer bn_1; // [rsp+20h] [rbp-58h] BYREF
  boost::asio::const_buffer bn_2; // [rsp+30h] [rbp-48h] BYREF
  boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range bn_3; // [rsp+40h] [rbp-38h] BYREF
  std::false_type v45; // [rsp+80h] [rbp+8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_36;
  }
  LODWORD(p_target_or_reason) = code;
  this->f_ = f;
  p_view = &this->view_;
  if ( *(char *)(((unsigned __int64)&this->view_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_36:
    __asan_report_store1(p_view);
    goto LABEL_37;
  }
  this->view_.m_initialized = 0;
  buf = this->buf_;
  if ( *(char *)(((unsigned __int64)this->buf_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_37:
    v8 = (char *)__asan_report_store1(buf);
LABEL_38:
    v10 = (char *)__asan_report_store1(v8);
LABEL_39:
    v12 = (char *)__asan_report_store1(v10);
LABEL_40:
    v14 = (char *)__asan_report_store1(v12);
LABEL_41:
    __asan_report_store1(v14);
LABEL_42:
    v18 = (char *)__asan_report_store1(v16);
LABEL_43:
    __asan_report_store1(v18);
LABEL_44:
    __asan_report_store1(v21);
    goto LABEL_45;
  }
  this->buf_[0] = 72;
  v8 = &this->buf_[1];
  v9 = *(_BYTE *)(((unsigned __int64)&this->buf_[1] >> 3) + 0x7FFF8000);
  if ( v9 <= (((unsigned __int8)this + 89) & 7) && v9 )
    goto LABEL_38;
  this->buf_[1] = 84;
  v10 = &this->buf_[2];
  v11 = *(_BYTE *)(((unsigned __int64)&this->buf_[2] >> 3) + 0x7FFF8000);
  if ( v11 <= (((unsigned __int8)this + 90) & 7) && v11 )
    goto LABEL_39;
  this->buf_[2] = 84;
  v12 = &this->buf_[3];
  v13 = *(_BYTE *)(((unsigned __int64)&this->buf_[3] >> 3) + 0x7FFF8000);
  if ( v13 <= (((unsigned __int8)this + 91) & 7) && v13 )
    goto LABEL_40;
  this->buf_[3] = 80;
  v14 = &this->buf_[4];
  v15 = *(_BYTE *)(((unsigned __int64)&this->buf_[4] >> 3) + 0x7FFF8000);
  if ( v15 <= (((unsigned __int8)this + 92) & 7) && v15 )
    goto LABEL_41;
  this->buf_[4] = 47;
  v16 = &this->buf_[5];
  v17 = *(_BYTE *)(((unsigned __int64)&this->buf_[5] >> 3) + 0x7FFF8000);
  if ( v17 <= (((unsigned __int8)this + 93) & 7) && v17 )
    goto LABEL_42;
  this->buf_[5] = version / 0xA + 48;
  v18 = &this->buf_[6];
  v19 = *(_BYTE *)(((unsigned __int64)&this->buf_[6] >> 3) + 0x7FFF8000);
  if ( v19 <= (((unsigned __int8)this + 94) & 7) && v19 )
    goto LABEL_43;
  this->buf_[6] = 46;
  v20 = version % 0xA + 48;
  v21 = &this->buf_[7];
  v22 = *(_BYTE *)(((unsigned __int64)&this->buf_[7] >> 3) + 0x7FFF8000);
  if ( v22 <= (((unsigned __int8)this + 95) & 7) && v22 )
    goto LABEL_44;
  this->buf_[7] = v20;
  v23 = &this->buf_[8];
  if ( *(char *)(((unsigned __int64)&this->buf_[8] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_45:
    __asan_report_store1(v23);
LABEL_46:
    __asan_report_store1(v24);
LABEL_47:
    __asan_report_store1(v26);
LABEL_48:
    v30 = (char *)__asan_report_store1(v28);
LABEL_49:
    p_len = (std::size_t *)__asan_report_store1(v30);
    goto LABEL_50;
  }
  this->buf_[8] = 32;
  v24 = &this->buf_[9];
  v25 = *(_BYTE *)(((unsigned __int64)&this->buf_[9] >> 3) + 0x7FFF8000);
  if ( v25 <= (((unsigned __int8)this + 97) & 7) && v25 )
    goto LABEL_46;
  this->buf_[9] = (unsigned int)p_target_or_reason / 0x64 + 48;
  v26 = &this->buf_[10];
  v27 = *(_BYTE *)(((unsigned __int64)&this->buf_[10] >> 3) + 0x7FFF8000);
  if ( v27 <= (((unsigned __int8)this + 98) & 7) && v27 )
    goto LABEL_47;
  this->buf_[10] = (unsigned int)p_target_or_reason / 0xA % 0xA + 48;
  v28 = &this->buf_[11];
  v29 = *(_BYTE *)(((unsigned __int64)&this->buf_[11] >> 3) + 0x7FFF8000);
  if ( v29 <= (((unsigned __int8)this + 99) & 7) && v29 )
    goto LABEL_48;
  this->buf_[11] = (unsigned int)p_target_or_reason % 0xA + 48;
  v30 = &this->buf_[12];
  v31 = *(_BYTE *)(((unsigned __int64)&this->buf_[12] >> 3) + 0x7FFF8000);
  if ( v31 <= (((unsigned __int8)this + 100) & 7) && v31 )
    goto LABEL_49;
  this->buf_[12] = 32;
  p_len = &f->target_or_reason_.len_;
  if ( *(_BYTE *)(((unsigned __int64)&f->target_or_reason_.len_ >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    p_target_or_reason = (boost::beast::string_view *)p_len;
    __asan_report_load8(p_len);
LABEL_51:
    __asan_report_load16(p_target_or_reason);
    goto LABEL_52;
  }
  if ( f->target_or_reason_.len_ )
  {
    p_target_or_reason = &f->target_or_reason_;
    if ( !*(_WORD *)(((unsigned __int64)&f->target_or_reason_ >> 3) + 0x7FFF8000) )
    {
      v33 = f->target_or_reason_.ptr_;
      len = f->target_or_reason_.len_;
      goto LABEL_31;
    }
    goto LABEL_51;
  }
LABEL_52:
  v38 = boost::beast::http::obsolete_reason((boost::beast::http::status)p_target_or_reason);
  v33 = v38.ptr_;
  len = v38.len_;
LABEL_31:
  v35 = this->f_;
  ptr = &this->f_->list_.data_.root_plus_size_.m_header;
  v36 = ptr;
  v37 = boost::intrusive::detail::uncast<boost::intrusive::list_node<void *> const*>((const boost::intrusive::list_node<void*> *const *)&ptr);
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v36);
    boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::fwrinit(
      (boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)v36,
      v45);
  }
  else
  {
    bn_3.first_.it_.members_.nodeptr_ = v35->list_.data_.root_plus_size_.m_header.next_;
    bn_3.last_.it_.members_.nodeptr_ = v37;
    bn_2.data_ = "\r\n";
    bn_2.size_ = 2LL;
    bn_1.data_ = v33;
    bn_1.size_ = len;
    bn_0.data_ = this->buf_;
    bn_0.size_ = 13LL;
    if ( this->view_.m_initialized )
      this->view_.m_initialized = 0;
    boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::buffers_cat_view(
      (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *const)&this->view_.m_storage,
      &bn_0,
      &bn_1,
      &bn_2,
      &bn_3,
      &bn_4);
    this->view_.m_initialized = 1;
  }
};

// Line 296: range 0000000019D00380-0000000019D00723
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::value_type::value_type(
        boost::beast::http::basic_fields<std::allocator<char> >::value_type *const this,
        const void *name,
        boost::beast::string_view sname,
        boost::beast::string_view value)
{
  boost::beast::http::basic_fields<std::allocator<char> >::value_type *v4; // rbp
  const char *ptr; // r12
  char *len; // r13
  unsigned __int64 v7; // r14
  _DWORD *v8; // r15
  boost::beast::http::basic_fields<std::allocator<char> >::off_t v9; // r12
  char v10; // dl
  char v11; // dl
  char v12; // dl
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  __int64 v17; // rax
  size_t v18; // rdx
  __int64 v19; // rdx
  char *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-C0h]
  char v26[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = this;
  ptr = sname.ptr_;
  len = (char *)sname.len_;
  v24 = (__m128i)value;
  v7 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v23 = __asan_stack_malloc_1(128LL);
    if ( v23 )
      v7 = v23;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 32 8 5 n:296 64 16 9 sname:299 96 16 9 value:299";
  *(_QWORD *)(v7 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::value_type::value_type;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -219021312;
  v8[536862723] = -202178560;
  *(_QWORD *)(v7 + 64) = ptr;
  *(_QWORD *)(v7 + 72) = len;
  *(__m128i *)(v7 + 96) = _mm_load_si128(&v24);
  if ( *(_BYTE *)(((v7 + 72) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7 + 72);
LABEL_29:
    __asan_report_store2(this);
    goto LABEL_30;
  }
  v9 = *(_WORD *)(v7 + 72) + 2;
  v10 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 1) >= v10 && v10 )
    goto LABEL_29;
  this->off_ = v9;
  this = (boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)(v7 + 104);
  if ( *(_BYTE *)(((v7 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(this);
LABEL_31:
    __asan_report_store2(this);
LABEL_32:
    __asan_report_store2(this);
LABEL_33:
    __asan_report_store1(this);
LABEL_34:
    __asan_report_store1(this);
LABEL_35:
    __asan_report_store1(this);
LABEL_36:
    __asan_report_store1(this);
    goto LABEL_37;
  }
  this = (boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&v4->len_;
  v11 = *(_BYTE *)(((unsigned __int64)&v4->len_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v4 + 2) & 7) + 1) >= v11 && v11 )
    goto LABEL_31;
  v4->len_ = *(_QWORD *)(v7 + 104);
  this = (boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&v4->f_;
  v12 = *(_BYTE *)(((unsigned __int64)&v4->f_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v4 + 4) & 7) + 1) >= v12 && v12 )
    goto LABEL_32;
  v4->f_ = (__int16)name;
  len = boost::beast::http::basic_fields<std::allocator<char>>::value_type::data(v4);
  this = (boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&len[v9 - 2];
  v13 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v13 <= ((unsigned __int8)this & 7) && v13 )
    goto LABEL_33;
  LOBYTE(this->off_) = 58;
  this = (boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&len[v4->off_ - 1];
  v14 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v14 <= (((unsigned __int8)len + v4->off_ - 1) & 7) && v14 )
    goto LABEL_34;
  LOBYTE(this->off_) = 32;
  this = (boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&len[v4->len_ + v4->off_];
  v15 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v15 <= (((unsigned __int8)len + v4->len_ + v4->off_) & 7) && v15 )
    goto LABEL_35;
  LOBYTE(this->off_) = 13;
  this = (boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&len[v4->len_ + 1 + v4->off_];
  v16 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v16 <= (((unsigned __int8)len + v4->len_ + v4->off_ + 1) & 7) && v16 )
    goto LABEL_36;
  LOBYTE(this->off_) = 10;
  v17 = *(_QWORD *)(v7 + 72);
  *(_QWORD *)(v7 + 32) = v17;
  v25 = v17;
  this = (boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)(v7 + 32);
  if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(this);
    goto LABEL_38;
  }
  v18 = *(_QWORD *)(v7 + 32);
  this = (boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)(v7 + 64);
  if ( !*(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
  {
    name = *(const void **)(v7 + 64);
    if ( !v18 )
      goto LABEL_21;
    goto LABEL_39;
  }
LABEL_38:
  __asan_report_load8(this);
LABEL_39:
  memcpy(len, name, v18);
LABEL_21:
  v19 = *(_QWORD *)(v7 + 104);
  v20 = &len[v4->off_];
  *(_QWORD *)(v7 + 32) = v19;
  v25 = v19;
  if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) )
  {
    v22 = __asan_report_load8(v7 + 32);
  }
  else
  {
    v21 = *(_QWORD *)(v7 + 32);
    v22 = v7 + 96;
    if ( !*(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
    {
      name = *(const void **)(v7 + 96);
      if ( !v21 )
        goto LABEL_24;
      goto LABEL_42;
    }
  }
  v20 = (char *)v22;
  __asan_report_load8(v22);
LABEL_42:
  memcpy(v20, name, v21);
LABEL_24:
  if ( v26 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 336: range 0000000019BB40A8-0000000019BB4113
boost::beast::string_view __fastcall boost::beast::http::basic_fields<std::allocator<char>>::value_type::value(
        const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const this)
{
  __int64 v1; // rsi
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v2; // rbx
  char *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  boost::beast::string_view result; // rax

  v2 = this;
  v3 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::data(this);
  v5 = *(unsigned __int8 *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 1) >= (char)v5 && (_BYTE)v5 )
  {
    __asan_report_load2(this, v1, ((unsigned __int8)this & 7u) + 1, v5, v4);
  }
  else
  {
    result.ptr_ = &v3[this->off_];
    this = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)((char *)this + 2);
    v6 = *(unsigned __int8 *)(((unsigned __int64)&v2->len_ >> 3) + 0x7FFF8000);
    result.len_ = (((_BYTE)v2 + 2) & 7u) + 1;
    if ( (char)((((_BYTE)v2 + 2) & 7) + 1) < (char)v6 || !(_BYTE)v6 )
    {
      result.len_ = v2->len_;
      return result;
    }
  }
  __asan_report_load2(this, v1, result.len_, v6, v4);
  return (boost::beast::string_view)boost::beast::buffers_suffix<boost::asio::const_buffer>::end((const boost::beast::buffers_suffix<boost::asio::const_buffer> *const)this);
};

// Line 345: range 0000000019D00728-0000000019D00739
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::element::element(
        boost::beast::http::basic_fields<std::allocator<char> >::element *const this,
        boost::beast::http::field name,
        boost::beast::string_view sname,
        boost::beast::string_view value)
{
  boost::beast::http::basic_fields<std::allocator<char>>::value_type::value_type(
    &this->boost::beast::http::basic_fields<std::allocator<char> >::value_type,
    (const void *)name,
    sname,
    value);
};

// Line 356: range 0000000019B86DB8-0000000019B86DEE
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields(
        boost::beast::http::basic_fields<std::allocator<char> > *const this)
{
  boost::beast::http::basic_fields<std::allocator<char>>::delete_list(this);
  boost::beast::http::basic_fields<std::allocator<char>>::realloc_string(
    this,
    &this->method_,
    (boost::beast::string_view)0);
  boost::beast::http::basic_fields<std::allocator<char>>::realloc_string(
    this,
    &this->target_or_reason_,
    (boost::beast::string_view)0);
};

// Line 441: range 0000000019B9C5B0-0000000019B9CAD9
boost::beast::http::basic_fields<std::allocator<char> > *__fastcall boost::beast::http::basic_fields<std::allocator<char>>::operator=(
        boost::beast::http::basic_fields<std::allocator<char> > *const this,
        boost::beast::http::basic_fields<std::allocator<char> > *other)
{
  boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *v4; // rax
  boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *v5; // rdx
  boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *p_left; // rdi
  boost::intrusive::rbtree_node<void*> *parent; // rcx
  boost::intrusive::rbtree_node<void*> *left; // rcx
  boost::intrusive::rbtree_node<void*> *right; // rcx
  boost::intrusive::rbtree_node<void*>::node_ptr v10; // rdi
  boost::intrusive::rbtree_node<void*>::node_ptr v11; // rdi
  unsigned __int64 size; // rax
  unsigned __int64 p_list; // rax
  unsigned __int64 v14; // rdi
  boost::intrusive::list_node<void*>::node_ptr next; // r10
  boost::intrusive::list_node<void*>::node_ptr v16; // r9
  boost::intrusive::list_node<void*>::node_ptr v17; // r8
  boost::intrusive::list_node<void*>::node_ptr *v18; // rdx
  unsigned __int64 v19; // rcx
  boost::intrusive::list_node<void*>::node_ptr v20; // rsi
  boost::intrusive::list_node<void*>::node_ptr *v21; // rdx
  unsigned __int64 v22; // rdx
  boost::intrusive::list_node<void*>::node_ptr *p_prev; // r11
  boost::intrusive::list_node<void*> *prev; // r12
  boost::intrusive::list_node<void*>::node_ptr *v25; // r11
  boost::intrusive::list_node<void*> *v26; // rsi
  boost::intrusive::list_node<void*> *v27; // rdx
  boost::intrusive::list_node<void*> *v28; // rdx
  boost::beast::string_view *p_method; // rdi

  if ( this != other )
  {
    boost::beast::http::basic_fields<std::allocator<char>>::clear_all(this);
    v4 = &other->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void>;
    v5 = &this->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void>;
    if ( &other->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> == &this->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> )
      goto LABEL_15;
    p_left = &this->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void>;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_left);
    }
    else
    {
      parent = this->set_.holder.root.parent_;
      p_left = &other->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void>;
      if ( !*(_BYTE *)(((unsigned __int64)&other->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> >> 3)
                     + 0x7FFF8000) )
      {
        this->set_.holder.root.parent_ = other->set_.holder.root.parent_;
        other->set_.holder.root.parent_ = parent;
        p_left = (boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *)&this->set_.holder.root.left_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->set_.holder.root.left_ >> 3) + 0x7FFF8000) )
        {
          left = this->set_.holder.root.left_;
          p_left = (boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *)&other->set_.holder.root.left_;
          if ( !*(_BYTE *)(((unsigned __int64)&other->set_.holder.root.left_ >> 3) + 0x7FFF8000) )
          {
            this->set_.holder.root.left_ = other->set_.holder.root.left_;
            other->set_.holder.root.left_ = left;
            p_left = (boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *)&this->set_.holder.root.right_;
            if ( !*(_BYTE *)(((unsigned __int64)&this->set_.holder.root.right_ >> 3) + 0x7FFF8000) )
            {
              right = this->set_.holder.root.right_;
              p_left = (boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *)&other->set_.holder.root.right_;
              if ( !*(_BYTE *)(((unsigned __int64)&other->set_.holder.root.right_ >> 3) + 0x7FFF8000) )
              {
                this->set_.holder.root.right_ = other->set_.holder.root.right_;
                other->set_.holder.root.right_ = right;
                v10 = this->set_.holder.root.parent_;
                if ( !v10 )
                {
LABEL_44:
                  this->set_.holder.root.left_ = &v5->holder.root;
                  this->set_.holder.root.right_ = &v5->holder.root;
LABEL_12:
                  v11 = other->set_.holder.root.parent_;
                  if ( v11 )
                  {
                    if ( !*(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
                    {
                      v11->parent_ = &v4->holder.root;
                      goto LABEL_15;
                    }
                    __asan_report_store8();
                  }
                  other->set_.holder.root.left_ = &v4->holder.root;
                  other->set_.holder.root.right_ = &v4->holder.root;
LABEL_15:
                  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load8(this);
                  }
                  else
                  {
                    size = this->set_.size_;
                    if ( !*(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
                    {
                      this->set_.size_ = other->set_.size_;
                      other->set_.size_ = size;
                      p_list = (unsigned __int64)&other->list_;
                      v14 = (unsigned __int64)&this->list_;
                      if ( &other->list_ == &this->list_ )
                        goto LABEL_31;
                      if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
                      {
                        next = this->list_.data_.root_plus_size_.m_header.next_;
                        if ( !*(_BYTE *)((p_list >> 3) + 0x7FFF8000) )
                        {
                          v16 = other->list_.data_.root_plus_size_.m_header.next_;
                          if ( next )
                            goto LABEL_21;
                          goto LABEL_51;
                        }
LABEL_50:
                        v14 = p_list;
                        p_list = __asan_report_load8(p_list);
LABEL_51:
                        this->list_.data_.root_plus_size_.m_header.next_ = (boost::intrusive::list_node<void*>::node_ptr)v14;
                        if ( *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000) )
                        {
                          v14 += 8LL;
                          __asan_report_store8();
LABEL_54:
                          other->list_.data_.root_plus_size_.m_header.next_ = (boost::intrusive::list_node<void*>::node_ptr)p_list;
                          if ( *(_BYTE *)(((p_list + 8) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store8();
                            goto LABEL_57;
                          }
                          *(_QWORD *)(p_list + 8) = p_list;
LABEL_22:
                          v17 = this->list_.data_.root_plus_size_.m_header.next_;
                          v18 = (boost::intrusive::list_node<void*>::node_ptr *)(v14 + 8);
                          if ( !*(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000) )
                          {
                            v19 = *(_QWORD *)(v14 + 8);
                            v20 = other->list_.data_.root_plus_size_.m_header.next_;
                            v21 = (boost::intrusive::list_node<void*>::node_ptr *)(p_list + 8);
                            if ( !*(_BYTE *)(((p_list + 8) >> 3) + 0x7FFF8000) )
                            {
                              v22 = *(_QWORD *)(p_list + 8);
                              p_prev = &v17->prev_;
                              if ( !*(_BYTE *)(((unsigned __int64)&v17->prev_ >> 3) + 0x7FFF8000) )
                              {
                                prev = v17->prev_;
                                v25 = &v20->prev_;
                                if ( !*(_BYTE *)(((unsigned __int64)&v20->prev_ >> 3) + 0x7FFF8000) )
                                {
                                  v17->prev_ = v20->prev_;
                                  v20->prev_ = prev;
                                  if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
                                  {
                                    v26 = *(boost::intrusive::list_node<void*> **)v19;
                                    if ( !*(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)v19 = *(_QWORD *)v22;
                                      *(_QWORD *)v22 = v26;
                                      v27 = this->list_.data_.root_plus_size_.m_header.next_;
                                      this->list_.data_.root_plus_size_.m_header.next_ = other->list_.data_.root_plus_size_.m_header.next_;
                                      other->list_.data_.root_plus_size_.m_header.next_ = v27;
                                      v28 = *(boost::intrusive::list_node<void*> **)(v14 + 8);
                                      *(_QWORD *)(v14 + 8) = *(_QWORD *)(p_list + 8);
                                      *(_QWORD *)(p_list + 8) = v28;
                                      if ( next )
                                        goto LABEL_29;
                                      goto LABEL_63;
                                    }
LABEL_62:
                                    v14 = v22;
                                    p_list = __asan_report_load8(v22);
LABEL_63:
                                    other->list_.data_.root_plus_size_.m_header.next_ = 0LL;
                                    *(_QWORD *)(p_list + 8) = 0LL;
LABEL_29:
                                    if ( !v16 )
                                    {
                                      this->list_.data_.root_plus_size_.m_header.next_ = 0LL;
                                      *(_QWORD *)(v14 + 8) = 0LL;
                                    }
LABEL_31:
                                    p_method = &this->method_;
                                    if ( *(_WORD *)(((unsigned __int64)&this->method_ >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store16(p_method);
                                    }
                                    else
                                    {
                                      p_method = &other->method_;
                                      if ( !*(_WORD *)(((unsigned __int64)&other->method_ >> 3) + 0x7FFF8000) )
                                      {
                                        this->method_ = (boost::beast::string_view)_mm_loadu_si128((const __m128i *)&other->method_);
                                        p_method = &this->target_or_reason_;
                                        if ( !*(_WORD *)(((unsigned __int64)&this->target_or_reason_ >> 3) + 0x7FFF8000) )
                                        {
                                          p_method = &other->target_or_reason_;
                                          if ( !*(_WORD *)(((unsigned __int64)&other->target_or_reason_ >> 3)
                                                         + 0x7FFF8000) )
                                          {
                                            this->target_or_reason_ = (boost::beast::string_view)_mm_loadu_si128((const __m128i *)&other->target_or_reason_);
                                            other->method_.ptr_ = 0LL;
                                            other->method_.len_ = 0LL;
                                            other->target_or_reason_.ptr_ = 0LL;
                                            other->target_or_reason_.len_ = 0LL;
                                            return this;
                                          }
LABEL_67:
                                          __asan_report_load16(p_method);
                                          JUMPOUT(0x19B9CA1DLL);
                                        }
LABEL_66:
                                        __asan_report_store16(p_method);
                                        goto LABEL_67;
                                      }
                                    }
                                    __asan_report_load16(p_method);
                                    goto LABEL_66;
                                  }
LABEL_61:
                                  __asan_report_load8(v19);
                                  goto LABEL_62;
                                }
LABEL_60:
                                __asan_report_load8(v25);
                                goto LABEL_61;
                              }
LABEL_59:
                              __asan_report_load8(p_prev);
                              goto LABEL_60;
                            }
LABEL_58:
                            __asan_report_load8(v21);
                            goto LABEL_59;
                          }
LABEL_57:
                          __asan_report_load8(v18);
                          goto LABEL_58;
                        }
                        *(_QWORD *)(v14 + 8) = v14;
LABEL_21:
                        if ( v16 )
                          goto LABEL_22;
                        goto LABEL_54;
                      }
LABEL_49:
                      p_list = __asan_report_load8(v14);
                      goto LABEL_50;
                    }
                  }
                  v14 = (unsigned __int64)other;
                  __asan_report_load8(other);
                  goto LABEL_49;
                }
                if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
                {
                  v10->parent_ = &v5->holder.root;
                  goto LABEL_12;
                }
LABEL_43:
                __asan_report_store8();
                goto LABEL_44;
              }
LABEL_42:
              __asan_report_load8(p_left);
              goto LABEL_43;
            }
LABEL_41:
            __asan_report_load8(p_left);
            goto LABEL_42;
          }
LABEL_40:
          __asan_report_load8(p_left);
          goto LABEL_41;
        }
LABEL_39:
        __asan_report_load8(p_left);
        goto LABEL_40;
      }
    }
    __asan_report_load8(p_left);
    goto LABEL_39;
  }
  return this;
};

// Line 511: range 0000000019BDB410-0000000019BDB64C
boost::beast::string_view __fastcall boost::beast::http::basic_fields<std::allocator<char>>::operator[](
        const boost::beast::http::basic_fields<std::allocator<char> > *const this,
        boost::beast::http::field name)
{
  const boost::beast::http::basic_fields<std::allocator<char> > *v2; // r13
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbx
  boost::intrusive::detail::uncast_types<const boost::intrusive::list_node<void*>*>::non_const_pointer v6; // rax
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v7; // rdi
  boost::beast::string_view result; // rax
  __int64 v9; // rax
  boost::intrusive::list_node<void*> *ptr; // [rsp+18h] [rbp-80h] BYREF
  char v11[120]; // [rsp+20h] [rbp-78h] BYREF

  v2 = this;
  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const boost::beast::http::basic_fields<std::allocator<char> > *const)64;
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v3 = v9;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 6 it:515";
  *(_QWORD *)(v3 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::operator[];
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( name == unknown_3 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "name != field::unknown",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/fields.hpp",
      0x202u,
      "const string_view boost::beast::http::basic_fields<Allocator>::operator[](boost::beast::http::field) const [with A"
      "llocator = std::allocator<char>; boost::beast::string_view = boost::basic_string_view<char, std::char_traits<char> >]");
  }
  if ( !(_BYTE)`guard variable for'boost::beast::http::detail::get_field_table(void)::tab )
  {
    this = (const boost::beast::http::basic_fields<std::allocator<char> > *const)&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab;
    if ( __cxa_guard_acquire(&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab) )
    {
      boost::beast::http::detail::field_table::field_table(&boost::beast::http::detail::get_field_table(void)::tab);
      this = (const boost::beast::http::basic_fields<std::allocator<char> > *const)&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab;
      __cxa_guard_release(&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
    }
  }
  if ( (unsigned __int16)name > xref )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "static_cast<unsigned>(f) < v.size()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/field.ipp",
      0x212u,
      "boost::beast::string_view boost::beast::http::detail::to_string(boost::beast::http::field)");
  }
  v5 = (unsigned __int64)&boost::beast::http::detail::get_field_table(void)::tab + 16 * (unsigned __int16)name;
  if ( *(_WORD *)((v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load16(v5);
    goto LABEL_18;
  }
  boost::beast::http::basic_fields<std::allocator<char>>::find(
    (const boost::beast::http::basic_fields<std::allocator<char> > *const)(v3 + 32),
    (boost::beast::string_view)__PAIR128__(*(_QWORD *)v5, (unsigned __int64)v2),
    *(_QWORD *)(v5 + 8));
  ptr = &v2->list_.data_.root_plus_size_.m_header;
  v6 = boost::intrusive::detail::uncast<boost::intrusive::list_node<void *> const*>((const boost::intrusive::list_node<void*> *const *)&ptr);
  v7 = *(const boost::beast::http::basic_fields<std::allocator<char> >::value_type **)(v3 + 32);
  if ( v7 == (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)v6 )
  {
LABEL_18:
    result.ptr_ = 0LL;
    result.len_ = 0LL;
    goto LABEL_9;
  }
  if ( !v7 )
  {
    __asan_handle_no_return(0LL);
    __assert_fail(
      off_1B5D9D60,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x3Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePtr,"
      " Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::elem"
      "ent; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 1; boost:"
      ":intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocator<char> "
      ">::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::list_node<void*>*]");
  }
  result = boost::beast::http::basic_fields<std::allocator<char>>::value_type::value(v7 + 8);
LABEL_9:
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 601: range 0000000019D08528-0000000019D08C69
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::set(
        boost::beast::http::basic_fields<std::allocator<char> > *const this,
        boost::beast::http::field name,
        const boost::beast::string_param *value)
{
  const char *ptr; // r12
  std::size_t len; // r13
  boost::beast::string_view *v5; // rbx
  boost::beast::string_view v6; // r8
  boost::beast::http::basic_fields<std::allocator<char> >::element *v7; // rax

  if ( name == unknown_3 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "name != field::unknown",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/fields.hpp",
      0x25Cu,
      "void boost::beast::http::basic_fields<Allocator>::set(boost::beast::http::field, const boost::beast::string_param&"
      ") [with Allocator = std::allocator<char>]");
  }
  if ( *(_WORD *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load16(value);
  }
  else
  {
    ptr = value->sv_.ptr_;
    len = value->sv_.len_;
    if ( (_BYTE)`guard variable for'boost::beast::http::detail::get_field_table(void)::tab )
      goto LABEL_4;
  }
  if ( __cxa_guard_acquire(&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab) )
  {
    boost::beast::http::detail::field_table::field_table(&boost::beast::http::detail::get_field_table(void)::tab);
    __cxa_guard_release(&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
  }
LABEL_4:
  if ( (unsigned __int16)name > xref )
  {
    __asan_handle_no_return((unsigned __int16)name);
    __assert_fail(
      "static_cast<unsigned>(f) < v.size()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/field.ipp",
      0x212u,
      "boost::beast::string_view boost::beast::http::detail::to_string(boost::beast::http::field)");
  }
  v5 = &boost::beast::http::detail::get_field_table(void)::tab.by_name_._M_elems[(unsigned __int16)name];
  if ( *(_WORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load16((char *)&boost::beast::http::detail::get_field_table(void)::tab + 16 * (unsigned __int16)name);
    JUMPOUT(0x19D08659LL);
  }
  v6.ptr_ = ptr;
  v6.len_ = len;
  v7 = boost::beast::http::basic_fields<std::allocator<char>>::new_element(this, name, *v5, v6);
  boost::beast::http::basic_fields<std::allocator<char>>::set_element(this, v7);
};

// Line 635: range 0000000019D0BFE2-0000000019D0C1F1
// local variable allocation has failed, the output may be wrong!
std::size_t __fastcall boost::beast::http::basic_fields<std::allocator<char>>::erase(
        boost::beast::http::basic_fields<std::allocator<char> > *const this,
        boost::beast::http::field name)
{
  __int64 v3; // rdi
  std::size_t result; // rax
  boost::beast::http::basic_fields<std::allocator<char> > *v5; // rdi

  if ( name == unknown_3 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "name != field::unknown",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/fields.hpp",
      0x27Eu,
      "std::size_t boost::beast::http::basic_fields<Allocator>::erase(boost::beast::http::field) [with Allocator = std::a"
      "llocator<char>; std::size_t = long unsigned int]");
  }
  if ( !(_BYTE)`guard variable for'boost::beast::http::detail::get_field_table(void)::tab
    && __cxa_guard_acquire(&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab) )
  {
    boost::beast::http::detail::field_table::field_table(&boost::beast::http::detail::get_field_table(void)::tab);
    __cxa_guard_release(&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
  }
  if ( (unsigned __int16)name > xref )
  {
    __asan_handle_no_return((unsigned __int16)name);
    __assert_fail(
      "static_cast<unsigned>(f) < v.size()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/field.ipp",
      0x212u,
      "boost::beast::string_view boost::beast::http::detail::to_string(boost::beast::http::field)");
  }
  v3 = 16LL * (unsigned __int16)name;
  if ( !*(_WORD *)((((unsigned __int64)&boost::beast::http::detail::get_field_table(void)::tab + v3) >> 3) + 0x7FFF8000) )
    return boost::beast::http::basic_fields<std::allocator<char>>::erase(
             this,
             boost::beast::http::detail::get_field_table(void)::tab.by_name_._M_elems[(unsigned __int16)name]);
  v5 = (boost::beast::http::basic_fields<std::allocator<char> > *)((char *)&boost::beast::http::detail::get_field_table(void)::tab
                                                                 + v3);
  __asan_report_load16(v5);
  boost::beast::http::basic_fields<std::allocator<char>>::set_content_length_impl(
    v5,
    (const boost::optional<long unsigned int> *)name);
  return result;
};

// Line 644: range 0000000019D0B0D8-0000000019D0BFE0
// local variable allocation has failed, the output may be wrong!
std::size_t __fastcall boost::beast::http::basic_fields<std::allocator<char>>::erase(
        boost::beast::http::basic_fields<std::allocator<char> > *const this,
        boost::beast::string_view name)
{
  const char *v2; // r14
  std::size_t v3; // r12
  std::size_t len; // rbp
  _DWORD *v5; // r15
  __int64 v6; // rsi
  char *v7; // rsi
  boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *v8; // rbp
  boost::intrusive::rbtree_node<void*> **p_ptr; // rdi
  boost::intrusive::rbtree_node<void*>::node_ptr i; // rbp
  __int64 v11; // rax
  boost::beast::string_view v12; // rax
  boost::beast::string_view v13; // rax
  unsigned int v14; // eax
  boost::beast::string_view v15; // rax
  const char *v16; // rdi
  unsigned int v17; // eax
  boost::intrusive::rbtree_node<void*> *right; // rax
  boost::beast::string_view v19; // rax
  const char *v20; // r15
  boost::beast::string_view v21; // rax
  boost::beast::string_view v22; // rax
  const char *v23; // r15
  boost::beast::string_view v24; // rax
  boost::beast::string_view v25; // rax
  boost::beast::string_view v26; // rax
  unsigned int v27; // eax
  boost::intrusive::rbtree_node<void*>::node_ptr *p_right; // rdi
  boost::intrusive::rbtree_node<void*>::node_ptr v29; // r12
  boost::beast::string_view v30; // rax
  bool v31; // al
  boost::beast::string_view v32; // rax
  boost::intrusive::rbtree_node<void*> *left; // rax
  const char *v34; // r14
  std::size_t v35; // rbp
  boost::beast::string_view v36; // rax
  unsigned __int64 v37; // rbp
  boost::intrusive::rbtree_node<void*>::node_ptr *p_left; // rdi
  boost::intrusive::rbtree_node<void*>::node_ptr v39; // r12
  boost::beast::string_view v40; // rax
  bool v41; // al
  boost::beast::string_view v42; // rax
  boost::intrusive::rbtree_node<void*> *v43; // rax
  const char *v44; // r15
  std::size_t v45; // r13
  boost::beast::string_view v46; // rax
  _QWORD *v47; // r15
  boost::intrusive::detail::uncast_types<const boost::intrusive::rbtree_node<void*>*>::non_const_pointer v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  _QWORD *v52; // rdi
  unsigned __int64 v53; // rdx
  boost::intrusive::rbtree_node<void*>::node_ptr *v54; // rdi
  boost::intrusive::rbtree_node<void*>::node_ptr v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // r8
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // r9
  __int64 v70; // r9
  unsigned __int64 v71; // r8
  __int64 v72; // rax
  char v73; // dl
  int v74; // edx
  char v75; // cl
  char *v76; // rdi
  __int64 v77; // rdx
  unsigned __int64 v78; // rax
  __int64 v79; // rdi
  boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *v80; // r9
  boost::intrusive::rbtree_node<void*> *v81; // r9
  boost::intrusive::rbtree_node<void*> *v82; // r10
  unsigned __int64 *v83; // rsi
  char v84; // al
  std::size_t result; // rax
  __gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::beast::string_view,boost::beast::string_view) const::<lambda(char,char)> > v86; // [rsp+0h] [rbp-178h]
  boost::intrusive::detail::uncast_types<const boost::intrusive::rbtree_node<void*>*>::non_const_pointer v87; // [rsp+8h] [rbp-170h]
  unsigned __int64 v89; // [rsp+18h] [rbp-160h]
  char v90; // [rsp+2Fh] [rbp-149h]
  boost::intrusive::rbtree_node<void*>::node_ptr v91; // [rsp+30h] [rbp-148h]
  unsigned __int64 v93; // [rsp+40h] [rbp-138h]
  __int64 v94; // [rsp+58h] [rbp-120h]
  boost::intrusive::detail::uncast_types<const boost::intrusive::rbtree_node<void*>*>::non_const_pointer v95; // [rsp+60h] [rbp-118h]
  boost::intrusive::rbtree_node<void*> *v96; // [rsp+68h] [rbp-110h]
  boost::intrusive::rbtree_node<void*> *ptr; // [rsp+78h] [rbp-100h] BYREF
  char v98[248]; // [rsp+80h] [rbp-F8h] BYREF

  v3 = (std::size_t)name.ptr_;
  len = name.len_;
  v89 = (unsigned __int64)v98;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_2(192LL);
    if ( v11 )
      v89 = v11;
  }
  *(_QWORD *)v89 = 1102416563LL;
  *(_QWORD *)(v89 + 8) = "4 32 8 5 n:647 64 16 1 p 96 16 8 name:645 128 24 4 info";
  *(_QWORD *)(v89 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::erase;
  v5 = (_DWORD *)(v89 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_QWORD *)(v89 + 96) = v6;
  *(_QWORD *)(v89 + 104) = len;
  *(_QWORD *)(v89 + 32) = 0LL;
  v7 = (char *)this;
  v93 = v89 + 32;
  v8 = &this->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void>;
  ptr = &this->set_.holder.root;
  p_ptr = &ptr;
  v87 = boost::intrusive::detail::uncast<boost::intrusive::rbtree_node<void *> const*>((const boost::intrusive::rbtree_node<void*> *const *)&ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> >> 3)
                + 0x7FFF8000) )
  {
    p_ptr = &v8->holder.root.parent_;
    __asan_report_load8(v8);
LABEL_7:
    __asan_handle_no_return(p_ptr);
    __assert_fail(
      off_1B6344E0,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x3Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePtr,"
      " Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::elem"
      "ent; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 3; boos"
      "t::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocator<char"
      "> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtree_node<void*>*]");
  }
  for ( i = this->set_.holder.root.parent_; i; i = right )
  {
    if ( i == (boost::intrusive::rbtree_node<void*>::node_ptr)16 )
      goto LABEL_7;
    if ( *(_WORD *)(((v89 + 96) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load16(v89 + 96);
    }
    else
    {
      v2 = *(const char **)(v89 + 96);
      v3 = *(_QWORD *)(v89 + 104);
      v19 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&i[1]);
      if ( v19.len_ < v3 )
      {
        v3 = 1LL;
        goto LABEL_22;
      }
    }
    v12 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&i[1]);
    if ( v3 >= v12.len_ )
    {
      v13 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&i[1]);
      v7 = (char *)&v13.ptr_[v13.len_];
      LOBYTE(v14) = std::__lexicographical_compare_impl<char const*,char const*,__gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::basic_string_view<char,std::char_traits<char>>,boost::basic_string_view<char,std::char_traits<char>>)::{lambda(char,char)#1}>>(
                      v13.ptr_,
                      &v13.ptr_[v13.len_],
                      v2,
                      &v2[v3],
                      v86);
      v3 = v14;
    }
    else
    {
      v3 = 0LL;
    }
LABEL_22:
    if ( (_BYTE)v3 )
    {
      v20 = *(const char **)(v89 + 96);
      v2 = *(const char **)(v89 + 104);
      v16 = (const char *)&i[1];
      v21 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&i[1]);
      if ( v21.len_ >= (unsigned __int64)v2 )
      {
        v16 = (const char *)&i[1];
        v22 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&i[1]);
        if ( (unsigned __int64)v2 >= v22.len_ )
        {
          v15 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&i[1]);
          v16 = v15.ptr_;
          v7 = (char *)&v15.ptr_[v15.len_];
          LOBYTE(v17) = std::__lexicographical_compare_impl<char const*,char const*,__gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::basic_string_view<char,std::char_traits<char>>,boost::basic_string_view<char,std::char_traits<char>>)::{lambda(char,char)#1}>>(
                          v15.ptr_,
                          &v15.ptr_[v15.len_],
                          v20,
                          &v2[(_QWORD)v20],
                          v86);
          v3 = v17;
        }
        else
        {
          v3 = 0LL;
        }
      }
      if ( !(_BYTE)v3 )
      {
        __asan_handle_no_return(v16);
        __assert_fail(
          "comp(x, upper_key)",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/bstree_algorithms.hpp",
          0x31Cu,
          "static std::pair<typename NodeTraits::node_ptr, typename NodeTraits::node_ptr> boost::intrusive::bstree_algori"
          "thms<NodeTraits>::bounded_range(const const_node_ptr&, const KeyType&, const KeyType&, KeyNodePtrCompare, bool"
          ", bool) [with KeyType = boost::basic_string_view<char, std::char_traits<char> >; KeyNodePtrCompare = boost::in"
          "trusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare, boost:"
          ":intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element, boost::intrusive::rbtre"
          "e_node_traits<void*, false>, boost::intrusive::normal_link, boost::intrusive::dft_tag, 3>, boost::move_detail:"
          ":identity<boost::beast::http::basic_fields<std::allocator<char> >::element> >; NodeTraits = boost::intrusive::"
          "rbtree_node_traits<void*, false>; typename NodeTraits::node_ptr = boost::intrusive::rbtree_node<void*>*; boost"
          "::intrusive::bstree_algorithms<NodeTraits>::const_node_ptr = const boost::intrusive::rbtree_node<void*>*]");
      }
      p_ptr = &i->right_;
      if ( !*(_BYTE *)(((unsigned __int64)&i->right_ >> 3) + 0x7FFF8000) )
      {
        right = i->right_;
        continue;
      }
      __asan_report_load8(p_ptr);
    }
    v23 = *(const char **)(v89 + 96);
    v2 = *(const char **)(v89 + 104);
    v24 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&i[1]);
    if ( (unsigned __int64)v2 >= v24.len_ )
    {
      v25 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&i[1]);
      if ( (unsigned __int64)v2 <= v25.len_ )
      {
        v26 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&i[1]);
        v7 = (char *)&v2[(_QWORD)v23];
        LOBYTE(v27) = std::__lexicographical_compare_impl<char const*,char const*,__gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::basic_string_view<char,std::char_traits<char>>,boost::basic_string_view<char,std::char_traits<char>>)::{lambda(char,char)#1}>>(
                        v23,
                        &v2[(_QWORD)v23],
                        v26.ptr_,
                        &v26.ptr_[v26.len_],
                        v86);
        v3 = v27;
      }
    }
    else
    {
      v3 = 1LL;
    }
    if ( !(_BYTE)v3 )
      goto LABEL_36;
    p_ptr = &i->left_;
    if ( *(_BYTE *)(((unsigned __int64)&i->left_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_ptr);
LABEL_36:
      v90 = v3;
      p_right = &i->right_;
      if ( *(_BYTE *)(((unsigned __int64)&i->right_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_right);
LABEL_39:
        __asan_handle_no_return(p_right);
        __assert_fail(
          off_1B6344E0,
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
          0x3Eu,
          "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, Node"
          "Ptr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char>"
          " >::element; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Ty"
          "pe = 3; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std"
          "::allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intru"
          "sive::rbtree_node<void*>*]");
      }
      v29 = i->right_;
      v91 = i;
      while ( 2 )
      {
        if ( !v29 )
          goto LABEL_55;
        if ( v29 == (boost::intrusive::rbtree_node<void*>::node_ptr)16 )
          goto LABEL_39;
        v34 = *(const char **)(v89 + 96);
        v35 = *(_QWORD *)(v89 + 104);
        v36 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&v29[1]);
        if ( v35 >= v36.len_ )
        {
          v30 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&v29[1]);
          if ( v35 <= v30.len_ )
          {
            v32 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&v29[1]);
            v7 = (char *)&v34[v35];
            v31 = std::__lexicographical_compare_impl<char const*,char const*,__gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::basic_string_view<char,std::char_traits<char>>,boost::basic_string_view<char,std::char_traits<char>>)::{lambda(char,char)#1}>>(
                    v34,
                    &v34[v35],
                    v32.ptr_,
                    &v32.ptr_[v32.len_],
                    v86);
          }
          else
          {
            v31 = v90;
          }
        }
        else
        {
          v31 = 1;
        }
        if ( v31 )
        {
          p_right = &v29->left_;
          if ( *(_BYTE *)(((unsigned __int64)&v29->left_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(p_right);
            goto LABEL_52;
          }
          left = v29->left_;
          v87 = v29;
        }
        else
        {
LABEL_52:
          p_right = &v29->right_;
          if ( *(_BYTE *)(((unsigned __int64)&v29->right_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(p_right);
LABEL_55:
            v37 = (unsigned __int64)v91;
            p_left = &v91->left_;
            if ( *(_BYTE *)(((unsigned __int64)&v91->left_ >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(p_left);
LABEL_58:
              __asan_handle_no_return(p_left);
              __assert_fail(
                off_1B6344E0,
                "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/det"
                "ail/hook_traits.hpp",
                0x3Eu,
                "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T"
                ", NodePtr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::all"
                "ocator<char> >::element; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_ta"
                "g; unsigned int Type = 3; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast"
                "::http::basic_fields<std::allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, "
                "Type>::node_ptr = boost::intrusive::rbtree_node<void*>*]");
            }
            v39 = v91->left_;
            while ( 2 )
            {
              if ( !v39 )
              {
LABEL_74:
                v47 = (_QWORD *)(v89 >> 3);
                v48 = v87;
                goto LABEL_76;
              }
              if ( v39 == (boost::intrusive::rbtree_node<void*>::node_ptr)16 )
                goto LABEL_58;
              v44 = *(const char **)(v89 + 96);
              v45 = *(_QWORD *)(v89 + 104);
              v46 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&v39[1]);
              if ( v46.len_ >= v45 )
              {
                v40 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&v39[1]);
                if ( v45 >= v40.len_ )
                {
                  v42 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&v39[1]);
                  v7 = (char *)&v42.ptr_[v42.len_];
                  v41 = std::__lexicographical_compare_impl<char const*,char const*,__gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::basic_string_view<char,std::char_traits<char>>,boost::basic_string_view<char,std::char_traits<char>>)::{lambda(char,char)#1}>>(
                          v42.ptr_,
                          &v42.ptr_[v42.len_],
                          v44,
                          &v44[v45],
                          v86);
                }
                else
                {
                  v41 = v90;
                }
              }
              else
              {
                v41 = 1;
              }
              if ( v41 )
              {
                p_left = &v39->right_;
                if ( *(_BYTE *)(((unsigned __int64)&v39->right_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(p_left);
                  goto LABEL_71;
                }
                v43 = v39->right_;
              }
              else
              {
LABEL_71:
                p_left = &v39->left_;
                if ( *(_BYTE *)(((unsigned __int64)&v39->left_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(p_left);
                  goto LABEL_74;
                }
                v43 = v39->left_;
                v37 = (unsigned __int64)v39;
              }
              v39 = v43;
              continue;
            }
          }
          left = v29->right_;
        }
        v29 = left;
        continue;
      }
    }
    right = i->left_;
    v87 = i;
  }
  v47 = (_QWORD *)(v89 >> 3);
  v48 = v87;
  v37 = (unsigned __int64)v87;
LABEL_76:
  *(_QWORD *)(v89 + 64) = v37;
  *(_QWORD *)(v89 + 72) = v48;
  v95 = v48;
  v94 = v37;
  while ( 2 )
  {
    v51 = v94;
    if ( (boost::intrusive::detail::uncast_types<const boost::intrusive::rbtree_node<void*>*>::non_const_pointer)v94 != v95 )
    {
      v96 = (boost::intrusive::rbtree_node<void*> *)v94;
      v79 = v94 + 16;
      if ( !*(_BYTE *)(((unsigned __int64)(v94 + 16) >> 3) + 0x7FFF8000) )
      {
        v50 = *(_QWORD *)(v94 + 16);
        if ( v50 )
        {
          v79 = v50 + 8;
          if ( !*(_BYTE *)(((unsigned __int64)(v50 + 8) >> 3) + 0x7FFF8000) )
          {
            v49 = *(_QWORD *)(v50 + 8);
            goto LABEL_80;
          }
          goto LABEL_78;
        }
LABEL_83:
        v52 = (_QWORD *)v51;
        if ( !*(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
        {
          v53 = *(_QWORD *)v51;
          v50 = v51;
          goto LABEL_88;
        }
        __asan_report_load8(v51);
LABEL_86:
        __asan_report_load8(v52);
        do
        {
          v50 = v53;
          v53 = *(_QWORD *)v53;
LABEL_88:
          v52 = (_QWORD *)(v53 + 16);
          if ( *(_BYTE *)(((v53 + 16) >> 3) + 0x7FFF8000) )
            goto LABEL_86;
          if ( *(_QWORD *)(v53 + 16) != v50 )
            goto LABEL_92;
        }
        while ( !*(_BYTE *)((v53 >> 3) + 0x7FFF8000) );
        v50 = __asan_report_load8(v53);
LABEL_92:
        v54 = (boost::intrusive::rbtree_node<void*>::node_ptr *)(v50 + 16);
        if ( !*(_BYTE *)(((unsigned __int64)(v50 + 16) >> 3) + 0x7FFF8000) )
        {
          if ( v53 != *(_QWORD *)(v50 + 16) )
            v50 = v53;
          goto LABEL_95;
        }
        __asan_report_load8(v54);
LABEL_100:
        __asan_report_load8(v54);
LABEL_101:
        v56 = __asan_report_load8(v54);
        while ( 1 )
        {
          v56 = *(_QWORD *)(v56 + 8);
LABEL_103:
          if ( !v56 )
            goto LABEL_116;
          if ( *(_BYTE *)(((unsigned __int64)(v56 + 8) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v56 + 8);
            goto LABEL_106;
          }
        }
      }
      __asan_report_load8(v79);
LABEL_78:
      __asan_report_load8(v79);
      while ( 1 )
      {
        v50 = v49;
        v49 = *(_QWORD *)(v49 + 8);
LABEL_80:
        if ( !v49 )
          break;
        if ( *(_BYTE *)(((unsigned __int64)(v49 + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v49 + 8);
          goto LABEL_83;
        }
      }
LABEL_95:
      v94 = v50;
      v37 = (unsigned __int64)v96;
      ptr = v96;
      v54 = &v96->right_;
      if ( *(_BYTE *)(((unsigned __int64)&v96->right_ >> 3) + 0x7FFF8000) )
        goto LABEL_100;
      v55 = v96->right_;
      if ( v55 )
      {
        v54 = &v55->left_;
        if ( !*(_BYTE *)(((unsigned __int64)&v55->left_ >> 3) + 0x7FFF8000) )
        {
          v56 = (__int64)v55->left_;
          goto LABEL_103;
        }
        goto LABEL_101;
      }
LABEL_106:
      if ( !*(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
      {
        v57 = *(_QWORD *)v37;
        v58 = v37;
        goto LABEL_111;
      }
      __asan_report_load8(v37);
LABEL_109:
      v57 = __asan_report_load8(v59);
      do
      {
        v58 = v57;
        v57 = *(_QWORD *)v57;
LABEL_111:
        v59 = v57 + 16;
        v7 = (char *)((v57 + 16) >> 3);
        if ( v7[2147450880] )
          goto LABEL_109;
        if ( *(_QWORD *)(v57 + 16) != v58 )
          goto LABEL_115;
      }
      while ( !*(_BYTE *)((v57 >> 3) + 0x7FFF8000) );
      __asan_report_load8(v57);
LABEL_115:
      v60 = v58 + 16;
      if ( *(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
      {
        v62 = __asan_report_load8(v60);
      }
      else
      {
LABEL_116:
        v61 = (unsigned __int64)&this->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void>;
        v62 = v37 + 8;
        if ( !*(_BYTE *)(((v37 + 8) >> 3) + 0x7FFF8000) )
        {
          v63 = *(_QWORD *)(v37 + 8);
          v7 = *(char **)(v37 + 16);
          if ( v63 )
          {
            if ( v7 )
            {
              v64 = (__int64)(v7 + 8);
              if ( !*(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
              {
                v65 = *((_QWORD *)v7 + 1);
                v66 = *(_QWORD *)(v37 + 16);
                goto LABEL_125;
              }
              goto LABEL_123;
            }
            v67 = *(_QWORD *)(v37 + 8);
            v66 = v37;
LABEL_130:
            if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v37);
LABEL_180:
              __asan_report_load8(v69);
LABEL_181:
              __asan_report_store8();
LABEL_182:
              __asan_report_store8();
LABEL_183:
              __asan_report_store8();
LABEL_184:
              __asan_report_store8();
LABEL_185:
              __asan_report_load8(v66);
LABEL_186:
              v61 = v71;
              __asan_report_load8(v71);
LABEL_187:
              __asan_handle_no_return(v61);
              __assert_fail(
                "NodeTraits::get_left(x_parent) == y",
                "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/bst"
                "ree_algorithms.hpp",
                0x600u,
                "static void boost::intrusive::bstree_algorithms<NodeTraits>::erase(boost::intrusive::bstree_algorithms<N"
                "odeTraits>::node_ptr, boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr, boost::intrusive::bstre"
                "e_algorithms<NodeTraits>::data_for_rebalance&) [with NodeTraits = boost::intrusive::rbtree_node_traits<v"
                "oid*, false>; boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr = boost::intrusive::rbtree_node<"
                "void*>*; boost::intrusive::bstree_algorithms<NodeTraits>::data_for_rebalance = boost::intrusive::data_fo"
                "r_rebalance_t<boost::intrusive::rbtree_node<void*>*>; typename NodeTraits::node_ptr = boost::intrusive::"
                "rbtree_node<void*>*]");
            }
            v68 = *(_QWORD *)v37;
            v69 = *(_QWORD *)v37 + 8LL;
            if ( *(_BYTE *)((v69 >> 3) + 0x7FFF8000) )
              goto LABEL_180;
            v70 = *(_QWORD *)(v68 + 8);
            if ( v37 == v66 )
              goto LABEL_197;
            if ( *(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
              goto LABEL_181;
            *(_QWORD *)v63 = v66;
            if ( *(_BYTE *)(((v66 + 8) >> 3) + 0x7FFF8000) )
              goto LABEL_182;
            *(_QWORD *)(v66 + 8) = v63;
            if ( v7 == (char *)v66 )
              goto LABEL_189;
            if ( *(_BYTE *)(((v66 + 16) >> 3) + 0x7FFF8000) )
              goto LABEL_183;
            *(_QWORD *)(v66 + 16) = v7;
            if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
              goto LABEL_184;
            *(_QWORD *)v7 = v66;
            if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
              goto LABEL_185;
            v7 = *(char **)v66;
            v71 = *(_QWORD *)v66 + 8LL;
            if ( *(_BYTE *)((v71 >> 3) + 0x7FFF8000) )
              goto LABEL_186;
            if ( v66 != *((_QWORD *)v7 + 1) )
              goto LABEL_187;
            if ( v67 )
            {
              if ( !*(_BYTE *)((v67 >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)v67 = v7;
                goto LABEL_144;
              }
              v61 = v67;
              __asan_report_store8();
LABEL_189:
              v7 = (char *)v66;
            }
            else
            {
LABEL_144:
              *((_QWORD *)v7 + 1) = v67;
            }
            if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
            {
              v61 = v66;
              __asan_report_store8();
            }
            else
            {
              *(_QWORD *)v66 = v68;
              if ( v61 != v68 )
              {
                if ( v37 == v70 )
                {
                  *(_QWORD *)(v68 + 8) = v66;
                  goto LABEL_149;
                }
LABEL_194:
                if ( !*(_BYTE *)(((v68 + 16) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(v68 + 16) = v66;
                  goto LABEL_149;
                }
                v61 = v68 + 16;
                __asan_report_store8();
LABEL_197:
                if ( v67 )
                {
                  if ( !*(_BYTE *)((v67 >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)v67 = v68;
                    goto LABEL_200;
                  }
                  v61 = v67;
                  __asan_report_store8();
LABEL_209:
                  if ( !*(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
                  {
                    this->set_.holder.root.parent_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v67;
                    goto LABEL_203;
                  }
                  __asan_report_store8();
                }
                else
                {
LABEL_200:
                  if ( v61 == v68 )
                    goto LABEL_209;
                  if ( v37 == v70 )
                  {
                    *(_QWORD *)(v68 + 8) = v67;
                    goto LABEL_203;
                  }
                }
                if ( *(_BYTE *)(((v68 + 16) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store8();
                }
                else
                {
                  *(_QWORD *)(v68 + 16) = v67;
LABEL_203:
                  v80 = (boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *)(v61 + 8);
                  if ( !*(_BYTE *)(((v61 + 8) >> 3) + 0x7FFF8000) )
                  {
                    if ( v37 != *(_QWORD *)(v61 + 8) )
                      goto LABEL_205;
                    goto LABEL_216;
                  }
                }
                v61 = (unsigned __int64)v80;
                v66 = __asan_report_load8(v80);
LABEL_216:
                if ( v63 )
                {
                  __asan_handle_no_return(v61);
                  __assert_fail(
                    "!z_left",
                    "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive"
                    "/bstree_algorithms.hpp",
                    0x616u,
                    "static void boost::intrusive::bstree_algorithms<NodeTraits>::erase(boost::intrusive::bstree_algorith"
                    "ms<NodeTraits>::node_ptr, boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr, boost::intrusiv"
                    "e::bstree_algorithms<NodeTraits>::data_for_rebalance&) [with NodeTraits = boost::intrusive::rbtree_n"
                    "ode_traits<void*, false>; boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr = boost::intrusi"
                    "ve::rbtree_node<void*>*; boost::intrusive::bstree_algorithms<NodeTraits>::data_for_rebalance = boost"
                    "::intrusive::data_for_rebalance_t<boost::intrusive::rbtree_node<void*>*>; typename NodeTraits::node_"
                    "ptr = boost::intrusive::rbtree_node<void*>*]");
                }
                if ( v7 )
                {
                  if ( !*(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
                  {
                    v81 = (boost::intrusive::rbtree_node<void*> *)*((_QWORD *)v7 + 1);
                    v82 = (boost::intrusive::rbtree_node<void*> *)v7;
                    goto LABEL_223;
                  }
                  v61 = (unsigned __int64)(v7 + 8);
                  v66 = __asan_report_load8(v7 + 8);
                  while ( 1 )
                  {
                    v82 = v81;
                    v81 = v81->left_;
LABEL_223:
                    if ( !v81 )
                      break;
                    if ( *(_BYTE *)(((unsigned __int64)&v81->left_ >> 3) + 0x7FFF8000) )
                    {
                      v61 = (unsigned __int64)&v81->left_;
                      v66 = __asan_report_load8(&v81->left_);
                      goto LABEL_226;
                    }
                  }
                }
                else
                {
LABEL_226:
                  v82 = (boost::intrusive::rbtree_node<void*> *)v68;
                }
                *(_QWORD *)(v61 + 8) = v82;
LABEL_205:
                if ( *(_BYTE *)(((v61 + 16) >> 3) + 0x7FFF8000) )
                {
                  v61 += 16LL;
                  v66 = __asan_report_load8(v61);
                }
                else if ( v37 != *(_QWORD *)(v61 + 16) )
                {
                  v7 = (char *)v68;
                  goto LABEL_149;
                }
                if ( v7 )
                {
                  __asan_handle_no_return(v61);
                  __assert_fail(
                    "!z_right",
                    "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive"
                    "/bstree_algorithms.hpp",
                    0x61Du,
                    "static void boost::intrusive::bstree_algorithms<NodeTraits>::erase(boost::intrusive::bstree_algorith"
                    "ms<NodeTraits>::node_ptr, boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr, boost::intrusiv"
                    "e::bstree_algorithms<NodeTraits>::data_for_rebalance&) [with NodeTraits = boost::intrusive::rbtree_n"
                    "ode_traits<void*, false>; boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr = boost::intrusi"
                    "ve::rbtree_node<void*>*; boost::intrusive::bstree_algorithms<NodeTraits>::data_for_rebalance = boost"
                    "::intrusive::data_for_rebalance_t<boost::intrusive::rbtree_node<void*>*>; typename NodeTraits::node_"
                    "ptr = boost::intrusive::rbtree_node<void*>*]");
                }
                if ( v63 )
                {
                  v83 = (unsigned __int64 *)(v63 + 16);
                  if ( !*(_BYTE *)(((v63 + 16) >> 3) + 0x7FFF8000) )
                  {
                    v83 = *(unsigned __int64 **)(v63 + 16);
                    goto LABEL_236;
                  }
                  v61 = v63 + 16;
                  v66 = __asan_report_load8(v63 + 16);
                  while ( 1 )
                  {
                    v63 = (unsigned __int64)v83;
                    v83 = (unsigned __int64 *)v83[2];
LABEL_236:
                    if ( !v83 )
                      break;
                    if ( *(_BYTE *)(((unsigned __int64)(v83 + 2) >> 3) + 0x7FFF8000) )
                    {
                      v61 = (unsigned __int64)(v83 + 2);
                      v66 = __asan_report_load8(v83 + 2);
                      goto LABEL_239;
                    }
                  }
                }
                else
                {
LABEL_239:
                  v63 = v68;
                }
                *(_QWORD *)(v61 + 16) = v63;
                v7 = (char *)v68;
LABEL_149:
                *(_QWORD *)(v89 + 128) = v67;
                *(_QWORD *)(v89 + 144) = v66;
                if ( v67 )
                {
                  if ( *(_BYTE *)((v67 >> 3) + 0x7FFF8000) )
                  {
                    v61 = v67;
                    __asan_report_load8(v67);
LABEL_242:
                    __asan_handle_no_return(v61);
                    __assert_fail(
                      "!x || NodeTraits::get_parent(x) == x_parent",
                      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusi"
                      "ve/bstree_algorithms.hpp",
                      0x62Au,
                      "static void boost::intrusive::bstree_algorithms<NodeTraits>::erase(boost::intrusive::bstree_algori"
                      "thms<NodeTraits>::node_ptr, boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr, boost::intr"
                      "usive::bstree_algorithms<NodeTraits>::data_for_rebalance&) [with NodeTraits = boost::intrusive::rb"
                      "tree_node_traits<void*, false>; boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr = boost:"
                      ":intrusive::rbtree_node<void*>*; boost::intrusive::bstree_algorithms<NodeTraits>::data_for_rebalan"
                      "ce = boost::intrusive::data_for_rebalance_t<boost::intrusive::rbtree_node<void*>*>; typename NodeT"
                      "raits::node_ptr = boost::intrusive::rbtree_node<void*>*]");
                  }
                  if ( *(char **)v67 != v7 )
                    goto LABEL_242;
                }
                *(_QWORD *)(v89 + 136) = v7;
                v72 = *(_QWORD *)(v89 + 144);
                if ( v37 != v72 )
                {
                  v73 = *(_BYTE *)(((unsigned __int64)(v72 + 24) >> 3) + 0x7FFF8000);
                  if ( v73 && v73 <= 3 )
                  {
                    __asan_report_load4(v72 + 24);
                  }
                  else
                  {
                    v74 = *(_DWORD *)(v72 + 24);
                    v7 = (char *)(v37 + 24);
                    v75 = *(_BYTE *)(((v37 + 24) >> 3) + 0x7FFF8000);
                    if ( !v75 || v75 > 3 )
                    {
                      *(_DWORD *)(v72 + 24) = *(_DWORD *)(v37 + 24);
                      goto LABEL_158;
                    }
                  }
                  v61 = (unsigned __int64)v7;
                  __asan_report_load4(v7);
                }
                v84 = *(_BYTE *)(((v37 + 24) >> 3) + 0x7FFF8000);
                if ( v84 && v84 <= 3 )
                {
                  v61 = v37 + 24;
                  __asan_report_load4(v37 + 24);
                }
                else
                {
                  v74 = *(_DWORD *)(v37 + 24);
LABEL_158:
                  if ( !v74 )
                  {
LABEL_159:
                    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load8(this);
LABEL_251:
                      __asan_handle_no_return(this);
                      __assert_fail(
                        off_1B6344E0,
                        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intru"
                        "sive/detail/hook_traits.hpp",
                        0x3Eu,
                        "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtrait"
                        "s_base<T, NodePtr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic"
                        "_fields<std::allocator<char> >::element; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = "
                        "boost::intrusive::dft_tag; unsigned int Type = 3; boost::intrusive::bhtraits_base<T, NodePtr, Ta"
                        "g, Type>::pointer = boost::beast::http::basic_fields<std::allocator<char> >::element*; boost::in"
                        "trusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtree_node<void*>*]");
                    }
                    --this->set_.size_;
                    v7 = (char *)(v37 - 16);
                    if ( v37 == 16 )
                      goto LABEL_251;
                    if ( *(_BYTE *)((v93 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load8(v93);
                      __asan_handle_no_return(v93);
                      __assert_fail(
                        off_1B6344E0,
                        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intru"
                        "sive/detail/hook_traits.hpp",
                        0x4Eu,
                        "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr boost::intrusive::bhtrai"
                        "ts_base<T, NodePtr, Tag, Type>::to_node_ptr(boost::intrusive::bhtraits_base<T, NodePtr, Tag, Typ"
                        "e>::reference) [with T = boost::beast::http::basic_fields<std::allocator<char> >::element; NodeP"
                        "tr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 1"
                        "; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::list_node"
                        "<void*>*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference = boost::beast::http"
                        "::basic_fields<std::allocator<char> >::element&]");
                    }
                    ++*(_QWORD *)v93;
                    v76 = (char *)(v37 - 16);
                    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load8(v76);
LABEL_255:
                      __asan_handle_no_return(v76);
                      __assert_fail(
                        "!node_algorithms::inited(this->priv_value_traits().to_node_ptr(value))",
                        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/list.hpp",
                        0x51Bu,
                        "boost::intrusive::list_impl<ValueTraits, SizeType, ConstantTimeSize, HeaderHolder>::iterator boo"
                        "st::intrusive::list_impl<ValueTraits, SizeType, ConstantTimeSize, HeaderHolder>::iterator_to(boo"
                        "st::intrusive::list_impl<ValueTraits, SizeType, ConstantTimeSize, HeaderHolder>::reference) [wit"
                        "h ValueTraits = boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>"
                        " >::element, boost::intrusive::list_node_traits<void*>, boost::intrusive::normal_link, boost::in"
                        "trusive::dft_tag, 1>; SizeType = long unsigned int; bool ConstantTimeSize = false; HeaderHolder "
                        "= void; boost::intrusive::list_impl<ValueTraits, SizeType, ConstantTimeSize, HeaderHolder>::iter"
                        "ator = boost::intrusive::list_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fiel"
                        "ds<std::allocator<char> >::element, boost::intrusive::list_node_traits<void*>, boost::intrusive:"
                        ":normal_link, boost::intrusive::dft_tag, 1>, false>; boost::intrusive::list_impl<ValueTraits, Si"
                        "zeType, ConstantTimeSize, HeaderHolder>::reference = boost::beast::http::basic_fields<std::alloc"
                        "ator<char> >::element&]");
                    }
                    if ( !*(_QWORD *)(v37 - 16) )
                      goto LABEL_255;
                    ptr = (boost::intrusive::rbtree_node<void*> *)(v37 - 16);
                    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load8(v76);
LABEL_257:
                      __asan_report_load8(v76);
LABEL_258:
                      __asan_report_store8();
LABEL_259:
                      __asan_report_store8();
                      __asan_handle_no_return(v76);
                      __assert_fail(
                        off_1B6344E0,
                        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intru"
                        "sive/detail/hook_traits.hpp",
                        0x3Eu,
                        "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtrait"
                        "s_base<T, NodePtr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic"
                        "_fields<std::allocator<char> >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = bo"
                        "ost::intrusive::dft_tag; unsigned int Type = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag,"
                        " Type>::pointer = boost::beast::http::basic_fields<std::allocator<char> >::element*; boost::intr"
                        "usive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::list_node<void*>*]");
                    }
                    v77 = *(_QWORD *)(v37 - 16);
                    v76 = v7 + 8;
                    if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
                      goto LABEL_257;
                    v78 = *((_QWORD *)v7 + 1);
                    v76 = (char *)v78;
                    if ( *(_BYTE *)((v78 >> 3) + 0x7FFF8000) )
                      goto LABEL_258;
                    *(_QWORD *)v78 = v77;
                    v76 = (char *)(v77 + 8);
                    if ( *(_BYTE *)(((unsigned __int64)(v77 + 8) >> 3) + 0x7FFF8000) )
                      goto LABEL_259;
                    *(_QWORD *)(v77 + 8) = v78;
                    boost::beast::http::basic_fields<std::allocator<char>>::delete_element(
                      this,
                      (boost::beast::http::basic_fields<std::allocator<char> >::element *)v7);
                    continue;
                  }
                }
                boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_erasure_restore_invariants(
                  (boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)v61,
                  *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v89 + 128),
                  *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v89 + 136));
                goto LABEL_159;
              }
            }
            if ( *(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8();
              goto LABEL_194;
            }
            this->set_.holder.root.parent_ = (boost::intrusive::rbtree_node<void*>::node_ptr)v66;
            goto LABEL_149;
          }
LABEL_177:
          v67 = (unsigned __int64)v7;
          v66 = v37;
          goto LABEL_130;
        }
      }
      v64 = __asan_report_load8(v62);
LABEL_123:
      v61 = v64;
      __asan_report_load8(v64);
      while ( 1 )
      {
        v66 = v65;
        v65 = *(_QWORD *)(v65 + 8);
LABEL_125:
        if ( !v65 )
          break;
        if ( *(_BYTE *)(((v65 + 8) >> 3) + 0x7FFF8000) )
        {
          v61 = v65 + 8;
          v66 = __asan_report_load8(v65 + 8);
          break;
        }
      }
      if ( !*(_BYTE *)(((v66 + 16) >> 3) + 0x7FFF8000) )
      {
        v67 = *(_QWORD *)(v66 + 16);
        goto LABEL_130;
      }
      v61 = v66 + 16;
      __asan_report_load8(v66 + 16);
      goto LABEL_177;
    }
    break;
  }
  result = *(_QWORD *)(v89 + 32);
  if ( v98 == (char *)v89 )
  {
    v47[268431360] = 0LL;
    v47[268431361] = 0LL;
    v47[268431362] = 0LL;
  }
  else
  {
    *(_QWORD *)v89 = 1172321806LL;
    v47[268431360] = 0xF5F5F5F5F5F5F5F5LL;
    v47[268431361] = 0xF5F5F5F5F5F5F5F5LL;
    v47[268431362] = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 924: range 0000000019BDB652-0000000019BDBDDF
bool __fastcall boost::beast::http::basic_fields<std::allocator<char>>::get_chunked_impl(
        const boost::beast::http::basic_fields<std::allocator<char> > *const this)
{
  unsigned __int64 v1; // r13
  _DWORD *v2; // r12
  boost::beast::string_view v3; // rax
  const char *v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  char v7; // dl
  char i; // r8
  unsigned __int64 v9; // rdi
  char v10; // dl
  char v11; // r9
  __int64 v12; // rsi
  __int64 j; // rax
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  char v17; // cl
  unsigned __int64 v18; // rdi
  char v19; // dl
  bool result; // al
  unsigned __int64 v21; // rax
  char v22; // dl
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // r10
  unsigned __int64 v26; // rdi
  char v27; // dl
  char v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  char v32; // di
  char v33; // r9
  char k; // r8
  unsigned __int64 v35; // rax
  char v36; // dl
  unsigned __int64 v37; // rdi
  char v38; // dl
  char v39; // r9
  __int64 v40; // rsi
  int v41; // eax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  char v44; // cl
  unsigned __int64 v45; // rdi
  char v46; // dl
  boost::beast::string_view v47; // rdx
  _BYTE v48[344]; // [rsp+0h] [rbp-158h] BYREF

  v1 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v1 = v5;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 40 6 it:929 128 40 8 next:931 208 40 7 __x:924";
  *(_QWORD *)(v1 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::get_chunked_impl;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = 61937;
  v2[536862722] = -234881024;
  v2[536862723] = -218959118;
  v2[536862725] = -218959360;
  v2[536862726] = 62194;
  v2[536862727] = -218103808;
  v2[536862728] = -202116109;
  v3 = boost::beast::http::basic_fields<std::allocator<char>>::operator[](this, transfer_encoding);
  v4 = &v3.ptr_[v3.len_];
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_QWORD *)(v1 + 64) = v3.ptr_;
  *(_QWORD *)(v1 + 72) = v3.ptr_;
  *(_QWORD *)(v1 + 80) = &v3.ptr_[v3.len_];
  boost::beast::http::token_list::const_iterator::increment((boost::beast::http::token_list::const_iterator *const)(v1 + 48));
  while ( 1 )
  {
    *(_QWORD *)(v1 + 224) = v4;
    *(_QWORD *)(v1 + 232) = v4;
    *(_QWORD *)(v1 + 240) = v4;
    for ( i = 0; ; i = 0 )
    {
      v12 = *(_QWORD *)(v1 + 240);
      while ( 1 )
      {
        v6 = *(_QWORD *)(v1 + 224);
        if ( v12 == v6 )
          break;
        v7 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
        if ( v7 <= (*(_BYTE *)(v1 + 224) & 7) && v7 )
        {
          v6 = __asan_report_load1(*(_QWORD *)(v1 + 224));
          break;
        }
        if ( *(_BYTE *)v6 != 9 && *(_BYTE *)v6 != 32 )
          break;
        *(_QWORD *)(v1 + 224) = v6 + 1;
      }
      if ( v12 == v6 )
      {
        *(_QWORD *)(v1 + 224) = v12;
        *(_QWORD *)(v1 + 232) = v12;
        goto LABEL_21;
      }
      v9 = v6;
      v10 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
      if ( v10 <= (char)(v6 & 7) )
      {
        if ( v10 )
          break;
      }
      v9 = (unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v6];
      v11 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
      if ( v11 <= (char)(v9 & 7) && v11 )
        goto LABEL_24;
      if ( boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v6] )
        goto LABEL_25;
      if ( *(_BYTE *)v6 != 44 )
      {
LABEL_35:
        *(_QWORD *)(v1 + 224) = v12;
        *(_QWORD *)(v1 + 232) = v12;
        goto LABEL_21;
      }
      *(_QWORD *)(v1 + 224) = v6 + 1;
    }
    __asan_report_load1(v6);
LABEL_24:
    __asan_report_load1(v9);
LABEL_25:
    if ( i )
    {
      *(_QWORD *)(v1 + 224) = v12;
      *(_QWORD *)(v1 + 232) = v12;
    }
    else
    {
      do
      {
        v15 = *(_QWORD *)(v1 + 224);
        v16 = v15 + 1;
        *(_QWORD *)(v1 + 224) = v15 + 1;
        if ( v12 == v15 + 1 )
          break;
        v17 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
        if ( v17 <= (char)(v16 & 7) && v17 )
        {
          v14 = __asan_report_load1(v15 + 1);
        }
        else
        {
          v14 = *(unsigned __int8 *)(v15 + 1);
          v18 = (unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)(v15 + 1)];
          v19 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
          if ( v19 <= (char)(v18 & 7) && v19 )
          {
            __asan_report_load1(v18);
            goto LABEL_35;
          }
        }
      }
      while ( boost::beast::http::detail::is_token_char(char)::tab[v14] );
    }
LABEL_21:
    if ( *(_QWORD *)(v1 + 64) == *(_QWORD *)(v1 + 224)
      && *(_QWORD *)(v1 + 232) == *(_QWORD *)(v1 + 72)
      && *(_QWORD *)(v1 + 240) == *(_QWORD *)(v1 + 80) )
    {
      result = 0;
      goto LABEL_39;
    }
    *(__m128i *)(v1 + 208) = _mm_load_si128((const __m128i *)(v1 + 48));
    *(__m128i *)(v1 + 224) = _mm_load_si128((const __m128i *)(v1 + 64));
    *(_QWORD *)(v1 + 240) = *(_QWORD *)(v1 + 80);
    for ( j = 1LL; ; j = v24 )
    {
      v24 = j - 1;
      if ( !j )
        break;
      v29 = *(_QWORD *)(v1 + 224);
      v25 = v29 != *(_QWORD *)(v1 + 232);
      *(_QWORD *)(v1 + 208) = 0LL;
      *(_QWORD *)(v1 + 216) = 0LL;
      *(_QWORD *)(v1 + 232) = v29;
      while ( 1 )
      {
        v23 = *(_QWORD *)(v1 + 240);
        while ( 1 )
        {
          v21 = *(_QWORD *)(v1 + 224);
          if ( v23 == v21 )
            break;
          v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
          if ( v22 <= (*(_BYTE *)(v1 + 224) & 7) && v22 )
          {
            v21 = __asan_report_load1(*(_QWORD *)(v1 + 224));
            break;
          }
          if ( *(_BYTE *)v21 != 9 && *(_BYTE *)v21 != 32 )
            break;
          *(_QWORD *)(v1 + 224) = v21 + 1;
        }
        if ( v23 == v21 )
        {
          *(_QWORD *)(v1 + 224) = v23;
          *(_QWORD *)(v1 + 232) = v23;
          goto LABEL_57;
        }
        v26 = v21;
        v27 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
        if ( v27 <= (char)(v21 & 7) )
        {
          if ( v27 )
            break;
        }
        v26 = (unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v21];
        v28 = *(_BYTE *)((v26 >> 3) + 0x7FFF8000);
        if ( v28 <= (char)(v26 & 7) && v28 )
          goto LABEL_61;
        if ( boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v21] )
          goto LABEL_62;
        if ( *(_BYTE *)v21 != 44 )
        {
          *(_QWORD *)(v1 + 224) = v23;
          *(_QWORD *)(v1 + 232) = v23;
          goto LABEL_57;
        }
        *(_QWORD *)(v1 + 224) = v21 + 1;
        v25 = 0;
      }
      __asan_report_load1(v21);
LABEL_61:
      v21 = __asan_report_load1(v26);
LABEL_62:
      if ( v25 )
      {
        *(_QWORD *)(v1 + 224) = v23;
        *(_QWORD *)(v1 + 232) = v23;
      }
      else
      {
        do
        {
          v31 = *(_QWORD *)(v1 + 224);
          v30 = v31 + 1;
          *(_QWORD *)(v1 + 224) = v31 + 1;
          if ( v23 == v31 + 1 )
            break;
          v32 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
          if ( v32 <= (char)(v30 & 7) && v32 )
          {
            v21 = __asan_report_load1(v31 + 1);
          }
          else
          {
            LODWORD(v31) = *(unsigned __int8 *)(v31 + 1);
            v33 = *(_BYTE *)(((unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[(int)v31] >> 3)
                           + 0x7FFF8000);
            if ( v33 <= ((unsigned __int8)&boost::beast::http::detail::is_token_char(char)::tab[v31] & 7) && v33 )
            {
              v21 = __asan_report_load1(&boost::beast::http::detail::is_token_char(char)::tab[(int)v31]);
              break;
            }
          }
        }
        while ( boost::beast::http::detail::is_token_char(char)::tab[(int)v31] );
        *(_QWORD *)(v1 + 208) = v21;
        *(_QWORD *)(v1 + 216) = v30 - v21;
      }
LABEL_57:
      ;
    }
    *(__m128i *)(v1 + 128) = _mm_load_si128((const __m128i *)(v1 + 208));
    *(__m128i *)(v1 + 144) = _mm_load_si128((const __m128i *)(v1 + 224));
    *(_QWORD *)(v1 + 160) = *(_QWORD *)(v1 + 240);
    *(_QWORD *)(v1 + 224) = v4;
    *(_QWORD *)(v1 + 232) = v4;
    *(_QWORD *)(v1 + 240) = v4;
    for ( k = 0; ; k = 0 )
    {
      v40 = *(_QWORD *)(v1 + 240);
      while ( 1 )
      {
        v35 = *(_QWORD *)(v1 + 224);
        if ( v40 == v35 )
          break;
        v36 = *(_BYTE *)((v35 >> 3) + 0x7FFF8000);
        if ( v36 <= (*(_BYTE *)(v1 + 224) & 7) && v36 )
        {
          v35 = __asan_report_load1(*(_QWORD *)(v1 + 224));
          break;
        }
        if ( *(_BYTE *)v35 != 9 && *(_BYTE *)v35 != 32 )
          break;
        *(_QWORD *)(v1 + 224) = v35 + 1;
      }
      if ( v40 == v35 )
      {
        *(_QWORD *)(v1 + 224) = v40;
        *(_QWORD *)(v1 + 232) = v40;
        goto LABEL_91;
      }
      v37 = v35;
      v38 = *(_BYTE *)((v35 >> 3) + 0x7FFF8000);
      if ( v38 <= (char)(v35 & 7) )
      {
        if ( v38 )
          break;
      }
      v37 = (unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v35];
      v39 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
      if ( v39 <= (char)(v37 & 7) && v39 )
        goto LABEL_95;
      if ( boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v35] )
        goto LABEL_96;
      if ( *(_BYTE *)v35 != 44 )
      {
LABEL_106:
        *(_QWORD *)(v1 + 224) = v40;
        *(_QWORD *)(v1 + 232) = v40;
        goto LABEL_91;
      }
      *(_QWORD *)(v1 + 224) = v35 + 1;
    }
    __asan_report_load1(v35);
LABEL_95:
    __asan_report_load1(v37);
LABEL_96:
    if ( k )
    {
      *(_QWORD *)(v1 + 224) = v40;
      *(_QWORD *)(v1 + 232) = v40;
    }
    else
    {
      do
      {
        v42 = *(_QWORD *)(v1 + 224);
        v43 = v42 + 1;
        *(_QWORD *)(v1 + 224) = v42 + 1;
        if ( v40 == v42 + 1 )
          break;
        v44 = *(_BYTE *)((v43 >> 3) + 0x7FFF8000);
        if ( v44 <= (char)(v43 & 7) && v44 )
        {
          v41 = __asan_report_load1(v42 + 1);
        }
        else
        {
          v41 = *(unsigned __int8 *)(v42 + 1);
          v45 = (unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)(v42 + 1)];
          v46 = *(_BYTE *)((v45 >> 3) + 0x7FFF8000);
          if ( v46 <= (char)(v45 & 7) && v46 )
          {
            __asan_report_load1(v45);
            goto LABEL_106;
          }
        }
      }
      while ( boost::beast::http::detail::is_token_char(char)::tab[v41] );
    }
LABEL_91:
    if ( *(_QWORD *)(v1 + 224) == *(_QWORD *)(v1 + 144)
      && *(_QWORD *)(v1 + 232) == *(_QWORD *)(v1 + 152)
      && *(_QWORD *)(v1 + 240) == *(_QWORD *)(v1 + 160) )
    {
      break;
    }
    *(__m128i *)(v1 + 48) = _mm_load_si128((const __m128i *)(v1 + 128));
    *(__m128i *)(v1 + 64) = _mm_load_si128((const __m128i *)(v1 + 144));
    *(_QWORD *)(v1 + 80) = *(_QWORD *)(v1 + 160);
  }
  v47.ptr_ = "chunked";
  v47.len_ = 7LL;
  result = boost::beast::detail::iequals<void>(*(boost::beast::string_view *)(v1 + 48), v47);
LABEL_39:
  if ( v48 == (_BYTE *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 997: range 0000000019D0C1F6-0000000019D0CFF6
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::set_chunked_impl(
        boost::beast::http::basic_fields<std::allocator<char> > *const this,
        bool value)
{
  unsigned __int64 v3; // r14
  _DWORD *v4; // r12
  const char (*v5)[8]; // rdx
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v6; // rax
  boost::beast::string_view v7; // rax
  const char *v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  char v11; // dl
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // r10
  unsigned __int64 v15; // rdi
  char v16; // dl
  char v17; // r9
  __int64 i; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  char v22; // di
  char v23; // r9
  char j; // r8
  unsigned __int64 v25; // rax
  char v26; // dl
  unsigned __int64 v27; // rdi
  char v28; // dl
  char v29; // r9
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  char v34; // cl
  unsigned __int64 v35; // rdi
  char v36; // dl
  boost::beast::string_view v37; // rdx
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v38; // rax
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v39; // rdi
  boost::beast::string_view v40; // rax
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v41; // rax
  boost::beast::string_view v42; // rax
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v43; // rax
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v44; // rdi
  boost::beast::string_view v45; // rax
  std::size_t v46; // rbp
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v47; // rax
  const char *v48; // rax
  const boost::beast::static_string<4096,char,std::char_traits<char> > *v49; // rdx
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v50; // rax
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v51; // rdi
  boost::beast::string_view v52; // rax
  std::size_t len; // rbx
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v54; // rax
  const char *v55; // rax
  const std::string *v56; // rdx
  char *v57; // rdi
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v58; // rax
  boost::beast::string_view v59; // rax
  const boost::beast::static_string<4096,char,std::char_traits<char> > *v60; // rdx
  boost::beast::http::basic_fields<std::allocator<char> >::set_chunked_impl::<lambda(boost::beast::string_view)> pred; // [rsp+17h] [rbp-14E1h] BYREF
  boost::intrusive::list_node<void*> *ptr; // [rsp+18h] [rbp-14E0h] BYREF
  boost::beast::string_param v63; // [rsp+20h] [rbp-14D8h] BYREF
  char v64[4792]; // [rsp+240h] [rbp-12B8h] BYREF

  v3 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_7(4736LL);
    if ( v9 )
      v3 = v9;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 7 it:1000 64 32 6 s:1080 128 40 8 itt:1010 208 40 9 next:1012 288 40 7 __x:997 368 4112 8 buf:1056";
  *(_QWORD *)(v3 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::set_chunked_impl;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -218959118;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -218959360;
  v4[536862731] = 62194;
  v4[536862860] = -202116109;
  v4[536862861] = -202116109;
  v4[536862862] = -202116109;
  v4[536862863] = -202116109;
  v4[536862864] = -202116109;
  v4[536862865] = -202116109;
  v4[536862866] = -202116109;
  v4[536862867] = -202116109;
  if ( !(_BYTE)`guard variable for'boost::beast::http::detail::get_field_table(void)::tab
    && __cxa_guard_acquire(&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab) )
  {
    boost::beast::http::detail::field_table::field_table(&boost::beast::http::detail::get_field_table(void)::tab);
    __cxa_guard_release(&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
  }
  boost::beast::http::basic_fields<std::allocator<char>>::find(
    (const boost::beast::http::basic_fields<std::allocator<char> > *const)(v3 + 32),
    (boost::beast::string_view)__PAIR128__(
                                 boost::beast::http::detail::get_field_table(void)::tab.by_name_._M_elems[311].ptr_,
                                 (unsigned __int64)this),
    boost::beast::http::detail::get_field_table(void)::tab.by_name_._M_elems[311].len_);
  if ( value )
  {
    ptr = &this->list_.data_.root_plus_size_.m_header;
    v5 = (const char (*)[8])boost::intrusive::detail::uncast<boost::intrusive::list_node<void *> const*>((const boost::intrusive::list_node<void*> *const *)&ptr);
    v6 = *(const boost::beast::http::basic_fields<std::allocator<char> >::value_type **)(v3 + 32);
    if ( v6 == (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)v5 )
    {
      boost::beast::string_param::string_param<char [8]>(&v63, (const char (*)[8])"chunked", v5);
      boost::beast::http::basic_fields<std::allocator<char>>::set(this, transfer_encoding, &v63);
      if ( !v63.os_.m_initialized )
        goto LABEL_83;
      goto LABEL_12;
    }
    if ( !v6 )
    {
      __asan_handle_no_return(&ptr);
      __assert_fail(
        off_1B6344E0,
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
        0x3Eu,
        "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePt"
        "r, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::"
        "element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 1; "
        "boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocato"
        "r<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::list_node<void*>*]");
    }
    v7 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::value(v6 + 8);
    v8 = &v7.ptr_[v7.len_];
    *(_QWORD *)(v3 + 128) = 0LL;
    *(_QWORD *)(v3 + 136) = 0LL;
    *(_QWORD *)(v3 + 144) = v7.ptr_;
    *(_QWORD *)(v3 + 152) = v7.ptr_;
    *(_QWORD *)(v3 + 160) = &v7.ptr_[v7.len_];
    boost::beast::http::token_list::const_iterator::increment((boost::beast::http::token_list::const_iterator *const)(v3 + 128));
    while ( 2 )
    {
      *(__m128i *)(v3 + 288) = _mm_load_si128((const __m128i *)(v3 + 128));
      *(__m128i *)(v3 + 304) = _mm_load_si128((const __m128i *)(v3 + 144));
      *(_QWORD *)(v3 + 320) = *(_QWORD *)(v3 + 160);
      for ( i = 1LL; ; i = v13 )
      {
        v13 = i - 1;
        if ( !i )
          break;
        v19 = *(_QWORD *)(v3 + 304);
        v14 = v19 != *(_QWORD *)(v3 + 312);
        *(_QWORD *)(v3 + 288) = 0LL;
        *(_QWORD *)(v3 + 296) = 0LL;
        *(_QWORD *)(v3 + 312) = v19;
        while ( 1 )
        {
          v12 = *(_QWORD *)(v3 + 320);
          while ( 1 )
          {
            v10 = *(_QWORD *)(v3 + 304);
            if ( v12 == v10 )
              break;
            v11 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
            if ( v11 <= (*(_BYTE *)(v3 + 304) & 7) && v11 )
            {
              v10 = __asan_report_load1(*(_QWORD *)(v3 + 304));
              break;
            }
            if ( *(_BYTE *)v10 != 9 && *(_BYTE *)v10 != 32 )
              break;
            *(_QWORD *)(v3 + 304) = v10 + 1;
          }
          if ( v12 == v10 )
          {
            *(_QWORD *)(v3 + 304) = v12;
            *(_QWORD *)(v3 + 312) = v12;
            goto LABEL_30;
          }
          v15 = v10;
          v16 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
          if ( v16 <= (char)(v10 & 7) )
          {
            if ( v16 )
              break;
          }
          v15 = (unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v10];
          v17 = *(_BYTE *)((v15 >> 3) + 0x7FFF8000);
          if ( v17 <= (char)(v15 & 7) && v17 )
            goto LABEL_34;
          if ( boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v10] )
            goto LABEL_35;
          if ( *(_BYTE *)v10 != 44 )
          {
            *(_QWORD *)(v3 + 304) = v12;
            *(_QWORD *)(v3 + 312) = v12;
            goto LABEL_30;
          }
          *(_QWORD *)(v3 + 304) = v10 + 1;
          v14 = 0;
        }
        __asan_report_load1(v10);
LABEL_34:
        v10 = __asan_report_load1(v15);
LABEL_35:
        if ( v14 )
        {
          *(_QWORD *)(v3 + 304) = v12;
          *(_QWORD *)(v3 + 312) = v12;
        }
        else
        {
          do
          {
            v21 = *(_QWORD *)(v3 + 304);
            v20 = v21 + 1;
            *(_QWORD *)(v3 + 304) = v21 + 1;
            if ( v12 == v21 + 1 )
              break;
            v22 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
            if ( v22 <= (char)(v20 & 7) && v22 )
            {
              v10 = __asan_report_load1(v21 + 1);
            }
            else
            {
              LODWORD(v21) = *(unsigned __int8 *)(v21 + 1);
              v23 = *(_BYTE *)(((unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[(int)v21] >> 3)
                             + 0x7FFF8000);
              if ( v23 <= ((unsigned __int8)&boost::beast::http::detail::is_token_char(char)::tab[v21] & 7) && v23 )
              {
                v10 = __asan_report_load1(&boost::beast::http::detail::is_token_char(char)::tab[(int)v21]);
                break;
              }
            }
          }
          while ( boost::beast::http::detail::is_token_char(char)::tab[(int)v21] );
          *(_QWORD *)(v3 + 288) = v10;
          *(_QWORD *)(v3 + 296) = v20 - v10;
        }
LABEL_30:
        ;
      }
      *(__m128i *)(v3 + 208) = _mm_load_si128((const __m128i *)(v3 + 288));
      *(__m128i *)(v3 + 224) = _mm_load_si128((const __m128i *)(v3 + 304));
      *(_QWORD *)(v3 + 240) = *(_QWORD *)(v3 + 320);
      *(_QWORD *)(v3 + 304) = v8;
      *(_QWORD *)(v3 + 312) = v8;
      *(_QWORD *)(v3 + 320) = v8;
      for ( j = 0; ; j = 0 )
      {
        v30 = *(_QWORD *)(v3 + 320);
        while ( 1 )
        {
          v25 = *(_QWORD *)(v3 + 304);
          if ( v30 == v25 )
            break;
          v26 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
          if ( v26 <= (*(_BYTE *)(v3 + 304) & 7) && v26 )
          {
            v25 = __asan_report_load1(*(_QWORD *)(v3 + 304));
            break;
          }
          if ( *(_BYTE *)v25 != 9 && *(_BYTE *)v25 != 32 )
            break;
          *(_QWORD *)(v3 + 304) = v25 + 1;
        }
        if ( v30 == v25 )
        {
          *(_QWORD *)(v3 + 304) = v30;
          *(_QWORD *)(v3 + 312) = v30;
          goto LABEL_64;
        }
        v27 = v25;
        v28 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
        if ( v28 <= (char)(v25 & 7) )
        {
          if ( v28 )
            break;
        }
        v27 = (unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v25];
        v29 = *(_BYTE *)((v27 >> 3) + 0x7FFF8000);
        if ( v29 <= (char)(v27 & 7) && v29 )
          goto LABEL_68;
        if ( boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)v25] )
          goto LABEL_69;
        if ( *(_BYTE *)v25 != 44 )
        {
LABEL_79:
          *(_QWORD *)(v3 + 304) = v30;
          *(_QWORD *)(v3 + 312) = v30;
          goto LABEL_64;
        }
        *(_QWORD *)(v3 + 304) = v25 + 1;
      }
      __asan_report_load1(v25);
LABEL_68:
      __asan_report_load1(v27);
LABEL_69:
      if ( j )
      {
        *(_QWORD *)(v3 + 304) = v30;
        *(_QWORD *)(v3 + 312) = v30;
      }
      else
      {
        do
        {
          v32 = *(_QWORD *)(v3 + 304);
          v33 = v32 + 1;
          *(_QWORD *)(v3 + 304) = v32 + 1;
          if ( v30 == v32 + 1 )
            break;
          v34 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
          if ( v34 <= (char)(v33 & 7) && v34 )
          {
            v31 = __asan_report_load1(v32 + 1);
          }
          else
          {
            v31 = *(unsigned __int8 *)(v32 + 1);
            v35 = (unsigned __int64)&boost::beast::http::detail::is_token_char(char)::tab[*(unsigned __int8 *)(v32 + 1)];
            v36 = *(_BYTE *)((v35 >> 3) + 0x7FFF8000);
            if ( v36 <= (char)(v35 & 7) && v36 )
            {
              __asan_report_load1(v35);
              goto LABEL_79;
            }
          }
        }
        while ( boost::beast::http::detail::is_token_char(char)::tab[v31] );
      }
LABEL_64:
      if ( *(_QWORD *)(v3 + 224) != *(_QWORD *)(v3 + 304)
        || *(_QWORD *)(v3 + 232) != *(_QWORD *)(v3 + 312)
        || *(_QWORD *)(v3 + 240) != *(_QWORD *)(v3 + 320) )
      {
        *(__m128i *)(v3 + 128) = _mm_load_si128((const __m128i *)(v3 + 208));
        *(__m128i *)(v3 + 144) = _mm_load_si128((const __m128i *)(v3 + 224));
        *(_QWORD *)(v3 + 160) = *(_QWORD *)(v3 + 240);
        continue;
      }
      break;
    }
    v37.ptr_ = "chunked";
    v37.len_ = 7LL;
    if ( !(unsigned __int8)boost::beast::detail::iequals<void>(*(boost::beast::string_view *)(v3 + 128), v37) )
    {
      boost::beast::static_string<4096ul,char,std::char_traits<char>>::static_string((boost::beast::static_string<4096,char,std::char_traits<char> > *const)(v3 + 368));
      v38 = *(const boost::beast::http::basic_fields<std::allocator<char> >::value_type **)(v3 + 32);
      if ( !v38 )
      {
        __asan_handle_no_return(v3 + 368);
        __assert_fail(
          off_1B6344E0,
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
          0x3Eu,
          "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, Node"
          "Ptr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char>"
          " >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type"
          " = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::"
          "allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusi"
          "ve::list_node<void*>*]");
      }
      v39 = v38 + 8;
      v40 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::value(v38 + 8);
      if ( v40.len_ > 0xFF7 )
      {
        *(_QWORD *)(v3 + 64) = v3 + 80;
        *(_QWORD *)(v3 + 72) = 0LL;
        *(_BYTE *)(v3 + 80) = 0;
        v41 = *(const boost::beast::http::basic_fields<std::allocator<char> >::value_type **)(v3 + 32);
        if ( !v41 )
        {
          __asan_handle_no_return(v39);
          __assert_fail(
            off_1B6344E0,
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
            0x3Eu,
            "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, No"
            "dePtr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<c"
            "har> >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned in"
            "t Type = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fiel"
            "ds<std::allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boos"
            "t::intrusive::list_node<void*>*]");
        }
        v42 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::value(v41 + 8);
        std::string::reserve(v3 + 64, v42.len_ + 9);
        v50 = *(const boost::beast::http::basic_fields<std::allocator<char> >::value_type **)(v3 + 32);
        if ( !v50 )
        {
          __asan_handle_no_return(v3 + 64);
          __assert_fail(
            off_1B6344E0,
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
            0x3Eu,
            "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, No"
            "dePtr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<c"
            "har> >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned in"
            "t Type = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fiel"
            "ds<std::allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boos"
            "t::intrusive::list_node<void*>*]");
        }
        v51 = v50 + 8;
        v52 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::value(v50 + 8);
        len = v52.len_;
        v54 = *(const boost::beast::http::basic_fields<std::allocator<char> >::value_type **)(v3 + 32);
        if ( !v54 )
        {
          __asan_handle_no_return(v51);
          __assert_fail(
            off_1B6344E0,
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
            0x3Eu,
            "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, No"
            "dePtr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<c"
            "har> >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned in"
            "t Type = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fiel"
            "ds<std::allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boos"
            "t::intrusive::list_node<void*>*]");
        }
        v55 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::value(v54 + 8).ptr_;
        std::string::append(v3 + 64, v55, len);
        if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(v3 + 72)) <= 8 )
        {
          __asan_handle_no_return(v3 + 64);
          std::__throw_length_error("basic_string::append");
        }
        std::string::_M_append(v3 + 64, ", chunked", 9LL);
        boost::beast::string_param::string_param<std::string>(&v63, (const std::string *)(v3 + 64), v56);
        boost::beast::http::basic_fields<std::allocator<char>>::set(this, transfer_encoding, &v63);
        if ( v63.os_.m_initialized )
          boost::optional_detail::optional_base<boost::beast::detail::static_ostream>::destroy_impl(&v63.os_);
        v57 = *(char **)(v3 + 64);
        if ( v57 != (char *)(v3 + 80) )
          operator delete(v57);
        goto LABEL_83;
      }
      v43 = *(const boost::beast::http::basic_fields<std::allocator<char> >::value_type **)(v3 + 32);
      if ( !v43 )
      {
        __asan_handle_no_return(v39);
        __assert_fail(
          off_1B6344E0,
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
          0x3Eu,
          "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, Node"
          "Ptr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char>"
          " >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type"
          " = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::"
          "allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusi"
          "ve::list_node<void*>*]");
      }
      v44 = v43 + 8;
      v45 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::value(v43 + 8);
      v46 = v45.len_;
      v47 = *(const boost::beast::http::basic_fields<std::allocator<char> >::value_type **)(v3 + 32);
      if ( !v47 )
      {
        __asan_handle_no_return(v44);
        __assert_fail(
          off_1B6344E0,
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
          0x3Eu,
          "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, Node"
          "Ptr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char>"
          " >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type"
          " = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::"
          "allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusi"
          "ve::list_node<void*>*]");
      }
      v48 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::value(v47 + 8).ptr_;
      boost::beast::static_string<4096ul,char,std::char_traits<char>>::insert(
        (boost::beast::static_string<4096,char,std::char_traits<char> > *const)(v3 + 368),
        *(_QWORD *)(v3 + 368),
        v48,
        v46);
      boost::beast::static_string<4096ul,char,std::char_traits<char>>::insert(
        (boost::beast::static_string<4096,char,std::char_traits<char> > *const)(v3 + 368),
        *(_QWORD *)(v3 + 368),
        ", chunked",
        9uLL);
      boost::beast::string_param::string_param<boost::beast::static_string<4096ul,char,std::char_traits<char>>>(
        &v63,
        (const boost::beast::static_string<4096,char,std::char_traits<char> > *)(v3 + 368),
        v49);
      boost::beast::http::basic_fields<std::allocator<char>>::set(this, transfer_encoding, &v63);
      if ( v63.os_.m_initialized )
LABEL_12:
        boost::optional_detail::optional_base<boost::beast::detail::static_ostream>::destroy_impl(&v63.os_);
    }
  }
  else
  {
    ptr = &this->list_.data_.root_plus_size_.m_header;
    if ( *(boost::intrusive::detail::uncast_types<const boost::intrusive::list_node<void*>*>::non_const_pointer *)(v3 + 32) != boost::intrusive::detail::uncast<boost::intrusive::list_node<void *> const*>((const boost::intrusive::list_node<void*> *const *)&ptr) )
    {
      boost::beast::static_string<4096ul,char,std::char_traits<char>>::static_string((boost::beast::static_string<4096,char,std::char_traits<char> > *const)(v3 + 368));
      v58 = *(const boost::beast::http::basic_fields<std::allocator<char> >::value_type **)(v3 + 32);
      if ( !v58 )
      {
        __asan_handle_no_return(v3 + 368);
        __assert_fail(
          off_1B6344E0,
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
          0x3Eu,
          "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, Node"
          "Ptr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char>"
          " >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type"
          " = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::"
          "allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusi"
          "ve::list_node<void*>*]");
      }
      v59 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::value(v58 + 8);
      boost::beast::http::detail::filter_token_list_last<boost::beast::static_string<4096ul,char,std::char_traits<char>>,boost::beast::http::basic_fields<std::allocator<char>>::set_chunked_impl(bool)::{lambda(boost::basic_string_view<char,std::char_traits<char>>)#1}>(
        (boost::beast::static_string<4096,char,std::char_traits<char> > *)(v3 + 368),
        v59,
        &pred);
      if ( *(_QWORD *)(v3 + 368) )
      {
        boost::beast::string_param::string_param<boost::beast::static_string<4096ul,char,std::char_traits<char>>>(
          &v63,
          (const boost::beast::static_string<4096,char,std::char_traits<char> > *)(v3 + 368),
          v60);
        boost::beast::http::basic_fields<std::allocator<char>>::set(this, transfer_encoding, &v63);
        if ( v63.os_.m_initialized )
          boost::optional_detail::optional_base<boost::beast::detail::static_ostream>::destroy_impl(&v63.os_);
      }
      else
      {
        boost::beast::http::basic_fields<std::allocator<char>>::erase(this, transfer_encoding);
      }
    }
  }
LABEL_83:
  if ( v64 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8230) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8238) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8240) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8248) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_7(v3, 4736LL, v64);
  }
};

// Line 1155: range 0000000019D0073A-0000000019D00A40
boost::beast::http::basic_fields<std::allocator<char> >::element *__fastcall boost::beast::http::basic_fields<std::allocator<char>>::new_element(
        boost::beast::http::basic_fields<std::allocator<char> > *const this,
        boost::beast::http::field name,
        boost::beast::string_view sname,
        boost::beast::string_view value)
{
  const char *ptr; // r12
  std::size_t len; // r13
  unsigned __int64 v7; // rbp
  _DWORD *v8; // r14
  std::size_t v9; // rax
  unsigned __int16 v10; // dx
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // cl
  char v15; // cl
  const char *v16; // rcx
  std::size_t v17; // rax
  boost::beast::http::basic_fields<std::allocator<char> >::element *v18; // r12
  __m128i v20; // [rsp+0h] [rbp-C8h] BYREF
  char *v21; // [rsp+18h] [rbp-B0h]
  char v22[16]; // [rsp+20h] [rbp-A8h] BYREF
  char v23[152]; // [rsp+30h] [rbp-98h] BYREF

  ptr = sname.ptr_;
  len = sname.len_;
  v20 = (__m128i)value;
  v7 = (unsigned __int64)v23;
  v21 = v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(96LL);
    if ( v13 )
      v7 = v13;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 16 10 sname:1157 64 16 10 value:1157";
  *(_QWORD *)(v7 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::new_element;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862722] = -202178560;
  *(_QWORD *)(v7 + 32) = ptr;
  *(_QWORD *)(v7 + 40) = len;
  *(__m128i *)(v7 + 64) = _mm_load_si128(&v20);
  if ( *(_BYTE *)(((v7 + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7 + 40);
LABEL_10:
    std::length_error::length_error((std::length_error *)v22, "field name too large");
    __asan_handle_no_return(v22);
    boost::exception_detail::throw_exception_<std::length_error>(
      (const std::length_error *)v22,
      "boost::beast::http::basic_fields<Allocator>::element& boost::beast::http::basic_fields<Allocator>::new_element(boo"
      "st::beast::http::field, boost::beast::string_view, boost::beast::string_view) [with Allocator = std::allocator<cha"
      "r>; boost::beast::string_view = boost::basic_string_view<char, std::char_traits<char> >]",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/fields.hpp",
      1162);
  }
  v9 = *(_QWORD *)(v7 + 40);
  v10 = v9 + 2;
  if ( v9 + 2 > 0xFFFF )
    goto LABEL_10;
  if ( *(_BYTE *)(((v7 + 72) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7 + 72);
LABEL_12:
    std::length_error::length_error((std::length_error *)v22, "field value too large");
    __asan_handle_no_return(v22);
    boost::exception_detail::throw_exception_<std::length_error>(
      (const std::length_error *)v22,
      "boost::beast::http::basic_fields<Allocator>::element& boost::beast::http::basic_fields<Allocator>::new_element(boo"
      "st::beast::http::field, boost::beast::string_view, boost::beast::string_view) [with Allocator = std::allocator<cha"
      "r>; boost::beast::string_view = boost::basic_string_view<char, std::char_traits<char> >]",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/fields.hpp",
      1166);
  }
  if ( (unsigned __int64)(*(_QWORD *)(v7 + 72) + 2LL) > 0xFFFF )
    goto LABEL_12;
  v11 = *(const char **)(v7 + 64);
  v12 = (__int64)&v11[*(_QWORD *)(v7 + 72)];
  while ( 1 )
  {
    if ( (const char *)v12 == v11 )
      goto LABEL_21;
    v14 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v14 <= ((unsigned __int8)v11 & 7) )
    {
      if ( v14 )
        break;
    }
    if ( *v11 != 9 && *v11 != 32 )
      goto LABEL_21;
    ++v11;
  }
  v12 = __asan_report_load1(v11);
  while ( *(_BYTE *)(v12 - 1) == 9 || *(_BYTE *)(v12 - 1) == 32 )
  {
    --v12;
LABEL_21:
    if ( v11 == (const char *)v12 )
      break;
    v15 = *(_BYTE *)(((unsigned __int64)(v12 - 1) >> 3) + 0x7FFF8000);
    if ( v15 <= ((v12 - 1) & 7) && v15 )
    {
      v12 = __asan_report_load1(v12 - 1);
      break;
    }
  }
  if ( v11 == (const char *)v12 )
  {
    v16 = 0LL;
    v17 = 0LL;
  }
  else
  {
    v16 = v11;
    v17 = v12 - (_QWORD)v11;
  }
  *(_QWORD *)(v7 + 64) = v16;
  *(_QWORD *)(v7 + 72) = v17;
  v18 = (boost::beast::http::basic_fields<std::allocator<char> >::element *)operator new(
                                                                              56
                                                                            * ((v10
                                                                              + (unsigned __int64)(unsigned __int16)v17
                                                                              + 65) >> 3));
  boost::beast::http::basic_fields<std::allocator<char>>::element::element(
    v18,
    name,
    *(boost::beast::string_view *)(v7 + 32),
    *(boost::beast::string_view *)(v7 + 64));
  if ( v21 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v18;
};

// Line 1155: range 0000000019D00A42-0000000019D01354
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::insert(
        boost::beast::http::basic_fields<std::allocator<char> > *const this,
        unsigned int name,
        boost::beast::string_view sname,
        unsigned __int64 value)
{
  boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *v5; // r12
  unsigned __int64 v7; // r14
  _DWORD *v8; // r15
  boost::beast::http::basic_fields<std::allocator<char> >::element *v9; // rbp
  boost::intrusive::list_node<void*>::node_ptr *p_prev; // rdi
  boost::intrusive::rbtree_node<void*>::node_ptr i; // r12
  __int64 v12; // rax
  boost::beast::string_view v13; // rax
  bool v14; // al
  boost::beast::string_view v15; // rax
  boost::intrusive::rbtree_node<void*> *right; // rax
  boost::beast::string_view v17; // rax
  unsigned __int64 p_left; // rdi
  __int64 v19; // rax
  boost::beast::http::basic_fields<std::allocator<char> > *v20; // rsi
  boost::intrusive::list_node<void*>::node_ptr prev; // rdi
  boost::intrusive::list_node<void*>::node_ptr v22; // rax
  boost::intrusive::list_node<void*>::node_ptr v23; // rdx
  boost::intrusive::list_node<void*>::node_ptr v24; // rcx
  char v25; // al
  boost::intrusive::list_node<void*>::node_ptr v26; // rdx
  unsigned __int64 next; // rax
  unsigned __int64 v28; // rdx
  boost::intrusive::list_node<void*>::node_ptr v29; // rdx
  boost::intrusive::list_node<void*>::node_ptr v30; // r12
  boost::beast::string_view v31; // rax OVERLAPPED
  std::size_t len; // rcx
  boost::intrusive::list_node<void*>::node_ptr v33; // rdi
  boost::intrusive::list_node<void*>::node_ptr *v34; // rdi
  boost::intrusive::list_node<void*>::node_ptr v35; // rax
  boost::intrusive::list_node<void*> *v36; // rdi
  __gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::beast::string_view,boost::beast::string_view) const::<lambda(char,char)> > __comp[16]; // [rsp+0h] [rbp-E8h] BYREF
  std::size_t left; // [rsp+18h] [rbp-D0h]
  boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void> *v39; // [rsp+20h] [rbp-C8h]
  boost::intrusive::detail::uncast_types<const boost::intrusive::rbtree_node<void*>*>::non_const_pointer v40; // [rsp+28h] [rbp-C0h]
  char *__first1; // [rsp+30h] [rbp-B8h]
  boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void> *v42; // [rsp+38h] [rbp-B0h]
  boost::beast::http::basic_fields<std::allocator<char> >::element v43; // [rsp+40h] [rbp-A8h] BYREF

  v5 = (boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> *)name;
  *(_QWORD *)__comp[0]._M_comp.gap0 = sname.ptr_;
  *(_QWORD *)__comp[8]._M_comp.gap0 = sname.len_;
  v7 = (unsigned __int64)&v43.boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void>;
  v42 = &v43.boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void>;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_1(96LL);
    if ( v12 )
      v7 = v12;
  }
  v39 = (boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void> *)(v7 + 96);
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 8 10 before:576 64 16 9 sname:572";
  *(_QWORD *)(v7 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::insert;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -202178560;
  *(__m128i *)(v7 + 64) = _mm_load_si128((const __m128i *)__comp);
  if ( *(_WORD *)((value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load16(value);
    goto LABEL_8;
  }
  v9 = boost::beast::http::basic_fields<std::allocator<char>>::new_element(
         this,
         (boost::beast::http::field)name,
         *(boost::beast::string_view *)(v7 + 64),
         *(boost::beast::string_view *)value);
  v5 = &this->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void>;
  v43.prev_ = (boost::intrusive::list_node<void*>::node_ptr)&this->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void>;
  p_prev = &v43.prev_;
  v40 = boost::intrusive::detail::uncast<boost::intrusive::rbtree_node<void *> const*>((const boost::intrusive::rbtree_node<void*> *const *)&v43.prev_);
  if ( *(_BYTE *)(((unsigned __int64)&this->set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> >> 3)
                + 0x7FFF8000) )
  {
LABEL_8:
    p_prev = (boost::intrusive::list_node<void*>::node_ptr *)v5;
    __asan_report_load8(v5);
LABEL_9:
    __asan_handle_no_return(p_prev);
    __assert_fail(
      off_1B5D9D60,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x3Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePtr,"
      " Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::elem"
      "ent; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 3; boos"
      "t::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocator<char"
      "> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtree_node<void*>*]");
  }
  for ( i = this->set_.holder.root.parent_; i; i = right )
  {
    if ( i == (boost::intrusive::rbtree_node<void*>::node_ptr)16 )
      goto LABEL_9;
    *(_QWORD *)__comp[0]._M_comp.gap0 = i + 1;
    if ( *(_WORD *)(((unsigned __int64)&v39[-1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load16(&v39[-1]);
    }
    else
    {
      __first1 = (char *)v39[-1].parent_;
      left = (std::size_t)v39[-1].left_;
      v17 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string(*(const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const *)__comp[0]._M_comp.gap0);
      if ( left < v17.len_ )
      {
        v14 = 1;
        goto LABEL_21;
      }
    }
    v13 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string(*(const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const *)__comp[0]._M_comp.gap0);
    if ( left <= v13.len_ )
    {
      v15 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string(*(const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const *)__comp[0]._M_comp.gap0);
      v14 = std::__lexicographical_compare_impl<char const*,char const*,__gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::basic_string_view<char,std::char_traits<char>>,boost::basic_string_view<char,std::char_traits<char>>)::{lambda(char,char)#1}>>(
              __first1,
              &__first1[left],
              v15.ptr_,
              &v15.ptr_[v15.len_],
              __comp[0]);
    }
    else
    {
      v14 = 0;
    }
LABEL_21:
    if ( v14 )
    {
      p_prev = (boost::intrusive::list_node<void*>::node_ptr *)&i->left_;
      if ( !*(_BYTE *)(((unsigned __int64)&i->left_ >> 3) + 0x7FFF8000) )
      {
        right = i->left_;
        v40 = i;
        continue;
      }
      __asan_report_load8(p_prev);
    }
    p_prev = (boost::intrusive::list_node<void*>::node_ptr *)&i->right_;
    if ( *(_BYTE *)(((unsigned __int64)&i->right_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_prev);
      break;
    }
    right = i->right_;
  }
  *(_QWORD *)(v7 + 32) = v40;
  p_left = (unsigned __int64)&this->set_.holder.root.left_;
  if ( *(_BYTE *)(((unsigned __int64)&this->set_.holder.root.left_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_left);
  }
  else if ( *(boost::intrusive::rbtree_node<void*>::node_ptr *)(v7 + 32) != this->set_.holder.root.left_ )
  {
    v43.prev_ = *(boost::intrusive::list_node<void*>::node_ptr *)(v7 + 32);
    v19 = -1LL;
    goto LABEL_80;
  }
  if ( boost::beast::http::basic_fields<std::allocator<char>>::count(this, *(boost::beast::string_view *)(v7 + 64)) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "count(sname) == 0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/fields.hpp",
      0x244u,
      "void boost::beast::http::basic_fields<Allocator>::insert(boost::beast::http::field, boost::beast::string_view, con"
      "st boost::beast::string_param&) [with Allocator = std::allocator<char>; boost::beast::string_view = boost::basic_s"
      "tring_view<char, std::char_traits<char> >]");
  }
  v43.next_ = *(boost::intrusive::list_node<void*>::node_ptr *)(v7 + 32);
  v20 = this;
  boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,void,boost::beast::http::basic_fields<std::allocator<char>>::key_compare,unsigned long,true,(boost::intrusive::algo_types)5,void>::insert_before(
    (boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,long unsigned int,true,(boost::intrusive::algo_types)5,void> *const)&v43.prev_,
    (boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,long unsigned int,true,(boost::intrusive::algo_types)5,void>::const_iterator)this,
    &v43);
  if ( !v9 )
  {
    __asan_handle_no_return(&v43.prev_);
    __assert_fail(
      off_1B5D9D60,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x4Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr boost::intrusive::bhtraits_base<T, NodePtr"
      ", Tag, Type>::to_node_ptr(boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference) [with T = boost::beas"
      "t::http::basic_fields<std::allocator<char> >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost:"
      ":intrusive::dft_tag; unsigned int Type = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boo"
      "st::intrusive::list_node<void*>*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference = boost::beast"
      "::http::basic_fields<std::allocator<char> >::element&]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->list_.data_.root_plus_size_.m_header.prev_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->list_.data_.root_plus_size_.m_header.prev_);
    goto LABEL_41;
  }
  prev = this->list_.data_.root_plus_size_.m_header.prev_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->prev_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8();
    goto LABEL_42;
  }
  v9->prev_ = prev;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    prev = v9;
    __asan_report_store8();
    goto LABEL_43;
  }
  v9->next_ = &this->list_.data_.root_plus_size_.m_header;
  this->list_.data_.root_plus_size_.m_header.prev_ = v9;
  if ( !*(_BYTE *)(((unsigned __int64)prev >> 3) + 0x7FFF8000) )
  {
    prev->next_ = v9;
    goto LABEL_104;
  }
LABEL_43:
  __asan_report_store8();
  while ( 2 )
  {
    __asan_report_load8(prev);
LABEL_45:
    v22 = (boost::intrusive::list_node<void*>::node_ptr)__asan_report_load8(prev);
LABEL_46:
    __asan_report_load8(v22);
LABEL_47:
    v22 = (boost::intrusive::list_node<void*>::node_ptr)__asan_report_load8(v23);
LABEL_48:
    if ( !*(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
    {
      if ( v22 == v24->next_ )
      {
        v25 = 0;
        goto LABEL_91;
      }
      goto LABEL_90;
    }
    __asan_report_load8(v24);
LABEL_52:
    v25 = 0;
LABEL_91:
    if ( v25 )
    {
      p_left = (unsigned __int64)v43.prev_;
      if ( *(_BYTE *)(((unsigned __int64)v43.prev_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v43.prev_);
      }
      else
      {
        next = (unsigned __int64)v43.prev_->boost::intrusive::list_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void>::boost::intrusive::generic_hook<(boost::intrusive::algo_types)0,boost::intrusive::list_node_traits<void*>,boost::intrusive::dft_tag,(boost::intrusive::link_mode_type)0,(boost::intrusive::base_hook_type)1>::boost::intrusive::node_holder<boost::intrusive::list_node<void*>,boost::intrusive::dft_tag,1>::boost::intrusive::list_node<void*>::next_;
        p_left = (unsigned __int64)&v43.prev_->boost::intrusive::list_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void>::boost::intrusive::generic_hook<(boost::intrusive::algo_types)0,boost::intrusive::list_node_traits<void*>,boost::intrusive::dft_tag,(boost::intrusive::link_mode_type)0,(boost::intrusive::base_hook_type)1>::boost::intrusive::node_holder<boost::intrusive::list_node<void*>,boost::intrusive::dft_tag,1>::boost::intrusive::list_node<void*>::next_[1];
        if ( !*(_BYTE *)((p_left >> 3) + 0x7FFF8000) )
        {
          v26 = *(boost::intrusive::list_node<void*>::node_ptr *)(next + 16);
          goto LABEL_57;
        }
      }
      __asan_report_load8(p_left);
      while ( 1 )
      {
        next = (unsigned __int64)v26;
        v26 = v26[1].next_;
LABEL_57:
        if ( !v26 )
          break;
        p_left = (unsigned __int64)&v26[1];
        if ( *(_BYTE *)(((unsigned __int64)&v26[1] >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_left);
          goto LABEL_60;
        }
      }
    }
    else
    {
LABEL_60:
      v28 = (unsigned __int64)v43.prev_;
      p_left = (unsigned __int64)&v43.prev_->boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void>::boost::intrusive::generic_hook<(boost::intrusive::algo_types)5,boost::intrusive::rbtree_node_traits<void*,false>,boost::intrusive::dft_tag,(boost::intrusive::link_mode_type)0,(boost::intrusive::base_hook_type)3>::boost::intrusive::node_holder<boost::intrusive::rbtree_node<void*>,boost::intrusive::dft_tag,3>::boost::intrusive::rbtree_node<void*>::prev_;
      if ( *(_BYTE *)(((unsigned __int64)&v43.prev_->boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void>::boost::intrusive::generic_hook<(boost::intrusive::algo_types)5,boost::intrusive::rbtree_node_traits<void*,false>,boost::intrusive::dft_tag,(boost::intrusive::link_mode_type)0,(boost::intrusive::base_hook_type)3>::boost::intrusive::node_holder<boost::intrusive::rbtree_node<void*>,boost::intrusive::dft_tag,3>::boost::intrusive::rbtree_node<void*>::prev_ >> 3)
                    + 0x7FFF8000) )
      {
        __asan_report_load8(p_left);
      }
      else
      {
        next = (unsigned __int64)v43.prev_->boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void>::boost::intrusive::generic_hook<(boost::intrusive::algo_types)5,boost::intrusive::rbtree_node_traits<void*,false>,boost::intrusive::dft_tag,(boost::intrusive::link_mode_type)0,(boost::intrusive::base_hook_type)3>::boost::intrusive::node_holder<boost::intrusive::rbtree_node<void*>,boost::intrusive::dft_tag,3>::boost::intrusive::rbtree_node<void*>::prev_;
        if ( !next )
        {
LABEL_70:
          p_left = v28;
          if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
          {
            next = *(_QWORD *)v28;
            goto LABEL_75;
          }
          __asan_report_load8(v28);
LABEL_73:
          next = __asan_report_load8(p_left);
          do
          {
            v28 = next;
            next = *(_QWORD *)next;
LABEL_75:
            p_left = next + 8;
            if ( *(_BYTE *)(((next + 8) >> 3) + 0x7FFF8000) )
              goto LABEL_73;
            if ( *(_QWORD *)(next + 8) != v28 )
              goto LABEL_79;
            p_left = next;
          }
          while ( !*(_BYTE *)((next >> 3) + 0x7FFF8000) );
          next = __asan_report_load8(next);
          goto LABEL_79;
        }
        p_left = next + 16;
        if ( !*(_BYTE *)(((next + 16) >> 3) + 0x7FFF8000) )
        {
          v29 = *(boost::intrusive::list_node<void*>::node_ptr *)(next + 16);
          goto LABEL_67;
        }
      }
      __asan_report_load8(p_left);
      while ( 1 )
      {
        next = (unsigned __int64)v29;
        v29 = v29[1].next_;
LABEL_67:
        if ( !v29 )
          break;
        p_left = (unsigned __int64)&v29[1];
        if ( *(_BYTE *)(((unsigned __int64)&v29[1] >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_left);
          goto LABEL_70;
        }
      }
    }
LABEL_79:
    v43.prev_ = (boost::intrusive::list_node<void*>::node_ptr)next;
    v19 = (__int64)v20;
LABEL_80:
    v20 = (boost::beast::http::basic_fields<std::allocator<char> > *)(v19 + 1);
    if ( v19 )
    {
      v22 = v43.prev_;
      prev = (boost::intrusive::list_node<void*>::node_ptr)&v43.prev_->boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void>::boost::intrusive::generic_hook<(boost::intrusive::algo_types)5,boost::intrusive::rbtree_node_traits<void*,false>,boost::intrusive::dft_tag,(boost::intrusive::link_mode_type)0,(boost::intrusive::base_hook_type)3>::boost::intrusive::node_holder<boost::intrusive::rbtree_node<void*>,boost::intrusive::dft_tag,3>::boost::intrusive::rbtree_node<void*>::prev_;
      if ( *(_BYTE *)(((unsigned __int64)&v43.prev_->boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void>::boost::intrusive::generic_hook<(boost::intrusive::algo_types)5,boost::intrusive::rbtree_node_traits<void*,false>,boost::intrusive::dft_tag,(boost::intrusive::link_mode_type)0,(boost::intrusive::base_hook_type)3>::boost::intrusive::node_holder<boost::intrusive::rbtree_node<void*>,boost::intrusive::dft_tag,3>::boost::intrusive::rbtree_node<void*>::prev_ >> 3)
                    + 0x7FFF8000) )
        continue;
      v23 = v43.prev_->boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void>::boost::intrusive::generic_hook<(boost::intrusive::algo_types)5,boost::intrusive::rbtree_node_traits<void*,false>,boost::intrusive::dft_tag,(boost::intrusive::link_mode_type)0,(boost::intrusive::base_hook_type)3>::boost::intrusive::node_holder<boost::intrusive::rbtree_node<void*>,boost::intrusive::dft_tag,3>::boost::intrusive::rbtree_node<void*>::prev_;
      prev = v43.prev_ + 1;
      if ( *(_BYTE *)(((unsigned __int64)&v43.prev_[1] >> 3) + 0x7FFF8000) )
        goto LABEL_45;
      v24 = v43.prev_[1].next_;
      if ( *(_BYTE *)(((unsigned __int64)v43.prev_ >> 3) + 0x7FFF8000) )
        goto LABEL_46;
      if ( !v43.prev_->boost::intrusive::list_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void>::boost::intrusive::generic_hook<(boost::intrusive::algo_types)0,boost::intrusive::list_node_traits<void*>,boost::intrusive::dft_tag,(boost::intrusive::link_mode_type)0,(boost::intrusive::base_hook_type)1>::boost::intrusive::node_holder<boost::intrusive::list_node<void*>,boost::intrusive::dft_tag,1>::boost::intrusive::list_node<void*>::next_ )
        goto LABEL_90;
      if ( !v23 )
        goto LABEL_52;
      if ( v24 )
      {
        if ( v23 == v24 )
        {
LABEL_90:
          v25 = 1;
          goto LABEL_91;
        }
        if ( !*(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          if ( v43.prev_ != v23->next_ )
            goto LABEL_90;
          goto LABEL_48;
        }
        goto LABEL_47;
      }
      v25 = 0;
      goto LABEL_91;
    }
    break;
  }
  v30 = v43.prev_;
  *(_QWORD *)__comp[0]._M_comp.gap0 = v43.prev_ - 1;
  if ( v43.prev_ == (boost::intrusive::list_node<void*>::node_ptr)16 )
  {
    __asan_handle_no_return(p_left);
    __assert_fail(
      off_1B5D9D60,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x3Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePtr,"
      " Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::elem"
      "ent; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 3; boos"
      "t::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocator<char"
      "> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtree_node<void*>*]");
  }
  v31 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)&v43.prev_[2]);
  len = v31.len_;
  v31.len_ = (std::size_t)v31.ptr_;
  if ( (unsigned __int8)boost::beast::detail::iequals<void>(
                          *(boost::beast::string_view *)(v7 + 64),
                          *(boost::beast::string_view *)&v31.len_) )
    goto LABEL_113;
  if ( boost::beast::http::basic_fields<std::allocator<char>>::count(this, *(boost::beast::string_view *)(v7 + 64)) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "count(sname) == 0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/fields.hpp",
      0x24Du,
      "void boost::beast::http::basic_fields<Allocator>::insert(boost::beast::http::field, boost::beast::string_view, con"
      "st boost::beast::string_param&) [with Allocator = std::allocator<char>; boost::beast::string_view = boost::basic_s"
      "tring_view<char, std::char_traits<char> >]");
  }
  v43.next_ = *(boost::intrusive::list_node<void*>::node_ptr *)(v7 + 32);
  boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,void,boost::beast::http::basic_fields<std::allocator<char>>::key_compare,unsigned long,true,(boost::intrusive::algo_types)5,void>::insert_before(
    (boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,long unsigned int,true,(boost::intrusive::algo_types)5,void> *const)&v43.prev_,
    (boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,long unsigned int,true,(boost::intrusive::algo_types)5,void>::const_iterator)this,
    &v43);
  if ( !v9 )
  {
    __asan_handle_no_return(&v43.prev_);
    __assert_fail(
      off_1B5D9D60,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x4Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr boost::intrusive::bhtraits_base<T, NodePtr"
      ", Tag, Type>::to_node_ptr(boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference) [with T = boost::beas"
      "t::http::basic_fields<std::allocator<char> >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost:"
      ":intrusive::dft_tag; unsigned int Type = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boo"
      "st::intrusive::list_node<void*>*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference = boost::beast"
      "::http::basic_fields<std::allocator<char> >::element&]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->list_.data_.root_plus_size_.m_header.prev_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->list_.data_.root_plus_size_.m_header.prev_);
    goto LABEL_110;
  }
  v33 = this->list_.data_.root_plus_size_.m_header.prev_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->prev_ >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_store8();
    goto LABEL_111;
  }
  v9->prev_ = v33;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_store8();
    goto LABEL_112;
  }
  v9->next_ = &this->list_.data_.root_plus_size_.m_header;
  this->list_.data_.root_plus_size_.m_header.prev_ = v9;
  if ( !*(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
  {
    v33->next_ = v9;
    goto LABEL_104;
  }
LABEL_112:
  __asan_report_store8();
LABEL_113:
  v43.next_ = *(boost::intrusive::list_node<void*>::node_ptr *)(v7 + 32);
  v34 = &v43.prev_;
  boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,void,boost::beast::http::basic_fields<std::allocator<char>>::key_compare,unsigned long,true,(boost::intrusive::algo_types)5,void>::insert_before(
    (boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,long unsigned int,true,(boost::intrusive::algo_types)5,void> *const)&v43.prev_,
    (boost::intrusive::bstree_impl<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,long unsigned int,true,(boost::intrusive::algo_types)5,void>::const_iterator)this,
    &v43);
  if ( !*(_QWORD *)__comp[0]._M_comp.gap0 )
  {
    __asan_handle_no_return(&v43.prev_);
    __assert_fail(
      off_1B5D9D60,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x4Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr boost::intrusive::bhtraits_base<T, NodePtr"
      ", Tag, Type>::to_node_ptr(boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference) [with T = boost::beas"
      "t::http::basic_fields<std::allocator<char> >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost:"
      ":intrusive::dft_tag; unsigned int Type = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boo"
      "st::intrusive::list_node<void*>*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference = boost::beast"
      "::http::basic_fields<std::allocator<char> >::element&]");
  }
  if ( *(_BYTE *)((*(_QWORD *)__comp[0]._M_comp.gap0 >> 3) + 0x7FFF8000LL) )
  {
    v34 = *(boost::intrusive::list_node<void*>::node_ptr **)__comp[0]._M_comp.gap0;
    __asan_report_load8(*(_QWORD *)__comp[0]._M_comp.gap0);
LABEL_125:
    __asan_handle_no_return(v34);
    __assert_fail(
      "!node_algorithms::inited(this->priv_value_traits().to_node_ptr(value))",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/list.hpp",
      0x51Bu,
      "boost::intrusive::list_impl<ValueTraits, SizeType, ConstantTimeSize, HeaderHolder>::iterator boost::intrusive::lis"
      "t_impl<ValueTraits, SizeType, ConstantTimeSize, HeaderHolder>::iterator_to(boost::intrusive::list_impl<ValueTraits"
      ", SizeType, ConstantTimeSize, HeaderHolder>::reference) [with ValueTraits = boost::intrusive::bhtraits<boost::beas"
      "t::http::basic_fields<std::allocator<char> >::element, boost::intrusive::list_node_traits<void*>, boost::intrusive"
      "::normal_link, boost::intrusive::dft_tag, 1>; SizeType = long unsigned int; bool ConstantTimeSize = false; HeaderH"
      "older = void; boost::intrusive::list_impl<ValueTraits, SizeType, ConstantTimeSize, HeaderHolder>::iterator = boost"
      "::intrusive::list_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::ele"
      "ment, boost::intrusive::list_node_traits<void*>, boost::intrusive::normal_link, boost::intrusive::dft_tag, 1>, fal"
      "se>; boost::intrusive::list_impl<ValueTraits, SizeType, ConstantTimeSize, HeaderHolder>::reference = boost::beast:"
      ":http::basic_fields<std::allocator<char> >::element&]");
  }
  if ( !v30[-1].next_ )
    goto LABEL_125;
  v43.prev_ = *(boost::intrusive::list_node<void*>::node_ptr *)__comp[0]._M_comp.gap0;
  if ( *(_BYTE *)((*(_QWORD *)__comp[0]._M_comp.gap0 >> 3) + 0x7FFF8000LL) )
  {
    v34 = *(boost::intrusive::list_node<void*>::node_ptr **)__comp[0]._M_comp.gap0;
    __asan_report_load8(*(_QWORD *)__comp[0]._M_comp.gap0);
LABEL_127:
    __asan_handle_no_return(v34);
    __assert_fail(
      off_1B5D9D60,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x4Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr boost::intrusive::bhtraits_base<T, NodePtr"
      ", Tag, Type>::to_node_ptr(boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference) [with T = boost::beas"
      "t::http::basic_fields<std::allocator<char> >::element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost:"
      ":intrusive::dft_tag; unsigned int Type = 1; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boo"
      "st::intrusive::list_node<void*>*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::reference = boost::beast"
      "::http::basic_fields<std::allocator<char> >::element&]");
  }
  v35 = v30[-1].next_;
  if ( !v9 )
    goto LABEL_127;
  if ( *(_BYTE *)(((unsigned __int64)&v35->prev_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v35->prev_);
    goto LABEL_129;
  }
  v36 = v35->prev_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->prev_ >> 3) + 0x7FFF8000) )
  {
LABEL_129:
    __asan_report_store8();
    goto LABEL_130;
  }
  v9->prev_ = v36;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
LABEL_130:
    __asan_report_store8();
    goto LABEL_131;
  }
  v9->next_ = v35;
  v35->prev_ = v9;
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
LABEL_131:
    __asan_report_store8();
    goto LABEL_132;
  }
  v36->next_ = v9;
LABEL_104:
  if ( v42 == (boost::intrusive::set_base_hook<boost::intrusive::link_mode<(boost::intrusive::link_mode_type)0>,void,void,void> *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_132:
  *(_QWORD *)v7 = 1172321806LL;
  *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 1182: range 0000000019B85A94-0000000019B85AA4
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::delete_element(
        boost::beast::http::basic_fields<std::allocator<char> > *const this,
        boost::beast::http::basic_fields<std::allocator<char> >::element *e)
{
  operator delete(e);
};

// Line 1226: range 0000000019B86B16-0000000019B86DB2
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::realloc_string(
        boost::beast::http::basic_fields<std::allocator<char> > *const this,
        unsigned __int64 dest,
        boost::beast::string_view s)
{
  const char *ptr; // r12
  std::size_t len; // r13
  unsigned __int64 v5; // r14
  _DWORD *v6; // r15
  std::size_t *v7; // rdi
  void *v8; // r12
  char *v9; // rdi
  size_t v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  std::size_t v13; // rax
  char v14[152]; // [rsp+20h] [rbp-98h] BYREF

  ptr = s.ptr_;
  len = s.len_;
  v5 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v5 = v11;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 6 n:1226 64 16 6 s:1227";
  *(_QWORD *)(v5 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::realloc_string;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202178560;
  *(_QWORD *)(v5 + 64) = ptr;
  *(_QWORD *)(v5 + 72) = len;
  v7 = (std::size_t *)(dest + 8);
  if ( *(_BYTE *)(((dest + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7);
    goto LABEL_17;
  }
  if ( *(_QWORD *)(dest + 8) )
    goto LABEL_6;
  v7 = (std::size_t *)(v5 + 72);
  if ( *(_BYTE *)(((v5 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(v7);
    goto LABEL_18;
  }
  if ( !*(_QWORD *)(v5 + 72) )
    goto LABEL_29;
LABEL_6:
  v7 = (std::size_t *)(v5 + 72);
  if ( *(_BYTE *)(((v5 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v7);
    goto LABEL_19;
  }
  v7 = *(std::size_t **)(v5 + 72);
  if ( !v7 )
  {
LABEL_23:
    v8 = 0LL;
    goto LABEL_24;
  }
  if ( (__int64)v7 < 0 )
  {
LABEL_19:
    __asan_handle_no_return(v7);
    std::__throw_bad_alloc();
  }
  v8 = (void *)operator new((unsigned __int64)v7);
  v9 = (char *)(v5 + 72);
  if ( *(_BYTE *)(((v5 + 72) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v9);
    goto LABEL_21;
  }
  *(_QWORD *)(v5 + 32) = *(_QWORD *)(v5 + 72);
  v9 = (char *)(v5 + 32);
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v9);
    goto LABEL_22;
  }
  v10 = *(_QWORD *)(v5 + 32);
  v9 = (char *)(v5 + 64);
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(v9);
    goto LABEL_23;
  }
  if ( v10 )
    memcpy(v8, *(const void **)(v5 + 64), v10);
LABEL_24:
  if ( *(_QWORD *)(dest + 8) )
  {
    if ( *(_BYTE *)((dest >> 3) + 0x7FFF8000) )
    {
      v12 = dest;
      __asan_report_load8(dest);
      goto LABEL_34;
    }
    operator delete(*(void **)dest);
  }
  if ( v8 )
  {
    v12 = v5 + 72;
    if ( !*(_BYTE *)(((v5 + 72) >> 3) + 0x7FFF8000) )
    {
      v13 = *(_QWORD *)(v5 + 72);
      if ( !*(_WORD *)((dest >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)dest = v8;
        *(_QWORD *)(dest + 8) = v13;
        goto LABEL_29;
      }
      goto LABEL_35;
    }
LABEL_34:
    __asan_report_load8(v12);
LABEL_35:
    __asan_report_store16(dest);
  }
  if ( *(_WORD *)((dest >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16(dest);
    goto LABEL_39;
  }
  *(_QWORD *)dest = 0LL;
  *(_QWORD *)(dest + 8) = 0LL;
LABEL_29:
  if ( v14 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_39:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 1251: range 0000000019D05394-0000000019D05667
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::realloc_target(
        boost::beast::http::basic_fields<std::allocator<char> > *const this,
        unsigned __int64 dest,
        boost::beast::string_view s)
{
  const char *ptr; // r12
  std::size_t len; // r13
  unsigned __int64 v5; // r14
  _DWORD *v6; // r15
  std::size_t *v7; // rdi
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  char *v10; // rdi
  char v11; // al
  size_t v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  std::size_t v15; // rax
  char v16[152]; // [rsp+20h] [rbp-98h] BYREF

  ptr = s.ptr_;
  len = s.len_;
  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(96LL);
    if ( v13 )
      v5 = v13;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 6 n:1251 64 16 6 s:1253";
  *(_QWORD *)(v5 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::realloc_target;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202178560;
  *(_QWORD *)(v5 + 64) = ptr;
  *(_QWORD *)(v5 + 72) = len;
  v7 = (std::size_t *)(dest + 8);
  if ( *(_BYTE *)(((dest + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7);
    goto LABEL_19;
  }
  if ( *(_QWORD *)(dest + 8) )
    goto LABEL_6;
  v7 = (std::size_t *)(v5 + 72);
  if ( *(_BYTE *)(((v5 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(v7);
    goto LABEL_20;
  }
  if ( !*(_QWORD *)(v5 + 72) )
    goto LABEL_32;
LABEL_6:
  v7 = (std::size_t *)(v5 + 72);
  if ( *(_BYTE *)(((v5 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(v7);
    goto LABEL_21;
  }
  v8 = *(_QWORD *)(v5 + 72);
  if ( !v8 )
  {
LABEL_26:
    v9 = 0LL;
    goto LABEL_27;
  }
  v7 = (std::size_t *)(v8 + 1);
  if ( (__int64)v7 < 0 )
  {
LABEL_21:
    __asan_handle_no_return(v7);
    std::__throw_bad_alloc();
  }
  v9 = operator new((unsigned __int64)v7);
  v10 = (char *)v9;
  v11 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
  if ( v11 <= (char)(v9 & 7) && v11 )
  {
    __asan_report_store1(v9);
    goto LABEL_23;
  }
  *(_BYTE *)v9 = 32;
  v10 = (char *)(v5 + 72);
  if ( *(_BYTE *)(((v5 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(v10);
    goto LABEL_24;
  }
  *(_QWORD *)(v5 + 32) = *(_QWORD *)(v5 + 72);
  v10 = (char *)(v5 + 32);
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(v10);
    goto LABEL_25;
  }
  v12 = *(_QWORD *)(v5 + 32);
  v10 = (char *)(v5 + 64);
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(v10);
    goto LABEL_26;
  }
  if ( v12 )
    memcpy((void *)(v9 + 1), *(const void **)(v5 + 64), v12);
LABEL_27:
  if ( *(_QWORD *)(dest + 8) )
  {
    if ( *(_BYTE *)((dest >> 3) + 0x7FFF8000) )
    {
      v14 = dest;
      __asan_report_load8(dest);
      goto LABEL_37;
    }
    operator delete(*(void **)dest);
  }
  if ( v9 )
  {
    v14 = v5 + 72;
    if ( !*(_BYTE *)(((v5 + 72) >> 3) + 0x7FFF8000) )
    {
      v15 = *(_QWORD *)(v5 + 72) + 1LL;
      if ( !*(_WORD *)((dest >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)dest = v9;
        *(_QWORD *)(dest + 8) = v15;
        goto LABEL_32;
      }
      goto LABEL_38;
    }
LABEL_37:
    __asan_report_load8(v14);
LABEL_38:
    __asan_report_store16(dest);
  }
  if ( *(_WORD *)((dest >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16(dest);
    goto LABEL_42;
  }
  *(_QWORD *)dest = 0LL;
  *(_QWORD *)(dest + 8) = 0LL;
LABEL_32:
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_42:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 1304: range 0000000019B85AA6-0000000019B85BD6
void __fastcall boost::beast::http::basic_fields<std::allocator<char>>::delete_list(
        boost::beast::http::basic_fields<std::allocator<char> > *const this)
{
  boost::beast::http::basic_fields<std::allocator<char> >::list_t *v1; // rsi
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r13
  boost::beast::http::basic_fields<std::allocator<char> >::list_t *p_list; // rdi
  __int64 v6; // rax
  _BYTE v7[104]; // [rsp+0h] [rbp-68h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v3 = v6;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 7 it:1307";
  *(_QWORD *)(v3 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::delete_list;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  p_list = &this->list_;
  if ( *(_BYTE *)(((unsigned __int64)&this->list_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_list);
    goto LABEL_7;
  }
  *(_QWORD *)(v3 + 32) = this->list_.data_.root_plus_size_.m_header.next_;
  while ( 1 )
  {
    v1 = *(boost::beast::http::basic_fields<std::allocator<char> >::list_t **)(v3 + 32);
    if ( v1 == &this->list_ )
      break;
    p_list = *(boost::beast::http::basic_fields<std::allocator<char> >::list_t **)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_list);
LABEL_12:
      __asan_handle_no_return(p_list);
      __assert_fail(
        off_1B5D9D60,
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
        0x3Eu,
        "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePt"
        "r, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::"
        "element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 1; "
        "boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocato"
        "r<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::list_node<void*>*]");
    }
LABEL_7:
    *(_QWORD *)(v3 + 32) = v1->data_.root_plus_size_.m_header.next_;
    if ( !v1 )
      goto LABEL_12;
    boost::beast::http::basic_fields<std::allocator<char>>::delete_element(
      this,
      (boost::beast::http::basic_fields<std::allocator<char> >::element *)v1);
  }
  if ( v7 == (_BYTE *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
