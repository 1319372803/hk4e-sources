// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/detail/xml_parser_read_rapidxml.hpp

// Line 24: range 000000000C2A89D2-000000000C2AA02B
void __fastcall boost::property_tree::xml_parser::read_xml_node<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>,char>(
        boost::property_tree::detail::rapidxml::xml_node<char> *node,
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *pt,
        int flags)
{
  std::forward_iterator_tag v3; // cl
  boost::property_tree::detail::rapidxml::xml_node<char> *j; // rbx
  unsigned __int64 i; // r12
  boost::property_tree::detail::rapidxml::node_type *p_m_type; // rdi
  char v8; // al
  unsigned int m_type; // eax
  std::size_t m_value_size; // rdx
  std::forward_iterator_tag v11; // cl
  _QWORD *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  char *m_name; // rax
  std::forward_iterator_tag v21; // cl
  char *v22; // r13
  __int64 v23; // rdx
  boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *v24; // rax
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v25; // r14
  const std::string *v26; // rax
  std::forward_iterator_tag v27; // cl
  boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // r13
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  char *v38; // rax
  std::forward_iterator_tag v39; // cl
  char *v40; // r13
  __int64 v41; // rdx
  unsigned __int64 p_rhs; // rsi
  boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *v43; // rax
  boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *v44; // r15
  std::forward_iterator_tag v45; // cl
  __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  char v48; // dl
  std::string::size_type M_string_length; // rax
  std::string::size_type v50; // rax
  char v51; // dl
  char v52; // al
  char v53; // al
  boost::property_tree::detail::rapidxml::xml_node<char> **p_m_first_node; // rdi
  const char *m_value; // rbx
  __int64 v56; // rdx
  std::forward_iterator_tag v57; // cl
  _QWORD *v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  std::forward_iterator_tag v67; // cl
  std::size_t v68; // rdx
  std::string::pointer M_p; // rdi
  _QWORD *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  std::forward_iterator_tag v79; // cl
  boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *v80; // [rsp+8h] [rbp-170h]
  std::string::size_type v81; // [rsp+18h] [rbp-160h]
  std::string v82; // [rsp+20h] [rbp-158h] BYREF
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > v83; // [rsp+40h] [rbp-138h] BYREF
  char *s; // [rsp+70h] [rbp-108h]
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > rhs; // [rsp+78h] [rbp-100h] BYREF
  std::string v86; // [rsp+A0h] [rbp-D8h] BYREF
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > v87; // [rsp+C0h] [rbp-B8h] BYREF
  boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >,boost::mpl::vector0<mpl_::na> >::value_type v88; // [rsp+F0h] [rbp-88h] BYREF

  j = node;
  i = (unsigned __int64)pt;
  p_m_type = &node->m_type;
  v8 = *(_BYTE *)(((unsigned __int64)p_m_type >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
  {
    __asan_report_load4(p_m_type);
    goto LABEL_8;
  }
  m_type = j->m_type;
  if ( m_type > 3 )
  {
LABEL_8:
    if ( m_type != 4 || (flags & 2) != 0 )
      return;
    if ( *(_BYTE *)(((unsigned __int64)&j->m_value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      pt = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)j->m_value;
      if ( !pt )
      {
LABEL_229:
        m_value_size = 0LL;
LABEL_14:
        if ( !pt )
          pt = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
        v82._M_dataplus._M_p = v82._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(&v82, (const char *)pt, (const char *)pt + m_value_size, v3);
        v83.m_data._M_dataplus._M_p = v83.m_data._anon_0._M_local_buf;
        std::string::_M_construct<char *>(
          &v83.m_data,
          v82._M_dataplus._M_p,
          &v82._M_dataplus._M_p[v82._M_string_length],
          v11);
        v70 = (_QWORD *)operator new(0x20uLL);
        v71 = operator new(0x70uLL);
        if ( *(_BYTE *)(((unsigned __int64)(v70 + 1) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8();
        }
        else
        {
          v70[1] = v71;
          if ( !*(_BYTE *)(((unsigned __int64)(v71 + 72) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v71 + 72) &= ~1uLL;
            if ( !*(_BYTE *)(((unsigned __int64)(v70 + 1) >> 3) + 0x7FFF8000) )
            {
              v72 = v70[1];
              if ( !*(_BYTE *)(((unsigned __int64)(v72 + 72) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v72 + 72) &= 1uLL;
                v73 = v70[1];
                if ( !*(_BYTE *)(((unsigned __int64)(v73 + 80) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(v73 + 80) = v73 + 72;
                  v74 = v70[1];
                  if ( !*(_BYTE *)(((unsigned __int64)(v74 + 88) >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)(v74 + 88) = v74 + 72;
                    v75 = v70[1];
                    v76 = v75 + 96;
                    if ( !*(_BYTE *)(((unsigned __int64)(v75 + 104) >> 3) + 0x7FFF8000) )
                    {
                      *(_QWORD *)(v75 + 104) = v76;
                      v77 = v70[1];
                      if ( !*(_BYTE *)(((unsigned __int64)(v77 + 96) >> 3) + 0x7FFF8000) )
                      {
                        *(_QWORD *)(v77 + 96) = v76;
                        if ( !*(_BYTE *)(((unsigned __int64)(v70 + 3) >> 3) + 0x7FFF8000) )
                        {
                          v70[3] = 0LL;
                          v83.m_children = v70;
                          v78 = (unsigned __int64)boost::property_tree::xml_parser::xmlcomment<std::string>();
                          goto LABEL_249;
                        }
LABEL_248:
                        v78 = __asan_report_store8();
LABEL_249:
                        v86._M_dataplus._M_p = v86._anon_0._M_local_buf;
                        if ( *(_BYTE *)((v78 >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8();
                        }
                        else if ( !*(_BYTE *)(((v78 + 8) >> 3) + 0x7FFF8000) )
                        {
                          std::string::_M_construct<char *>(
                            &v86,
                            *(char **)v78,
                            (char *)(*(_QWORD *)(v78 + 8) + *(_QWORD *)v78),
                            v79);
                          goto LABEL_254;
                        }
                        __asan_report_load8();
LABEL_254:
                        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
                          &v87,
                          &v83);
                        v88.first._M_dataplus._M_p = v88.first._anon_0._M_local_buf;
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v86._M_dataplus._M_p == &v86._anon_0 )
                        {
                          v88.first._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_load_si128((const __m128i *)&v86._anon_0);
                        }
                        else
                        {
                          v88.first._M_dataplus._M_p = v86._M_dataplus._M_p;
                          v88.first._anon_0._M_allocated_capacity = v86._anon_0._M_allocated_capacity;
                        }
                        v88.first._M_string_length = v86._M_string_length;
                        v86._M_dataplus._M_p = v86._anon_0._M_local_buf;
                        v86._M_string_length = 0LL;
                        v86._anon_0._M_local_buf[0] = 0;
                        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
                          &v88.second,
                          &v87);
                        if ( *(_BYTE *)(((i + 32) >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        else
                          boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>,boost::mpl::vector0<mpl_::na>>::push_back(
                            (boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >,boost::mpl::vector0<mpl_::na> > *const)(*(_QWORD *)(i + 32) + 16LL),
                            &v88);
                        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v88.second);
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v88.first._M_dataplus._M_p != &v88.first._anon_0 )
                          operator delete(v88.first._M_dataplus._M_p);
                        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v87);
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v86._M_dataplus._M_p != &v86._anon_0 )
                          operator delete(v86._M_dataplus._M_p);
                        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v83);
                        M_p = v82._M_dataplus._M_p;
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v82._M_dataplus._M_p == &v82._anon_0 )
                          return;
LABEL_266:
                        operator delete(M_p);
                        return;
                      }
LABEL_247:
                      __asan_report_store8();
                      goto LABEL_248;
                    }
LABEL_246:
                    __asan_report_store8();
                    goto LABEL_247;
                  }
LABEL_245:
                  __asan_report_store8();
                  goto LABEL_246;
                }
LABEL_244:
                __asan_report_store8();
                goto LABEL_245;
              }
LABEL_243:
              __asan_report_load8();
              goto LABEL_244;
            }
LABEL_242:
            __asan_report_load8();
            goto LABEL_243;
          }
        }
        __asan_report_load8();
        goto LABEL_242;
      }
      if ( !*(_BYTE *)(((unsigned __int64)&j->m_value_size >> 3) + 0x7FFF8000) )
      {
        m_value_size = j->m_value_size;
        goto LABEL_14;
      }
    }
    __asan_report_load8();
    goto LABEL_229;
  }
  if ( m_type >= 2 )
  {
LABEL_168:
    if ( (flags & 1) != 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&j->m_value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        m_value = j->m_value;
        if ( m_value )
          goto LABEL_171;
      }
      m_value = (const char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
LABEL_171:
      v82._M_dataplus._M_p = v82._anon_0._M_local_buf;
      if ( m_value )
        v56 = (__int64)&m_value[strlen(m_value)];
      else
        v56 = -1LL;
      std::string::_M_construct<char const*>(&v82, m_value, (const char *)v56, v3);
      v83.m_data._M_dataplus._M_p = v83.m_data._anon_0._M_local_buf;
      std::string::_M_construct<char *>(
        &v83.m_data,
        v82._M_dataplus._M_p,
        &v82._M_dataplus._M_p[v82._M_string_length],
        v57);
      v58 = (_QWORD *)operator new(0x20uLL);
      v59 = operator new(0x70uLL);
      if ( *(_BYTE *)(((unsigned __int64)(v58 + 1) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store8();
      }
      else
      {
        v58[1] = v59;
        if ( !*(_BYTE *)(((unsigned __int64)(v59 + 72) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v59 + 72) &= ~1uLL;
          if ( !*(_BYTE *)(((unsigned __int64)(v58 + 1) >> 3) + 0x7FFF8000) )
          {
            v60 = v58[1];
            if ( !*(_BYTE *)(((unsigned __int64)(v60 + 72) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v60 + 72) &= 1uLL;
              v61 = v58[1];
              if ( !*(_BYTE *)(((unsigned __int64)(v61 + 80) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v61 + 80) = v61 + 72;
                v62 = v58[1];
                if ( !*(_BYTE *)(((unsigned __int64)(v62 + 88) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(v62 + 88) = v62 + 72;
                  v63 = v58[1];
                  v64 = v63 + 96;
                  if ( !*(_BYTE *)(((unsigned __int64)(v63 + 104) >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)(v63 + 104) = v64;
                    v65 = v58[1];
                    if ( !*(_BYTE *)(((unsigned __int64)(v65 + 96) >> 3) + 0x7FFF8000) )
                    {
                      *(_QWORD *)(v65 + 96) = v64;
                      if ( !*(_BYTE *)(((unsigned __int64)(v58 + 3) >> 3) + 0x7FFF8000) )
                      {
                        v58[3] = 0LL;
                        v83.m_children = v58;
                        v66 = (unsigned __int64)boost::property_tree::xml_parser::xmltext<std::string>();
                        goto LABEL_196;
                      }
LABEL_195:
                      v66 = __asan_report_store8();
LABEL_196:
                      v86._M_dataplus._M_p = v86._anon_0._M_local_buf;
                      if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load8();
                      }
                      else if ( !*(_BYTE *)(((v66 + 8) >> 3) + 0x7FFF8000) )
                      {
                        std::string::_M_construct<char *>(
                          &v86,
                          *(char **)v66,
                          (char *)(*(_QWORD *)(v66 + 8) + *(_QWORD *)v66),
                          v67);
LABEL_201:
                        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
                          &v87,
                          &v83);
                        v88.first._M_dataplus._M_p = v88.first._anon_0._M_local_buf;
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v86._M_dataplus._M_p == &v86._anon_0 )
                        {
                          v88.first._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_load_si128((const __m128i *)&v86._anon_0);
                        }
                        else
                        {
                          v88.first._M_dataplus._M_p = v86._M_dataplus._M_p;
                          v88.first._anon_0._M_allocated_capacity = v86._anon_0._M_allocated_capacity;
                        }
                        v88.first._M_string_length = v86._M_string_length;
                        v86._M_dataplus._M_p = v86._anon_0._M_local_buf;
                        v86._M_string_length = 0LL;
                        v86._anon_0._M_local_buf[0] = 0;
                        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
                          &v88.second,
                          &v87);
                        if ( *(_BYTE *)(((i + 32) >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        else
                          boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>,boost::mpl::vector0<mpl_::na>>::push_back(
                            (boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >,boost::mpl::vector0<mpl_::na> > *const)(*(_QWORD *)(i + 32) + 16LL),
                            &v88);
                        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v88.second);
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v88.first._M_dataplus._M_p != &v88.first._anon_0 )
                          operator delete(v88.first._M_dataplus._M_p);
                        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v87);
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v86._M_dataplus._M_p != &v86._anon_0 )
                          operator delete(v86._M_dataplus._M_p);
                        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v83);
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v82._M_dataplus._M_p != &v82._anon_0 )
                          operator delete(v82._M_dataplus._M_p);
                        return;
                      }
                      __asan_report_load8();
                      goto LABEL_201;
                    }
LABEL_194:
                    __asan_report_store8();
                    goto LABEL_195;
                  }
LABEL_193:
                  __asan_report_store8();
                  goto LABEL_194;
                }
LABEL_192:
                __asan_report_store8();
                goto LABEL_193;
              }
LABEL_191:
              __asan_report_store8();
              goto LABEL_192;
            }
LABEL_190:
            __asan_report_load8();
            goto LABEL_191;
          }
LABEL_189:
          __asan_report_load8();
          goto LABEL_190;
        }
      }
      __asan_report_load8();
      goto LABEL_189;
    }
    if ( *(_BYTE *)(((unsigned __int64)&j->m_value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      pt = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)j->m_value;
      if ( !pt )
      {
LABEL_224:
        v68 = 0LL;
LABEL_219:
        if ( !pt )
          pt = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
        v82._M_dataplus._M_p = v82._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(&v82, (const char *)pt, (const char *)pt + v68, v3);
        std::string::_M_append(i, v82._M_dataplus._M_p, v82._M_string_length);
        M_p = v82._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v82._M_dataplus._M_p == &v82._anon_0 )
          return;
        goto LABEL_266;
      }
      if ( !*(_BYTE *)(((unsigned __int64)&j->m_value_size >> 3) + 0x7FFF8000) )
      {
        v68 = j->m_value_size;
        goto LABEL_219;
      }
    }
    __asan_report_load8();
    goto LABEL_224;
  }
  if ( m_type != 1 )
    return;
  v83.m_data._M_dataplus._M_p = v83.m_data._anon_0._M_local_buf;
  v83.m_data._M_string_length = 0LL;
  v83.m_data._anon_0._M_local_buf[0] = 0;
  v12 = (_QWORD *)operator new(0x20uLL);
  v13 = operator new(0x70uLL);
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_30;
  }
  v12[1] = v13;
  if ( *(_BYTE *)(((unsigned __int64)(v13 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8();
    goto LABEL_31;
  }
  *(_QWORD *)(v13 + 72) &= ~1uLL;
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8();
    goto LABEL_32;
  }
  v14 = v12[1];
  if ( *(_BYTE *)(((unsigned __int64)(v14 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8();
    goto LABEL_33;
  }
  *(_QWORD *)(v14 + 72) &= 1uLL;
  v15 = v12[1];
  if ( *(_BYTE *)(((unsigned __int64)(v15 + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8();
    goto LABEL_34;
  }
  *(_QWORD *)(v15 + 80) = v15 + 72;
  v16 = v12[1];
  if ( *(_BYTE *)(((unsigned __int64)(v16 + 88) >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
    goto LABEL_35;
  }
  *(_QWORD *)(v16 + 88) = v16 + 72;
  v17 = v12[1];
  v18 = v17 + 96;
  if ( *(_BYTE *)(((unsigned __int64)(v17 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
    goto LABEL_36;
  }
  *(_QWORD *)(v17 + 104) = v18;
  v19 = v12[1];
  if ( *(_BYTE *)(((unsigned __int64)(v19 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_store8();
    goto LABEL_37;
  }
  *(_QWORD *)(v19 + 96) = v18;
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 3) >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    goto LABEL_38;
  }
  v12[3] = 0LL;
  v83.m_children = v12;
  if ( !*(_BYTE *)(((unsigned __int64)j >> 3) + 0x7FFF8000) )
  {
    m_name = j->m_name;
    if ( j->m_name )
      goto LABEL_28;
    goto LABEL_39;
  }
LABEL_38:
  __asan_report_load8();
LABEL_39:
  m_name = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
LABEL_28:
  s = m_name;
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(&rhs, &v83);
  v22 = s;
  v88.first._M_dataplus._M_p = v88.first._anon_0._M_local_buf;
  if ( s )
    v23 = (__int64)&v22[strlen(s)];
  else
    v23 = -1LL;
  std::string::_M_construct<char const*>((std::string *const)&v88.first, v22, (const char *)v23, v21);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(&v88.second, &rhs);
  if ( *(_BYTE *)(((unsigned __int64)&pt->m_children >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  else
    v24 = boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>,boost::mpl::vector0<mpl_::na>>::push_back(
            (boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >,boost::mpl::vector0<mpl_::na> > *const)pt->m_children
          + 8,
            &v88).first.node;
  i = (unsigned __int64)v24;
  v25 = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(&v24->space.data_.align_
                                                                                              + 4);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v88.second);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v88.first._M_dataplus._M_p != &v88.first._anon_0 )
    operator delete(v88.first._M_dataplus._M_p);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&rhs);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v83);
  if ( *(_BYTE *)(((unsigned __int64)&j->m_first_attribute >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_53:
    v86._M_dataplus._M_p = v86._anon_0._M_local_buf;
    if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else if ( !*(_BYTE *)(((unsigned __int64)&v26->_M_string_length >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(&v86, v26->_M_dataplus._M_p, &v26->_M_dataplus._M_p[v26->_M_string_length], v27);
LABEL_58:
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(&v87, &v83);
      v88.first._M_dataplus._M_p = v88.first._anon_0._M_local_buf;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v86._M_dataplus._M_p == &v86._anon_0 )
      {
        v88.first._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_load_si128((const __m128i *)&v86._anon_0);
      }
      else
      {
        v88.first._M_dataplus._M_p = v86._M_dataplus._M_p;
        v88.first._anon_0._M_allocated_capacity = v86._anon_0._M_allocated_capacity;
      }
      v88.first._M_string_length = v86._M_string_length;
      v86._M_dataplus._M_p = v86._anon_0._M_local_buf;
      v86._M_string_length = 0LL;
      v86._anon_0._M_local_buf[0] = 0;
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(&v88.second, &v87);
      if ( *(_BYTE *)(((i + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      else
        v28 = boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>,boost::mpl::vector0<mpl_::na>>::push_back(
                (boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >,boost::mpl::vector0<mpl_::na> > *const)(*(_QWORD *)(i + 64) + 16LL),
                &v88).first.node;
      v80 = v28;
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v88.second);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v88.first._M_dataplus._M_p != &v88.first._anon_0 )
        operator delete(v88.first._M_dataplus._M_p);
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v87);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v86._M_dataplus._M_p != &v86._anon_0 )
        operator delete(v86._M_dataplus._M_p);
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v83);
      if ( *(_BYTE *)(((unsigned __int64)&j->m_first_attribute >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
        goto LABEL_72;
      }
      for ( i = (unsigned __int64)j->m_first_attribute; ; i = *(_QWORD *)(i + 48) )
      {
        if ( !i )
          goto LABEL_157;
        v83.m_data._M_dataplus._M_p = v83.m_data._anon_0._M_local_buf;
        v83.m_data._M_string_length = 0LL;
        v83.m_data._anon_0._M_local_buf[0] = 0;
        v29 = (_QWORD *)operator new(0x20uLL);
LABEL_72:
        v30 = v29;
        v31 = operator new(0x70uLL);
        if ( *(_BYTE *)(((unsigned __int64)(v30 + 1) >> 3) + 0x7FFF8000) )
          break;
        v30[1] = v31;
        if ( *(_BYTE *)(((unsigned __int64)(v31 + 72) >> 3) + 0x7FFF8000) )
          goto LABEL_85;
        *(_QWORD *)(v31 + 72) &= ~1uLL;
        if ( *(_BYTE *)(((unsigned __int64)(v30 + 1) >> 3) + 0x7FFF8000) )
          goto LABEL_86;
        v32 = v30[1];
        if ( *(_BYTE *)(((unsigned __int64)(v32 + 72) >> 3) + 0x7FFF8000) )
          goto LABEL_87;
        *(_QWORD *)(v32 + 72) &= 1uLL;
        v33 = v30[1];
        if ( *(_BYTE *)(((unsigned __int64)(v33 + 80) >> 3) + 0x7FFF8000) )
          goto LABEL_88;
        *(_QWORD *)(v33 + 80) = v33 + 72;
        v34 = v30[1];
        if ( *(_BYTE *)(((unsigned __int64)(v34 + 88) >> 3) + 0x7FFF8000) )
          goto LABEL_89;
        *(_QWORD *)(v34 + 88) = v34 + 72;
        v35 = v30[1];
        v36 = v35 + 96;
        if ( *(_BYTE *)(((unsigned __int64)(v35 + 104) >> 3) + 0x7FFF8000) )
          goto LABEL_90;
        *(_QWORD *)(v35 + 104) = v36;
        v37 = v30[1];
        if ( *(_BYTE *)(((unsigned __int64)(v37 + 96) >> 3) + 0x7FFF8000) )
          goto LABEL_91;
        *(_QWORD *)(v37 + 96) = v36;
        if ( *(_BYTE *)(((unsigned __int64)(v30 + 3) >> 3) + 0x7FFF8000) )
          goto LABEL_92;
        v30[3] = 0LL;
        v83.m_children = v30;
        if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
          goto LABEL_93;
        v38 = *(char **)i;
        if ( !*(_QWORD *)i )
          goto LABEL_94;
LABEL_83:
        s = v38;
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(&rhs, &v83);
        v40 = s;
        v88.first._M_dataplus._M_p = v88.first._anon_0._M_local_buf;
        if ( s )
          v41 = (__int64)&v40[strlen(s)];
        else
          v41 = -1LL;
        std::string::_M_construct<char const*>((std::string *const)&v88.first, v40, (const char *)v41, v39);
        p_rhs = (unsigned __int64)&rhs;
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
          &v88.second,
          &rhs);
        if ( *(_BYTE *)(((unsigned __int64)(&v80->space.data_.align_ + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
        }
        else
        {
          p_rhs = (unsigned __int64)&v88;
          v43 = boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>,boost::mpl::vector0<mpl_::na>>::push_back(
                  (boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >,boost::mpl::vector0<mpl_::na> > *const)(*((_QWORD *)&v80->space.data_.align_ + 8) + 16LL),
                  &v88).first.node;
        }
        v44 = v43;
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v88.second);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v88.first._M_dataplus._M_p != &v88.first._anon_0 )
          operator delete(v88.first._M_dataplus._M_p);
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&rhs);
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v83);
        if ( *(_BYTE *)(((i + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
LABEL_130:
          __asan_report_load8();
          goto LABEL_131;
        }
        p_rhs = *(_QWORD *)(i + 8);
        if ( p_rhs )
        {
          if ( !*(_BYTE *)(((i + 24) >> 3) + 0x7FFF8000) )
          {
            v46 = *(_QWORD *)(i + 24);
            goto LABEL_108;
          }
          goto LABEL_130;
        }
LABEL_131:
        v46 = 0LL;
LABEL_108:
        if ( !p_rhs )
          p_rhs = (unsigned __int64)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
        v82._M_dataplus._M_p = v82._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(&v82, (const char *)p_rhs, (const char *)(p_rhs + v46), v45);
        v47 = (unsigned __int64)(&v44->space.data_.align_ + 4);
        if ( *(_BYTE *)(((unsigned __int64)(&v44->space.data_.align_ + 4) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
LABEL_133:
          if ( v82._M_string_length )
          {
            if ( v82._M_string_length != 1 )
            {
              memcpy((void *)v47, (const void *)p_rhs, v82._M_string_length);
              goto LABEL_136;
            }
            v52 = *(_BYTE *)((p_rhs >> 3) + 0x7FFF8000);
            if ( v52 <= (char)(p_rhs & 7) && v52 )
            {
              v47 = p_rhs;
              __asan_report_load1(p_rhs);
            }
            else
            {
              v53 = *(_BYTE *)((v47 >> 3) + 0x7FFF8000);
              if ( v53 > (char)(v47 & 7) || !v53 )
              {
                *(_BYTE *)v47 = *(_BYTE *)p_rhs;
                goto LABEL_136;
              }
            }
            __asan_report_store1(v47, p_rhs);
LABEL_147:
            __asan_report_store8();
          }
          else
          {
LABEL_136:
            M_string_length = v82._M_string_length;
            v47 = (unsigned __int64)(&v44->space.data_.align_ + 5);
            if ( *(_BYTE *)(((unsigned __int64)(&v44->space.data_.align_ + 5) >> 3) + 0x7FFF8000) )
              goto LABEL_147;
            *((_QWORD *)&v44->space.data_.align_ + 5) = v82._M_string_length;
            v50 = *((_QWORD *)&v44->space.data_.align_ + 4) + M_string_length;
            v47 = v50;
            v51 = *(_BYTE *)((v50 >> 3) + 0x7FFF8000);
            if ( v51 > (char)(v50 & 7) || !v51 )
            {
              *(_BYTE *)v50 = 0;
              goto LABEL_119;
            }
          }
          __asan_report_store1(v47, p_rhs);
LABEL_149:
          __asan_report_load8();
LABEL_150:
          v47 = 0LL;
          goto LABEL_115;
        }
        v47 = *((_QWORD *)&v44->space.data_.align_ + 4);
        p_rhs = (unsigned __int64)v82._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v82._M_dataplus._M_p == &v82._anon_0 )
          goto LABEL_133;
        if ( (boost::type_with_alignment<8>::type *)v47 == &v44->space.data_.align_ + 6 )
          goto LABEL_150;
        if ( *(_BYTE *)(((unsigned __int64)(&v44->space.data_.align_ + 6) >> 3) + 0x7FFF8000) )
          goto LABEL_149;
        v81 = *((_QWORD *)&v44->space.data_.align_ + 6);
LABEL_115:
        *((_QWORD *)&v44->space.data_.align_ + 4) = p_rhs;
        if ( *(_BYTE *)(((unsigned __int64)(&v44->space.data_.align_ + 5) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8();
LABEL_152:
          __asan_report_store8();
LABEL_153:
          v82._M_dataplus._M_p = v82._anon_0._M_local_buf;
          goto LABEL_119;
        }
        *((_QWORD *)&v44->space.data_.align_ + 5) = v82._M_string_length;
        if ( *(_BYTE *)(((unsigned __int64)(&v44->space.data_.align_ + 6) >> 3) + 0x7FFF8000) )
          goto LABEL_152;
        *((_QWORD *)&v44->space.data_.align_ + 6) = v82._anon_0._M_allocated_capacity;
        if ( !v47 )
          goto LABEL_153;
        v82._M_dataplus._M_p = (std::string::pointer)v47;
        v82._anon_0._M_allocated_capacity = v81;
LABEL_119:
        v82._M_string_length = 0LL;
        v48 = *(_BYTE *)(((unsigned __int64)v82._M_dataplus._M_p >> 3) + 0x7FFF8000);
        if ( v48 <= ((__int64)v82._M_dataplus._M_p & 7) && v48 )
        {
          __asan_report_store1(v82._M_dataplus._M_p, p_rhs);
LABEL_155:
          __asan_report_load8();
LABEL_156:
          __asan_report_load8();
          goto LABEL_157;
        }
        *v82._M_dataplus._M_p = 0;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v82._M_dataplus._M_p != &v82._anon_0 )
          operator delete(v82._M_dataplus._M_p);
        if ( *(_BYTE *)(((i + 32) >> 3) + 0x7FFF8000) )
          goto LABEL_155;
        if ( !*(_QWORD *)(i + 32) )
          goto LABEL_157;
        if ( *(_BYTE *)(((i + 48) >> 3) + 0x7FFF8000) )
          goto LABEL_156;
      }
      __asan_report_store8();
LABEL_85:
      __asan_report_load8();
LABEL_86:
      __asan_report_load8();
LABEL_87:
      __asan_report_load8();
LABEL_88:
      __asan_report_store8();
LABEL_89:
      __asan_report_store8();
LABEL_90:
      __asan_report_store8();
LABEL_91:
      __asan_report_store8();
LABEL_92:
      __asan_report_store8();
LABEL_93:
      __asan_report_load8();
LABEL_94:
      v38 = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
      goto LABEL_83;
    }
    __asan_report_load8();
    goto LABEL_58;
  }
  if ( j->m_first_attribute )
  {
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(&v83);
    v26 = boost::property_tree::xml_parser::xmlattr<std::string>();
    goto LABEL_53;
  }
LABEL_157:
  p_m_first_node = &j->m_first_node;
  if ( *(_BYTE *)(((unsigned __int64)&j->m_first_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_160:
    __asan_report_load8();
LABEL_161:
    __asan_handle_no_return(p_m_first_node);
    __assert_fail(
      "this->m_parent",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_t"
      "ree/detail/rapidxml.hpp",
      0x3DEu,
      "boost::property_tree::detail::rapidxml::xml_node<Ch>* boost::property_tree::detail::rapidxml::xml_node<Ch>::next_s"
      "ibling(const Ch*, std::size_t, bool) const [with Ch = char; std::size_t = long unsigned int]");
  }
  for ( j = j->m_first_node; j; j = j->m_next_sibling )
  {
    pt = v25;
    boost::property_tree::xml_parser::read_xml_node<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>,char>(
      j,
      v25,
      flags);
    p_m_first_node = &j->m_parent;
    if ( *(_BYTE *)(((unsigned __int64)&j->m_parent >> 3) + 0x7FFF8000) )
      goto LABEL_160;
    if ( !j->m_parent )
      goto LABEL_161;
    if ( *(_BYTE *)(((unsigned __int64)&j->m_next_sibling >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
      goto LABEL_168;
    }
  }
};

// Line 86: range 000000000C2AA030-000000000C2ABE16
void __fastcall boost::property_tree::xml_parser::read_xml_internal<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
        std::istream *stream,
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *pt,
        int flags,
        const std::string *filename)
{
  char *v4; // rbx
  char *v5; // rbp
  int v6; // r12d
  unsigned __int64 v7; // r14
  bool v8; // r15
  double v9; // xmm0_8
  _DWORD *v10; // r13
  __int64 v11; // rax
  char *v12; // rsi
  char v13; // cl
  int v14; // edx
  char *v15; // rsi
  char *v16; // rdx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rdi
  int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdx
  int v25; // eax
  unsigned __int64 v26; // rdx
  char *v27; // rdi
  unsigned __int64 v28; // rax
  char *v29; // rdx
  int v30; // eax
  char *v31; // rdi
  unsigned __int64 v32; // rax
  void *v33; // rax
  void *v34; // rdi
  __int64 v35; // rax
  char *v36; // rdi
  char *v37; // rdx
  char v38; // al
  char *v39; // rdi
  void *v40; // rdi
  unsigned __int64 v41; // rcx
  __int64 jj; // rax
  __int64 kk; // rax
  char v44; // al
  _BYTE *v45; // rdi
  char v46; // al
  char v47; // al
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  char v50; // dl
  char v51; // cl
  __int64 v52; // rax
  __int64 v53; // rdi
  char v54; // dl
  __int64 v55; // rdx
  unsigned __int64 v56; // rbp
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 n; // rax
  __int64 v60; // rax
  char v61; // al
  _BYTE *v62; // rdi
  char v63; // al
  char v64; // al
  unsigned __int64 ii; // rax
  __int64 v66; // rdx
  char v67; // dl
  char v68; // cl
  __int64 v69; // rax
  __int64 v70; // rdi
  char v71; // dl
  __int64 v72; // rdx
  unsigned __int64 v73; // rbp
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  __int64 i; // rax
  __int64 v77; // rax
  char v78; // al
  _BYTE *v79; // rdi
  char v80; // al
  char v81; // al
  unsigned __int64 j; // rax
  __int64 v83; // rdx
  char v84; // dl
  char v85; // cl
  __int64 v86; // rax
  __int64 v87; // rdi
  char v88; // dl
  __int64 v89; // rdx
  unsigned __int64 exception; // rbp
  __int64 v91; // rax
  unsigned __int64 v92; // rcx
  __int64 k; // rax
  __int64 v94; // rax
  char v95; // al
  _BYTE *v96; // rdi
  char v97; // al
  char v98; // al
  unsigned __int64 m; // rax
  __int64 v100; // rdx
  char v101; // dl
  char v102; // cl
  __int64 v103; // rax
  __int64 v104; // rdi
  char v105; // dl
  __int64 v106; // rdx
  unsigned __int64 v107; // rbp
  __int64 v108; // rax
  _QWORD *v109; // rbp
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rax
  boost::property_tree::detail::rapidxml::xml_node<char> *mm; // rbp
  __int64 v118; // r13
  __int64 v119; // rdx
  __int64 v120; // r12
  struct _Unwind_Exception *v121; // rbp
  char *v122; // rdi
  char *v123; // rdi
  struct _Unwind_Exception *v124; // rax
  __int64 v125; // rdx
  void *m_children; // rax
  unsigned __int64 v127; // rax
  char *v128; // rdi
  void (__fastcall *v129)(double); // rax
  void *v130; // rdi
  __int64 v131; // r13
  void (__fastcall *v132)(double); // rax
  char **v133; // rbp
  unsigned __int64 v134; // r12
  char *v135; // rax
  const char *v136; // rax
  int v138; // [rsp+10h] [rbp-103A8h]
  std::istream *v139; // [rsp+18h] [rbp-103A0h]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-10379h] BYREF
  std::string msg; // [rsp+40h] [rbp-10378h] BYREF
  boost::property_tree::file_parser_error v144; // [rsp+60h] [rbp-10358h] BYREF
  __int64 v145[8280]; // [rsp+C0h] [rbp-102F8h] BYREF
  char v146; // [rsp+10380h] [rbp-38h] BYREF

  v139 = stream;
  v145[0] = 1102416563LL;
  v145[1] = (__int64)"7 32 8 7 text:86 64 8 7 text:86 96 8 7 text:86 128 8 7 text:86 160 24 4 v:97 224 40 9 local:127 304"
                     " 65672 7 doc:113";
  v145[2] = (__int64)boost::property_tree::xml_parser::read_xml_internal<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>;
  v10 = (_DWORD *)((unsigned __int64)v145 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -218959360;
  v10[536862722] = -218959360;
  v10[536862723] = -218959360;
  v10[536862724] = -218959360;
  v10[536862725] = -234881024;
  v10[536862726] = -218959118;
  v10[536862728] = -218959360;
  v10[536862729] = 62194;
  v10[536864781] = -218103808;
  v10[536864782] = -202116109;
  v10[536864783] = -202116109;
  v10[536864784] = -202116109;
  v10[536864785] = -202116109;
  v10[536864786] = -202116109;
  v10[536864787] = -202116109;
  v10[536864788] = -202116109;
  v10[536864789] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)stream >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_9;
  }
  v4 = &v146;
  v11 = *(_QWORD *)stream;
  stream = (std::istream *)(*(_QWORD *)stream - 24LL);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v139 - 24LL) >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8();
LABEL_10:
    __asan_report_load4(stream);
    goto LABEL_11;
  }
  v12 = (char *)v139 + *(_QWORD *)(v11 - 24);
  stream = (std::istream *)(v12 + 24);
  v13 = *(_BYTE *)(((unsigned __int64)(v12 + 24) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v12 + 24) & 7) + 3) >= v13 && v13 )
    goto LABEL_10;
  v14 = *((_DWORD *)v12 + 6);
  BYTE1(v14) &= ~0x10u;
  *((_DWORD *)v12 + 6) = v14;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v139 - 24LL) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8();
    goto LABEL_12;
  }
  v15 = (char *)v139 + *(_QWORD *)(*(_QWORD *)v139 - 24LL);
  v16 = (char *)((unsigned __int64)(v15 + 232) >> 3);
  if ( v16[2147450880] )
  {
LABEL_12:
    v9 = __asan_report_load8();
    goto LABEL_13;
  }
  memset(&v145[20], 0, 24);
  v5 = (char *)*((_QWORD *)v15 + 29);
  v6 = -1;
  v7 = 0LL;
  v138 = -1;
  while ( 1 )
  {
    v20 = -1;
    if ( !v5 )
      goto LABEL_67;
LABEL_13:
    if ( *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_22:
      v19 = v18;
      v9 = __asan_report_load8();
LABEL_23:
      __asan_report_load1(v19);
LABEL_24:
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_28:
        v22 = v21;
        v9 = __asan_report_load8();
        goto LABEL_29;
      }
      v21 = *(_QWORD *)v5 + 72LL;
      if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
        goto LABEL_28;
      v20 = (*(__int64 (__fastcall **)(double))(*(_QWORD *)v5 + 72LL))(v9);
      goto LABEL_19;
    }
    v17 = *((_QWORD *)v5 + 2);
    v18 = v5 + 24;
    if ( *(_BYTE *)(((unsigned __int64)(v5 + 24) >> 3) + 0x7FFF8000) )
      goto LABEL_22;
    if ( v17 >= *((_QWORD *)v5 + 3) )
      goto LABEL_24;
    v19 = (_QWORD *)*((_QWORD *)v5 + 2);
    v16 = (char *)*(unsigned __int8 *)((v17 >> 3) + 0x7FFF8000);
    if ( (char)v16 <= (v5[16] & 7) && (_BYTE)v16 )
      goto LABEL_23;
    v20 = *(unsigned __int8 *)v17;
LABEL_19:
    if ( v20 == -1 )
      v5 = 0LL;
LABEL_67:
    v8 = v20 == -1;
    v25 = v138;
    v22 = v7;
    if ( !v7 || v138 != -1 )
      goto LABEL_69;
LABEL_29:
    if ( *(_BYTE *)(((v7 + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_38:
      v22 = (unsigned __int64)v24;
      v9 = __asan_report_load8();
LABEL_39:
      __asan_report_load1(v22);
LABEL_40:
      if ( !*(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      {
        v26 = *(_QWORD *)v7 + 72LL;
        if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          goto LABEL_44;
        v25 = (*(__int64 (__fastcall **)(unsigned __int64, double))(*(_QWORD *)v7 + 72LL))(v22, v9);
        goto LABEL_35;
      }
      __asan_report_load8();
LABEL_44:
      v27 = (char *)v26;
      v9 = __asan_report_load8();
LABEL_45:
      if ( *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v28 = *((_QWORD *)v5 + 2);
        v29 = v5 + 24;
        if ( !*(_BYTE *)(((unsigned __int64)(v5 + 24) >> 3) + 0x7FFF8000) )
        {
          if ( v28 >= *((_QWORD *)v5 + 3) )
          {
LABEL_56:
            if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8();
LABEL_60:
              v9 = __asan_report_load8();
              goto LABEL_61;
            }
            if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v5 + 72LL) >> 3) + 0x7FFF8000) )
              goto LABEL_60;
            v30 = (*(__int64 (__fastcall **)(char *, double))(*(_QWORD *)v5 + 72LL))(v27, v9);
            goto LABEL_51;
          }
          v27 = (char *)*((_QWORD *)v5 + 2);
          v16 = (char *)*(unsigned __int8 *)((v28 >> 3) + 0x7FFF8000);
          if ( (char)v16 > (v5[16] & 7) || !(_BYTE)v16 )
          {
            v30 = *(unsigned __int8 *)v28;
LABEL_51:
            if ( v30 == -1 )
              v5 = 0LL;
            goto LABEL_72;
          }
LABEL_55:
          __asan_report_load1(v27);
          goto LABEL_56;
        }
      }
      v27 = v29;
      v9 = __asan_report_load8();
      goto LABEL_55;
    }
    v23 = *(_QWORD *)(v7 + 16);
    v24 = (_QWORD *)(v7 + 24);
    if ( *(_BYTE *)(((v7 + 24) >> 3) + 0x7FFF8000) )
      goto LABEL_38;
    if ( v23 >= *(_QWORD *)(v7 + 24) )
      goto LABEL_40;
    v22 = *(_QWORD *)(v7 + 16);
    v16 = (char *)*(unsigned __int8 *)((v23 >> 3) + 0x7FFF8000);
    if ( (char)v16 <= (*(_BYTE *)(v7 + 16) & 7) && (_BYTE)v16 )
      goto LABEL_39;
    v25 = *(unsigned __int8 *)v23;
LABEL_35:
    if ( v25 == -1 )
      v7 = 0LL;
LABEL_69:
    if ( v8 == (v25 == -1) )
      break;
    LOBYTE(v30) = v6;
    v27 = v5;
    if ( v5 && v6 == -1 )
      goto LABEL_45;
LABEL_72:
    __a.gap0[0] = v30;
    std::vector<char>::emplace_back<char>((std::vector<char> *const)(v4 - 66080), __a.gap0, v16);
LABEL_61:
    v31 = v5;
    if ( *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_74:
      v31 = v16;
      v9 = __asan_report_load8();
      goto LABEL_75;
    }
    v32 = *((_QWORD *)v5 + 2);
    v16 = v5 + 24;
    if ( *(_BYTE *)(((unsigned __int64)(v5 + 24) >> 3) + 0x7FFF8000) )
      goto LABEL_74;
    if ( v32 < *((_QWORD *)v5 + 3) )
    {
      *((_QWORD *)v5 + 2) = v32 + 1;
      goto LABEL_65;
    }
LABEL_75:
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_79:
      __asan_report_load8();
      v34 = v33;
      __cxa_begin_catch(v33);
      v35 = *((_QWORD *)v4 - 8260);
      if ( v35 != *((_QWORD *)v4 - 8259) )
        *((_QWORD *)v4 - 8259) = v35;
      __asan_handle_no_return(v34);
      __cxa_rethrow();
    }
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v5 + 80LL) >> 3) + 0x7FFF8000) )
      goto LABEL_79;
    (*(void (__fastcall **)(char *, double))(*(_QWORD *)v5 + 80LL))(v31, v9);
LABEL_65:
    v6 = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v139 - 24LL) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_88:
    __asan_report_load4(v37);
LABEL_89:
    std::string::basic_string<std::allocator<char>>(&msg, "read error", &__a);
    boost::property_tree::file_parser_error::file_parser_error(&v144, &msg, filename, 0LL);
    *(_QWORD *)v144.baseclass_0 = &`vtable for'boost::property_tree::xml_parser::xml_parser_error + 2;
    __asan_handle_no_return(&v144);
    boost::exception_detail::throw_exception_<boost::property_tree::xml_parser::xml_parser_error>(
      (const boost::property_tree::xml_parser::xml_parser_error *)&v144,
      "void boost::property_tree::xml_parser::read_xml_internal(std::basic_istream<typename Ptree::key_type::value_type>&"
      ", Ptree&, int, const string&) [with Ptree = boost::property_tree::basic_ptree<std::__cxx11::basic_string<char>, st"
      "d::__cxx11::basic_string<char> >; typename Ptree::key_type::value_type = char; typename Ptree::key_type::value_typ"
      "e = char; std::string = std::__cxx11::basic_string<char>]",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_t"
      "ree/detail/xml_parser_read_rapidxml.hpp",
      100);
  }
  v36 = (char *)v139 + *(_QWORD *)(*(_QWORD *)v139 - 24LL);
  v37 = v36 + 32;
  v38 = *(_BYTE *)(((unsigned __int64)(v36 + 32) >> 3) + 0x7FFF8000);
  if ( v38 && v38 <= 3 )
    goto LABEL_88;
  if ( *((_DWORD *)v36 + 8) )
    goto LABEL_89;
  __a.gap0[0] = 0;
  v39 = v4 - 66080;
  std::vector<char>::emplace_back<char>((std::vector<char> *const)(v4 - 66080), __a.gap0, v37);
  *((_QWORD *)v4 - 8242) = 0LL;
  *((_QWORD *)v4 - 8241) = 0LL;
  *((_QWORD *)v4 - 8238) = 0LL;
  *((_DWORD *)v4 - 16474) = 0;
  *((_QWORD *)v4 - 8236) = 0LL;
  *((_QWORD *)v4 - 8234) = 0LL;
  *((_QWORD *)v4 - 35) = 0LL;
  *((_QWORD *)v4 - 34) = 0LL;
  *((_QWORD *)v4 - 8230) = v4 - 65816;
  *((_QWORD *)v4 - 8229) = &v4[((65816 - (_DWORD)v4) & 7) - 65816];
  *((_QWORD *)v4 - 8228) = v4 - 280;
  if ( (flags & 2) == 0 )
  {
    if ( (flags & 4) != 0 )
    {
      v75 = *((_QWORD *)v4 - 8260);
      *((_QWORD *)v4 - 8268) = v75;
      if ( !v75 )
      {
        __asan_handle_no_return(v39);
        __assert_fail(
          "text",
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/proper"
          "ty_tree/detail/rapidxml.hpp",
          0x557u,
          "void boost::property_tree::detail::rapidxml::xml_document<Ch>::parse(Ch*) [with int Flags = 3136; Ch = char]");
      }
      for ( i = *((_QWORD *)v4 - 8236); ; i = *(_QWORD *)(i + 88) )
      {
        if ( !i )
          goto LABEL_251;
        if ( *(_BYTE *)(((unsigned __int64)(i + 32) >> 3) + 0x7FFF8000) )
        {
          i = __asan_report_store8();
        }
        else
        {
          *(_QWORD *)(i + 32) = 0LL;
          if ( *(_BYTE *)(((unsigned __int64)(i + 88) >> 3) + 0x7FFF8000) )
          {
            v9 = __asan_report_load8();
LABEL_251:
            *((_QWORD *)v4 - 8236) = 0LL;
            v77 = *((_QWORD *)v4 - 8234);
            while ( 2 )
            {
              if ( !v77 )
                goto LABEL_258;
              if ( *(_BYTE *)(((unsigned __int64)(v77 + 32) >> 3) + 0x7FFF8000) )
              {
                v77 = __asan_report_store8();
              }
              else
              {
                *(_QWORD *)(v77 + 32) = 0LL;
                if ( *(_BYTE *)(((unsigned __int64)(v77 + 48) >> 3) + 0x7FFF8000) )
                {
                  v9 = __asan_report_load8();
LABEL_258:
                  *((_QWORD *)v4 - 8234) = 0LL;
                  v78 = *(_BYTE *)((v75 >> 3) + 0x7FFF8000);
                  if ( v78 <= (char)(v75 & 7) && v78 )
                  {
                    v79 = (_BYTE *)v75;
                    __asan_report_load1(v75);
                  }
                  else
                  {
                    if ( *(_BYTE *)v75 != 0xEF )
                      goto LABEL_285;
                    v79 = (_BYTE *)(v75 + 1);
                    v80 = *(_BYTE *)(((v75 + 1) >> 3) + 0x7FFF8000);
                    if ( v80 > (char)((v75 + 1) & 7) || !v80 )
                    {
                      if ( *(_BYTE *)(v75 + 1) != 0xBB )
                        goto LABEL_285;
                      v79 = (_BYTE *)(v75 + 2);
                      v81 = *(_BYTE *)(((v75 + 2) >> 3) + 0x7FFF8000);
                      if ( v81 > (char)((v75 + 2) & 7) || !v81 )
                      {
                        if ( *(_BYTE *)(v75 + 2) == 0xBF )
                          *((_QWORD *)v4 - 8268) = v75 + 3;
LABEL_285:
                        for ( j = *((_QWORD *)v4 - 8268); ; ++j )
                        {
                          v79 = (_BYTE *)j;
                          v84 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                          if ( v84 <= (char)(j & 7) && v84 )
                          {
LABEL_271:
                            j = __asan_report_load1(v79);
                          }
                          else
                          {
                            LOBYTE(v83) = *(_BYTE *)j;
                            if ( (unsigned int)*(char *)j <= 0x7F )
                            {
                              v83 = (char)v83;
                              goto LABEL_279;
                            }
                          }
                          v83 = 122LL;
LABEL_279:
                          v85 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v83] >> 3)
                                         + 0x7FFF8000);
                          if ( v85 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v83] & 7)
                            && v85 )
                          {
                            j = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v83]);
LABEL_282:
                            *((_QWORD *)v4 - 8268) = j;
                            if ( !*(_BYTE *)j )
                              goto LABEL_388;
                            if ( *(_BYTE *)j != 60 )
                              goto LABEL_308;
                            *((_QWORD *)v4 - 8268) = j + 1;
                            v86 = (__int64)boost::property_tree::detail::rapidxml::xml_document<char>::parse_node<3136>(
                                             (boost::property_tree::detail::rapidxml::xml_document<char> *const)(v4 - 65936),
                                             (char **)v4 - 8268);
                            if ( !v86 )
                              goto LABEL_285;
                            v87 = v86 + 32;
                            if ( *(_BYTE *)(((unsigned __int64)(v86 + 32) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_load8();
                            }
                            else
                            {
                              if ( *(_QWORD *)(v86 + 32) )
                                goto LABEL_300;
                              v87 = v86 + 40;
                              v88 = *(_BYTE *)(((unsigned __int64)(v86 + 40) >> 3) + 0x7FFF8000);
                              if ( !v88 || v88 > 3 )
                              {
                                if ( *(_DWORD *)(v86 + 40) )
                                {
                                  if ( *((_QWORD *)v4 - 8236) )
                                  {
                                    v89 = *((_QWORD *)v4 - 8235);
                                    if ( *(_BYTE *)(((unsigned __int64)(v86 + 80) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store8();
                                    }
                                    else
                                    {
                                      *(_QWORD *)(v86 + 80) = v89;
                                      if ( !*(_BYTE *)(((unsigned __int64)(v89 + 88) >> 3) + 0x7FFF8000) )
                                      {
                                        *(_QWORD *)(v89 + 88) = v86;
                                        goto LABEL_295;
                                      }
                                    }
                                    v86 = __asan_report_store8();
                                  }
                                  if ( *(_BYTE *)(((unsigned __int64)(v86 + 80) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store8();
                                  }
                                  else
                                  {
                                    *(_QWORD *)(v86 + 80) = 0LL;
                                    *((_QWORD *)v4 - 8236) = v86;
LABEL_295:
                                    *((_QWORD *)v4 - 8235) = v86;
                                    if ( !*(_BYTE *)(((unsigned __int64)(v86 + 32) >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)(v86 + 32) = v4 - 65936;
                                      if ( !*(_BYTE *)(((unsigned __int64)(v86 + 88) >> 3) + 0x7FFF8000) )
                                      {
                                        *(_QWORD *)(v86 + 88) = 0LL;
                                        goto LABEL_285;
                                      }
LABEL_307:
                                      __asan_report_store8();
LABEL_308:
                                      exception = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                      v91 = *((_QWORD *)v4 - 8268);
                                      if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
                                        v91 = __asan_report_store8();
                                      *(_QWORD *)exception = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                           + 2;
                                      if ( *(_BYTE *)(((exception + 8) >> 3) + 0x7FFF8000) )
                                        v91 = __asan_report_store8();
                                      *(_QWORD *)(exception + 8) = "expected <";
                                      if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
                                        v91 = __asan_report_store8();
                                      *(_QWORD *)(exception + 16) = v91;
                                      __asan_handle_no_return(exception + 16);
                                      _cxa_throw(
                                        (void *)exception,
                                        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                    }
                                  }
                                  __asan_report_store8();
                                  goto LABEL_307;
                                }
LABEL_300:
                                __asan_handle_no_return(v87);
                                __assert_fail(
                                  "child && !child->parent() && child->type() != node_document",
                                  "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../bo"
                                  "ost_1_70_0d/boost/property_tree/detail/rapidxml.hpp",
                                  0x43Bu,
                                  "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property"
                                  "_tree::detail::rapidxml::xml_node<Ch>*) [with Ch = char]");
                              }
                            }
                            __asan_report_load4(v87);
                            goto LABEL_300;
                          }
                          if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v83] )
                            goto LABEL_282;
                        }
                      }
LABEL_270:
                      __asan_report_load1(v79);
                      goto LABEL_271;
                    }
                  }
                  __asan_report_load1(v79);
                  goto LABEL_270;
                }
              }
              v77 = *(_QWORD *)(v77 + 48);
              continue;
            }
          }
        }
      }
    }
    v92 = *((_QWORD *)v4 - 8260);
    *((_QWORD *)v4 - 8264) = v92;
    if ( !v92 )
    {
      __asan_handle_no_return(v39);
      __assert_fail(
        "text",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property"
        "_tree/detail/rapidxml.hpp",
        0x557u,
        "void boost::property_tree::detail::rapidxml::xml_document<Ch>::parse(Ch*) [with int Flags = 64; Ch = char]");
    }
    for ( k = *((_QWORD *)v4 - 8236); ; k = *(_QWORD *)(k + 88) )
    {
      if ( !k )
        goto LABEL_324;
      if ( *(_BYTE *)(((unsigned __int64)(k + 32) >> 3) + 0x7FFF8000) )
      {
        k = __asan_report_store8();
      }
      else
      {
        *(_QWORD *)(k + 32) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)(k + 88) >> 3) + 0x7FFF8000) )
        {
          v9 = __asan_report_load8();
LABEL_324:
          *((_QWORD *)v4 - 8236) = 0LL;
          v94 = *((_QWORD *)v4 - 8234);
          while ( 2 )
          {
            if ( !v94 )
              goto LABEL_331;
            if ( *(_BYTE *)(((unsigned __int64)(v94 + 32) >> 3) + 0x7FFF8000) )
            {
              v94 = __asan_report_store8();
            }
            else
            {
              *(_QWORD *)(v94 + 32) = 0LL;
              if ( *(_BYTE *)(((unsigned __int64)(v94 + 48) >> 3) + 0x7FFF8000) )
              {
                v9 = __asan_report_load8();
LABEL_331:
                *((_QWORD *)v4 - 8234) = 0LL;
                v95 = *(_BYTE *)((v92 >> 3) + 0x7FFF8000);
                if ( v95 <= (char)(v92 & 7) && v95 )
                {
                  v96 = (_BYTE *)v92;
                  __asan_report_load1(v92);
                }
                else
                {
                  if ( *(_BYTE *)v92 != 0xEF )
                    goto LABEL_358;
                  v96 = (_BYTE *)(v92 + 1);
                  v97 = *(_BYTE *)(((v92 + 1) >> 3) + 0x7FFF8000);
                  if ( v97 > (char)((v92 + 1) & 7) || !v97 )
                  {
                    if ( *(_BYTE *)(v92 + 1) != 0xBB )
                      goto LABEL_358;
                    v96 = (_BYTE *)(v92 + 2);
                    v98 = *(_BYTE *)(((v92 + 2) >> 3) + 0x7FFF8000);
                    if ( v98 > (char)((v92 + 2) & 7) || !v98 )
                    {
                      if ( *(_BYTE *)(v92 + 2) == 0xBF )
                        *((_QWORD *)v4 - 8264) = v92 + 3;
LABEL_358:
                      for ( m = *((_QWORD *)v4 - 8264); ; ++m )
                      {
                        v96 = (_BYTE *)m;
                        v101 = *(_BYTE *)((m >> 3) + 0x7FFF8000);
                        if ( v101 <= (char)(m & 7) && v101 )
                        {
LABEL_344:
                          m = __asan_report_load1(v96);
                        }
                        else
                        {
                          LOBYTE(v100) = *(_BYTE *)m;
                          if ( (unsigned int)*(char *)m <= 0x7F )
                          {
                            v100 = (char)v100;
                            goto LABEL_352;
                          }
                        }
                        v100 = 122LL;
LABEL_352:
                        v102 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v100] >> 3)
                                        + 0x7FFF8000);
                        if ( v102 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v100] & 7)
                          && v102 )
                        {
                          m = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v100]);
LABEL_355:
                          *((_QWORD *)v4 - 8264) = m;
                          if ( !*(_BYTE *)m )
                            goto LABEL_388;
                          if ( *(_BYTE *)m != 60 )
                            goto LABEL_381;
                          *((_QWORD *)v4 - 8264) = m + 1;
                          v103 = (__int64)boost::property_tree::detail::rapidxml::xml_document<char>::parse_node<64>(
                                            (boost::property_tree::detail::rapidxml::xml_document<char> *const)(v4 - 65936),
                                            (char **)v4 - 8264);
                          if ( !v103 )
                            goto LABEL_358;
                          v104 = v103 + 32;
                          if ( *(_BYTE *)(((unsigned __int64)(v103 + 32) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_load8();
                          }
                          else
                          {
                            if ( *(_QWORD *)(v103 + 32) )
                              goto LABEL_373;
                            v104 = v103 + 40;
                            v105 = *(_BYTE *)(((unsigned __int64)(v103 + 40) >> 3) + 0x7FFF8000);
                            if ( !v105 || v105 > 3 )
                            {
                              if ( *(_DWORD *)(v103 + 40) )
                              {
                                if ( *((_QWORD *)v4 - 8236) )
                                {
                                  v106 = *((_QWORD *)v4 - 8235);
                                  if ( *(_BYTE *)(((unsigned __int64)(v103 + 80) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store8();
                                  }
                                  else
                                  {
                                    *(_QWORD *)(v103 + 80) = v106;
                                    if ( !*(_BYTE *)(((unsigned __int64)(v106 + 88) >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)(v106 + 88) = v103;
                                      goto LABEL_368;
                                    }
                                  }
                                  v103 = __asan_report_store8();
                                }
                                if ( *(_BYTE *)(((unsigned __int64)(v103 + 80) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store8();
                                }
                                else
                                {
                                  *(_QWORD *)(v103 + 80) = 0LL;
                                  *((_QWORD *)v4 - 8236) = v103;
LABEL_368:
                                  *((_QWORD *)v4 - 8235) = v103;
                                  if ( !*(_BYTE *)(((unsigned __int64)(v103 + 32) >> 3) + 0x7FFF8000) )
                                  {
                                    *(_QWORD *)(v103 + 32) = v4 - 65936;
                                    if ( !*(_BYTE *)(((unsigned __int64)(v103 + 88) >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)(v103 + 88) = 0LL;
                                      goto LABEL_358;
                                    }
LABEL_380:
                                    __asan_report_store8();
LABEL_381:
                                    v107 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                    v108 = *((_QWORD *)v4 - 8264);
                                    if ( *(_BYTE *)((v107 >> 3) + 0x7FFF8000) )
                                      v108 = __asan_report_store8();
                                    *(_QWORD *)v107 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                    + 2;
                                    if ( *(_BYTE *)(((v107 + 8) >> 3) + 0x7FFF8000) )
                                      v108 = __asan_report_store8();
                                    *(_QWORD *)(v107 + 8) = "expected <";
                                    if ( *(_BYTE *)(((v107 + 16) >> 3) + 0x7FFF8000) )
                                      v108 = __asan_report_store8();
                                    *(_QWORD *)(v107 + 16) = v108;
                                    __asan_handle_no_return(v107 + 16);
                                    _cxa_throw(
                                      (void *)v107,
                                      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                  }
                                }
                                __asan_report_store8();
                                goto LABEL_380;
                              }
LABEL_373:
                              __asan_handle_no_return(v104);
                              __assert_fail(
                                "child && !child->parent() && child->type() != node_document",
                                "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boos"
                                "t_1_70_0d/boost/property_tree/detail/rapidxml.hpp",
                                0x43Bu,
                                "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property_t"
                                "ree::detail::rapidxml::xml_node<Ch>*) [with Ch = char]");
                            }
                          }
                          __asan_report_load4(v104);
                          goto LABEL_373;
                        }
                        if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v100] )
                          goto LABEL_355;
                      }
                    }
LABEL_343:
                    __asan_report_load1(v96);
                    goto LABEL_344;
                  }
                }
                __asan_report_load1(v96);
                goto LABEL_343;
              }
            }
            v94 = *(_QWORD *)(v94 + 48);
            continue;
          }
        }
      }
    }
  }
  if ( (flags & 4) == 0 )
  {
    v58 = *((_QWORD *)v4 - 8260);
    *((_QWORD *)v4 - 8272) = v58;
    if ( !v58 )
    {
      __asan_handle_no_return(v39);
      __assert_fail(
        "text",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property"
        "_tree/detail/rapidxml.hpp",
        0x557u,
        "void boost::property_tree::detail::rapidxml::xml_document<Ch>::parse(Ch*) [with int Flags = 0; Ch = char]");
    }
    for ( n = *((_QWORD *)v4 - 8236); ; n = *(_QWORD *)(n + 88) )
    {
      if ( !n )
        goto LABEL_177;
      if ( *(_BYTE *)(((unsigned __int64)(n + 32) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_store8();
      }
      else
      {
        *(_QWORD *)(n + 32) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)(n + 88) >> 3) + 0x7FFF8000) )
        {
          v9 = __asan_report_load8();
LABEL_177:
          *((_QWORD *)v4 - 8236) = 0LL;
          v60 = *((_QWORD *)v4 - 8234);
          while ( 2 )
          {
            if ( !v60 )
              goto LABEL_184;
            if ( *(_BYTE *)(((unsigned __int64)(v60 + 32) >> 3) + 0x7FFF8000) )
            {
              v60 = __asan_report_store8();
            }
            else
            {
              *(_QWORD *)(v60 + 32) = 0LL;
              if ( *(_BYTE *)(((unsigned __int64)(v60 + 48) >> 3) + 0x7FFF8000) )
              {
                v9 = __asan_report_load8();
LABEL_184:
                *((_QWORD *)v4 - 8234) = 0LL;
                v61 = *(_BYTE *)((v58 >> 3) + 0x7FFF8000);
                if ( v61 <= (char)(v58 & 7) && v61 )
                {
                  v62 = (_BYTE *)v58;
                  __asan_report_load1(v58);
                }
                else
                {
                  if ( *(_BYTE *)v58 != 0xEF )
                    goto LABEL_211;
                  v62 = (_BYTE *)(v58 + 1);
                  v63 = *(_BYTE *)(((v58 + 1) >> 3) + 0x7FFF8000);
                  if ( v63 > (char)((v58 + 1) & 7) || !v63 )
                  {
                    if ( *(_BYTE *)(v58 + 1) != 0xBB )
                      goto LABEL_211;
                    v62 = (_BYTE *)(v58 + 2);
                    v64 = *(_BYTE *)(((v58 + 2) >> 3) + 0x7FFF8000);
                    if ( v64 > (char)((v58 + 2) & 7) || !v64 )
                    {
                      if ( *(_BYTE *)(v58 + 2) == 0xBF )
                        *((_QWORD *)v4 - 8272) = v58 + 3;
LABEL_211:
                      for ( ii = *((_QWORD *)v4 - 8272); ; ++ii )
                      {
                        v62 = (_BYTE *)ii;
                        v67 = *(_BYTE *)((ii >> 3) + 0x7FFF8000);
                        if ( v67 <= (char)(ii & 7) && v67 )
                        {
LABEL_197:
                          ii = __asan_report_load1(v62);
                        }
                        else
                        {
                          LOBYTE(v66) = *(_BYTE *)ii;
                          if ( (unsigned int)*(char *)ii <= 0x7F )
                          {
                            v66 = (char)v66;
                            goto LABEL_205;
                          }
                        }
                        v66 = 122LL;
LABEL_205:
                        v68 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v66] >> 3)
                                       + 0x7FFF8000);
                        if ( v68 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v66] & 7)
                          && v68 )
                        {
                          ii = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v66]);
LABEL_208:
                          *((_QWORD *)v4 - 8272) = ii;
                          if ( !*(_BYTE *)ii )
                            goto LABEL_388;
                          if ( *(_BYTE *)ii != 60 )
                            goto LABEL_234;
                          *((_QWORD *)v4 - 8272) = ii + 1;
                          v69 = (__int64)boost::property_tree::detail::rapidxml::xml_document<char>::parse_node<0>(
                                           (boost::property_tree::detail::rapidxml::xml_document<char> *const)(v4 - 65936),
                                           (char **)v4 - 8272);
                          if ( !v69 )
                            goto LABEL_211;
                          v70 = v69 + 32;
                          if ( *(_BYTE *)(((unsigned __int64)(v69 + 32) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_load8();
                          }
                          else
                          {
                            if ( *(_QWORD *)(v69 + 32) )
                              goto LABEL_226;
                            v70 = v69 + 40;
                            v71 = *(_BYTE *)(((unsigned __int64)(v69 + 40) >> 3) + 0x7FFF8000);
                            if ( !v71 || v71 > 3 )
                            {
                              if ( *(_DWORD *)(v69 + 40) )
                              {
                                if ( *((_QWORD *)v4 - 8236) )
                                {
                                  v72 = *((_QWORD *)v4 - 8235);
                                  if ( *(_BYTE *)(((unsigned __int64)(v69 + 80) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store8();
                                  }
                                  else
                                  {
                                    *(_QWORD *)(v69 + 80) = v72;
                                    if ( !*(_BYTE *)(((unsigned __int64)(v72 + 88) >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)(v72 + 88) = v69;
                                      goto LABEL_221;
                                    }
                                  }
                                  v69 = __asan_report_store8();
                                }
                                if ( *(_BYTE *)(((unsigned __int64)(v69 + 80) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store8();
                                }
                                else
                                {
                                  *(_QWORD *)(v69 + 80) = 0LL;
                                  *((_QWORD *)v4 - 8236) = v69;
LABEL_221:
                                  *((_QWORD *)v4 - 8235) = v69;
                                  if ( !*(_BYTE *)(((unsigned __int64)(v69 + 32) >> 3) + 0x7FFF8000) )
                                  {
                                    *(_QWORD *)(v69 + 32) = v4 - 65936;
                                    if ( !*(_BYTE *)(((unsigned __int64)(v69 + 88) >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)(v69 + 88) = 0LL;
                                      goto LABEL_211;
                                    }
LABEL_233:
                                    __asan_report_store8();
LABEL_234:
                                    v73 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                    v74 = *((_QWORD *)v4 - 8272);
                                    if ( *(_BYTE *)((v73 >> 3) + 0x7FFF8000) )
                                      v74 = __asan_report_store8();
                                    *(_QWORD *)v73 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                   + 2;
                                    if ( *(_BYTE *)(((v73 + 8) >> 3) + 0x7FFF8000) )
                                      v74 = __asan_report_store8();
                                    *(_QWORD *)(v73 + 8) = "expected <";
                                    if ( *(_BYTE *)(((v73 + 16) >> 3) + 0x7FFF8000) )
                                      v74 = __asan_report_store8();
                                    *(_QWORD *)(v73 + 16) = v74;
                                    __asan_handle_no_return(v73 + 16);
                                    _cxa_throw(
                                      (void *)v73,
                                      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                  }
                                }
                                __asan_report_store8();
                                goto LABEL_233;
                              }
LABEL_226:
                              __asan_handle_no_return(v70);
                              __assert_fail(
                                "child && !child->parent() && child->type() != node_document",
                                "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boos"
                                "t_1_70_0d/boost/property_tree/detail/rapidxml.hpp",
                                0x43Bu,
                                "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property_t"
                                "ree::detail::rapidxml::xml_node<Ch>*) [with Ch = char]");
                            }
                          }
                          __asan_report_load4(v70);
                          goto LABEL_226;
                        }
                        if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v66] )
                          goto LABEL_208;
                      }
                    }
LABEL_196:
                    __asan_report_load1(v62);
                    goto LABEL_197;
                  }
                }
                __asan_report_load1(v62);
                goto LABEL_196;
              }
            }
            v60 = *(_QWORD *)(v60 + 48);
            continue;
          }
        }
      }
    }
  }
  v41 = *((_QWORD *)v4 - 8260);
  *((_QWORD *)v4 - 8276) = v41;
  if ( !v41 )
  {
    __asan_handle_no_return(v39);
    __assert_fail(
      "text",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_t"
      "ree/detail/rapidxml.hpp",
      0x557u,
      "void boost::property_tree::detail::rapidxml::xml_document<Ch>::parse(Ch*) [with int Flags = 3072; Ch = char]");
  }
  for ( jj = *((_QWORD *)v4 - 8236); jj; jj = *(_QWORD *)(jj + 88) )
  {
    if ( *(_BYTE *)(((unsigned __int64)(jj + 32) >> 3) + 0x7FFF8000) )
    {
      jj = __asan_report_store8();
    }
    else
    {
      *(_QWORD *)(jj + 32) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)(jj + 88) >> 3) + 0x7FFF8000) )
      {
        v9 = __asan_report_load8();
        break;
      }
    }
  }
  *((_QWORD *)v4 - 8236) = 0LL;
  for ( kk = *((_QWORD *)v4 - 8234); kk; kk = *(_QWORD *)(kk + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)(kk + 32) >> 3) + 0x7FFF8000) )
    {
      kk = __asan_report_store8();
    }
    else
    {
      *(_QWORD *)(kk + 32) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)(kk + 48) >> 3) + 0x7FFF8000) )
      {
        v9 = __asan_report_load8();
        break;
      }
    }
  }
  *((_QWORD *)v4 - 8234) = 0LL;
  v44 = *(_BYTE *)((v41 >> 3) + 0x7FFF8000);
  if ( v44 <= (char)(v41 & 7) && v44 )
  {
    v45 = (_BYTE *)v41;
    __asan_report_load1(v41);
LABEL_122:
    __asan_report_load1(v45);
    goto LABEL_123;
  }
  if ( *(_BYTE *)v41 != 0xEF )
    goto LABEL_138;
  v45 = (_BYTE *)(v41 + 1);
  v46 = *(_BYTE *)(((v41 + 1) >> 3) + 0x7FFF8000);
  if ( v46 <= (char)((v41 + 1) & 7) && v46 )
    goto LABEL_122;
  if ( *(_BYTE *)(v41 + 1) != 0xBB )
    goto LABEL_138;
  v45 = (_BYTE *)(v41 + 2);
  v47 = *(_BYTE *)(((v41 + 2) >> 3) + 0x7FFF8000);
  if ( v47 <= (char)((v41 + 2) & 7) && v47 )
  {
LABEL_123:
    __asan_report_load1(v45);
    goto LABEL_124;
  }
  if ( *(_BYTE *)(v41 + 2) == 0xBF )
    *((_QWORD *)v4 - 8276) = v41 + 3;
LABEL_138:
  while ( 2 )
  {
    v48 = *((_QWORD *)v4 - 8276);
    while ( 2 )
    {
      v45 = (_BYTE *)v48;
      v50 = *(_BYTE *)((v48 >> 3) + 0x7FFF8000);
      if ( v50 <= (char)(v48 & 7) && v50 )
      {
LABEL_124:
        v48 = __asan_report_load1(v45);
      }
      else
      {
        LOBYTE(v49) = *(_BYTE *)v48;
        if ( (unsigned int)*(char *)v48 <= 0x7F )
        {
          v49 = (char)v49;
          goto LABEL_132;
        }
      }
      v49 = 122LL;
LABEL_132:
      v51 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v49] >> 3)
                     + 0x7FFF8000);
      if ( v51 > ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v49] & 7)
        || !v51 )
      {
        if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v49] )
          goto LABEL_135;
        ++v48;
        continue;
      }
      break;
    }
    v48 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v49]);
LABEL_135:
    *((_QWORD *)v4 - 8276) = v48;
    if ( *(_BYTE *)v48 )
    {
      if ( *(_BYTE *)v48 != 60 )
        goto LABEL_161;
      *((_QWORD *)v4 - 8276) = v48 + 1;
      v52 = (__int64)boost::property_tree::detail::rapidxml::xml_document<char>::parse_node<3072>(
                       (boost::property_tree::detail::rapidxml::xml_document<char> *const)(v4 - 65936),
                       (char **)v4 - 8276);
      if ( !v52 )
        continue;
      v53 = v52 + 32;
      if ( *(_BYTE *)(((unsigned __int64)(v52 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        if ( *(_QWORD *)(v52 + 32) )
          goto LABEL_153;
        v53 = v52 + 40;
        v54 = *(_BYTE *)(((unsigned __int64)(v52 + 40) >> 3) + 0x7FFF8000);
        if ( !v54 || v54 > 3 )
        {
          if ( *(_DWORD *)(v52 + 40) )
          {
            if ( *((_QWORD *)v4 - 8236) )
            {
              v55 = *((_QWORD *)v4 - 8235);
              if ( *(_BYTE *)(((unsigned __int64)(v52 + 80) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store8();
              }
              else
              {
                *(_QWORD *)(v52 + 80) = v55;
                if ( !*(_BYTE *)(((unsigned __int64)(v55 + 88) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(v55 + 88) = v52;
                  goto LABEL_148;
                }
              }
              v52 = __asan_report_store8();
            }
            if ( *(_BYTE *)(((unsigned __int64)(v52 + 80) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8();
            }
            else
            {
              *(_QWORD *)(v52 + 80) = 0LL;
              *((_QWORD *)v4 - 8236) = v52;
LABEL_148:
              *((_QWORD *)v4 - 8235) = v52;
              if ( !*(_BYTE *)(((unsigned __int64)(v52 + 32) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v52 + 32) = v4 - 65936;
                if ( !*(_BYTE *)(((unsigned __int64)(v52 + 88) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(v52 + 88) = 0LL;
                  continue;
                }
LABEL_160:
                __asan_report_store8();
LABEL_161:
                v56 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                v57 = *((_QWORD *)v4 - 8276);
                if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
                  v57 = __asan_report_store8();
                *(_QWORD *)v56 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                if ( *(_BYTE *)(((v56 + 8) >> 3) + 0x7FFF8000) )
                  v57 = __asan_report_store8();
                *(_QWORD *)(v56 + 8) = "expected <";
                if ( *(_BYTE *)(((v56 + 16) >> 3) + 0x7FFF8000) )
                  v57 = __asan_report_store8();
                *(_QWORD *)(v56 + 16) = v57;
                __asan_handle_no_return(v56 + 16);
                _cxa_throw(
                  (void *)v56,
                  (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                  (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
              }
            }
            __asan_report_store8();
            goto LABEL_160;
          }
LABEL_153:
          __asan_handle_no_return(v53);
          __assert_fail(
            "child && !child->parent() && child->type() != node_document",
            "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/prop"
            "erty_tree/detail/rapidxml.hpp",
            0x43Bu,
            "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property_tree::detail::rapidxm"
            "l::xml_node<Ch>*) [with Ch = char]");
        }
      }
      __asan_report_load4(v53);
      goto LABEL_153;
    }
    break;
  }
LABEL_388:
  *((_QWORD *)v4 - 8252) = v4 - 66000;
  *((_QWORD *)v4 - 8251) = 0LL;
  *(v4 - 66000) = 0;
  v109 = (_QWORD *)operator new(0x20uLL);
  v110 = operator new(0x70uLL);
  if ( *(_BYTE *)(((unsigned __int64)(v109 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_399;
  }
  v109[1] = v110;
  if ( *(_BYTE *)(((unsigned __int64)(v110 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_399:
    __asan_report_load8();
    goto LABEL_400;
  }
  *(_QWORD *)(v110 + 72) &= ~1uLL;
  if ( *(_BYTE *)(((unsigned __int64)(v109 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_400:
    __asan_report_load8();
    goto LABEL_401;
  }
  v111 = v109[1];
  if ( *(_BYTE *)(((unsigned __int64)(v111 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_401:
    v9 = __asan_report_load8();
    goto LABEL_402;
  }
  *(_QWORD *)(v111 + 72) &= 1uLL;
  v112 = v109[1];
  if ( *(_BYTE *)(((unsigned __int64)(v112 + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_402:
    __asan_report_store8();
    goto LABEL_403;
  }
  *(_QWORD *)(v112 + 80) = v112 + 72;
  v113 = v109[1];
  if ( *(_BYTE *)(((unsigned __int64)(v113 + 88) >> 3) + 0x7FFF8000) )
  {
LABEL_403:
    __asan_report_store8();
    goto LABEL_404;
  }
  *(_QWORD *)(v113 + 88) = v113 + 72;
  v114 = v109[1];
  v115 = v114 + 96;
  if ( *(_BYTE *)(((unsigned __int64)(v114 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_404:
    __asan_report_store8();
    goto LABEL_405;
  }
  *(_QWORD *)(v114 + 104) = v115;
  v116 = v109[1];
  if ( *(_BYTE *)(((unsigned __int64)(v116 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_405:
    __asan_report_store8();
    goto LABEL_406;
  }
  *(_QWORD *)(v116 + 96) = v115;
  if ( *(_BYTE *)(((unsigned __int64)(v109 + 3) >> 3) + 0x7FFF8000) )
  {
LABEL_406:
    v118 = __asan_report_store8();
    v120 = v119;
    operator delete(v109, 0x20uLL);
    v121 = (struct _Unwind_Exception *)v118;
    while ( 1 )
    {
      v122 = (char *)*((_QWORD *)v4 - 8252);
      if ( v122 != v4 - 66000 )
        operator delete(v122);
      while ( 1 )
      {
        v123 = (char *)*((_QWORD *)v4 - 8230);
        if ( v123 == v4 - 65816 )
        {
          *((_QWORD *)v4 - 8230) = v4 - 65816;
          *((_QWORD *)v4 - 8229) = &v4[((65816 - (_DWORD)v4) & 7) - 65816];
          *((_QWORD *)v4 - 8228) = v4 - 280;
          if ( v120 == 1 )
          {
            v133 = (char **)__cxa_begin_catch(v121);
            __a.gap0[0] = 10;
            if ( *(_BYTE *)(((unsigned __int64)(v133 + 2) >> 3) + 0x7FFF8000) )
              v9 = __asan_report_load8();
            v134 = std::__count_if<char *,__gnu_cxx::__ops::_Iter_equals_val<char const>>(
                     *((char **)v4 - 8260),
                     v133[2],
                     (__gnu_cxx::__ops::_Iter_equals_val<char const>)&__a)
                 + 1;
            if ( *(_BYTE *)(((unsigned __int64)v133 >> 3) + 0x7FFF8000) )
              v9 = __asan_report_load8();
            v135 = *v133;
            if ( *(_BYTE *)(((unsigned __int64)(*v133 + 16) >> 3) + 0x7FFF8000) )
              v9 = __asan_report_load8();
            v136 = (const char *)(*((__int64 (__fastcall **)(char **, double))v135 + 2))(v133, v9);
            std::string::basic_string<std::allocator<char>>(&msg, v136, &__a);
            boost::property_tree::file_parser_error::file_parser_error(&v144, &msg, filename, v134);
            *(_QWORD *)v144.baseclass_0 = &`vtable for'boost::property_tree::xml_parser::xml_parser_error + 2;
            __asan_handle_no_return(&v144);
            boost::exception_detail::throw_exception_<boost::property_tree::xml_parser::xml_parser_error>(
              (const boost::property_tree::xml_parser::xml_parser_error *)&v144,
              "void boost::property_tree::xml_parser::read_xml_internal(std::basic_istream<typename Ptree::key_type::valu"
              "e_type>&, Ptree&, int, const string&) [with Ptree = boost::property_tree::basic_ptree<std::__cxx11::basic_"
              "string<char>, std::__cxx11::basic_string<char> >; typename Ptree::key_type::value_type = char; typename Pt"
              "ree::key_type::value_type = char; std::string = std::__cxx11::basic_string<char>]",
              "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/pr"
              "operty_tree/detail/xml_parser_read_rapidxml.hpp",
              137);
          }
          v40 = (void *)*((_QWORD *)v4 - 8260);
          if ( v40 )
            operator delete(v40);
          __asan_handle_no_return(v40);
          _Unwind_Resume(v121);
        }
        if ( *(_BYTE *)(((unsigned __int64)&v123[-(int)v123 & 7] >> 3) + 0x7FFF8000) )
          break;
        v131 = *(_QWORD *)&v123[-(int)v123 & 7];
        v132 = (void (__fastcall *)(double))*((_QWORD *)v4 - 34);
        if ( v132 )
        {
          v132(v9);
        }
        else if ( v123 )
        {
          operator delete[](v123);
        }
        *((_QWORD *)v4 - 8230) = v131;
      }
      v9 = __asan_report_load8();
      v121 = v124;
      v120 = v125;
    }
  }
  v109[3] = 0LL;
  *((_QWORD *)v4 - 8248) = v109;
  for ( mm = (boost::property_tree::detail::rapidxml::xml_node<char> *)*((_QWORD *)v4 - 8236); mm; mm = mm->m_next_sibling )
  {
    boost::property_tree::xml_parser::read_xml_node<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>,char>(
      mm,
      (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(v4 - 66016),
      flags);
    if ( *(_BYTE *)(((unsigned __int64)&mm->m_parent >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_419:
      __asan_handle_no_return(&mm->m_parent);
      __assert_fail(
        "this->m_parent",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property"
        "_tree/detail/rapidxml.hpp",
        0x3DEu,
        "boost::property_tree::detail::rapidxml::xml_node<Ch>* boost::property_tree::detail::rapidxml::xml_node<Ch>::next"
        "_sibling(const Ch*, std::size_t, bool) const [with Ch = char; std::size_t = long unsigned int]");
    }
    if ( !mm->m_parent )
      goto LABEL_419;
    if ( *(_BYTE *)(((unsigned __int64)&mm->m_next_sibling >> 3) + 0x7FFF8000) )
    {
      v9 = __asan_report_load8();
      break;
    }
  }
  boost::swap<std::string,std::string>(&pt->m_data, (std::string *)v4 - 2063);
  if ( *(_BYTE *)(((unsigned __int64)&pt->m_children >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_424;
  }
  m_children = pt->m_children;
  pt->m_children = (void *)*((_QWORD *)v4 - 8248);
  *((_QWORD *)v4 - 8248) = m_children;
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v4 - 66016));
  while ( 2 )
  {
    v128 = (char *)*((_QWORD *)v4 - 8230);
    if ( v128 != v4 - 65816 )
    {
      v127 = (unsigned __int64)&v128[-(int)v128 & 7];
      if ( *(_BYTE *)((v127 >> 3) + 0x7FFF8000) )
      {
LABEL_424:
        v128 = (char *)v127;
        v9 = __asan_report_load8();
      }
      else
      {
        mm = *(boost::property_tree::detail::rapidxml::xml_node<char> **)v127;
        v129 = (void (__fastcall *)(double))*((_QWORD *)v4 - 34);
        if ( v129 )
        {
          v129(v9);
LABEL_427:
          *((_QWORD *)v4 - 8230) = mm;
          continue;
        }
      }
      if ( v128 )
        operator delete[](v128);
      goto LABEL_427;
    }
    break;
  }
  *((_QWORD *)v4 - 8230) = v4 - 65816;
  *((_QWORD *)v4 - 8229) = &v4[((65816 - (_DWORD)v4) & 7) - 65816];
  *((_QWORD *)v4 - 8228) = v4 - 280;
  v130 = (void *)*((_QWORD *)v4 - 8260);
  if ( v130 )
    operator delete(v130);
  *(_QWORD *)(((unsigned __int64)v145 >> 3) + 0x7FFF8000) = 0LL;
  *(_QWORD *)(((unsigned __int64)v145 >> 3) + 0x7FFF8008) = 0LL;
  *(_QWORD *)(((unsigned __int64)v145 >> 3) + 0x7FFF8010) = 0LL;
  *(_DWORD *)(((unsigned __int64)v145 >> 3) + 0x7FFF8018) = 0;
  *(_QWORD *)(((unsigned __int64)v145 >> 3) + 0x7FFF8020) = 0LL;
  *(_QWORD *)(((unsigned __int64)v145 >> 3) + 0x7FFFA034) = 0LL;
  *(_QWORD *)(((unsigned __int64)v145 >> 3) + 0x7FFFA03C) = 0LL;
  *(_QWORD *)(((unsigned __int64)v145 >> 3) + 0x7FFFA044) = 0LL;
  *(_QWORD *)(((unsigned __int64)v145 >> 3) + 0x7FFFA04C) = 0LL;
  *(_DWORD *)(((unsigned __int64)v145 >> 3) + 0x7FFFA054) = 0;
};
