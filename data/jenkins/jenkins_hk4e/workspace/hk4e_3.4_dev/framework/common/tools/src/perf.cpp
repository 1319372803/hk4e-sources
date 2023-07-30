// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/perf.cpp

// Line 55: range 000000000CA1BC72-000000000CA1BCC5
void __cdecl common::tools::perf::FunctionPerf::output()
{
  std::_Rb_tree_node_base::_Base_ptr i; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_left >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_load8(&common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_left);
  }
  else
  {
    for ( i = common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_left;
          i != (std::_Rb_tree_node_base::_Base_ptr)&common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header;
          i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
    {
      common::tools::perf::FunctionPerf::output((const std::string *)&i[1]);
    }
  }
};

// Line 63: range 000000000CA1B3CA-000000000CA1BC6D
void __fastcall common::tools::perf::FunctionPerf::output(const std::string *func_name)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r15
  std::string *v2; // rbx
  unsigned __int64 v3; // r13
  common::milog::MilogStringStream *v4; // rbp
  _DWORD *v5; // r14
  __int64 v6; // r12
  void *p_M_parent; // rdi
  std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::FunctionPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::FunctionPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::FunctionPerfData> > >::iterator v8; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::FunctionPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::FunctionPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::FunctionPerfData> > >::iterator v9; // r9
  unsigned __int64 v10; // rdi
  std::string::size_type *p_M_string_length; // rdx
  std::_Rb_tree_node_base *v12; // rdx
  unsigned __int64 v13; // rdx
  size_t v14; // rdx
  int v15; // eax
  unsigned int *v16; // rbp
  common::milog::MilogStringStream *ostr; // r15
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v20; // r12
  std::string::size_type M_string_length; // rax
  std::string::pointer M_p; // rsi
  char **v23; // rdi
  char *v24; // rdi
  size_t v25; // rbx
  char **v26; // rdi
  char *v27; // rdi
  size_t v28; // rbx
  char v29; // dl
  char **v30; // rdi
  char *v31; // rdi
  size_t v32; // rbx
  char v33; // dl
  char **v34; // rdi
  char *v35; // rdi
  size_t v36; // rbx
  char v37; // dl
  char **v38; // rdi
  char *v39; // rdi
  size_t v40; // rbx
  char v41; // dl
  char **v42; // rdi
  char *v43; // rdi
  size_t v44; // rbx
  char v45; // dl
  __int64 v46; // rax
  common::milog::MilogStringStream *v47; // rdi
  char *v48; // rdi
  size_t v49; // rbp
  std::string::size_type v50; // rax
  std::string::pointer v51; // rsi
  char *v52; // rdi
  size_t v53; // rbx
  std::tuple<const std::string&> *v54; // [rsp+0h] [rbp-E8h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-E0h]
  std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::FunctionPerfData> >::_Base_ptr __pos; // [rsp+18h] [rbp-D0h]
  std::tuple<> v57; // [rsp+2Fh] [rbp-B9h] BYREF
  common::milog::MiLogStream v58; // [rsp+30h] [rbp-B8h] BYREF
  char v59[152]; // [rsp+50h] [rbp-98h] BYREF

  v2 = (std::string *)func_name;
  v3 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v46 = __asan_stack_malloc_1(96LL);
    if ( v46 )
      v3 = v46;
  }
  v4 = (common::milog::MilogStringStream *)(v3 + 96);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 6 __size 64 8 7 __osize";
  *(_QWORD *)(v3 + 16) = common::tools::perf::FunctionPerf::output;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  v6 = (__int64)&common::tools::perf::FunctionPerf::data_map[abi:cxx11];
  if ( &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::FunctionPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::FunctionPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::FunctionPerfData>>>::find(&common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t, func_name)._M_node )
  {
    p_M_parent = &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_parent;
    if ( !*(_BYTE *)(((unsigned __int64)&common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_parent >> 3)
                   + 0x7FFF8000) )
    {
      v6 = (__int64)&common::tools::perf::FunctionPerf::data_map[abi:cxx11];
      v8._M_node = std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::FunctionPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::FunctionPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::FunctionPerfData>>>::_M_lower_bound(
                     &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t,
                     (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::FunctionPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::FunctionPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::FunctionPerfData> > >::_Link_type)common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_parent,
                     &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header,
                     v2)._M_node;
      __args_2 = (std::tuple<> *)v8._M_node;
      __pos = v8._M_node;
      if ( (std::_Rb_tree_header *)v8._M_node == &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header )
      {
LABEL_18:
        v4[-2].buffer_.data_ = (char *)v2;
        __args_2 = (std::tuple<> *)std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::FunctionPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::FunctionPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::FunctionPerfData>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                                     &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t,
                                     (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::FunctionPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::FunctionPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::FunctionPerfData> > >::const_iterator)__pos,
                                     &std::piecewise_construct,
                                     (std::tuple<const std::string&> *)&v4[-2],
                                     &v57,
                                     (const std::piecewise_construct_t *)v9._M_node,
                                     v54,
                                     __args_2)._M_node;
LABEL_19:
        v16 = (unsigned int *)&__args_2[64];
        common::milog::MiLogStream::MiLogStream(
          &v58,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "src/perf.cpp",
          "output",
          70);
        ostr = v58.ostr_;
        if ( *(_BYTE *)(((unsigned __int64)v58.ostr_ >> 3) + 0x7FFF8000) )
        {
          p_cur = v58.ostr_;
          __asan_report_load8(v58.ostr_);
        }
        else
        {
          v6 = (__int64)(v58.ostr_->buffer_.data_ + 0x4000);
          p_cur = (common::milog::MilogStringStream *)&v58.ostr_->buffer_.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&v58.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          {
            cur = v58.ostr_->buffer_.cur_;
            v20 = (int)v6 - (int)cur;
            if ( v20 > 0x10 )
              v20 = 17LL;
            memcpy(cur, "[FUNCTION_PERF] {", v20);
            ostr->buffer_.cur_ += v20;
            v6 = (__int64)v58.ostr_;
            p_cur = (common::milog::MilogStringStream *)&v2->_M_string_length;
            if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
            {
              M_string_length = v2->_M_string_length;
              if ( !*(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
              {
                M_p = v2->_M_dataplus._M_p;
                if ( !*(_BYTE *)(((unsigned __int64)v58.ostr_ >> 3) + 0x7FFF8000) )
                {
                  v23 = &v58.ostr_->buffer_.cur_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v58.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                  {
                    v24 = v58.ostr_->buffer_.cur_;
                    v25 = (size_t)&v58.ostr_->buffer_.data_[-(int)v24 + 0x4000];
                    if ( M_string_length <= v25 )
                      v25 = M_string_length;
                    memcpy(v24, M_p, v25);
                    *(_QWORD *)(v6 + 8) += v25;
                    v6 = (__int64)v58.ostr_;
                    if ( !*(_BYTE *)(((unsigned __int64)v58.ostr_ >> 3) + 0x7FFF8000) )
                    {
                      v26 = &v58.ostr_->buffer_.cur_;
                      if ( !*(_BYTE *)(((unsigned __int64)&v58.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                      {
                        v27 = v58.ostr_->buffer_.cur_;
                        v28 = (size_t)&v58.ostr_->buffer_.data_[-(int)v27 + 0x4000];
                        if ( v28 > 0xD )
                          v28 = 14LL;
                        memcpy(v27, "}: call_count:", v28);
                        *(_QWORD *)(v6 + 8) += v28;
                        v26 = (char **)&__args_2[80];
                        v29 = *(_BYTE *)(((unsigned __int64)&__args_2[80] >> 3) + 0x7FFF8000);
                        if ( (char)((((_BYTE)__args_2 + 80) & 7) + 3) < v29 || !v29 )
                        {
                          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                            v58.ostr_,
                            *(_DWORD *)__args_2[80].gap0);
                          v6 = (__int64)v58.ostr_;
                          if ( !*(_BYTE *)(((unsigned __int64)v58.ostr_ >> 3) + 0x7FFF8000) )
                          {
                            v30 = &v58.ostr_->buffer_.cur_;
                            if ( !*(_BYTE *)(((unsigned __int64)&v58.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                            {
                              v31 = v58.ostr_->buffer_.cur_;
                              v32 = (size_t)&v58.ostr_->buffer_.data_[-(int)v31 + 0x4000];
                              if ( v32 > 9 )
                                v32 = 10LL;
                              memcpy(v31, " avg_cost:", v32);
                              *(_QWORD *)(v6 + 8) += v32;
                              v30 = (char **)&__args_2[76];
                              v33 = *(_BYTE *)(((unsigned __int64)&__args_2[76] >> 3) + 0x7FFF8000);
                              if ( (char)((((_BYTE)__args_2 + 76) & 7) + 3) < v33 || !v33 )
                              {
                                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                  v58.ostr_,
                                  *(_DWORD *)__args_2[76].gap0);
                                v6 = (__int64)v58.ostr_;
                                if ( !*(_BYTE *)(((unsigned __int64)v58.ostr_ >> 3) + 0x7FFF8000) )
                                {
                                  v34 = &v58.ostr_->buffer_.cur_;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v58.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                                  {
                                    v35 = v58.ostr_->buffer_.cur_;
                                    v36 = (size_t)&v58.ostr_->buffer_.data_[-(int)v35 + 0x4000];
                                    if ( v36 > 9 )
                                      v36 = 10LL;
                                    memcpy(v35, " min_cost:", v36);
                                    *(_QWORD *)(v6 + 8) += v36;
                                    v37 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
                                    if ( (char)(((unsigned __int8)v16 & 7) + 3) < v37 || !v37 )
                                    {
                                      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                        v58.ostr_,
                                        *v16);
                                      v6 = (__int64)v58.ostr_;
                                      if ( !*(_BYTE *)(((unsigned __int64)v58.ostr_ >> 3) + 0x7FFF8000) )
                                      {
                                        v38 = &v58.ostr_->buffer_.cur_;
                                        if ( !*(_BYTE *)(((unsigned __int64)&v58.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                                        {
                                          v39 = v58.ostr_->buffer_.cur_;
                                          v40 = (size_t)&v58.ostr_->buffer_.data_[-(int)v39 + 0x4000];
                                          if ( v40 > 9 )
                                            v40 = 10LL;
                                          memcpy(v39, " max_cost:", v40);
                                          *(_QWORD *)(v6 + 8) += v40;
                                          v38 = (char **)&__args_2[68];
                                          v41 = *(_BYTE *)(((unsigned __int64)&__args_2[68] >> 3) + 0x7FFF8000);
                                          if ( (char)((((_BYTE)__args_2 + 68) & 7) + 3) < v41 || !v41 )
                                          {
                                            common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                              v58.ostr_,
                                              *(_DWORD *)__args_2[68].gap0);
                                            v6 = (__int64)v58.ostr_;
                                            if ( !*(_BYTE *)(((unsigned __int64)v58.ostr_ >> 3) + 0x7FFF8000) )
                                            {
                                              v42 = &v58.ostr_->buffer_.cur_;
                                              if ( !*(_BYTE *)(((unsigned __int64)&v58.ostr_->buffer_.cur_ >> 3)
                                                             + 0x7FFF8000) )
                                              {
                                                v43 = v58.ostr_->buffer_.cur_;
                                                v44 = (size_t)&v58.ostr_->buffer_.data_[-(int)v43 + 0x4000];
                                                if ( v44 > 9 )
                                                  v44 = 10LL;
                                                memcpy(v43, " sum_cost:", v44);
                                                *(_QWORD *)(v6 + 8) += v44;
                                                v42 = (char **)&__args_2[72];
                                                v45 = *(_BYTE *)(((unsigned __int64)&__args_2[72] >> 3) + 0x7FFF8000);
                                                if ( (char)((((_BYTE)__args_2 + 72) & 7) + 3) < v45 || !v45 )
                                                {
                                                  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                                    v58.ostr_,
                                                    *(_DWORD *)__args_2[72].gap0);
                                                  common::milog::MiLogStream::~MiLogStream(&v58);
                                                  goto LABEL_60;
                                                }
LABEL_110:
                                                __asan_report_load4(v42);
                                                goto LABEL_111;
                                              }
LABEL_109:
                                              __asan_report_load8(v42);
                                              goto LABEL_110;
                                            }
LABEL_108:
                                            v42 = (char **)v6;
                                            __asan_report_load8(v6);
                                            goto LABEL_109;
                                          }
LABEL_107:
                                          __asan_report_load4(v38);
                                          goto LABEL_108;
                                        }
LABEL_106:
                                        __asan_report_load8(v38);
                                        goto LABEL_107;
                                      }
LABEL_105:
                                      v38 = (char **)v6;
                                      __asan_report_load8(v6);
                                      goto LABEL_106;
                                    }
LABEL_104:
                                    __asan_report_load4(v16);
                                    goto LABEL_105;
                                  }
LABEL_103:
                                  __asan_report_load8(v34);
                                  goto LABEL_104;
                                }
LABEL_102:
                                v34 = (char **)v6;
                                __asan_report_load8(v6);
                                goto LABEL_103;
                              }
LABEL_101:
                              __asan_report_load4(v30);
                              goto LABEL_102;
                            }
LABEL_100:
                            __asan_report_load8(v30);
                            goto LABEL_101;
                          }
LABEL_99:
                          v30 = (char **)v6;
                          __asan_report_load8(v6);
                          goto LABEL_100;
                        }
LABEL_98:
                        __asan_report_load4(v26);
                        goto LABEL_99;
                      }
LABEL_97:
                      __asan_report_load8(v26);
                      goto LABEL_98;
                    }
LABEL_96:
                    v26 = (char **)v6;
                    __asan_report_load8(v6);
                    goto LABEL_97;
                  }
LABEL_95:
                  __asan_report_load8(v23);
                  goto LABEL_96;
                }
LABEL_94:
                v23 = (char **)v6;
                __asan_report_load8(v6);
                goto LABEL_95;
              }
LABEL_93:
              __asan_report_load8(v2);
              goto LABEL_94;
            }
LABEL_92:
            __asan_report_load8(p_cur);
            goto LABEL_93;
          }
        }
        __asan_report_load8(p_cur);
        goto LABEL_92;
      }
      v10 = (unsigned __int64)&v8._M_node[1];
      p_M_string_length = &v2->_M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
      {
        v6 = v2->_M_string_length;
        *(_QWORD *)(v3 + 32) = v6;
        v12 = (std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::FunctionPerfData> >::_Base_ptr)((char *)v8._M_node + 40);
        if ( !*(_BYTE *)(((unsigned __int64)&v8._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
        {
          M_parent = v8._M_node[1]._M_parent;
          *(_QWORD *)(v3 + 64) = M_parent;
          if ( v6 <= (unsigned __int64)M_parent )
          {
            v13 = v3 + 32;
            goto LABEL_9;
          }
LABEL_84:
          v13 = (unsigned __int64)&v4[-2];
LABEL_9:
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          {
            v10 = v13;
            __asan_report_load8(v13);
          }
          else
          {
            v14 = *(_QWORD *)v13;
            if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            {
              if ( !*(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
              {
                if ( v14 )
                {
                  v15 = memcmp(v2->_M_dataplus._M_p, *(const void **)&v8._M_node[1]._M_color, v14);
                  if ( v15 )
                  {
LABEL_17:
                    if ( v15 >= 0 )
                      goto LABEL_19;
                    goto LABEL_18;
                  }
                }
                v6 -= (__int64)M_parent;
                if ( v6 <= 0x7FFFFFFF )
                {
                  if ( v6 < (__int64)0xFFFFFFFF80000000LL )
                    v15 = 0x80000000;
                  else
                    v15 = v6;
                  goto LABEL_17;
                }
LABEL_88:
                v15 = 0x7FFFFFFF;
                goto LABEL_17;
              }
LABEL_87:
              __asan_report_load8(v2);
              goto LABEL_88;
            }
          }
          __asan_report_load8(v10);
          goto LABEL_87;
        }
LABEL_83:
        v10 = (unsigned __int64)v12;
        v8._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::FunctionPerfData> >::_Base_ptr)__asan_report_load8(v12);
        goto LABEL_84;
      }
LABEL_82:
      __asan_report_load8(p_M_string_length);
      goto LABEL_83;
    }
LABEL_81:
    __asan_report_load8(p_M_parent);
    goto LABEL_82;
  }
  common::milog::MiLogStream::MiLogStream(
    &v58,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/perf.cpp",
    "output",
    66);
  v6 = (__int64)v58.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v58.ostr_ >> 3) + 0x7FFF8000) )
  {
    v47 = v58.ostr_;
    __asan_report_load8(v58.ostr_);
    goto LABEL_76;
  }
  v4 = (common::milog::MilogStringStream *)(v58.ostr_->buffer_.data_ + 0x4000);
  v47 = (common::milog::MilogStringStream *)&v58.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v58.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_load8(v47);
LABEL_77:
    __asan_report_load8(v47);
    goto LABEL_78;
  }
  v48 = v58.ostr_->buffer_.cur_;
  v49 = (int)v4 - (int)v48;
  if ( v49 > 0x16 )
    v49 = 23LL;
  memcpy(v48, "no data about function:", v49);
  *(_QWORD *)(v6 + 8) += v49;
  v4 = v58.ostr_;
  v47 = (common::milog::MilogStringStream *)&v2->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v50 = v2->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v2);
    goto LABEL_79;
  }
  v51 = v2->_M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)v58.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    p_M_parent = v4;
    __asan_report_load8(v4);
    goto LABEL_80;
  }
  v2 = (std::string *)(v58.ostr_->buffer_.data_ + 0x4000);
  p_M_parent = &v58.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v58.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_load8(p_M_parent);
    goto LABEL_81;
  }
  v52 = v58.ostr_->buffer_.cur_;
  v53 = (int)v2 - (int)v52;
  if ( v50 <= v53 )
    v53 = v50;
  memcpy(v52, v51, v53);
  v4->buffer_.cur_ += v53;
  common::milog::MiLogStream::~MiLogStream(&v58);
