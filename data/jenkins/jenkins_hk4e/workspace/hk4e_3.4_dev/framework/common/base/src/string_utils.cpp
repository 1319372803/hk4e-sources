// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/base/src/string_utils.cpp

// Line 50: range 000000000C9FD112-000000000C9FD4E9
std::string *__fastcall common::tools::StringUtils::trimleft(
        std::string *retstr,
        const std::string *str,
        const std::string *s,
        bool bChar)
{
  unsigned __int64 v4; // rbx
  std::string::size_type i; // rbp
  const std::string *v6; // r13
  std::string::size_type *p_M_string_length; // rdi
  std::string::size_type M_string_length; // rax
  void *v10; // rdi
  std::string::size_type v11; // rdx
  std::string::size_type *v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  std::string::size_type v17; // r13

  p_M_string_length = &str->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
  }
  else
  {
    v4 = (unsigned __int64)str;
    v6 = s;
    M_string_length = str->_M_string_length;
    if ( M_string_length )
    {
      if ( bChar )
      {
LABEL_40:
        for ( i = 0LL; i < *(_QWORD *)(v4 + 8); ++i )
        {
          if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
          {
            v14 = __asan_report_load8(v4);
          }
          else
          {
            v14 = *(_QWORD *)v4 + i;
            p_M_string_length = (std::string::size_type *)v14;
            v15 = *(unsigned __int8 *)((v14 >> 3) + 0x7FFF8000);
            v16 = (*(_BYTE *)v4 + (_BYTE)i) & 7;
            if ( (char)v15 <= (char)v16 && (_BYTE)v15 )
            {
              __asan_report_load1(v14, str, v15, v16);
              break;
            }
          }
          str = (const std::string *)(unsigned int)*(char *)v14;
          p_M_string_length = (std::string::size_type *)v6;
          if ( std::string::find(v6, str, 0LL) == -1 )
            break;
        }
        if ( !i )
        {
          if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
          {
            __asan_report_store8(retstr, str);
          }
          else
          {
            retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
            if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
            {
              std::string::_M_construct<char *>(
                retstr,
                *(char **)v4,
                (char *)(*(_QWORD *)(v4 + 8) + *(_QWORD *)v4),
                (std::forward_iterator_tag)bChar);
              return retstr;
            }
          }
          p_M_string_length = (std::string::size_type *)v4;
          __asan_report_load8(v4);
        }
        v17 = *(_QWORD *)(v4 + 8);
        if ( i > v17 )
        {
          __asan_handle_no_return(p_M_string_length, str);
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::substr",
            i,
            v17);
        }
        if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8(retstr, str);
        }
        else
        {
          retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
          if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
          {
            str = *(const std::string **)v4;
            v4 = *(_QWORD *)(v4 + 8);
            if ( i <= v4 )
              goto LABEL_26;
LABEL_63:
            __asan_handle_no_return(p_M_string_length, str);
            std::__throw_out_of_range_fmt(
              "%s: __pos (which is %zu) > this->size() (which is %zu)",
              "basic_string::basic_string",
              i,
              v4);
          }
        }
        p_M_string_length = (std::string::size_type *)v4;
        __asan_report_load8(v4);
        goto LABEL_63;
      }
      v10 = &s->_M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)&s->_M_string_length >> 3) + 0x7FFF8000) )
      {
        v11 = s->_M_string_length;
        if ( v11 <= M_string_length )
          goto LABEL_19;
        if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
        {
          retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
          if ( !*(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
            goto LABEL_12;
          goto LABEL_18;
        }
LABEL_17:
        __asan_report_store8(retstr, str);
LABEL_18:
        __asan_report_load8(str);
LABEL_19:
        str = 0LL;
        if ( !(unsigned int)std::string::compare(v4, 0LL, v11, v6) )
        {
          v13 = &v6->_M_string_length;
          if ( *(_BYTE *)(((unsigned __int64)&v6->_M_string_length >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v13);
          }
          else
          {
            i = v6->_M_string_length;
            v13 = (std::string::size_type *)(v4 + 8);
            if ( !*(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
            {
              v6 = *(const std::string **)(v4 + 8);
              if ( i <= (unsigned __int64)v6 )
              {
                if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store8(retstr, 0LL);
                }
                else
                {
                  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
                  if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
                  {
                    str = *(const std::string **)v4;
                    v4 = *(_QWORD *)(v4 + 8);
                    if ( i <= v4 )
                    {
LABEL_26:
                      std::string::_M_construct<char const*>(
                        retstr,
                        (const char *)str + i,
                        (const char *)str + v4,
                        (std::forward_iterator_tag)bChar);
                      return retstr;
                    }
LABEL_32:
                    __asan_handle_no_return(v13, str);
                    std::__throw_out_of_range_fmt(
                      "%s: __pos (which is %zu) > this->size() (which is %zu)",
                      "basic_string::basic_string",
                      i,
                      v4);
                  }
                }
                v13 = (std::string::size_type *)v4;
                __asan_report_load8(v4);
                goto LABEL_32;
              }
LABEL_29:
              __asan_handle_no_return(v13, 0LL);
              std::__throw_out_of_range_fmt(
                "%s: __pos (which is %zu) > this->size() (which is %zu)",
                "basic_string::substr",
                i,
                (size_t)v6);
            }
          }
          __asan_report_load8(v13);
          goto LABEL_29;
        }
        if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8(retstr, 0LL);
        }
        else
        {
          retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
          if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
          {
            str = *(const std::string **)v4;
            p_M_string_length = (std::string::size_type *)(v4 + 8);
            if ( !*(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
            {
              std::string::_M_construct<char *>(
                retstr,
                (char *)str,
                (char *)str + *(_QWORD *)(v4 + 8),
                (std::forward_iterator_tag)bChar);
              return retstr;
            }
            goto LABEL_39;
          }
        }
        p_M_string_length = (std::string::size_type *)v4;
        __asan_report_load8(v4);
LABEL_39:
        __asan_report_load8(p_M_string_length);
        goto LABEL_40;
      }
LABEL_16:
      __asan_report_load8(v10);
      goto LABEL_17;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, str);
    goto LABEL_15;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    v10 = (void *)str;
    __asan_report_load8(str);
    goto LABEL_16;
  }
LABEL_12:
  std::string::_M_construct<char *>(
    retstr,
    str->_M_dataplus._M_p,
    &str->_M_dataplus._M_p[*(_QWORD *)(v4 + 8)],
    (std::forward_iterator_tag)bChar);
  return retstr;
};

// Line 94: range 000000000C9FD4EE-000000000C9FD9F8
// local variable allocation has failed, the output may be wrong!
std::string *__fastcall common::tools::StringUtils::trimright(
        std::string *retstr,
        const std::string *str,
        const std::string *s,
        bool bChar)
{
  std::string *v4; // rbx
  std::string::size_type M_string_length; // rbp
  std::string::size_type v6; // r12
  const std::string *v7; // r14
  void *p_M_string_length; // rdi
  std::string::size_type v10; // rdx
  std::string::size_type v12; // rsi
  std::string::size_type *v13; // rdi
  std::string::size_type v14; // rax
  const char *M_p; // rsi
  std::string::size_type v16; // rdx
  std::string::size_type *v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&str->_M_string_length);
  }
  else
  {
    v4 = (std::string *)str;
    v7 = s;
    M_string_length = str->_M_string_length;
    if ( M_string_length )
    {
      if ( bChar )
        goto LABEL_41;
      p_M_string_length = &s->_M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)&s->_M_string_length >> 3) + 0x7FFF8000) )
      {
        v10 = s->_M_string_length;
        if ( M_string_length >= v10 )
          goto LABEL_19;
        if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
        {
          retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
          if ( !*(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
            goto LABEL_12;
          goto LABEL_18;
        }
LABEL_17:
        __asan_report_store8(retstr, str);
LABEL_18:
        __asan_report_load8(str);
LABEL_19:
        v12 = M_string_length - v10;
        if ( (unsigned int)std::string::compare(v4, M_string_length - v10, v10, v7) )
          goto LABEL_31;
        v13 = &v4->_M_string_length;
        if ( *(_BYTE *)(((unsigned __int64)&v4->_M_string_length >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v13);
        }
        else
        {
          v13 = &v7->_M_string_length;
          if ( !*(_BYTE *)(((unsigned __int64)&v7->_M_string_length >> 3) + 0x7FFF8000) )
          {
            v14 = v4->_M_string_length - v7->_M_string_length;
            *(_QWORD *)&bChar = (unsigned __int64)retstr >> 3;
            if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
            {
              retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
              if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
              {
                M_p = v4->_M_dataplus._M_p;
                v16 = v4->_M_string_length;
                if ( v14 < v16 )
                  v16 = v14;
LABEL_26:
                std::string::_M_construct<char const*>(retstr, M_p, &M_p[v16], (std::forward_iterator_tag)bChar);
                return retstr;
              }
              goto LABEL_30;
            }
LABEL_29:
            __asan_report_store8(retstr, v12);
LABEL_30:
            __asan_report_load8(v4);
LABEL_31:
            if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8(retstr, v12);
            }
            else
            {
              retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
              if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
              {
                v17 = &v4->_M_string_length;
                if ( !*(_BYTE *)(((unsigned __int64)&v4->_M_string_length >> 3) + 0x7FFF8000) )
                {
LABEL_34:
                  std::string::_M_construct<char *>(
                    retstr,
                    v4->_M_dataplus._M_p,
                    &v4->_M_dataplus._M_p[v4->_M_string_length],
                    (std::forward_iterator_tag)bChar);
                  return retstr;
                }
LABEL_37:
                __asan_report_load8(v17);
LABEL_38:
                v18 = __asan_report_load8(v17);
                while ( 1 )
                {
                  str = (const std::string *)(unsigned int)*(char *)v18;
                  if ( std::string::find(v7, str, 0LL) == -1 )
                    break;
                  M_string_length = v6;
LABEL_41:
                  if ( !M_string_length )
                    break;
                  v6 = M_string_length - 1;
                  v17 = (std::string::size_type *)v4;
                  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
                    goto LABEL_38;
                  v18 = (unsigned __int64)&v4->_M_dataplus._M_p[v6];
                  v19 = *(unsigned __int8 *)((v18 >> 3) + 0x7FFF8000);
                  v20 = (LOBYTE(v4->_M_dataplus._M_p) + (_BYTE)v6) & 7;
                  if ( (char)v19 <= (char)v20 && (_BYTE)v19 )
                  {
                    __asan_report_load1(&v4->_M_dataplus._M_p[v6], str, v19, v20);
                    break;
                  }
                }
                if ( M_string_length == v4->_M_string_length )
                {
                  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store8(retstr, str);
                  }
                  else
                  {
                    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
                    if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
                      goto LABEL_34;
                  }
                  __asan_report_load8(v4);
                }
                else if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
                {
                  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
                  if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
                  {
                    M_p = v4->_M_dataplus._M_p;
                    v16 = v4->_M_string_length;
                    if ( M_string_length < v16 )
                      v16 = M_string_length;
                    goto LABEL_26;
                  }
LABEL_58:
                  __asan_report_load8(v4);
                  JUMPOUT(0xC9FD81FLL);
                }
                __asan_report_store8(retstr, str);
                goto LABEL_58;
              }
            }
            v17 = (std::string::size_type *)v4;
            __asan_report_load8(v4);
            goto LABEL_37;
          }
        }
        __asan_report_load8(v13);
        goto LABEL_29;
      }
LABEL_16:
      __asan_report_load8(p_M_string_length);
      goto LABEL_17;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, str);
    goto LABEL_15;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_M_string_length = (void *)str;
    __asan_report_load8(str);
    goto LABEL_16;
  }
LABEL_12:
  std::string::_M_construct<char *>(
    retstr,
    str->_M_dataplus._M_p,
    &str->_M_dataplus._M_p[v4->_M_string_length],
    (std::forward_iterator_tag)bChar);
  return retstr;
};

// Line 139: range 000000000C9F9906-000000000C9F9994
int32_t __fastcall common::tools::StringUtils::lower(std::string *str)
{
  __int64 v1; // rsi
  std::string::size_type i; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  char v5; // cl

  for ( i = 0LL; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
    {
      str = (std::string *)((char *)str + 8);
      __asan_report_load8(str);
LABEL_3:
      v3 = __asan_report_load8(str);
LABEL_4:
      str = (std::string *)v3;
      __asan_report_load1(v3, v1, i, v4);
      continue;
    }
    if ( i >= str->_M_string_length )
      break;
    if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
      goto LABEL_3;
    v3 = (unsigned __int64)&str->_M_dataplus._M_p[i];
    v4 = *(unsigned __int8 *)((v3 >> 3) + 0x7FFF8000);
    v1 = (LOBYTE(str->_M_dataplus._M_p) + (_BYTE)i) & 7;
    if ( (char)v4 <= (char)v1 && (_BYTE)v4 )
      goto LABEL_4;
    v5 = *(_BYTE *)v3;
    if ( *(char *)v3 > 64 && v5 <= 90 )
      *(_BYTE *)v3 = v5 + 32;
  }
  return 0;
};

// Line 151: range 000000000C9FD9FE-000000000C9FE3D6
std::string *__fastcall common::tools::StringUtils::toLower(std::string *retstr, const std::string *str)
{
  std::forward_iterator_tag v2; // cl
  void *p_M_string_length; // rdi
  common::tools::StringUtils::toLower::<lambda(unsigned char)> v5; // cl
  std::string::size_type *v6; // rax

  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, str);
    goto LABEL_8;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    p_M_string_length = (void *)str;
    __asan_report_load8(str);
    goto LABEL_9;
  }
  p_M_string_length = &str->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(p_M_string_length);
    goto LABEL_10;
  }
  std::string::_M_construct<char *>(retstr, str->_M_dataplus._M_p, &str->_M_dataplus._M_p[str->_M_string_length], v2);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    v6 = (std::string::size_type *)__asan_report_load8(retstr);
    goto LABEL_11;
  }
  v6 = &retstr->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(v6);
    JUMPOUT(0xC9FDAAFLL);
  }
  std::transform<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,common::tools::StringUtils::toLower(std::string const&)::{lambda(unsigned char)#1}>(
    (__gnu_cxx::__normal_iterator<char*,std::string >)retstr->_M_dataplus._M_p,
    (__gnu_cxx::__normal_iterator<char*,std::string >)&retstr->_M_dataplus._M_p[retstr->_M_string_length],
    (__gnu_cxx::__normal_iterator<char*,std::string >)retstr->_M_dataplus._M_p,
    v5);
  return retstr;
};

// Line 161: range 000000000C9F9996-000000000C9F9A24
int32_t __fastcall common::tools::StringUtils::upper(std::string *str)
{
  __int64 v1; // rsi
  std::string::size_type i; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  char v5; // cl

  for ( i = 0LL; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
    {
      str = (std::string *)((char *)str + 8);
      __asan_report_load8(str);
LABEL_3:
      v3 = __asan_report_load8(str);
LABEL_4:
      str = (std::string *)v3;
      __asan_report_load1(v3, v1, i, v4);
      continue;
    }
    if ( i >= str->_M_string_length )
      break;
    if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
      goto LABEL_3;
    v3 = (unsigned __int64)&str->_M_dataplus._M_p[i];
    v4 = *(unsigned __int8 *)((v3 >> 3) + 0x7FFF8000);
    v1 = (LOBYTE(str->_M_dataplus._M_p) + (_BYTE)i) & 7;
    if ( (char)v4 <= (char)v1 && (_BYTE)v4 )
      goto LABEL_4;
    v5 = *(_BYTE *)v3;
    if ( *(char *)v3 > 96 && v5 <= 122 )
      *(_BYTE *)v3 = v5 - 32;
  }
  return 0;
};

// Line 183: range 000000000C9FA960-000000000C9FACA9
std::string *__fastcall common::tools::StringUtils::urlEncode(std::string *retstr, const std::string *str)
{
  __int64 v2; // rcx
  std::string::size_type i; // rbp
  int v4; // r14d
  std::string *v5; // r13
  std::string *(__fastcall *v7)(std::string *__return_ptr __struct_ptr, const std::string *); // rsi
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  uint8_t v16; // al
  const std::string *v17; // rdi
  const std::string *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  uint8_t v21; // al
  char v22; // r15
  unsigned __int64 v24; // [rsp+0h] [rbp-98h]
  unsigned __int64 v25; // [rsp+10h] [rbp-88h]
  char v26[120]; // [rsp+20h] [rbp-78h] BYREF

  v5 = retstr;
  v24 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v24 = v10;
  }
  *(_QWORD *)v24 = 1102416563LL;
  *(_QWORD *)(v24 + 8) = "1 32 4 7 buf:186";
  v7 = common::tools::StringUtils::urlEncode;
  *(_QWORD *)(v24 + 16) = common::tools::StringUtils::urlEncode;
  v25 = v24 >> 3;
  *(_DWORD *)(v25 + 2147450880) = -235802127;
  *(_DWORD *)(v25 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, common::tools::StringUtils::urlEncode);
    goto LABEL_10;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr = (std::string *)((char *)retstr + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v5->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8(retstr, common::tools::StringUtils::urlEncode);
LABEL_11:
    __asan_report_store1(retstr, common::tools::StringUtils::urlEncode, v9, v2);
    goto LABEL_12;
  }
  v5->_M_string_length = 0LL;
  retstr = (std::string *)&v5->_anon_0;
  v8 = *(_BYTE *)(((unsigned __int64)&v5->_anon_0 >> 3) + 0x7FFF8000);
  v9 = ((_BYTE)v5 + 16) & 7;
  if ( v8 <= (char)v9 && v8 )
    goto LABEL_11;
  v5->_anon_0._M_local_buf[0] = 0;
  for ( i = 0LL; ; ++i )
  {
    retstr = (std::string *)&str->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
    {
LABEL_12:
      __asan_report_load8(retstr);
LABEL_13:
      __asan_report_load8(retstr);
LABEL_14:
      __asan_report_load1(retstr, v7, v11, v12);
LABEL_15:
      if ( isspace(v4) )
      {
        *(_BYTE *)(v24 + 32) = 43;
        goto LABEL_36;
      }
      *(_BYTE *)(v24 + 32) = 37;
      v13 = (unsigned __int64)&str->_M_dataplus._M_p[i];
      v14 = *(unsigned __int8 *)((v13 >> 3) + 0x7FFF8000);
      v15 = (LOBYTE(str->_M_dataplus._M_p) + (_BYTE)i) & 7;
      if ( (char)v14 <= (char)v15 && (_BYTE)v14 )
        v16 = __asan_report_load1(&str->_M_dataplus._M_p[i], v7, v14, v15);
      else
        v16 = common::tools::StringUtils::toHex(*(char *)v13 >> 4);
      *(_BYTE *)(v24 + 33) = v16;
      v17 = str;
      if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(str);
      }
      else
      {
        v18 = (const std::string *)&str->_M_dataplus._M_p[i];
        v17 = v18;
        v19 = *(unsigned __int8 *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
        v20 = (LOBYTE(str->_M_dataplus._M_p) + (_BYTE)i) & 7;
        if ( (char)v19 > (char)v20 || !(_BYTE)v19 )
        {
          v21 = common::tools::StringUtils::toHex(SLOBYTE(v18->_M_dataplus._M_p) % 16);
LABEL_27:
          *(_BYTE *)(v24 + 34) = v21;
          goto LABEL_36;
        }
      }
      v21 = __asan_report_load1(v17, v7, v19, v20);
      goto LABEL_27;
    }
    if ( i >= str->_M_string_length )
      break;
    v7 = 0LL;
    memset((void *)(v24 + 32), 0, 4uLL);
    retstr = (std::string *)str;
    if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
      goto LABEL_13;
    retstr = (std::string *)&str->_M_dataplus._M_p[i];
    v11 = *(unsigned __int8 *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000);
    v12 = (LOBYTE(str->_M_dataplus._M_p) + (_BYTE)i) & 7;
    if ( (char)v11 <= (char)v12 && (_BYTE)v11 )
      goto LABEL_14;
    v22 = str->_M_dataplus._M_p[i];
    v4 = v22;
    if ( !isalnum(v22) )
      goto LABEL_15;
    *(_BYTE *)(v24 + 32) = v22;
LABEL_36:
    if ( strlen((const char *)(v24 + 32)) > 0x3FFFFFFFFFFFFFFFLL - v5->_M_string_length )
    {
      __asan_handle_no_return(v24 + 32, v7);
      std::__throw_length_error("basic_string::append");
    }
    v7 = (std::string *(__fastcall *)(std::string *__return_ptr __struct_ptr, const std::string *))(v24 + 32);
    std::string::_M_append(v5, v24 + 32);
  }
  if ( v26 == (char *)v24 )
  {
    *(_QWORD *)((v24 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v24 = 1172321806LL;
    *(_QWORD *)((v24 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};

// Line 212: range 000000000C9FACBA-000000000C9FB0D4
std::string *__fastcall common::tools::StringUtils::urlDecode(std::string *retstr, const std::string *str)
{
  __int64 v2; // rcx
  std::string *v3; // rbp
  std::string::size_type i; // r12
  unsigned __int64 M_string_length; // r13
  std::string *v6; // rbx
  char v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  std::string::size_type v12; // r14
  const uint8_t *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  uint8_t v16; // al
  uint8_t v17; // r15
  std::string *v18; // rdi
  std::string *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  uint8_t v22; // al
  __int64 v23; // rcx
  char v24; // r15
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_M_string_length; // rdi
  unsigned __int64 M_allocated_capacity; // rax
  std::string::size_type v27; // rdi
  char v28; // al
  unsigned __int64 v29; // rdx
  char v30; // al
  std::string::size_type v31; // rdx
  unsigned __int64 v32; // rax
  char v33; // r15
  const std::string *v34; // r14
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v35; // rdi
  unsigned __int64 v36; // r14
  char v37; // al
  unsigned __int64 v38; // rdx
  char v39; // al
  unsigned __int64 v40; // rdx
  std::string::pointer M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // [rsp+8h] [rbp-40h]

  v6 = retstr;
  p_anon_0 = &retstr->_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, str);
    goto LABEL_7;
  }
  v3 = (std::string *)str;
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  retstr = (std::string *)((char *)retstr + 8);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8(retstr, str);
LABEL_8:
    __asan_report_store1(retstr, str, v8, v2);
    goto LABEL_9;
  }
  v6->_M_string_length = 0LL;
  retstr = (std::string *)&v6->_anon_0;
  v7 = *(_BYTE *)(((unsigned __int64)&v6->_anon_0 >> 3) + 0x7FFF8000);
  v8 = ((_BYTE)v6 + 16) & 7;
  if ( v7 <= (char)v8 && v7 )
    goto LABEL_8;
  v6->_anon_0._M_local_buf[0] = 0;
  for ( i = 0LL; ; ++i )
  {
    retstr = (std::string *)&v3->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
    {
LABEL_9:
      __asan_report_load8(retstr);
LABEL_10:
      v9 = __asan_report_load8(retstr);
LABEL_11:
      __asan_report_load1(v9, str, v10, v11);
LABEL_12:
      v12 = i + 2;
      if ( i + 2 >= v11 )
        return v6;
      v13 = (const uint8_t *)&str->_M_dataplus._M_p + i + 1;
      v14 = *(unsigned __int8 *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
      v15 = ((_BYTE)str + (_BYTE)i + 1) & 7;
      if ( (char)v14 <= (char)v15 && (_BYTE)v14 )
        v16 = __asan_report_load1((char *)&str->_M_dataplus._M_p + i + 1, str, v14, v15);
      else
        v16 = common::tools::StringUtils::fromHex(*v13);
      v17 = v16;
      v18 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v3);
      }
      else
      {
        v19 = (std::string *)&v3->_M_dataplus._M_p[v12];
        v18 = v19;
        v20 = *(unsigned __int8 *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
        v21 = (LOBYTE(v3->_M_dataplus._M_p) + (_BYTE)v12) & 7;
        if ( (char)v20 > (char)v21 || !(_BYTE)v20 )
        {
          v22 = common::tools::StringUtils::fromHex((const uint8_t)v19->_M_dataplus._M_p);
          goto LABEL_23;
        }
      }
      v22 = __asan_report_load1(v18, str, v20, v21);
LABEL_23:
      v24 = v22 + 16 * v17;
      p_M_string_length = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&v6->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&v6->_M_string_length >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_string_length);
      }
      else
      {
        M_string_length = v6->_M_string_length;
        i = M_string_length + 1;
        p_M_string_length = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6;
        if ( !*(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6->_M_dataplus._M_p == &v6->_anon_0 )
          {
LABEL_38:
            M_allocated_capacity = 15LL;
            goto LABEL_28;
          }
          p_M_string_length = &v6->_anon_0;
          if ( !*(_BYTE *)(((unsigned __int64)&v6->_anon_0 >> 3) + 0x7FFF8000) )
          {
            M_allocated_capacity = v6->_anon_0._M_allocated_capacity;
LABEL_28:
            if ( i > M_allocated_capacity )
            {
              str = (const std::string *)M_string_length;
              std::string::_M_mutate(v6, M_string_length, 0LL, 0LL, 1LL);
            }
            M_string_length += (unsigned __int64)v6->_M_dataplus._M_p;
            v27 = M_string_length;
            v28 = *(_BYTE *)((M_string_length >> 3) + 0x7FFF8000);
            v29 = M_string_length & 7;
            if ( v28 <= (char)v29 && v28 )
            {
              __asan_report_store1(M_string_length, str, v29, v23);
            }
            else
            {
              *(_BYTE *)M_string_length = v24;
              v6->_M_string_length = i;
              i += (std::string::size_type)v6->_M_dataplus._M_p;
              v27 = i;
              v30 = *(_BYTE *)((i >> 3) + 0x7FFF8000);
              v31 = i & 7;
              if ( v30 > (char)v31 || !v30 )
              {
                *(_BYTE *)i = 0;
                i = v12;
                continue;
              }
            }
            __asan_report_store1(v27, str, v31, v23);
            goto LABEL_41;
          }
LABEL_37:
          __asan_report_load8(p_M_string_length);
          goto LABEL_38;
        }
      }
      __asan_report_load8(p_M_string_length);
      goto LABEL_37;
    }
    v11 = v3->_M_string_length;
    if ( i >= v11 )
      break;
    retstr = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      goto LABEL_10;
    str = (const std::string *)v3->_M_dataplus._M_p;
    v9 = (unsigned __int64)&v3->_M_dataplus._M_p[i];
    v10 = *(unsigned __int8 *)((v9 >> 3) + 0x7FFF8000);
    v27 = (LOBYTE(v3->_M_dataplus._M_p) + (_BYTE)i) & 7;
    if ( (char)v10 <= (char)v27 && (_BYTE)v10 )
      goto LABEL_11;
    v33 = *(_BYTE *)v9;
    if ( *(_BYTE *)v9 == 37 )
      goto LABEL_12;
    if ( v33 != 43 )
    {
      v34 = (const std::string *)v6->_M_string_length;
      M_string_length = (unsigned __int64)&v34->_M_dataplus._M_p + 1;
      v35 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6;
      if ( !*(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6->_M_dataplus._M_p != &v6->_anon_0 )
        {
          v35 = &v6->_anon_0;
          if ( !*(_BYTE *)(((unsigned __int64)&v6->_anon_0 >> 3) + 0x7FFF8000) )
          {
            v32 = v6->_anon_0._M_allocated_capacity;
            goto LABEL_61;
          }
LABEL_45:
          __asan_report_load8(v35);
        }
        v32 = 15LL;
LABEL_61:
        if ( M_string_length > v32 )
        {
          str = v34;
          std::string::_M_mutate(v6, v34, 0LL, 0LL, 1LL);
        }
        v36 = (unsigned __int64)&v6->_M_dataplus._M_p[(unsigned __int64)v34];
        v37 = *(_BYTE *)((v36 >> 3) + 0x7FFF8000);
        v38 = v36 & 7;
        if ( v37 <= (char)v38 && v37 )
        {
          __asan_report_store1(v36, str, v38, v11);
        }
        else
        {
          *(_BYTE *)v36 = v33;
          v6->_M_string_length = M_string_length;
          M_string_length += (unsigned __int64)v6->_M_dataplus._M_p;
          v39 = *(_BYTE *)((M_string_length >> 3) + 0x7FFF8000);
          v40 = M_string_length & 7;
          if ( v39 <= (char)v40 && v39 )
          {
            __asan_report_store1(M_string_length, str, v40, v11);
            M_p = v6->_M_dataplus._M_p;
            if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6->_M_dataplus._M_p )
              operator delete(M_p);
            __asan_handle_no_return(M_p, str);
            _Unwind_Resume((struct _Unwind_Exception *)v3);
          }
        }
        *(_BYTE *)M_string_length = 0;
        continue;
      }
      __asan_report_load8(v6);
      goto LABEL_45;
    }
LABEL_41:
    if ( v6->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    {
      __asan_handle_no_return(v27, str);
      std::__throw_length_error("basic_string::append");
    }
    str = (const std::string *)" ";
    std::string::_M_append(v6, " ");
  }
  return v6;
};

