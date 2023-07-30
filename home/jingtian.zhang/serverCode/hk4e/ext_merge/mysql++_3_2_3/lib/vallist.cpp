// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/vallist.cpp

// Line 41: range 000000000CF98390-000000000CF98CAE
// local variable allocation has failed, the output may be wrong!
void __fastcall mysqlpp::create_vector(
        size_t size,
        std::vector<bool> *v,
        bool t0,
        bool t1,
        bool t2,
        bool t3,
        bool t4,
        bool t5,
        bool t6,
        bool t7,
        bool t8,
        bool t9,
        bool ta,
        bool tb,
        bool tc)
{
  std::_Bvector_base<std::allocator<bool> >::_Bit_pointer M_end_of_storage; // rsi
  std::_Bit_type *v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rcx
  std::_Bit_type v22; // rax
  std::_Bit_type v23; // rcx
  std::_Bit_type *v24; // rsi
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  std::_Bit_type v28; // rax
  std::_Bit_type *v29; // rsi
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  std::_Bit_type v33; // rax
  std::_Bit_type *v34; // rsi
  unsigned int v35; // ecx
  __int64 v36; // rax
  std::_Bit_type *v37; // rsi
  unsigned int v38; // ecx
  __int64 v39; // rax
  std::_Bit_type *v40; // rsi
  unsigned int v41; // ecx
  __int64 v42; // rax
  std::_Bit_type *v43; // rsi
  unsigned int v44; // ecx
  __int64 v45; // rax
  std::_Bit_type *v46; // rsi
  unsigned int v47; // ecx
  __int64 v48; // rax
  std::_Bit_type *v49; // rsi
  unsigned int v50; // ecx
  __int64 v51; // rax
  std::_Bit_type *v52; // rsi
  unsigned int v53; // ecx
  __int64 v54; // rax
  std::_Bit_type *v55; // rsi
  unsigned int v56; // ecx
  __int64 v57; // rax
  std::_Bit_type *v58; // rsi
  unsigned int v59; // ecx
  __int64 v60; // rax
  std::_Bit_type *v61; // rsi
  unsigned int v62; // ecx
  __int64 v63; // rax
  std::_Bit_type *v64; // rax
  std::_Bit_type *M_p; // r15
  std::_Bit_type *v66; // r8
  unsigned int M_offset; // ecx
  std::_Bit_type *v68; // r13
  size_t v69; // rdx
  __int64 v70; // rsi
  __int64 *v71; // rdx
  unsigned int i; // ecx
  __int64 v73; // rax
  unsigned int v74; // edx
  unsigned int v75; // edx
  unsigned int v76; // edx
  unsigned int v77; // edx
  unsigned int v78; // edx
  unsigned int v79; // edx
  unsigned int v80; // edx
  unsigned int v81; // edx
  unsigned int v82; // edx
  unsigned int v83; // edx
  unsigned int v84; // edx
  unsigned int v85; // edx
  unsigned int v86; // edx
  unsigned __int64 v89; // [rsp+30h] [rbp-128h]
  std::_Bit_type *v90; // [rsp+38h] [rbp-120h]
  signed __int64 v91; // [rsp+40h] [rbp-118h]
  unsigned int v92; // [rsp+4Ch] [rbp-10Ch]
  std::_Bit_type *v93; // [rsp+110h] [rbp-48h]
  unsigned int v94; // [rsp+118h] [rbp-40h]

  if ( size > 0x7FFFFFFFFFFFFFC0LL )
    std::__throw_length_error((const char *)&stru_1A1700D9.json_name_ + 7);
  M_end_of_storage = v->_M_impl._M_end_of_storage;
  if ( size > 8 * ((char *)M_end_of_storage - (char *)v->_M_impl._M_start._M_p) )
  {
    v89 = (size + 63) >> 6;
    v64 = (std::_Bit_type *)operator new(v89 * 8);
    M_p = v->_M_impl._M_finish._M_p;
    v66 = v->_M_impl._M_start._M_p;
    M_offset = v->_M_impl._M_finish._M_offset;
    v68 = v64;
    v69 = (char *)M_p - (char *)v->_M_impl._M_start._M_p;
    if ( M_p != v->_M_impl._M_start._M_p )
    {
      v92 = v->_M_impl._M_finish._M_offset;
      v91 = (char *)v->_M_impl._M_finish._M_p - (char *)v->_M_impl._M_start._M_p;
      v90 = v->_M_impl._M_start._M_p;
      memmove(v64, v->_M_impl._M_start._M_p, v69);
      M_offset = v92;
      v69 = v91;
      v66 = v90;
    }
    v70 = M_offset;
    v71 = (__int64 *)((char *)v68 + v69);
    for ( i = 0; v70; --v70 )
    {
      while ( 1 )
      {
        v73 = *v71 & ~(1LL << i);
        if ( ((1LL << i) & *M_p) != 0 )
          v73 = *v71 | (1LL << i);
        *v71 = v73;
        if ( i == 63 )
          break;
        ++i;
        if ( !--v70 )
          goto LABEL_103;
      }
      ++M_p;
      ++v71;
      i = 0;
    }
LABEL_103:
    v93 = (std::_Bit_type *)v71;
    v94 = i;
    if ( v66 )
    {
      operator delete(v66);
      v->_M_impl._M_finish._M_p = 0LL;
      v->_M_impl._M_finish._M_offset = 0;
      v->_M_impl._M_start._M_p = 0LL;
      v->_M_impl._M_start._M_offset = 0;
    }
    v->_M_impl._M_start._M_p = v68;
    v->_M_impl._M_start._M_offset = 0;
    v->_M_impl._M_finish._M_p = v93;
    M_end_of_storage = &v68[v89];
    v19 = v->_M_impl._M_finish._M_p;
    v->_M_impl._M_end_of_storage = &v68[v89];
    v->_M_impl._M_finish._M_offset = v94;
    v20 = v->_M_impl._M_finish._M_offset;
    if ( v19 != &v68[v89] )
      goto LABEL_4;
LABEL_106:
    v74 = v20;
    std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&M_end_of_storage, t0);
    goto LABEL_9;
  }
  v19 = v->_M_impl._M_finish._M_p;
  v20 = v->_M_impl._M_finish._M_offset;
  if ( v19 == M_end_of_storage )
    goto LABEL_106;
