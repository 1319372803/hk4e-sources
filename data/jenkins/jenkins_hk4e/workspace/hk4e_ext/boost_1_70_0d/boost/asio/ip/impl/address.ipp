// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/impl/address.ipp

// Line 179: range 000000000CDEB0B0-000000000CDEB6A5
std::string *__fastcall boost::asio::ip::address::to_string[abi:cxx11](
        std::string *retstr,
        const boost::asio::ip::address *const this)
{
  char *p_ipv4_address; // r15
  const boost::asio::ip::address *v4; // r14
  unsigned __int64 v5; // r12
  _DWORD *v6; // rbx
  char v7; // al
  unsigned __int64 v8; // r14
  char v9; // dl
  __int64 v10; // rdi
  char v11; // dl
  boost::asio::ip::address::$5F3DC29D1B12FEFA86E6D06A01BDF3D0 type; // ecx
  const char *v13; // rdx
  __int64 v15; // rax
  int *v16; // rcx
  char v17; // dl
  __int64 v18; // rdi
  char v19; // dl
  char v20; // al
  char v21; // dl
  uint8_t v22; // dl
  char v23; // cl
  char v24; // cl
  char v25; // dl
  const boost::asio::ip::address *v26; // [rsp+8h] [rbp-150h]
  boost::asio::ip::address_v6 *cp; // [rsp+10h] [rbp-148h]
  unsigned __int64 ifindex; // [rsp+18h] [rbp-140h]
  char v29[312]; // [rsp+20h] [rbp-138h] BYREF

  v4 = this;
  v5 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_2(256LL);
    if ( v15 )
      v5 = v15;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 16 2 ec 64 16 8 addr_str 96 22 7 if_name 160 63 8 addr_str";
  *(_QWORD *)(v5 + 16) = boost::asio::ip::address::to_string[abi:cxx11];
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -234487808;
  v6[536862724] = -218959118;
  v6[536862726] = 117440512;
  v6[536862727] = -202116109;
  v7 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_load4(this);
LABEL_20:
    cp = &this->ipv6_address_;
    *(_DWORD *)(v5 + 64) = 0;
    *(_BYTE *)(v5 + 68) = 0;
    *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
    if ( *(_BYTE *)(((unsigned __int64)&this->ipv6_address_.scope_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&this->ipv6_address_.scope_id_);
    }
    else
    {
      ifindex = this->ipv6_address_.scope_id_;
      v16 = __errno_location();
      v26 = (const boost::asio::ip::address *)v16;
      v17 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v16 & 7) + 3) < v17 || !v17 )
      {
        *v16 = 0;
        v18 = 10LL;
        p_ipv4_address = (char *)inet_ntop(10, cp, (char *)(v5 + 160), 0x3Fu);
        this = v26;
        v19 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v26 & 7) + 3) < v19 || !v19 )
        {
          type = v26->type_;
          *(_QWORD *)(v5 + 64) = ((unsigned __int64)(v26->type_ != ipv4) << 32) | (unsigned int)v26->type_;
          *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
          if ( p_ipv4_address )
            goto LABEL_26;
          goto LABEL_45;
        }
LABEL_44:
        v18 = (__int64)this;
        __asan_report_load4(this);
LABEL_45:
        if ( type == ipv4 )
          *(_QWORD *)(v5 + 64) = 0x100000016LL;