// Line 245: range 000000000C9F9A26-000000000C9FA192
std::string *__fastcall common::tools::StringUtils::base64Encode(std::string *retstr, const std::string *str)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r13
  std::string::size_type v4; // r14
  std::string *v5; // rbx
  char *v7; // r12
  std::string *(__fastcall *v8)(std::string *__return_ptr __struct_ptr, const std::string *); // rsi
  char v9; // al
  __int64 v10; // rdx
  std::string::size_type M_string_length; // rdx
  unsigned __int64 M_p; // rax
  std::string::size_type v13; // rbp
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  char v21; // dl
  unsigned __int8 v22; // al
  unsigned __int8 v23; // dl
  __int64 v24; // rcx
  int v25; // r15d
  const std::string *v26; // rdi
  __int64 v27; // rdx
  unsigned __int64 M_allocated_capacity; // rax
  char v29; // al
  __int64 v30; // rdx
  const std::string *v31; // rax
  char v32; // al
  unsigned __int64 v33; // rdx
  char v34; // al
  std::string::size_type v35; // rdx
  int i; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  char *v39; // rsi
  unsigned __int8 v40; // al
  char v41; // dl
  unsigned __int8 v42; // al
  unsigned __int8 v43; // dl
  __int64 v44; // rcx
  int j; // r15d
  const std::string *v46; // rdi
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  char v49; // al
  __int64 v50; // rdx
  const std::string *v51; // rax
  char v52; // al
  std::string::size_type v53; // rdx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v54; // rdi
  char v55; // al
  unsigned __int64 v56; // rdx
  unsigned __int64 k; // rax
  unsigned __int64 v58; // r13
  char v59; // al
  unsigned __int64 v60; // rdx
  char v61; // al
  std::string::size_type v62; // rdx
  struct _Unwind_Exception *v63; // rbp
  std::string::pointer v64; // rdi
  const char *bytes_to_encode; // [rsp+8h] [rbp-D0h]
  char v67; // [rsp+17h] [rbp-C1h]
  unsigned __int64 v68; // [rsp+18h] [rbp-C0h]
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // [rsp+20h] [rbp-B8h]
  _DWORD *v70; // [rsp+30h] [rbp-A8h]
  char v71[152]; // [rsp+40h] [rbp-98h] BYREF

  v5 = retstr;
  v68 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_1(96LL);
    if ( v14 )
      v68 = v14;
  }
  v7 = (char *)(v68 + 96);
  *(_QWORD *)v68 = 1102416563LL;
  *(_QWORD *)(v68 + 8) = "2 48 3 16 char_array_3:257 64 4 16 char_array_4:258";
  v8 = common::tools::StringUtils::base64Encode;
  *(_QWORD *)(v68 + 16) = common::tools::StringUtils::base64Encode;
  v70 = (_DWORD *)(v68 >> 3);
  v70[536862720] = -235802127;
  v70[536862721] = -234622479;
  v70[536862722] = -202116348;
  p_anon_0 = &retstr->_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, common::tools::StringUtils::base64Encode);
    goto LABEL_13;
  }
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  retstr = (std::string *)((char *)retstr + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v5->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8(retstr, common::tools::StringUtils::base64Encode);
LABEL_14:
    __asan_report_store1(retstr, common::tools::StringUtils::base64Encode, v10, v2);
    goto LABEL_15;
  }
  v5->_M_string_length = 0LL;
  retstr = (std::string *)&v5->_anon_0;
  v9 = *(_BYTE *)(((unsigned __int64)&v5->_anon_0 >> 3) + 0x7FFF8000);
  v10 = ((_BYTE)v5 + 16) & 7;
  if ( v9 <= (char)v10 && v9 )
    goto LABEL_14;
  v5->_anon_0._M_local_buf[0] = 0;
  retstr = (std::string *)&str->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(retstr);
    goto LABEL_16;
  }
  M_string_length = str->_M_string_length;
  if ( !M_string_length )
    goto LABEL_107;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(str);
LABEL_17:
    v15 = 0;
    goto LABEL_20;
  }
  M_p = (unsigned __int64)str->_M_dataplus._M_p;
  v13 = 0LL;
  while ( 1 )
  {
    v4 = (unsigned int)(M_string_length - 1);
    if ( !(_DWORD)M_string_length )
      break;
    v8 = (std::string *(__fastcall *)(std::string *__return_ptr __struct_ptr, const std::string *))(M_p + 1);
    bytes_to_encode = (const char *)(M_p + 1);
    v17 = *(unsigned __int8 *)((M_p >> 3) + 0x7FFF8000);
    v18 = M_p & 7;
    if ( (char)v17 <= (char)v18 && (_BYTE)v17 )
    {
      v15 = __asan_report_load1(M_p, v8, v17, v18);
    }
    else
    {
      v16 = *(unsigned __int8 *)M_p;
      v15 = v13 + 1;
      v19 = *(unsigned __int8 *)(((unsigned __int64)&v7[(int)v13 - 48] >> 3) + 0x7FFF8000);
      v8 = (std::string *(__fastcall *)(std::string *__return_ptr __struct_ptr, const std::string *))(((_BYTE)v7 + (_BYTE)v13 - 48) & 7);
      if ( (char)v19 <= (char)v8 && (_BYTE)v19 )
      {
        __asan_report_store1(&v7[(int)v13 - 48], v8, v19, v16);
LABEL_27:
        v20 = *(_BYTE *)(v68 + 48);
        *(_BYTE *)(v68 + 64) = v20 >> 2;
        v21 = (16 * v20) & 0x30;
        v22 = *(_BYTE *)(v68 + 49);
        *(_BYTE *)(v68 + 65) = (v22 >> 4) + v21;
        v23 = *(_BYTE *)(v68 + 50);
        v24 = v23 >> 6;
        *(_BYTE *)(v68 + 66) = v24 + ((4 * v22) & 0x3C);
        *(_BYTE *)(v68 + 67) = v23 & 0x3F;
        v25 = 0;
LABEL_36:
        if ( v25 > 3 )
          goto LABEL_17;
        v29 = *(_BYTE *)(((unsigned __int64)&v7[v25 - 32] >> 3) + 0x7FFF8000);
        v30 = ((_BYTE)v7 + (_BYTE)v25 - 32) & 7;
        if ( v29 <= (char)v30 && v29 )
        {
          __asan_report_load1(&v7[v25 - 32], v8, v30, v24);
        }
        else if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringUtils::base64_chars[abi:cxx11] >> 3) + 0x7FFF8000) )
        {
          v31 = (const std::string *)&common::tools::StringUtils::base64_chars[abi:cxx11]._M_dataplus._M_p[(unsigned __int8)v7[v25 - 32]];
          v26 = v31;
          v27 = *(unsigned __int8 *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
          v24 = (unsigned __int8)v31 & 7;
          if ( (char)v27 > (char)v24 || !(_BYTE)v27 )
          {
            v67 = (char)v31->_M_dataplus._M_p;
            v3 = v5->_M_string_length;
            v13 = v3 + 1;
            v26 = v5;
            if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
            {
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5->_M_dataplus._M_p != &v5->_anon_0 )
              {
                v26 = (const std::string *)&v5->_anon_0;
                if ( !*(_BYTE *)(((unsigned __int64)&v5->_anon_0 >> 3) + 0x7FFF8000) )
                {
                  M_allocated_capacity = v5->_anon_0._M_allocated_capacity;
                  goto LABEL_46;
                }
LABEL_32:
                __asan_report_load8(v26);
              }
              M_allocated_capacity = 15LL;
LABEL_46:
              if ( v13 > M_allocated_capacity )
              {
                v8 = (std::string *(__fastcall *)(std::string *__return_ptr __struct_ptr, const std::string *))v3;
                std::string::_M_mutate(v5, v3, 0LL, 0LL, 1LL);
              }
              v3 += (unsigned __int64)v5->_M_dataplus._M_p;
              v32 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
              v33 = v3 & 7;
              if ( v32 <= (char)v33 && v32 )
              {
                __asan_report_store1(v3, v8, v33, v24);
              }
              else
              {
                *(_BYTE *)v3 = v67;
                v5->_M_string_length = v13;
                v13 += (std::string::size_type)v5->_M_dataplus._M_p;
                v34 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
                v35 = v13 & 7;
                if ( v34 <= (char)v35 && v34 )
                {
                  __asan_report_store1(v13, v8, v35, v24);
                  break;
                }
              }
              *(_BYTE *)v13 = 0;
              ++v25;
              goto LABEL_36;
            }
LABEL_31:
            __asan_report_load8(v26);
            goto LABEL_32;
          }
LABEL_30:
          __asan_report_load1(v26, v8, v27, v24);
          goto LABEL_31;
        }
        v26 = &common::tools::StringUtils::base64_chars[abi:cxx11];
        __asan_report_load8(&common::tools::StringUtils::base64_chars[abi:cxx11]);
        goto LABEL_30;
      }
    }
    v13 = (int)v13;
    v7[(int)v13 - 48] = v16;
    if ( v15 == 3 )
      goto LABEL_27;
LABEL_20:
    v13 = v15;
    LODWORD(M_string_length) = v4;
    M_p = (unsigned __int64)bytes_to_encode;
  }
  if ( !(_DWORD)v13 )
    goto LABEL_107;
  for ( i = v13; i <= 2; ++i )
  {
    v37 = *(unsigned __int8 *)(((unsigned __int64)&v7[i - 48] >> 3) + 0x7FFF8000);
    v38 = ((_BYTE)v7 + (_BYTE)i - 48) & 7;
    if ( (char)v37 <= (char)v38 && (_BYTE)v37 )
    {
      __asan_report_store1(&v7[i - 48], v8, v37, v38);
      break;
    }
    v7[i - 48] = 0;
  }
  v39 = (char *)(v68 + 96);
  v40 = *(_BYTE *)(v68 + 48);
  *(_BYTE *)(v68 + 64) = v40 >> 2;
  v41 = (16 * v40) & 0x30;
  v42 = *(_BYTE *)(v68 + 49);
  *(_BYTE *)(v68 + 65) = (v42 >> 4) + v41;
  v43 = *(_BYTE *)(v68 + 50);
  v44 = v43 >> 6;
  *(_BYTE *)(v68 + 66) = v44 + ((4 * v42) & 0x3C);
  *(_BYTE *)(v68 + 67) = v43 & 0x3F;
  for ( j = 0; ; ++j )
  {
    if ( (int)v13 < j )
      goto LABEL_91;
    v49 = *(_BYTE *)(((unsigned __int64)&v7[j - 32] >> 3) + 0x7FFF8000);
    v50 = ((_BYTE)v7 + (_BYTE)j - 32) & 7;
    if ( v49 <= (char)v50 && v49 )
    {
      __asan_report_load1(&v7[j - 32], v39, v50, v44);
LABEL_62:
      v46 = &common::tools::StringUtils::base64_chars[abi:cxx11];
      __asan_report_load8(&common::tools::StringUtils::base64_chars[abi:cxx11]);
LABEL_63:
      __asan_report_load1(v46, v39, v47, v44);
LABEL_64:
      __asan_report_load8(v46);
LABEL_65:
      __asan_report_load8(v46);
LABEL_66:
      v48 = 15LL;
      goto LABEL_79;
    }
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringUtils::base64_chars[abi:cxx11] >> 3) + 0x7FFF8000) )
      goto LABEL_62;
    v51 = (const std::string *)&common::tools::StringUtils::base64_chars[abi:cxx11]._M_dataplus._M_p[(unsigned __int8)v7[j - 32]];
    v46 = v51;
    v47 = *(unsigned __int8 *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000);
    v44 = (unsigned __int8)v51 & 7;
    if ( (char)v47 <= (char)v44 && (_BYTE)v47 )
      goto LABEL_63;
    LOBYTE(bytes_to_encode) = v51->_M_dataplus._M_p;
    v4 = v5->_M_string_length;
    v3 = v4 + 1;
    v46 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      goto LABEL_64;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5->_M_dataplus._M_p == &v5->_anon_0 )
      goto LABEL_66;
    v46 = (const std::string *)&v5->_anon_0;
    if ( *(_BYTE *)(((unsigned __int64)&v5->_anon_0 >> 3) + 0x7FFF8000) )
      goto LABEL_65;
    v48 = v5->_anon_0._M_allocated_capacity;
LABEL_79:
    if ( v3 > v48 )
    {
      v39 = (char *)v4;
      std::string::_M_mutate(v5, v4, 0LL, 0LL, 1LL);
    }
    v4 += (std::string::size_type)v5->_M_dataplus._M_p;
    v52 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
    v53 = v4 & 7;
    if ( v52 <= (char)v53 && v52 )
    {
      __asan_report_store1(v4, v39, v53, v44);
      goto LABEL_68;
    }
    *(_BYTE *)v4 = (_BYTE)bytes_to_encode;
    v5->_M_string_length = v3;
    v3 += (unsigned __int64)v5->_M_dataplus._M_p;
    v54 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v3;
    v55 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
    v56 = v3 & 7;
    if ( v55 <= (char)v56 )
    {
      if ( v55 )
        break;
    }
LABEL_68:
    *(_BYTE *)v3 = 0;
  }
  __asan_report_store1(v3, v39, v56, v44);
LABEL_86:
  __asan_report_load8(v54);
LABEL_87:
  __asan_report_load8(v54);
LABEL_88:
  for ( k = 15LL; ; k = v5->_anon_0._M_allocated_capacity )
  {
    if ( v13 > k )
    {
      v39 = (char *)v3;
      std::string::_M_mutate(v5, v3, 0LL, 0LL, 1LL);
    }
    v58 = (unsigned __int64)&v5->_M_dataplus._M_p[v3];
    v59 = *(_BYTE *)((v58 >> 3) + 0x7FFF8000);
    v60 = v58 & 7;
    if ( v59 <= (char)v60 && v59 )
    {
      __asan_report_store1(v58, v39, v60, v44);
    }
    else
    {
      *(_BYTE *)v58 = 61;
      v5->_M_string_length = v13;
      v13 += (std::string::size_type)v5->_M_dataplus._M_p;
      v61 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
      v62 = v13 & 7;
      if ( v61 <= (char)v62 && v61 )
      {
        v63 = (struct _Unwind_Exception *)__asan_report_store1(v13, v39, v62, v44);
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v5);
        v64 = v5->_M_dataplus._M_p;
        if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5->_M_dataplus._M_p )
          operator delete(v64);
        __asan_handle_no_return(v64, v39);
        _Unwind_Resume(v63);
      }
    }
    *(_BYTE *)v13 = 0;
    LODWORD(v13) = (_DWORD)v7;
LABEL_91:
    LODWORD(v7) = v13 + 1;
    if ( (int)v13 > 2 )
      break;
    v3 = v5->_M_string_length;
    v13 = v3 + 1;
    v54 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      goto LABEL_86;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5->_M_dataplus._M_p == &v5->_anon_0 )
      goto LABEL_88;
    v54 = &v5->_anon_0;
    if ( *(_BYTE *)(((unsigned __int64)&v5->_anon_0 >> 3) + 0x7FFF8000) )
      goto LABEL_87;
  }
LABEL_107:
  if ( v71 == (char *)v68 )
  {
    *(_QWORD *)((v68 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v68 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v68 = 1172321806LL;
    *(_QWORD *)((v68 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v68 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v5;
};

// Line 300: range 000000000C9FA1CC-000000000C9FA94C
std::string *__fastcall common::tools::StringUtils::base64Decode(std::string *retstr, const std::string *str)
{
  std::string::size_type v2; // r14
  unsigned __int64 v3; // rbx
  char *v5; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rsi
  int M_string_length; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  std::string::size_type i; // r12
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  char isBase64Char; // al
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r15
  char v17; // al
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  std::string::size_type v20; // rsi
  const std::string *v21; // rdi
  const std::string *v22; // rax
  char v24; // al
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // rdx
  int v28; // edx
  unsigned __int8 v29; // al
  int v30; // r15d
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdi
  char v34; // al
  __int64 v35; // rdx
  char v36; // al
  std::string::size_type v37; // rdx
  __int64 v38; // rdx
  int j; // eax
  __int64 v40; // rdx
  std::string::size_type k; // r13
  char v42; // al
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // rdx
  char *v46; // rsi
  int v47; // edx
  __int64 v48; // rcx
  unsigned __int8 v49; // al
  int v50; // r15d
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rax
  std::string::size_type v53; // rdi
  char v54; // al
  std::string::size_type v55; // rdx
  char v56; // al
  std::string::size_type v57; // rdx
  char v58; // al
  __int64 v59; // rdx
  struct _Unwind_Exception *v60; // rbp
  std::string::pointer v61; // rdi
  unsigned __int64 v62; // [rsp+8h] [rbp-D0h]
  int in_len; // [rsp+10h] [rbp-C8h]
  char v64; // [rsp+17h] [rbp-C1h]
  unsigned __int64 v65; // [rsp+18h] [rbp-C0h]
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v66; // [rsp+20h] [rbp-B8h]
  _DWORD *v67; // [rsp+28h] [rbp-B0h]
  char v68[152]; // [rsp+40h] [rbp-98h] BYREF

  v3 = (unsigned __int64)retstr;
  v65 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v65 = v11;
  }
  v5 = (char *)(v65 + 96);
  *(_QWORD *)v65 = 1102416563LL;
  *(_QWORD *)(v65 + 8) = "2 48 3 16 char_array_3:305 64 4 16 char_array_4:305";
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)common::tools::StringUtils::base64Decode;
  *(_QWORD *)(v65 + 16) = common::tools::StringUtils::base64Decode;
  v67 = (_DWORD *)(v65 >> 3);
  v67[536862720] = -235802127;
  v67[536862721] = -234622479;
  v67[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&str->_M_string_length);
    goto LABEL_11;
  }
  M_string_length = str->_M_string_length;
  p_anon_0 = &retstr->_anon_0;
  v66 = &retstr->_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8(retstr, p_anon_0);
    goto LABEL_12;
  }
  p_anon_0 = &retstr->_anon_0;
  retstr->_M_dataplus._M_p = (std::string::pointer)v66;
  retstr = (std::string *)((char *)retstr + 8);
  if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8(retstr, p_anon_0);
    goto LABEL_13;
  }
  *(_QWORD *)(v3 + 8) = 0LL;
  retstr = (std::string *)(v3 + 16);
  v8 = *(unsigned __int8 *)(((v3 + 16) >> 3) + 0x7FFF8000);
  v9 = ((_BYTE)v3 + 16) & 7;
  if ( (char)v8 <= (char)v9 && (_BYTE)v8 )
  {
LABEL_13:
    __asan_report_store1(retstr, p_anon_0, v8, v9);
LABEL_14:
    v12 = 0;
    goto LABEL_24;
  }
  *(_BYTE *)(v3 + 16) = 0;
  v2 = 0LL;
  LODWORD(i) = 0;
  while ( 1 )
  {
    v20 = (unsigned int)(M_string_length - 1);
    in_len = M_string_length - 1;
    if ( !M_string_length )
      break;
    v21 = str;
    if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(str);
LABEL_16:
      isBase64Char = __asan_report_load1(v21, v20, v13, v9);
      goto LABEL_17;
    }
    v22 = (const std::string *)&str->_M_dataplus._M_p[(int)v2];
    v21 = v22;
    v13 = *(unsigned __int8 *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
    v9 = (LOBYTE(str->_M_dataplus._M_p) + (_BYTE)v2) & 7;
    if ( (char)v13 <= (char)v9 && (_BYTE)v13 )
      goto LABEL_16;
    if ( LOBYTE(v22->_M_dataplus._M_p) == 61 )
      break;
    isBase64Char = common::tools::StringUtils::isBase64Char((const char)v22->_M_dataplus._M_p);
LABEL_17:
    if ( !isBase64Char )
      break;
    v15 = (unsigned __int64)str;
    if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(str);
LABEL_32:
      __asan_report_load1(v15, v20, v18, v9);
LABEL_33:
      __asan_report_store1(v15, v20, v19, v9);
      break;
    }
    v16 = (unsigned __int64)&str->_M_dataplus._M_p[(int)v2];
    v15 = v16;
    v17 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
    v18 = v16 & 7;
    if ( v17 <= (char)v18 && v17 )
      goto LABEL_32;
    v9 = *(unsigned __int8 *)v16;
    v12 = i + 1;
    v15 = (unsigned __int64)&v5[(int)i - 32];
    v19 = *(unsigned __int8 *)((v15 >> 3) + 0x7FFF8000);
    v20 = ((_BYTE)v5 + (_BYTE)i - 32) & 7;
    if ( (char)v19 <= (char)v20 && (_BYTE)v19 )
      goto LABEL_33;
    v5[(int)i - 32] = v9;
    v2 = (unsigned int)(v2 + 1);
    if ( (_DWORD)i == 3 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (int)i > 3 )
          goto LABEL_47;
        v25 = *(_BYTE *)(((unsigned __int64)&v5[(int)i - 32] >> 3) + 0x7FFF8000);
        v26 = ((_BYTE)v5 + (_BYTE)i - 32) & 7;
        if ( v25 <= (char)v26 && v25 )
        {
          v24 = __asan_report_load1(&v5[(int)i - 32], v20, v26, v9);
        }
        else
        {
          v20 = (unsigned int)v5[(int)i - 32];
          v24 = std::string::find(&common::tools::StringUtils::base64_chars[abi:cxx11], v20, 0LL);
          v27 = *(unsigned __int8 *)(((unsigned __int64)&v5[(int)i - 32] >> 3) + 0x7FFF8000);
          v9 = ((_BYTE)v5 + (_BYTE)i - 32) & 7;
          if ( (char)v27 <= (char)v9 && (_BYTE)v27 )
          {
            __asan_report_store1(&v5[(int)i - 32], v20, v27, v9);
LABEL_47:
            v28 = *(unsigned __int8 *)(v65 + 65);
            *(_BYTE *)(v65 + 48) = ((v28 >> 4) & 3) + 4 * *(_BYTE *)(v65 + 64);
            v9 = (unsigned int)(16 * v28);
            v29 = *(_BYTE *)(v65 + 66);
            *(_BYTE *)(v65 + 49) = 16 * v28 + (((int)v29 >> 2) & 0xF);
            *(_BYTE *)(v65 + 50) = *(_BYTE *)(v65 + 67) + (v29 << 6);
            v30 = 0;
            while ( 2 )
            {
              if ( v30 > 2 )
                goto LABEL_14;
              v33 = (unsigned __int64)&v5[v30 - 48];
              v34 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
              v35 = ((_BYTE)v5 + (_BYTE)v30 - 48) & 7;
              if ( v34 <= (char)v35 && v34 )
              {
                __asan_report_load1(v33, v20, v35, v9);
              }
              else
              {
                v64 = v5[v30 - 48];
                v33 = v3 + 8;
                if ( !*(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
                {
                  i = *(_QWORD *)(v3 + 8);
                  v62 = i + 1;
                  v33 = v3;
                  if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                  {
                    if ( *(_QWORD *)v3 != v3 + 16 )
                    {
                      v33 = v3 + 16;
                      if ( !*(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                      {
                        v31 = *(_QWORD *)(v3 + 16);
                        goto LABEL_63;
                      }
LABEL_51:
                      __asan_report_load8(v33);
                    }
                    v31 = 15LL;
LABEL_63:
                    if ( v62 > v31 )
                    {
                      v20 = i;
                      std::string::_M_mutate(v3, i, 0LL, 0LL, 1LL);
                    }
                    i += *(_QWORD *)v3;
                    v36 = *(_BYTE *)((i >> 3) + 0x7FFF8000);
                    v37 = i & 7;
                    if ( v36 <= (char)v37 && v36 )
                    {
                      v32 = __asan_report_store1(i, v20, v37, v9);
                    }
                    else
                    {
                      *(_BYTE *)i = v64;
                      *(_QWORD *)(v3 + 8) = v62;
                      v32 = *(_QWORD *)v3 + v62;
                      v38 = *(unsigned __int8 *)((v32 >> 3) + 0x7FFF8000);
                      v9 = v32 & 7;
                      if ( (char)v38 <= (char)v9 && (_BYTE)v38 )
                      {
                        __asan_report_store1(v32, v20, v38, v9);
                        goto LABEL_70;
                      }
                    }
                    *(_BYTE *)v32 = 0;
                    ++v30;
                    continue;
                  }
LABEL_50:
                  __asan_report_load8(v33);
                  goto LABEL_51;
                }
              }
              break;
            }
            __asan_report_load8(v33);
            goto LABEL_50;
          }
        }
        v5[(int)i - 32] = v24;
      }
    }
LABEL_24:
    LODWORD(i) = v12;
    M_string_length = in_len;
  }
  if ( (_DWORD)i )
  {
LABEL_70:
    for ( j = i; ; ++j )
    {
      if ( j > 3 )
        goto LABEL_76;
      v40 = *(unsigned __int8 *)(((unsigned __int64)&v5[j - 32] >> 3) + 0x7FFF8000);
      v9 = ((_BYTE)v5 + (_BYTE)j - 32) & 7;
      if ( (char)v40 <= (char)v9 )
      {
        if ( (_BYTE)v40 )
          break;
      }
      v5[j - 32] = 0;
    }
    __asan_report_store1(&v5[j - 32], v20, v40, v9);
LABEL_76:
    for ( k = 0LL; ; k = (unsigned int)(k + 1) )
    {
      if ( (int)k > 3 )
        goto LABEL_85;
      v43 = *(_BYTE *)(((unsigned __int64)&v5[(int)k - 32] >> 3) + 0x7FFF8000);
      v44 = ((_BYTE)v5 + (_BYTE)k - 32) & 7;
      if ( v43 <= (char)v44 && v43 )
      {
        v42 = __asan_report_load1(&v5[(int)k - 32], v20, v44, v9);
      }
      else
      {
        v2 = (int)k;
        v20 = (unsigned int)v5[(int)k - 32];
        v42 = std::string::find(&common::tools::StringUtils::base64_chars[abi:cxx11], v20, 0LL);
        v45 = *(unsigned __int8 *)(((unsigned __int64)&v5[(int)k - 32] >> 3) + 0x7FFF8000);
        v9 = ((_BYTE)v5 + (_BYTE)k - 32) & 7;
        if ( (char)v45 <= (char)v9 && (_BYTE)v45 )
        {
          __asan_report_store1(&v5[(int)k - 32], v20, v45, v9);
LABEL_85:
          v46 = (char *)(v65 + 96);
          v47 = *(unsigned __int8 *)(v65 + 65);
          *(_BYTE *)(v65 + 48) = ((v47 >> 4) & 3) + 4 * *(_BYTE *)(v65 + 64);
          v48 = (unsigned int)(16 * v47);
          v49 = *(_BYTE *)(v65 + 66);
          *(_BYTE *)(v65 + 49) = 16 * v47 + (((int)v49 >> 2) & 0xF);
          *(_BYTE *)(v65 + 50) = *(_BYTE *)(v65 + 67) + (v49 << 6);
          v50 = 0;
LABEL_98:
          if ( (int)i - 1 <= v50 )
            break;
          v51 = (unsigned __int64)&v5[v50 - 48];
          v58 = *(_BYTE *)((v51 >> 3) + 0x7FFF8000);
          v59 = ((_BYTE)v5 + (_BYTE)v50 - 48) & 7;
          if ( v58 <= (char)v59 && v58 )
          {
            __asan_report_load1(v51, v46, v59, v48);
LABEL_102:
            __asan_report_load8(v51);
            goto LABEL_103;
          }
          LOBYTE(in_len) = v5[v50 - 48];
          v51 = v3 + 8;
          if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
            goto LABEL_102;
          v2 = *(_QWORD *)(v3 + 8);
          k = v2 + 1;
          v51 = v3;
          if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
          {
            if ( *(_QWORD *)v3 != v3 + 16 )
            {
              v51 = v3 + 16;
              if ( !*(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
              {
                v52 = *(_QWORD *)(v3 + 16);
LABEL_91:
                if ( k > v52 )
                {
                  v46 = (char *)v2;
                  std::string::_M_mutate(v3, v2, 0LL, 0LL, 1LL);
                }
                v2 += *(_QWORD *)v3;
                v53 = v2;
                v54 = *(_BYTE *)((v2 >> 3) + 0x7FFF8000);
                v55 = v2 & 7;
                if ( v54 <= (char)v55 && v54 )
                {
                  __asan_report_store1(v2, v46, v55, v48);
LABEL_107:
                  v60 = (struct _Unwind_Exception *)__asan_report_store1(v53, v46, v57, v48);
                  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v3);
                  v61 = *(std::string::pointer *)v3;
                  if ( v66 != *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)v3 )
                    operator delete(v61);
                  __asan_handle_no_return(v61, v46);
                  _Unwind_Resume(v60);
                }
                *(_BYTE *)v2 = in_len;
                *(_QWORD *)(v3 + 8) = k;
                k += *(_QWORD *)v3;
                v53 = k;
                v56 = *(_BYTE *)((k >> 3) + 0x7FFF8000);
                v57 = k & 7;
                if ( v56 <= (char)v57 && v56 )
                  goto LABEL_107;
                *(_BYTE *)k = 0;
                ++v50;
                goto LABEL_98;
              }
LABEL_104:
              __asan_report_load8(v51);
            }
            v52 = 15LL;
            goto LABEL_91;
          }
LABEL_103:
          __asan_report_load8(v51);
          goto LABEL_104;
        }
      }
      v5[(int)k - 32] = v42;
    }
  }
  if ( v68 == (char *)v65 )
  {
    *(_QWORD *)((v65 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v65 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v65 = 1172321806LL;
    *(_QWORD *)((v65 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v65 >> 3) + 0x7FFF8008) = -168430091;
  }
  return (std::string *)v3;
};

// Line 348: range 000000000C9FA194-000000000C9FA1CB
bool __fastcall common::tools::StringUtils::isBase64Char(const char ch_0)
{
  if ( (unsigned __int8)(ch_0 - 97) <= 0x19u )
    return 1;
  if ( (unsigned __int8)(ch_0 - 65) <= 0x19u )
    return 1;
  if ( (unsigned __int8)(ch_0 - 48) <= 9u )
    return 1;
  return ch_0 == 47 || ch_0 == 43;
};

// Line 370: range 000000000C9FA952-000000000C9FA95F
uint8_t __fastcall common::tools::StringUtils::toHex(const uint8_t ch_0)
{
  if ( ch_0 <= 9u )
    return ch_0 + 48;
  else
    return ch_0 + 55;
};

// Line 374: range 000000000C9FACAC-000000000C9FACB9
uint8_t __fastcall common::tools::StringUtils::fromHex(const uint8_t ch_0)
{
  if ( ch_0 <= 0x40u )
    return ch_0 - 48;
  else
    return ch_0 - 55;
};

// Line 379: range 000000000C9FB0D6-000000000C9FB4E1
std::string *__fastcall common::tools::StringUtils::htmlEncode(std::string *retstr, const std::string *str)
{
  __int64 v2; // rcx
  std::string *v3; // rbx
  std::string::size_type i; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v5; // rbp
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  const std::string *v10; // r15
  unsigned __int64 v11; // r14
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v12; // rdi
  unsigned __int64 M_allocated_capacity; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdi
  char v16; // al
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  char v19; // al
  unsigned __int64 v20; // rdx
  std::string *v21; // rax
  char M_p; // r13
  std::string::pointer v23; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // [rsp+8h] [rbp-40h]

  v5 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr;
  p_anon_0 = &retstr->_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, str);
    goto LABEL_7;
  }
  v3 = (std::string *)str;
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  retstr = (std::string *)((char *)retstr + 8);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8(retstr, str);
LABEL_8:
    __asan_report_store1(retstr, str, v7, v2);
    goto LABEL_9;
  }
  *(&v5->_M_allocated_capacity + 1) = 0LL;
  retstr = (std::string *)&v5[1];
  v6 = *(_BYTE *)(((unsigned __int64)&v5[1] >> 3) + 0x7FFF8000);
  v7 = ((_BYTE)v5 + 16) & 7;
  if ( v6 <= (char)v7 && v6 )
    goto LABEL_8;
  v5[1]._M_local_buf[0] = 0;
  for ( i = 0LL; ; ++i )
  {
    retstr = (std::string *)&v3->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
    {
LABEL_9:
      __asan_report_load8(retstr);
LABEL_10:
      __asan_report_load8(retstr);
LABEL_11:
      __asan_report_load1(retstr, str, v8, v9);
LABEL_12:
      if ( 0x3FFFFFFFFFFFFFFFLL - *(&v5->_M_allocated_capacity + 1) <= 3 )
      {
        __asan_handle_no_return(retstr, str);
        std::__throw_length_error("basic_string::append");
      }
      str = (const std::string *)"&gt;";
      std::string::_M_append(v5, "&gt;");
      continue;
    }
    if ( i >= v3->_M_string_length )
      break;
    retstr = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      goto LABEL_10;
    v21 = (std::string *)&v3->_M_dataplus._M_p[i];
    retstr = v21;
    v8 = *(unsigned __int8 *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
    v9 = (LOBYTE(v3->_M_dataplus._M_p) + (_BYTE)i) & 7;
    if ( (char)v8 <= (char)v9 && (_BYTE)v8 )
      goto LABEL_11;
    M_p = (char)v21->_M_dataplus._M_p;
    switch ( LOBYTE(v21->_M_dataplus._M_p) )
    {
      case 9:
        if ( 0x3FFFFFFFFFFFFFFFLL - *(&v5->_M_allocated_capacity + 1) <= 5 )
        {
          __asan_handle_no_return(v21, str);
          std::__throw_length_error("basic_string::append");
        }
        goto LABEL_19;
      case 0xA:
        if ( 0x3FFFFFFFFFFFFFFFLL - *(&v5->_M_allocated_capacity + 1) <= 3 )
        {
          __asan_handle_no_return(v21, str);
          std::__throw_length_error("basic_string::append");
        }
        str = (const std::string *)"<br>";
        std::string::_M_append(v5, "<br>");
        continue;
      case 0x20:
        if ( 0x3FFFFFFFFFFFFFFFLL - *(&v5->_M_allocated_capacity + 1) <= 5 )
        {
          __asan_handle_no_return(v21, str);
          std::__throw_length_error("basic_string::append");
        }
LABEL_19:
        str = (const std::string *)"&nbsp;";
        std::string::_M_append(v5, "&nbsp;");
        continue;
      case 0x22:
        if ( 0x3FFFFFFFFFFFFFFFLL - *(&v5->_M_allocated_capacity + 1) <= 5 )
        {
          __asan_handle_no_return(v21, str);
          std::__throw_length_error("basic_string::append");
        }
        str = (const std::string *)"&quot;";
        std::string::_M_append(v5, "&quot;");
        continue;
      case 0x27:
        if ( 0x3FFFFFFFFFFFFFFFLL - *(&v5->_M_allocated_capacity + 1) <= 4 )
        {
          __asan_handle_no_return(v21, str);
          std::__throw_length_error("basic_string::append");
        }
        str = (const std::string *)"&#39;";
        std::string::_M_append(v5, "&#39;");
        continue;
      case 0x3C:
        if ( 0x3FFFFFFFFFFFFFFFLL - *(&v5->_M_allocated_capacity + 1) <= 3 )
        {
          __asan_handle_no_return(v21, str);
          std::__throw_length_error("basic_string::append");
        }
        str = (const std::string *)"&lt;";
        std::string::_M_append(v5, "&lt;");
        continue;
      case 0x3E:
        goto LABEL_12;
      default:
        v10 = (const std::string *)*(&v5->_M_allocated_capacity + 1);
        v11 = (unsigned __int64)&v10->_M_dataplus._M_p + 1;
        v12 = v5;
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v5);
        }
        else
        {
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5->_M_allocated_capacity == &v5[1] )
            goto LABEL_52;
          v12 = v5 + 1;
          if ( !*(_BYTE *)(((unsigned __int64)&v5[1] >> 3) + 0x7FFF8000) )
          {
            M_allocated_capacity = v5[1]._M_allocated_capacity;
            goto LABEL_36;
          }
        }
        __asan_report_load8(v12);
