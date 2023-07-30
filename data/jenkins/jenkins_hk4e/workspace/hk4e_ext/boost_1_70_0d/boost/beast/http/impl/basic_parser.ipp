// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/basic_parser.ipp

// Line 83: range 0000000019BA3B2E-0000000019BA470C
// local variable allocation has failed, the output may be wrong!
void (__fastcall *__fastcall boost::beast::http::basic_parser<false>::put(
        boost::beast::http::basic_parser<false> *const this,
        boost::asio::const_buffer buffer,
        unsigned __int64 ec))(boost::beast::http::basic_parser<false> *const, boost::system::error_code *, unsigned __int64)
{
  char *data; // r13
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  boost::beast::http::detail::basic_parser_base::state *p_state; // rdi
  char v9; // al
  char *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rax
  boost::beast::http::detail::basic_parser_base::state *v13; // rdi
  boost::beast::error_code *p_header_limit; // rdi
  char v15; // al
  __int64 v16; // rdx
  char v17; // al
  unsigned __int64 *v18; // rax
  boost::beast::error_code *v19; // rdi
  char v20; // al
  void *p_skip; // rdi
  char v22; // al
  unsigned __int64 v23; // rax
  boost::beast::error_code *v24; // rdi
  char v25; // al
  __int64 v26; // rdx
  char v27; // al
  unsigned __int64 *v28; // rax
  boost::beast::error_code *v29; // rdi
  char v30; // al
  unsigned __int64 v31; // rdx
  boost::beast::error_code *p_f; // rdi
  char v33; // al
  char v34; // cl
  char v35; // al
  boost::ulong_long_type *p_id; // rdi
  const boost::system::error_category *v37; // rax
  boost::ulong_long_type id; // rcx
  bool v39; // al
  uint32_t *v40; // rdi
  char v41; // al
  __int64 v42; // rax
  std::size_t v43; // rax
  boost::ulong_long_type *v44; // rdi
  const boost::system::error_category *v45; // rax
  boost::ulong_long_type v46; // rcx
  bool v47; // al
  uint32_t *v48; // rdi
  char v49; // al
  __int64 v50; // rax
  std::size_t *v51; // rdi
  unsigned __int64 v52; // rdi
  boost::optional<long unsigned int> v53; // rax
  char v54; // al
  char v55; // al
  char v56; // al
  std::size_t *v57; // rdi
  unsigned __int64 v58; // rdi
  boost::optional<long unsigned int> v59; // rax
  char v60; // al
  char v61; // al
  char v62; // al
  unsigned __int64 v63; // rdi
  boost::optional<long unsigned int> v64; // rax
  char v65; // al
  char v66; // al
  char v67; // al
  char v68; // al
  std::size_t size; // [rsp+0h] [rbp-F8h]
  void (__fastcall *v71)(boost::beast::http::basic_parser<false> *const, boost::system::error_code *, unsigned __int64); // [rsp+8h] [rbp-F0h]
  _DWORD *v72; // [rsp+10h] [rbp-E8h]
  unsigned __int64 header_limit; // [rsp+28h] [rbp-D0h] BYREF
  boost::system::error_code v74; // [rsp+30h] [rbp-C8h] BYREF
  char v75[184]; // [rsp+40h] [rbp-B8h] BYREF

  data = (char *)buffer.data_;
  size = buffer.size_;
  v6 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_1(128LL);
    if ( v12 )
      v6 = v12;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 8 4 p:88 64 8 4 n:89 96 16 9 buffer:84";
  *(_QWORD *)(v6 + 16) = boost::beast::http::basic_parser<false>::put;
  v72 = (_DWORD *)(v6 >> 3);
  v72[536862720] = -235802127;
  v72[536862721] = -218959360;
  v72[536862722] = -218959360;
  v72[536862723] = -202178560;
  *(_QWORD *)(v6 + 96) = v7;
  *(_QWORD *)(v6 + 104) = size;
  p_state = &this->state_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_load4(p_state);
LABEL_12:
    __asan_handle_no_return(p_state);
    __assert_fail(
      "state_ != state::complete",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/basic_parser.ipp",
      0x57u,
      "std::size_t boost::beast::http::basic_parser<isRequest>::put(boost::asio::const_buffer, boost::beast::error_code&)"
      " [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::error_code = boost::system::error_code]");
  }
  if ( this->state_ == complete_0 )
    goto LABEL_12;
  v10 = (char *)(v6 + 96);
  if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v10);
    goto LABEL_14;
  }
  size = *(_QWORD *)(v6 + 96);
  *(_QWORD *)(v6 + 32) = size;
  v10 = (char *)(v6 + 104);
  if ( *(_BYTE *)(((v6 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(v10);
    goto LABEL_15;
  }
  v11 = *(_QWORD *)(v6 + 104);
  *(_QWORD *)(v6 + 64) = v11;
  data = (char *)(size + v11);
  if ( *(_WORD *)((ec >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    v13 = (boost::beast::http::detail::basic_parser_base::state *)ec;
    __asan_report_store16(ec);
    goto LABEL_16;
  }
  *(_QWORD *)ec = 0LL;
  *(_QWORD *)(ec + 8) = &boost::system::detail::cat_holder<void>::system_category_instance;
  while ( 1 )
  {
    v13 = &this->state_;
    v35 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
    if ( !v35 || v35 > 3 )
    {
      switch ( this->state_ )
      {
        case nothing_yet:
          goto LABEL_17;
        case start_line:
          goto LABEL_19;
        case fields:
          goto LABEL_34;
        case body0:
          goto LABEL_111;
        case body:
          goto LABEL_121;
        case body_to_eof0:
          goto LABEL_136;
        case body_to_eof:
          goto LABEL_146;
        case chunk_header0:
          goto LABEL_161;
        case chunk_header:
          goto LABEL_169;
        case chunk_body:
          goto LABEL_178;
        case complete_0:
          goto LABEL_183;
        default:
          goto LABEL_46;
      }
    }
LABEL_16:
    __asan_report_load4(v13);
LABEL_17:
    v71 = *(void (__fastcall **)(boost::beast::http::basic_parser<false> *const, boost::system::error_code *, unsigned __int64))(v6 + 64);
    if ( !v71 )
    {
      boost::system::error_code::operator=<boost::beast::http::error>((boost::system::error_code *const)ec, need_more);
      goto LABEL_186;
    }
    this->state_ = start_line;
LABEL_19:
    boost::beast::http::basic_parser<false>::maybe_need_more(
      this,
      *(const char **)(v6 + 32),
      *(_QWORD *)(v6 + 64),
      (boost::beast::error_code *)ec);
    p_header_limit = (boost::beast::error_code *)ec;
    v15 = *(_BYTE *)((ec >> 3) + 0x7FFF8000);
    if ( v15 && v15 <= 3 )
    {
      __asan_report_load4(ec);
LABEL_59:
      __asan_report_load4(p_header_limit);
      goto LABEL_60;
    }
    if ( *(_DWORD *)ec )
      goto done;
    v16 = *(_QWORD *)(v6 + 32);
    p_header_limit = (boost::beast::error_code *)&this->header_limit_;
    v17 = *(_BYTE *)(((unsigned __int64)&this->header_limit_ >> 3) + 0x7FFF8000);
    if ( v17 && v17 <= 3 )
      goto LABEL_59;
    header_limit = this->header_limit_;
    if ( header_limit <= *(_QWORD *)(v6 + 64) )
    {
      v18 = &header_limit;
      goto LABEL_26;
    }
LABEL_60:
    v18 = (unsigned __int64 *)(v6 + 64);
LABEL_26:
    v19 = (boost::beast::error_code *)v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v18);
LABEL_62:
      __asan_report_load4(v19);
LABEL_63:
      boost::system::error_code::error_code<boost::beast::http::error>(&v74, need_more, 0LL);
      if ( v74.val_ != *(_DWORD *)ec )
        goto done;
      p_id = (boost::ulong_long_type *)(ec + 8);
      if ( *(_BYTE *)(((ec + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_id);
      }
      else
      {
        v37 = *(const boost::system::error_category **)(ec + 8);
        p_id = &v74.cat_->id_;
        if ( !*(_BYTE *)(((unsigned __int64)&v74.cat_->id_ >> 3) + 0x7FFF8000) )
        {
          id = v74.cat_->id_;
          if ( !id )
          {
            v39 = v37 == v74.cat_;
            goto LABEL_68;
          }
LABEL_77:
          v40 = (uint32_t *)&v37->id_;
          if ( *(_BYTE *)(((unsigned __int64)&v37->id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v40);
            goto LABEL_80;
          }
          v39 = v37->id_ == id;
LABEL_68:
          if ( !v39 )
            goto done;
          v40 = &this->header_limit_;
          v41 = *(_BYTE *)(((unsigned __int64)&this->header_limit_ >> 3) + 0x7FFF8000);
          if ( !v41 || v41 > 3 )
          {
            if ( (unsigned __int64)this->header_limit_ > *(_QWORD *)(v6 + 64) )
            {
              v42 = *(_QWORD *)(v6 + 32);
              if ( v42 + 3 <= (unsigned __int64)data )
              {
                v43 = (std::size_t)&data[-v42 - 3];
                p_skip = &this->skip_;
                if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store8();
LABEL_83:
                  __asan_report_load4(p_skip);
LABEL_84:
                  __asan_handle_no_return(p_skip);
                  __assert_fail(
                    "! is_done()",
                    "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/htt"
                    "p/impl/basic_parser.ipp",
                    0x7Fu,
                    "std::size_t boost::beast::http::basic_parser<isRequest>::put(boost::asio::const_buffer, boost::beast"
                    "::error_code&) [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::error_co"
                    "de = boost::system::error_code]");
                }
                this->skip_ = v43;
              }
              goto done;
            }
LABEL_81:
            boost::system::error_code::operator=<boost::beast::http::error>(
              (boost::system::error_code *const)ec,
              header_limit);
            goto done;
          }
LABEL_80:
          __asan_report_load4(v40);
          goto LABEL_81;
        }
      }
      v37 = (const boost::system::error_category *)__asan_report_load8(p_id);
      goto LABEL_77;
    }
    boost::beast::http::basic_parser<false>::parse_start_line(
      this,
      (const char **)(v6 + 32),
      (const char *)(*v18 + v16),
      (boost::beast::error_code *)ec,
      (std::false_type)size);
    v19 = (boost::beast::error_code *)ec;
    v20 = *(_BYTE *)((ec >> 3) + 0x7FFF8000);
    if ( v20 && v20 <= 3 )
      goto LABEL_62;
    if ( *(_DWORD *)ec )
      goto LABEL_63;
    p_skip = &this->state_;
    v22 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
    if ( v22 && v22 <= 3 )
      goto LABEL_83;
    if ( this->state_ == complete_0 )
      goto LABEL_84;
    v23 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 64) = &data[-v23];
    if ( v23 >= (unsigned __int64)data )
      break;
LABEL_34:
    boost::beast::http::basic_parser<false>::maybe_need_more(
      this,
      *(const char **)(v6 + 32),
      *(_QWORD *)(v6 + 64),
      (boost::beast::error_code *)ec);
    v24 = (boost::beast::error_code *)ec;
    v25 = *(_BYTE *)((ec >> 3) + 0x7FFF8000);
    if ( v25 && v25 <= 3 )
    {
      __asan_report_load4(ec);
LABEL_87:
      __asan_report_load4(v24);
      goto LABEL_88;
    }
    if ( *(_DWORD *)ec )
      goto done;
    v26 = *(_QWORD *)(v6 + 32);
    v24 = (boost::beast::error_code *)&this->header_limit_;
    v27 = *(_BYTE *)(((unsigned __int64)&this->header_limit_ >> 3) + 0x7FFF8000);
    if ( v27 && v27 <= 3 )
      goto LABEL_87;
    header_limit = this->header_limit_;
    if ( header_limit <= *(_QWORD *)(v6 + 64) )
    {
      v28 = &header_limit;
      goto LABEL_41;
    }
LABEL_88:
    v28 = (unsigned __int64 *)(v6 + 64);
LABEL_41:
    v29 = (boost::beast::error_code *)v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v28);
LABEL_90:
      __asan_report_load4(v29);
      goto LABEL_91;
    }
    boost::beast::http::basic_parser<false>::parse_fields(
      this,
      (const char **)(v6 + 32),
      (const char *)(*v28 + v26),
      (boost::beast::error_code *)ec);
    v29 = (boost::beast::error_code *)ec;
    v30 = *(_BYTE *)((ec >> 3) + 0x7FFF8000);
    if ( v30 && v30 <= 3 )
      goto LABEL_90;
    if ( !*(_DWORD *)ec )
    {
      boost::beast::http::basic_parser<false>::finish_header(
        this,
        (boost::beast::error_code *)ec,
        (std::false_type)size);
      goto LABEL_46;
    }
LABEL_91:
    boost::system::error_code::error_code<boost::beast::http::error>(&v74, need_more, 0LL);
    if ( *(_DWORD *)ec != v74.val_ )
      goto done;
    v44 = (boost::ulong_long_type *)(ec + 8);
    if ( *(_BYTE *)(((ec + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v44);
LABEL_104:
      v45 = (const boost::system::error_category *)__asan_report_load8(v44);
      goto LABEL_105;
    }
    v45 = *(const boost::system::error_category **)(ec + 8);
    v44 = &v74.cat_->id_;
    if ( *(_BYTE *)(((unsigned __int64)&v74.cat_->id_ >> 3) + 0x7FFF8000) )
      goto LABEL_104;
    v46 = v74.cat_->id_;
    if ( !v46 )
    {
      v47 = v74.cat_ == v45;
      goto LABEL_96;
    }
LABEL_105:
    v48 = (uint32_t *)&v45->id_;
    if ( *(_BYTE *)(((unsigned __int64)&v45->id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v48);
LABEL_108:
      __asan_report_load4(v48);
      goto LABEL_81;
    }
    v47 = v46 == v45->id_;
LABEL_96:
    if ( !v47 )
      goto done;
    v48 = &this->header_limit_;
    v49 = *(_BYTE *)(((unsigned __int64)&this->header_limit_ >> 3) + 0x7FFF8000);
    if ( v49 && v49 <= 3 )
      goto LABEL_108;
    if ( (unsigned __int64)this->header_limit_ <= *(_QWORD *)(v6 + 64) )
      goto LABEL_81;
    v50 = *(_QWORD *)(v6 + 32);
    if ( v50 + 3 > (unsigned __int64)data )
      goto done;
    data -= v50;
    if ( !*(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
    {
      this->skip_ = (std::size_t)(data - 3);
      goto done;
    }
    __asan_report_store8();
LABEL_111:
    v51 = &this->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v51);
LABEL_128:
      __asan_handle_no_return(v51);
      __assert_fail(
        "! skip_",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/basic_parser.ipp",
        0xA2u,
        "std::size_t boost::beast::http::basic_parser<isRequest>::put(boost::asio::const_buffer, boost::beast::error_code"
        "&) [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::error_code = boost::system::error_code]");
    }
    if ( this->skip_ )
      goto LABEL_128;
    v52 = (unsigned __int64)this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(this);
LABEL_130:
      __asan_report_load8(v52);
LABEL_131:
      __asan_report_load4(v52);
LABEL_132:
      __asan_report_store4(v52);
LABEL_133:
      __asan_report_load8(v52);
LABEL_134:
      __asan_handle_no_return(v52);
      __assert_fail(
        "! skip_",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/basic_parser.ipp",
        0xAAu,
        "std::size_t boost::beast::http::basic_parser<isRequest>::put(boost::asio::const_buffer, boost::beast::error_code"
        "&) [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::error_code = boost::system::error_code]");
    }
    v52 = (unsigned __int64)(this->_vptr_basic_parser + 6);
    if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
      goto LABEL_130;
    v71 = (void (__fastcall *)(boost::beast::http::basic_parser<false> *const, boost::system::error_code *, unsigned __int64))*((_QWORD *)this->_vptr_basic_parser + 6);
    v53 = boost::beast::http::basic_parser<false>::content_length(this);
    v74.val_ = *(_DWORD *)&v53.m_initialized;
    v74.cat_ = (const boost::system::error_category *)v53.m_storage;
    v71(this, &v74, ec);
    v52 = ec;
    v54 = *(_BYTE *)((ec >> 3) + 0x7FFF8000);
    if ( v54 && v54 <= 3 )
      goto LABEL_131;
    if ( *(_DWORD *)ec )
      goto done;
    v52 = (unsigned __int64)&this->state_;
    v55 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
    if ( v55 && v55 <= 3 )
      goto LABEL_132;
    this->state_ = body;
LABEL_121:
    v52 = (unsigned __int64)&this->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
      goto LABEL_133;
    if ( this->skip_ )
      goto LABEL_134;
    boost::beast::http::basic_parser<false>::parse_body(
      this,
      (const char **)(v6 + 32),
      *(_QWORD *)(v6 + 64),
      (boost::beast::error_code *)ec);
    v56 = *(_BYTE *)((ec >> 3) + 0x7FFF8000);
    if ( !v56 || v56 > 3 )
    {
      if ( *(_DWORD *)ec )
        goto done;
      goto LABEL_46;
    }
    __asan_report_load4(ec);
LABEL_136:
    v57 = &this->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v57);
LABEL_153:
      __asan_handle_no_return(v57);
      __assert_fail(
        "! skip_",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/basic_parser.ipp",
        0xB1u,
        "std::size_t boost::beast::http::basic_parser<isRequest>::put(boost::asio::const_buffer, boost::beast::error_code"
        "&) [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::error_code = boost::system::error_code]");
    }
    if ( this->skip_ )
      goto LABEL_153;
    v58 = (unsigned __int64)this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(this);
LABEL_155:
      __asan_report_load8(v58);
LABEL_156:
      __asan_report_load4(v58);
LABEL_157:
      __asan_report_store4(v58);
LABEL_158:
      __asan_report_load8(v58);
LABEL_159:
      __asan_handle_no_return(v58);
      __assert_fail(
        "! skip_",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/basic_parser.ipp",
        0xB9u,
        "std::size_t boost::beast::http::basic_parser<isRequest>::put(boost::asio::const_buffer, boost::beast::error_code"
        "&) [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::error_code = boost::system::error_code]");
    }
    v58 = (unsigned __int64)(this->_vptr_basic_parser + 6);
    if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
      goto LABEL_155;
    v71 = (void (__fastcall *)(boost::beast::http::basic_parser<false> *const, boost::system::error_code *, unsigned __int64))*((_QWORD *)this->_vptr_basic_parser + 6);
    v59 = boost::beast::http::basic_parser<false>::content_length(this);
    v74.val_ = *(_DWORD *)&v59.m_initialized;
    v74.cat_ = (const boost::system::error_category *)v59.m_storage;
    v71(this, &v74, ec);
    v58 = ec;
    v60 = *(_BYTE *)((ec >> 3) + 0x7FFF8000);
    if ( v60 && v60 <= 3 )
      goto LABEL_156;
    if ( *(_DWORD *)ec )
      goto done;
    v58 = (unsigned __int64)&this->state_;
    v61 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
    if ( v61 && v61 <= 3 )
      goto LABEL_157;
    this->state_ = body_to_eof;
LABEL_146:
    v58 = (unsigned __int64)&this->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
      goto LABEL_158;
    if ( this->skip_ )
      goto LABEL_159;
    boost::beast::http::basic_parser<false>::parse_body_to_eof(
      this,
      (const char **)(v6 + 32),
      *(_QWORD *)(v6 + 64),
      (boost::beast::error_code *)ec);
    v62 = *(_BYTE *)((ec >> 3) + 0x7FFF8000);
    if ( !v62 || v62 > 3 )
    {
      if ( *(_DWORD *)ec )
        goto done;
      goto LABEL_46;
    }
    __asan_report_load4(ec);
LABEL_161:
    v63 = (unsigned __int64)this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(this);
LABEL_174:
      __asan_report_load8(v63);
LABEL_175:
      __asan_report_load4(v63);
LABEL_176:
      __asan_report_store4(v63);
      goto LABEL_177;
    }
    v63 = (unsigned __int64)(this->_vptr_basic_parser + 6);
    if ( *(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
      goto LABEL_174;
    v71 = (void (__fastcall *)(boost::beast::http::basic_parser<false> *const, boost::system::error_code *, unsigned __int64))*((_QWORD *)this->_vptr_basic_parser + 6);
    v64 = boost::beast::http::basic_parser<false>::content_length(this);
    v74.val_ = *(_DWORD *)&v64.m_initialized;
    v74.cat_ = (const boost::system::error_category *)v64.m_storage;
    v71(this, &v74, ec);
    v63 = ec;
    v65 = *(_BYTE *)((ec >> 3) + 0x7FFF8000);
    if ( v65 && v65 <= 3 )
      goto LABEL_175;
    if ( *(_DWORD *)ec )
      goto done;
    v63 = (unsigned __int64)&this->state_;
    v66 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
    if ( v66 && v66 <= 3 )
      goto LABEL_176;
    this->state_ = chunk_header;
LABEL_169:
    boost::beast::http::basic_parser<false>::parse_chunk_header(
      this,
      (const char **)(v6 + 32),
      *(_QWORD *)(v6 + 64),
      (boost::beast::error_code *)ec);
    v63 = ec;
    v67 = *(_BYTE *)((ec >> 3) + 0x7FFF8000);
    if ( !v67 || v67 > 3 )
    {
      if ( *(_DWORD *)ec )
        goto done;
      goto LABEL_46;
    }
LABEL_177:
    __asan_report_load4(v63);
LABEL_178:
    boost::beast::http::basic_parser<false>::parse_chunk_body(
      this,
      (const char **)(v6 + 32),
      *(_QWORD *)(v6 + 64),
      (boost::beast::error_code *)ec);
    v68 = *(_BYTE *)((ec >> 3) + 0x7FFF8000);
    if ( v68 && v68 <= 3 )
    {
      __asan_report_load4(ec);
LABEL_183:
      if ( *(_WORD *)((ec >> 3) + 0x7FFF8000) )
      {
        p_f = (boost::beast::error_code *)ec;
        __asan_report_store16(ec);
LABEL_190:
        __asan_report_load4(p_f);
LABEL_191:
        __asan_report_load4(p_f);
        goto LABEL_192;
      }
      *(_QWORD *)ec = 0LL;
      *(_QWORD *)(ec + 8) = &boost::system::detail::cat_holder<void>::system_category_instance;
      goto done;
    }
    if ( *(_DWORD *)ec )
      goto done;
LABEL_46:
    v31 = *(_QWORD *)(v6 + 32);
    if ( v31 >= (unsigned __int64)data )
      goto done;
    p_f = (boost::beast::error_code *)&this->state_;
    v33 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
    if ( v33 && v33 <= 3 )
      goto LABEL_190;
    if ( this->state_ == complete_0 )
      goto done;
    p_f = (boost::beast::error_code *)&this->f_;
    v34 = *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 68) & 7) + 3) >= v34 && v34 )
      goto LABEL_191;
    if ( (this->f_ & 2) == 0 )
      goto done;
    *(_QWORD *)(v6 + 64) = &data[-v31];
  }
  boost::system::error_code::operator=<boost::beast::http::error>((boost::system::error_code *const)ec, need_more);