LABEL_60:
  if ( v59 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_111:
  *(_QWORD *)v3 = 1172321806LL;
  *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 81: range 000000000CA1A6C6-000000000CA1A6DD
void __fastcall common::tools::perf::FunctionPerf::reset(const std::string *func_name)
{
  std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::FunctionPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::FunctionPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::FunctionPerfData>>>::erase(
    &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t,
    func_name);
};

// Line 89: range 000000000CA1A358-000000000CA1A37C
void __fastcall common::tools::perf::MemoryPerf::output(const std::string *reason)
{
  if ( common::tools::perf::MemoryPerf::is_record )
    common::tools::perf::MemoryPerfRecorder::output(&common::tools::perf::MemoryPerf::recorder, reason);
};

// Line 99: range 000000000CA18EF8-000000000CA18F1C
void __fastcall common::tools::perf::MemoryPerf::getDataMap(
        std::map<std::string,common::tools::perf::MemoryPerfData> *data_map)
{
  if ( common::tools::perf::MemoryPerf::is_record )
    common::tools::perf::MemoryPerfRecorder::getDataMap(&common::tools::perf::MemoryPerf::recorder, data_map);
};

// Line 106: range 000000000CA1A37E-000000000CA1A6C4
void __fastcall common::tools::perf::MemoryPerfRecorder::~MemoryPerfRecorder(
        common::tools::perf::MemoryPerfRecorder *const this)
{
  std::forward_iterator_tag v1; // cl
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rdi
  std::string v4; // [rsp+0h] [rbp-38h] BYREF

  v4._M_dataplus._M_p = v4._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v4, &byte_19ECE0A6[-6], byte_19ECE0A6, v1);
  common::tools::perf::MemoryPerf::output(&v4);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v4._M_dataplus._M_p != &v4._anon_0 )
    operator delete(v4._M_dataplus._M_p);
  common::tools::perf::MemoryPerf::is_record = 0;
  p_M_parent = &this->data_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_parent);
    common::tools::perf::FunctionPerf::FunctionPerf(
      (common::tools::perf::FunctionPerf *const)p_M_parent,
      (const std::string *)&byte_19ECE0A6[-6]);
  }
  else
  {
    std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::MemoryPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::MemoryPerfData>>>::_M_erase(
      &this->data_map_._M_t,
      (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::_Link_type)this->data_map_._M_t._M_impl._M_header._M_parent);
  }
};