LABEL_52:
        M_allocated_capacity = 15LL;
LABEL_36:
        if ( v11 > M_allocated_capacity )
        {
          str = v10;
          std::string::_M_mutate(v5, v10, 0LL, 0LL, 1LL);
        }
        v14 = (unsigned __int64)v10 + v5->_M_allocated_capacity;
        v15 = v14;
        v16 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
        v17 = v14 & 7;
        if ( v16 <= (char)v17 && v16 )
        {
          __asan_report_store1(v14, str, v17, v9);
LABEL_54:
          __asan_report_store1(v15, str, v20, v9);
          v23 = (std::string::pointer)v5->_M_allocated_capacity;
          if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5->_M_allocated_capacity )
            operator delete(v23);
          __asan_handle_no_return(v23, str);
          _Unwind_Resume((struct _Unwind_Exception *)v3);
        }
        *(_BYTE *)v14 = M_p;
        *(&v5->_M_allocated_capacity + 1) = v11;
        v18 = v5->_M_allocated_capacity + v11;
        v15 = v18;
        v19 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
        v20 = v18 & 7;
        if ( v19 <= (char)v20 && v19 )
          goto LABEL_54;
        *(_BYTE *)v18 = 0;
        break;
    }
  }
  return (std::string *)v5;
};

// Line 432: range 000000000C9FB4E2-000000000C9FB56B
int32_t __fastcall common::tools::StringUtils::getStringHash(const std::string *str)
{
  std::string::pointer M_p; // rdi
  std::string::pointer v3; // rax
  std::string::size_type *p_M_string_length; // rcx
  std::string::size_type *v5; // rdi
  __int64 v6; // rdx
  char *v7; // rcx
  __int64 v8; // rsi

  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(str);
    goto LABEL_5;
  }
  M_p = str->_M_dataplus._M_p;
  v3 = M_p;
  p_M_string_length = &str->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_5:
    v5 = p_M_string_length;
    __asan_report_load8(p_M_string_length);
    goto LABEL_6;
  }
  v5 = (std::string::size_type *)&M_p[str->_M_string_length];
  v6 = 0LL;
  while ( 1 )
  {
    v7 = v3;
    if ( v5 == (std::string::size_type *)v3 )
      break;
    v8 = *(unsigned __int8 *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
    if ( (char)v8 <= ((unsigned __int8)v3 & 7) && (_BYTE)v8 )
    {
      __asan_report_load1(v3, v8, v6, v3);
      return v6;
    }
LABEL_6:
    v6 = (unsigned int)(*v7 + 131 * v6);
    v3 = v7 + 1;
  }
  return v6;
};

// Line 445: range 000000000C9FB56C-000000000C9FB697
void __fastcall common::tools::StringUtils::replace(std::string *str, const std::string *from, const std::string *to)
{
  std::string::size_type M_string_length; // rbx
  std::string *v4; // r12
  unsigned __int64 v5; // r13
  const std::string *p_M_string_length; // rdi
  std::string::size_type v8; // rax
  std::string::size_type *v9; // rdi
  std::string::size_type v10; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&from->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&from->_M_string_length);
  }
  else
  {
    M_string_length = (std::string::size_type)from;
    v4 = (std::string *)to;
    if ( !from->_M_string_length )
      return;
  }
  if ( *(_BYTE *)(((unsigned __int64)from >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = from;
    __asan_report_load8(from);
    goto LABEL_16;
  }
  from = (const std::string *)from->_M_dataplus._M_p;
  v5 = std::string::find(str, from, 0LL);
  if ( v5 != -1LL )
  {
    p_M_string_length = (const std::string *)(M_string_length + 8);
    if ( !*(_BYTE *)(((M_string_length + 8) >> 3) + 0x7FFF8000) )
    {
      v8 = *(_QWORD *)(M_string_length + 8);
      p_M_string_length = (const std::string *)&v4->_M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)&v4->_M_string_length >> 3) + 0x7FFF8000) )
      {
        if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          v9 = &str->_M_string_length;
          if ( !*(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
          {
            M_string_length = str->_M_string_length;
            v10 = M_string_length - v5;
            if ( v8 < M_string_length - v5 )
              v10 = v8;
            if ( v5 <= M_string_length )
            {
              std::string::_M_replace(str, v5, v10, v4->_M_dataplus._M_p, v4->_M_string_length);
              return;
            }
LABEL_20:
            __asan_handle_no_return(v9, from);
            std::__throw_out_of_range_fmt(
              "%s: __pos (which is %zu) > this->size() (which is %zu)",
              "basic_string::replace",
              v5,
              M_string_length);
          }
LABEL_19:
          __asan_report_load8(v9);
          goto LABEL_20;
        }
LABEL_18:
        v9 = (std::string::size_type *)v4;
        __asan_report_load8(v4);
        goto LABEL_19;
      }
LABEL_17:
      __asan_report_load8(p_M_string_length);
      goto LABEL_18;
    }
LABEL_16:
    __asan_report_load8(p_M_string_length);
    goto LABEL_17;
  }
};

// Line 460: range 000000000C9FB69C-000000000C9FB827
void __fastcall common::tools::StringUtils::replaceAll(
        std::string *str,
        const std::string *from,
        const std::string *to)
{
  const std::string *v3; // rbx
  std::string *v4; // rbp
  std::string *v5; // r12
  std::string::size_type v6; // r14
  std::string::size_type *p_M_string_length; // rdi
  const std::string *i; // rdx
  std::string::size_type v10; // rdx
  std::string::pointer M_p; // rcx
  std::string::size_type M_string_length; // r8

  p_M_string_length = &from->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&from->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
    goto LABEL_5;
  }
  v4 = (std::string *)from;
  v5 = (std::string *)to;
  if ( from->_M_string_length )
  {
    for ( i = 0LL; ; i = v3 )
    {
      p_M_string_length = &v4->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&v4->_M_string_length >> 3) + 0x7FFF8000) )
        break;
      p_M_string_length = (std::string::size_type *)v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        goto LABEL_6;
      from = (const std::string *)v4->_M_dataplus._M_p;
      v3 = (const std::string *)std::string::find(str, v4->_M_dataplus._M_p, i);
      if ( v3 == (const std::string *)-1LL )
        return;
      p_M_string_length = &v4->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&v4->_M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_7;
      p_M_string_length = &v5->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&v5->_M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_8;
      M_string_length = v5->_M_string_length;
      p_M_string_length = (std::string::size_type *)v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        goto LABEL_9;
      M_p = v5->_M_dataplus._M_p;
      p_M_string_length = &str->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_10;
      v6 = str->_M_string_length;
      v10 = v6 - (_QWORD)v3;
      if ( v4->_M_string_length < v6 - (unsigned __int64)v3 )
        v10 = v4->_M_string_length;
LABEL_11:
      if ( (unsigned __int64)v3 > v6 )
      {
        __asan_handle_no_return(p_M_string_length, from);
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::replace",
          (size_t)v3,
          v6);
      }
      from = v3;
      std::string::_M_replace(str, v3, v10, M_p, M_string_length);
      if ( *(_BYTE *)(((unsigned __int64)&v5->_M_string_length >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&v5->_M_string_length);
        return;
      }
      v3 = (const std::string *)((char *)v3 + v5->_M_string_length);
    }
LABEL_5:
    __asan_report_load8(p_M_string_length);
LABEL_6:
    __asan_report_load8(p_M_string_length);
LABEL_7:
    __asan_report_load8(p_M_string_length);
LABEL_8:
    __asan_report_load8(p_M_string_length);
LABEL_9:
    __asan_report_load8(p_M_string_length);
LABEL_10:
    __asan_report_load8(p_M_string_length);
    goto LABEL_11;
  }
};

// Line 534: range 000000000C9FE9AE-000000000C9FEE0A
int32_t __fastcall common::tools::StringUtils::split(
        const std::string *str,
        const std::string *sep_1,
        const std::string *sep_2,
        const uint32_t detail_num,
        std::vector<std::string> *split_list,
        bool auto_trim)
{
  std::_Vector_base<std::string>::pointer i; // r12
  std::_Vector_base<std::string>::pointer M_finish; // r15
  _DWORD *v9; // r14
  std::string::size_type *p_M_string_length; // rdi
  std::vector<std::string> *p_M_finish; // rdi
  __int64 v12; // rax
  int32_t v13; // eax
  unsigned __int64 j; // r12
  __int64 v15; // rdi
  void **v16; // rbp
  void **v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  void **v20; // rbp
  void **v21; // rbx
  void *v22; // rdi
  void *v23; // rdi
  std::forward_iterator_tag v25; // [rsp+0h] [rbp-118h]
  int32_t strb; // [rsp+10h] [rbp-108h]
  unsigned __int64 v29; // [rsp+18h] [rbp-100h]
  std::string *M_start; // [rsp+30h] [rbp-E8h]
  char v33[216]; // [rsp+40h] [rbp-D8h] BYREF

  v29 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(160LL);
    if ( v12 )
      v29 = v12;
  }
  *(_QWORD *)v29 = 1102416563LL;
  *(_QWORD *)(v29 + 8) = "2 32 24 14 sep_1_list:548 96 24 14 sep_2_list:549";
  *(_QWORD *)(v29 + 16) = common::tools::StringUtils::split;
  v9 = (_DWORD *)(v29 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234881024;
  v9[536862722] = -218959118;
  v9[536862723] = -218103808;
  v9[536862724] = -202116109;
  p_M_string_length = &str->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
LABEL_15:
    __asan_report_load8(p_M_string_length);
LABEL_16:
    __asan_report_load8(p_M_string_length);
LABEL_17:
    p_M_finish = split_list;
    __asan_report_load8(split_list);
    goto LABEL_18;
  }
  if ( !str->_M_string_length )
  {
    strb = 0;
    goto LABEL_63;
  }
  p_M_string_length = &sep_1->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&sep_1->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_15;
  if ( !sep_1->_M_string_length )
  {
    strb = -1;
    goto LABEL_63;
  }
  p_M_string_length = &sep_2->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&sep_2->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  if ( !sep_2->_M_string_length )
  {
    strb = -1;
    goto LABEL_63;
  }
  if ( *(_BYTE *)(((unsigned __int64)split_list >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  M_start = split_list->_M_impl._M_start;
  p_M_finish = (std::vector<std::string> *)&split_list->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&split_list->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_M_finish);
    goto LABEL_19;
  }
  M_finish = split_list->_M_impl._M_finish;
  if ( M_start == M_finish )
    goto LABEL_28;
  for ( i = split_list->_M_impl._M_start; M_finish != i; ++i )
  {
    p_M_finish = (std::vector<std::string> *)i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    {
LABEL_19:
      __asan_report_load8(p_M_finish);
LABEL_20:
      operator delete(p_M_finish);
      continue;
    }
    p_M_finish = (std::vector<std::string> *)i->_M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)i->_M_dataplus._M_p != &i->_anon_0 )
      goto LABEL_20;
  }
  if ( *(_BYTE *)(((unsigned __int64)&split_list->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    v13 = __asan_report_store8(&split_list->_M_impl._M_finish, common::tools::StringUtils::split);
  }
  else
  {
    split_list->_M_impl._M_finish = M_start;
LABEL_28:
    *(_QWORD *)(v29 + 32) = 0LL;
    *(_QWORD *)(v29 + 40) = 0LL;
    *(_QWORD *)(v29 + 48) = 0LL;
    *(_QWORD *)(v29 + 96) = 0LL;
    *(_QWORD *)(v29 + 104) = 0LL;
    *(_QWORD *)(v29 + 112) = 0LL;
    LOBYTE(M_finish) = auto_trim;
    v13 = common::tools::StringUtils::split(str, sep_1, (std::vector<std::string> *)(v29 + 32), auto_trim);
  }
  strb = v13;
  if ( v13 )
  {
    strb = -1;
  }
  else
  {
    for ( j = 0LL; ; ++j )
    {
      v15 = *(_QWORD *)(v29 + 32);
      if ( j >= (*(_QWORD *)(v29 + 40) - v15) >> 5 )
        break;
      if ( common::tools::StringUtils::split(
             (const std::string *)(32 * j + v15),
             sep_2,
             (std::vector<std::string> *)(v29 + 96),
             (bool)M_finish) )
      {
        strb = -1;
        break;
      }
      if ( detail_num != (__int64)(*(_QWORD *)(v29 + 104) - *(_QWORD *)(v29 + 96)) >> 5 )
      {
        strb = -1;
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)&split_list->_M_impl._M_finish >> 3) + 0x7FFF8000) )
        __asan_report_load8(&split_list->_M_impl._M_finish);
      else
        std::vector<std::string>::_M_range_insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string>>>(
          split_list,
          (std::vector<std::string>::iterator)split_list->_M_impl._M_finish,
          *(__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v29 + 96),
          *(__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v29 + 104),
          v25);
    }
  }
  v16 = *(void ***)(v29 + 104);
  v17 = *(void ***)(v29 + 96);
  while ( 2 )
  {
    if ( v16 != v17 )
    {
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v17);
      }
      else
      {
        v18 = *v17;
        if ( *v17 == v17 + 2 )
          goto LABEL_46;
      }
      operator delete(v18);
LABEL_46:
      v17 += 4;
      continue;
    }
    break;
  }
  v19 = *(void **)(v29 + 96);
  if ( v19 )
    operator delete(v19);
  v20 = *(void ***)(v29 + 40);
  v21 = *(void ***)(v29 + 32);
  while ( 2 )
  {
    if ( v20 != v21 )
    {
      v22 = v21;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v21);
      }
      else
      {
        v22 = *v21;
        if ( *v21 == v21 + 2 )
          goto LABEL_56;
      }
      operator delete(v22);
LABEL_56:
      v21 += 4;
      continue;
    }
    break;
  }
  v23 = *(void **)(v29 + 32);
  if ( v23 )
    operator delete(v23);
LABEL_63:
  if ( v33 == (char *)v29 )
  {
    *(_QWORD *)((v29 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v29 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v29 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v29 = 1172321806LL;
    *(_QWORD *)((v29 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v29 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v29 >> 3) + 0x7FFF8010) = -168430091;
  }
  return strb;
};

// Line 575: range 000000000C9FE3DC-000000000C9FE3F6
int32_t __fastcall common::tools::StringUtils::splitToList(
        const std::string *str,
        const std::string *sep,
        std::vector<std::string> *split_list,
        bool auto_trim)
{
  int32_t result; // eax

  result = common::tools::StringUtils::split(str, sep, split_list, auto_trim);
  if ( result )
    return -1;
  return result;
};

// Line 585: range 000000000C9FEE10-000000000C9FF002
int32_t __fastcall common::tools::StringUtils::splitToStringMap(
        const std::string *str,
        const std::string *sep_1,
        const std::string *sep_2,
        std::map<std::string,std::string> *split_map,
        bool auto_trim)
{
  unsigned __int64 v7; // r13
  _DWORD *v8; // r15
  int32_t v9; // eax
  std::string *v10; // rcx
  std::string *v11; // r8
  __int64 v12; // rax
  unsigned int i; // ebx
  __int64 v14; // rdx
  std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::string > >,bool> v15; // rax
  void **v16; // rbp
  void **j; // rbx
  void *v18; // rdi
  int32_t v20; // [rsp+0h] [rbp-B8h]
  char v22[152]; // [rsp+20h] [rbp-98h] BYREF

  v7 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_1(96LL);
    if ( v12 )
      v7 = v12;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 24 18 tmp_split_list:586";
  *(_QWORD *)(v7 + 16) = common::tools::StringUtils::splitToStringMap;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218103808;
  v8[536862722] = -202116109;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  v9 = common::tools::StringUtils::split(str, sep_1, sep_2, 2u, (std::vector<std::string> *)(v7 + 32), auto_trim);
  v20 = v9;
  if ( v9 )
  {
    v20 = -1;
  }
  else
  {
    for ( i = 0; ; i += 2 )
    {
      v14 = *(_QWORD *)(v7 + 32);
      if ( i >= (unsigned __int64)((*(_QWORD *)(v7 + 40) - v14) >> 5) )
        break;
      v15 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_unique<std::string&,std::string&>(
              &split_map->_M_t,
              (std::string *)(v14 + 32LL * i),
              (std::string *)(32LL * (i + 1) + v14),
              v10,
              v11);
      if ( !v15.second )
      {
        v20 = -1;
        break;
      }
    }
  }
  v16 = *(void ***)(v7 + 40);
  for ( j = *(void ***)(v7 + 32); v16 != j; j += 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)j >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(j);
    }
    else if ( *j != j + 2 )
    {
      operator delete(*j);
    }
  }
  v18 = *(void **)(v7 + 32);
  if ( v18 )
    operator delete(v18);
  if ( v22 == (char *)v7 )
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
  return v20;
};

// Line 604: range 000000000C9FE3F8-000000000C9FE9A9
int32_t __fastcall common::tools::StringUtils::splitToListBySeps(
        const std::string *str,
        const std::vector<std::string> *sep_vec,
        std::vector<std::string> *split_list,
        bool auto_trim)
{
  const std::string *v5; // r13
  int32_t v6; // eax
  __int64 v7; // rax
  const std::vector<std::string> *p_M_finish; // rdi
  const std::string *v9; // rax
  int32_t v10; // eax
  std::string *v11; // rdx
  std::string *v12; // rsi
  std::string *v13; // r15
  void **v14; // rbp
  void **k; // rbx
  void *v16; // rdi
  void **v17; // rbp
  void **v18; // rbx
  void *v19; // rdi
  void *v20; // rdi
  void **v21; // rbp
  void **m; // rbx
  void **v23; // r15
  void **i; // rbx
  void *v25; // rdi
  void *v26; // rdi
  const std::string *j; // rbx
  void *v28; // rdi
  std::_Vector_base<std::string>::pointer M_start; // rcx
  std::vector<std::string> *p_M_end_of_storage; // rdi
  std::_Vector_base<std::string>::pointer M_finish; // rdx
  std::_Vector_base<std::string>::pointer M_end_of_storage; // rax
  void *v33; // rdi
  const std::string *v35; // [rsp+8h] [rbp-150h]
  bool v36; // [rsp+14h] [rbp-144h]
  unsigned __int64 v37; // [rsp+18h] [rbp-140h]
  int32_t v38; // [rsp+20h] [rbp-138h]
  uint32_t idx; // [rsp+24h] [rbp-134h]
  _DWORD *v40; // [rsp+28h] [rbp-130h]
  char v42[280]; // [rsp+40h] [rbp-118h] BYREF

  v5 = (const std::string *)auto_trim;
  v37 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(224LL);
    if ( v7 )
      v37 = v7;
  }
  *(_QWORD *)v37 = 1102416563LL;
  *(_QWORD *)(v37 + 8) = "3 32 24 21 result_split_list:609 96 24 19 temp_split_list:616 160 24 20 inner_split_list:620";
  *(_QWORD *)(v37 + 16) = common::tools::StringUtils::splitToListBySeps;
  v40 = (_DWORD *)(v37 >> 3);
  v40[536862720] = -235802127;
  v40[536862721] = -234881024;
  v40[536862722] = -218959118;
  v40[536862723] = -234881024;
  v40[536862724] = -218959118;
  v40[536862725] = -218103808;
  v40[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&sep_vec->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&sep_vec->_M_impl._M_finish);
  }
  else if ( !*(_BYTE *)(((unsigned __int64)sep_vec >> 3) + 0x7FFF8000) )
  {
    if ( sep_vec->_M_impl._M_start == sep_vec->_M_impl._M_finish )
    {
      v38 = -1;
      goto LABEL_84;
    }
    *(_QWORD *)(v37 + 32) = 0LL;
    *(_QWORD *)(v37 + 40) = 0LL;
    *(_QWORD *)(v37 + 48) = 0LL;
    v36 = (char)v5;
    v6 = common::tools::StringUtils::split(
           str,
           sep_vec->_M_impl._M_start,
           (std::vector<std::string> *)(v37 + 32),
           (bool)v5);
    goto LABEL_10;
  }
  v6 = __asan_report_load8(sep_vec);
LABEL_10:
  v38 = v6;
  if ( v6 )
  {
LABEL_75:
    v38 = -1;
    goto LABEL_41;
  }
  idx = 1;