done:
  v71 = (void (__fastcall *)(boost::beast::http::basic_parser<false> *const, boost::system::error_code *, unsigned __int64))(*(_QWORD *)(v6 + 32) - size);
LABEL_186:
  if ( v75 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    return v71;
  }
LABEL_192:
  *(_QWORD *)v6 = 1172321806LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  return v71;
};

// Line 225: range 0000000019B980F0-0000000019B98B03
void __fastcall boost::beast::http::basic_parser<false>::put_eof(
        boost::beast::http::basic_parser<false> *const this,
        boost::beast::error_code *ec)
{
  boost::beast::http::detail::basic_parser_base::state *p_state; // rdi
  char v4; // al
  boost::beast::http::detail::basic_parser_base::state state; // eax
  char v6; // cl
  boost::beast::http::basic_parser<false> *v7; // rdi
  char v8; // al
  void *v9; // rdi
  char v10; // al

  p_state = &this->state_;
  v4 = *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    __asan_report_load4(p_state);
LABEL_12:
    __asan_handle_no_return(p_state);
    __assert_fail(
      "got_some()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/basic_parser.ipp",
      0xE4u,
      "void boost::beast::http::basic_parser<isRequest>::put_eof(boost::beast::error_code&) [with bool isRequest = false;"
      " boost::beast::error_code = boost::system::error_code]");
  }
  state = this->state_;
  if ( state == nothing_yet )
    goto LABEL_12;
  if ( (unsigned int)(state - 1) <= 1 )
    goto LABEL_15;
  v6 = *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 68) & 7) + 3) >= v6 && v6 )
  {
    __asan_report_load4(&this->f_);
    goto LABEL_15;
  }
  if ( (this->f_ & 0xC00) == 0 )
    goto LABEL_17;
  if ( state != complete_0 )
  {
LABEL_15:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, partial_message);
    return;
  }
  if ( !*(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)&ec->val_ = 0LL;
    ec->cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
    return;
  }
  __asan_report_store16(ec);