// Line 113: range 000000000CA1A6DE-000000000CA1AA2B
void __fastcall common::tools::perf::MemoryPerfRecorder::allocate(
        common::tools::perf::MemoryPerfRecorder *const this,
        const std::string *type,
        size_t size)
{
  _QWORD *p_M_p; // r14
  unsigned __int64 v5; // rbp
  std::tuple<> *v6; // rbx
  _DWORD *v7; // r13
  unsigned int v8; // eax
  std::_Rb_tree_header *v9; // r15
  std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::iterator v10; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::iterator v11; // r9
  unsigned __int64 v12; // rdi
  std::_Rb_tree_node_base *v13; // rdx
  unsigned __int64 v14; // rdx
  size_t v15; // rdx
  int v16; // eax
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  std::tuple<> *v20; // rdi
  struct _Unwind_Exception *v21; // rax
  struct _Unwind_Exception *v22; // rbp
  std::tuple<> *v23; // rdi
  std::tuple<const std::string&> *v24; // [rsp+0h] [rbp-118h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-110h]
  std::mutex *mutex; // [rsp+18h] [rbp-100h]
  std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr __pos; // [rsp+20h] [rbp-F8h]
  std::_Rb_tree_node_base::_Base_ptr M_parent; // [rsp+28h] [rbp-F0h]
  std::tuple<> v30; // [rsp+3Fh] [rbp-D9h] BYREF
  std::tuple<> v31; // [rsp+40h] [rbp-D8h] BYREF

  p_M_p = &type->_M_dataplus._M_p;
  v5 = (unsigned __int64)&v31;
  __args_2 = &v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v18 = __asan_stack_malloc_2(160LL);
    if ( v18 )
      v5 = v18;
  }
  v6 = (std::tuple<> *)(v5 + 160);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 8 6 __size 64 8 7 __osize 96 32 13 true_name:114";
  *(_QWORD *)(v5 + 16) = common::tools::perf::MemoryPerfRecorder::allocate;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862724] = -202116109;
  common::tools::MiscUtils::demangle((std::string *)(v5 + 96), type);
  mutex = &this->mutex_;
  if ( &_pthread_key_create )
  {
    v8 = pthread_mutex_lock(&this->mutex_._M_mutex);
    p_M_p = (_QWORD *)v8;
    if ( v8 )
    {
      __asan_handle_no_return(&this->mutex_);
      std::__throw_system_error((int)p_M_p);
    }
  }
  v9 = &this->data_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->data_map_._M_t._M_impl._M_header._M_parent);
    goto LABEL_22;
  }
  v10._M_node = std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::MemoryPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::MemoryPerfData>>>::_M_lower_bound(
                  &this->data_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::_Link_type)this->data_map_._M_t._M_impl._M_header._M_parent,
                  &this->data_map_._M_t._M_impl._M_header,
                  (const std::string *)(v5 + 96))._M_node;
  p_M_p = v10._M_node;
  __pos = v10._M_node;
  if ( v9 != (std::_Rb_tree_header *)v10._M_node )
  {
    v12 = (unsigned __int64)&v10._M_node[1];
    v9 = *(std::_Rb_tree_header **)(v5 + 104);
    *(_QWORD *)(v5 + 32) = v9;
    v13 = (std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr)((char *)v10._M_node + 40);
    if ( !*(_BYTE *)(((unsigned __int64)&v10._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      M_parent = v10._M_node[1]._M_parent;
      *(_QWORD *)(v5 + 64) = M_parent;
      if ( v9 <= (std::_Rb_tree_header *)M_parent )
      {
        v14 = v5 + 32;
        goto LABEL_9;
      }
LABEL_23:
      v14 = v5 + 64;
LABEL_9:
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      {
        v12 = v14;
        __asan_report_load8(v14);
      }
      else
      {
        v15 = *(_QWORD *)v14;
        if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        {
          if ( v15 )
          {
            v16 = memcmp(*(const void **)(v5 + 96), *(const void **)&v10._M_node[1]._M_color, v15);
            if ( v16 )
            {
LABEL_16:
              if ( v16 >= 0 )
                goto LABEL_28;
              goto LABEL_17;
            }
          }
          v17 = (char *)v9 - (char *)M_parent;
          if ( v17 <= 0x7FFFFFFF )
          {
            if ( v17 < (__int64)0xFFFFFFFF80000000LL )
              v16 = 0x80000000;
            else
              v16 = v17;
            goto LABEL_16;
          }
LABEL_26:
          v16 = 0x7FFFFFFF;
          goto LABEL_16;
        }
      }
      __asan_report_load8(v12);
      goto LABEL_26;
    }
LABEL_22:
    v12 = (unsigned __int64)v13;
    v10._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr)__asan_report_load8(v13);
    goto LABEL_23;
  }
LABEL_17:
  *(_QWORD *)(v5 + 64) = v5 + 96;
  p_M_p = std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::MemoryPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::MemoryPerfData>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
            &this->data_map_._M_t,
            (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::const_iterator)__pos,
            &std::piecewise_construct,
            (std::tuple<const std::string&> *)(v5 + 64),
            &v30,
            (const std::piecewise_construct_t *)v11._M_node,
            v24,
            &v31)._M_node;
LABEL_28:
  if ( *(_BYTE *)(((unsigned __int64)(p_M_p + 8) >> 3) + 0x7FFF8000) )
  {
    v19 = __asan_report_load8(p_M_p + 8);
LABEL_37:
    __asan_report_store8(v19);
    v22 = v21;
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&mutex->_M_mutex);
    v23 = *(std::tuple<> **)v6[-64].gap0;
    if ( v23 != &v6[-48] )
      operator delete(v23);
    __asan_handle_no_return(v23);
    _Unwind_Resume(v22);
  }
  ++p_M_p[8];
  v19 = (__int64)(p_M_p + 10);
  if ( *(_BYTE *)(((unsigned __int64)(p_M_p + 10) >> 3) + 0x7FFF8000) )
    goto LABEL_37;
  p_M_p[10] = size;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&mutex->_M_mutex);
  v20 = *(std::tuple<> **)(v5 + 96);
  if ( v20 != (std::tuple<> *)(v5 + 112) )
    operator delete(v20);
  if ( __args_2 == (std::tuple<> *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 124: range 000000000CA1AD54-000000000CA1B076
void __fastcall common::tools::perf::MemoryPerfRecorder::deallocate(
        common::tools::perf::MemoryPerfRecorder *const this,
        const std::string *type)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r15
  unsigned __int64 v4; // rbp
  std::tuple<> *v5; // rbx
  _DWORD *v6; // r13
  int v7; // r14d
  std::_Rb_tree_header *v8; // r14
  std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::iterator v9; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::iterator v10; // r9
  unsigned __int64 v11; // rdi
  std::_Rb_tree_node_base *v12; // rdx
  unsigned __int64 v13; // rdx
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rax
  std::tuple<> *v18; // rdi
  struct _Unwind_Exception *v19; // rbp
  std::tuple<> *v20; // rdi
  std::tuple<const std::string&> *__args_1; // [rsp+0h] [rbp-108h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-100h]
  std::mutex *mutex; // [rsp+10h] [rbp-F8h]
  std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr __pos; // [rsp+18h] [rbp-F0h]
  std::tuple<> v25; // [rsp+2Fh] [rbp-D9h] BYREF
  std::tuple<> v26; // [rsp+30h] [rbp-D8h] BYREF

  v4 = (unsigned __int64)&v26;
  __args_2 = &v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_2(160LL);
    if ( v17 )
      v4 = v17;
  }
  v5 = (std::tuple<> *)(v4 + 160);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 6 __size 64 8 7 __osize 96 32 13 true_name:125";
  *(_QWORD *)(v4 + 16) = common::tools::perf::MemoryPerfRecorder::deallocate;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862724] = -202116109;
  common::tools::MiscUtils::demangle((std::string *)(v4 + 96), type);
  mutex = &this->mutex_;
  if ( &_pthread_key_create )
  {
    v7 = pthread_mutex_lock(&this->mutex_._M_mutex);
    if ( v7 )
    {
      __asan_handle_no_return(&this->mutex_);
      std::__throw_system_error(v7);
    }
  }
  v8 = &this->data_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->data_map_._M_t._M_impl._M_header._M_parent);
    goto LABEL_22;
  }
  v9._M_node = std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::MemoryPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::MemoryPerfData>>>::_M_lower_bound(
                 &this->data_map_._M_t,
                 (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::_Link_type)this->data_map_._M_t._M_impl._M_header._M_parent,
                 &this->data_map_._M_t._M_impl._M_header,
                 (const std::string *)(v4 + 96))._M_node;
  __args_1 = (std::tuple<const std::string&> *)v9._M_node;
  __pos = v9._M_node;
  if ( v8 != (std::_Rb_tree_header *)v9._M_node )
  {
    v11 = (unsigned __int64)&v9._M_node[1];
    v8 = *(std::_Rb_tree_header **)(v4 + 104);
    *(_QWORD *)(v4 + 32) = v8;
    v12 = (std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr)((char *)v9._M_node + 40);
    if ( !*(_BYTE *)(((unsigned __int64)&v9._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      M_parent = v9._M_node[1]._M_parent;
      *(_QWORD *)(v4 + 64) = M_parent;
      if ( v8 <= (std::_Rb_tree_header *)M_parent )
      {
        v13 = v4 + 32;
        goto LABEL_9;
      }
LABEL_23:
      v13 = v4 + 64;
LABEL_9:
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        v11 = v13;
        __asan_report_load8(v13);
      }
      else
      {
        v14 = *(_QWORD *)v13;
        if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          if ( v14 )
          {
            v15 = memcmp(*(const void **)(v4 + 96), *(const void **)&v9._M_node[1]._M_color, v14);
            if ( v15 )
            {
LABEL_16:
              if ( v15 >= 0 )
                goto LABEL_28;
              goto LABEL_17;
            }
          }
          v16 = (char *)v8 - (char *)M_parent;
          if ( v16 <= 0x7FFFFFFF )
          {
            if ( v16 < (__int64)0xFFFFFFFF80000000LL )
              v15 = 0x80000000;
            else
              v15 = v16;
            goto LABEL_16;
          }
LABEL_26:
          v15 = 0x7FFFFFFF;
          goto LABEL_16;
        }
      }
      __asan_report_load8(v11);
      goto LABEL_26;
    }
LABEL_22:
    v11 = (unsigned __int64)v12;
    v9._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr)__asan_report_load8(v12);
    goto LABEL_23;
  }