LABEL_12:
  p_M_finish = (const std::vector<std::string> *)&sep_vec->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&sep_vec->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
  }
  else
  {
    p_M_finish = sep_vec;
    if ( !*(_BYTE *)(((unsigned __int64)sep_vec >> 3) + 0x7FFF8000) )
    {
      if ( idx < (unsigned __int64)(sep_vec->_M_impl._M_finish - sep_vec->_M_impl._M_start) )
      {
        v9 = *(const std::string **)(v37 + 32);
        *(_QWORD *)(v37 + 96) = v9;
        v35 = *(const std::string **)(v37 + 40);
        *(_QWORD *)(v37 + 104) = v35;
        *(_QWORD *)(v37 + 112) = *(_QWORD *)(v37 + 48);
        *(_QWORD *)(v37 + 32) = 0LL;
        *(_QWORD *)(v37 + 40) = 0LL;
        *(_QWORD *)(v37 + 48) = 0LL;
        goto LABEL_55;
      }
      if ( *(_BYTE *)(((unsigned __int64)split_list >> 3) + 0x7FFF8000) )
      {
        p_M_end_of_storage = split_list;
        __asan_report_load8(split_list);
      }
      else
      {
        M_start = split_list->_M_impl._M_start;
        p_M_end_of_storage = (std::vector<std::string> *)&split_list->_M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&split_list->_M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          M_finish = split_list->_M_impl._M_finish;
          p_M_end_of_storage = (std::vector<std::string> *)&split_list->_M_impl._M_end_of_storage;
          if ( !*(_BYTE *)(((unsigned __int64)&split_list->_M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
          {
            M_end_of_storage = split_list->_M_impl._M_end_of_storage;
            split_list->_M_impl._M_start = *(std::_Vector_base<std::string>::pointer *)(v37 + 32);
            split_list->_M_impl._M_finish = *(std::_Vector_base<std::string>::pointer *)(v37 + 40);
            split_list->_M_impl._M_end_of_storage = *(std::_Vector_base<std::string>::pointer *)(v37 + 48);
            *(_QWORD *)(v37 + 32) = M_start;
            *(_QWORD *)(v37 + 40) = M_finish;
            *(_QWORD *)(v37 + 48) = M_end_of_storage;
            goto LABEL_41;
          }
          goto LABEL_74;
        }
      }
      __asan_report_load8(p_M_end_of_storage);
LABEL_74:
      __asan_report_load8(p_M_end_of_storage);
      goto LABEL_75;
    }
  }
  __asan_report_load8(p_M_finish);
LABEL_18:
  v10 = __asan_report_load8(p_M_finish);
LABEL_19:
  if ( !v10 )
  {
    v12 = *(std::string **)(v37 + 160);
    v13 = *(std::string **)(v37 + 168);
    while ( v13 != v12 )
      std::vector<std::string>::emplace_back<std::string>((std::vector<std::string> *const)(v37 + 32), v12++, v11);
    v23 = *(void ***)(v37 + 168);
    for ( i = *(void ***)(v37 + 160); ; i += 4 )
    {
      if ( v23 == i )
      {
        v26 = *(void **)(v37 + 160);
        if ( v26 )
          operator delete(v26);
        v9 = v5 + 1;
LABEL_55:
        v5 = v9;
        if ( v35 != v9 )
        {
          *(_QWORD *)(v37 + 160) = 0LL;
          *(_QWORD *)(v37 + 168) = 0LL;
          *(_QWORD *)(v37 + 176) = 0LL;
          p_M_finish = sep_vec;
          if ( *(_BYTE *)(((unsigned __int64)sep_vec >> 3) + 0x7FFF8000) )
            goto LABEL_18;
          v10 = common::tools::StringUtils::split(
                  v9,
                  &sep_vec->_M_impl._M_start[idx],
                  (std::vector<std::string> *)(v37 + 160),
                  v36);
          goto LABEL_19;
        }
        v5 = *(const std::string **)(v37 + 104);
        for ( j = *(const std::string **)(v37 + 96); v5 != j; ++j )
        {
          if ( *(_BYTE *)(((unsigned __int64)j >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(j);
          }
          else if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)j->_M_dataplus._M_p != &j->_anon_0 )
          {
            operator delete(j->_M_dataplus._M_p);
          }
        }
        v28 = *(void **)(v37 + 96);
        if ( v28 )
          operator delete(v28);
        ++idx;
        goto LABEL_12;
      }
      v25 = i;
      if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
        break;
      v25 = *i;
      if ( *i != i + 2 )
        goto LABEL_46;
LABEL_47:
      ;
    }
    __asan_report_load8(i);
LABEL_46:
    operator delete(v25);
    goto LABEL_47;
  }
  v14 = *(void ***)(v37 + 168);
  for ( k = *(void ***)(v37 + 160); v14 != k; k += 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(k);
    }
    else if ( *k != k + 2 )
    {
      operator delete(*k);
    }
  }
  v16 = *(void **)(v37 + 160);
  if ( v16 )
    operator delete(v16);
  v17 = *(void ***)(v37 + 104);
  v18 = *(void ***)(v37 + 96);
  while ( 2 )
  {
    if ( v17 != v18 )
    {
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v18);
      }
      else
      {
        v19 = *v18;
        if ( *v18 == v18 + 2 )
          goto LABEL_33;
      }
      operator delete(v19);
LABEL_33:
      v18 += 4;
      continue;
    }
    break;
  }
  v20 = *(void **)(v37 + 96);
  if ( v20 )
    operator delete(v20);
  v38 = -1;
LABEL_41:
  v21 = *(void ***)(v37 + 40);
  for ( m = *(void ***)(v37 + 32); v21 != m; m += 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(m);
    }
    else if ( *m != m + 2 )
    {
      operator delete(*m);
    }
  }
  v33 = *(void **)(v37 + 32);
  if ( v33 )
    operator delete(v33);
LABEL_84:
  if ( v42 == (char *)v37 )
  {
    *(_QWORD *)((v37 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v37 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v37 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v37 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v37 = 1172321806LL;
    *(_QWORD *)((v37 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v37 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v37 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v37 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v38;
};

// Line 667: range 000000000C9FB828-000000000C9FB870
int32_t __fastcall common::tools::StringUtils::getUtf8Len(uint8_t ch_0)
{
  if ( !ch_0 )
    return 0;
  if ( (ch_0 & 0x80u) == 0 )
    return 1;
  if ( ch_0 <= 0xDFu )
    return 2;
  if ( ch_0 <= 0xEFu )
    return 3;
  if ( ch_0 <= 0xF7u )
    return 4;
  if ( ch_0 <= 0xF9u )
    return 5;
  return 6;
};

// Line 695: range 000000000C9FB872-000000000C9FBA23
bool __fastcall common::tools::StringUtils::removeBOM(std::ifstream *s)
{
  unsigned __int64 v2; // r12
  _BYTE *v3; // r13
  unsigned __int64 v4; // r14
  int i; // ebp
  __int64 v6; // rax
  int v7; // eax
  unsigned __int64 v8; // rdi
  char *v9; // rsi
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // bp
  _BYTE v15[120]; // [rsp+0h] [rbp-78h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v2 = v6;
  }
  v3 = (_BYTE *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 3 7 bom:696";
  *(_QWORD *)(v2 + 16) = common::tools::StringUtils::removeBOM;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116349;
  *(_WORD *)(v2 + 32) = -17425;
  *(_BYTE *)(v2 + 34) = -65;
  for ( i = 0; ; ++i )
  {
    if ( i > 2 )
      goto LABEL_19;
    v8 = (unsigned __int64)s;
    if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(s);
LABEL_6:
      __asan_report_load8(v8);
LABEL_7:
      v7 = __asan_report_load4(v8);
      goto LABEL_8;
    }
    v8 = *(_QWORD *)s - 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    v9 = (char *)s + *(_QWORD *)(*(_QWORD *)s - 24LL);
    v8 = (unsigned __int64)(v9 + 32);
    v10 = *(_BYTE *)(((unsigned __int64)(v9 + 32) >> 3) + 0x7FFF8000);
    if ( v10 && v10 <= 3 )
      goto LABEL_7;
    if ( (v9[32] & 2) != 0 )
    {
      v13 = 0;
      goto LABEL_20;
    }
    v7 = std::istream::get(s);
    v11 = *(unsigned __int8 *)(((unsigned __int64)&v3[i - 32] >> 3) + 0x7FFF8000);
    v12 = ((_BYTE)v3 + (_BYTE)i - 32) & 7;
    if ( (char)v11 <= (char)v12 && (_BYTE)v11 )
    {
      __asan_report_load1(&v3[i - 32], v9, v11, v12);
LABEL_19:
      v13 = 1;
      goto LABEL_20;
    }
LABEL_8:
    if ( (unsigned __int8)v3[i - 32] != v7 )
      break;
  }
  v13 = 0;
LABEL_20:
  if ( !v13 )
    std::istream::seekg(s, 0LL, 0LL);
  if ( v15 == (_BYTE *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v13;
};

// Line 727: range 000000000C9FBA26-000000000C9FC0B9
std::vector<unsigned char> *__fastcall common::tools::StringUtils::calcBinaryMD5(
        std::vector<unsigned char> *retstr,
        const std::string *input)
{
  std::string::size_type M_string_length; // r14
  std::vector<unsigned char> *v3; // rbp
  char *M_p; // r15
  unsigned __int64 v5; // r12
  char *v6; // rbx
  _DWORD *v7; // r13
  unsigned int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  size_t v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r14
  unsigned int v18; // ecx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 *v22; // rcx
  std::vector<unsigned char> *p_M_end_of_storage; // rdi
  __int64 v24; // rsi
  unsigned __int64 p_M_finish; // rdi
  struct _Unwind_Exception *v27; // rbx
  std::_Vector_base<unsigned char>::pointer M_start; // rdi
  __int64 v29; // [rsp+10h] [rbp-148h]
  size_t n; // [rsp+18h] [rbp-140h]
  char v31[312]; // [rsp+20h] [rbp-138h] BYREF

  v3 = retstr;
  M_p = (char *)input;
  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v21 = __asan_stack_malloc_2(256LL);
    if ( v21 )
      v5 = v21;
  }
  v6 = (char *)(v5 + 256);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 152 13 boost_md5:728";
  *(_QWORD *)(v5 + 16) = common::tools::StringUtils::calcBinaryMD5;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862725] = -218103808;
  v7[536862726] = -202116109;
  v7[536862727] = -202116109;
  *(_DWORD *)(v5 + 40) = 1732584193;
  *(_DWORD *)(v5 + 44) = -271733879;
  *(_DWORD *)(v5 + 48) = -1732584194;
  *(_DWORD *)(v5 + 52) = (_DWORD)&loc_10325476;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&input->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&input->_M_string_length);
    goto LABEL_22;
  }
  M_string_length = input->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)input >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(input);
    goto LABEL_23;
  }
  M_p = input->_M_dataplus._M_p;
  v8 = *(_DWORD *)(v5 + 32);
  v9 = (v8 + M_string_length) & 0x1FFFFFFF;
  *(_DWORD *)(v5 + 32) = v9;
  if ( v8 > v9 )
    ++*(_DWORD *)(v5 + 36);
  *(_DWORD *)(v5 + 36) += M_string_length >> 29;
  v10 = v8 & 0x3F;
  v29 = v10;
  if ( (v8 & 0x3F) == 0 )
    goto LABEL_9;
  n = 64 - v10;
  if ( M_string_length < 64 - v10 )
  {
LABEL_23:
    memcpy(&v6[v10 - 200], M_p, M_string_length);
    goto LABEL_12;
  }
  memcpy(&v6[v10 - 200], M_p, n);
  M_p += n;
  M_string_length = v29 + M_string_length - 64;
  boost::uuids::detail::md5::body(
    (boost::uuids::detail::md5 *const)(v5 + 32),
    (boost::uuids::detail::md5::MD5_CTX *)(v5 + 32),
    (const void *)(v5 + 56),
    0x40uLL);
LABEL_9:
  if ( M_string_length > 0x3F )
  {
    M_p = (char *)boost::uuids::detail::md5::body(
                    (boost::uuids::detail::md5 *const)(v5 + 32),
                    (boost::uuids::detail::md5::MD5_CTX *)(v5 + 32),
                    M_p,
                    M_string_length & 0xFFFFFFFFFFFFFFC0LL);
    M_string_length &= 0x3Fu;
  }
  memcpy((void *)(v5 + 56), M_p, M_string_length);
LABEL_12:
  v11 = *(_DWORD *)(v5 + 32) & 0x3F;
  v12 = v11 + 1;
  v13 = *(unsigned __int8 *)(((unsigned __int64)&v6[v11 - 200] >> 3) + 0x7FFF8000);
  v14 = ((*(_BYTE *)(v5 + 32) & 0x3F) + (_BYTE)v5 + 56) & 7;
  if ( (char)v13 <= (char)v14 && (_BYTE)v13 )
  {
    __asan_report_store1(&v6[v11 - 200], v14, v13, v12);
  }
  else
  {
    v6[v11 - 200] = 0x80;
    v15 = 64 - v12;
    if ( (unsigned __int64)(64 - v12) > 7 )
      goto LABEL_15;
  }
  memset(&v6[v12 - 200], 0, v15);
  boost::uuids::detail::md5::body(
    (boost::uuids::detail::md5 *const)(v5 + 32),
    (boost::uuids::detail::md5::MD5_CTX *)(v5 + 32),
    (const void *)(v5 + 56),
    0x40uLL);
  v15 = 64LL;
  v12 = 0LL;
LABEL_15:
  memset(&v6[v12 - 200], 0, v15 - 8);
  v16 = 8 * *(_DWORD *)(v5 + 32);
  *(_DWORD *)(v5 + 32) = v16;
  *(_DWORD *)(v5 + 112) = v16;
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(v5 + 36);
  boost::uuids::detail::md5::body(
    (boost::uuids::detail::md5 *const)(v5 + 32),
    (boost::uuids::detail::md5::MD5_CTX *)(v5 + 32),
    (const void *)(v5 + 56),
    0x40uLL);
  v17 = ((unsigned __int64)HIBYTE(*((_DWORD *)v6 - 53)) << 56) | ((unsigned __int64)(unsigned __int8)BYTE2(*((_DWORD *)v6 - 53)) << 48) & 0xFFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned __int8)BYTE1(*((_DWORD *)v6 - 53)) << 40) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned __int8)*((_DWORD *)v6 - 53) << 32) & 0xFFFFFFFFFFLL | ((unsigned __int8)HIBYTE(*((_DWORD *)v6 - 54)) << 24) | ((unsigned __int64)(unsigned __int8)BYTE2(*((_DWORD *)v6 - 54)) << 16) & 0xFFFFFF | (unsigned __int16)*((_DWORD *)v6 - 54);
  v18 = *(_DWORD *)(v5 + 52);
  v19 = ((unsigned __int64)HIBYTE(v18) << 56) | ((unsigned __int64)BYTE2(v18) << 48) & 0xFFFFFFFFFFFFFFLL | ((unsigned __int64)BYTE1(v18) << 40) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned __int8)v18 << 32) & 0xFFFFFFFFFFLL | ((unsigned __int8)HIBYTE(*(_DWORD *)(v5 + 48)) << 24) | ((unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(v5 + 48)) << 16) & 0xFFFFFF | (unsigned __int16)*(_DWORD *)(v5 + 48);
  memset((void *)(v5 + 32), 0, 0x98uLL);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, 0LL);
    goto LABEL_27;
  }
  retstr->_M_impl._M_start = 0LL;
  retstr = (std::vector<unsigned char> *)((char *)retstr + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8(retstr, 0LL);
    goto LABEL_28;
  }
  v3->_M_impl._M_finish = 0LL;
  retstr = (std::vector<unsigned char> *)&v3->_M_impl._M_end_of_storage;
  if ( !*(_BYTE *)(((unsigned __int64)&v3->_M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
    v3->_M_impl._M_end_of_storage = 0LL;
    v20 = operator new(0x10uLL);
    goto LABEL_29;
  }
LABEL_28:
  v20 = __asan_report_store8(retstr, 0LL);
LABEL_29:
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    p_M_end_of_storage = v3;
    __asan_report_store8(v3, 0LL);
    goto LABEL_38;
  }
  v3->_M_impl._M_start = (std::_Vector_base<unsigned char>::pointer)v20;
  v22 = (unsigned __int8 *)(v20 + 16);
  p_M_end_of_storage = (std::vector<unsigned char> *)&v3->_M_impl._M_end_of_storage;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    v20 = __asan_report_store8(p_M_end_of_storage, 0LL);
LABEL_39:
    v24 = 16LL;
    p_M_finish = v20;
    __asan_report_store_n(v20, 16LL);
LABEL_40:
    v27 = (struct _Unwind_Exception *)__asan_report_store8(p_M_finish, v24);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3);
    M_start = v3->_M_impl._M_start;
    if ( v3->_M_impl._M_start )
      operator delete(M_start);
    __asan_handle_no_return(M_start, v24);
    _Unwind_Resume(v27);
  }
  v3->_M_impl._M_end_of_storage = v22;
  v24 = *(unsigned __int8 *)(((v20 + 15) >> 3) + 0x7FFF8000);
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v20 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v20 & 7)
    || (_BYTE)v24 != 0 && (char)v24 <= (char)((v20 + 15) & 7) )
  {
    goto LABEL_39;
  }
  *(_QWORD *)v20 = v17;
  *(_QWORD *)(v20 + 8) = v19;
  p_M_finish = (unsigned __int64)&v3->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    goto LABEL_40;
  v3->_M_impl._M_finish = v22;
  if ( v31 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v3;
};

// Line 738: range 000000000C9FF01C-000000000CA03054
bool __fastcall common::tools::StringUtils::sha1(std::string *str_sha1, const char *const buffer, size_t buffer_size)
{
  const char *v3; // rbp
  __int64 v5; // rax
  const char *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 i; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rdx
  char v23; // di
  unsigned __int64 j; // rdx
  int v25; // ecx
  unsigned __int64 v26; // rdi
  char v27; // r8
  char v28; // r8
  char v29; // r8
  char v30; // di
  int v31; // r14d
  int v32; // r13d
  int v33; // r12d
  __int64 v34; // rdi
  int v35; // ecx
  int v36; // r9d
  int v37; // r10d
  int v38; // r11d
  unsigned __int64 v39; // r8
  int v40; // edx
  int v41; // esi
  int v42; // ecx
  char v43; // r15
  unsigned __int64 v44; // rdx
  __int64 v45; // rdx
  unsigned __int64 v46; // rdi
  __int64 v47; // rsi
  unsigned __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // edx
  unsigned __int64 v55; // rdi
  __int64 v56; // rdx
  char v57; // r8
  char v58; // r8
  __int64 v59; // r8
  char v60; // r8
  unsigned __int64 v61; // rdx
  int v62; // ecx
  unsigned __int64 v63; // rdi
  char v64; // si
  char v65; // r8
  char v66; // r8
  char v67; // r8
  char v68; // r8
  int v69; // ebx
  int v70; // r13d
  int v71; // r14d
  int v72; // r15d
  int v73; // ecx
  int v74; // r8d
  int v75; // r9d
  int v76; // r10d
  int v77; // r11d
  unsigned __int64 v78; // rdi
  int v79; // edx
  int v80; // esi
  int v81; // ecx
  char v82; // bp
  int v83; // esi
  unsigned __int64 v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rsi
  unsigned __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  unsigned int v93; // edx
  unsigned __int64 v94; // rdi
  __int64 v95; // rdx
  char v96; // r8
  char v97; // r8
  __int64 v98; // r8
  char v99; // r8
  unsigned __int64 v100; // rdx
  int v101; // ecx
  unsigned __int64 v102; // rdi
  char v103; // si
  char v104; // r8
  char v105; // r8
  char v106; // r8
  char v107; // r8
  int v108; // r14d
  int v109; // r13d
  int v110; // ebp
  int v111; // ebx
  int v112; // ecx
  __int64 v113; // rdi
  int v114; // r9d
  int v115; // r10d
  int v116; // r11d
  unsigned __int64 v117; // r8
  int v118; // edx
  int v119; // esi
  int v120; // ecx
  char v121; // r15
  int v122; // esi
  unsigned __int64 v123; // rdx
  __int64 v124; // rsi
  unsigned __int64 v125; // rsi
  unsigned __int64 v126; // rdi
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rdx
  unsigned __int64 v130; // r8
  unsigned __int64 v131; // rdi
  __int64 v132; // rdx
  __int64 v133; // rcx
  unsigned int v134; // edx
  char v135; // di
  char v136; // r8
  char v137; // di
  __int64 v138; // r8
  char v139; // r8
  unsigned __int64 v140; // rdx
  unsigned __int64 v141; // r8
  unsigned __int64 v142; // r8
  unsigned __int64 v143; // r8
  int v144; // ecx
  char v145; // si
  char v146; // di
  char v147; // di
  char v148; // di
  char v149; // r8
  int v150; // r14d
  int v151; // r13d
  int v152; // ebp
  __int64 v153; // rdi
  int v154; // ecx
  unsigned __int64 v155; // r8
  int v156; // r9d
  int v157; // r10d
  int v158; // r11d
  int v159; // edx
  int v160; // esi
  int v161; // ecx
  char v162; // r15
  int v163; // esi
  unsigned __int64 v164; // rdx
  __int64 v165; // rsi
  unsigned __int64 v166; // r8
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // rdx
  unsigned __int64 v170; // rdi
  __int64 v171; // rdx
  __int64 v172; // rcx
  unsigned int v173; // edx
  unsigned __int64 v174; // rsi
  char v175; // di
  char v176; // di
  __int64 v177; // rsi
  unsigned __int64 v178; // rdx
  int v179; // ecx
  unsigned __int64 v180; // rdi
  char v181; // si
  char v182; // r8
  char v183; // r8
  char v184; // r8
  char v185; // r8
  int v186; // r14d
  int v187; // r13d
  int v188; // ebp
  int v189; // ebx
  int v190; // ecx
  __int64 v191; // rdi
  int v192; // r9d
  int v193; // r10d
  int v194; // r11d
  unsigned __int64 v195; // r8
  int v196; // edx
  int v197; // esi
  int v198; // ecx
  char v199; // r15
  int v200; // esi
  __int64 v201; // rcx
  __int64 v202; // rdx
  char v203; // r8
  __int64 v204; // rcx
  __int64 v205; // rdx
  char v206; // r8
  __int64 v207; // rcx
  __int64 v208; // rdx
  char v209; // r8
  __int64 v210; // r8
  __int64 v211; // rdx
  __int64 v212; // rsi
  __int64 v213; // rcx
  __int64 v214; // rdx
  char v215; // r8
  __int64 v216; // rcx
  __int64 v217; // rdx
  char v218; // r8
  __int64 v219; // rcx
  __int64 v220; // rdx
  char v221; // r8
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // rsi
  unsigned __int64 v225; // rcx
  __int64 v226; // rdx
  __int64 v227; // rdx
  unsigned __int64 v228; // rdi
  __int64 v229; // rdx
  unsigned int v230; // edx
  __int64 v231; // rdi
  unsigned __int64 v232; // rsi
  char v233; // r8
  char v234; // r8
  __int64 v235; // r8
  char v236; // r8
  unsigned __int64 v237; // rdx
  int v238; // ecx
  unsigned __int64 v239; // rdi
  char v240; // si
  char v241; // r8
  char v242; // r8
  char v243; // r8
  char v244; // r8
  int v245; // ebx
  int v246; // r13d
  int v247; // r14d
  int v248; // r15d
  int v249; // ecx
  int v250; // r8d
  int v251; // r9d
  int v252; // r10d
  int v253; // r11d
  unsigned __int64 v254; // rdi
  int v255; // edx
  int v256; // esi
  int v257; // ecx
  char v258; // bp
  int v259; // esi
  unsigned __int64 v260; // rcx
  __int64 v261; // rdx
  __int64 v262; // rdx
  unsigned __int64 v263; // rdi
  __int64 v264; // rdx
  unsigned int v265; // edx
  __int64 v266; // rdi
  unsigned __int64 v267; // rsi
  char v268; // r8
  char v269; // r8
  __int64 v270; // r8
  char v271; // r8
  unsigned __int64 v272; // rdx
  int v273; // ecx
  unsigned __int64 v274; // rdi
  char v275; // si
  char v276; // r8
  char v277; // r8
  char v278; // r8
  char v279; // r8
  int v280; // ebx
  int v281; // r13d
  int v282; // r14d
  int v283; // r15d
  int v284; // ecx
  int v285; // r8d
  int v286; // r9d
  int v287; // r10d
  int v288; // r11d
  unsigned __int64 v289; // rdi
  int v290; // edx
  int v291; // esi
  int v292; // ecx
  char v293; // bp
  int v294; // esi
  unsigned __int64 v295; // rcx
  __int64 v296; // rdx
  __int64 v297; // rdx
  unsigned __int64 v298; // rdi
  __int64 v299; // rdx
  unsigned int v300; // edx
  __int64 v301; // rdi
  unsigned __int64 v302; // rsi
  char v303; // r8
  char v304; // r8
  __int64 v305; // r8
  char v306; // r8
  unsigned __int64 v307; // rdx
  int v308; // ecx
  unsigned __int64 v309; // rdi
  char v310; // si
  char v311; // r8
  char v312; // r8
  char v313; // r8
  char v314; // r8
  int v315; // ebx
  int v316; // r13d
  int v317; // r14d
  int v318; // r15d
  int v319; // ecx
  int v320; // r8d
  int v321; // r9d
  int v322; // r10d
  int v323; // r11d
  unsigned __int64 v324; // rdi
  int v325; // edx
  int v326; // esi
  int v327; // ecx
  char v328; // bp
  int v329; // esi
  unsigned __int64 v330; // rcx
  __int64 v331; // rdx
  __int64 v332; // rdx
  unsigned __int64 v333; // rdi
  __int64 v334; // rdx
  unsigned int v335; // edx
  __int64 v336; // rdi
  unsigned __int64 v337; // rsi
  char v338; // r8
  char v339; // r8
  __int64 v340; // r8
  char v341; // r8
  unsigned __int64 v342; // rdx
  int v343; // ecx
  unsigned __int64 v344; // rdi
  char v345; // si
  char v346; // r8
  char v347; // r8
  char v348; // r8
  char v349; // r8
  int v350; // ebx
  int v351; // r13d
  int v352; // r14d
  int v353; // r15d
  int v354; // ecx
  int v355; // r8d
  int v356; // r9d
  int v357; // r10d
  int v358; // r11d
  unsigned __int64 v359; // rdi
  int v360; // edx
  int v361; // esi
  int v362; // ecx
  char v363; // bp
  int v364; // esi
  unsigned __int64 v365; // rcx
  __int64 v366; // rdx
  __int64 v367; // rdx
  unsigned __int64 v368; // rdi
  __int64 v369; // rdx
  unsigned int v370; // edx
  __int64 v371; // rdi
  unsigned __int64 v372; // rsi
  char v373; // r8
  char v374; // r8
  __int64 v375; // r8
  char v376; // r8
  unsigned __int64 v377; // rdx
  int v378; // ecx
  unsigned __int64 v379; // rdi
  char v380; // si
  char v381; // r8
  char v382; // r8
  char v383; // r8
  char v384; // r8
  int v385; // ebx
  int v386; // r13d
  int v387; // r14d
  int v388; // r15d
  int v389; // ecx
  int v390; // r8d
  int v391; // r9d
  int v392; // r10d
  int v393; // r11d
  unsigned __int64 v394; // rdi
  int v395; // edx
  int v396; // esi
  int v397; // ecx
  char v398; // bp
  int v399; // esi
  unsigned __int64 v400; // rcx
  __int64 v401; // rdx
  __int64 v402; // rdx
  unsigned __int64 v403; // rdi
  __int64 v404; // rdx
  unsigned int v405; // edx
  __int64 v406; // rdi
  unsigned __int64 v407; // rsi
  char v408; // r8
  char v409; // r8
  __int64 v410; // r8
  char v411; // r8
  unsigned __int64 v412; // rdx
  int v413; // ecx
  unsigned __int64 v414; // rdi
  char v415; // si
  char v416; // r8
  char v417; // r8
  char v418; // r8
  char v419; // r8
  int v420; // ebx
  int v421; // r13d
  int v422; // r14d
  int v423; // r15d
  int v424; // ecx
  int v425; // r8d
  int v426; // r9d
  int v427; // r10d
  int v428; // r11d
  unsigned __int64 v429; // rdi
  int v430; // edx
  int v431; // esi
  int v432; // ecx
  char v433; // bp
  int v434; // esi
  unsigned __int64 v435; // rcx
  __int64 v436; // rdx
  __int64 v437; // rdx
  unsigned __int64 v438; // rdi
  __int64 v439; // rdx
  unsigned int v440; // edx
  __int64 v441; // rdi
  unsigned __int64 v442; // rsi
  char v443; // r8
  char v444; // r8
  __int64 v445; // r8
  char v446; // r8
  unsigned __int64 v447; // rdx
  int v448; // ecx
  unsigned __int64 v449; // rdi
  char v450; // si
  char v451; // r8
  char v452; // r8
  char v453; // r8
  char v454; // r8
  int v455; // ebx
  int v456; // r13d
  int v457; // r14d
  int v458; // r15d
  int v459; // ecx
  int v460; // r8d
  int v461; // r9d
  int v462; // r10d
  int v463; // r11d
  unsigned __int64 v464; // rdi
  int v465; // edx
  int v466; // esi
  int v467; // ecx
  char v468; // bp
  int v469; // esi
  unsigned __int64 v470; // rcx
  __int64 v471; // rdx
  __int64 v472; // rdx
  unsigned __int64 v473; // rdi
  __int64 v474; // rdx
  unsigned int v475; // edx
  __int64 v476; // rdi
  unsigned __int64 v477; // rsi
  char v478; // r8
  char v479; // r8
  __int64 v480; // r8
  char v481; // r8
  unsigned __int64 v482; // rdx
  int v483; // ecx
  unsigned __int64 v484; // rdi
  char v485; // si
  char v486; // r8
  char v487; // r8
  char v488; // r8
  char v489; // r8
  int v490; // ebx
  int v491; // r13d
  int v492; // r14d
  int v493; // r15d
  int v494; // r8d
  int v495; // r9d
  int v496; // r10d
  int v497; // r11d
  unsigned __int64 v498; // rdi
  int v499; // edx
  int v500; // esi
  int v501; // ecx
  char v502; // bp
  int v503; // esi
  __int64 v504; // rdx
  __int64 v505; // rcx
  __int64 v506; // rdx
  unsigned __int64 v507; // rcx
  char v508; // r8
  unsigned __int64 v509; // rdi
  char v510; // r8
  char v511; // r9
  char v512; // r8
  int v513; // r8d
  char v514; // r9
  char v515; // r10
  char v516; // r9
  int v517; // r8d
  char v518; // r9
  char v519; // r10
  char v520; // r9
  char v521; // di
  std::string::pointer v522; // rsi
  unsigned __int64 v523; // rcx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  __int64 p_M_allocated_capacity; // rax
  char v527; // al
  __int64 v528; // rdx
  bool result; // al
  std::string::size_type M_string_length; // rdi
  std::string::size_type *p_M_string_length; // rax
  std::string::size_type *v532; // rdi
  char v533; // al
  __int64 v534; // rdx
  char v535; // al
  __int64 v536; // rdx
  __int64 v537; // rdx
  char v538; // al
  unsigned __int64 v540; // [rsp+10h] [rbp-358h]
  int v541; // [rsp+18h] [rbp-350h]
  int v542; // [rsp+18h] [rbp-350h]
  int v543; // [rsp+18h] [rbp-350h]
  int v544; // [rsp+18h] [rbp-350h]
  int v545; // [rsp+18h] [rbp-350h]
  int v546; // [rsp+18h] [rbp-350h]
  int v547; // [rsp+18h] [rbp-350h]
  int v548; // [rsp+18h] [rbp-350h]
  int v549; // [rsp+18h] [rbp-350h]
  int v550; // [rsp+18h] [rbp-350h]
  int v551; // [rsp+18h] [rbp-350h]
  int v552; // [rsp+18h] [rbp-350h]
  int v553; // [rsp+18h] [rbp-350h]
  int v554; // [rsp+1Ch] [rbp-34Ch]
  int v555; // [rsp+1Ch] [rbp-34Ch]
  _DWORD *v556; // [rsp+20h] [rbp-348h]
  char *v557; // [rsp+30h] [rbp-338h]
  std::string::size_type M_allocated_capacity; // [rsp+38h] [rbp-330h]
  char v559[16]; // [rsp+40h] [rbp-328h] BYREF
  std::string v560; // [rsp+50h] [rbp-318h] BYREF
  char v561[760]; // [rsp+70h] [rbp-2F8h] BYREF

  v3 = buffer;
  v540 = (unsigned __int64)v561;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(704LL);
    if ( v7 )
      v540 = v7;
  }
  v5 = v540 + 704;
  *(_QWORD *)v540 = 1102416563LL;
  *(_QWORD *)(v540 + 8) = "4 48 20 8 hash:743 112 20 10 digest:746 176 112 14 boost_sha1:744 320 320 1 w";
  *(_QWORD *)(v540 + 16) = common::tools::StringUtils::sha1;
  v556 = (_DWORD *)(v540 >> 3);
  v556[536862720] = -235802127;
  v556[536862721] = 61937;
  v556[536862722] = -218959356;
  v556[536862723] = 62194;
  v556[536862724] = -218959356;
  v556[536862725] = 62194;
  v556[536862729] = -218959118;
  v556[536862740] = -202116109;
  v556[536862741] = -202116109;
  if ( !buffer )
    goto LABEL_789;
  *(_DWORD *)(v540 + 176) = 1732584193;
  *(_DWORD *)(v540 + 180) = -271733879;
  *(_DWORD *)(v540 + 184) = -1732584194;
  *(_DWORD *)(v540 + 188) = (_DWORD)&loc_10325476;
  *(_DWORD *)(v540 + 192) = -1009589776;
  *(_QWORD *)(v540 + 264) = 0LL;
  *(_QWORD *)(v540 + 272) = 0LL;
  *(_QWORD *)(v540 + 280) = 0LL;
  v6 = &buffer[buffer_size];
  v557 = (char *)(v540 + 704);
  while ( v3 != v6 )
  {
    v12 = *(unsigned __int8 *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
    v13 = (unsigned __int8)v3 & 7;
    if ( (char)v12 <= (char)v13 && (_BYTE)v12 )
    {
      v5 = __asan_report_load1(v3, buffer, v12, v13);
    }
    else
    {
      v10 = *v3;
      v8 = *(_QWORD *)(v5 - 440);
      v9 = v8 + 1;
      *(_QWORD *)(v5 - 440) = v8 + 1;
      buffer = (const char *const)*(unsigned __int8 *)(((unsigned __int64)(v8 + v5 - 508) >> 3) + 0x7FFF8000);
      if ( (char)buffer <= ((v8 + (unsigned __int8)v5 + 4) & 7) && (_BYTE)buffer )
      {
        v5 = __asan_report_store1(v8 + v5 - 508, buffer, v8, v9);
        goto LABEL_17;
      }
    }
    *(_BYTE *)(v8 + v5 - 508) = v10;
    if ( v9 != 64 )
      goto LABEL_8;
LABEL_17:
    *(_QWORD *)(v5 - 440) = 0LL;
    for ( i = 0LL; i <= 0xF; ++i )
    {
      v16 = 4 * i;
      v22 = *(unsigned __int8 *)(((4 * i + v5 - 508) >> 3) + 0x7FFF8000);
      buffer = (const char *const)((4 * (_BYTE)i + (_BYTE)v5 + 4) & 7);
      if ( (char)v22 <= (char)buffer && (_BYTE)v22 )
      {
        __asan_report_load1(4 * i + v5 - 508, buffer, v22, v16);
LABEL_19:
        v17 = (unsigned __int64)buffer;
        __asan_report_load1(buffer, buffer, v15, v16);
LABEL_20:
        __asan_report_load1(v17, buffer, v18, v16);
LABEL_21:
        v5 = __asan_report_load1(v17, buffer, v19, v20);
        goto LABEL_22;
      }
      v15 = *(unsigned __int8 *)(v16 + v5 - 508) << 24;
      buffer = (const char *const)(v16 + v5 - 507);
      v23 = *(_BYTE *)(((unsigned __int64)buffer >> 3) + 0x7FFF8000);
      if ( v23 <= ((v16 + (unsigned __int8)v5 + 5) & 7) && v23 )
        goto LABEL_19;
      v18 = (*(unsigned __int8 *)(v16 + 1 + v5 - 508) << 16) | (unsigned int)v15;
      v17 = v16 + v5 - 506;
      buffer = (const char *const)*(unsigned __int8 *)((v17 >> 3) + 0x7FFF8000);
      if ( (char)buffer <= ((v16 + (unsigned __int8)v5 + 6) & 7) && (_BYTE)buffer )
        goto LABEL_20;
      v19 = (*(unsigned __int8 *)(v16 + 2 + v5 - 508) << 8) | (unsigned int)v18;
      buffer = (const char *const)(v16 + 3);
      v17 = v16 + v5 - 505;
      v20 = *(unsigned __int8 *)((v17 >> 3) + 0x7FFF8000);
      if ( (char)v20 <= (char)(v17 & 7) && (_BYTE)v20 )
        goto LABEL_21;
      v21 = (unsigned __int8)buffer[v5 - 508] | (unsigned int)v19;
      buffer = (const char *const)*(unsigned __int8 *)(((v5 + 4 * i - 384) >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * i + 0x80) & 7) + 3) >= (char)buffer && (_BYTE)buffer )
      {
        v5 = __asan_report_store4(v5 + 4 * i - 384, buffer);
        break;
      }
LABEL_22:
      *(_DWORD *)(v5 + 4 * i - 384) = v21;
    }
    for ( j = 16LL; j <= 0x4F; ++j )
    {
      v26 = v5 + 4 * j - 396;
      buffer = (const char *const)*(unsigned __int8 *)((v26 >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * j + 116) & 7) + 3) >= (char)buffer && (_BYTE)buffer )
      {
        __asan_report_load4(v26);
LABEL_37:
        __asan_report_load4(v26);
LABEL_38:
        __asan_report_load4(v26);
LABEL_39:
        v5 = __asan_report_load4(v26);
        goto LABEL_40;
      }
      v26 = v5 + 4 * j - 416;
      v27 = *(_BYTE *)((v26 >> 3) + 0x7FFF8000);
      buffer = (const char *const)((((_BYTE)v5 + 4 * (_BYTE)j + 96) & 7u) + 3);
      if ( (char)(((v5 + 4 * j + 96) & 7) + 3) >= v27 && v27 )
        goto LABEL_37;
      v26 = v5 + 4 * j - 440;
      v28 = *(_BYTE *)((v26 >> 3) + 0x7FFF8000);
      buffer = (const char *const)((((_BYTE)v5 + 4 * (_BYTE)j + 72) & 7u) + 3);
      if ( (char)(((v5 + 4 * j + 72) & 7) + 3) >= v28 && v28 )
        goto LABEL_38;
      v26 = v5 + 4 * j - 448;
      v29 = *(_BYTE *)((v26 >> 3) + 0x7FFF8000);
      buffer = (const char *const)((((_BYTE)v5 + 4 * (_BYTE)j + 64) & 7u) + 3);
      if ( (char)(((v5 + 4 * j + 64) & 7) + 3) >= v29 && v29 )
        goto LABEL_39;
      v25 = __ROL4__(
              *(_DWORD *)(v5 + 4 * (j - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (j - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (j - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (j - 3) - 384),
              1);
      v30 = *(_BYTE *)(((v5 + 4 * j - 384) >> 3) + 0x7FFF8000);
      buffer = (const char *const)((((_BYTE)v5 + 4 * (_BYTE)j + 0x80) & 7u) + 3);
      if ( (char)(((v5 + 4 * j + 0x80) & 7) + 3) >= v30 && v30 )
      {
        v5 = __asan_report_store4(v5 + 4 * j - 384, buffer);
        break;
      }
LABEL_40:
      *(_DWORD *)(v5 + 4 * j - 384) = v25;
    }
    v31 = *(_DWORD *)(v5 - 528);
    v32 = *(_DWORD *)(v5 - 524);
    v33 = *(_DWORD *)(v5 - 520);
    LODWORD(v34) = *(_DWORD *)(v5 - 516);
    v541 = v34;
    v35 = *(_DWORD *)(v5 - 512);
    v554 = v35;
    v36 = v33;
    v37 = v32;
    v38 = v31;
    v39 = 0LL;
    while ( v39 <= 0x4F )
    {
      if ( v39 <= 0x13 )
      {
        v40 = v34 ^ v37 & (v34 ^ v36);
        v41 = 1518500249;
      }
      else if ( v39 > 0x27 )
      {
        if ( v39 > 0x3B )
        {
          v40 = v34 ^ v37 ^ v36;
          v41 = -899497514;
        }
        else
        {
          v40 = v34 & v36 | v37 & (v34 | v36);
          v41 = -1894007588;
        }
      }
      else
      {
        v40 = v34 ^ v37 ^ v36;
        v41 = 1859775393;
      }
      v42 = v41 + __ROL4__(v38, 5) + v40 + v35;
      buffer = (const char *const)(v5 + 4 * v39 - 384);
      v43 = *(_BYTE *)(((unsigned __int64)buffer >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v39 + 0x80) & 7) + 3) >= v43 && v43 )
      {
        v34 = v5 + 4 * v39 - 384;
        v5 = __asan_report_load4(v34);
        break;
      }
      buffer = (const char *const)(unsigned int)(*(_DWORD *)(v5 + 4 * v39++ - 384) + v42);
      v35 = v34;
      LODWORD(v34) = v36;
      v36 = __ROR4__(v37, 2);
      v37 = v38;
      v38 = (int)buffer;
    }
    *(_DWORD *)(v5 - 528) = v31 + v38;
    *(_DWORD *)(v5 - 524) = v32 + v37;
    *(_DWORD *)(v5 - 520) = v33 + v36;
    *(_DWORD *)(v5 - 516) = v541 + v34;
    *(_DWORD *)(v5 - 512) = v554 + v35;