LABEL_17:
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16(ec);
    goto LABEL_28;
  }
  *(_QWORD *)&ec->val_ = 0LL;
  ec->cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    v7 = this;
    __asan_report_load8(this);
    goto LABEL_29;
  }
  v7 = (boost::beast::http::basic_parser<false> *)(this->_vptr_basic_parser + 10);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(v7);
LABEL_30:
    v9 = ec;
    __asan_report_load4(ec);
    goto LABEL_31;
  }
  (*((void (__fastcall **)(boost::beast::http::basic_parser<false> *const, boost::beast::error_code *))this->_vptr_basic_parser
   + 10))(
    this,
    ec);
  v8 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_30;
  if ( ec->val_ )
    return;
  v9 = &this->state_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
  {
LABEL_31:
    __asan_report_store4(v9);
    JUMPOUT(0x19B9829FLL);
  }
  this->state_ = complete_0;
};

// Line 343: range 0000000019B9B610-0000000019B9BE43
void __fastcall boost::beast::http::basic_parser<false>::parse_start_line(
        boost::beast::http::basic_parser<false> *const this,
        unsigned __int64 in,
        const char *last,
        boost::beast::error_code *ec)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  char v9; // al
  unsigned __int64 v10; // r15
  char v11; // al
  char v12; // al
  unsigned __int64 v13; // r13
  char v14; // al
  char v15; // al
  char v16; // al
  _BYTE *v17; // rdi
  int v18; // eax
  int v19; // r15d
  unsigned __int64 v20; // r13
  char v21; // dl
  char v22; // dl
  __int64 v23; // rax
  char v24; // al
  const char *v25; // r13
  char v26; // al
  unsigned __int16 *p_status; // rdi
  char v28; // al
  unsigned __int64 v29; // rbx
  char v30; // cl
  char v31; // al
  char v32; // al
  _BYTE *v33; // rax
  char v34; // dl
  __int64 v35; // rsi
  __int64 v36; // rcx
  const char *v37; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  char v40; // al
  char v41; // dl
  unsigned __int64 v42; // rdi
  __int64 v43; // rdx
  char v44; // al
  boost::beast::http::detail::basic_parser_base::state *p_state; // rdi
  char v46; // al
  const char *v50; // [rsp+30h] [rbp-88h]
  __int64 v51; // [rsp+38h] [rbp-80h]
  char v52[120]; // [rsp+40h] [rbp-78h] BYREF

  v6 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v23 = __asan_stack_malloc_0(64LL);
    if ( v23 )
      v6 = v23;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 8 10 token_last";
  *(_QWORD *)(v6 + 16) = boost::beast::http::basic_parser<false>::parse_start_line;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  if ( *(_BYTE *)((in >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(in);
    goto LABEL_32;
  }
  v4 = *(_QWORD *)in;
  if ( (unsigned __int64)last < *(_QWORD *)in + 8LL )
  {
LABEL_32:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
    v8 = v4;
    v19 = 0;
    goto LABEL_35;
  }
  v8 = v4 + 1;
  v9 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
  if ( v9 <= (*(_BYTE *)in & 7) && v9 )
  {
    __asan_report_load1(*(_QWORD *)in);
    goto LABEL_34;
  }
  if ( *(_BYTE *)v4 != 72 )
  {
LABEL_34:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_version);
    v19 = 0;
    goto LABEL_35;
  }
  v10 = v4 + 2;
  v11 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( v11 <= (char)(v8 & 7) && v11 )
  {
    __asan_report_load1(v4 + 1);
    goto LABEL_47;
  }
  if ( *(_BYTE *)(v4 + 1) != 84 )
  {
LABEL_47:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_version);
    v8 = v4 + 2;
    v19 = 0;
    goto LABEL_35;
  }
  v8 = v4 + 3;
  v12 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
  if ( v12 <= (char)(v10 & 7) && v12 )
  {
    __asan_report_load1(v10);
    goto LABEL_34;
  }
  if ( *(_BYTE *)v10 != 84 )
    goto LABEL_34;
  v13 = v4 + 4;
  v14 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( v14 <= (char)(v8 & 7) && v14 )
  {
    __asan_report_load1(v10 + 1);
    goto LABEL_51;
  }
  if ( *(_BYTE *)(v10 + 1) != 80 )
  {
LABEL_51:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_version);
    v8 = v10 + 2;
    v19 = 0;
    goto LABEL_35;
  }
  v8 = v10 + 3;
  v15 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
  if ( v15 <= (char)(v13 & 7) && v15 )
  {
    __asan_report_load1(v13);
    goto LABEL_34;
  }
  if ( *(_BYTE *)v13 != 47 )
    goto LABEL_34;
  v16 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( v16 <= (char)(v8 & 7) && v16 )
  {
    __asan_report_load1(v10 + 3);
    goto LABEL_34;
  }
  if ( (unsigned __int8)(*(_BYTE *)(v10 + 3) - 48) > 9u )
    goto LABEL_34;
  v17 = (_BYTE *)(v10 + 4);
  v18 = 2 * (5 * *(char *)(v10 + 3) - 240);
  v19 = v18;
  v20 = v13 + 3;
  v21 = *(_BYTE *)(((v8 + 1) >> 3) + 0x7FFF8000);
  if ( v21 <= (char)((v8 + 1) & 7) && v21 )
  {
    __asan_report_load1(v17);
    goto LABEL_57;
  }
  if ( *v17 != 46 )
    goto LABEL_57;
  v22 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( v22 <= (char)(v20 & 7) && v22 )
  {
    __asan_report_load1(v8 + 2);
    goto LABEL_57;
  }
  if ( (unsigned __int8)(*(_BYTE *)v20 - 48) > 9u )
  {
LABEL_57:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_version);
    v8 += 2LL;
    goto LABEL_35;
  }
  v8 += 3LL;
  v19 = *(char *)v20 + v18 - 48;