LABEL_17:
  *(_QWORD *)(v4 + 64) = v4 + 96;
  __args_1 = (std::tuple<const std::string&> *)std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::MemoryPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::MemoryPerfData>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                                                 &this->data_map_._M_t,
                                                 (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::const_iterator)__pos,
                                                 &std::piecewise_construct,
                                                 (std::tuple<const std::string&> *)(v4 + 64),
                                                 &v25,
                                                 (const std::piecewise_construct_t *)v10._M_node,
                                                 __args_1,
                                                 &v26)._M_node;
LABEL_28:
  if ( *(_BYTE *)(((unsigned __int64)&__args_1[9] >> 3) + 0x7FFF8000) )
  {
    v19 = (struct _Unwind_Exception *)__asan_report_load8(&__args_1[9]);
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&mutex->_M_mutex);
    v20 = *(std::tuple<> **)v5[-64].gap0;
    if ( v20 != &v5[-48] )
      operator delete(v20);
    __asan_handle_no_return(v20);
    _Unwind_Resume(v19);
  }
  ++__args_1[9]._M_head_impl;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&mutex->_M_mutex);
  v18 = *(std::tuple<> **)(v4 + 96);
  if ( v18 != (std::tuple<> *)(v4 + 112) )
    operator delete(v18);
  if ( __args_2 == (std::tuple<> *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 133: range 000000000CA1B078-000000000CA1B3C8
void __fastcall common::tools::perf::MemoryPerfRecorder::construct(
        common::tools::perf::MemoryPerfRecorder *const this,
        const std::string *type,
        size_t size)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r15
  unsigned __int64 v5; // rbp
  char *v6; // rbx
  _DWORD *v7; // r13
  int v8; // r14d
  std::_Rb_tree_header *v9; // r14
  std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::iterator v10; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::iterator v11; // r9
  unsigned __int64 v12; // rdi
  std::_Rb_tree_node_base *v13; // rdx
  unsigned __int64 v14; // rdx
  size_t v15; // rdx
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rax
  std::tuple<> *v19; // rdi
  char *v20; // rdi
  struct _Unwind_Exception *v21; // rax
  struct _Unwind_Exception *v22; // rbp
  char *v23; // rdi
  std::tuple<const std::string&> *v24; // [rsp+0h] [rbp-118h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-110h]
  std::mutex *mutex; // [rsp+20h] [rbp-F8h]
  std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr __pos; // [rsp+28h] [rbp-F0h]
  std::tuple<> v29; // [rsp+3Fh] [rbp-D9h] BYREF
  char v30[216]; // [rsp+40h] [rbp-D8h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v18 = __asan_stack_malloc_2(160LL);
    if ( v18 )
      v5 = v18;
  }
  v6 = (char *)(v5 + 160);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 8 6 __size 64 8 7 __osize 96 32 13 true_name:134";
  *(_QWORD *)(v5 + 16) = common::tools::perf::MemoryPerfRecorder::construct;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862724] = -202116109;
  common::tools::MiscUtils::demangle((std::string *)(v5 + 96), type);
  mutex = &this->mutex_;
  if ( &_pthread_key_create )
  {
    v8 = pthread_mutex_lock(&this->mutex_._M_mutex);
    if ( v8 )
    {
      __asan_handle_no_return(&this->mutex_);
      std::__throw_system_error(v8);
    }
  }
  v9 = &this->data_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->data_map_._M_t._M_impl._M_header._M_parent);
    goto LABEL_22;
  }
  v10._M_node = std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::MemoryPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::MemoryPerfData>>>::_M_lower_bound(
                  &this->data_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::_Link_type)this->data_map_._M_t._M_impl._M_header._M_parent,
                  &this->data_map_._M_t._M_impl._M_header,
                  (const std::string *)(v5 + 96))._M_node;
  __args_2 = (std::tuple<> *)v10._M_node;
  __pos = v10._M_node;
  if ( v9 != (std::_Rb_tree_header *)v10._M_node )
  {
    v12 = (unsigned __int64)&v10._M_node[1];
    v9 = *(std::_Rb_tree_header **)(v5 + 104);
    *(_QWORD *)(v5 + 32) = v9;
    v13 = (std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr)((char *)v10._M_node + 40);
    if ( !*(_BYTE *)(((unsigned __int64)&v10._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      M_parent = v10._M_node[1]._M_parent;
      *(_QWORD *)(v5 + 64) = M_parent;
      if ( v9 <= (std::_Rb_tree_header *)M_parent )
      {
        v14 = v5 + 32;
        goto LABEL_9;
      }
LABEL_23:
      v14 = v5 + 64;
LABEL_9:
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      {
        v12 = v14;
        __asan_report_load8(v14);
      }
      else
      {
        v15 = *(_QWORD *)v14;
        if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        {
          if ( v15 )
          {
            v16 = memcmp(*(const void **)(v5 + 96), *(const void **)&v10._M_node[1]._M_color, v15);
            if ( v16 )
            {
LABEL_16:
              if ( v16 >= 0 )
                goto LABEL_28;
              goto LABEL_17;
            }
          }
          v17 = (char *)v9 - (char *)M_parent;
          if ( v17 <= 0x7FFFFFFF )
          {
            if ( v17 < (__int64)0xFFFFFFFF80000000LL )
              v16 = 0x80000000;
            else
              v16 = v17;
            goto LABEL_16;
          }
LABEL_26:
          v16 = 0x7FFFFFFF;
          goto LABEL_16;
        }
      }
      __asan_report_load8(v12);
      goto LABEL_26;
    }
LABEL_22:
    v12 = (unsigned __int64)v13;
    v10._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr)__asan_report_load8(v13);
    goto LABEL_23;
  }
LABEL_17:
  *(_QWORD *)(v5 + 64) = v5 + 96;
  __args_2 = (std::tuple<> *)std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::MemoryPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::MemoryPerfData>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                               &this->data_map_._M_t,
                               (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::const_iterator)__pos,
                               &std::piecewise_construct,
                               (std::tuple<const std::string&> *)(v5 + 64),
                               &v29,
                               (const std::piecewise_construct_t *)v11._M_node,
                               v24,
                               __args_2)._M_node;