LABEL_8:
    v11 = *(_QWORD *)(v5 - 432);
    if ( v11 > 0xFFFFFFF7 )
    {
      *(_QWORD *)(v5 - 432) = 0LL;
      v44 = *(_QWORD *)(v5 - 424);
      if ( v44 > 0xFFFFFFFE )
      {
        std::runtime_error::runtime_error((std::runtime_error *)v559, "sha1 too many bytes");
        __asan_handle_no_return(v559, "sha1 too many bytes");
        boost::exception_detail::throw_exception_<std::runtime_error>(
          (const std::runtime_error *)v559,
          "void boost::uuids::detail::sha1::process_byte(unsigned char)",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/uuid/detail/sha1.hpp",
          104);
      }
      *(_QWORD *)(v5 - 424) = v44 + 1;
    }
    else
    {
      *(_QWORD *)(v5 - 432) = v11 + 8;
    }
    ++v3;
  }
  v45 = *(_QWORD *)(v540 + 264);
  *(_QWORD *)(v540 + 264) = v45 + 1;
  v46 = (unsigned __int64)&v557[v45 - 508];
  v47 = *(unsigned __int8 *)((v46 >> 3) + 0x7FFF8000);
  if ( (char)v47 <= ((v45 + (unsigned __int8)v540 - 64 + 4) & 7) && (_BYTE)v47 )
  {
    v5 = __asan_report_store1(v46, v47, v45, v45 + 1);
  }
  else
  {
    v557[v45 - 508] = 0x80;
    if ( v45 != 63 )
      goto LABEL_73;
  }
  *(_QWORD *)(v540 + 264) = 0LL;
  v48 = 0LL;
  while ( 2 )
  {
    if ( v48 <= 0xF )
    {
      v50 = 4 * v48;
      v55 = 4 * v48 + v5 - 508;
      v56 = *(unsigned __int8 *)((v55 >> 3) + 0x7FFF8000);
      if ( (char)v56 <= (char)((4 * v48 + v5 + 4) & 7) && (_BYTE)v56 )
      {
        __asan_report_load1(v55, v48, v56, v50);
      }
      else
      {
        v49 = *(unsigned __int8 *)(v50 + v5 - 508) << 24;
        v55 = v50 + v5 - 507;
        v57 = *(_BYTE *)((v55 >> 3) + 0x7FFF8000);
        if ( v57 > ((v50 + (unsigned __int8)v5 + 5) & 7) || !v57 )
        {
          v51 = (*(unsigned __int8 *)(v50 + 1 + v5 - 508) << 16) | (unsigned int)v49;
          v55 = v50 + v5 - 506;
          v58 = *(_BYTE *)((v55 >> 3) + 0x7FFF8000);
          if ( v58 > ((v50 + (unsigned __int8)v5 + 6) & 7) || !v58 )
          {
            v52 = (*(unsigned __int8 *)(v50 + 2 + v5 - 508) << 8) | (unsigned int)v51;
            v59 = v50 + 3;
            v55 = v50 + v5 - 505;
            v53 = *(unsigned __int8 *)((v55 >> 3) + 0x7FFF8000);
            if ( (char)v53 > (char)(v55 & 7) || !(_BYTE)v53 )
            {
              v54 = *(unsigned __int8 *)(v59 + v5 - 508) | (unsigned int)v52;
              v60 = *(_BYTE *)(((v5 + 4 * v48 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v48 + 0x80) & 7) + 3) >= v60 && v60 )
              {
                v5 = __asan_report_store4(v5 + 4 * v48 - 384, v48);
                break;
              }
              goto LABEL_81;
            }
LABEL_80:
            v5 = __asan_report_load1(v55, v48, v52, v53);
LABEL_81:
            *(_DWORD *)(v5 + 4 * v48++ - 384) = v54;
            continue;
          }
LABEL_79:
          __asan_report_load1(v55, v48, v51, v50);
          goto LABEL_80;
        }
      }
      __asan_report_load1(v55, v48, v49, v50);
      goto LABEL_79;
    }
    break;
  }
  v61 = 16LL;
  while ( 2 )
  {
    if ( v61 <= 0x4F )
    {
      v63 = v5 + 4 * v61 - 396;
      v64 = *(_BYTE *)((v63 >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v61 + 116) & 7) + 3) >= v64 && v64 )
      {
        __asan_report_load4(v63);
      }
      else
      {
        v63 = v5 + 4 * v61 - 416;
        v65 = *(_BYTE *)((v63 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v61 + 96) & 7) + 3) < v65 || !v65 )
        {
          v63 = v5 + 4 * v61 - 440;
          v66 = *(_BYTE *)((v63 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v61 + 72) & 7) + 3) < v66 || !v66 )
          {
            v63 = v5 + 4 * v61 - 448;
            v67 = *(_BYTE *)((v63 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v61 + 64) & 7) + 3) < v67 || !v67 )
            {
              v62 = __ROL4__(
                      *(_DWORD *)(v5 + 4 * (v61 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v61 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v61 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v61 - 3) - 384),
                      1);
              v68 = *(_BYTE *)(((v5 + 4 * v61 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v61 + 0x80) & 7) + 3) >= v68 && v68 )
              {
                v5 = __asan_report_store4(v5 + 4 * v61 - 384, (((_BYTE)v5 + 4 * (_BYTE)v61 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_99;
            }
LABEL_98:
            v5 = __asan_report_load4(v63);
LABEL_99:
            *(_DWORD *)(v5 + 4 * v61++ - 384) = v62;
            continue;
          }
LABEL_97:
          __asan_report_load4(v63);
          goto LABEL_98;
        }
      }
      __asan_report_load4(v63);
      goto LABEL_97;
    }
    break;
  }
  v69 = *(_DWORD *)(v540 + 176);
  v542 = *(_DWORD *)(v540 + 180);
  v70 = *(_DWORD *)(v540 + 184);
  v71 = *(_DWORD *)(v540 + 188);
  v72 = *(_DWORD *)(v540 + 192);
  v73 = v72;
  v74 = v71;
  v75 = v70;
  v76 = v542;
  v77 = v69;
  v78 = 0LL;
  while ( v78 <= 0x4F )
  {
    if ( v78 <= 0x13 )
    {
      v79 = v74 ^ v76 & (v74 ^ v75);
      v80 = 1518500249;
    }
    else if ( v78 > 0x27 )
    {
      if ( v78 > 0x3B )
      {
        v79 = v74 ^ v76 ^ v75;
        v80 = -899497514;
      }
      else
      {
        v79 = v74 & v75 | v76 & (v74 | v75);
        v80 = -1894007588;
      }
    }
    else
    {
      v79 = v74 ^ v76 ^ v75;
      v80 = 1859775393;
    }
    v81 = v80 + __ROL4__(v77, 5) + v79 + v73;
    v82 = *(_BYTE *)(((v5 + 4 * v78 - 384) >> 3) + 0x7FFF8000);
    if ( (char)(((v5 + 4 * v78 + 0x80) & 7) + 3) >= v82 && v82 )
    {
      v5 = __asan_report_load4(v5 + 4 * v78 - 384);
      break;
    }
    v83 = *(_DWORD *)(v5 + 4 * v78++ - 384) + v81;
    v73 = v74;
    v74 = v75;
    v75 = __ROR4__(v76, 2);
    v76 = v77;
    v77 = v83;
  }
  *(_DWORD *)(v540 + 176) = v69 + v77;
  *(_DWORD *)(v540 + 180) = v542 + v76;
  *(_DWORD *)(v540 + 184) = v70 + v75;
  *(_DWORD *)(v540 + 188) = v71 + v74;
  *(_DWORD *)(v540 + 192) = v72 + v73;
LABEL_73:
  if ( *(_QWORD *)(v540 + 264) > 0x38uLL )
  {
    while ( 2 )
    {
      v84 = *(_QWORD *)(v5 - 440);
      if ( v84 )
      {
        *(_QWORD *)(v5 - 440) = v84 + 1;
        v85 = *(unsigned __int8 *)(((v84 + v5 - 508) >> 3) + 0x7FFF8000);
        v86 = ((_BYTE)v84 + (_BYTE)v5 + 4) & 7;
        if ( (char)v85 <= (char)v86 && (_BYTE)v85 )
        {
          v5 = __asan_report_store1(v84 + v5 - 508, v86, v84 + 1, v85);
        }
        else
        {
          *(_BYTE *)(v84 + v5 - 508) = 0;
          if ( v84 != 63 )
            continue;
        }
        *(_QWORD *)(v5 - 440) = 0LL;
        v87 = 0LL;
        while ( 2 )
        {
          if ( v87 <= 0xF )
          {
            v89 = 4 * v87;
            v94 = 4 * v87 + v5 - 508;
            v95 = *(unsigned __int8 *)((v94 >> 3) + 0x7FFF8000);
            if ( (char)v95 <= (char)((4 * v87 + v5 + 4) & 7) && (_BYTE)v95 )
            {
              __asan_report_load1(v94, v87, v95, v89);
            }
            else
            {
              v88 = *(unsigned __int8 *)(v89 + v5 - 508) << 24;
              v94 = v89 + v5 - 507;
              v96 = *(_BYTE *)((v94 >> 3) + 0x7FFF8000);
              if ( v96 > ((v89 + (unsigned __int8)v5 + 5) & 7) || !v96 )
              {
                v90 = (*(unsigned __int8 *)(v89 + 1 + v5 - 508) << 16) | (unsigned int)v88;
                v94 = v89 + v5 - 506;
                v97 = *(_BYTE *)((v94 >> 3) + 0x7FFF8000);
                if ( v97 > ((v89 + (unsigned __int8)v5 + 6) & 7) || !v97 )
                {
                  v91 = (*(unsigned __int8 *)(v89 + 2 + v5 - 508) << 8) | (unsigned int)v90;
                  v98 = v89 + 3;
                  v94 = v89 + v5 - 505;
                  v92 = *(unsigned __int8 *)((v94 >> 3) + 0x7FFF8000);
                  if ( (char)v92 > (char)(v94 & 7) || !(_BYTE)v92 )
                  {
                    v93 = *(unsigned __int8 *)(v98 + v5 - 508) | (unsigned int)v91;
                    v99 = *(_BYTE *)(((v5 + 4 * v87 - 384) >> 3) + 0x7FFF8000);
                    if ( (char)(((v5 + 4 * v87 + 0x80) & 7) + 3) >= v99 && v99 )
                    {
                      v5 = __asan_report_store4(v5 + 4 * v87 - 384, v87);
                      break;
                    }
                    goto LABEL_136;
                  }
LABEL_135:
                  v5 = __asan_report_load1(v94, v87, v91, v92);
LABEL_136:
                  *(_DWORD *)(v5 + 4 * v87++ - 384) = v93;
                  continue;
                }
LABEL_134:
                __asan_report_load1(v94, v87, v90, v89);
                goto LABEL_135;
              }
            }
            __asan_report_load1(v94, v87, v88, v89);
            goto LABEL_134;
          }
          break;
        }
        v100 = 16LL;
LABEL_155:
        if ( v100 > 0x4F )
        {
LABEL_167:
          v108 = *(_DWORD *)(v5 - 528);
          v109 = *(_DWORD *)(v5 - 524);
          v110 = *(_DWORD *)(v5 - 520);
          v111 = *(_DWORD *)(v5 - 516);
          v543 = *(_DWORD *)(v5 - 512);
          v112 = v543;
          LODWORD(v113) = v111;
          v114 = v110;
          v115 = v109;
          v116 = v108;
          v117 = 0LL;
          while ( v117 <= 0x4F )
          {
            if ( v117 <= 0x13 )
            {
              v118 = v113 ^ v115 & (v113 ^ v114);
              v119 = 1518500249;
            }
            else if ( v117 > 0x27 )
            {
              if ( v117 > 0x3B )
              {
                v118 = v113 ^ v115 ^ v114;
                v119 = -899497514;
              }
              else
              {
                v118 = v113 & v114 | v115 & (v113 | v114);
                v119 = -1894007588;
              }
            }
            else
            {
              v118 = v113 ^ v115 ^ v114;
              v119 = 1859775393;
            }
            v120 = v119 + __ROL4__(v116, 5) + v118 + v112;
            v121 = *(_BYTE *)(((v5 + 4 * v117 - 384) >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v117 + 0x80) & 7) + 3) >= v121 && v121 )
            {
              v113 = v5 + 4 * v117 - 384;
              v5 = __asan_report_load4(v113);
              break;
            }
            v122 = *(_DWORD *)(v5 + 4 * v117++ - 384) + v120;
            v112 = v113;
            LODWORD(v113) = v114;
            v114 = __ROR4__(v115, 2);
            v115 = v116;
            v116 = v122;
          }
          *(_DWORD *)(v5 - 528) = v108 + v116;
          *(_DWORD *)(v5 - 524) = v109 + v115;
          *(_DWORD *)(v5 - 520) = v110 + v114;
          *(_DWORD *)(v5 - 516) = v111 + v113;
          *(_DWORD *)(v5 - 512) = v543 + v112;
          continue;
        }
        v102 = v5 + 4 * v100 - 396;
        v103 = *(_BYTE *)((v102 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v100 + 116) & 7) + 3) >= v103 && v103 )
        {
          __asan_report_load4(v102);
        }
        else
        {
          v102 = v5 + 4 * v100 - 416;
          v104 = *(_BYTE *)((v102 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v100 + 96) & 7) + 3) < v104 || !v104 )
          {
            v102 = v5 + 4 * v100 - 440;
            v105 = *(_BYTE *)((v102 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v100 + 72) & 7) + 3) < v105 || !v105 )
            {
              v102 = v5 + 4 * v100 - 448;
              v106 = *(_BYTE *)((v102 >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v100 + 64) & 7) + 3) < v106 || !v106 )
              {
                v101 = __ROL4__(
                         *(_DWORD *)(v5 + 4 * (v100 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v100 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v100 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v100 - 3) - 384),
                         1);
                v107 = *(_BYTE *)(((v5 + 4 * v100 - 384) >> 3) + 0x7FFF8000);
                if ( (char)(((v5 + 4 * v100 + 0x80) & 7) + 3) >= v107 && v107 )
                {
                  v5 = __asan_report_store4(v5 + 4 * v100 - 384, (((_BYTE)v5 + 4 * (_BYTE)v100 + 0x80) & 7u) + 3);
                  goto LABEL_167;
                }
                goto LABEL_154;
              }
LABEL_153:
              v5 = __asan_report_load4(v102);
LABEL_154:
              *(_DWORD *)(v5 + 4 * v100++ - 384) = v101;
              goto LABEL_155;
            }