LABEL_35:
  v24 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
  {
    __asan_report_load4(ec);
    goto LABEL_43;
  }
  if ( ec->val_ )
    goto LABEL_44;
  if ( (unsigned int)(v19 - 10) > 1 )
    goto LABEL_43;
  v25 = (const char *)(v8 + 1);
  if ( v8 + 1 > (unsigned __int64)last )
  {
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
    goto LABEL_44;
  }
  v26 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( v26 <= (char)(v8 & 7) && v26 )
  {
    __asan_report_load1(v8);
  }
  else if ( *(_BYTE *)v8 != 32 )
  {
LABEL_43:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_version);
    goto LABEL_44;
  }
  p_status = &this->status_;
  if ( (unsigned __int64)last < v8 + 5 )
  {
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
    goto LABEL_79;
  }
  v28 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
  if ( v28 <= ((unsigned __int8)v25 & 7) && v28 )
  {
    __asan_report_load1(v8 + 1);
  }
  else if ( (unsigned __int8)(*v25 - 48) <= 9u )
  {
    v29 = v8 + 2;
    v30 = *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_status & 7) + 1) >= v30 && v30 )
    {
      __asan_report_store2(p_status);
    }
    else
    {
      this->status_ = 20 * (5 * *v25 - 240);
      v31 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
      if ( v31 > (char)(v29 & 7) || !v31 )
      {
        if ( (unsigned __int8)(*(_BYTE *)v29 - 48) <= 9u )
        {
          v25 += 2;
          *p_status += 2 * (5 * *(char *)v29 - 240);
          v32 = *(_BYTE *)(((v29 + 1) >> 3) + 0x7FFF8000);
          if ( v32 <= (char)((v29 + 1) & 7) && v32 )
          {
            __asan_report_load1(v29 + 1);
          }
          else if ( (unsigned __int8)(*(_BYTE *)(v29 + 1) - 48) <= 9u )
          {
            v33 = (_BYTE *)(v29 + 2);
            *p_status += *(char *)(v29 + 1) - 48;
            v25 = (const char *)(v29 + 3);
            v34 = *(_BYTE *)(((v29 + 2) >> 3) + 0x7FFF8000);
            if ( v34 <= (char)((v29 + 2) & 7) && v34 )
            {
              __asan_report_load1(v33);
            }
            else if ( *v33 == 32 )
            {
              goto LABEL_79;
            }
          }
          goto LABEL_110;
        }
LABEL_106:
        boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_status);
        ++v25;
        goto LABEL_79;
      }
    }
    __asan_report_load1(v25 + 1);
    goto LABEL_106;
  }
LABEL_110:
  boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_status);
LABEL_79:
  if ( ec->val_ )
    goto LABEL_44;
  v50 = 0LL;
  v51 = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  v35 = (__int64)last;
  v37 = boost::beast::http::detail::basic_parser_base::parse_token_to_eol(v25, last, (const char **)(v6 + 32), ec);
  v40 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v40 && v40 <= 3 )
  {
    __asan_report_load4(ec);
LABEL_112:
    v35 = 16LL;
    boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_reason);
    goto LABEL_113;
  }
  if ( !ec->val_ )
  {
    if ( v37 )
    {
      v50 = v25;
      v51 = *(_QWORD *)(v6 + 32) - (_QWORD)v25;
      goto LABEL_85;
    }
    goto LABEL_112;
  }
LABEL_113:
  v37 = v25;
LABEL_85:
  if ( ec->val_ )
    goto LABEL_44;
  if ( v19 > 10 )
  {
    v41 = *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 68) & 7) + 3) >= v41 && v41 )
    {
      __asan_report_load4(&this->f_);
      goto LABEL_115;
    }
    v35 = (__int64)this;
    this->f_ |= 0x10u;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_115:
    v42 = (unsigned __int64)this;
    __asan_report_load8(this);
    goto LABEL_116;
  }
  v42 = (unsigned __int64)(this->_vptr_basic_parser + 3);
  if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
  {
LABEL_116:
    __asan_report_load8(v42);
LABEL_117:
    __asan_report_load2(v42, v35, v43, v36, v38, v39);
LABEL_118:
    __asan_report_load4(ec);
LABEL_119:
    p_state = (boost::beast::http::detail::basic_parser_base::state *)in;
    __asan_report_store8();
LABEL_120:
    __asan_report_store4(p_state);
    goto LABEL_121;
  }
  v42 = (unsigned __int64)&this->status_;
  v43 = *(unsigned __int8 *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 60) & 7) + 1) >= (char)v43 && (_BYTE)v43 )
    goto LABEL_117;
  (*((void (__fastcall **)(boost::beast::http::basic_parser<false> *const, _QWORD, const char *, __int64, _QWORD, boost::beast::error_code *))this->_vptr_basic_parser
   + 3))(
    this,
    this->status_,
    v50,
    v51,
    (unsigned int)v19,
    ec);
  v44 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v44 && v44 <= 3 )
    goto LABEL_118;
  if ( ec->val_ )
    goto LABEL_44;
  if ( *(_BYTE *)((in >> 3) + 0x7FFF8000) )
    goto LABEL_119;
  *(_QWORD *)in = v37;
  p_state = &this->state_;
  v46 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( v46 && v46 <= 3 )
    goto LABEL_120;
  this->state_ = fields;
