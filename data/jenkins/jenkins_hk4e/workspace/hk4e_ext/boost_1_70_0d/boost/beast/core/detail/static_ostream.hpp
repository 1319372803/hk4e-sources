// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/detail/static_ostream.hpp

// Line 62: range 0000000019B75326-0000000019B758CB
boost::beast::detail::static_ostream_buffer::int_type __fastcall boost::beast::detail::static_ostream_buffer::overflow(
        boost::beast::detail::static_ostream_buffer *const this,
        boost::beast::detail::static_ostream_buffer::int_type ch_0)
{
  boost::beast::detail::static_ostream_buffer *v2; // rbx
  __int8 *p_size; // rdi
  char v5; // al
  unsigned __int64 len; // rax
  std::size_t size; // rdx
  __int8 *p_M_string_length; // rdi
  double v9; // xmm0_8
  double v10; // xmm0_8
  unsigned __int64 v11; // rsi
  void *p_data; // rdi
  size_t v13; // rdx
  char *data; // rcx
  __int64 v15; // rdx
  char *v16; // rax
  double v17; // xmm0_8
  double v18; // xmm0_8
  unsigned __int64 v19; // rsi
  std::string::pointer M_p; // rdx
  char *v21; // rax
  __int64 v22; // rdx
  __int8 *p_len; // rdi

  v2 = this;
  if ( ch_0 == -1 )
  {
LABEL_57:
    p_len = &this->baseclass_0[40];
    if ( *(_BYTE *)(((unsigned __int64)p_len >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_len);
    }
    else
    {
      p_len = &v2->baseclass_0[32];
      if ( !*(_BYTE *)(((unsigned __int64)&v2->baseclass_0[32] >> 3) + 0x7FFF8000) )
      {
        p_len = (__int8 *)&v2->len_;
        if ( !*(_BYTE *)(((unsigned __int64)&v2->len_ >> 3) + 0x7FFF8000) )
        {
          v2->len_ += *(_QWORD *)&v2->baseclass_0[40] - *(_QWORD *)&v2->baseclass_0[32];
          return ch_0;
        }
LABEL_63:
        __asan_report_load8(p_len);
        JUMPOUT(0x19B756F7LL);
      }
    }
    __asan_report_load8(p_len);
    goto LABEL_63;
  }
  p_size = &this->baseclass_0[40];
  if ( *(_BYTE *)(((unsigned __int64)p_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_size);
LABEL_21:
    __asan_report_store1(p_size);
    goto LABEL_22;
  }
  p_size = *(__int8 **)&v2->baseclass_0[40];
  v5 = *(_BYTE *)(((unsigned __int64)p_size >> 3) + 0x7FFF8000);
  if ( v5 <= (v2->baseclass_0[40] & 7) && v5 )
    goto LABEL_21;
  *p_size = ch_0;
  p_size = &v2->baseclass_0[32];
  if ( *(_BYTE *)(((unsigned __int64)&v2->baseclass_0[32] >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_size);
    goto LABEL_23;
  }
  p_size = (__int8 *)&v2->len_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->len_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(p_size);
    goto LABEL_24;
  }
  v2->len_ += *(_QWORD *)&v2->baseclass_0[40] - *(_QWORD *)&v2->baseclass_0[32] + 1LL;
  len = v2->len_;
  p_size = (__int8 *)&v2->size_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    len = __asan_report_load8(p_size);
    goto LABEL_25;
  }
  size = v2->size_;
  if ( len >= size - 1 )
  {
    p_M_string_length = (__int8 *)&v2->s_._M_string_length;
    if ( !*(_BYTE *)(((unsigned __int64)&v2->s_._M_string_length >> 3) + 0x7FFF8000) )
    {
      if ( v2->s_._M_string_length )
      {
LABEL_36:
        if ( (len & 0x8000000000000000LL) != 0LL )
          v17 = (double)(int)(len & 1 | (len >> 1)) + (double)(int)(len & 1 | (len >> 1));
        else
          v17 = (double)(int)len;
        v18 = v17 * 1.5;
        if ( v18 >= 9.223372036854776e18 )
          v19 = (unsigned int)(int)(v18 - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v19 = (unsigned int)(int)v18;
        std::string::resize(&v2->s_, v19, 0LL);
LABEL_41:
        this = (boost::beast::detail::static_ostream_buffer *const)&v2->len_;
        if ( *(_BYTE *)(((unsigned __int64)&v2->len_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(this);
        }
        else
        {
          this = (boost::beast::detail::static_ostream_buffer *const)&v2->s_;
          if ( !*(_BYTE *)(((unsigned __int64)&v2->s_ >> 3) + 0x7FFF8000) )
          {
            M_p = v2->s_._M_dataplus._M_p;
            v21 = &M_p[v2->len_];
            this = (boost::beast::detail::static_ostream_buffer *const)&v2->s_._M_string_length;
            if ( !*(_BYTE *)(((unsigned __int64)&v2->s_._M_string_length >> 3) + 0x7FFF8000) )
            {
              v22 = (__int64)&M_p[v2->s_._M_string_length - 1];
              this = (boost::beast::detail::static_ostream_buffer *const)&v2->baseclass_0[40];
              if ( !*(_BYTE *)(((unsigned __int64)&v2->baseclass_0[40] >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)&v2->baseclass_0[40] = v21;
                this = (boost::beast::detail::static_ostream_buffer *const)&v2->baseclass_0[32];
                if ( !*(_BYTE *)(((unsigned __int64)&v2->baseclass_0[32] >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)&v2->baseclass_0[32] = v21;
                  this = (boost::beast::detail::static_ostream_buffer *const)&v2->baseclass_0[48];
                  if ( !*(_BYTE *)(((unsigned __int64)&v2->baseclass_0[48] >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)&v2->baseclass_0[48] = v22;
                    return ch_0;
                  }
                  goto LABEL_56;
                }
LABEL_55:
                __asan_report_store8();
LABEL_56:
                __asan_report_store8();
                goto LABEL_57;
              }
LABEL_54:
              __asan_report_store8();
              goto LABEL_55;
            }
LABEL_53:
            __asan_report_load8(this);
            goto LABEL_54;
          }
        }
        __asan_report_load8(this);
        goto LABEL_53;
      }
      p_M_string_length = (__int8 *)&v2->s_;
      if ( (len & 0x8000000000000000LL) == 0LL )
      {
        v9 = (double)(int)len;
        goto LABEL_13;
      }
LABEL_31:
      v9 = (double)(int)(len & 1 | (len >> 1)) + (double)(int)(len & 1 | (len >> 1));
LABEL_13:
      v10 = v9 * 1.5;
      if ( v10 >= 9.223372036854776e18 )
        v11 = (unsigned int)(int)(v10 - 9.223372036854776e18) ^ 0x8000000000000000LL;
      else
        v11 = (unsigned int)(int)v10;
      std::string::resize(p_M_string_length, v11, 0LL);
      p_data = &v2->len_;
      if ( *(_BYTE *)(((unsigned __int64)&v2->len_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_data);
      }
      else
      {
        v13 = v2->len_;
        p_data = &v2->data_;
        if ( !*(_BYTE *)(((unsigned __int64)&v2->data_ >> 3) + 0x7FFF8000) )
        {
          p_data = &v2->s_;
          if ( !*(_BYTE *)(((unsigned __int64)&v2->s_ >> 3) + 0x7FFF8000) )
          {
            if ( v13 )
              memcpy(v2->s_._M_dataplus._M_p, v2->data_, v13);
            goto LABEL_41;
          }
          goto LABEL_35;
        }
      }
      __asan_report_load8(p_data);
LABEL_35:
      len = __asan_report_load8(p_data);
      goto LABEL_36;
    }
LABEL_30:
    len = __asan_report_load8(p_M_string_length);
    goto LABEL_31;
  }
LABEL_25:
  p_M_string_length = (__int8 *)&v2->data_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->data_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
    goto LABEL_29;
  }
  data = v2->data_;
  v15 = (__int64)&data[size - 2];
  v16 = &data[len];
  *(_QWORD *)&v2->baseclass_0[40] = v16;
  *(_QWORD *)&v2->baseclass_0[32] = v16;
  p_M_string_length = &v2->baseclass_0[48];
  if ( *(_BYTE *)(((unsigned __int64)&v2->baseclass_0[48] >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8();
    goto LABEL_30;
  }
  *(_QWORD *)&v2->baseclass_0[48] = v15;
  return ch_0;
};

// Line 77: range 0000000019B7620C-0000000019B76BCF
int __fastcall boost::beast::detail::static_ostream_buffer::sync(
        boost::beast::detail::static_ostream_buffer *const this)
{
  __int8 *p_len; // rdi
  std::size_t len; // rax
  std::size_t size; // rdx
  __int8 *p_data; // rdi
  double v6; // xmm0_8
  double v7; // xmm0_8
  unsigned __int64 v8; // rsi
  void *p_s; // rdi
  std::size_t v10; // rdx
  char *data; // rcx
  __int64 v12; // rdx
  char *v13; // rax
  double v14; // xmm0_8
  double v15; // xmm0_8
  unsigned __int64 v16; // rsi
  void *p_M_string_length; // rdi
  std::string::pointer M_p; // rdx
  char *v19; // rax
  std::string::size_type v20; // rdx

  p_len = &this->baseclass_0[40];
  if ( *(_BYTE *)(((unsigned __int64)p_len >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_len);
    goto LABEL_18;
  }
  p_len = &this->baseclass_0[32];
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_len);
    goto LABEL_19;
  }
  p_len = (__int8 *)&this->len_;
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(p_len);
    goto LABEL_20;
  }
  this->len_ += *(_QWORD *)&this->baseclass_0[40] - *(_QWORD *)&this->baseclass_0[32];
  len = this->len_;
  p_len = (__int8 *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    len = __asan_report_load8(p_len);
    goto LABEL_21;
  }
  size = this->size_;
  if ( len < size - 1 )
  {
LABEL_21:
    p_data = (__int8 *)&this->data_;
    if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_data);
    }
    else
    {
      data = this->data_;
      v12 = (__int64)&data[size - 2];
      v13 = &data[len];
      *(_QWORD *)&this->baseclass_0[40] = v13;
      *(_QWORD *)&this->baseclass_0[32] = v13;
      p_data = &this->baseclass_0[48];
      if ( !*(_BYTE *)(((unsigned __int64)&this->baseclass_0[48] >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)&this->baseclass_0[48] = v12;
        return 0;
      }
    }
    __asan_report_store8();
    goto LABEL_26;
  }
  p_data = (__int8 *)&this->s_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->s_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    len = __asan_report_load8(p_data);
    goto LABEL_27;
  }
  if ( !this->s_._M_string_length )
  {
    p_data = (__int8 *)&this->s_;
    if ( (len & 0x8000000000000000LL) == 0LL )
    {
      v6 = (double)(int)len;
      goto LABEL_10;
    }
LABEL_27:
    v6 = (double)(int)(len & 1 | (len >> 1)) + (double)(int)(len & 1 | (len >> 1));
LABEL_10:
    v7 = v6 * 1.5;
    if ( v7 >= 9.223372036854776e18 )
      v8 = (unsigned int)(int)(v7 - 9.223372036854776e18) ^ 0x8000000000000000LL;
    else
      v8 = (unsigned int)(int)v7;
    std::string::resize(p_data, v8, 0LL);
    p_s = &this->len_;
    if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_s);
    }
    else
    {
      v10 = this->len_;
      p_s = &this->data_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
      {
        p_s = &this->s_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
        {
          if ( v10 )
            memcpy(this->s_._M_dataplus._M_p, this->data_, v10);
          goto LABEL_37;
        }
        goto LABEL_31;
      }
    }
    __asan_report_load8(p_s);
LABEL_31:
    len = __asan_report_load8(p_s);
  }
  if ( (len & 0x8000000000000000LL) != 0LL )
    v14 = (double)(int)(len & 1 | (len >> 1)) + (double)(int)(len & 1 | (len >> 1));
  else
    v14 = (double)(int)len;
  v15 = v14 * 1.5;
  if ( v15 >= 9.223372036854776e18 )
    v16 = (unsigned int)(int)(v15 - 9.223372036854776e18) ^ 0x8000000000000000LL;
  else
    v16 = (unsigned int)(int)v15;
  std::string::resize(&this->s_, v16, 0LL);
LABEL_37:
  p_M_string_length = &this->len_;
  if ( *(_BYTE *)(((unsigned __int64)&this->len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
    goto LABEL_48;
  }
  p_M_string_length = &this->s_;
  if ( *(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(p_M_string_length);
    goto LABEL_49;
  }
  M_p = this->s_._M_dataplus._M_p;
  v19 = &M_p[this->len_];
  p_M_string_length = &this->s_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->s_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(p_M_string_length);
    goto LABEL_50;
  }
  v20 = (std::string::size_type)&M_p[this->s_._M_string_length - 1];
  LODWORD(p_M_string_length) = (_DWORD)this + 40;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[40] >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_store8();
    goto LABEL_51;
  }
  *(_QWORD *)&this->baseclass_0[40] = v19;
  LODWORD(p_M_string_length) = (_DWORD)this + 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_store8();
    goto LABEL_52;
  }
  *(_QWORD *)&this->baseclass_0[32] = v19;
  LODWORD(p_M_string_length) = (_DWORD)this + 48;
  if ( !*(_BYTE *)(((unsigned __int64)&this->baseclass_0[48] >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)&this->baseclass_0[48] = v20;
    return 0;
  }
LABEL_52:
  __asan_report_store8();
  return boost::asio::error::make_error_code((boost::asio::error::netdb_errors)p_M_string_length).val_;
};