LABEL_152:
            __asan_report_load4(v102);
            goto LABEL_153;
          }
        }
        __asan_report_load4(v102);
        goto LABEL_152;
      }
      break;
    }
    while ( 1 )
    {
LABEL_182:
      v123 = *(_QWORD *)(v5 - 440);
      if ( v123 > 0x37 )
        goto LABEL_291;
      *(_QWORD *)(v5 - 440) = v123 + 1;
      v124 = *(unsigned __int8 *)(((v123 + v5 - 508) >> 3) + 0x7FFF8000);
      if ( (char)v124 <= (char)((v123 + v5 + 4) & 7) )
      {
        if ( (_BYTE)v124 )
          break;
      }
      *(_BYTE *)(v123 + v5 - 508) = 0;
    }
    v5 = __asan_report_store1(v123 + v5 - 508, v124, v123, v123 + 1);
    *(_QWORD *)(v5 - 440) = 0LL;
    v125 = v84;
    while ( 2 )
    {
      if ( v125 <= 0xF )
      {
        v128 = 4 * v125;
        v135 = *(_BYTE *)(((4 * v125 + v5 - 508) >> 3) + 0x7FFF8000);
        if ( v135 <= (char)((4 * v125 + v5 + 4) & 7) && v135 )
        {
          v126 = 4 * v125 + v5 - 508;
          __asan_report_load1(v126, v125, v126, v128);
        }
        else
        {
          v127 = *(unsigned __int8 *)(v128 + v5 - 508) << 24;
          v126 = v128 + v5 - 507;
          v136 = *(_BYTE *)((v126 >> 3) + 0x7FFF8000);
          if ( v136 > ((v128 + (unsigned __int8)v5 + 5) & 7) || !v136 )
          {
            v129 = (*(unsigned __int8 *)(v128 + 1 + v5 - 508) << 16) | (unsigned int)v127;
            v130 = v128 + v5 - 506;
            v137 = *(_BYTE *)((v130 >> 3) + 0x7FFF8000);
            if ( v137 > ((v128 + (unsigned __int8)v5 + 6) & 7) || !v137 )
            {
              v132 = (*(unsigned __int8 *)(v128 + 2 + v5 - 508) << 8) | (unsigned int)v129;
              v138 = v128 + 3;
              v131 = v128 + v5 - 505;
              v133 = *(unsigned __int8 *)((v131 >> 3) + 0x7FFF8000);
              if ( (char)v133 > (char)(v131 & 7) || !(_BYTE)v133 )
              {
                v134 = *(unsigned __int8 *)(v138 + v5 - 508) | (unsigned int)v132;
                v139 = *(_BYTE *)(((v5 + 4 * v125 - 384) >> 3) + 0x7FFF8000);
                if ( (char)(((v5 + 4 * v125 + 0x80) & 7) + 3) >= v139 && v139 )
                {
                  v5 = __asan_report_store4(v5 + 4 * v125 - 384, v125);
                  break;
                }
                goto LABEL_191;
              }
LABEL_190:
              v5 = __asan_report_load1(v131, v125, v132, v133);
LABEL_191:
              *(_DWORD *)(v5 + 4 * v125++ - 384) = v134;
              continue;
            }
LABEL_189:
            v131 = v130;
            __asan_report_load1(v130, v125, v129, v128);
            goto LABEL_190;
          }
        }
        __asan_report_load1(v126, v125, v127, v128);
        goto LABEL_189;
      }
      break;
    }
    v140 = 16LL;
    while ( 2 )
    {
      if ( v140 > 0x4F )
      {
LABEL_222:
        v150 = *(_DWORD *)(v5 - 528);
        v151 = *(_DWORD *)(v5 - 524);
        v152 = *(_DWORD *)(v5 - 520);
        LODWORD(v153) = *(_DWORD *)(v5 - 516);
        v544 = v153;
        v154 = *(_DWORD *)(v5 - 512);
        v555 = v154;
        v155 = v84;
        v156 = v152;
        v157 = v151;
        v158 = v150;
        while ( v155 <= 0x4F )
        {
          if ( v155 <= 0x13 )
          {
            v159 = v153 ^ v157 & (v153 ^ v156);
            v160 = 1518500249;
          }
          else if ( v155 > 0x27 )
          {
            if ( v155 > 0x3B )
            {
              v159 = v153 ^ v157 ^ v156;
              v160 = -899497514;
            }
            else
            {
              v159 = v153 & v156 | v157 & (v153 | v156);
              v160 = -1894007588;
            }
          }
          else
          {
            v159 = v153 ^ v157 ^ v156;
            v160 = 1859775393;
          }
          v161 = v160 + __ROL4__(v158, 5) + v159 + v154;
          v162 = *(_BYTE *)(((v5 + 4 * v155 - 384) >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v155 + 0x80) & 7) + 3) >= v162 && v162 )
          {
            v153 = v5 + 4 * v155 - 384;
            v5 = __asan_report_load4(v153);
            break;
          }
          v163 = *(_DWORD *)(v5 + 4 * v155++ - 384) + v161;
          v154 = v153;
          LODWORD(v153) = v156;
          v156 = __ROR4__(v157, 2);
          v157 = v158;
          v158 = v163;
        }
        *(_DWORD *)(v5 - 528) = v150 + v158;
        *(_DWORD *)(v5 - 524) = v151 + v157;
        *(_DWORD *)(v5 - 520) = v152 + v156;
        *(_DWORD *)(v5 - 516) = v544 + v153;
        *(_DWORD *)(v5 - 512) = v555 + v154;
        goto LABEL_182;
      }
      v145 = *(_BYTE *)(((v5 + 4 * v140 - 396) >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v140 + 116) & 7) + 3) >= v145 && v145 )
      {
        __asan_report_load4(v5 + 4 * v140 - 396);
      }
      else
      {
        v141 = v5 + 4 * v140 - 416;
        v146 = *(_BYTE *)((v141 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v140 + 96) & 7) + 3) < v146 || !v146 )
        {
          v142 = v5 + 4 * v140 - 440;
          v147 = *(_BYTE *)((v142 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v140 + 72) & 7) + 3) < v147 || !v147 )
          {
            v143 = v5 + 4 * v140 - 448;
            v148 = *(_BYTE *)((v143 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v140 + 64) & 7) + 3) < v148 || !v148 )
            {
              v144 = __ROL4__(
                       *(_DWORD *)(v5 + 4 * (v140 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v140 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v140 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v140 - 3) - 384),
                       1);
              v149 = *(_BYTE *)(((v5 + 4 * v140 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v140 + 0x80) & 7) + 3) >= v149 && v149 )
              {
                v5 = __asan_report_store4(v5 + 4 * v140 - 384, (((_BYTE)v5 + 4 * (_BYTE)v140 + 0x80) & 7u) + 3);
                goto LABEL_222;
              }
              goto LABEL_209;
            }
LABEL_208:
            v5 = __asan_report_load4(v143);
LABEL_209:
            *(_DWORD *)(v5 + 4 * v140++ - 384) = v144;
            continue;
          }
LABEL_207:
          __asan_report_load4(v142);
          goto LABEL_208;
        }
      }
      break;
    }
    __asan_report_load4(v141);
    goto LABEL_207;
  }
  while ( 2 )
  {
    v164 = *(_QWORD *)(v5 - 440);
    if ( v164 <= 0x37 )
    {
      *(_QWORD *)(v5 - 440) = v164 + 1;
      v165 = *(unsigned __int8 *)(((v164 + v5 - 508) >> 3) + 0x7FFF8000);
      if ( (char)v165 > (char)((v164 + v5 + 4) & 7) || !(_BYTE)v165 )
      {
        *(_BYTE *)(v164 + v5 - 508) = 0;
        continue;
      }
      v5 = __asan_report_store1(v164 + v5 - 508, v165, v164, v164 + 1);
      *(_QWORD *)(v5 - 440) = 0LL;
      v166 = 0LL;
      while ( 2 )
      {
        if ( v166 <= 0xF )
        {
          v168 = 4 * v166;
          v174 = *(unsigned __int8 *)(((4 * v166 + v5 - 508) >> 3) + 0x7FFF8000);
          if ( (char)v174 <= (char)((4 * v166 + v5 + 4) & 7) && (_BYTE)v174 )
          {
            __asan_report_load1(4 * v166 + v5 - 508, v174, 4 * v166 + v5 - 508, v168);
          }
          else
          {
            v167 = *(unsigned __int8 *)(v168 + v5 - 508) << 24;
            v174 = v168 + v5 - 507;
            v175 = *(_BYTE *)((v174 >> 3) + 0x7FFF8000);
            if ( v175 > ((v168 + (unsigned __int8)v5 + 5) & 7) || !v175 )
            {
              v169 = (*(unsigned __int8 *)(v168 + 1 + v5 - 508) << 16) | (unsigned int)v167;
              v174 = v168 + v5 - 506;
              v176 = *(_BYTE *)((v174 >> 3) + 0x7FFF8000);
              if ( v176 > ((v168 + (unsigned __int8)v5 + 6) & 7) || !v176 )
              {
                v171 = (*(unsigned __int8 *)(v168 + 2 + v5 - 508) << 8) | (unsigned int)v169;
                v174 = v168 + 3;
                v170 = v168 + v5 - 505;
                v172 = *(unsigned __int8 *)((v170 >> 3) + 0x7FFF8000);
                if ( (char)v172 > (char)(v170 & 7) || !(_BYTE)v172 )
                {
                  v173 = *(unsigned __int8 *)(v174 + v5 - 508) | (unsigned int)v171;
                  v177 = *(unsigned __int8 *)(((v5 + 4 * v166 - 384) >> 3) + 0x7FFF8000);
                  if ( (char)(((v5 + 4 * v166 + 0x80) & 7) + 3) >= (char)v177 && (_BYTE)v177 )
                  {
                    v5 = __asan_report_store4(v5 + 4 * v166 - 384, v177);
                    break;
                  }
                  goto LABEL_246;
                }
LABEL_245:
                v5 = __asan_report_load1(v170, v174, v171, v172);
LABEL_246:
                *(_DWORD *)(v5 + 4 * v166++ - 384) = v173;
                continue;
              }
LABEL_244:
              v170 = v174;
              __asan_report_load1(v174, v174, v169, v168);
              goto LABEL_245;
            }
          }
          __asan_report_load1(v174, v174, v167, v168);
          goto LABEL_244;
        }
        break;
      }
      v178 = 16LL;
LABEL_265:
      if ( v178 > 0x4F )
      {
LABEL_277:
        v186 = *(_DWORD *)(v5 - 528);
        v187 = *(_DWORD *)(v5 - 524);
        v188 = *(_DWORD *)(v5 - 520);
        v189 = *(_DWORD *)(v5 - 516);
        v545 = *(_DWORD *)(v5 - 512);
        v190 = v545;
        LODWORD(v191) = v189;
        v192 = v188;
        v193 = v187;
        v194 = v186;
        v195 = 0LL;
        while ( v195 <= 0x4F )
        {
          if ( v195 <= 0x13 )
          {
            v196 = v191 ^ v193 & (v191 ^ v192);
            v197 = 1518500249;
          }
          else if ( v195 > 0x27 )
          {
            if ( v195 > 0x3B )
            {
              v196 = v191 ^ v193 ^ v192;
              v197 = -899497514;
            }
            else
            {
              v196 = v191 & v192 | v193 & (v191 | v192);
              v197 = -1894007588;
            }
          }
          else
          {
            v196 = v191 ^ v193 ^ v192;
            v197 = 1859775393;
          }
          v198 = v197 + __ROL4__(v194, 5) + v196 + v190;
          v199 = *(_BYTE *)(((v5 + 4 * v195 - 384) >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v195 + 0x80) & 7) + 3) >= v199 && v199 )
          {
            v191 = v5 + 4 * v195 - 384;
            v5 = __asan_report_load4(v191);
            break;
          }
          v200 = *(_DWORD *)(v5 + 4 * v195++ - 384) + v198;
          v190 = v191;
          LODWORD(v191) = v192;
          v192 = __ROR4__(v193, 2);
          v193 = v194;
          v194 = v200;
        }
        *(_DWORD *)(v5 - 528) = v186 + v194;
        *(_DWORD *)(v5 - 524) = v187 + v193;
        *(_DWORD *)(v5 - 520) = v188 + v192;
        *(_DWORD *)(v5 - 516) = v189 + v191;
        *(_DWORD *)(v5 - 512) = v545 + v190;
        continue;
      }
      v180 = v5 + 4 * v178 - 396;
      v181 = *(_BYTE *)((v180 >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v178 + 116) & 7) + 3) >= v181 && v181 )
      {
        __asan_report_load4(v180);
      }
      else
      {
        v180 = v5 + 4 * v178 - 416;
        v182 = *(_BYTE *)((v180 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v178 + 96) & 7) + 3) < v182 || !v182 )
        {
          v180 = v5 + 4 * v178 - 440;
          v183 = *(_BYTE *)((v180 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v178 + 72) & 7) + 3) < v183 || !v183 )
          {
            v180 = v5 + 4 * v178 - 448;
            v184 = *(_BYTE *)((v180 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v178 + 64) & 7) + 3) < v184 || !v184 )
            {
              v179 = __ROL4__(
                       *(_DWORD *)(v5 + 4 * (v178 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v178 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v178 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v178 - 3) - 384),
                       1);
              v185 = *(_BYTE *)(((v5 + 4 * v178 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v178 + 0x80) & 7) + 3) >= v185 && v185 )
              {
                v5 = __asan_report_store4(v5 + 4 * v178 - 384, (((_BYTE)v5 + 4 * (_BYTE)v178 + 0x80) & 7u) + 3);
                goto LABEL_277;
              }
              goto LABEL_264;
            }
LABEL_263:
            v5 = __asan_report_load4(v180);
LABEL_264:
            *(_DWORD *)(v5 + 4 * v178++ - 384) = v179;
            goto LABEL_265;
          }
LABEL_262:
          __asan_report_load4(v180);
          goto LABEL_263;
        }
      }
      __asan_report_load4(v180);
      goto LABEL_262;
    }
    break;
  }
LABEL_291:
  v201 = *(_QWORD *)(v540 + 280) >> 24;
  v202 = *(_QWORD *)(v540 + 264);
  *(_QWORD *)(v540 + 264) = v202 + 1;
  v203 = *(_BYTE *)(((unsigned __int64)&v557[v202 - 508] >> 3) + 0x7FFF8000);
  if ( v203 <= ((v202 + (unsigned __int8)v540 - 64 + 4) & 7) && v203 )
  {
    v5 = __asan_report_store1(&v557[v202 - 508], v202 + 1, v202, v201);
  }
  else
  {
    v557[v202 - 508] = v201;
    if ( v202 != 63 )
      goto LABEL_294;
  }
  *(_QWORD *)(v540 + 264) = 0LL;
  v225 = 0LL;
  while ( 2 )
  {
    if ( v225 <= 0xF )
    {
      v231 = 4 * v225;
      v232 = *(unsigned __int8 *)(((4 * v225 + v5 - 508) >> 3) + 0x7FFF8000);
      if ( (char)v232 <= (char)((4 * v225 + v5 + 4) & 7) && (_BYTE)v232 )
      {
        __asan_report_load1(4 * v225 + v5 - 508, v232, 4 * v225 + v5 - 508, v225);
      }
      else
      {
        v226 = *(unsigned __int8 *)(v231 + v5 - 508) << 24;
        v232 = v231 + v5 - 507;
        v233 = *(_BYTE *)((v232 >> 3) + 0x7FFF8000);
        if ( v233 > ((v231 + (unsigned __int8)v5 + 5) & 7) || !v233 )
        {
          v227 = (*(unsigned __int8 *)(v231 + 1 + v5 - 508) << 16) | (unsigned int)v226;
          v232 = v231 + v5 - 506;
          v234 = *(_BYTE *)((v232 >> 3) + 0x7FFF8000);
          if ( v234 > ((v231 + (unsigned __int8)v5 + 6) & 7) || !v234 )
          {
            v229 = (*(unsigned __int8 *)(v231 + 2 + v5 - 508) << 8) | (unsigned int)v227;
            v235 = v231 + 3;
            v228 = v231 + v5 - 505;
            v232 = *(unsigned __int8 *)((v228 >> 3) + 0x7FFF8000);
            if ( (char)v232 > (char)(v228 & 7) || !(_BYTE)v232 )
            {
              v230 = *(unsigned __int8 *)(v235 + v5 - 508) | (unsigned int)v229;
              v236 = *(_BYTE *)(((v5 + 4 * v225 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v225 + 0x80) & 7) + 3) >= v236 && v236 )
              {
                v5 = __asan_report_store4(v5 + 4 * v225 - 384, (((_BYTE)v5 + 4 * (_BYTE)v225 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_322;
            }
LABEL_321:
            v5 = __asan_report_load1(v228, v232, v229, v225);
LABEL_322:
            *(_DWORD *)(v5 + 4 * v225++ - 384) = v230;
            continue;
          }
LABEL_320:
          v228 = v232;
          __asan_report_load1(v232, v232, v227, v225);
          goto LABEL_321;
        }
      }
      __asan_report_load1(v232, v232, v226, v225);
      goto LABEL_320;
    }
    break;
  }
  v237 = 16LL;
  while ( 2 )
  {
    if ( v237 <= 0x4F )
    {
      v239 = v5 + 4 * v237 - 396;
      v240 = *(_BYTE *)((v239 >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v237 + 116) & 7) + 3) >= v240 && v240 )
      {
        __asan_report_load4(v239);
      }
      else
      {
        v239 = v5 + 4 * v237 - 416;
        v241 = *(_BYTE *)((v239 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v237 + 96) & 7) + 3) < v241 || !v241 )
        {
          v239 = v5 + 4 * v237 - 440;
          v242 = *(_BYTE *)((v239 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v237 + 72) & 7) + 3) < v242 || !v242 )
          {
            v239 = v5 + 4 * v237 - 448;
            v243 = *(_BYTE *)((v239 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v237 + 64) & 7) + 3) < v243 || !v243 )
            {
              v238 = __ROL4__(
                       *(_DWORD *)(v5 + 4 * (v237 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v237 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v237 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v237 - 3) - 384),
                       1);
              v244 = *(_BYTE *)(((v5 + 4 * v237 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v237 + 0x80) & 7) + 3) >= v244 && v244 )
              {
                v5 = __asan_report_store4(v5 + 4 * v237 - 384, (((_BYTE)v5 + 4 * (_BYTE)v237 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_340;
            }
LABEL_339:
            v5 = __asan_report_load4(v239);
LABEL_340:
            *(_DWORD *)(v5 + 4 * v237++ - 384) = v238;
            continue;
          }
LABEL_338:
          __asan_report_load4(v239);
          goto LABEL_339;
        }
      }
      __asan_report_load4(v239);
      goto LABEL_338;
    }
    break;
  }
  v245 = *(_DWORD *)(v540 + 176);
  v546 = *(_DWORD *)(v540 + 180);
  v246 = *(_DWORD *)(v540 + 184);
  v247 = *(_DWORD *)(v540 + 188);
  v248 = *(_DWORD *)(v540 + 192);
  v249 = v248;
  v250 = v247;
  v251 = v246;
  v252 = v546;
  v253 = v245;
  v254 = 0LL;
  while ( v254 <= 0x4F )
  {
    if ( v254 <= 0x13 )
    {
      v255 = v250 ^ v252 & (v250 ^ v251);
      v256 = 1518500249;
    }
    else if ( v254 > 0x27 )
    {
      if ( v254 > 0x3B )
      {
        v255 = v250 ^ v252 ^ v251;
        v256 = -899497514;
      }
      else
      {
        v255 = v250 & v251 | v252 & (v250 | v251);
        v256 = -1894007588;
      }
    }
    else
    {
      v255 = v250 ^ v252 ^ v251;
      v256 = 1859775393;
    }
    v257 = v256 + __ROL4__(v253, 5) + v255 + v249;
    v258 = *(_BYTE *)(((v5 + 4 * v254 - 384) >> 3) + 0x7FFF8000);
    if ( (char)(((v5 + 4 * v254 + 0x80) & 7) + 3) >= v258 && v258 )
    {
      v5 = __asan_report_load4(v5 + 4 * v254 - 384);
      break;
    }
    v259 = *(_DWORD *)(v5 + 4 * v254++ - 384) + v257;
    v249 = v250;
    v250 = v251;
    v251 = __ROR4__(v252, 2);
    v252 = v253;
    v253 = v259;
  }
  *(_DWORD *)(v540 + 176) = v245 + v253;
  *(_DWORD *)(v540 + 180) = v546 + v252;
  *(_DWORD *)(v540 + 184) = v246 + v251;
  *(_DWORD *)(v540 + 188) = v247 + v250;
  *(_DWORD *)(v540 + 192) = v248 + v249;
LABEL_294:
  v204 = *(_QWORD *)(v540 + 280) >> 16;
  v205 = *(_QWORD *)(v540 + 264);
  *(_QWORD *)(v540 + 264) = v205 + 1;
  v206 = *(_BYTE *)(((unsigned __int64)&v557[v205 - 508] >> 3) + 0x7FFF8000);
  if ( v206 <= ((v205 + (unsigned __int8)v540 - 64 + 4) & 7) && v206 )
  {
    v5 = __asan_report_store1(&v557[v205 - 508], v205 + 1, v205, v204);
  }
  else
  {
    v557[v205 - 508] = v204;
    if ( v205 != 63 )
      goto LABEL_297;
  }
  *(_QWORD *)(v540 + 264) = 0LL;
  v260 = 0LL;
  while ( 2 )
  {
    if ( v260 <= 0xF )
    {
      v266 = 4 * v260;
      v267 = *(unsigned __int8 *)(((4 * v260 + v5 - 508) >> 3) + 0x7FFF8000);
      if ( (char)v267 <= (char)((4 * v260 + v5 + 4) & 7) && (_BYTE)v267 )
      {
        __asan_report_load1(4 * v260 + v5 - 508, v267, 4 * v260 + v5 - 508, v260);
      }
      else
      {
        v261 = *(unsigned __int8 *)(v266 + v5 - 508) << 24;
        v267 = v266 + v5 - 507;
        v268 = *(_BYTE *)((v267 >> 3) + 0x7FFF8000);
        if ( v268 > ((v266 + (unsigned __int8)v5 + 5) & 7) || !v268 )
        {
          v262 = (*(unsigned __int8 *)(v266 + 1 + v5 - 508) << 16) | (unsigned int)v261;
          v267 = v266 + v5 - 506;
          v269 = *(_BYTE *)((v267 >> 3) + 0x7FFF8000);
          if ( v269 > ((v266 + (unsigned __int8)v5 + 6) & 7) || !v269 )
          {
            v264 = (*(unsigned __int8 *)(v266 + 2 + v5 - 508) << 8) | (unsigned int)v262;
            v270 = v266 + 3;
            v263 = v266 + v5 - 505;
            v267 = *(unsigned __int8 *)((v263 >> 3) + 0x7FFF8000);
            if ( (char)v267 > (char)(v263 & 7) || !(_BYTE)v267 )
            {
              v265 = *(unsigned __int8 *)(v270 + v5 - 508) | (unsigned int)v264;
              v271 = *(_BYTE *)(((v5 + 4 * v260 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v260 + 0x80) & 7) + 3) >= v271 && v271 )
              {
                v5 = __asan_report_store4(v5 + 4 * v260 - 384, (((_BYTE)v5 + 4 * (_BYTE)v260 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_373;
            }
LABEL_372:
            v5 = __asan_report_load1(v263, v267, v264, v260);
LABEL_373:
            *(_DWORD *)(v5 + 4 * v260++ - 384) = v265;
            continue;
          }
LABEL_371:
          v263 = v267;
          __asan_report_load1(v267, v267, v262, v260);
          goto LABEL_372;
        }
      }
      __asan_report_load1(v267, v267, v261, v260);
      goto LABEL_371;
    }
    break;
  }
  v272 = 16LL;
  while ( 2 )
  {
    if ( v272 <= 0x4F )
    {
      v274 = v5 + 4 * v272 - 396;
      v275 = *(_BYTE *)((v274 >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v272 + 116) & 7) + 3) >= v275 && v275 )
      {
        __asan_report_load4(v274);
      }
      else
      {
        v274 = v5 + 4 * v272 - 416;
        v276 = *(_BYTE *)((v274 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v272 + 96) & 7) + 3) < v276 || !v276 )
        {
          v274 = v5 + 4 * v272 - 440;
          v277 = *(_BYTE *)((v274 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v272 + 72) & 7) + 3) < v277 || !v277 )
          {
            v274 = v5 + 4 * v272 - 448;
            v278 = *(_BYTE *)((v274 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v272 + 64) & 7) + 3) < v278 || !v278 )
            {
              v273 = __ROL4__(
                       *(_DWORD *)(v5 + 4 * (v272 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v272 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v272 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v272 - 3) - 384),
                       1);
              v279 = *(_BYTE *)(((v5 + 4 * v272 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v272 + 0x80) & 7) + 3) >= v279 && v279 )
              {
                v5 = __asan_report_store4(v5 + 4 * v272 - 384, (((_BYTE)v5 + 4 * (_BYTE)v272 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_391;
            }
LABEL_390:
            v5 = __asan_report_load4(v274);
LABEL_391:
            *(_DWORD *)(v5 + 4 * v272++ - 384) = v273;
            continue;
          }
LABEL_389:
          __asan_report_load4(v274);
          goto LABEL_390;
        }
      }
      __asan_report_load4(v274);
      goto LABEL_389;
    }
    break;
  }
  v280 = *(_DWORD *)(v540 + 176);
  v547 = *(_DWORD *)(v540 + 180);
  v281 = *(_DWORD *)(v540 + 184);
  v282 = *(_DWORD *)(v540 + 188);
  v283 = *(_DWORD *)(v540 + 192);
  v284 = v283;
  v285 = v282;
  v286 = v281;
  v287 = v547;
  v288 = v280;
  v289 = 0LL;
  while ( v289 <= 0x4F )
  {
    if ( v289 <= 0x13 )
    {
      v290 = v285 ^ v287 & (v285 ^ v286);
      v291 = 1518500249;
    }
    else if ( v289 > 0x27 )
    {
      if ( v289 > 0x3B )
      {
        v290 = v285 ^ v287 ^ v286;
        v291 = -899497514;
      }
      else
      {
        v290 = v285 & v286 | v287 & (v285 | v286);
        v291 = -1894007588;
      }
    }
    else
    {
      v290 = v285 ^ v287 ^ v286;
      v291 = 1859775393;
    }
    v292 = v291 + __ROL4__(v288, 5) + v290 + v284;
    v293 = *(_BYTE *)(((v5 + 4 * v289 - 384) >> 3) + 0x7FFF8000);
    if ( (char)(((v5 + 4 * v289 + 0x80) & 7) + 3) >= v293 && v293 )
    {
      v5 = __asan_report_load4(v5 + 4 * v289 - 384);
      break;
    }
    v294 = *(_DWORD *)(v5 + 4 * v289++ - 384) + v292;
    v284 = v285;
    v285 = v286;
    v286 = __ROR4__(v287, 2);
    v287 = v288;
    v288 = v294;
  }
  *(_DWORD *)(v540 + 176) = v280 + v288;
  *(_DWORD *)(v540 + 180) = v547 + v287;
  *(_DWORD *)(v540 + 184) = v281 + v286;
  *(_DWORD *)(v540 + 188) = v282 + v285;
  *(_DWORD *)(v540 + 192) = v283 + v284;
LABEL_297:
  v207 = *(_QWORD *)(v540 + 280) >> 8;
  v208 = *(_QWORD *)(v540 + 264);
  *(_QWORD *)(v540 + 264) = v208 + 1;
  v209 = *(_BYTE *)(((unsigned __int64)&v557[v208 - 508] >> 3) + 0x7FFF8000);
  if ( v209 <= ((v208 + (unsigned __int8)v540 - 64 + 4) & 7) && v209 )
  {
    v5 = __asan_report_store1(&v557[v208 - 508], v208 + 1, v208, v207);
  }
  else
  {
    v557[v208 - 508] = v207;
    if ( v208 != 63 )
      goto LABEL_300;
  }
  *(_QWORD *)(v540 + 264) = 0LL;
  v295 = 0LL;
  while ( 2 )
  {
    if ( v295 <= 0xF )
    {
      v301 = 4 * v295;
      v302 = *(unsigned __int8 *)(((4 * v295 + v5 - 508) >> 3) + 0x7FFF8000);
      if ( (char)v302 <= (char)((4 * v295 + v5 + 4) & 7) && (_BYTE)v302 )
      {
        __asan_report_load1(4 * v295 + v5 - 508, v302, 4 * v295 + v5 - 508, v295);
      }
      else
      {
        v296 = *(unsigned __int8 *)(v301 + v5 - 508) << 24;
        v302 = v301 + v5 - 507;
        v303 = *(_BYTE *)((v302 >> 3) + 0x7FFF8000);
        if ( v303 > ((v301 + (unsigned __int8)v5 + 5) & 7) || !v303 )
        {
          v297 = (*(unsigned __int8 *)(v301 + 1 + v5 - 508) << 16) | (unsigned int)v296;
          v302 = v301 + v5 - 506;
          v304 = *(_BYTE *)((v302 >> 3) + 0x7FFF8000);
          if ( v304 > ((v301 + (unsigned __int8)v5 + 6) & 7) || !v304 )
          {
            v299 = (*(unsigned __int8 *)(v301 + 2 + v5 - 508) << 8) | (unsigned int)v297;
            v305 = v301 + 3;
            v298 = v301 + v5 - 505;
            v302 = *(unsigned __int8 *)((v298 >> 3) + 0x7FFF8000);
            if ( (char)v302 > (char)(v298 & 7) || !(_BYTE)v302 )
            {
              v300 = *(unsigned __int8 *)(v305 + v5 - 508) | (unsigned int)v299;
              v306 = *(_BYTE *)(((v5 + 4 * v295 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v295 + 0x80) & 7) + 3) >= v306 && v306 )
              {
                v5 = __asan_report_store4(v5 + 4 * v295 - 384, (((_BYTE)v5 + 4 * (_BYTE)v295 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_424;
            }
LABEL_423:
            v5 = __asan_report_load1(v298, v302, v299, v295);
LABEL_424:
            *(_DWORD *)(v5 + 4 * v295++ - 384) = v300;
            continue;
          }
LABEL_422:
          v298 = v302;
          __asan_report_load1(v302, v302, v297, v295);
          goto LABEL_423;
        }
      }
      __asan_report_load1(v302, v302, v296, v295);
      goto LABEL_422;
    }
    break;
  }
  v307 = 16LL;
  while ( 2 )
  {
    if ( v307 <= 0x4F )
    {
      v309 = v5 + 4 * v307 - 396;
      v310 = *(_BYTE *)((v309 >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v307 + 116) & 7) + 3) >= v310 && v310 )
      {
        __asan_report_load4(v309);
      }
      else
      {
        v309 = v5 + 4 * v307 - 416;
        v311 = *(_BYTE *)((v309 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v307 + 96) & 7) + 3) < v311 || !v311 )
        {
          v309 = v5 + 4 * v307 - 440;
          v312 = *(_BYTE *)((v309 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v307 + 72) & 7) + 3) < v312 || !v312 )
          {
            v309 = v5 + 4 * v307 - 448;
            v313 = *(_BYTE *)((v309 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v307 + 64) & 7) + 3) < v313 || !v313 )
            {
              v308 = __ROL4__(
                       *(_DWORD *)(v5 + 4 * (v307 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v307 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v307 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v307 - 3) - 384),
                       1);
              v314 = *(_BYTE *)(((v5 + 4 * v307 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v307 + 0x80) & 7) + 3) >= v314 && v314 )
              {
                v5 = __asan_report_store4(v5 + 4 * v307 - 384, (((_BYTE)v5 + 4 * (_BYTE)v307 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_442;
            }
LABEL_441:
            v5 = __asan_report_load4(v309);
LABEL_442:
            *(_DWORD *)(v5 + 4 * v307++ - 384) = v308;
            continue;
          }
LABEL_440:
          __asan_report_load4(v309);
          goto LABEL_441;
        }
      }
      __asan_report_load4(v309);
      goto LABEL_440;
    }
    break;
  }
  v315 = *(_DWORD *)(v540 + 176);
  v548 = *(_DWORD *)(v540 + 180);
  v316 = *(_DWORD *)(v540 + 184);
  v317 = *(_DWORD *)(v540 + 188);
  v318 = *(_DWORD *)(v540 + 192);
  v319 = v318;
  v320 = v317;
  v321 = v316;
  v322 = v548;
  v323 = v315;
  v324 = 0LL;
  while ( v324 <= 0x4F )
  {
    if ( v324 <= 0x13 )
    {
      v325 = v320 ^ v322 & (v320 ^ v321);
      v326 = 1518500249;
    }
    else if ( v324 > 0x27 )
    {
      if ( v324 > 0x3B )
      {
        v325 = v320 ^ v322 ^ v321;
        v326 = -899497514;
      }
      else
      {
        v325 = v320 & v321 | v322 & (v320 | v321);
        v326 = -1894007588;
      }
    }
    else
    {
      v325 = v320 ^ v322 ^ v321;
      v326 = 1859775393;
    }
    v327 = v326 + __ROL4__(v323, 5) + v325 + v319;
    v328 = *(_BYTE *)(((v5 + 4 * v324 - 384) >> 3) + 0x7FFF8000);
    if ( (char)(((v5 + 4 * v324 + 0x80) & 7) + 3) >= v328 && v328 )
    {
      v5 = __asan_report_load4(v5 + 4 * v324 - 384);
      break;
    }
    v329 = *(_DWORD *)(v5 + 4 * v324++ - 384) + v327;
    v319 = v320;
    v320 = v321;
    v321 = __ROR4__(v322, 2);
    v322 = v323;
    v323 = v329;
  }
  *(_DWORD *)(v540 + 176) = v315 + v323;
  *(_DWORD *)(v540 + 180) = v548 + v322;
  *(_DWORD *)(v540 + 184) = v316 + v321;
  *(_DWORD *)(v540 + 188) = v317 + v320;
  *(_DWORD *)(v540 + 192) = v318 + v319;