LABEL_44:
  if ( v52 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_121:
  *(_QWORD *)v6 = 1172321806LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 401: range 0000000019BA251C-0000000019BA2EE4
void __fastcall boost::beast::http::basic_parser<false>::parse_fields(
        boost::beast::http::basic_parser<false> *const this,
        const char **in,
        const char *last,
        boost::beast::error_code *ec)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  char v11; // dl
  void *v12; // rdi
  unsigned int v13; // edx
  unsigned __int64 n; // rax
  unsigned __int64 v15; // rcx
  int v16; // esi
  char v17; // dl
  unsigned int v18; // ecx
  unsigned __int64 v19; // rdi
  char v20; // al
  unsigned __int8 v21; // si
  unsigned __int64 *v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rdi
  char v28; // al
  unsigned __int64 v29; // rdi
  char v30; // al
  unsigned int v31; // esi
  unsigned __int64 *v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r10
  signed __int8 v38; // r11
  unsigned __int8 v39; // r8
  char v40; // r8
  char v41; // r9
  unsigned __int8 v42; // cl
  char v43; // cl
  char v44; // di
  char v45; // al
  unsigned __int64 v46; // rdi
  char v47; // al
  char v48; // dl
  char v49; // al
  unsigned __int64 v52; // [rsp+18h] [rbp-1200h]
  unsigned __int64 v53; // [rsp+20h] [rbp-11F8h]
  _DWORD *v54; // [rsp+38h] [rbp-11E0h]
  char v55[4568]; // [rsp+40h] [rbp-11D8h] BYREF

  v53 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_7(4512LL);
    if ( v9 )
      v53 = v9;
  }
  *(_QWORD *)v53 = 1102416563LL;
  *(_QWORD *)(v53 + 8) = "4 48 8 5 p:409 80 16 8 name:405 112 16 9 value:406 144 4112 7 buf:408";
  *(_QWORD *)(v53 + 16) = boost::beast::http::basic_parser<false>::parse_fields;
  v54 = (_DWORD *)(v53 >> 3);
  v54[536862720] = -235802127;
  v54[536862721] = -234881024;
  v54[536862722] = 62194;
  v54[536862723] = 62194;
  v54[536862724] = 62194;
  v54[536862853] = -202116109;
  v54[536862854] = -202116109;
  v54[536862855] = -202116109;
  v54[536862856] = -202116109;
  v54[536862857] = -202116109;
  v54[536862858] = -202116109;
  v54[536862859] = -202116109;
  v54[536862860] = -202116109;
  *(_QWORD *)(v53 + 80) = 0LL;
  *(_QWORD *)(v53 + 88) = 0LL;
  *(_QWORD *)(v53 + 112) = 0LL;
  *(_QWORD *)(v53 + 120) = 0LL;
  boost::beast::static_string<4096ul,char,std::char_traits<char>>::static_string((boost::beast::static_string<4096,char,std::char_traits<char> > *const)(v53 + 144));
  if ( *(_BYTE *)(((unsigned __int64)in >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(in);
LABEL_7:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
    goto LABEL_8;
  }
  v8 = v53 + 4512;
  for ( *(_QWORD *)(v53 + 48) = *in; ; *in = *(const char **)(v53 + 48) )
  {
    v10 = *(_QWORD *)(v53 + 48);
    if ( v10 + 2 > (unsigned __int64)last )
      goto LABEL_7;
    v48 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
    if ( v48 <= (*(_BYTE *)(v53 + 48) & 7) )
    {
      if ( v48 )
        break;
    }
    if ( *(_BYTE *)v10 == 13 )
      goto LABEL_11;
    boost::beast::http::detail::basic_parser_base::parse_field(
      (const char **)(v53 + 48),
      last,
      (boost::beast::string_view *)(v53 + 80),
      (boost::beast::string_view *)(v53 + 112),
      (boost::beast::static_string<4096,char,std::char_traits<char> > *)(v53 + 144),
      ec);
    v12 = ec;
    v49 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
    if ( v49 && v49 <= 3 )
      goto LABEL_19;
    if ( ec->val_ )
      goto LABEL_8;
    v8 = *(_QWORD *)(v53 + 80);
    v4 = *(_QWORD *)(v53 + 88);
    if ( !(_BYTE)`guard variable for'boost::beast::http::detail::get_field_table(void)::tab )
      goto LABEL_20;
LABEL_107:
    v15 = v4;
    n = v8;
    v13 = 0;
    while ( v15 > 3 )
    {
      if ( *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((n >> 3) + 0x7FFF8000) <= (unsigned __int8)(n & 7)
        || *(_BYTE *)(((n + 3) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((n + 3) >> 3) + 0x7FFF8000) <= (unsigned __int8)((n + 3) & 7) )
      {
        v16 = 4;
        n = __asan_report_load_n(n, 4LL);
        goto LABEL_27;
      }
      v13 = 5 * v13 + (*(_DWORD *)n | 0x20202020);
      n += 4LL;
      v15 -= 4LL;
    }
    while ( v15 )
    {
      v16 = 5 * v13;
      v17 = *(_BYTE *)((n >> 3) + 0x7FFF8000);
      if ( v17 <= (char)(n & 7) && v17 )
      {
        __asan_report_load1(n);
        break;
      }
LABEL_27:
      v13 = v16 + (*(_BYTE *)n++ | 0x20);
      --v15;
    }
    v18 = v13 % 0x1423;
    v19 = (unsigned __int64)boost::beast::http::detail::get_field_table(void)::tab.map_[v13 % 0x1423];
    v20 = *(_BYTE *)((v19 >> 3) + 0x7FFF8000);
    if ( v20 <= (((unsigned __int8)((unsigned __int8)&boost::beast::http::detail::get_field_table(void)::tab
                                  + 2 * (v13 % 0x1423))
                + 16) & 7)
      && v20 )
    {
      __asan_report_load1(v19);
    }
    else
    {
      v21 = boost::beast::http::detail::get_field_table(void)::tab.map_[v18][0];
      v19 = (unsigned __int64)&boost::beast::http::detail::get_field_table(void)::tab + 16 * v21;
      if ( !*(_WORD *)((v19 >> 3) + 0x7FFF8000) )
      {
        v22 = (unsigned __int64 *)&boost::beast::http::detail::get_field_table(void)::tab.by_name_._M_elems[v21];
        v23 = *v22;
        v24 = v22[1];
        if ( !v21 )
          goto LABEL_39;
        v25 = v8;
        v26 = v24;
        v27 = v4;
        if ( v4 != v26 )
        {
          v28 = 0;
          goto LABEL_38;
        }
        goto LABEL_56;
      }
    }
    __asan_report_load16(v19);
LABEL_53:
    __asan_report_load_n(v5, 4LL);
LABEL_54:
    v21 = 4;
    v27 = v52;
    v23 = __asan_report_load_n(v52, 4LL);
    while ( 1 )
    {
      v25 += 4LL;
      v23 += 4LL;
      v27 -= 4LL;
LABEL_56:
      if ( v27 <= 3 )
        break;
      v5 = v25;
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v25 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v25 & 7)
        || *(_BYTE *)(((v25 + 3) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v25 + 3) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v25 + 3) & 7) )
      {
        goto LABEL_53;
      }
      v52 = v23;
      v38 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
      v5 = v23 & 7;
      LOBYTE(v5) = v38 <= (signed __int8)v5;
      if ( ((v38 != 0) & (unsigned __int8)v5) != 0
        || *(_BYTE *)(((v23 + 3) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v23 + 3) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v23 + 3) & 7) )
      {
        goto LABEL_54;
      }
      if ( ((*(_DWORD *)v23 ^ *(_DWORD *)v25) & 0xDFDFDFDF) != 0 )
      {
        v28 = 0;
        goto LABEL_38;
      }
    }
    while ( 1 )
    {
      if ( !v27 )
        goto LABEL_72;
      v40 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
      if ( v40 <= (char)(v25 & 7) && v40 )
      {
        v27 = v25;
        v23 = __asan_report_load1(v25);
      }
      else
      {
        v39 = *(_BYTE *)v25;
        v41 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
        if ( v41 <= (char)(v23 & 7) && v41 )
        {
          __asan_report_load1(v23);
LABEL_72:
          v28 = 1;
          goto LABEL_38;
        }
      }
      if ( ((*(_BYTE *)v23 ^ v39) & 0xDF) != 0 )
        break;
      ++v25;
      ++v23;
      --v27;
    }
    v28 = 0;
LABEL_38:
    if ( v28 )
    {
      v8 = v21;
      goto LABEL_91;
    }
LABEL_39:
    v29 = (unsigned __int64)&boost::beast::http::detail::get_field_table(void)::tab.map_[v18][1];
    v30 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
    if ( v30 <= (((unsigned __int8)((unsigned __int8)&boost::beast::http::detail::get_field_table(void)::tab + 2 * v18)
                + 17) & 7)
      && v30 )
    {
      __asan_report_load1(v29);
LABEL_76:
      __asan_report_load16(v29);
LABEL_77:
      __asan_report_load_n(v36, 4LL);
LABEL_78:
      v31 = 4;
      __asan_report_load_n(v37, 4LL);
LABEL_79:
      v33 = __asan_report_load1(v8);
      goto LABEL_80;
    }
    if ( boost::beast::http::detail::get_field_table(void)::tab.map_[v18][1] )
    {
      v31 = boost::beast::http::detail::get_field_table(void)::tab.map_[v18][1] + 255;
      v29 = (unsigned __int64)&boost::beast::http::detail::get_field_table(void)::tab + 16 * (int)v31;
      if ( *(_WORD *)((v29 >> 3) + 0x7FFF8000) )
        goto LABEL_76;
      v32 = (unsigned __int64 *)&boost::beast::http::detail::get_field_table(void)::tab.by_name_._M_elems[v31];
      v33 = *v32;
      v34 = v32[1];
      v35 = v4;
      if ( v4 == v34 )
      {
        while ( v35 > 3 )
        {
          v36 = v8;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v8 & 7)
            || *(_BYTE *)(((v8 + 3) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((v8 + 3) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v8 + 3) & 7) )
          {
            goto LABEL_77;
          }
          v37 = v33;
          if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)((v33 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v33 & 7)
            || *(_BYTE *)(((v33 + 3) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((v33 + 3) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v33 + 3) & 7) )
          {
            goto LABEL_78;
          }
          if ( ((*(_DWORD *)v33 ^ *(_DWORD *)v8) & 0xDFDFDFDF) != 0 )
          {
            v45 = 0;
            goto LABEL_89;
          }
          v8 += 4LL;
          v33 += 4LL;
          v35 -= 4LL;
        }
        while ( 1 )
        {
          if ( !v35 )
          {
            v45 = 1;
            goto LABEL_89;
          }
          v43 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
          if ( v43 <= (char)(v8 & 7) && v43 )
            goto LABEL_79;
          v42 = *(_BYTE *)v8;
          v44 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
          if ( v44 <= (char)(v33 & 7) && v44 )
          {
            __asan_report_load1(v33);
            goto LABEL_88;
          }
LABEL_80:
          if ( ((*(_BYTE *)v33 ^ v42) & 0xDF) != 0 )
            break;
          ++v8;
          ++v33;
          --v35;
        }
        v45 = 0;
      }
      else
      {
LABEL_88:
        v45 = 0;
      }
LABEL_89:
      if ( v45 )
        v8 = v31;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
LABEL_91:
    boost::beast::http::basic_parser<false>::do_field(
      this,
      (boost::beast::http::field)v8,
      *(boost::beast::string_view *)(v53 + 112),
      ec);
    v46 = (unsigned __int64)ec;
    v47 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
    if ( v47 && v47 <= 3 )
    {
      __asan_report_load4(ec);
LABEL_114:
      __asan_report_load8(v46);
LABEL_115:
      __asan_report_load8(v46);
LABEL_116:
      __asan_report_store8();
LABEL_117:
      *(_QWORD *)v8 = 1172321806LL;
      __asan_stack_free_7(v8, 4512LL, v55);
      return;
    }
    if ( ec->val_ )
      goto LABEL_8;
    v46 = (unsigned __int64)this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      goto LABEL_114;
    v46 = (unsigned __int64)(this->_vptr_basic_parser + 4);
    if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
      goto LABEL_115;
    (*((void (__fastcall **)(boost::beast::http::basic_parser<false> *const, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, boost::beast::error_code *))this->_vptr_basic_parser
     + 4))(
      this,
      (unsigned int)v8,
      *(_QWORD *)(v53 + 80),
      *(_QWORD *)(v53 + 88),
      *(_QWORD *)(v53 + 112),
      *(_QWORD *)(v53 + 120),
      ec);
    if ( ec->val_ )
      goto LABEL_8;
    if ( *(_BYTE *)(((unsigned __int64)in >> 3) + 0x7FFF8000) )
      goto LABEL_116;
  }
  v10 = __asan_report_load1(*(_QWORD *)(v53 + 48));
LABEL_11:
  v11 = *(_BYTE *)(((v10 + 1) >> 3) + 0x7FFF8000);
  if ( v11 <= (char)((v10 + 1) & 7) && v11 )
  {
    __asan_report_load1(v10 + 1);
  }
  else if ( *(_BYTE *)(v10 + 1) == 10 )
  {
    goto LABEL_14;
  }
  boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_line_ending);
LABEL_14:
  if ( *(_BYTE *)(((unsigned __int64)in >> 3) + 0x7FFF8000) )
  {
    v12 = in;
    __asan_report_store8();
LABEL_19:
    __asan_report_load4(v12);
LABEL_20:
    if ( __cxa_guard_acquire(&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab) )
    {
      boost::beast::http::detail::field_table::field_table(&boost::beast::http::detail::get_field_table(void)::tab);
      __cxa_guard_release(&`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
    }
    goto LABEL_107;
  }
  *in = (const char *)(*(_QWORD *)(v53 + 48) + 2LL);
LABEL_8:
  v8 = v53;
  if ( v55 != (char *)v53 )
    goto LABEL_117;
  *(_QWORD *)((v53 >> 3) + 0x7FFF8000) = 0LL;
  *(_QWORD *)((v53 >> 3) + 0x7FFF8008) = 0LL;
  *(_DWORD *)((v53 >> 3) + 0x7FFF8010) = 0;
  *(_QWORD *)((v53 >> 3) + 0x7FFF8214) = 0LL;
  *(_QWORD *)((v53 >> 3) + 0x7FFF821C) = 0LL;
  *(_QWORD *)((v53 >> 3) + 0x7FFF8224) = 0LL;
  *(_QWORD *)((v53 >> 3) + 0x7FFF822C) = 0LL;
};

// Line 493: range 0000000019B9BE48-0000000019B9C5AE
void __fastcall boost::beast::http::basic_parser<false>::finish_header(
        boost::beast::http::basic_parser<false> *const this,
        boost::beast::error_code *ec,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 p_f; // rdi
  char v8; // dl
  unsigned int f; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int16 status; // dx
  void *p_state; // rdi
  uint64_t len; // rdx
  char v15; // al
  char v16; // al
  boost::beast::http::basic_parser<false> *v17; // rdi
  char v18; // al
  boost::beast::http::detail::basic_parser_base::state *v19; // rdi
  char v20; // al
  char v21; // al
  char v22; // al
  char v23; // al
  const boost::beast::http::basic_parser<false> *v24; // rdi

  p_f = (unsigned __int64)&this->f_;
  v8 = *(_BYTE *)((p_f >> 3) + 0x7FFF8000);
  if ( (char)((p_f & 7) + 3) >= v8 && v8 )
  {
    __asan_report_load4(p_f);
    goto LABEL_18;
  }
  f = this->f_;
  if ( (f & 1) != 0 )
    goto LABEL_19;
  p_f = (unsigned __int64)&this->status_;
  v10 = *(unsigned __int8 *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  v11 = (((_BYTE)this + 60) & 7u) + 1;
  if ( (char)((((_BYTE)this + 60) & 7) + 1) >= (char)v10 && (_BYTE)v10 )
  {
LABEL_18:
    __asan_report_load2(p_f, ec, v11, v10, a5, a6);
LABEL_19:
    p_state = &this->state_;
    v16 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
    if ( !v16 || v16 > 3 )
    {
      this->state_ = complete_0;
      goto LABEL_22;
    }
    __asan_report_store4(p_state);
LABEL_33:
    __asan_report_load8(p_state);
    goto LABEL_34;
  }
  status = this->status_;
  if ( (unsigned __int16)(status - 100) <= 0x63u || status == 204 || status == 304 )
    goto LABEL_19;
  if ( (f & 0x400) == 0 )
    goto LABEL_41;
  p_state = &this->len_;
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  len = this->len_;
  p_state = &this->body_limit_;
  if ( *(_BYTE *)(((unsigned __int64)&this->body_limit_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_state);
    goto LABEL_35;
  }
  if ( len > this->body_limit_ )
  {
LABEL_35:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, body_limit);
    return;
  }
  if ( len )
  {
    this->f_ = f | 8;
    v15 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
    if ( !v15 || v15 > 3 )
    {
      this->state_ = body0;
      goto LABEL_22;
    }
    __asan_report_store4(&this->state_);
  }
  v21 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( !v21 || v21 > 3 )
  {
    this->state_ = complete_0;
    goto LABEL_22;
  }
  f = __asan_report_store4(&this->state_);
LABEL_41:
  if ( (f & 0x800) != 0 )
  {
    this->f_ = f | 8;
    v22 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
    if ( !v22 || v22 > 3 )
    {
      this->state_ = chunk_header0;
      goto LABEL_22;
    }
    f = __asan_report_store4(&this->state_);
  }
  this->f_ = f | 0x28;
  v23 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
  {
    __asan_report_store4(&this->state_);
    goto LABEL_50;
  }
  this->state_ = body_to_eof0;
LABEL_22:
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_store16(ec);
    goto LABEL_51;
  }
  *(_QWORD *)&ec->val_ = 0LL;
  ec->cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    v17 = this;
    __asan_report_load8(this);
    goto LABEL_52;
  }
  v17 = (boost::beast::http::basic_parser<false> *)(this->_vptr_basic_parser + 5);
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(v17);
LABEL_53:
    v19 = (boost::beast::http::detail::basic_parser_base::state *)ec;
    __asan_report_load4(ec);
    goto LABEL_54;
  }
  (*((void (__fastcall **)(boost::beast::http::basic_parser<false> *const, boost::beast::error_code *))this->_vptr_basic_parser
   + 5))(
    this,
    ec);
  v18 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_53;
  if ( ec->val_ )
    return;
  v19 = &this->state_;
  v20 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( !v20 || v20 > 3 )
  {
    if ( this->state_ != complete_0 )
      return;
    goto LABEL_55;
  }