LABEL_28:
  v19 = __args_2 + 88;
  if ( *(_BYTE *)(((unsigned __int64)&__args_2[88] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v19);
LABEL_37:
    __asan_report_store8(v19);
    v22 = v21;
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&mutex->_M_mutex);
    v23 = (char *)*((_QWORD *)v6 - 8);
    if ( v23 != v6 - 48 )
      operator delete(v23);
    __asan_handle_no_return(v23);
    _Unwind_Resume(v22);
  }
  ++*(_QWORD *)__args_2[88].gap0;
  v19 = __args_2 + 104;
  if ( *(_BYTE *)(((unsigned __int64)&__args_2[104] >> 3) + 0x7FFF8000) )
    goto LABEL_37;
  *(_QWORD *)__args_2[104].gap0 = size;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&mutex->_M_mutex);
  v20 = *(char **)(v5 + 96);
  if ( v20 != (char *)(v5 + 112) )
    operator delete(v20);
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 144: range 000000000CA1AA30-000000000CA1AD52
void __fastcall common::tools::perf::MemoryPerfRecorder::destruct(
        common::tools::perf::MemoryPerfRecorder *const this,
        const std::string *type)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r15
  unsigned __int64 v4; // rbp
  std::tuple<> *v5; // rbx
  _DWORD *v6; // r13
  int v7; // r14d
  std::_Rb_tree_header *v8; // r14
  std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::iterator v9; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::iterator v10; // r9
  unsigned __int64 v11; // rdi
  std::_Rb_tree_node_base *v12; // rdx
  unsigned __int64 v13; // rdx
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rax
  std::tuple<> *v18; // rdi
  struct _Unwind_Exception *v19; // rbp
  std::tuple<> *v20; // rdi
  std::tuple<const std::string&> *__args_1; // [rsp+0h] [rbp-108h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-100h]
  std::mutex *mutex; // [rsp+10h] [rbp-F8h]
  std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr __pos; // [rsp+18h] [rbp-F0h]
  std::tuple<> v25; // [rsp+2Fh] [rbp-D9h] BYREF
  std::tuple<> v26; // [rsp+30h] [rbp-D8h] BYREF

  v4 = (unsigned __int64)&v26;
  __args_2 = &v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_2(160LL);
    if ( v17 )
      v4 = v17;
  }
  v5 = (std::tuple<> *)(v4 + 160);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 6 __size 64 8 7 __osize 96 32 13 true_name:145";
  *(_QWORD *)(v4 + 16) = common::tools::perf::MemoryPerfRecorder::destruct;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862724] = -202116109;
  common::tools::MiscUtils::demangle((std::string *)(v4 + 96), type);
  mutex = &this->mutex_;
  if ( &_pthread_key_create )
  {
    v7 = pthread_mutex_lock(&this->mutex_._M_mutex);
    if ( v7 )
    {
      __asan_handle_no_return(&this->mutex_);
      std::__throw_system_error(v7);
    }
  }
  v8 = &this->data_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->data_map_._M_t._M_impl._M_header._M_parent);
    goto LABEL_22;
  }
  v9._M_node = std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::MemoryPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::MemoryPerfData>>>::_M_lower_bound(
                 &this->data_map_._M_t,
                 (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::_Link_type)this->data_map_._M_t._M_impl._M_header._M_parent,
                 &this->data_map_._M_t._M_impl._M_header,
                 (const std::string *)(v4 + 96))._M_node;
  __args_1 = (std::tuple<const std::string&> *)v9._M_node;
  __pos = v9._M_node;
  if ( v8 != (std::_Rb_tree_header *)v9._M_node )
  {
    v11 = (unsigned __int64)&v9._M_node[1];
    v8 = *(std::_Rb_tree_header **)(v4 + 104);
    *(_QWORD *)(v4 + 32) = v8;
    v12 = (std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr)((char *)v9._M_node + 40);
    if ( !*(_BYTE *)(((unsigned __int64)&v9._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      M_parent = v9._M_node[1]._M_parent;
      *(_QWORD *)(v4 + 64) = M_parent;
      if ( v8 <= (std::_Rb_tree_header *)M_parent )
      {
        v13 = v4 + 32;
        goto LABEL_9;
      }
LABEL_23:
      v13 = v4 + 64;
LABEL_9:
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        v11 = v13;
        __asan_report_load8(v13);
      }
      else
      {
        v14 = *(_QWORD *)v13;
        if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          if ( v14 )
          {
            v15 = memcmp(*(const void **)(v4 + 96), *(const void **)&v9._M_node[1]._M_color, v14);
            if ( v15 )
            {
LABEL_16:
              if ( v15 >= 0 )
                goto LABEL_28;
              goto LABEL_17;
            }
          }
          v16 = (char *)v8 - (char *)M_parent;
          if ( v16 <= 0x7FFFFFFF )
          {
            if ( v16 < (__int64)0xFFFFFFFF80000000LL )
              v15 = 0x80000000;
            else
              v15 = v16;
            goto LABEL_16;
          }
LABEL_26:
          v15 = 0x7FFFFFFF;
          goto LABEL_16;
        }
      }
      __asan_report_load8(v11);
      goto LABEL_26;
    }
LABEL_22:
    v11 = (unsigned __int64)v12;
    v9._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,common::tools::perf::MemoryPerfData> >::_Base_ptr)__asan_report_load8(v12);
    goto LABEL_23;
  }
LABEL_17:
  *(_QWORD *)(v4 + 64) = v4 + 96;
  __args_1 = (std::tuple<const std::string&> *)std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::MemoryPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::MemoryPerfData>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                                                 &this->data_map_._M_t,
                                                 (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::const_iterator)__pos,
                                                 &std::piecewise_construct,
                                                 (std::tuple<const std::string&> *)(v4 + 64),
                                                 &v25,
                                                 (const std::piecewise_construct_t *)v10._M_node,
                                                 __args_1,
                                                 &v26)._M_node;
LABEL_28:
  if ( *(_BYTE *)(((unsigned __int64)&__args_1[12] >> 3) + 0x7FFF8000) )
  {
    v19 = (struct _Unwind_Exception *)__asan_report_load8(&__args_1[12]);
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&mutex->_M_mutex);
    v20 = *(std::tuple<> **)v5[-64].gap0;
    if ( v20 != &v5[-48] )
      operator delete(v20);
    __asan_handle_no_return(v20);
    _Unwind_Resume(v19);
  }
  ++__args_1[12]._M_head_impl;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&mutex->_M_mutex);
  v18 = *(std::tuple<> **)(v4 + 96);
  if ( v18 != (std::tuple<> *)(v4 + 112) )
    operator delete(v18);
  if ( __args_2 == (std::tuple<> *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 160: range 000000000CA18F1E-000000000CA1A352
void __fastcall common::tools::perf::MemoryPerfRecorder::output(
        common::tools::perf::MemoryPerfRecorder *const this,
        const std::string *reason)
{
  const std::string *v3; // r13
  char *v4; // rbp
  _DWORD *v5; // r15
  std::mutex *p_mutex; // r12
  std::mutex *v7; // rdi
  std::forward_iterator_tag v8; // cl
  __int64 v9; // rax
  time_t Now; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  char v14; // dl
  __int64 v15; // r8
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v17; // rax
  void *v18; // rcx
  unsigned __int64 v19; // rsi
  std::string::size_type M_allocated_capacity; // rsi
  unsigned __int64 v21; // rax
  std::string::size_type v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  char v25; // dl
  unsigned __int64 v26; // rax
  __m128i *v27; // rdx
  __m128i *v28; // rdi
  char v29; // dl
  __int64 v30; // rbx
  unsigned __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  char v39; // al
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rdi
  char *v42; // rcx
  unsigned __int64 v43; // r12
  _BYTE *v44; // rdi
  char v45; // al
  char v46; // si
  std::ostream *v47; // rax
  unsigned __int64 v48; // rdi
  char v49; // al
  _QWORD *v50; // rax
  unsigned __int64 v51; // rdi
  void *v52; // rax
  _QWORD *v53; // rdi
  __int64 v54; // rax
  char *v55; // rdi
  char *i; // rax
  char *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r13
  __int64 v66; // rax
  char *v67; // rbx
  char *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdi
  _QWORD *v71; // rdx
  char v72; // al
  _QWORD *v73; // rdi
  _QWORD *v74; // rax
  unsigned __int64 v75; // rdi
  void *v76; // rax
  __int64 v77; // rax
  char *v78; // rdi
  signed __int64 v79; // [rsp+0h] [rbp-408h]
  __int64 v80; // [rsp+8h] [rbp-400h]
  __int64 v81; // [rsp+8h] [rbp-400h]
  __int64 v82; // [rsp+8h] [rbp-400h]
  __int64 v83; // [rsp+8h] [rbp-400h]
  __int64 v84; // [rsp+8h] [rbp-400h]
  __int64 v85; // [rsp+8h] [rbp-400h]
  __int64 v86; // [rsp+8h] [rbp-400h]
  __int64 v87; // [rsp+8h] [rbp-400h]
  unsigned __int64 v88; // [rsp+10h] [rbp-3F8h]
  std::string v89; // [rsp+20h] [rbp-3E8h] BYREF
  void *v90; // [rsp+40h] [rbp-3C8h] BYREF
  __int64 v91; // [rsp+48h] [rbp-3C0h]
  __m128i v92; // [rsp+50h] [rbp-3B8h] BYREF
  std::string v93; // [rsp+60h] [rbp-3A8h] BYREF
  void *v94; // [rsp+80h] [rbp-388h] BYREF
  __int64 v95; // [rsp+88h] [rbp-380h]
  __m128i v96; // [rsp+90h] [rbp-378h] BYREF
  std::filesystem::__cxx11::path v97; // [rsp+A0h] [rbp-368h] BYREF
  char v98[824]; // [rsp+D0h] [rbp-338h] BYREF

  v3 = reason;
  v88 = (unsigned __int64)v98;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_4(768LL);
    if ( v9 )
      v88 = v9;
  }
  v4 = (char *)(v88 + 768);
  *(_QWORD *)v88 = 1102416563LL;
  *(_QWORD *)(v88 + 8) = "3 48 32 13 file_path:168 112 48 12 data_map:161 192 512 15 file_stream:169";
  *(_QWORD *)(v88 + 16) = common::tools::perf::MemoryPerfRecorder::output;
  v5 = (_DWORD *)(v88 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862725] = -218959118;
  v5[536862742] = -202116109;
  v5[536862743] = -202116109;
  *(_DWORD *)(v88 + 120) = 0;
  *(_QWORD *)(v88 + 128) = 0LL;
  *(_QWORD *)(v88 + 136) = v88 + 120;
  *(_QWORD *)(v88 + 144) = v88 + 120;
  *(_QWORD *)(v88 + 152) = 0LL;
  p_mutex = &this->mutex_;
  if ( &_pthread_key_create )
  {
    v7 = &this->mutex_;
    LODWORD(v79) = pthread_mutex_lock(&this->mutex_._M_mutex);
    if ( (_DWORD)v79 )
    {
      __asan_handle_no_return(v7);
      std::__throw_system_error(v79);
    }
  }
  std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::MemoryPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::MemoryPerfData>>>::operator=(
    (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > > *const)(v88 + 112),
    &this->data_map_._M_t);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->mutex_._M_mutex);
  v97._M_pathname._M_dataplus._M_p = v97._M_pathname._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v97._M_pathname, &byte_19ECDDCB[-11], byte_19ECDDCB, v8);
  std::filesystem::__cxx11::path::_List::_List(&v97._M_cmpts);
  std::filesystem::__cxx11::path::_M_split_cmpts(&v97);
  std::filesystem::create_directory(
    (std::filesystem *)&v97,
    (const std::filesystem::__cxx11::path *)&byte_19ECDDCB[-11]);
  if ( v97._M_cmpts._M_impl._M_t._M_t._M_head_impl )
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()(&v97._M_cmpts);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v97._M_pathname._M_dataplus._M_p != &v97._M_pathname._anon_0 )
    operator delete(v97._M_pathname._M_dataplus._M_p);
  Now = common::tools::TimeUtils::getNow();
  common::tools::TimeUtils::getShortStrByTime[abi:cxx11](&v93, Now);
  std::operator+<char>(&v89, "./mem_perf/mem_perf.", reason);
  if ( v89._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
  {
    __asan_handle_no_return(&v89);
    std::__throw_length_error("basic_string::append");
  }
  v11 = std::string::_M_append(&v89, ".", 1LL);
  v90 = &v92;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
    v11 = __asan_report_load8(v11);
  }
  else
  {
    v12 = v11 + 16;
    if ( *(_QWORD *)v11 != v11 + 16 )
    {
      v90 = *(void **)v11;
      v13 = v11 + 16;
      if ( !*(_BYTE *)(((v11 + 16) >> 3) + 0x7FFF8000) )
      {
        v92.m128i_i64[0] = *(_QWORD *)(v11 + 16);
        goto LABEL_21;
      }
LABEL_36:
      __asan_report_load8(v13);
      goto LABEL_37;
    }
  }
  v13 = v12;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v12 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v12 & 7)
    || *(_BYTE *)(((v11 + 31) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v11 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v11 + 31) & 7) )
  {
    __asan_report_load_n(v12, 16LL);
    goto LABEL_36;
  }
  v92 = _mm_loadu_si128((const __m128i *)(v11 + 16));