LABEL_300:
  v210 = *(_QWORD *)(v540 + 280);
  v211 = *(_QWORD *)(v540 + 264);
  *(_QWORD *)(v540 + 264) = v211 + 1;
  v212 = *(unsigned __int8 *)(((unsigned __int64)&v557[v211 - 508] >> 3) + 0x7FFF8000);
  if ( (char)v212 <= ((v211 + (unsigned __int8)v540 - 64 + 4) & 7) && (_BYTE)v212 )
  {
    v5 = __asan_report_store1(&v557[v211 - 508], v212, v211, v211 + 1);
  }
  else
  {
    v557[v211 - 508] = v210;
    if ( v211 != 63 )
      goto LABEL_303;
  }
  *(_QWORD *)(v540 + 264) = 0LL;
  v330 = 0LL;
  while ( 2 )
  {
    if ( v330 <= 0xF )
    {
      v336 = 4 * v330;
      v337 = *(unsigned __int8 *)(((4 * v330 + v5 - 508) >> 3) + 0x7FFF8000);
      if ( (char)v337 <= (char)((4 * v330 + v5 + 4) & 7) && (_BYTE)v337 )
      {
        __asan_report_load1(4 * v330 + v5 - 508, v337, 4 * v330 + v5 - 508, v330);
      }
      else
      {
        v331 = *(unsigned __int8 *)(v336 + v5 - 508) << 24;
        v337 = v336 + v5 - 507;
        v338 = *(_BYTE *)((v337 >> 3) + 0x7FFF8000);
        if ( v338 > ((v336 + (unsigned __int8)v5 + 5) & 7) || !v338 )
        {
          v332 = (*(unsigned __int8 *)(v336 + 1 + v5 - 508) << 16) | (unsigned int)v331;
          v337 = v336 + v5 - 506;
          v339 = *(_BYTE *)((v337 >> 3) + 0x7FFF8000);
          if ( v339 > ((v336 + (unsigned __int8)v5 + 6) & 7) || !v339 )
          {
            v334 = (*(unsigned __int8 *)(v336 + 2 + v5 - 508) << 8) | (unsigned int)v332;
            v340 = v336 + 3;
            v333 = v336 + v5 - 505;
            v337 = *(unsigned __int8 *)((v333 >> 3) + 0x7FFF8000);
            if ( (char)v337 > (char)(v333 & 7) || !(_BYTE)v337 )
            {
              v335 = *(unsigned __int8 *)(v340 + v5 - 508) | (unsigned int)v334;
              v341 = *(_BYTE *)(((v5 + 4 * v330 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v330 + 0x80) & 7) + 3) >= v341 && v341 )
              {
                v5 = __asan_report_store4(v5 + 4 * v330 - 384, (((_BYTE)v5 + 4 * (_BYTE)v330 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_475;
            }
LABEL_474:
            v5 = __asan_report_load1(v333, v337, v334, v330);
LABEL_475:
            *(_DWORD *)(v5 + 4 * v330++ - 384) = v335;
            continue;
          }
LABEL_473:
          v333 = v337;
          __asan_report_load1(v337, v337, v332, v330);
          goto LABEL_474;
        }
      }
      __asan_report_load1(v337, v337, v331, v330);
      goto LABEL_473;
    }
    break;
  }
  v342 = 16LL;
  while ( 2 )
  {
    if ( v342 <= 0x4F )
    {
      v344 = v5 + 4 * v342 - 396;
      v345 = *(_BYTE *)((v344 >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v342 + 116) & 7) + 3) >= v345 && v345 )
      {
        __asan_report_load4(v344);
      }
      else
      {
        v344 = v5 + 4 * v342 - 416;
        v346 = *(_BYTE *)((v344 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v342 + 96) & 7) + 3) < v346 || !v346 )
        {
          v344 = v5 + 4 * v342 - 440;
          v347 = *(_BYTE *)((v344 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v342 + 72) & 7) + 3) < v347 || !v347 )
          {
            v344 = v5 + 4 * v342 - 448;
            v348 = *(_BYTE *)((v344 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v342 + 64) & 7) + 3) < v348 || !v348 )
            {
              v343 = __ROL4__(
                       *(_DWORD *)(v5 + 4 * (v342 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v342 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v342 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v342 - 3) - 384),
                       1);
              v349 = *(_BYTE *)(((v5 + 4 * v342 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v342 + 0x80) & 7) + 3) >= v349 && v349 )
              {
                v5 = __asan_report_store4(v5 + 4 * v342 - 384, (((_BYTE)v5 + 4 * (_BYTE)v342 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_493;
            }
LABEL_492:
            v5 = __asan_report_load4(v344);
LABEL_493:
            *(_DWORD *)(v5 + 4 * v342++ - 384) = v343;
            continue;
          }
LABEL_491:
          __asan_report_load4(v344);
          goto LABEL_492;
        }
      }
      __asan_report_load4(v344);
      goto LABEL_491;
    }
    break;
  }
  v350 = *(_DWORD *)(v540 + 176);
  v549 = *(_DWORD *)(v540 + 180);
  v351 = *(_DWORD *)(v540 + 184);
  v352 = *(_DWORD *)(v540 + 188);
  v353 = *(_DWORD *)(v540 + 192);
  v354 = v353;
  v355 = v352;
  v356 = v351;
  v357 = v549;
  v358 = v350;
  v359 = 0LL;
  while ( v359 <= 0x4F )
  {
    if ( v359 <= 0x13 )
    {
      v360 = v355 ^ v357 & (v355 ^ v356);
      v361 = 1518500249;
    }
    else if ( v359 <= 0x27 )
    {
      v360 = v355 ^ v357 ^ v356;
      v361 = 1859775393;
    }
    else if ( v359 > 0x3B )
    {
      v360 = v355 ^ v357 ^ v356;
      v361 = -899497514;
    }
    else
    {
      v360 = v355 & v356 | v357 & (v355 | v356);
      v361 = -1894007588;
    }
    v362 = v361 + __ROL4__(v358, 5) + v360 + v354;
    v363 = *(_BYTE *)(((v5 + 4 * v359 - 384) >> 3) + 0x7FFF8000);
    if ( (char)(((v5 + 4 * v359 + 0x80) & 7) + 3) >= v363 && v363 )
    {
      v5 = __asan_report_load4(v5 + 4 * v359 - 384);
      break;
    }
    v364 = *(_DWORD *)(v5 + 4 * v359++ - 384) + v362;
    v354 = v355;
    v355 = v356;
    v356 = __ROR4__(v357, 2);
    v357 = v358;
    v358 = v364;
  }
  *(_DWORD *)(v540 + 176) = v350 + v358;
  *(_DWORD *)(v540 + 180) = v549 + v357;
  *(_DWORD *)(v540 + 184) = v351 + v356;
  *(_DWORD *)(v540 + 188) = v352 + v355;
  *(_DWORD *)(v540 + 192) = v353 + v354;
LABEL_303:
  v213 = *(_QWORD *)(v540 + 272) >> 24;
  v214 = *(_QWORD *)(v540 + 264);
  *(_QWORD *)(v540 + 264) = v214 + 1;
  v215 = *(_BYTE *)(((unsigned __int64)&v557[v214 - 508] >> 3) + 0x7FFF8000);
  if ( v215 <= ((v214 + (unsigned __int8)v540 - 64 + 4) & 7) && v215 )
  {
    v5 = __asan_report_store1(&v557[v214 - 508], v214 + 1, v214, v213);
  }
  else
  {
    v557[v214 - 508] = v213;
    if ( v214 != 63 )
      goto LABEL_306;
  }
  *(_QWORD *)(v540 + 264) = 0LL;
  v365 = 0LL;
  while ( 2 )
  {
    if ( v365 <= 0xF )
    {
      v371 = 4 * v365;
      v372 = *(unsigned __int8 *)(((4 * v365 + v5 - 508) >> 3) + 0x7FFF8000);
      if ( (char)v372 <= (char)((4 * v365 + v5 + 4) & 7) && (_BYTE)v372 )
      {
        __asan_report_load1(4 * v365 + v5 - 508, v372, 4 * v365 + v5 - 508, v365);
      }
      else
      {
        v366 = *(unsigned __int8 *)(v371 + v5 - 508) << 24;
        v372 = v371 + v5 - 507;
        v373 = *(_BYTE *)((v372 >> 3) + 0x7FFF8000);
        if ( v373 > ((v371 + (unsigned __int8)v5 + 5) & 7) || !v373 )
        {
          v367 = (*(unsigned __int8 *)(v371 + 1 + v5 - 508) << 16) | (unsigned int)v366;
          v372 = v371 + v5 - 506;
          v374 = *(_BYTE *)((v372 >> 3) + 0x7FFF8000);
          if ( v374 > ((v371 + (unsigned __int8)v5 + 6) & 7) || !v374 )
          {
            v369 = (*(unsigned __int8 *)(v371 + 2 + v5 - 508) << 8) | (unsigned int)v367;
            v375 = v371 + 3;
            v368 = v371 + v5 - 505;
            v372 = *(unsigned __int8 *)((v368 >> 3) + 0x7FFF8000);
            if ( (char)v372 > (char)(v368 & 7) || !(_BYTE)v372 )
            {
              v370 = *(unsigned __int8 *)(v375 + v5 - 508) | (unsigned int)v369;
              v376 = *(_BYTE *)(((v5 + 4 * v365 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v365 + 0x80) & 7) + 3) >= v376 && v376 )
              {
                v5 = __asan_report_store4(v5 + 4 * v365 - 384, (((_BYTE)v5 + 4 * (_BYTE)v365 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_526;
            }
LABEL_525:
            v5 = __asan_report_load1(v368, v372, v369, v365);
LABEL_526:
            *(_DWORD *)(v5 + 4 * v365++ - 384) = v370;
            continue;
          }
LABEL_524:
          v368 = v372;
          __asan_report_load1(v372, v372, v367, v365);
          goto LABEL_525;
        }
      }
      __asan_report_load1(v372, v372, v366, v365);
      goto LABEL_524;
    }
    break;
  }
  v377 = 16LL;
  while ( 2 )
  {
    if ( v377 <= 0x4F )
    {
      v379 = v5 + 4 * v377 - 396;
      v380 = *(_BYTE *)((v379 >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v377 + 116) & 7) + 3) >= v380 && v380 )
      {
        __asan_report_load4(v379);
      }
      else
      {
        v379 = v5 + 4 * v377 - 416;
        v381 = *(_BYTE *)((v379 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v377 + 96) & 7) + 3) < v381 || !v381 )
        {
          v379 = v5 + 4 * v377 - 440;
          v382 = *(_BYTE *)((v379 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v377 + 72) & 7) + 3) < v382 || !v382 )
          {
            v379 = v5 + 4 * v377 - 448;
            v383 = *(_BYTE *)((v379 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v377 + 64) & 7) + 3) < v383 || !v383 )
            {
              v378 = __ROL4__(
                       *(_DWORD *)(v5 + 4 * (v377 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v377 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v377 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v377 - 3) - 384),
                       1);
              v384 = *(_BYTE *)(((v5 + 4 * v377 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v377 + 0x80) & 7) + 3) >= v384 && v384 )
              {
                v5 = __asan_report_store4(v5 + 4 * v377 - 384, (((_BYTE)v5 + 4 * (_BYTE)v377 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_544;
            }
LABEL_543:
            v5 = __asan_report_load4(v379);
LABEL_544:
            *(_DWORD *)(v5 + 4 * v377++ - 384) = v378;
            continue;
          }
LABEL_542:
          __asan_report_load4(v379);
          goto LABEL_543;
        }
      }
      __asan_report_load4(v379);
      goto LABEL_542;
    }
    break;
  }
  v385 = *(_DWORD *)(v540 + 176);
  v550 = *(_DWORD *)(v540 + 180);
  v386 = *(_DWORD *)(v540 + 184);
  v387 = *(_DWORD *)(v540 + 188);
  v388 = *(_DWORD *)(v540 + 192);
  v389 = v388;
  v390 = v387;
  v391 = v386;
  v392 = v550;
  v393 = v385;
  v394 = 0LL;
  while ( v394 <= 0x4F )
  {
    if ( v394 <= 0x13 )
    {
      v395 = v390 ^ v392 & (v390 ^ v391);
      v396 = 1518500249;
    }
    else if ( v394 > 0x27 )
    {
      if ( v394 > 0x3B )
      {
        v395 = v390 ^ v392 ^ v391;
        v396 = -899497514;
      }
      else
      {
        v395 = v390 & v391 | v392 & (v390 | v391);
        v396 = -1894007588;
      }
    }
    else
    {
      v395 = v390 ^ v392 ^ v391;
      v396 = 1859775393;
    }
    v397 = v396 + __ROL4__(v393, 5) + v395 + v389;
    v398 = *(_BYTE *)(((v5 + 4 * v394 - 384) >> 3) + 0x7FFF8000);
    if ( (char)(((v5 + 4 * v394 + 0x80) & 7) + 3) >= v398 && v398 )
    {
      v5 = __asan_report_load4(v5 + 4 * v394 - 384);
      break;
    }
    v399 = *(_DWORD *)(v5 + 4 * v394++ - 384) + v397;
    v389 = v390;
    v390 = v391;
    v391 = __ROR4__(v392, 2);
    v392 = v393;
    v393 = v399;
  }
  *(_DWORD *)(v540 + 176) = v385 + v393;
  *(_DWORD *)(v540 + 180) = v550 + v392;
  *(_DWORD *)(v540 + 184) = v386 + v391;
  *(_DWORD *)(v540 + 188) = v387 + v390;
  *(_DWORD *)(v540 + 192) = v388 + v389;
LABEL_306:
  v216 = *(_QWORD *)(v540 + 272) >> 16;
  v217 = *(_QWORD *)(v540 + 264);
  *(_QWORD *)(v540 + 264) = v217 + 1;
  v218 = *(_BYTE *)(((unsigned __int64)&v557[v217 - 508] >> 3) + 0x7FFF8000);
  if ( v218 <= ((v217 + (unsigned __int8)v540 - 64 + 4) & 7) && v218 )
  {
    v5 = __asan_report_store1(&v557[v217 - 508], v217 + 1, v217, v216);
  }
  else
  {
    v557[v217 - 508] = v216;
    if ( v217 != 63 )
      goto LABEL_309;
  }
  *(_QWORD *)(v540 + 264) = 0LL;
  v400 = 0LL;
  while ( 2 )
  {
    if ( v400 <= 0xF )
    {
      v406 = 4 * v400;
      v407 = *(unsigned __int8 *)(((4 * v400 + v5 - 508) >> 3) + 0x7FFF8000);
      if ( (char)v407 <= (char)((4 * v400 + v5 + 4) & 7) && (_BYTE)v407 )
      {
        __asan_report_load1(4 * v400 + v5 - 508, v407, 4 * v400 + v5 - 508, v400);
      }
      else
      {
        v401 = *(unsigned __int8 *)(v406 + v5 - 508) << 24;
        v407 = v406 + v5 - 507;
        v408 = *(_BYTE *)((v407 >> 3) + 0x7FFF8000);
        if ( v408 > ((v406 + (unsigned __int8)v5 + 5) & 7) || !v408 )
        {
          v402 = (*(unsigned __int8 *)(v406 + 1 + v5 - 508) << 16) | (unsigned int)v401;
          v407 = v406 + v5 - 506;
          v409 = *(_BYTE *)((v407 >> 3) + 0x7FFF8000);
          if ( v409 > ((v406 + (unsigned __int8)v5 + 6) & 7) || !v409 )
          {
            v404 = (*(unsigned __int8 *)(v406 + 2 + v5 - 508) << 8) | (unsigned int)v402;
            v410 = v406 + 3;
            v403 = v406 + v5 - 505;
            v407 = *(unsigned __int8 *)((v403 >> 3) + 0x7FFF8000);
            if ( (char)v407 > (char)(v403 & 7) || !(_BYTE)v407 )
            {
              v405 = *(unsigned __int8 *)(v410 + v5 - 508) | (unsigned int)v404;
              v411 = *(_BYTE *)(((v5 + 4 * v400 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v400 + 0x80) & 7) + 3) >= v411 && v411 )
              {
                v5 = __asan_report_store4(v5 + 4 * v400 - 384, (((_BYTE)v5 + 4 * (_BYTE)v400 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_577;
            }
LABEL_576:
            v5 = __asan_report_load1(v403, v407, v404, v400);
LABEL_577:
            *(_DWORD *)(v5 + 4 * v400++ - 384) = v405;
            continue;
          }
LABEL_575:
          v403 = v407;
          __asan_report_load1(v407, v407, v402, v400);
          goto LABEL_576;
        }
      }
      __asan_report_load1(v407, v407, v401, v400);
      goto LABEL_575;
    }
    break;
  }
  v412 = 16LL;
  while ( 2 )
  {
    if ( v412 <= 0x4F )
    {
      v414 = v5 + 4 * v412 - 396;
      v415 = *(_BYTE *)((v414 >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v412 + 116) & 7) + 3) >= v415 && v415 )
      {
        __asan_report_load4(v414);
      }
      else
      {
        v414 = v5 + 4 * v412 - 416;
        v416 = *(_BYTE *)((v414 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v412 + 96) & 7) + 3) < v416 || !v416 )
        {
          v414 = v5 + 4 * v412 - 440;
          v417 = *(_BYTE *)((v414 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v412 + 72) & 7) + 3) < v417 || !v417 )
          {
            v414 = v5 + 4 * v412 - 448;
            v418 = *(_BYTE *)((v414 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v412 + 64) & 7) + 3) < v418 || !v418 )
            {
              v413 = __ROL4__(
                       *(_DWORD *)(v5 + 4 * (v412 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v412 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v412 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v412 - 3) - 384),
                       1);
              v419 = *(_BYTE *)(((v5 + 4 * v412 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v412 + 0x80) & 7) + 3) >= v419 && v419 )
              {
                v5 = __asan_report_store4(v5 + 4 * v412 - 384, (((_BYTE)v5 + 4 * (_BYTE)v412 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_595;
            }
LABEL_594:
            v5 = __asan_report_load4(v414);
LABEL_595:
            *(_DWORD *)(v5 + 4 * v412++ - 384) = v413;
            continue;
          }
LABEL_593:
          __asan_report_load4(v414);
          goto LABEL_594;
        }
      }
      __asan_report_load4(v414);
      goto LABEL_593;
    }
    break;
  }
  v420 = *(_DWORD *)(v540 + 176);
  v551 = *(_DWORD *)(v540 + 180);
  v421 = *(_DWORD *)(v540 + 184);
  v422 = *(_DWORD *)(v540 + 188);
  v423 = *(_DWORD *)(v540 + 192);
  v424 = v423;
  v425 = v422;
  v426 = v421;
  v427 = v551;
  v428 = v420;
  v429 = 0LL;
  while ( v429 <= 0x4F )
  {
    if ( v429 <= 0x13 )
    {
      v430 = v425 ^ v427 & (v425 ^ v426);
      v431 = 1518500249;
    }
    else if ( v429 > 0x27 )
    {
      if ( v429 > 0x3B )
      {
        v430 = v425 ^ v427 ^ v426;
        v431 = -899497514;
      }
      else
      {
        v430 = v425 & v426 | v427 & (v425 | v426);
        v431 = -1894007588;
      }
    }
    else
    {
      v430 = v425 ^ v427 ^ v426;
      v431 = 1859775393;
    }
    v432 = v431 + __ROL4__(v428, 5) + v430 + v424;
    v433 = *(_BYTE *)(((v5 + 4 * v429 - 384) >> 3) + 0x7FFF8000);
    if ( (char)(((v5 + 4 * v429 + 0x80) & 7) + 3) >= v433 && v433 )
    {
      v5 = __asan_report_load4(v5 + 4 * v429 - 384);
      break;
    }
    v434 = *(_DWORD *)(v5 + 4 * v429++ - 384) + v432;
    v424 = v425;
    v425 = v426;
    v426 = __ROR4__(v427, 2);
    v427 = v428;
    v428 = v434;
  }
  *(_DWORD *)(v540 + 176) = v420 + v428;
  *(_DWORD *)(v540 + 180) = v551 + v427;
  *(_DWORD *)(v540 + 184) = v421 + v426;
  *(_DWORD *)(v540 + 188) = v422 + v425;
  *(_DWORD *)(v540 + 192) = v423 + v424;
LABEL_309:
  v219 = *(_QWORD *)(v540 + 272) >> 8;
  v220 = *(_QWORD *)(v540 + 264);
  *(_QWORD *)(v540 + 264) = v220 + 1;
  v221 = *(_BYTE *)(((unsigned __int64)&v557[v220 - 508] >> 3) + 0x7FFF8000);
  if ( v221 <= ((v220 + (unsigned __int8)v540 - 64 + 4) & 7) && v221 )
  {
    v5 = __asan_report_store1(&v557[v220 - 508], v220 + 1, v220, v219);
  }
  else
  {
    v557[v220 - 508] = v219;
    if ( v220 != 63 )
      goto LABEL_312;
  }
  *(_QWORD *)(v540 + 264) = 0LL;
  v435 = 0LL;
  while ( 2 )
  {
    if ( v435 <= 0xF )
    {
      v441 = 4 * v435;
      v442 = *(unsigned __int8 *)(((4 * v435 + v5 - 508) >> 3) + 0x7FFF8000);
      if ( (char)v442 <= (char)((4 * v435 + v5 + 4) & 7) && (_BYTE)v442 )
      {
        __asan_report_load1(4 * v435 + v5 - 508, v442, 4 * v435 + v5 - 508, v435);
      }
      else
      {
        v436 = *(unsigned __int8 *)(v441 + v5 - 508) << 24;
        v442 = v441 + v5 - 507;
        v443 = *(_BYTE *)((v442 >> 3) + 0x7FFF8000);
        if ( v443 > ((v441 + (unsigned __int8)v5 + 5) & 7) || !v443 )
        {
          v437 = (*(unsigned __int8 *)(v441 + 1 + v5 - 508) << 16) | (unsigned int)v436;
          v442 = v441 + v5 - 506;
          v444 = *(_BYTE *)((v442 >> 3) + 0x7FFF8000);
          if ( v444 > ((v441 + (unsigned __int8)v5 + 6) & 7) || !v444 )
          {
            v439 = (*(unsigned __int8 *)(v441 + 2 + v5 - 508) << 8) | (unsigned int)v437;
            v445 = v441 + 3;
            v438 = v441 + v5 - 505;
            v442 = *(unsigned __int8 *)((v438 >> 3) + 0x7FFF8000);
            if ( (char)v442 > (char)(v438 & 7) || !(_BYTE)v442 )
            {
              v440 = *(unsigned __int8 *)(v445 + v5 - 508) | (unsigned int)v439;
              v446 = *(_BYTE *)(((v5 + 4 * v435 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v435 + 0x80) & 7) + 3) >= v446 && v446 )
              {
                v5 = __asan_report_store4(v5 + 4 * v435 - 384, (((_BYTE)v5 + 4 * (_BYTE)v435 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_628;
            }
LABEL_627:
            v5 = __asan_report_load1(v438, v442, v439, v435);
LABEL_628:
            *(_DWORD *)(v5 + 4 * v435++ - 384) = v440;
            continue;
          }
LABEL_626:
          v438 = v442;
          __asan_report_load1(v442, v442, v437, v435);
          goto LABEL_627;
        }
      }
      __asan_report_load1(v442, v442, v436, v435);
      goto LABEL_626;
    }
    break;
  }
  v447 = 16LL;
  while ( 2 )
  {
    if ( v447 <= 0x4F )
    {
      v449 = v5 + 4 * v447 - 396;
      v450 = *(_BYTE *)((v449 >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v447 + 116) & 7) + 3) >= v450 && v450 )
      {
        __asan_report_load4(v449);
      }
      else
      {
        v449 = v5 + 4 * v447 - 416;
        v451 = *(_BYTE *)((v449 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v447 + 96) & 7) + 3) < v451 || !v451 )
        {
          v449 = v5 + 4 * v447 - 440;
          v452 = *(_BYTE *)((v449 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v447 + 72) & 7) + 3) < v452 || !v452 )
          {
            v449 = v5 + 4 * v447 - 448;
            v453 = *(_BYTE *)((v449 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v447 + 64) & 7) + 3) < v453 || !v453 )
            {
              v448 = __ROL4__(
                       *(_DWORD *)(v5 + 4 * (v447 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v447 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v447 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v447 - 3) - 384),
                       1);
              v454 = *(_BYTE *)(((v5 + 4 * v447 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v447 + 0x80) & 7) + 3) >= v454 && v454 )
              {
                v5 = __asan_report_store4(v5 + 4 * v447 - 384, (((_BYTE)v5 + 4 * (_BYTE)v447 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_646;
            }
LABEL_645:
            v5 = __asan_report_load4(v449);
LABEL_646:
            *(_DWORD *)(v5 + 4 * v447++ - 384) = v448;
            continue;
          }
LABEL_644:
          __asan_report_load4(v449);
          goto LABEL_645;
        }
      }
      __asan_report_load4(v449);
      goto LABEL_644;
    }
    break;
  }
  v455 = *(_DWORD *)(v540 + 176);
  v552 = *(_DWORD *)(v540 + 180);
  v456 = *(_DWORD *)(v540 + 184);
  v457 = *(_DWORD *)(v540 + 188);
  v458 = *(_DWORD *)(v540 + 192);
  v459 = v458;
  v460 = v457;
  v461 = v456;
  v462 = v552;
  v463 = v455;
  v464 = 0LL;
  while ( v464 <= 0x4F )
  {
    if ( v464 <= 0x13 )
    {
      v465 = v460 ^ v462 & (v460 ^ v461);
      v466 = 1518500249;
    }
    else if ( v464 > 0x27 )
    {
      if ( v464 > 0x3B )
      {
        v465 = v460 ^ v462 ^ v461;
        v466 = -899497514;
      }
      else
      {
        v465 = v460 & v461 | v462 & (v460 | v461);
        v466 = -1894007588;
      }
    }
    else
    {
      v465 = v460 ^ v462 ^ v461;
      v466 = 1859775393;
    }
    v467 = v466 + __ROL4__(v463, 5) + v465 + v459;
    v468 = *(_BYTE *)(((v5 + 4 * v464 - 384) >> 3) + 0x7FFF8000);
    if ( (char)(((v5 + 4 * v464 + 0x80) & 7) + 3) >= v468 && v468 )
    {
      v5 = __asan_report_load4(v5 + 4 * v464 - 384);
      break;
    }
    v469 = *(_DWORD *)(v5 + 4 * v464++ - 384) + v467;
    v459 = v460;
    v460 = v461;
    v461 = __ROR4__(v462, 2);
    v462 = v463;
    v463 = v469;
  }
  *(_DWORD *)(v540 + 176) = v455 + v463;
  *(_DWORD *)(v540 + 180) = v552 + v462;
  *(_DWORD *)(v540 + 184) = v456 + v461;
  *(_DWORD *)(v540 + 188) = v457 + v460;
  *(_DWORD *)(v540 + 192) = v458 + v459;