LABEL_54:
  __asan_report_load4(v19);
LABEL_55:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v24 = this;
    __asan_report_load8(this);
  }
  else
  {
    v24 = (const boost::beast::http::basic_parser<false> *)(this->_vptr_basic_parser + 10);
    if ( !*(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
    {
      (*((void (__fastcall **)(boost::beast::http::basic_parser<false> *const, boost::beast::error_code *))this->_vptr_basic_parser
       + 10))(
        this,
        ec);
      return;
    }
  }
  __asan_report_load8(v24);
  boost::beast::http::basic_parser<false>::content_length(v24);
};

// Line 592: range 0000000019BA2EEA-0000000019BA3B28
void __fastcall boost::beast::http::basic_parser<false>::parse_chunk_header(
        boost::beast::http::basic_parser<false> *const this,
        const char **p0,
        std::size_t n,
        boost::beast::error_code *ec)
{
  unsigned __int64 v5; // rbx
  boost::beast::error_code *v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  boost::beast::error_code *v9; // r15
  unsigned int *p_f; // rdx
  char v11; // cl
  unsigned int f; // eax
  std::size_t *p_skip; // rdx
  std::size_t skip; // rdx
  char v15; // al
  __int64 v16; // rax
  char v17; // cl
  char v18; // al
  boost::system::error_code *v19; // rax
  unsigned __int64 v20; // rdi
  char v21; // al
  __int64 v22; // rax
  char v23; // dl
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // si
  unsigned __int64 v29; // rdi
  char v30; // cl
  char v31; // al
  uint64_t body_limit; // rax
  const char *v33; // rcx
  signed __int64 v34; // rcx
  boost::beast::http::basic_parser<false> *v35; // rdi
  char v36; // al
  void *p_state; // rdi
  char v38; // dl
  char v39; // al
  unsigned int v40; // eax
  char v41; // al
  __int64 v42; // rax
  char v43; // dl
  const char *v44; // rdi
  char v45; // al
  __int64 v46; // rax
  char v47; // dl
  unsigned __int64 v48; // rdx
  const char *v49; // rcx
  __int64 v50; // rdx
  char v51; // si
  char v52; // si
  boost::beast::error_code *v53; // rdi
  char v54; // al
  std::size_t *v55; // rdi
  unsigned __int64 i; // rax
  char v57; // dl
  char v58; // dl
  char v59; // dl
  char v60; // dl
  char v61; // dl
  char v62; // al
  const char *v63; // rcx
  signed __int64 v64; // rcx
  boost::beast::http::basic_parser<false> *v65; // rdi
  char v66; // al
  void *v67; // rdi
  char v68; // al
  boost::beast::http::basic_parser<false> *v69; // rdi
  char v70; // al
  void *v71; // rdi
  char v72; // al
  const char *starta; // [rsp+10h] [rbp-A8h]
  const char *eol; // [rsp+28h] [rbp-90h]
  uint64_t size; // [rsp+30h] [rbp-88h]
  char v79[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v25 = __asan_stack_malloc_0(64LL);
    if ( v25 )
      v5 = v25;
  }
  v6 = (boost::beast::error_code *)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 5 p:610";
  *(_QWORD *)(v5 + 16) = boost::beast::http::basic_parser<false>::parse_chunk_header;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)p0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p0);