LABEL_4:
  if ( v20 == 63 )
  {
    v->_M_impl._M_finish._M_offset = 0;
    v->_M_impl._M_finish._M_p = v19 + 1;
  }
  else
  {
    v->_M_impl._M_finish._M_offset = v20 + 1;
  }
  v21 = 1LL << v20;
  v22 = *v19 | v21;
  v23 = *v19 & ~v21;
  if ( !t0 )
    v22 = v23;
  *v19 = v22;
LABEL_9:
  if ( size != 1 )
  {
    v24 = v->_M_impl._M_finish._M_p;
    v25 = v->_M_impl._M_finish._M_offset;
    if ( v24 == v->_M_impl._M_end_of_storage )
    {
      v75 = v->_M_impl._M_finish._M_offset;
      std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v24, t1);
    }
    else
    {
      if ( v25 == 63 )
      {
        v->_M_impl._M_finish._M_offset = 0;
        v->_M_impl._M_finish._M_p = v24 + 1;
      }
      else
      {
        v->_M_impl._M_finish._M_offset = v25 + 1;
      }
      v26 = 1LL << v25;
      v27 = *v24 & ~(1LL << v25);
      v28 = v26 | *v24;
      if ( !t1 )
        v28 = v27;
      *v24 = v28;
    }
    if ( size != 2 )
    {
      v29 = v->_M_impl._M_finish._M_p;
      v30 = v->_M_impl._M_finish._M_offset;
      if ( v29 == v->_M_impl._M_end_of_storage )
      {
        v76 = v->_M_impl._M_finish._M_offset;
        std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v29, t2);
      }
      else
      {
        if ( v30 == 63 )
        {
          v->_M_impl._M_finish._M_offset = 0;
          v->_M_impl._M_finish._M_p = v29 + 1;
        }
        else
        {
          v->_M_impl._M_finish._M_offset = v30 + 1;
        }
        v31 = 1LL << v30;
        v32 = *v29 & ~(1LL << v30);
        v33 = v31 | *v29;
        if ( !t2 )
          v33 = v32;
        *v29 = v33;
      }
      if ( size != 3 )
      {
        v34 = v->_M_impl._M_finish._M_p;
        v35 = v->_M_impl._M_finish._M_offset;
        if ( v34 == v->_M_impl._M_end_of_storage )
        {
          v77 = v->_M_impl._M_finish._M_offset;
          std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v34, t3);
        }
        else
        {
          if ( v35 == 63 )
          {
            v->_M_impl._M_finish._M_offset = 0;
            v->_M_impl._M_finish._M_p = v34 + 1;
          }
          else
          {
            v->_M_impl._M_finish._M_offset = v35 + 1;
          }
          v36 = *v34 | (1LL << v35);
          if ( !t3 )
            v36 = *v34 & ~(1LL << v35);
          *v34 = v36;
        }
        if ( size != 4 )
        {
          v37 = v->_M_impl._M_finish._M_p;
          v38 = v->_M_impl._M_finish._M_offset;
          if ( v37 == v->_M_impl._M_end_of_storage )
          {
            v78 = v->_M_impl._M_finish._M_offset;
            std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v37, t4);
          }
          else
          {
            if ( v38 == 63 )
            {
              v->_M_impl._M_finish._M_offset = 0;
              v->_M_impl._M_finish._M_p = v37 + 1;
            }
            else
            {
              v->_M_impl._M_finish._M_offset = v38 + 1;
            }
            v39 = *v37 | (1LL << v38);
            if ( !t4 )
              v39 = *v37 & ~(1LL << v38);
            *v37 = v39;
          }
          if ( size != 5 )
          {
            v40 = v->_M_impl._M_finish._M_p;
            v41 = v->_M_impl._M_finish._M_offset;
            if ( v40 == v->_M_impl._M_end_of_storage )
            {
              v79 = v->_M_impl._M_finish._M_offset;
              std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v40, t5);
            }
            else
            {
              if ( v41 == 63 )
              {
                v->_M_impl._M_finish._M_offset = 0;
                v->_M_impl._M_finish._M_p = v40 + 1;
              }
              else
              {
                v->_M_impl._M_finish._M_offset = v41 + 1;
              }
              v42 = *v40 | (1LL << v41);
              if ( !t5 )
                v42 = *v40 & ~(1LL << v41);
              *v40 = v42;
            }
            if ( size != 6 )
            {
              v43 = v->_M_impl._M_finish._M_p;
              v44 = v->_M_impl._M_finish._M_offset;
              if ( v43 == v->_M_impl._M_end_of_storage )
              {
                v80 = v->_M_impl._M_finish._M_offset;
                std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v43, t6);
              }
              else
              {
                if ( v44 == 63 )
                {
                  v->_M_impl._M_finish._M_offset = 0;
                  v->_M_impl._M_finish._M_p = v43 + 1;
                }
                else
                {
                  v->_M_impl._M_finish._M_offset = v44 + 1;
                }
                v45 = *v43 | (1LL << v44);
                if ( !t6 )
                  v45 = *v43 & ~(1LL << v44);
                *v43 = v45;
              }
              if ( size != 7 )
              {
                v46 = v->_M_impl._M_finish._M_p;
                v47 = v->_M_impl._M_finish._M_offset;
                if ( v46 == v->_M_impl._M_end_of_storage )
                {
                  v81 = v->_M_impl._M_finish._M_offset;
                  std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v46, t7);
                }
                else
                {
                  if ( v47 == 63 )
                  {
                    v->_M_impl._M_finish._M_offset = 0;
                    v->_M_impl._M_finish._M_p = v46 + 1;
                  }
                  else
                  {
                    v->_M_impl._M_finish._M_offset = v47 + 1;
                  }
                  v48 = *v46 | (1LL << v47);
                  if ( !t7 )
                    v48 = *v46 & ~(1LL << v47);
                  *v46 = v48;
                }
                if ( size != 8 )
                {
                  v49 = v->_M_impl._M_finish._M_p;
                  v50 = v->_M_impl._M_finish._M_offset;
                  if ( v49 == v->_M_impl._M_end_of_storage )
                  {
                    v82 = v->_M_impl._M_finish._M_offset;
                    std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v49, t8);
                  }
                  else
                  {
                    if ( v50 == 63 )
                    {
                      v->_M_impl._M_finish._M_offset = 0;
                      v->_M_impl._M_finish._M_p = v49 + 1;
                    }
                    else
                    {
                      v->_M_impl._M_finish._M_offset = v50 + 1;
                    }
                    v51 = *v49 | (1LL << v50);
                    if ( !t8 )
                      v51 = *v49 & ~(1LL << v50);
                    *v49 = v51;
                  }
                  if ( size != 9 )
                  {
                    v52 = v->_M_impl._M_finish._M_p;
                    v53 = v->_M_impl._M_finish._M_offset;
                    if ( v52 == v->_M_impl._M_end_of_storage )
                    {
                      v83 = v->_M_impl._M_finish._M_offset;
                      std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v52, t9);
                    }
                    else
                    {
                      if ( v53 == 63 )
                      {
                        v->_M_impl._M_finish._M_offset = 0;
                        v->_M_impl._M_finish._M_p = v52 + 1;
                      }
                      else
                      {
                        v->_M_impl._M_finish._M_offset = v53 + 1;
                      }
                      v54 = *v52 | (1LL << v53);
                      if ( !t9 )
                        v54 = *v52 & ~(1LL << v53);
                      *v52 = v54;
                    }
                    if ( size != 10 )
                    {
                      v55 = v->_M_impl._M_finish._M_p;
                      v56 = v->_M_impl._M_finish._M_offset;
                      if ( v55 == v->_M_impl._M_end_of_storage )
                      {
                        v84 = v->_M_impl._M_finish._M_offset;
                        std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v55, ta);
                      }
                      else
                      {
                        if ( v56 == 63 )
                        {
                          v->_M_impl._M_finish._M_offset = 0;
                          v->_M_impl._M_finish._M_p = v55 + 1;
                        }
                        else
                        {
                          v->_M_impl._M_finish._M_offset = v56 + 1;
                        }
                        v57 = *v55 | (1LL << v56);
                        if ( !ta )
                          v57 = *v55 & ~(1LL << v56);
                        *v55 = v57;
                      }
                      if ( size != 11 )
                      {
                        v58 = v->_M_impl._M_finish._M_p;
                        v59 = v->_M_impl._M_finish._M_offset;
                        if ( v58 == v->_M_impl._M_end_of_storage )
                        {
                          v85 = v->_M_impl._M_finish._M_offset;
                          std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v58, tb);
                        }
                        else
                        {
                          if ( v59 == 63 )
                          {
                            v->_M_impl._M_finish._M_offset = 0;
                            v->_M_impl._M_finish._M_p = v58 + 1;
                          }
                          else
                          {
                            v->_M_impl._M_finish._M_offset = v59 + 1;
                          }
                          v60 = *v58 | (1LL << v59);
                          if ( !tb )
                            v60 = *v58 & ~(1LL << v59);
                          *v58 = v60;
                        }
                        if ( size != 12 )
                        {
                          v61 = v->_M_impl._M_finish._M_p;
                          v62 = v->_M_impl._M_finish._M_offset;
                          if ( v61 == v->_M_impl._M_end_of_storage )
                          {
                            v86 = v->_M_impl._M_finish._M_offset;
                            std::vector<bool>::_M_insert_aux(v, *(std::vector<bool>::iterator *)&v61, tc);
                          }
                          else
                          {
                            if ( v62 == 63 )
                            {
                              v->_M_impl._M_finish._M_offset = 0;
                              v->_M_impl._M_finish._M_p = v61 + 1;
                            }
                            else
                            {
                              v->_M_impl._M_finish._M_offset = v62 + 1;
                            }
                            v63 = *v61 | (1LL << v62);
                            if ( !tc )
                              v63 = *v61 & ~(1LL << v62);
                            *v61 = v63;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
};

// Line 85: range 000000000CF99710-000000000CF999E2
void __fastcall mysqlpp::create_vector<mysqlpp::Row>(
        mysqlpp::Row *c,
        std::vector<bool> *v,
        std::string *p_s4,
        std::string *p_s5,
        std::string *p_s6,
        std::string *p_s7,
        std::string s0,
        std::string s1,
        std::string s2)
{
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  std::vector<bool>::iterator v33; // 0:rsi.8,8:edx.4

  v33._M_p = v->_M_impl._M_start._M_p;
  v33._M_offset = 0;
  std::vector<bool>::_M_fill_insert(v, v33, c->data_._M_impl._M_finish - c->data_._M_impl._M_start, 0);
  v14 = mysqlpp::Row::field_num(c, p_s4->_M_dataplus._M_p);
  v->_M_impl._M_start._M_p[v14 >> 6] |= 1LL << v14;
  if ( p_s5->_M_string_length )
  {
    v15 = mysqlpp::Row::field_num(c, p_s5->_M_dataplus._M_p);
    v->_M_impl._M_start._M_p[v15 >> 6] |= 1LL << v15;
    if ( p_s6->_M_string_length )
    {
      v16 = mysqlpp::Row::field_num(c, p_s6->_M_dataplus._M_p);
      v->_M_impl._M_start._M_p[v16 >> 6] |= 1LL << v16;
      if ( p_s7->_M_string_length )
      {
        v17 = mysqlpp::Row::field_num(c, p_s7->_M_dataplus._M_p);
        v->_M_impl._M_start._M_p[v17 >> 6] |= 1LL << v17;
        if ( *((_QWORD *)s0._M_dataplus._M_p + 1) )
        {
          v18 = mysqlpp::Row::field_num(c, *(const char **)s0._M_dataplus._M_p);
          v->_M_impl._M_start._M_p[v18 >> 6] |= 1LL << v18;
          if ( *(_QWORD *)(s0._M_string_length + 8) )
          {
            v19 = mysqlpp::Row::field_num(c, *(const char **)s0._M_string_length);
            v->_M_impl._M_start._M_p[v19 >> 6] |= 1LL << v19;
            if ( *(_QWORD *)(s0._anon_0._M_allocated_capacity + 8) )
            {
              v20 = mysqlpp::Row::field_num(c, *(const char **)s0._anon_0._M_allocated_capacity);
              v->_M_impl._M_start._M_p[v20 >> 6] |= 1LL << v20;
              if ( *(_QWORD *)(*(&s0._anon_0._M_allocated_capacity + 1) + 8) )
              {
                v21 = mysqlpp::Row::field_num(c, **((const char ***)&s0._anon_0._M_allocated_capacity + 1));
                v->_M_impl._M_start._M_p[v21 >> 6] |= 1LL << v21;
                if ( *((_QWORD *)s1._M_dataplus._M_p + 1) )
                {
                  v22 = mysqlpp::Row::field_num(c, *(const char **)s1._M_dataplus._M_p);
                  v->_M_impl._M_start._M_p[v22 >> 6] |= 1LL << v22;
                  if ( *(_QWORD *)(s1._M_string_length + 8) )
                  {
                    v23 = mysqlpp::Row::field_num(c, *(const char **)s1._M_string_length);
                    v->_M_impl._M_start._M_p[v23 >> 6] |= 1LL << v23;
                    if ( *(_QWORD *)(s1._anon_0._M_allocated_capacity + 8) )
                    {
                      v24 = mysqlpp::Row::field_num(c, *(const char **)s1._anon_0._M_allocated_capacity);
                      v->_M_impl._M_start._M_p[v24 >> 6] |= 1LL << v24;
                      if ( *(_QWORD *)(*(&s1._anon_0._M_allocated_capacity + 1) + 8) )
                      {
                        v25 = mysqlpp::Row::field_num(c, **((const char ***)&s1._anon_0._M_allocated_capacity + 1));
                        v->_M_impl._M_start._M_p[v25 >> 6] |= 1LL << v25;
                        if ( *((_QWORD *)s2._M_dataplus._M_p + 1) )
                        {
                          v26 = mysqlpp::Row::field_num(c, *(const char **)s2._M_dataplus._M_p);
                          v->_M_impl._M_start._M_p[v26 >> 6] |= 1LL << v26;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
};

// Line 143: range 000000000C7481D0-000000000C7481F9
void __cdecl GLOBAL__sub_I_vallist_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