LABEL_312:
  v222 = *(_QWORD *)(v540 + 264);
  v223 = *(unsigned __int8 *)(((unsigned __int64)&v557[v222 - 508] >> 3) + 0x7FFF8000);
  if ( (char)v223 <= ((v222 + (unsigned __int8)v540 - 64 + 4) & 7) && (_BYTE)v223 )
  {
    v5 = __asan_report_store1(&v557[v222 - 508], v222 + 1, v222, v223);
  }
  else
  {
    v557[v222 - 508] = *(_QWORD *)(v540 + 272);
    if ( v222 != 63 )
      goto LABEL_315;
  }
  v470 = 0LL;
  while ( 2 )
  {
    if ( v470 <= 0xF )
    {
      v476 = 4 * v470;
      v477 = *(unsigned __int8 *)(((4 * v470 + v5 - 508) >> 3) + 0x7FFF8000);
      if ( (char)v477 <= (char)((4 * v470 + v5 + 4) & 7) && (_BYTE)v477 )
      {
        __asan_report_load1(4 * v470 + v5 - 508, v477, 4 * v470 + v5 - 508, v470);
      }
      else
      {
        v471 = *(unsigned __int8 *)(v476 + v5 - 508) << 24;
        v477 = v476 + v5 - 507;
        v478 = *(_BYTE *)((v477 >> 3) + 0x7FFF8000);
        if ( v478 > ((v476 + (unsigned __int8)v5 + 5) & 7) || !v478 )
        {
          v472 = (*(unsigned __int8 *)(v476 + 1 + v5 - 508) << 16) | (unsigned int)v471;
          v477 = v476 + v5 - 506;
          v479 = *(_BYTE *)((v477 >> 3) + 0x7FFF8000);
          if ( v479 > ((v476 + (unsigned __int8)v5 + 6) & 7) || !v479 )
          {
            v474 = (*(unsigned __int8 *)(v476 + 2 + v5 - 508) << 8) | (unsigned int)v472;
            v480 = v476 + 3;
            v473 = v476 + v5 - 505;
            v477 = *(unsigned __int8 *)((v473 >> 3) + 0x7FFF8000);
            if ( (char)v477 > (char)(v473 & 7) || !(_BYTE)v477 )
            {
              v475 = *(unsigned __int8 *)(v480 + v5 - 508) | (unsigned int)v474;
              v481 = *(_BYTE *)(((v5 + 4 * v470 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v470 + 0x80) & 7) + 3) >= v481 && v481 )
              {
                v5 = __asan_report_store4(v5 + 4 * v470 - 384, (((_BYTE)v5 + 4 * (_BYTE)v470 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_679;
            }
LABEL_678:
            v5 = __asan_report_load1(v473, v477, v474, v470);
LABEL_679:
            *(_DWORD *)(v5 + 4 * v470++ - 384) = v475;
            continue;
          }
LABEL_677:
          v473 = v477;
          __asan_report_load1(v477, v477, v472, v470);
          goto LABEL_678;
        }
      }
      __asan_report_load1(v477, v477, v471, v470);
      goto LABEL_677;
    }
    break;
  }
  v482 = 16LL;
  while ( 2 )
  {
    if ( v482 <= 0x4F )
    {
      v484 = v5 + 4 * v482 - 396;
      v485 = *(_BYTE *)((v484 >> 3) + 0x7FFF8000);
      if ( (char)(((v5 + 4 * v482 + 116) & 7) + 3) >= v485 && v485 )
      {
        __asan_report_load4(v484);
      }
      else
      {
        v484 = v5 + 4 * v482 - 416;
        v486 = *(_BYTE *)((v484 >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 4 * v482 + 96) & 7) + 3) < v486 || !v486 )
        {
          v484 = v5 + 4 * v482 - 440;
          v487 = *(_BYTE *)((v484 >> 3) + 0x7FFF8000);
          if ( (char)(((v5 + 4 * v482 + 72) & 7) + 3) < v487 || !v487 )
          {
            v484 = v5 + 4 * v482 - 448;
            v488 = *(_BYTE *)((v484 >> 3) + 0x7FFF8000);
            if ( (char)(((v5 + 4 * v482 + 64) & 7) + 3) < v488 || !v488 )
            {
              v483 = __ROL4__(
                       *(_DWORD *)(v5 + 4 * (v482 - 16) - 384) ^ *(_DWORD *)(v5 + 4 * (v482 - 14) - 384) ^ *(_DWORD *)(v5 + 4 * (v482 - 8) - 384) ^ *(_DWORD *)(v5 + 4 * (v482 - 3) - 384),
                       1);
              v489 = *(_BYTE *)(((v5 + 4 * v482 - 384) >> 3) + 0x7FFF8000);
              if ( (char)(((v5 + 4 * v482 + 0x80) & 7) + 3) >= v489 && v489 )
              {
                v5 = __asan_report_store4(v5 + 4 * v482 - 384, (((_BYTE)v5 + 4 * (_BYTE)v482 + 0x80) & 7u) + 3);
                break;
              }
              goto LABEL_697;
            }
LABEL_696:
            v5 = __asan_report_load4(v484);
LABEL_697:
            *(_DWORD *)(v5 + 4 * v482++ - 384) = v483;
            continue;
          }
LABEL_695:
          __asan_report_load4(v484);
          goto LABEL_696;
        }
      }
      __asan_report_load4(v484);
      goto LABEL_695;
    }
    break;
  }
  v490 = *(_DWORD *)(v540 + 176);
  v553 = *(_DWORD *)(v540 + 180);
  v491 = *(_DWORD *)(v540 + 184);
  v492 = *(_DWORD *)(v540 + 188);
  v493 = *(_DWORD *)(v540 + 192);
  LODWORD(v223) = v493;
  v494 = v492;
  v495 = v491;
  v496 = v553;
  v497 = v490;
  v498 = 0LL;
  while ( v498 <= 0x4F )
  {
    if ( v498 <= 0x13 )
    {
      v499 = v494 ^ v496 & (v494 ^ v495);
      v500 = 1518500249;
    }
    else if ( v498 > 0x27 )
    {
      if ( v498 > 0x3B )
      {
        v499 = v494 ^ v496 ^ v495;
        v500 = -899497514;
      }
      else
      {
        v499 = v494 & v495 | v496 & (v494 | v495);
        v500 = -1894007588;
      }
    }
    else
    {
      v499 = v494 ^ v496 ^ v495;
      v500 = 1859775393;
    }
    v501 = v500 + __ROL4__(v497, 5) + v499 + v223;
    v502 = *(_BYTE *)(((v5 + 4 * v498 - 384) >> 3) + 0x7FFF8000);
    if ( (char)(((v5 + 4 * v498 + 0x80) & 7) + 3) >= v502 && v502 )
    {
      v5 = __asan_report_load4(v5 + 4 * v498 - 384);
      break;
    }
    v503 = *(_DWORD *)(v5 + 4 * v498++ - 384) + v501;
    LODWORD(v223) = v494;
    v494 = v495;
    v495 = __ROR4__(v496, 2);
    v496 = v497;
    v497 = v503;
  }
  *(_DWORD *)(v540 + 176) = v490 + v497;
  *(_DWORD *)(v540 + 180) = v553 + v496;
  *(_DWORD *)(v540 + 184) = v491 + v495;
  *(_DWORD *)(v540 + 188) = v492 + v494;
  LODWORD(v223) = v493 + v223;
  *(_DWORD *)(v540 + 192) = v223;
LABEL_315:
  *(_DWORD *)(v540 + 112) = *(_DWORD *)(v540 + 176);
  *(_DWORD *)(v540 + 116) = *(_DWORD *)(v540 + 180);
  *(_DWORD *)(v540 + 120) = *(_DWORD *)(v540 + 184);
  *(_DWORD *)(v540 + 124) = *(_DWORD *)(v540 + 188);
  *(_DWORD *)(v540 + 128) = *(_DWORD *)(v540 + 192);
  v224 = 0LL;
  while ( 2 )
  {
    if ( (int)v224 <= 4 )
    {
      v504 = (unsigned int)(4 * v224);
      v505 = (int)v504;
      v509 = (int)v504 + v5 - 589;
      v510 = *(_BYTE *)((v509 >> 3) + 0x7FFF8000);
      if ( v510 <= ((4 * v224 + (unsigned __int8)v5 - 77) & 7) && v510 )
      {
        __asan_report_load1(v509, v224, v504, (int)v504);
      }
      else
      {
        v511 = *(_BYTE *)v509;
        v509 = v5 + (int)v504 - 656;
        v512 = *(_BYTE *)((v509 >> 3) + 0x7FFF8000);
        if ( v512 > ((v5 + 4 * (unsigned __int8)v224 + 112) & 7) || !v512 )
        {
          *(_BYTE *)(v5 + (int)v504 - 656) = v511;
          v509 = (int)v504 + v5 - 590;
          v513 = v504 + 1;
          v514 = *(_BYTE *)((v509 >> 3) + 0x7FFF8000);
          if ( v514 > ((4 * v224 + (unsigned __int8)v5 - 78) & 7) || !v514 )
          {
            v515 = *(_BYTE *)v509;
            v509 = v5 + v513 - 656;
            v516 = *(_BYTE *)((v509 >> 3) + 0x7FFF8000);
            if ( v516 > ((v5 + (unsigned __int8)v513 + 112) & 7) || !v516 )
            {
              *(_BYTE *)(v5 + v513 - 656) = v515;
              v509 = (int)v504 + v5 - 591;
              v517 = v504 + 2;
              v518 = *(_BYTE *)((v509 >> 3) + 0x7FFF8000);
              if ( v518 > ((4 * v224 + (unsigned __int8)v5 - 79) & 7) || !v518 )
              {
                v519 = *(_BYTE *)v509;
                v509 = v5 + v517 - 656;
                v520 = *(_BYTE *)((v509 >> 3) + 0x7FFF8000);
                if ( v520 > ((v5 + (unsigned __int8)v517 + 112) & 7) || !v520 )
                {
                  *(_BYTE *)(v5 + v517 - 656) = v519;
                  v507 = (int)v504 + v5 - 592;
                  v506 = (unsigned int)(v504 + 3);
                  v521 = *(_BYTE *)((v507 >> 3) + 0x7FFF8000);
                  if ( v521 > (char)(v507 & 7) || !v521 )
                  {
                    v508 = *(_BYTE *)v507;
                    v223 = *(unsigned __int8 *)(((unsigned __int64)(v5 + (int)v506 - 656) >> 3) + 0x7FFF8000);
                    if ( (char)v223 <= ((v5 + (unsigned __int8)v506 + 112) & 7) && (_BYTE)v223 )
                    {
                      __asan_report_store1(v5 + (int)v506 - 656, v224, v506, v223);
                      break;
                    }
                    goto LABEL_731;
                  }
LABEL_730:
                  v5 = __asan_report_load1(v507, v224, v506, v507);
LABEL_731:
                  *(_BYTE *)(v5 + (int)v506 - 656) = v508;
                  v224 = (unsigned int)(v224 + 1);
                  continue;
                }
LABEL_729:
                __asan_report_store1(v509, v224, v504, v505);
                goto LABEL_730;
              }
LABEL_728:
              __asan_report_load1(v509, v224, v504, v505);
              goto LABEL_729;
            }
LABEL_727:
            __asan_report_store1(v509, v224, v504, v505);
            goto LABEL_728;
          }
LABEL_726:
          __asan_report_load1(v509, v224, v504, v505);
          goto LABEL_727;
        }
      }
      __asan_report_store1(v509, v224, v504, v505);
      goto LABEL_726;
    }
    break;
  }
  v560._M_dataplus._M_p = v560._anon_0._M_local_buf;
  v522 = (std::string::pointer)(v540 + 48);
  std::string::_M_construct<char const*>(
    &v560,
    (const char *)(v540 + 48),
    (const char *)(v540 + 68),
    (std::forward_iterator_tag)v223);
  if ( *(_BYTE *)(((unsigned __int64)str_sha1 >> 3) + 0x7FFF8000) )
  {
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str_sha1;
    __asan_report_load8(str_sha1);
LABEL_767:
    if ( !v560._M_string_length )
      goto LABEL_770;
    if ( v560._M_string_length != 1 )
    {
      memcpy(M_p, v522, v560._M_string_length);
      goto LABEL_770;
    }
    v535 = *(_BYTE *)(((unsigned __int64)v522 >> 3) + 0x7FFF8000);
    v536 = (unsigned __int8)v522 & 7;
    if ( v535 <= (char)v536 && v535 )
    {
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v522;
      __asan_report_load1(v522, v522, v536, v523);
    }
    else
    {
      v537 = (unsigned __int8)*v522;
      v538 = *(_BYTE *)(((unsigned __int64)M_p >> 3) + 0x7FFF8000);
      v523 = (unsigned __int8)M_p & 7;
      if ( v538 > (char)v523 || !v538 )
      {
        M_p->_M_local_buf[0] = v537;
LABEL_770:
        M_string_length = v560._M_string_length;
        p_M_string_length = &str_sha1->_M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&str_sha1->_M_string_length >> 3) + 0x7FFF8000) )
        {
          str_sha1->_M_string_length = v560._M_string_length;
          v532 = (std::string::size_type *)&str_sha1->_M_dataplus._M_p[M_string_length];
          v533 = *(_BYTE *)(((unsigned __int64)v532 >> 3) + 0x7FFF8000);
          v534 = (unsigned __int8)v532 & 7;
          if ( v533 > (char)v534 || !v533 )
          {
            *(_BYTE *)v532 = 0;
            goto LABEL_759;
          }
LABEL_782:
          p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v532, v522, v534, v523);
          goto LABEL_783;
        }
LABEL_781:
        v532 = p_M_string_length;
        __asan_report_store8(p_M_string_length, v522);
        goto LABEL_782;
      }
    }
    p_M_string_length = (std::string::size_type *)__asan_report_store1(M_p, v522, v537, v523);
    goto LABEL_781;
  }
  M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)str_sha1->_M_dataplus._M_p;
  v522 = v560._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v560._M_dataplus._M_p == &v560._anon_0 )
    goto LABEL_767;
  if ( M_p != &str_sha1->_anon_0 )
  {
    p_anon_0 = &str_sha1->_anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&str_sha1->_anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = str_sha1->_anon_0._M_allocated_capacity;
      goto LABEL_755;
    }
LABEL_783:
    __asan_report_load8(p_anon_0);
  }
  M_p = 0LL;
LABEL_755:
  str_sha1->_M_dataplus._M_p = v522;
  if ( *(_BYTE *)(((unsigned __int64)&str_sha1->_M_string_length >> 3) + 0x7FFF8000) )
  {
    p_M_allocated_capacity = __asan_report_store8(&str_sha1->_M_string_length, v522);
    goto LABEL_786;
  }
  str_sha1->_M_string_length = v560._M_string_length;
  p_M_allocated_capacity = (__int64)&str_sha1->_anon_0._M_allocated_capacity;
  v523 = (unsigned __int64)&str_sha1->_anon_0 >> 3;
  if ( *(_BYTE *)(v523 + 0x7FFF8000) )
  {
LABEL_786:
    __asan_report_store8(p_M_allocated_capacity, v522);
    goto LABEL_787;
  }
  str_sha1->_anon_0._M_allocated_capacity = v560._anon_0._M_allocated_capacity;
  if ( !M_p )
  {
LABEL_787:
    v560._M_dataplus._M_p = v560._anon_0._M_local_buf;
    goto LABEL_759;
  }
  v560._M_dataplus._M_p = (std::string::pointer)M_p;
  v560._anon_0._M_allocated_capacity = M_allocated_capacity;
LABEL_759:
  v560._M_string_length = 0LL;
  v527 = *(_BYTE *)(((unsigned __int64)v560._M_dataplus._M_p >> 3) + 0x7FFF8000);
  v528 = (__int64)v560._M_dataplus._M_p & 7;
  if ( v527 <= (char)v528 && v527 )
  {
    __asan_report_store1(v560._M_dataplus._M_p, v522, v528, v523);
LABEL_789:
    result = 0;
    goto LABEL_764;
  }
  *v560._M_dataplus._M_p = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v560._M_dataplus._M_p != &v560._anon_0 )
    operator delete(v560._M_dataplus._M_p);
  result = 1;
LABEL_764:
  if ( v561 == (char *)v540 )
  {
    *(_QWORD *)((v540 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v540 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8050) = 0LL;
  }
  else
  {
    *(_QWORD *)v540 = 1172321806LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v540 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 766: range 000000000C9FC0BE-000000000C9FC13A
bool __fastcall common::tools::StringUtils::isStartsWith(const std::string *str_base, char ch_0)
{
  __int64 v2; // rcx
  std::string::size_type *p_M_string_length; // rax
  char v4; // al
  __int64 v5; // rdx

  p_M_string_length = &str_base->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&str_base->_M_string_length >> 3) + 0x7FFF8000) )
  {
    str_base = (const std::string *)((char *)str_base + 8);
    __asan_report_load8(p_M_string_length);
    goto LABEL_9;
  }
  if ( str_base->_M_string_length )
  {
    if ( !*(_BYTE *)(((unsigned __int64)str_base >> 3) + 0x7FFF8000) )
    {
      str_base = (const std::string *)str_base->_M_dataplus._M_p;
      v4 = *(_BYTE *)(((unsigned __int64)str_base >> 3) + 0x7FFF8000);
      v5 = (unsigned __int8)str_base & 7;
      if ( v4 > (char)v5 || !v4 )
        return LOBYTE(str_base->_M_dataplus._M_p) == ch_0;
LABEL_10:
      __asan_report_load1(str_base, ch_0, v5, v2);
      return 1;
    }
LABEL_9:
    __asan_report_load8(str_base);
    goto LABEL_10;
  }
  return 0;
};

// Line 771: range 000000000C9FD0E8-000000000C9FD110
bool __fastcall common::tools::StringUtils::isStartsWith(const std::string *str_base, const char *str)
{
  size_t v2; // rax

  v2 = strlen(str);
  return common::tools::StringUtils::isStartsWith(str_base, (std::string_view)__PAIR128__((unsigned __int64)str, v2));
};

// Line 776: range 000000000C9FCE9C-000000000C9FD0E2
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall common::tools::StringUtils::isStartsWith(
        unsigned __int64 str_base,
        std::string_view sv,
        std::forward_iterator_tag a3)
{
  std::string *M_p; // r12
  const char *M_str; // r14
  unsigned __int64 v5; // rbp
  _DWORD *v6; // r13
  __int64 v7; // rsi
  std::string::size_type v8; // r14
  std::string::size_type M_string_length; // rdx
  std::string::size_type v10; // rax
  std::string::size_type v11; // rdx
  __int64 v12; // rcx
  _BOOL4 v13; // ebx
  __int64 v15; // rax
  std::string::size_type v16; // r15
  std::string::size_type v17; // r14
  size_t *v18; // rdi
  int v19; // eax
  __int64 v20; // r14
  std::string v21; // [rsp+10h] [rbp-D8h] BYREF
  char v22[184]; // [rsp+30h] [rbp-B8h] BYREF

  M_p = (std::string *)str_base;
  M_str = sv._M_str;
  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_1(128LL);
    if ( v15 )
      v5 = v15;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 16 7 __x:775 64 16 9 __str:775 96 16 6 sv:775";
  *(_QWORD *)(v5 + 16) = common::tools::StringUtils::isStartsWith;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_QWORD *)(v5 + 96) = v7;
  *(_QWORD *)(v5 + 104) = M_str;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v5 + 96);
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(v5 + 96);
  v21._M_dataplus._M_p = v21._anon_0._M_local_buf;
  if ( *(_BYTE *)((str_base >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(str_base);
    goto LABEL_18;
  }
  str_base += 8LL;
  if ( *(_BYTE *)(((unsigned __int64)&M_p->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    v10 = __asan_report_load8(str_base);
    goto LABEL_19;
  }
  M_string_length = M_p->_M_string_length;
  if ( v8 < M_string_length )
    M_string_length = v8;
  std::string::_M_construct<char const*>(&v21, M_p->_M_dataplus._M_p, &M_p->_M_dataplus._M_p[M_string_length], a3);
  v10 = v21._M_string_length;
  M_p = (std::string *)v21._M_dataplus._M_p;
  *(_QWORD *)(v5 + 32) = v21._M_string_length;
  *(_QWORD *)(v5 + 40) = M_p;
  v11 = *(_QWORD *)(v5 + 96);
  v12 = *(_QWORD *)(v5 + 104);
  if ( v10 != v8 )
  {
    v13 = 0;
    goto LABEL_9;
  }
LABEL_19:
  v16 = v11;
  *(_QWORD *)(v5 + 64) = v11;
  *(_QWORD *)(v5 + 72) = v12;
  v17 = v10;
  if ( v11 < v10 )
    v18 = (size_t *)(v5 + 64);
  else
    v18 = (size_t *)(v5 + 32);
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v18);
  }
  else
  {
    if ( *v18 )
    {
      v19 = memcmp(*(const void **)(v5 + 40), *(const void **)(v5 + 72), *v18);
      if ( v19 )
        goto LABEL_27;
    }
    v20 = v17 - v16;
    if ( v20 <= 0x7FFFFFFF )
    {
      if ( v20 < (__int64)0xFFFFFFFF80000000LL )
        v19 = 0x80000000;
      else
        v19 = v20;
      goto LABEL_27;
    }
  }
  v19 = 0x7FFFFFFF;
LABEL_27:
  v13 = v19 == 0;
LABEL_9:
  if ( M_p != (std::string *)&v21._anon_0 )
    operator delete(M_p);
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v13;
};

// Line 781: range 000000000C9FC13C-000000000C9FC1C1
bool __fastcall common::tools::StringUtils::isEndsWith(const std::string *str_base, char ch_0)
{
  std::string::size_type M_string_length; // rax
  std::string::size_type v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&str_base->_M_string_length >> 3) + 0x7FFF8000) )
  {
    str_base = (const std::string *)((char *)str_base + 8);
    __asan_report_load8(str_base);
    goto LABEL_9;
  }
  M_string_length = str_base->_M_string_length;
  if ( M_string_length )
  {
    v3 = M_string_length - 1;
    if ( !*(_BYTE *)(((unsigned __int64)str_base >> 3) + 0x7FFF8000) )
    {
      v4 = (unsigned __int64)&str_base->_M_dataplus._M_p[v3];
      v5 = *(unsigned __int8 *)((v4 >> 3) + 0x7FFF8000);
      v6 = v4 & 7;
      if ( (char)v5 > (char)v6 || !(_BYTE)v5 )
        return *(_BYTE *)v4 == ch_0;
LABEL_10:
      __asan_report_load1(v4, ch_0, v5, v6);
      return 1;
    }
LABEL_9:
    v4 = __asan_report_load8(str_base);
    goto LABEL_10;
  }
  return 0;
};

// Line 786: range 000000000C9FC446-000000000C9FC46E
bool __fastcall common::tools::StringUtils::isEndsWith(const std::string *str_base, const char *str)
{
  size_t v2; // rax

  v2 = strlen(str);
  return common::tools::StringUtils::isEndsWith(str_base, (std::string_view)__PAIR128__((unsigned __int64)str, v2));
};

// Line 791: range 000000000C9FC1C2-000000000C9FC440
// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall common::tools::StringUtils::isEndsWith(const std::string *str_base, std::string_view sv)
{
  unsigned __int64 v2; // r12
  const char *M_str; // r13
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // rbp
  __int64 v7; // rsi
  std::string::size_type *p_M_string_length; // rdi
  unsigned __int64 v9; // rdx
  _BOOL8 result; // rax
  __int64 v11; // rax
  const char *v12; // r13
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  size_t *v18; // rdi
  int v19; // eax
  __int64 v20; // r12
  unsigned __int64 v21; // [rsp+8h] [rbp-D0h] BYREF
  unsigned __int64 v22; // [rsp+10h] [rbp-C8h] BYREF
  void *s1; // [rsp+18h] [rbp-C0h]
  char v24[184]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = (unsigned __int64)str_base;
  M_str = sv._M_str;
  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v4 = v11;
  }
  v5 = v4 + 128;
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 7 __n:790 64 16 9 __str:790 96 16 6 sv:790";
  *(_QWORD *)(v4 + 16) = common::tools::StringUtils::isEndsWith;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_QWORD *)(v4 + 96) = v7;
  *(_QWORD *)(v4 + 104) = M_str;
  p_M_string_length = &str_base->_M_string_length;
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
    goto LABEL_11;
  }
  M_str = *(const char **)(v2 + 8);
  p_M_string_length = (std::string::size_type *)(v4 + 96);
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    v5 = __asan_report_load8(p_M_string_length);
    goto LABEL_12;
  }
  v9 = *(_QWORD *)(v4 + 96);
  if ( (unsigned __int64)M_str < v9 )
  {
    result = 0LL;
    goto LABEL_6;
  }
LABEL_12:
  v12 = &M_str[-v9];
  v13 = v9;
  v14 = *(_QWORD *)(v5 - 24);
  v15 = *(_QWORD *)(v2 + 8);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = (std::string::size_type *)v2;
    __asan_report_load8(v2);
LABEL_27:
    __asan_handle_no_return(p_M_string_length, v14);
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > __size (which is %zu)",
      "basic_string_view::substr",
      (size_t)v12,
      v15);
  }
  v16 = *(_QWORD *)v2;
  *(_QWORD *)(v5 - 96) = -1LL;
  if ( (unsigned __int64)v12 > v15 )
    goto LABEL_27;
  v21 = v15 - (_QWORD)v12;
  if ( v15 - (unsigned __int64)v12 < *(_QWORD *)(v5 - 96) )
    v17 = (unsigned __int64)&v21;
  else
    v17 = v5 - 96;
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load8(v17);
  }
  else
  {
    v22 = *(_QWORD *)v17;
    v2 = v22;
    s1 = (void *)&v12[v16];
    v12 = (const char *)v13;
    *(_QWORD *)(v5 - 64) = v13;
    *(_QWORD *)(v5 - 56) = v14;
    if ( v13 >= v2 )
    {
      v18 = &v22;
      goto LABEL_19;
    }
  }
  v18 = (size_t *)(v5 - 64);
LABEL_19:
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v18);
  }
  else
  {
    if ( *v18 )
    {
      v19 = memcmp(s1, *(const void **)(v5 - 56), *v18);
      if ( v19 )
        goto LABEL_25;
    }
    v20 = v2 - (_QWORD)v12;
    if ( v20 <= 0x7FFFFFFF )
    {
      if ( v20 < (__int64)0xFFFFFFFF80000000LL )
        v19 = 0x80000000;
      else
        v19 = v20;
      goto LABEL_25;
    }
  }
  v19 = 0x7FFFFFFF;
LABEL_25:
  result = v19 == 0;
LABEL_6:
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 804: range 000000000C9FC470-000000000C9FCB78
int32_t __fastcall common::tools::StringUtils::internalStrToNum<int>(
        const std::string *str,
        int *num,
        std::size_t *pos)
{
  std::string *v3; // rbx
  int v4; // r9d
  int v5; // eax
  char v6; // cl
  std::size_t *v8; // rdx

  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(str);
  }
  else
  {
    v3 = (std::string *)num;
    num = (int *)"stoi";
    v5 = __gnu_cxx::__stoa<long,int,char,int>(
           (__int64 (*)(const char *, char **, int))&strtol,
           "stoi",
           str->_M_dataplus._M_p,
           pos,
           10,
           v4);
    v6 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v3 & 7) + 3) < v6 || !v6 )
    {
      LODWORD(v3->_M_dataplus._M_p) = v5;
      return 0;
    }
  }
  __asan_report_store4(v3, num);
  return common::tools::StringUtils::internalStrToNum<long>(v3, (__int64 *)num, v8);
};

// Line 814: range 000000000C9FF004-000000000C9FF01B
void __cdecl GLOBAL__sub_I_string_utils_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 814: range 000000000C9FCB7D-000000000C9FCE9B
// local variable allocation has failed, the output may be wrong!
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  std::forward_iterator_tag v2; // cl

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/string_utils.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringUtils::base64_chars[abi:cxx11] >> 3) + 0x7FFF8000) )
    {
      common::tools::StringUtils::base64_chars[abi:cxx11]._M_dataplus._M_p = common::tools::StringUtils::base64_chars[abi:cxx11]._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(
        (std::string *const)&common::tools::StringUtils::base64_chars[abi:cxx11],
        &byte_19ECBFE0[-64],
        byte_19ECBFE0,
        v2);
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        (void *)&common::tools::StringUtils::base64_chars[abi:cxx11],
        &_dso_handle);
      goto LABEL_3;
    }
    __asan_report_store8(&common::tools::StringUtils::base64_chars[abi:cxx11], *(_QWORD *)&__priority);
    common::tools::StringUtils::cutWord(
      &common::tools::StringUtils::base64_chars[abi:cxx11],
      *(std::vector<std::string> **)&__priority);
  }
};