LABEL_29:
    __asan_report_load4(p_f);
    goto LABEL_30;
  }
  v8 = (unsigned __int64)*p0;
  *(_QWORD *)(v5 + 32) = *p0;
  v9 = (boost::beast::error_code *)(v8 + n);
  p_f = &this->f_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 68) & 7) + 3) >= v11 && v11 )
    goto LABEL_29;
  f = this->f_;
  if ( (f & 0x2000) != 0 )
  {
    if ( n <= 4 )
    {
      __asan_handle_no_return(v8);
      __assert_fail(
        "n >= 5",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/basic_parser.ipp",
        0x2ABu,
        "void boost::beast::http::basic_parser<isRequest>::parse_chunk_header(const char*&, std::size_t, boost::beast::er"
        "ror_code&) [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::error_code = boost::system::error_code]");
    }
    if ( (f & 0x40) == 0 )
    {
LABEL_95:
      v44 = *(const char **)(v5 + 32);
      v45 = *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000);
      if ( v45 <= (*(_BYTE *)(v5 + 32) & 7) && v45 )
      {
        __asan_report_load1(v44);
      }
      else
      {
        LODWORD(v46) = *(unsigned __int8 *)v44;
        v44 = &boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[*(unsigned __int8 *)v44];
        v47 = *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000);
        if ( v47 > ((unsigned __int8)v44 & 7) || !v47 )
        {
          LOBYTE(v46) = boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[(int)v46];
          if ( (_BYTE)v46 == 0xFF )
            goto LABEL_116;
          v48 = 0LL;
          do
          {
            if ( v48 > 0xFFFFFFFFFFFFFFFLL )
              goto LABEL_116;
            v50 = 16 * v48;
            v46 = (unsigned __int8)v46;
            if ( ~v50 < (unsigned __int64)(unsigned __int8)v46 )
              goto LABEL_116;
            v48 = v46 + v50;
            v46 = *(_QWORD *)(v5 + 32);
            v49 = (const char *)(v46 + 1);
            *(_QWORD *)(v5 + 32) = v46 + 1;
            v51 = *(_BYTE *)(((unsigned __int64)(v46 + 1) >> 3) + 0x7FFF8000);
            if ( v51 <= ((v46 + 1) & 7) && v51 )
            {
LABEL_107:
              v44 = v49;
              LODWORD(v46) = __asan_report_load1(v49);
            }
            else
            {
              LODWORD(v46) = *(unsigned __int8 *)(v46 + 1);
              v44 = &boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[(int)v46];
              v52 = *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000);
              if ( v52 <= ((unsigned __int8)v44 & 7) && v52 )
              {
                __asan_report_load1(v44);
LABEL_116:
                __asan_handle_no_return(v44);
                __assert_fail(
                  "parse_hex(p, size)",
                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/"
                  "impl/basic_parser.ipp",
                  0x2AFu,
                  "void boost::beast::http::basic_parser<isRequest>::parse_chunk_header(const char*&, std::size_t, boost:"
                  ":beast::error_code&) [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::erro"
                  "r_code = boost::system::error_code]");
              }
            }
            LOBYTE(v46) = boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[(int)v46];
          }
          while ( (_BYTE)v46 != 0xFF );
          v6 = ec;
          v53 = (boost::beast::error_code *)v49;
          eol = boost::beast::http::detail::basic_parser_base::find_eol(v49, (const char *)v9, ec);
          v54 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
          if ( v54 && v54 <= 3 )
          {
            v53 = ec;
            __asan_report_load4(ec);
          }
          else if ( !ec->val_ )
          {
            goto LABEL_120;
          }
          __asan_handle_no_return(v53);
          __assert_fail(
            "! ec",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/basic_parser.ipp",
            0x2B1u,
            "void boost::beast::http::basic_parser<isRequest>::parse_chunk_header(const char*&, std::size_t, boost::beast"
            "::error_code&) [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::error_code = boo"
            "st::system::error_code]");
        }
      }
      __asan_report_load1(v44);
      goto LABEL_107;
    }
    v41 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
    if ( v41 <= (char)(v8 & 7) && v41 )
    {
      v42 = __asan_report_load1(v8);
    }
    else
    {
      if ( *(_BYTE *)v8 != 13 )
        goto LABEL_104;
      v42 = v8 + 1;
      v43 = *(_BYTE *)(((v8 + 1) >> 3) + 0x7FFF8000);
      if ( v43 > (char)((v8 + 1) & 7) || !v43 )
      {
        if ( *(_BYTE *)(v8 + 1) == 10 )
        {
          *(_QWORD *)(v5 + 32) = v8 + 2;
          goto LABEL_95;
        }
LABEL_104:
        __asan_handle_no_return(v8);
        __assert_fail(
          "parse_crlf(p)",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/basic_parser.ipp",
          0x2ADu,
          "void boost::beast::http::basic_parser<isRequest>::parse_chunk_header(const char*&, std::size_t, boost::beast::"
          "error_code&) [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::error_code = boost::"
          "system::error_code]");
      }
    }
    v8 = v42;
    __asan_report_load1(v42);
    goto LABEL_104;
  }
  p_skip = &this->skip_;
  if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_skip);
    goto LABEL_31;
  }
  skip = this->skip_;
  if ( skip + 2 > n )
  {
LABEL_31:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
    goto LABEL_35;
  }
  if ( (f & 0x40) == 0 )
    goto LABEL_16;
  v15 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( v15 <= (char)(v8 & 7) && v15 )
  {
    v16 = __asan_report_load1(v8);
    goto LABEL_33;
  }
  if ( *(_BYTE *)v8 != 13 )
    goto LABEL_34;
  v16 = v8 + 1;
  v17 = *(_BYTE *)(((v8 + 1) >> 3) + 0x7FFF8000);
  if ( v17 <= (char)((v8 + 1) & 7) && v17 )
  {
LABEL_33:
    __asan_report_load1(v16);
    goto LABEL_34;
  }
  if ( *(_BYTE *)(v8 + 1) != 10 )
    goto LABEL_34;
  *(_QWORD *)(v5 + 32) = v8 + 2;
LABEL_16:
  eol = boost::beast::http::detail::basic_parser_base::find_eol(&(*p0)[skip], (const char *)v9, ec);
  v18 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
  {
    __asan_report_load4(ec);
LABEL_38:
    boost::system::error_code::operator=<boost::beast::http::error>(v19, need_more);
    this->skip_ = n - 1;
    goto LABEL_35;
  }
  v19 = ec;
  if ( ec->val_ )
    goto LABEL_35;
  if ( !eol )
    goto LABEL_38;
  this->skip_ = eol - 2 - *p0;
  v20 = *(_QWORD *)(v5 + 32);
  v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( v21 <= (*(_BYTE *)(v5 + 32) & 7) && v21 )
  {
    __asan_report_load1(v20);
LABEL_40:
    __asan_report_load1(v20);
    goto LABEL_41;
  }
  LODWORD(v22) = *(unsigned __int8 *)v20;
  v20 = (unsigned __int64)&boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[*(unsigned __int8 *)v20];
  v23 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( v23 <= (char)(v20 & 7) && v23 )
    goto LABEL_40;
  LOBYTE(v22) = boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[(int)v22];
  if ( (_BYTE)v22 == 0xFF )
  {
    v31 = 0;
  }
  else
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( v24 > 0xFFFFFFFFFFFFFFFLL )
      {
        v31 = 0;
        goto LABEL_53;
      }
      v26 = 16 * v24;
      v22 = (unsigned __int8)v22;
      if ( ~v26 < (unsigned __int64)(unsigned __int8)v22 )
        break;
      v24 = v22 + v26;
      v27 = *(_QWORD *)(v5 + 32);
      *(_QWORD *)(v5 + 32) = v27 + 1;
      v20 = v27 + 1;
      v28 = *(_BYTE *)(((unsigned __int64)(v27 + 1) >> 3) + 0x7FFF8000);
      if ( v28 <= ((v27 + 1) & 7) && v28 )
      {
LABEL_41:
        LODWORD(v22) = __asan_report_load1(v20);
      }
      else
      {
        LODWORD(v22) = *(unsigned __int8 *)(v27 + 1);
        v29 = (unsigned __int64)&boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[*(unsigned __int8 *)(v27 + 1)];
        v30 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
        if ( v30 <= (char)(v29 & 7) && v30 )
        {
          __asan_report_load1(v29);
LABEL_50:
          size = v24;
          v31 = 1;
          goto LABEL_53;
        }
      }
      LOBYTE(v22) = boost::beast::http::detail::basic_parser_base::unhex(unsigned char &,char)::tab[(int)v22];
      if ( (_BYTE)v22 == 0xFF )
        goto LABEL_50;
    }
    v31 = 0;
  }