LABEL_21:
  v13 = v11 + 8;
  if ( *(_BYTE *)(((v11 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(v13);
LABEL_38:
    v17 = __asan_report_store1(v13);
    goto LABEL_39;
  }
  v91 = *(_QWORD *)(v11 + 8);
  *(_QWORD *)v11 = v12;
  *(_QWORD *)(v11 + 8) = 0LL;
  v13 = v11 + 16;
  v14 = *(_BYTE *)(((v11 + 16) >> 3) + 0x7FFF8000);
  if ( v14 <= (char)((v11 + 16) & 7) && v14 )
    goto LABEL_38;
  *(_BYTE *)(v11 + 16) = 0;
  v15 = v91;
  M_string_length = v93._M_string_length;
  v17 = v91 + v93._M_string_length;
  v18 = v90;
  if ( v90 == &v92 )
  {
LABEL_39:
    v19 = 15LL;
    goto LABEL_26;
  }
  v19 = v92.m128i_i64[0];
LABEL_26:
  if ( v17 > v19
    && ((std::string::$CFBEC286C7F52157F7E59FC354047095 *)v93._M_dataplus._M_p == &v93._anon_0
      ? (M_allocated_capacity = 15LL)
      : (M_allocated_capacity = v93._anon_0._M_allocated_capacity),
        v17 <= M_allocated_capacity) )
  {
    v22 = v93._M_string_length;
    if ( v93._M_string_length )
      v22 = 0LL;
    v21 = std::string::_M_replace(&v93, 0LL, v22, v18, v15);
  }
  else
  {
    v21 = std::string::_M_append(&v90, v93._M_dataplus._M_p, M_string_length);
  }
  v94 = &v96;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
    v21 = __asan_report_load8(v21);
  }
  else
  {
    v23 = v21 + 16;
    if ( *(_QWORD *)v21 != v21 + 16 )
    {
      v94 = *(void **)v21;
      v24 = v21 + 16;
      if ( !*(_BYTE *)(((v21 + 16) >> 3) + 0x7FFF8000) )
      {
        v96.m128i_i64[0] = *(_QWORD *)(v21 + 16);
        goto LABEL_48;
      }
LABEL_58:
      __asan_report_load8(v24);
      goto LABEL_59;
    }
  }
  v24 = v23;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v23 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v23 & 7)
    || *(_BYTE *)(((v21 + 31) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v21 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v21 + 31) & 7) )
  {
    __asan_report_load_n(v23, 16LL);
    goto LABEL_58;
  }
  v96 = _mm_loadu_si128((const __m128i *)(v21 + 16));
LABEL_48:
  v24 = v21 + 8;
  if ( *(_BYTE *)(((v21 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(v24);
LABEL_60:
    __asan_report_store1(v24);
LABEL_61:
    __asan_handle_no_return(v24);
    std::__throw_length_error("basic_string::append");
  }
  v95 = *(_QWORD *)(v21 + 8);
  *(_QWORD *)v21 = v23;
  *(_QWORD *)(v21 + 8) = 0LL;
  v24 = v21 + 16;
  v25 = *(_BYTE *)(((v21 + 16) >> 3) + 0x7FFF8000);
  if ( v25 <= (char)((v21 + 16) & 7) && v25 )
    goto LABEL_60;
  *(_BYTE *)(v21 + 16) = 0;
  if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - v95) <= 3 )
    goto LABEL_61;
  v26 = std::string::_M_append(&v94, ".csv", 4LL);
  *(_QWORD *)(v88 + 48) = v88 + 64;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
    v26 = __asan_report_load8(v26);
  }
  else
  {
    v27 = (__m128i *)(v26 + 16);
    if ( *(_QWORD *)v26 != v26 + 16 )
    {
      *(_QWORD *)(v88 + 48) = *(_QWORD *)v26;
      v28 = (__m128i *)(v26 + 16);
      if ( !*(_BYTE *)(((v26 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v88 + 64) = *(_QWORD *)(v26 + 16);
        goto LABEL_66;
      }
LABEL_88:
      __asan_report_load8(v28);
      goto LABEL_89;
    }
  }
  v28 = v27;
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) <= ((unsigned __int8)v27 & 7)
    || *(_BYTE *)(((v26 + 31) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v26 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v26 + 31) & 7) )
  {
    __asan_report_load_n(v27, 16LL);
    goto LABEL_88;
  }
  *(__m128i *)(v88 + 64) = _mm_loadu_si128((const __m128i *)(v26 + 16));