LABEL_26:
        v20 = p_ipv4_address != 0LL;
        if ( !p_ipv4_address || !ifindex )
          goto LABEL_38;
        *(_QWORD *)(v5 + 96) = 37LL;
        *(_QWORD *)(v5 + 104) = 0LL;
        *(_DWORD *)(v5 + 112) = 0;
        *(_WORD *)(v5 + 116) = 0;
        v21 = *(_BYTE *)(((unsigned __int64)cp >> 3) + 0x7FFF8000);
        if ( v21 <= ((unsigned __int8)cp & 7) && v21 )
        {
          v20 = __asan_report_load1(cp);
        }
        else
        {
          v22 = v4->ipv6_address_.addr_.__u6_addr8[0];
          if ( v22 != 0xFE )
            goto LABEL_31;
        }
        v24 = *(_BYTE *)(((unsigned __int64)&cp->addr_.__u6_addr8[1] >> 3) + 0x7FFF8000);
        if ( v24 <= (((unsigned __int8)cp + 1) & 7) && v24 )
        {
          v20 = __asan_report_load1(&cp->addr_.__u6_addr8[1]);
LABEL_53:
          v25 = *(_BYTE *)(((unsigned __int64)&cp->addr_.__u6_addr8[1] >> 3) + 0x7FFF8000);
          if ( v25 <= (((unsigned __int8)cp + 1) & 7) && v25 )
          {
            __asan_report_load1(&cp->addr_.__u6_addr8[1]);
            goto LABEL_58;
          }
          if ( (cp->addr_.__u6_addr8[1] & 0xF) == 2 )
          {
LABEL_34:
            if ( !v23 && !v20 )
            {
LABEL_36:
              sprintf((char *)(v5 + 97), off_1A268820, ifindex);
LABEL_37:
              v18 = v5 + 160;
              strcat((char *)(v5 + 160), (const char *)(v5 + 96));
LABEL_38:
              if ( !p_ipv4_address && *(_DWORD *)(v5 + 64) )
              {
                __asan_handle_no_return(v18);
                boost::asio::detail::do_throw_error((const boost::system::error_code *)(v5 + 64));
              }
              if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
              {
                __asan_report_store8();
              }
              else
              {
                retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
                if ( p_ipv4_address )
                  goto LABEL_13;
              }
              v13 = p_ipv4_address - 1;
              goto LABEL_14;
            }
LABEL_58:
            if ( if_indextoname(ifindex, (char *)(v5 + 97)) )
              goto LABEL_37;
            goto LABEL_36;
          }
LABEL_33:
          v20 = 0;
          goto LABEL_34;
        }
        if ( (cp->addr_.__u6_addr8[1] & 0xC0) == 0x80 )
        {
          v23 = v20;
LABEL_32:
          if ( v22 != 0xFF )
            goto LABEL_33;
          goto LABEL_53;
        }
LABEL_31:
        v23 = 0;
        goto LABEL_32;
      }
    }
    __asan_report_store4(v16);
    goto LABEL_44;
  }
  if ( this->type_ == ipv6 )
    goto LABEL_20;
  p_ipv4_address = (char *)&this->ipv4_address_;
  *(_DWORD *)(v5 + 32) = 0;
  *(_BYTE *)(v5 + 36) = 0;
  *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v8 = (unsigned __int64)__errno_location();
  v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( (char)((v8 & 7) + 3) >= v9 && v9 )
  {
    __asan_report_store4(v8);
LABEL_65:
    v10 = v8;
    __asan_report_load4(v8);
LABEL_66:
    if ( type == ipv4 )
      *(_QWORD *)(v5 + 32) = 0x100000016LL;
    goto LABEL_10;
  }
  *(_DWORD *)v8 = 0;
  v10 = 2LL;
  p_ipv4_address = (char *)inet_ntop(2, p_ipv4_address, (char *)(v5 + 64), 0x10u);
  v11 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( (char)((v8 & 7) + 3) >= v11 && v11 )
    goto LABEL_65;
  type = *(_DWORD *)v8;
  *(_QWORD *)(v5 + 32) = ((unsigned __int64)(*(_DWORD *)v8 != 0) << 32) | *(unsigned int *)v8;
  *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( !p_ipv4_address )
    goto LABEL_66;
LABEL_10:
  if ( !p_ipv4_address && *(_DWORD *)(v5 + 32) )
  {
    __asan_handle_no_return(v10);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v5 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( p_ipv4_address )
    {
LABEL_13:
      v13 = &p_ipv4_address[strlen(p_ipv4_address)];
      goto LABEL_14;
    }
  }
  v13 = p_ipv4_address - 1;
LABEL_14:
  std::string::_M_construct<char const*>(retstr, p_ipv4_address, v13, (std::forward_iterator_tag)type);
  if ( v29 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};