LABEL_53:
  if ( !v31 )
  {
LABEL_34:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_chunk);
    goto LABEL_35;
  }
  if ( size )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->body_limit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&this->body_limit_);
    }
    else
    {
      body_limit = this->body_limit_;
      if ( body_limit >= size )
      {
        this->body_limit_ = body_limit - size;
        v6 = *(boost::beast::error_code **)(v5 + 32);
        boost::beast::http::detail::basic_parser_base::parse_chunk_extensions(
          (const char **)(v5 + 32),
          (const char *)v9,
          ec);
        if ( ec->val_ )
          goto LABEL_35;
        v33 = *(const char **)(v5 + 32);
        if ( eol - 2 != v33 )
          goto LABEL_175;
        v34 = v33 - (const char *)v6;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          v35 = this;
          __asan_report_load8(this);
        }
        else
        {
          v35 = (boost::beast::http::basic_parser<false> *)(this->_vptr_basic_parser + 8);
          if ( !*(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
          {
            v9 = ec;
            (*((void (__fastcall **)(boost::beast::http::basic_parser<false> *const, uint64_t, boost::beast::error_code *, signed __int64, boost::beast::error_code *))this->_vptr_basic_parser
             + 8))(
              this,
              size,
              v6,
              v34,
              ec);
            v36 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
            if ( !v36 || v36 > 3 )
            {
              if ( ec->val_ )
                goto LABEL_35;
              if ( !*(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
              {
                this->len_ = size;
                if ( !*(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
                {
                  this->skip_ = 2LL;
                  if ( !*(_BYTE *)(((unsigned __int64)p0 >> 3) + 0x7FFF8000) )
                  {
                    *p0 = eol;
                    p_state = &this->f_;
                    v38 = *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000);
                    if ( (char)((((_BYTE)this + 68) & 7) + 3) < v38 || !v38 )
                    {
                      this->f_ |= 0x40u;
                      p_state = &this->state_;
                      v39 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
                      if ( !v39 || v39 > 3 )
                      {
                        this->state_ = chunk_body;
                        goto LABEL_35;
                      }
                      goto LABEL_84;
                    }
LABEL_83:
                    __asan_report_load4(p_state);
LABEL_84:
                    __asan_report_store4(p_state);
                    goto LABEL_85;
                  }
LABEL_82:
                  p_state = p0;
                  __asan_report_store8();
                  goto LABEL_83;
                }
LABEL_81:
                __asan_report_store8();
                goto LABEL_82;
              }
LABEL_80:
              __asan_report_store8();
              goto LABEL_81;
            }
LABEL_79:
            __asan_report_load4(ec);
            goto LABEL_80;
          }
        }
        __asan_report_load8(v35);
        goto LABEL_79;
      }
    }
    boost::system::error_code::operator=<boost::beast::http::error>(ec, body_limit);
    goto LABEL_35;
  }
LABEL_85:
  v40 = this->f_;
  BYTE1(v40) |= 0x20u;
  this->f_ = v40;
LABEL_120:
  v55 = &this->skip_;
  if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v55);
    goto LABEL_125;
  }
  for ( i = (unsigned __int64)&(*p0)[this->skip_]; ; i = (unsigned __int64)v6 )
  {
    v6 = (boost::beast::error_code *)(i + 4);
    if ( (unsigned __int64)v9 < i + 4 )
      break;
    v55 = (std::size_t *)(i + 3);
    v58 = *(_BYTE *)(((i + 3) >> 3) + 0x7FFF8000);
    if ( v58 <= (char)((i + 3) & 7) && v58 )
    {
LABEL_125:
      i = __asan_report_load1(v55);
    }
    else
    {
      v59 = *(_BYTE *)(i + 3);
      if ( v59 != 10 )
      {
        if ( v59 == 13 )
          v6 = (boost::beast::error_code *)(i + 1);
        continue;
      }
    }
    v55 = (std::size_t *)(i + 2);
    v57 = *(_BYTE *)(((i + 2) >> 3) + 0x7FFF8000);
    if ( v57 <= (char)((i + 2) & 7) && v57 )
    {
      i = __asan_report_load1(v55);
    }
    else if ( *(_BYTE *)(i + 2) != 13 )
    {
      continue;
    }
    v55 = (std::size_t *)(i + 1);
    v60 = *(_BYTE *)(((i + 1) >> 3) + 0x7FFF8000);
    if ( v60 <= (char)((i + 1) & 7) && v60 )
    {
      i = __asan_report_load1(v55);
    }
    else if ( *(_BYTE *)(i + 1) != 10 )
    {
      v6 = (boost::beast::error_code *)(i + 2);
      continue;
    }
    v55 = (std::size_t *)i;
    v61 = *(_BYTE *)((i >> 3) + 0x7FFF8000);
    if ( v61 <= (char)(i & 7) && v61 )
    {
      __asan_report_load1(i);
      break;
    }
    if ( *(_BYTE *)i == 13 )
      goto LABEL_148;
    v6 = (boost::beast::error_code *)(i + 2);
  }
  v6 = 0LL;
LABEL_148:
  if ( v6 )
  {
    starta = *(const char **)(v5 + 32);
    boost::beast::http::detail::basic_parser_base::parse_chunk_extensions(
      (const char **)(v5 + 32),
      (const char *)v9,
      ec);
    v62 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
    if ( v62 && v62 <= 3 )
    {
      __asan_report_load4(ec);
    }
    else
    {
      if ( ec->val_ )
        goto LABEL_35;
      v63 = *(const char **)(v5 + 32);
      if ( eol - 2 == v63 )
      {
        v64 = v63 - starta;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          v65 = this;
          __asan_report_load8(this);
        }
        else
        {
          v65 = (boost::beast::http::basic_parser<false> *)(this->_vptr_basic_parser + 8);
          if ( !*(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(boost::beast::http::basic_parser<false> *const, _QWORD, const char *, signed __int64, boost::beast::error_code *))this->_vptr_basic_parser
             + 8))(
              this,
              0LL,
              starta,
              v64,
              ec);
            v66 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
            if ( !v66 || v66 > 3 )
            {
              if ( ec->val_ )
                goto LABEL_35;
              *(_QWORD *)(v5 + 32) = eol;
              v67 = this;
              boost::beast::http::basic_parser<false>::parse_fields(
                this,
                (const char **)(v5 + 32),
                (const char *)v6,
                ec);
              v68 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
              if ( !v68 || v68 > 3 )
              {
                if ( ec->val_ )
                  goto LABEL_35;
                if ( *(boost::beast::error_code **)(v5 + 32) == v6 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)p0 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store8();
                  }
                  else
                  {
                    *p0 = (const char *)v6;
                    if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                    {
                      v69 = (boost::beast::http::basic_parser<false> *)(this->_vptr_basic_parser + 10);
                      if ( !*(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) )
                      {
                        (*((void (__fastcall **)(boost::beast::http::basic_parser<false> *const, boost::beast::error_code *))this->_vptr_basic_parser
                         + 10))(
                          this,
                          ec);
                        v70 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
                        if ( !v70 || v70 > 3 )
                        {
                          if ( ec->val_ )
                            goto LABEL_35;
                          v71 = &this->state_;
                          v72 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
                          if ( !v72 || v72 > 3 )
                          {
                            this->state_ = complete_0;
                            goto LABEL_35;
                          }
LABEL_185:
                          __asan_report_store4(v71);
LABEL_186:
                          *(_QWORD *)v5 = 1172321806LL;
                          *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
                          return;
                        }
LABEL_184:
                        v71 = ec;
                        __asan_report_load4(ec);
                        goto LABEL_185;
                      }
LABEL_183:
                      __asan_report_load8(v69);
                      goto LABEL_184;
                    }
                  }
                  v69 = this;
                  __asan_report_load8(this);
                  goto LABEL_183;
                }
LABEL_180:
                __asan_handle_no_return(v67);
                __assert_fail(
                  "p == eom",
                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/"
                  "impl/basic_parser.ipp",
                  0x2CEu,
                  "void boost::beast::http::basic_parser<isRequest>::parse_chunk_header(const char*&, std::size_t, boost:"
                  ":beast::error_code&) [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::erro"
                  "r_code = boost::system::error_code]");
              }
LABEL_179:
              v67 = ec;
              __asan_report_load4(ec);
              goto LABEL_180;
            }
LABEL_178:
            __asan_report_load4(ec);
            goto LABEL_179;
          }
        }
        __asan_report_load8(v65);
        goto LABEL_178;
      }
    }
LABEL_175:
    boost::system::error_code::operator=<boost::beast::http::error>(ec, bad_chunk_extension);
  }
  else
  {
    if ( n <= 2 )
    {
      __asan_handle_no_return(v55);
      __assert_fail(
        "n >= 3",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/basic_parser.ipp",
        0x2B7u,
        "void boost::beast::http::basic_parser<isRequest>::parse_chunk_header(const char*&, std::size_t, boost::beast::er"
        "ror_code&) [with bool isRequest = false; std::size_t = long unsigned int; boost::beast::error_code = boost::system::error_code]");
    }
    this->skip_ = n - 3;
    boost::system::error_code::operator=<boost::beast::http::error>(ec, need_more);
  }
LABEL_35:
  if ( v79 != (char *)v5 )
    goto LABEL_186;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
};