LABEL_66:
  v28 = (__m128i *)(v26 + 8);
  if ( *(_BYTE *)(((v26 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_load8(v28);
LABEL_90:
    __asan_report_store1(v28);
LABEL_91:
    __asan_report_load8(v28);
    goto LABEL_92;
  }
  *(_QWORD *)(v88 + 56) = *(_QWORD *)(v26 + 8);
  *(_QWORD *)v26 = v27;
  *(_QWORD *)(v26 + 8) = 0LL;
  v28 = (__m128i *)(v26 + 16);
  v29 = *(_BYTE *)(((v26 + 16) >> 3) + 0x7FFF8000);
  if ( v29 <= (char)((v26 + 16) & 7) && v29 )
    goto LABEL_90;
  *(_BYTE *)(v26 + 16) = 0;
  if ( v94 != &v96 )
    operator delete(v94);
  if ( v90 != &v92 )
    operator delete(v90);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89._M_dataplus._M_p != &v89._anon_0 )
    operator delete(v89._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v93._M_dataplus._M_p != &v93._anon_0 )
    operator delete(v93._M_dataplus._M_p);
  std::ios_base::ios_base((std::ios_base *)(v88 + 440));
  *(_QWORD *)(v88 + 440) = (char *)&`vtable for'std::ios + 16;
  *(_QWORD *)(v88 + 656) = 0LL;
  *(_BYTE *)(v88 + 664) = 0;
  *(_BYTE *)(v88 + 665) = 0;
  *(_QWORD *)(v88 + 672) = 0LL;
  *(_QWORD *)(v88 + 680) = 0LL;
  *(_QWORD *)(v88 + 688) = 0LL;
  *(_QWORD *)(v88 + 696) = 0LL;
  v28 = (__m128i *)&`VTT for'std::ofstream[1];
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ofstream[1] >> 3) + 0x7FFF8000) )
    goto LABEL_91;
  v30 = `VTT for'std::ofstream[1];
  *(_QWORD *)(v88 + 192) = v30;
  v28 = (__m128i *)(v30 - 24);
  if ( *(_BYTE *)(((unsigned __int64)(v30 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    v32 = (_QWORD *)__asan_report_load8(v28);
    goto LABEL_93;
  }
  v31 = (unsigned __int64)&v4[*(_QWORD *)(v30 - 24) - 576];
  v32 = &`VTT for'std::ofstream[2];
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ofstream[2] >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    v31 = (unsigned __int64)v32;
    __asan_report_load8(v32);
    goto LABEL_94;
  }
  p_mutex = (std::mutex *)`VTT for'std::ofstream[2];
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_store8(v31);
    goto LABEL_95;
  }
  *(_QWORD *)v31 = p_mutex;
  v33 = *(_QWORD *)(v88 + 192);
  v31 = v33 - 24;
  if ( !*(_BYTE *)(((unsigned __int64)(v33 - 24) >> 3) + 0x7FFF8000) )
  {
    std::ios::init(&v4[*(_QWORD *)(v33 - 24) - 576], 0LL);
    goto LABEL_96;
  }
LABEL_95:
  __asan_report_load8(v31);
LABEL_96:
  *(_QWORD *)(v88 + 192) = (char *)&`vtable for'std::ofstream + 24;
  *(_QWORD *)(v88 + 440) = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::basic_filebuf(v88 + 200);
  std::ios::init(v88 + 440, v88 + 200);
  if ( std::filebuf::open(v88 + 200, *(_QWORD *)(v88 + 48), 16LL) )
  {
    v34 = *(_QWORD *)(v88 + 192);
    v35 = v34 - 24;
    if ( !*(_BYTE *)(((unsigned __int64)(v34 - 24) >> 3) + 0x7FFF8000) )
    {
      std::ios::clear(&v4[*(_QWORD *)(v34 - 24) - 576], 0LL);
      goto LABEL_106;
    }
  }
  else
  {
    v36 = *(_QWORD *)(v88 + 192);
    if ( *(_BYTE *)(((unsigned __int64)(v36 - 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v36 - 24);
    }
    else
    {
      v37 = (__int64)&v4[*(_QWORD *)(v36 - 24) - 576];
      v38 = v37 + 32;
      v39 = *(_BYTE *)(((unsigned __int64)(v37 + 32) >> 3) + 0x7FFF8000);
      if ( !v39 || v39 > 3 )
      {
        std::ios::clear(v37, *(_DWORD *)(v37 + 32) | 4u);
        goto LABEL_106;
      }
    }
    v35 = v38;
    __asan_report_load4(v38);
  }
  __asan_report_load8(v35);
LABEL_106:
  if ( (unsigned __int8)std::__basic_file<char>::is_open(v88 + 304) )
  {
    std::__ostream_insert<char,std::char_traits<char>>(v88 + 192, &unk_19ECDF00, 91LL);
    std::__ostream_insert<char,std::char_traits<char>>(v88 + 192, &unk_19ECDF80, 106LL);
    std::__ostream_insert<char,std::char_traits<char>>(v88 + 192, &unk_19ECE020, 1LL);
    for ( i = *(char **)(v88 + 136); ; i = (char *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v67) )
    {
      v67 = i;
      if ( i == (char *)(v88 + 120) )
      {
        if ( std::filebuf::close(v88 + 200) )
          goto LABEL_178;
        v69 = *(_QWORD *)(v88 + 192);
        if ( *(_BYTE *)(((unsigned __int64)(v69 - 24) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v69 - 24);
        }
        else
        {
          v70 = (__int64)&v4[*(_QWORD *)(v69 - 24) - 576];
          v71 = (_QWORD *)(v70 + 32);
          v72 = *(_BYTE *)(((unsigned __int64)(v70 + 32) >> 3) + 0x7FFF8000);
          if ( !v72 || v72 > 3 )
          {
            std::ios::clear(v70, *(_DWORD *)(v70 + 32) | 4u);
LABEL_178:
            *(_QWORD *)(v88 + 192) = (char *)&`vtable for'std::ofstream + 24;
            *(_QWORD *)(v88 + 440) = (char *)&`vtable for'std::ofstream + 64;
            *(_QWORD *)(v88 + 200) = (char *)&`vtable for'std::filebuf + 16;
            std::filebuf::close(v88 + 200);
            while ( 2 )
            {
              std::__basic_file<char>::~__basic_file(v88 + 304);
              *(_QWORD *)(v88 + 200) = (char *)&`vtable for'std::streambuf + 16;
              std::locale::~locale((std::locale *)(v88 + 256));
              v73 = &`VTT for'std::ofstream[1];
              if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ofstream[1] >> 3) + 0x7FFF8000) )
              {
LABEL_185:
                __asan_report_load8(v73);
              }
              else
              {
                v77 = `VTT for'std::ofstream[1];
                *(_QWORD *)(v88 + 192) = v77;
                v73 = (_QWORD *)(v77 - 24);
                if ( !*(_BYTE *)(((unsigned __int64)(v77 - 24) >> 3) + 0x7FFF8000) )
                {
                  v75 = (unsigned __int64)&v4[*(_QWORD *)(v77 - 24) - 576];
                  v74 = &`VTT for'std::ofstream[2];
                  if ( !*(_BYTE *)(((unsigned __int64)&`VTT for'std::ofstream[2] >> 3) + 0x7FFF8000) )
                  {
                    if ( !*(_BYTE *)((v75 >> 3) + 0x7FFF8000) )
                    {
                      *(_QWORD *)v75 = `VTT for'std::ofstream[2];
                      *(_QWORD *)(v88 + 440) = (char *)&`vtable for'std::ios + 16;
                      std::ios_base::~ios_base((std::ios_base *)(v88 + 440));
                      v78 = *(char **)(v88 + 48);
                      if ( v78 != (char *)(v88 + 64) )
                        operator delete(v78);
                      goto LABEL_195;
                    }
                    goto LABEL_188;
                  }
LABEL_187:
                  v75 = (unsigned __int64)v74;
                  __asan_report_load8(v74);
LABEL_188:
                  __asan_report_store8(v75);
                  __cxa_begin_catch(v76);
                  __cxa_end_catch();
                  continue;
                }
              }
              break;
            }
            v74 = (_QWORD *)__asan_report_load8(v73);
            goto LABEL_187;
          }
        }
        v73 = v71;
        __asan_report_load4(v71);
        goto LABEL_185;
      }
      v68 = i + 64;
      if ( *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000) )
        break;
      p_mutex = (std::mutex *)*((_QWORD *)v67 + 8);
      v57 = v67 + 72;
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 72) >> 3) + 0x7FFF8000) )
        goto LABEL_142;
      p_mutex = (std::mutex *)((char *)p_mutex - *((_QWORD *)v67 + 9));
      v57 = v67 + 88;
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 88) >> 3) + 0x7FFF8000) )
        goto LABEL_143;
      v3 = (const std::string *)*((_QWORD *)v67 + 11);
      v57 = v67 + 96;
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 96) >> 3) + 0x7FFF8000) )
        goto LABEL_144;
      v3 = (const std::string *)((char *)v3 - *((_QWORD *)v67 + 12));
      v79 = (char *)p_mutex - (char *)v3;
      v57 = v67 + 40;
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 40) >> 3) + 0x7FFF8000) )
        goto LABEL_145;
      v57 = v67 + 32;
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 32) >> 3) + 0x7FFF8000) )
        goto LABEL_146;
      v58 = std::__ostream_insert<char,std::char_traits<char>>(v88 + 192, *((_QWORD *)v67 + 4), *((_QWORD *)v67 + 5));
LABEL_147:
      v80 = v58;
      std::__ostream_insert<char,std::char_traits<char>>(v58, &unk_19ECE060, 1LL);
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 64) >> 3) + 0x7FFF8000) )
        v59 = __asan_report_load8(v67 + 64);
      else
        v59 = std::ostream::_M_insert<long>(v80, *((_QWORD *)v67 + 8));
      v81 = v59;
      std::__ostream_insert<char,std::char_traits<char>>(v59, &unk_19ECE060, 1LL);
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 72) >> 3) + 0x7FFF8000) )
        v60 = __asan_report_load8(v67 + 72);
      else
        v60 = std::ostream::_M_insert<long>(v81, *((_QWORD *)v67 + 9));
      v82 = v60;
      std::__ostream_insert<char,std::char_traits<char>>(v60, &unk_19ECE060, 1LL);
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 80) >> 3) + 0x7FFF8000) )
        v61 = __asan_report_load8(v67 + 80);
      else
        v61 = std::ostream::_M_insert<unsigned long>(v82, *((_QWORD *)v67 + 10));
      v83 = v61;
      std::__ostream_insert<char,std::char_traits<char>>(v61, &unk_19ECE060, 1LL);
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 88) >> 3) + 0x7FFF8000) )
        v62 = __asan_report_load8(v67 + 88);
      else
        v62 = std::ostream::_M_insert<long>(v83, *((_QWORD *)v67 + 11));
      v84 = v62;
      std::__ostream_insert<char,std::char_traits<char>>(v62, &unk_19ECE060, 1LL);
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 96) >> 3) + 0x7FFF8000) )
        v63 = __asan_report_load8(v67 + 96);
      else
        v63 = std::ostream::_M_insert<long>(v84, *((_QWORD *)v67 + 12));
      v85 = v63;
      std::__ostream_insert<char,std::char_traits<char>>(v63, &unk_19ECE060, 1LL);
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 104) >> 3) + 0x7FFF8000) )
        v64 = __asan_report_load8(v67 + 104);
      else
        v64 = std::ostream::_M_insert<unsigned long>(v85, *((_QWORD *)v67 + 13));
      v86 = v64;
      std::__ostream_insert<char,std::char_traits<char>>(v64, &unk_19ECE060, 1LL);
      v87 = std::ostream::_M_insert<long>(v86, p_mutex);
      std::__ostream_insert<char,std::char_traits<char>>(v87, &unk_19ECE060, 1LL);
      v65 = std::ostream::_M_insert<long>(v87, v3);
      std::__ostream_insert<char,std::char_traits<char>>(v65, &unk_19ECE060, 1LL);
      v3 = (const std::string *)std::ostream::_M_insert<long>(v65, v79);
      std::__ostream_insert<char,std::char_traits<char>>(v3, &unk_19ECE060, 1LL);
      if ( *(_BYTE *)(((unsigned __int64)(v67 + 80) >> 3) + 0x7FFF8000) )
        v66 = __asan_report_load8(v67 + 80);
      else
        v66 = std::ostream::_M_insert<unsigned long>(v3, *((_QWORD *)v67 + 10) * (_QWORD)p_mutex);
      std::__ostream_insert<char,std::char_traits<char>>(v66, &unk_19ECE020, 1LL);
    }
    v57 = v68;
    __asan_report_load8(v68);
LABEL_142:
    __asan_report_load8(v57);
LABEL_143:
    __asan_report_load8(v57);
LABEL_144:
    __asan_report_load8(v57);
LABEL_145:
    __asan_report_load8(v57);
LABEL_146:
    v58 = __asan_report_load8(v57);
    goto LABEL_147;
  }
  std::__ostream_insert<char,std::char_traits<char>>(&std::cout, " open file failed:", 18LL);
  v40 = std::__ostream_insert<char,std::char_traits<char>>(&std::cout, *(_QWORD *)(v88 + 48), *(_QWORD *)(v88 + 56));
  if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
  {
    v41 = v40;
    __asan_report_load8(v40);
    goto LABEL_119;
  }
  v41 = *(_QWORD *)v40 - 24LL;
  if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
  {
LABEL_119:
    __asan_report_load8(v41);
    goto LABEL_120;
  }
  v42 = (char *)(*(_QWORD *)(*(_QWORD *)v40 - 24LL) + v40);
  v41 = (unsigned __int64)(v42 + 240);
  if ( *(_BYTE *)(((unsigned __int64)(v42 + 240) >> 3) + 0x7FFF8000) )
  {
LABEL_120:
    __asan_report_load8(v41);
LABEL_121:
    __asan_handle_no_return(v41);
    std::__throw_bad_cast();
  }
  v43 = *((_QWORD *)v42 + 30);
  if ( !v43 )
    goto LABEL_121;
  v44 = (_BYTE *)(v43 + 56);
  if ( *(char *)(((v43 + 56) >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(v44);
    goto LABEL_123;
  }
  if ( !*(_BYTE *)(v43 + 56) )
    goto LABEL_124;
  v44 = (_BYTE *)(v43 + 67);
  v45 = *(_BYTE *)(((v43 + 67) >> 3) + 0x7FFF8000);
  if ( v45 <= (char)((v43 + 67) & 7) && v45 )
  {
LABEL_123:
    __asan_report_load1(v44);
LABEL_124:
    std::ctype<char>::_M_widen_init(v43);
    if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
    {
      v48 = v43;
      __asan_report_load8(v43);
    }
    else
    {
      v48 = *(_QWORD *)v43 + 48LL;
      if ( !*(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
      {
        v49 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v43 + 48LL))(v43, 10LL);
LABEL_129:
        v46 = v49;
        goto LABEL_117;
      }
    }
    v49 = __asan_report_load8(v48);
    goto LABEL_129;
  }
  v46 = *(_BYTE *)(v43 + 67);
LABEL_117:
  v47 = (std::ostream *)std::ostream::put((std::ostream *)v40, v46);
  std::ostream::flush(v47);
  *(_QWORD *)(v88 + 192) = (char *)&`vtable for'std::ofstream + 24;
  *(_QWORD *)(v88 + 440) = (char *)&`vtable for'std::ofstream + 64;
  *(_QWORD *)(v88 + 200) = (char *)&`vtable for'std::filebuf + 16;
  std::filebuf::close(v88 + 200);
  while ( 1 )
  {
    std::__basic_file<char>::~__basic_file(v88 + 304);
    *(_QWORD *)(v88 + 200) = (char *)&`vtable for'std::streambuf + 16;
    std::locale::~locale((std::locale *)(v88 + 256));
    v53 = &`VTT for'std::ofstream[1];
    if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ofstream[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v53);
LABEL_131:
      v50 = (_QWORD *)__asan_report_load8(v53);
LABEL_132:
      v51 = (unsigned __int64)v50;
      __asan_report_load8(v50);
      goto LABEL_133;
    }
    v54 = `VTT for'std::ofstream[1];
    *(_QWORD *)(v88 + 192) = v54;
    v53 = (_QWORD *)(v54 - 24);
    if ( *(_BYTE *)(((unsigned __int64)(v54 - 24) >> 3) + 0x7FFF8000) )
      goto LABEL_131;
    v51 = (unsigned __int64)&v4[*(_QWORD *)(v54 - 24) - 576];
    v50 = &`VTT for'std::ofstream[2];
    if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ofstream[2] >> 3) + 0x7FFF8000) )
      goto LABEL_132;
    if ( !*(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
      break;
LABEL_133:
    __asan_report_store8(v51);
    __cxa_begin_catch(v52);
    __cxa_end_catch();
  }
  *(_QWORD *)v51 = `VTT for'std::ofstream[2];
  *(_QWORD *)(v88 + 440) = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)(v88 + 440));
  v55 = *(char **)(v88 + 48);
  if ( v55 != (char *)(v88 + 64) )
    operator delete(v55);
LABEL_195:
  std::_Rb_tree<std::string,std::pair<std::string const,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<std::string const,common::tools::perf::MemoryPerfData>>,std::less<std::string>,std::allocator<std::pair<std::string const,common::tools::perf::MemoryPerfData>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > > *const)(v88 + 112),
    *(std::_Rb_tree<std::string,std::pair<const std::string,common::tools::perf::MemoryPerfData>,std::_Select1st<std::pair<const std::string,common::tools::perf::MemoryPerfData> >,std::less<std::string >,std::allocator<std::pair<const std::string,common::tools::perf::MemoryPerfData> > >::_Link_type *)(v88 + 128));
  if ( v98 == (char *)v88 )
  {
    *(_QWORD *)((v88 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v88 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8058) = 0LL;
  }
  else
  {
    *(_QWORD *)v88 = 1172321806LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v88 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 203: range 000000000CA1BCC6-000000000CA1BCDD
void __cdecl GLOBAL__sub_I_perf_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 203: range 000000000CA187B8-000000000CA18EF3
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  void *p_M_parent; // rdi
  char v3; // al
  char v4; // al
  std::mutex *p_mutex; // rdi
  __int64 i; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/perf.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    p_M_parent = &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header;
    v3 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl.std::_Rb_tree_header >> 3)
                  + 0x7FFF8000);
    if ( v3 && v3 <= 3 )
    {
      __asan_report_store4(p_M_parent);
    }
    else
    {
      common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_color = _S_red;
      p_M_parent = &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_parent;
      if ( !*(_BYTE *)(((unsigned __int64)&common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_parent >> 3)
                     + 0x7FFF8000) )
      {
        common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_parent = 0LL;
        p_M_parent = &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_left;
        if ( !*(_BYTE *)(((unsigned __int64)&common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_left >> 3)
                       + 0x7FFF8000) )
        {
          common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_left = &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header;
          p_M_parent = &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_right;
          if ( !*(_BYTE *)(((unsigned __int64)&common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_right >> 3)
                         + 0x7FFF8000) )
          {
            common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header._M_right = &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_header;
            p_M_parent = &common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_node_count;
            if ( !*(_BYTE *)(((unsigned __int64)&common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_node_count >> 3)
                           + 0x7FFF8000) )
            {
              common::tools::perf::FunctionPerf::data_map[abi:cxx11]._M_t._M_impl._M_node_count = 0LL;
              __cxa_atexit(
                (void (__fastcall *)(void *))std::map<std::string,common::tools::perf::FunctionPerfData>::~map,
                &common::tools::perf::FunctionPerf::data_map[abi:cxx11],
                &_dso_handle);
              p_M_parent = &common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl.std::_Rb_tree_header;
              v4 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl.std::_Rb_tree_header >> 3)
                            + 0x7FFF8000);
              if ( !v4 || v4 > 3 )
              {
                common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header._M_color = _S_red;
                p_M_parent = &common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header._M_parent;
                if ( !*(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header._M_parent >> 3)
                               + 0x7FFF8000) )
                {
                  common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header._M_parent = 0LL;
                  p_M_parent = &common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header._M_left;
                  if ( !*(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header._M_left >> 3)
                                 + 0x7FFF8000) )
                  {
                    common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header._M_left = &common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header;
                    p_M_parent = &common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header._M_right;
                    if ( !*(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header._M_right >> 3)
                                   + 0x7FFF8000) )
                    {
                      common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header._M_right = &common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_header;
                      p_M_parent = &common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_node_count;
                      if ( !*(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_node_count >> 3)
                                     + 0x7FFF8000) )
                      {
                        common::tools::perf::MemoryPerf::recorder.data_map_._M_t._M_impl._M_node_count = 0LL;
                        p_M_parent = &common::tools::perf::MemoryPerf::recorder.mutex_;
                        if ( (*(_BYTE *)((((unsigned __int64)&common::tools::perf::MemoryPerf::recorder.mutex_._M_mutex.__align
                                         + 39) >> 3)
                                       + 0x7FFF8000) == 0
                           || *(_BYTE *)((((unsigned __int64)&common::tools::perf::MemoryPerf::recorder.mutex_._M_mutex.__align
                                         + 39) >> 3)
                                       + 0x7FFF8000) > ((unsigned __int8)&common::tools::perf::MemoryPerf::recorder.mutex_._M_mutex.__size[39] & 7))
                          && *(char *)(((unsigned __int64)&common::tools::perf::MemoryPerf::recorder.mutex_ >> 3)
                                     + 0x7FFF8000) >= 0 )
                        {
                          p_mutex = &common::tools::perf::MemoryPerf::recorder.mutex_;
                          for ( i = 10LL; i; --i )
                          {
                            p_mutex->_M_mutex.__data.__lock = 0;
                            p_mutex = (std::mutex *)((char *)p_mutex + 4);
                          }
                          __cxa_atexit(
                            (void (__fastcall *)(void *))common::tools::perf::MemoryPerfRecorder::~MemoryPerfRecorder,
                            &common::tools::perf::MemoryPerf::recorder,
                            &_dso_handle);
                          if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
                            goto LABEL_24;
                          `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
                          if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                                         + 0x7FFF8000) )
                          {
                            common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                                                 + 9;
LABEL_24:
                            if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero )
                              goto LABEL_3;
                            `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = 1;
                            if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                                           + 0x7FFF8000) )
                            {
                              common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
                              goto LABEL_3;
                            }
LABEL_39:
                            __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
                            JUMPOUT(0xCA18AFFLL);
                          }
LABEL_38:
                          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
                          goto LABEL_39;
                        }
LABEL_37:
                        __asan_report_store_n(p_M_parent, 40LL);
                        goto LABEL_38;
                      }
LABEL_36:
                      __asan_report_store8(p_M_parent);
                      goto LABEL_37;
                    }
LABEL_35:
                    __asan_report_store8(p_M_parent);
                    goto LABEL_36;
                  }
LABEL_34:
                  __asan_report_store8(p_M_parent);
                  goto LABEL_35;
                }
LABEL_33:
                __asan_report_store8(p_M_parent);
                goto LABEL_34;
              }
LABEL_32:
              __asan_report_store4(p_M_parent);
              goto LABEL_33;
            }
LABEL_31:
            __asan_report_store8(p_M_parent);
            goto LABEL_32;
          }
LABEL_30:
          __asan_report_store8(p_M_parent);
          goto LABEL_31;
        }
LABEL_29:
        __asan_report_store8(p_M_parent);
        goto LABEL_30;
      }
    }
    __asan_report_store8(p_M_parent);
    goto LABEL_29;
  }
};
