// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/milog/src/milog.cpp

// Line 120: range 000000000C98ADFA-000000000C98B86A
int32_t __fastcall common::milog::MiLogHead::printHead(
        common::milog::MiLogHead *const this,
        char *buf,
        int32_t buf_len)
{
  const common::milog::LogLevelInfo *LogLevelInfo; // r13
  __int64 format; // r15
  common::milog::MiLogHead *v5; // rbp
  unsigned __int64 v6; // r14
  _DWORD *v7; // r12
  uint32_t *p_log_level; // rdi
  char v9; // dl
  std::forward_iterator_tag v10; // cl
  char v11; // dl
  std::forward_iterator_tag v12; // cl
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rax
  void *p_head; // rdi
  char v17; // dl
  std::string *p_tv_nsec; // rdi
  std::forward_iterator_tag v19; // cl
  char v20; // al
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ebp
  std::string::pointer M_p; // rdi
  std::string *p_file_line; // rdi
  std::forward_iterator_tag v34; // cl
  char v35; // al
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rsi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  char *v45; // rdi
  char *v46; // rdi
  __int64 v48; // [rsp+0h] [rbp-1C8h]
  char *v49; // [rsp+8h] [rbp-1C0h]
  char *bufa; // [rsp+10h] [rbp-1B8h]
  __int64 v51; // [rsp+18h] [rbp-1B0h]
  __int64 ms; // [rsp+20h] [rbp-1A8h]
  char *func_name; // [rsp+28h] [rbp-1A0h]
  char *file_name; // [rsp+30h] [rbp-198h]
  uint32_t file_line; // [rsp+38h] [rbp-190h]
  uint32_t tid; // [rsp+3Ch] [rbp-18Ch]
  unsigned int v57; // [rsp+40h] [rbp-188h]
  unsigned int v58; // [rsp+44h] [rbp-184h]
  unsigned int v59; // [rsp+48h] [rbp-180h]
  unsigned int v60; // [rsp+4Ch] [rbp-17Ch]
  std::string v61; // [rsp+50h] [rbp-178h] BYREF
  char *v62; // [rsp+70h] [rbp-158h]
  __int64 v63; // [rsp+78h] [rbp-150h]
  __m128i v64; // [rsp+80h] [rbp-148h] BYREF
  char v65[312]; // [rsp+90h] [rbp-138h] BYREF

  v5 = this;
  bufa = buf;
  HIDWORD(v51) = buf_len;
  v6 = (unsigned __int64)v65;
  v49 = v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_2(256LL);
    if ( v15 )
      v6 = v15;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 32 15 func_format:126 96 32 15 head_format:132 160 56 10 cur_tm:156";
  *(_QWORD *)(v6 + 16) = common::milog::MiLogHead::printHead;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862722] = -218959118;
  v7[536862724] = -218959118;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  p_log_level = &this->log_level;
  v9 = *(_BYTE *)(((unsigned __int64)&v5->log_level >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v5 + 116) & 7) + 3) >= v9 && v9 )
  {
    __asan_report_load4(p_log_level);
LABEL_13:
    __asan_report_load4(p_log_level);
LABEL_14:
    __asan_report_load1(p_log_level, buf, v14);
    goto LABEL_15;
  }
  buf = (char *)v5->log_level;
  LogLevelInfo = common::milog::MiLog::getLogLevelInfo(&common::milog::MiLogDefault::default_log_obj_, (uint32_t)buf);
  p_log_level = (uint32_t *)&LogLevelInfo->format;
  v11 = *(_BYTE *)(((unsigned __int64)&LogLevelInfo->format >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)LogLevelInfo + 108) & 7) + 3) >= v11 && v11 )
    goto LABEL_13;
  format = (unsigned int)LogLevelInfo->format;
  *(_QWORD *)(v6 + 32) = v6 + 48;
  buf = (char *)&byte_19EC21EC[-12];
  std::string::_M_construct<char const*>((std::string *const)(v6 + 32), &byte_19EC21EC[-12], byte_19EC21EC, v10);
  p_log_level = (uint32_t *)v5->func_name;
  v13 = *(_BYTE *)(((unsigned __int64)v5->func_name >> 3) + 0x7FFF8000);
  v14 = ((_BYTE)v5 + 84) & 7;
  if ( v13 <= (char)v14 && v13 )
    goto LABEL_14;
  if ( !v5->func_name[0] )
    std::string::_M_replace(v6 + 32, 0LL, *(_QWORD *)(v6 + 40), byte_19EC2220, 0LL);
LABEL_15:
  *(_QWORD *)(v6 + 96) = v6 + 112;
  std::string::_M_construct<char const*>((std::string *const)(v6 + 96), &byte_19EC2263[-3], byte_19EC2263, v12);
  if ( *(_BYTE *)(((unsigned __int64)&LogLevelInfo->head._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&LogLevelInfo->head._M_string_length);
  }
  else if ( LogLevelInfo->head._M_string_length )
  {
    goto LABEL_17;
  }
  std::string::_M_replace(v6 + 96, 0LL, *(_QWORD *)(v6 + 104), "%s", (const char *)2);
LABEL_17:
  if ( (_DWORD)format == 1 )
    goto LABEL_58;
  if ( (_DWORD)format == 2 )
  {
LABEL_88:
    p_head = &LogLevelInfo->head;
    if ( !*(_BYTE *)(((unsigned __int64)&LogLevelInfo->head >> 3) + 0x7FFF8000) )
    {
      v31 = snprintf(bufa, SHIDWORD(v51), *(const char **)(v6 + 96), LogLevelInfo->head._M_dataplus._M_p);
      goto LABEL_90;
    }
    __asan_report_load8(p_head);
    goto LABEL_98;
  }
  if ( (_DWORD)format )
  {
    p_head = &LogLevelInfo->format;
    v17 = *(_BYTE *)(((unsigned __int64)&LogLevelInfo->format >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)LogLevelInfo + 108) & 7) + 3) < v17 || !v17 )
    {
      printf("error level format=%d\n", (unsigned int)LogLevelInfo->format);
LABEL_99:
      v31 = 0;
      goto LABEL_90;
    }
LABEL_98:
    __asan_report_load4(p_head);
    goto LABEL_99;
  }
  p_tv_nsec = (std::string *)&v5->create_time.tv_nsec;
  if ( *(_BYTE *)(((unsigned __int64)&v5->create_time.tv_nsec >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_tv_nsec);
LABEL_33:
    __asan_report_load4(p_tv_nsec);
LABEL_34:
    __asan_report_load4(p_tv_nsec);
    goto LABEL_35;
  }
  ms = v5->create_time.tv_nsec / 1000000;
  localtime_r(&v5->create_time.tv_sec, (struct tm *)(v6 + 160));
  func_name = v5->func_name;
  p_tv_nsec = (std::string *)&v5->file_line;
  v20 = *(_BYTE *)(((unsigned __int64)&v5->file_line >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
    goto LABEL_33;
  file_line = v5->file_line;
  file_name = v5->file_name;
  p_tv_nsec = (std::string *)&v5->tid;
  v21 = *(_BYTE *)(((unsigned __int64)&v5->tid >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
    goto LABEL_34;
  tid = v5->tid;
  v57 = *(_DWORD *)(v6 + 160);
  v58 = *(_DWORD *)(v6 + 164);
  format = *(unsigned int *)(v6 + 168);
  v5 = (common::milog::MiLogHead *)*(unsigned int *)(v6 + 172);
  v59 = *(_DWORD *)(v6 + 176) + 1;
  v60 = *(_DWORD *)(v6 + 180) + 1900;
  p_tv_nsec = &LogLevelInfo->head;
  if ( !*(_BYTE *)(((unsigned __int64)&LogLevelInfo->head >> 3) + 0x7FFF8000) )
  {
    LogLevelInfo = (const common::milog::LogLevelInfo *)LogLevelInfo->head._M_dataplus._M_p;
    p_tv_nsec = &v61;
    v61._M_dataplus._M_p = v61._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v61,
      *(char **)(v6 + 96),
      (char *)(*(_QWORD *)(v6 + 104) + *(_QWORD *)(v6 + 96)),
      v19);
    goto LABEL_36;
  }
LABEL_35:
  __asan_report_load8(p_tv_nsec);
LABEL_36:
  if ( 0x3FFFFFFFFFFFFFFFLL - v61._M_string_length <= 0x25 )
  {
    __asan_handle_no_return(p_tv_nsec);
    std::__throw_length_error("basic_string::append");
  }
  std::string::_M_append(&v61, "%04d-%02d-%02d %02d:%02d:%02d %03d %d ", 38LL, v22, v23, v24, v48, v65, bufa, v51);
  v25 = *(_QWORD *)(v6 + 32);
  v26 = std::string::_M_append(&v61, (const char *)v25, *(_QWORD *)(v6 + 40));
  v62 = (char *)&v64;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
    v26 = __asan_report_load8(v26);
  }
  else
  {
    v27 = v26 + 16;
    if ( *(_QWORD *)v26 != v26 + 16 )
    {
      v62 = *(char **)v26;
      v28 = v26 + 16;
      if ( !*(_BYTE *)(((v26 + 16) >> 3) + 0x7FFF8000) )
      {
        v64.m128i_i64[0] = *(_QWORD *)(v26 + 16);
        goto LABEL_43;
      }
LABEL_55:
      __asan_report_load8(v28);
      goto LABEL_56;
    }
  }
  v28 = v27;
  v25 = *(unsigned __int8 *)(((v26 + 31) >> 3) + 0x7FFF8000);
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v27 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v27 & 7)
    || (_BYTE)v25 != 0 && (char)v25 <= (char)((v26 + 31) & 7) )
  {
    v25 = 16LL;
    __asan_report_load_n(v27, 16LL);
    goto LABEL_55;
  }
  v64 = _mm_loadu_si128((const __m128i *)(v26 + 16));
LABEL_43:
  v28 = v26 + 8;
  if ( *(_BYTE *)(((v26 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_load8(v28);
LABEL_57:
    __asan_report_store1(v28, v25, v29, v30);
LABEL_58:
    p_file_line = (std::string *)&v5->create_time.tv_nsec;
    if ( *(_BYTE *)(((unsigned __int64)&v5->create_time.tv_nsec >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_file_line);
    }
    else
    {
      ms = v5->create_time.tv_nsec / 1000000;
      localtime_r(&v5->create_time.tv_sec, (struct tm *)(v6 + 160));
      func_name = v5->func_name;
      p_file_line = (std::string *)&v5->file_line;
      v35 = *(_BYTE *)(((unsigned __int64)&v5->file_line >> 3) + 0x7FFF8000);
      if ( !v35 || v35 > 3 )
      {
        file_line = v5->file_line;
        file_name = v5->file_name;
        tid = *(_DWORD *)(v6 + 160);
        v57 = *(_DWORD *)(v6 + 164);
        format = *(unsigned int *)(v6 + 168);
        v5 = (common::milog::MiLogHead *)*(unsigned int *)(v6 + 172);
        v58 = *(_DWORD *)(v6 + 176) + 1;
        v59 = *(_DWORD *)(v6 + 180) + 1900;
        p_file_line = &LogLevelInfo->head;
        if ( !*(_BYTE *)(((unsigned __int64)&LogLevelInfo->head >> 3) + 0x7FFF8000) )
        {
          LogLevelInfo = (const common::milog::LogLevelInfo *)LogLevelInfo->head._M_dataplus._M_p;
          p_file_line = &v61;
          v61._M_dataplus._M_p = v61._anon_0._M_local_buf;
          std::string::_M_construct<char *>(
            &v61,
            *(char **)(v6 + 96),
            (char *)(*(_QWORD *)(v6 + 104) + *(_QWORD *)(v6 + 96)),
            v34);
          goto LABEL_66;
        }
LABEL_65:
        __asan_report_load8(p_file_line);
LABEL_66:
        if ( 0x3FFFFFFFFFFFFFFFLL - v61._M_string_length <= 0x22 )
        {
          __asan_handle_no_return(p_file_line);
          std::__throw_length_error("basic_string::append");
        }
        std::string::_M_append(&v61, "%04d-%02d-%02d %02d:%02d:%02d %03d ", 35LL, v36, v37, v38, v48, v49, bufa);
        v39 = *(_QWORD *)(v6 + 32);
        v40 = std::string::_M_append(&v61, (const char *)v39, *(_QWORD *)(v6 + 40));
        v62 = (char *)&v64;
        if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
        {
          v40 = __asan_report_load8(v40);
        }
        else
        {
          v41 = v40 + 16;
          if ( *(_QWORD *)v40 != v40 + 16 )
          {
            v62 = *(char **)v40;
            v42 = v40 + 16;
            if ( !*(_BYTE *)(((v40 + 16) >> 3) + 0x7FFF8000) )
            {
              v64.m128i_i64[0] = *(_QWORD *)(v40 + 16);
              goto LABEL_73;
            }
            goto LABEL_85;
          }
        }
        v42 = v41;
        v39 = *(unsigned __int8 *)(((v40 + 31) >> 3) + 0x7FFF8000);
        if ( (*(_BYTE *)((v41 >> 3) + 0x7FFF8000) == 0
           || *(_BYTE *)((v41 >> 3) + 0x7FFF8000) > (unsigned __int8)(v41 & 7))
          && ((_BYTE)v39 == 0 || (char)v39 > (char)((v40 + 31) & 7)) )
        {
          v64 = _mm_loadu_si128((const __m128i *)(v40 + 16));
LABEL_73:
          v42 = v40 + 8;
          if ( !*(_BYTE *)(((v40 + 8) >> 3) + 0x7FFF8000) )
          {
            v63 = *(_QWORD *)(v40 + 8);
            *(_QWORD *)v40 = v41;
            *(_QWORD *)(v40 + 8) = 0LL;
            v42 = v40 + 16;
            v43 = *(unsigned __int8 *)(((v40 + 16) >> 3) + 0x7FFF8000);
            v44 = ((_BYTE)v40 + 16) & 7;
            if ( (char)v43 > (char)v44 || !(_BYTE)v43 )
            {
              *(_BYTE *)(v40 + 16) = 0;
              v31 = snprintf(
                      bufa,
                      SHIDWORD(v51),
                      v62,
                      LogLevelInfo,
                      v59,
                      v58,
                      v5,
                      format,
                      v57,
                      tid,
                      (unsigned int)ms,
                      file_name,
                      file_line,
                      func_name);
              if ( v62 != (char *)&v64 )
                operator delete(v62);
              M_p = v61._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v61._M_dataplus._M_p != &v61._anon_0 )
                goto LABEL_49;
              goto LABEL_90;
            }
            goto LABEL_87;
          }
LABEL_86:
          __asan_report_load8(v42);
LABEL_87:
          __asan_report_store1(v42, v39, v43, v44);
          goto LABEL_88;
        }
        v39 = 16LL;
        __asan_report_load_n(v41, 16LL);
LABEL_85:
        __asan_report_load8(v42);
        goto LABEL_86;
      }
    }
    __asan_report_load4(p_file_line);
    goto LABEL_65;
  }
  v63 = *(_QWORD *)(v26 + 8);
  *(_QWORD *)v26 = v27;
  *(_QWORD *)(v26 + 8) = 0LL;
  v28 = v26 + 16;
  v29 = *(unsigned __int8 *)(((v26 + 16) >> 3) + 0x7FFF8000);
  v30 = ((_BYTE)v26 + 16) & 7;
  if ( (char)v29 <= (char)v30 && (_BYTE)v29 )
    goto LABEL_57;
  *(_BYTE *)(v26 + 16) = 0;
  v31 = snprintf(
          bufa,
          SHIDWORD(v51),
          v62,
          LogLevelInfo,
          v60,
          v59,
          v5,
          format,
          v58,
          v57,
          (unsigned int)ms,
          tid,
          file_name,
          file_line,
          func_name);
  if ( v62 != (char *)&v64 )
    operator delete(v62);
  M_p = v61._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v61._M_dataplus._M_p != &v61._anon_0 )
LABEL_49:
    operator delete(M_p);
LABEL_90:
  v45 = *(char **)(v6 + 96);
  if ( v45 != (char *)(v6 + 112) )
    operator delete(v45);
  v46 = *(char **)(v6 + 32);
  if ( v46 != (char *)(v6 + 48) )
    operator delete(v46);
  if ( v49 == (char *)v6 )
  {
    *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v31;
};

// Line 180: range 000000000C98A398-000000000C98A3F5
int32_t __fastcall common::milog::MiLogHead::printBody(
        common::milog::MiLogHead *const this,
        char *buf,
        int32_t buf_len)
{
  int32_t v3; // ebx
  char *v4; // r8
  common::milog::MiLogHead *v5; // r9
  char v6; // si
  int32_t v7; // eax

  v4 = buf;
  v5 = this + 1;
  v6 = *(_BYTE *)(((unsigned __int64)&this->total_len >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 124) & 7) + 3) >= v6 && v6 )
  {
    v7 = __asan_report_load4(&this->total_len);
    goto LABEL_7;
  }
  v7 = this->total_len - 144;
  v3 = v7;
  if ( v7 <= buf_len )
  {
LABEL_7:
    memcpy(v4, v5, v7);
    return v3;
  }
  return 0;
};

// Line 192: range 000000000C98A3F8-000000000C98A572
void __fastcall common::milog::MiLogHead::release(common::milog::MiLogHead *const this)
{
  int32_t *p_skip_len; // rsi
  int32_t *p_total_len; // rcx
  char v3; // cl
  unsigned __int64 p_end_idx; // rax
  char *v5; // rsi
  common::milog::MiLogBuf *milog_buf_ptr; // rax
  char **p_data; // rdx
  char *data; // rcx
  std::atomic<int> *v9; // r8
  char v10; // r9
  std::__atomic_base<int>::__int_type M_i; // eax
  unsigned __int64 v12; // rdi
  char v13; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->milog_buf_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->milog_buf_ptr);
LABEL_16:
    __asan_report_load4(p_total_len);
LABEL_17:
    p_end_idx = __asan_report_load4(p_skip_len);
LABEL_18:
    __asan_report_store4(p_end_idx, p_skip_len);
    goto LABEL_19;
  }
  p_total_len = &this->total_len;
  p_skip_len = (int32_t *)*(unsigned __int8 *)(((unsigned __int64)&this->total_len >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 124) & 7) + 3) >= (char)p_skip_len && (_BYTE)p_skip_len )
    goto LABEL_16;
  p_skip_len = &this->skip_len;
  v3 = *(_BYTE *)(((unsigned __int64)&this->skip_len >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
    goto LABEL_17;
  p_end_idx = (unsigned __int64)&this->milog_buf_ptr->end_idx_;
  p_skip_len = (int32_t *)*(unsigned __int8 *)((p_end_idx >> 3) + 0x7FFF8000);
  if ( (char)((p_end_idx & 7) + 3) >= (char)p_skip_len && (_BYTE)p_skip_len )
    goto LABEL_18;
  _InterlockedAdd((volatile signed __int32 *)p_end_idx, this->skip_len + this->total_len);
  v5 = (char *)this + this->total_len;
  milog_buf_ptr = this->milog_buf_ptr;
  p_data = &milog_buf_ptr->data_;
  if ( *(_BYTE *)(((unsigned __int64)&milog_buf_ptr->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(p_data);
LABEL_20:
    v12 = (unsigned __int64)v9;
    __asan_report_load4(v9);
LABEL_21:
    __asan_report_load4(v12);
LABEL_22:
    __asan_handle_no_return(v12);
    __assert_fail("this_end == buf_end", "src/milog.cpp", 0xC4u, "void common::milog::MiLogHead::release()");
  }
  data = milog_buf_ptr->data_;
  v9 = &milog_buf_ptr->end_idx_;
  v10 = *(_BYTE *)(((unsigned __int64)&milog_buf_ptr->end_idx_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)milog_buf_ptr + 20) & 7) + 3) >= v10 && v10 )
    goto LABEL_20;
  M_i = milog_buf_ptr->end_idx_._M_i;
  v12 = (unsigned __int64)this->milog_buf_ptr;
  v13 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_21;
  if ( v5 != &data[M_i % *(_DWORD *)v12] )
    goto LABEL_22;
};

// Line 201: range 000000000C98F084-000000000C98FD6F
void __fastcall common::milog::MiLog::MiLog(common::milog::MiLog *const this)
{
  __int64 v1; // rsi
  std::vector<std::shared_ptr<common::milog::MiLogBuf>> *p_buf_vec; // r12
  std::vector<std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> >> *p_queue_vec; // r13
  common::milog::MiLog *v4; // rbx
  char v5; // dl
  char v6; // dl
  char v7; // dl
  char v8; // dl
  char v9; // dl
  char v10; // al
  std::_Rb_tree_header *v11; // rax
  char v12; // al
  std::_Rb_tree_header *v13; // rax
  __int64 v14; // rdx
  void *p_is_log_file_init; // rdi
  char v16; // al
  __int64 v17; // rdx
  signed __int8 v18; // dl
  __int64 v19; // rax
  common::milog::MiLog::WriteBuffer *p_write_buf; // rdi
  std::_Vector_base<std::shared_ptr<common::milog::MiLogBuf>>::pointer *p_M_start; // rdi
  void *p_M_finish; // rdi
  char v23; // cl
  std::forward_iterator_tag v24; // cl
  std::forward_iterator_tag v25; // cl
  std::forward_iterator_tag v26; // cl
  std::forward_iterator_tag v27; // cl
  std::forward_iterator_tag v28; // cl
  std::forward_iterator_tag v29; // cl
  std::forward_iterator_tag v30; // cl
  std::forward_iterator_tag v31; // cl
  std::forward_iterator_tag v32; // cl
  std::forward_iterator_tag v33; // cl
  std::forward_iterator_tag v34; // cl
  std::forward_iterator_tag v35; // cl
  std::forward_iterator_tag v36; // cl
  std::forward_iterator_tag v37; // cl
  std::forward_iterator_tag v38; // cl
  std::forward_iterator_tag v39; // cl
  std::forward_iterator_tag v40; // cl
  std::string v41; // [rsp-10h] [rbp-A0h] BYREF
  std::string v42; // [rsp+10h] [rbp-80h] BYREF
  std::string v43; // [rsp+30h] [rbp-60h] BYREF
  _BYTE v44[64]; // [rsp+50h] [rbp-40h] BYREF

  v4 = this;
  v5 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v5 && v5 )
  {
    __asan_report_store4(this, v1);
    goto LABEL_26;
  }
  this->max_log_len_._M_i = 4096;
  this = (common::milog::MiLog *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v4->log_level_mask_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8(this, v1);
LABEL_27:
    __asan_report_store2(this);
LABEL_28:
    __asan_report_store4(this, v1);
LABEL_29:
    __asan_report_store4(this, v1);
LABEL_30:
    __asan_report_store4(this, v1);
LABEL_31:
    __asan_report_store4(this, v1);
    goto LABEL_32;
  }
  v4->log_level_mask_._M_i = 0LL;
  this = (common::milog::MiLog *const)&v4->log_cut_time_;
  v6 = *(_BYTE *)(((unsigned __int64)&v4->log_cut_time_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v4 + 16) & 7) + 1) >= v6 && v6 )
    goto LABEL_27;
  v4->log_cut_time_._M_i = 0;
  this = (common::milog::MiLog *const)&v4->log_keep_time_;
  v7 = *(_BYTE *)(((unsigned __int64)&v4->log_keep_time_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v4 + 20) & 7) + 3) >= v7 && v7 )
    goto LABEL_28;
  v4->log_keep_time_._M_i = 0;
  this = (common::milog::MiLog *const)&v4->log_buf_size_;
  v8 = *(_BYTE *)(((unsigned __int64)&v4->log_buf_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v4 + 24) & 7) + 3) >= v8 && v8 )
    goto LABEL_29;
  v4->log_buf_size_._M_i = 24576;
  this = (common::milog::MiLog *const)&v4->log_queue_size_;
  v9 = *(_BYTE *)(((unsigned __int64)&v4->log_queue_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v4 + 28) & 7) + 3) >= v9 && v9 )
    goto LABEL_30;
  v4->log_queue_size_._M_i = 6144;
  this = (common::milog::MiLog *const)&v4->milog_file_map_._M_t._M_impl.std::_Rb_tree_header;
  v10 = *(_BYTE *)(((unsigned __int64)&v4->milog_file_map_._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_31;
  v4->milog_file_map_._M_t._M_impl._M_header._M_color = _S_red;
  this = (common::milog::MiLog *const)&v4->milog_file_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v4->milog_file_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8(this, v1);
    goto LABEL_33;
  }
  v4->milog_file_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v11 = &v4->milog_file_map_._M_t._M_impl.std::_Rb_tree_header;
  this = (common::milog::MiLog *const)&v4->milog_file_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&v4->milog_file_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8(this, v1);
    goto LABEL_34;
  }
  v4->milog_file_map_._M_t._M_impl._M_header._M_left = &v11->_M_header;
  this = (common::milog::MiLog *const)&v4->milog_file_map_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&v4->milog_file_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8(this, v1);
    goto LABEL_35;
  }
  v4->milog_file_map_._M_t._M_impl._M_header._M_right = &v11->_M_header;
  this = (common::milog::MiLog *const)&v4->milog_file_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&v4->milog_file_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8(this, v1);
LABEL_36:
    __asan_report_store4(this, v1);
    goto LABEL_37;
  }
  v4->milog_file_map_._M_t._M_impl._M_node_count = 0LL;
  this = (common::milog::MiLog *const)&v4->log_level_info_map_._M_t._M_impl.std::_Rb_tree_header;
  v12 = *(_BYTE *)(((unsigned __int64)&v4->log_level_info_map_._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_36;
  v4->log_level_info_map_._M_t._M_impl._M_header._M_color = _S_red;
  this = (common::milog::MiLog *const)&v4->log_level_info_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v4->log_level_info_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8(this, v1);
    goto LABEL_38;
  }
  v4->log_level_info_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v13 = &v4->log_level_info_map_._M_t._M_impl.std::_Rb_tree_header;
  this = (common::milog::MiLog *const)&v4->log_level_info_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&v4->log_level_info_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_store8(this, v1);
    goto LABEL_39;
  }
  v4->log_level_info_map_._M_t._M_impl._M_header._M_left = &v13->_M_header;
  this = (common::milog::MiLog *const)&v4->log_level_info_map_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&v4->log_level_info_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8(this, v1);
    goto LABEL_40;
  }
  v4->log_level_info_map_._M_t._M_impl._M_header._M_right = &v13->_M_header;
  this = (common::milog::MiLog *const)&v4->log_level_info_map_._M_t._M_impl._M_node_count;
  if ( !*(_BYTE *)(((unsigned __int64)&v4->log_level_info_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
    v4->log_level_info_map_._M_t._M_impl._M_node_count = 0LL;
    common::milog::MiLogFile::MiLogFile(&v4->default_log_file_);
    goto LABEL_41;
  }
LABEL_40:
  __asan_report_store8(this, v1);
LABEL_41:
  p_is_log_file_init = (void *)&v4->is_log_file_init_;
  if ( *(char *)(((unsigned __int64)&v4->is_log_file_init_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(p_is_log_file_init, v1, v14);
LABEL_50:
    __asan_report_store1(p_is_log_file_init, v1, v17);
LABEL_51:
    v1 = 40LL;
    __asan_report_store_n(p_is_log_file_init, 40LL);
    goto LABEL_52;
  }
  v4->is_log_file_init_ = 0;
  p_is_log_file_init = &v4->is_watch_thread_run_;
  v16 = *(_BYTE *)(((unsigned __int64)&v4->is_watch_thread_run_ >> 3) + 0x7FFF8000);
  v17 = ((_BYTE)v4 + 41) & 7;
  if ( v16 <= (char)v17 && v16 )
    goto LABEL_50;
  v4->is_watch_thread_run_._M_base._M_i = 0;
  p_is_log_file_init = &v4->flush_mutex;
  v18 = *(_BYTE *)((((unsigned __int64)&v4->flush_mutex._M_mutex.__align + 39) >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v18 <= (((unsigned __int8)v4 + 95) & 7);
  if ( ((v18 != 0) & (unsigned __int8)v1) != 0 || *(char *)(((unsigned __int64)&v4->flush_mutex >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_51;
  v4->flush_mutex._M_mutex.__align = 0LL;
  *(&v4->flush_mutex._M_mutex.__align + 1) = 0LL;
  *(&v4->flush_mutex._M_mutex.__align + 2) = 0LL;
  v4->flush_mutex._M_mutex.__data.__list.__prev = 0LL;
  v4->flush_mutex._M_mutex.__data.__list.__next = 0LL;
  p_is_log_file_init = &v4->write_buf;
  if ( *(_BYTE *)(((unsigned __int64)&v4->write_buf >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8(p_is_log_file_init, v1);
    goto LABEL_53;
  }
  v4->write_buf.data_ = 0LL;
  p_is_log_file_init = &v4->write_buf.cur_;
  if ( !*(_BYTE *)(((unsigned __int64)&v4->write_buf.cur_ >> 3) + 0x7FFF8000) )
  {
    v4->write_buf.cur_ = 0LL;
    v19 = operator new[](0x4000uLL);
    goto LABEL_54;
  }
LABEL_53:
  v19 = __asan_report_store8(p_is_log_file_init, v1);
LABEL_54:
  p_write_buf = &v4->write_buf;
  if ( *(_BYTE *)(((unsigned __int64)&v4->write_buf >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_write_buf, v1);
    goto LABEL_66;
  }
  v4->write_buf.data_ = (char *)v19;
  p_write_buf = (common::milog::MiLog::WriteBuffer *)&v4->write_buf.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v4->write_buf.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_store8(p_write_buf, v1);
    goto LABEL_67;
  }
  v4->write_buf.cur_ = (char *)v19;
  p_buf_vec = &v4->buf_vec;
  if ( *(_BYTE *)(((unsigned __int64)&v4->buf_vec >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    p_M_start = &p_buf_vec->_M_impl._M_start;
    __asan_report_store8(p_buf_vec, v1);
    goto LABEL_68;
  }
  v4->buf_vec._M_impl._M_start = 0LL;
  p_M_start = &v4->buf_vec._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v4->buf_vec._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8(p_M_start, v1);
    goto LABEL_69;
  }
  v4->buf_vec._M_impl._M_finish = 0LL;
  p_M_start = &v4->buf_vec._M_impl._M_end_of_storage;
  if ( *(_BYTE *)(((unsigned __int64)&v4->buf_vec._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_store8(p_M_start, v1);
    goto LABEL_70;
  }
  v4->buf_vec._M_impl._M_end_of_storage = 0LL;
  p_queue_vec = &v4->queue_vec;
  if ( *(_BYTE *)(((unsigned __int64)&v4->queue_vec >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    p_M_finish = p_queue_vec;
    __asan_report_store8(p_queue_vec, v1);
    goto LABEL_71;
  }
  v4->queue_vec._M_impl._M_start = 0LL;
  p_M_finish = &v4->queue_vec._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v4->queue_vec._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8(p_M_finish, v1);
    goto LABEL_72;
  }
  v4->queue_vec._M_impl._M_finish = 0LL;
  p_M_finish = &v4->queue_vec._M_impl._M_end_of_storage;
  if ( *(_BYTE *)(((unsigned __int64)&v4->queue_vec._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_store8(p_M_finish, v1);
    goto LABEL_73;
  }
  v4->queue_vec._M_impl._M_end_of_storage = 0LL;
  p_M_finish = &v4->buf_create_mutex;
  v23 = *(_BYTE *)(((unsigned __int64)&v4->buf_create_mutex >> 3) + 0x7FFF8000);
  if ( (*(_BYTE *)((((unsigned __int64)&v4->buf_create_mutex._M_mutex.__align + 39) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v4->buf_create_mutex._M_mutex.__align + 39) >> 3) + 0x7FFF8000) > (((unsigned __int8)v4 - 57) & 7))
    && v23 >= 0 )
  {
    v4->buf_create_mutex._M_mutex.__align = 0LL;
    *(&v4->buf_create_mutex._M_mutex.__align + 1) = 0LL;
    *(&v4->buf_create_mutex._M_mutex.__align + 2) = 0LL;
    v4->buf_create_mutex._M_mutex.__data.__list.__prev = 0LL;
    v4->buf_create_mutex._M_mutex.__data.__list.__next = 0LL;
    v43._anon_0._M_allocated_capacity = (std::string::size_type)v44;
    std::string::_M_construct<char const*>(
      (std::string *const)&v43._anon_0,
      byte_19EC2220,
      byte_19EC2220,
      (std::forward_iterator_tag)v23);
    goto LABEL_74;
  }
LABEL_73:
  __asan_report_store_n(p_M_finish, 40LL);
LABEL_74:
  v42._anon_0._M_allocated_capacity = (std::string::size_type)&v43;
  std::string::_M_construct<char const*>((std::string *const)&v42._anon_0, &byte_19EC21A9[-9], byte_19EC21A9, v24);
  v41._anon_0._M_allocated_capacity = (std::string::size_type)&v42;
  std::string::_M_construct<char const*>((std::string *const)&v41._anon_0, &byte_19EC2165[-5], byte_19EC2165, v25);
  v41._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    v4,
    1u,
    v41,
    v42,
    v43,
    (common::milog::LogColor)&v41._anon_0,
    (common::milog::LogFormat)&v42._anon_0);
  if ( (std::string *)v41._anon_0._M_allocated_capacity != &v42 )
    operator delete((void *)v41._anon_0._M_allocated_capacity);
  if ( (std::string *)v42._anon_0._M_allocated_capacity != &v43 )
    operator delete((void *)v42._anon_0._M_allocated_capacity);
  if ( (_BYTE *)v43._anon_0._M_allocated_capacity != v44 )
    operator delete((void *)v43._anon_0._M_allocated_capacity);
  v43._anon_0._M_allocated_capacity = (std::string::size_type)v44;
  std::string::_M_construct<char const*>((std::string *const)&v43._anon_0, byte_19EC2220, byte_19EC2220, v26);
  v42._anon_0._M_allocated_capacity = (std::string::size_type)&v43;
  std::string::_M_construct<char const*>((std::string *const)&v42._anon_0, &byte_19EC2628[-8], byte_19EC2628, v27);
  v41._anon_0._M_allocated_capacity = (std::string::size_type)&v42;
  std::string::_M_construct<char const*>((std::string *const)&v41._anon_0, &byte_19EC2664[-4], byte_19EC2664, v28);
  v41._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    v4,
    2u,
    v41,
    v42,
    v43,
    (common::milog::LogColor)&v41._anon_0,
    (common::milog::LogFormat)&v42._anon_0);
  if ( (std::string *)v41._anon_0._M_allocated_capacity != &v42 )
    operator delete((void *)v41._anon_0._M_allocated_capacity);
  if ( (std::string *)v42._anon_0._M_allocated_capacity != &v43 )
    operator delete((void *)v42._anon_0._M_allocated_capacity);
  if ( (_BYTE *)v43._anon_0._M_allocated_capacity != v44 )
    operator delete((void *)v43._anon_0._M_allocated_capacity);
  v43._anon_0._M_allocated_capacity = (std::string::size_type)v44;
  std::string::_M_construct<char const*>((std::string *const)&v43._anon_0, byte_19EC2220, byte_19EC2220, v29);
  v42._anon_0._M_allocated_capacity = (std::string::size_type)&v43;
  std::string::_M_construct<char const*>((std::string *const)&v42._anon_0, &byte_19EC26AB[-11], byte_19EC26AB, v30);
  v41._anon_0._M_allocated_capacity = (std::string::size_type)&v42;
  std::string::_M_construct<char const*>((std::string *const)&v41._anon_0, &byte_19EC26E7[-7], byte_19EC26E7, v31);
  v41._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    v4,
    3u,
    v41,
    v42,
    v43,
    (common::milog::LogColor)&v41._anon_0,
    (common::milog::LogFormat)&v42._anon_0);
  if ( (std::string *)v41._anon_0._M_allocated_capacity != &v42 )
    operator delete((void *)v41._anon_0._M_allocated_capacity);
  if ( (std::string *)v42._anon_0._M_allocated_capacity != &v43 )
    operator delete((void *)v42._anon_0._M_allocated_capacity);
  if ( (_BYTE *)v43._anon_0._M_allocated_capacity != v44 )
    operator delete((void *)v43._anon_0._M_allocated_capacity);
  v43._anon_0._M_allocated_capacity = (std::string::size_type)v44;
  std::string::_M_construct<char const*>((std::string *const)&v43._anon_0, byte_19EC2220, byte_19EC2220, v32);
  v42._anon_0._M_allocated_capacity = (std::string::size_type)&v43;
  std::string::_M_construct<char const*>((std::string *const)&v42._anon_0, &byte_19EC2729[-9], byte_19EC2729, v33);
  v41._anon_0._M_allocated_capacity = (std::string::size_type)&v42;
  std::string::_M_construct<char const*>((std::string *const)&v41._anon_0, &byte_19EC2765[-5], byte_19EC2765, v34);
  v41._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    v4,
    4u,
    v41,
    v42,
    v43,
    (common::milog::LogColor)&v41._anon_0,
    (common::milog::LogFormat)&v42._anon_0);
  if ( (std::string *)v41._anon_0._M_allocated_capacity != &v42 )
    operator delete((void *)v41._anon_0._M_allocated_capacity);
  if ( (std::string *)v42._anon_0._M_allocated_capacity != &v43 )
    operator delete((void *)v42._anon_0._M_allocated_capacity);
  if ( (_BYTE *)v43._anon_0._M_allocated_capacity != v44 )
    operator delete((void *)v43._anon_0._M_allocated_capacity);
  v43._anon_0._M_allocated_capacity = (std::string::size_type)v44;
  std::string::_M_construct<char const*>((std::string *const)&v43._anon_0, byte_19EC2220, byte_19EC2220, v35);
  v42._anon_0._M_allocated_capacity = (std::string::size_type)&v43;
  std::string::_M_construct<char const*>((std::string *const)&v42._anon_0, &byte_19EC27AA[-10], byte_19EC27AA, v36);
  v41._anon_0._M_allocated_capacity = (std::string::size_type)&v42;
  std::string::_M_construct<char const*>((std::string *const)&v41._anon_0, &byte_19EC27E6[-6], byte_19EC27E6, v37);
  v41._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    v4,
    5u,
    v41,
    v42,
    v43,
    (common::milog::LogColor)&v41._anon_0,
    (common::milog::LogFormat)&v42._anon_0);
  if ( (std::string *)v41._anon_0._M_allocated_capacity != &v42 )
    operator delete((void *)v41._anon_0._M_allocated_capacity);
  if ( (std::string *)v42._anon_0._M_allocated_capacity != &v43 )
    operator delete((void *)v42._anon_0._M_allocated_capacity);
  if ( (_BYTE *)v43._anon_0._M_allocated_capacity != v44 )
    operator delete((void *)v43._anon_0._M_allocated_capacity);
  v43._anon_0._M_allocated_capacity = (std::string::size_type)v44;
  std::string::_M_construct<char const*>((std::string *const)&v43._anon_0, byte_19EC2220, byte_19EC2220, v38);
  v42._anon_0._M_allocated_capacity = (std::string::size_type)&v43;
  std::string::_M_construct<char const*>((std::string *const)&v42._anon_0, &byte_19EC2829[-9], byte_19EC2829, v39);
  v41._anon_0._M_allocated_capacity = (std::string::size_type)&v42;
  std::string::_M_construct<char const*>((std::string *const)&v41._anon_0, &byte_19EC2865[-5], byte_19EC2865, v40);
  v41._M_dataplus._M_p = 0LL;
  common::milog::MiLog::addLogLevel(
    v4,
    6u,
    v41,
    v42,
    v43,
    (common::milog::LogColor)&v41._anon_0,
    (common::milog::LogFormat)&v42._anon_0);
  if ( (std::string *)v41._anon_0._M_allocated_capacity != &v42 )
    operator delete((void *)v41._anon_0._M_allocated_capacity);
  if ( (std::string *)v42._anon_0._M_allocated_capacity != &v43 )
    operator delete((void *)v42._anon_0._M_allocated_capacity);
  if ( (_BYTE *)v43._anon_0._M_allocated_capacity != v44 )
    operator delete((void *)v43._anon_0._M_allocated_capacity);
};

// Line 221: range 000000000C98C05A-000000000C98C82D
int32_t __fastcall common::milog::MiLog::fini(common::milog::MiLog *const this)
{
  common::milog::MiLog *v1; // rbp
  std::_Rb_tree_node<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > > *M_parent; // rsi
  std::atomic<bool> *p_is_watch_thread_run; // rdi
  char v5; // al
  __int64 v6; // rdx
  void *p_watch_thread; // rdi
  common::milog::MiLog *i; // rax
  std::_Rb_tree_node_base::_Base_ptr *p_M_right; // rax
  void *p_M_parent; // rdi
  std::_Rb_tree_header *v11; // rax

  p_is_watch_thread_run = &this->is_watch_thread_run_;
  v5 = *(_BYTE *)(((unsigned __int64)p_is_watch_thread_run >> 3) + 0x7FFF8000);
  v6 = (unsigned __int8)p_is_watch_thread_run & 7;
  if ( v5 <= (char)v6 && v5 )
  {
    __asan_report_load1(p_is_watch_thread_run, M_parent, v6);
  }
  else if ( !this->is_watch_thread_run_._M_base._M_i )
  {
    goto LABEL_4;
  }
  this->is_watch_thread_run_._M_base._M_i = 0;
  _mm_mfence();
  p_watch_thread = &this->watch_thread_;
  if ( *(_BYTE *)(((unsigned __int64)&this->watch_thread_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_watch_thread);
    goto LABEL_10;
  }
  M_parent = 0LL;
  pthread_join(this->watch_thread_, 0LL);
LABEL_4:
  common::milog::MiLog::flushBuf(this);
  p_watch_thread = &this->milog_file_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->milog_file_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_load8(p_watch_thread);
    goto LABEL_11;
  }
  for ( i = (common::milog::MiLog *)this->milog_file_map_._M_t._M_impl._M_header._M_left;
        ;
        i = (common::milog::MiLog *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v1) )
  {
    v1 = i;
    if ( i == (common::milog::MiLog *)&this->milog_file_map_._M_t._M_impl.std::_Rb_tree_header )
      break;
    p_M_right = &i->milog_file_map_._M_t._M_impl._M_header._M_right;
    if ( *(_BYTE *)(((unsigned __int64)p_M_right >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_right);
      break;
    }
LABEL_11:
    M_parent = (std::_Rb_tree_node<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > > *)1;
    common::milog::MiLogFile::fini(
      (common::milog::MiLogFile *const)v1->milog_file_map_._M_t._M_impl._M_header._M_right,
      1);
  }
  p_M_parent = &this->milog_file_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->milog_file_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_parent);
    goto LABEL_22;
  }
  M_parent = (std::_Rb_tree_node<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > > *)this->milog_file_map_._M_t._M_impl._M_header._M_parent;
  std::_Rb_tree<std::string,std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>,std::_Select1st<std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>>>::_M_erase(
    &this->milog_file_map_._M_t,
    M_parent);
  p_M_parent = &this->milog_file_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->milog_file_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_23;
  }
  this->milog_file_map_._M_t._M_impl._M_header._M_parent = 0LL;
  v11 = &this->milog_file_map_._M_t._M_impl.std::_Rb_tree_header;
  p_M_parent = &this->milog_file_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->milog_file_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_24;
  }
  this->milog_file_map_._M_t._M_impl._M_header._M_left = &v11->_M_header;
  p_M_parent = &this->milog_file_map_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&this->milog_file_map_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8(p_M_parent, M_parent);
    goto LABEL_25;
  }
  this->milog_file_map_._M_t._M_impl._M_header._M_right = &v11->_M_header;
  p_M_parent = &this->milog_file_map_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->milog_file_map_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8(p_M_parent, M_parent);
    JUMPOUT(0xC98C1EDLL);
  }
  this->milog_file_map_._M_t._M_impl._M_node_count = 0LL;
  return 0;
};

// Line 242: range 000000000C992684-000000000C992930
int32_t __fastcall common::milog::MiLog::init(common::milog::MiLog *const this, const char *conf_file_path)
{
  common::tools::PTree *v2; // rbx
  _DWORD *v3; // r12
  std::forward_iterator_tag v4; // cl
  __int64 v5; // rax
  const char *v6; // rdx
  std::forward_iterator_tag v7; // cl
  int32_t v8; // r13d
  std::string path; // [rsp+10h] [rbp-B8h] BYREF
  char v11[152]; // [rsp+30h] [rbp-98h] BYREF

  v2 = (common::tools::PTree *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v2 = (common::tools::PTree *)v5;
  }
  v2->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  v2[1].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)"2 32 8 6 pt:245 64 8 10 log_pt:247";
  v2[2].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)common::milog::MiLog::init;
  v3 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  common::tools::PTree::PTree(v2 + 4);
  path._M_dataplus._M_p = path._anon_0._M_local_buf;
  if ( conf_file_path )
    v6 = &conf_file_path[strlen(conf_file_path)];
  else
    v6 = (const char *)-1LL;
  std::string::_M_construct<char const*>(&path, conf_file_path, v6, v4);
  common::tools::PTree::readXml(v2 + 4, &path);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
    operator delete(path._M_dataplus._M_p);
  path._M_dataplus._M_p = path._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&path, &byte_19EC2E67[-7], byte_19EC2E67, v7);
  common::tools::PTree::getChild(v2 + 4, &path);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
    operator delete(path._M_dataplus._M_p);
  v8 = common::milog::MiLog::init(this, v2 + 8);
  common::tools::PTree::~PTree(v2 + 8);
  common::tools::PTree::~PTree(v2 + 4);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v8;
};

// Line 260: range 000000000C991F1E-000000000C99267E
int32_t __fastcall common::milog::MiLog::init(common::milog::MiLog *const this, const common::tools::PTree *pt)
{
  std::forward_iterator_tag v2; // cl
  unsigned __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // rax
  std::forward_iterator_tag v8; // cl
  std::forward_iterator_tag v9; // cl
  __int64 v10; // rsi
  unsigned int v11; // eax
  char v12; // cl
  char v13; // dl
  char v14; // dl
  unsigned __int16 v15; // ax
  char v16; // cl
  unsigned int v17; // eax
  char v18; // cl
  unsigned int v19; // eax
  char v20; // cl
  unsigned int v21; // eax
  void *p_log_queue_size; // rdi
  char v23; // cl
  __int64 v24; // rdx
  int32_t v25; // ebx
  char *v26; // rdi
  std::string::pointer i; // rsi
  char *v29; // rdi
  std::string path; // [rsp+10h] [rbp-1B8h] BYREF
  std::string v31; // [rsp+30h] [rbp-198h] BYREF
  std::string v32; // [rsp+50h] [rbp-178h] BYREF
  std::string v33; // [rsp+70h] [rbp-158h] BYREF
  std::string v34; // [rsp+90h] [rbp-138h] BYREF
  std::string child_name; // [rsp+B0h] [rbp-118h] BYREF
  char v36[248]; // [rsp+D0h] [rbp-F8h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 8 15 pt_log_list:297 64 24 11 pt_list:298 128 32 18 log_level_mask:264";
  *(_QWORD *)(v5 + 16) = common::milog::MiLog::init;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862725] = -202116109;
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, byte_19EC2220, byte_19EC2220, v2);
  path._M_dataplus._M_p = path._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&path, &byte_19EC2C3C[-28], byte_19EC2C3C, v8);
  common::tools::PTree::get<std::string>((std::string *)(v5 + 128), pt, &path, (unsigned __int64)&child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
    operator delete(path._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  common::milog::MiLog::setLogLevelMask(this, (const std::string *)(v5 + 128));
  v31._M_dataplus._M_p = v31._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v31, &byte_19EC2C79[-25], byte_19EC2C79, v9);
  v10 = (__int64)&v31;
  v11 = common::tools::PTree::get<unsigned int>(pt, &v31, 0x1000u);
  v12 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v12 && v12 )
  {
    __asan_report_store4(this, &v31);
LABEL_19:
    __asan_report_load4(this);
    goto LABEL_20;
  }
  this->max_log_len_._M_i = v11;
  _mm_mfence();
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v31._M_dataplus._M_p != &v31._anon_0 )
    operator delete(v31._M_dataplus._M_p);
  v13 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v13 && v13 )
    goto LABEL_19;
  if ( this->max_log_len_._M_i <= 0x4000 && this->max_log_len_._M_i > 0xFF )
    goto LABEL_23;
  v10 = 3LL;
  common::milog::MiLog::writeLog(this, 3u, "too big max log len.\n");
LABEL_20:
  v14 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v14 && v14 )
  {
    __asan_report_store4(this, v10);
    goto LABEL_25;
  }
  this->max_log_len_._M_i = 4096;
  _mm_mfence();
LABEL_23:
  v32._M_dataplus._M_p = v32._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v32, &byte_19EC2CFA[-26], byte_19EC2CFA, (std::forward_iterator_tag)v12);
LABEL_25:
  v15 = common::tools::PTree::get<unsigned short>(pt, &v32, 0);
  v16 = *(_BYTE *)(((unsigned __int64)&this->log_cut_time_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 16) & 7) + 1) >= v16 && v16 )
  {
    __asan_report_store2(&this->log_cut_time_);
  }
  else
  {
    this->log_cut_time_._M_i = v15;
    _mm_mfence();
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v32._M_dataplus._M_p != &v32._anon_0 )
      operator delete(v32._M_dataplus._M_p);
    v33._M_dataplus._M_p = v33._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v33, &byte_19EC2D3B[-27], byte_19EC2D3B, (std::forward_iterator_tag)v16);
  }
  v17 = common::tools::PTree::get<unsigned int>(pt, &v33, 0);
  v18 = *(_BYTE *)(((unsigned __int64)&this->log_keep_time_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 20) & 7) + 3) >= v18 && v18 )
  {
    __asan_report_store4(&this->log_keep_time_, &v33);
  }
  else
  {
    this->log_keep_time_._M_i = v17;
    _mm_mfence();
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v33._M_dataplus._M_p != &v33._anon_0 )
      operator delete(v33._M_dataplus._M_p);
    v34._M_dataplus._M_p = v34._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v34, &byte_19EC2D7A[-26], byte_19EC2D7A, (std::forward_iterator_tag)v18);
  }
  v19 = common::tools::PTree::get<unsigned int>(pt, &v34, 0x6000u);
  v20 = *(_BYTE *)(((unsigned __int64)&this->log_buf_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v20 && v20 )
  {
    __asan_report_store4(&this->log_buf_size_, &v34);
  }
  else
  {
    this->log_buf_size_._M_i = v19;
    _mm_mfence();
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v34._M_dataplus._M_p != &v34._anon_0 )
      operator delete(v34._M_dataplus._M_p);
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &child_name,
      &byte_19EC2DBC[-28],
      byte_19EC2DBC,
      (std::forward_iterator_tag)v20);
  }
  v21 = common::tools::PTree::get<unsigned int>(pt, &child_name, 0x1800u);
  p_log_queue_size = &this->log_queue_size_;
  v23 = *(_BYTE *)(((unsigned __int64)&this->log_queue_size_ >> 3) + 0x7FFF8000);
  v24 = (((_BYTE)this + 28) & 7u) + 3;
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v23 && v23 )
  {
    __asan_report_store4(p_log_queue_size, &child_name);
LABEL_56:
    __asan_report_load1(p_log_queue_size, &child_name, v24);
    goto LABEL_57;
  }
  this->log_queue_size_._M_i = v21;
  _mm_mfence();
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  p_log_queue_size = (void *)&this->is_log_file_init_;
  if ( *(char *)(((unsigned __int64)&this->is_log_file_init_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_56;
  if ( this->is_log_file_init_ )
  {
    v25 = 0;
LABEL_50:
    v26 = *(char **)(v5 + 128);
    if ( v26 != (char *)(v5 + 144) )
      operator delete(v26);
    goto LABEL_52;
  }
LABEL_57:
  if ( *(char *)(((unsigned __int64)&this->is_log_file_init_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(&this->is_log_file_init_, &child_name, v24);
  }
  else
  {
    this->is_log_file_init_ = 1;
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &child_name,
      &byte_19EC2DE7[-7],
      byte_19EC2DE7,
      (std::forward_iterator_tag)v23);
  }
  common::tools::PTree::getChild(pt, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  common::tools::PTree::getAllChild[abi:cxx11](
    (std::list<std::pair<std::string,common::tools::PTree>> *)(v5 + 64),
    (const common::tools::PTree *const)(v5 + 32));
  for ( i = *(std::string::pointer *)(v5 + 64); i != (std::string::pointer)(v5 + 64); i = *(std::string::pointer *)i )
  {
    if ( common::milog::MiLog::initLogFile(this, (const common::tools::PTree *)i + 6) )
    {
      common::milog::MiLog::writeLog(this, 3u, "init log file failed");
      std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear((std::_List_base<std::pair<std::string,common::tools::PTree>> *const)(v5 + 64));
      common::tools::PTree::~PTree((common::tools::PTree *const)(v5 + 32));
      v25 = 1;
      goto LABEL_50;
    }
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(i);
      break;
    }
  }
  std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear((std::_List_base<std::pair<std::string,common::tools::PTree>> *const)(v5 + 64));
  common::tools::PTree::~PTree((common::tools::PTree *const)(v5 + 32));
  v29 = *(char **)(v5 + 128);
  if ( v29 != (char *)(v5 + 144) )
    operator delete(v29);
  v25 = 0;
LABEL_52:
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v25;
};

// Line 318: range 000000000C98FD74-000000000C991940
int32_t __fastcall common::milog::MiLog::initLogFile(common::milog::MiLog *const this, const common::tools::PTree *pt)
{
  std::forward_iterator_tag v2; // cl
  unsigned __int64 v5; // r15
  _DWORD *v6; // rbp
  __int64 v7; // rax
  std::forward_iterator_tag v8; // cl
  std::forward_iterator_tag v9; // cl
  char *v10; // rdi
  char *v11; // rdi
  int32_t result; // eax
  char v13; // dl
  std::forward_iterator_tag v14; // cl
  char v15; // dl
  std::forward_iterator_tag v16; // cl
  std::string *p_type; // rsi
  std::_Rb_tree<std::string,std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> >,std::_Select1st<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > > >::iterator v18; // rax
  std::forward_iterator_tag v19; // cl
  std::_Rb_tree_node_base::_Base_ptr *v20; // rdi
  std::_Rb_tree_node_base::_Base_ptr v21; // rax
  char v22; // dl
  __int64 v23; // rax
  volatile signed __int32 *v24; // rdi
  char v25; // dl
  signed __int32 v26; // eax
  std::forward_iterator_tag v27; // cl
  char v28; // al
  unsigned __int64 v29; // rdi
  char v30; // al
  char v31; // dl
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rdi
  char v33; // dl
  signed __int32 M_parent; // eax
  common::milog::MiLogFile *v35; // rdi
  unsigned __int64 v37; // rdi
  char v38; // al
  char v39; // dl
  char v40; // dl
  volatile signed __int32 *v41; // rdi
  char v42; // dl
  signed __int32 M_parent_high; // eax
  unsigned __int64 v44; // rdi
  char v45; // dl
  char v46; // dl
  int v47; // eax
  volatile signed __int32 *v48; // rdi
  char v49; // dl
  signed __int32 v50; // eax
  unsigned __int64 v51; // rdi
  char v52; // dl
  __int64 v53; // rsi
  char v54; // dl
  char v55; // dl
  unsigned __int64 m_Size; // rdi
  char v57; // dl
  signed __int32 v58; // eax
  unsigned __int64 v59; // rdi
  char v60; // dl
  unsigned __int64 v61; // rax
  void **v62; // rdi
  char *v63; // rsi
  void **v64; // rdi
  void **v65; // rsi
  char *v66; // rdi
  void **v67; // rsi
  unsigned __int64 i; // r13
  const char **v69; // rdi
  void **v70; // r13
  void **j; // r12
  void *v72; // rdi
  char *v73; // rdi
  volatile signed __int32 *v74; // r12
  volatile signed __int32 *v75; // rdi
  char v76; // dl
  signed __int32 v77; // eax
  volatile signed __int32 *v78; // rdi
  char v79; // dl
  signed __int32 v80; // eax
  unsigned __int64 v81; // rdi
  uint32_t LogLevelByName; // eax
  __int64 v83; // r13
  std::_Rb_tree<std::string,std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> >,std::_Select1st<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > > >::iterator v84; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> >,std::_Select1st<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > > >::iterator v85; // r9
  unsigned __int64 v86; // rdi
  std::_Rb_tree_node_base *v87; // rdx
  unsigned __int64 v88; // rdx
  size_t v89; // rdx
  int v90; // eax
  __int64 v91; // r12
  std::size_t v92; // rdi
  char v93; // dl
  __int64 v94; // rax
  volatile signed __int32 *v95; // rdi
  char v96; // dl
  signed __int32 v97; // eax
  char v98; // dl
  char v99; // dl
  unsigned __int64 m_dynSet; // rdi
  char v101; // dl
  signed __int32 v102; // eax
  unsigned __int64 v103; // rdi
  char v104; // dl
  void **v105; // r13
  void **k; // r12
  void *v107; // rdi
  void *v108; // rdi
  char *v109; // rdi
  volatile signed __int32 *v110; // rdi
  char v111; // dl
  signed __int32 v112; // eax
  char *v113; // rdi
  char v114; // dl
  volatile signed __int32 *v115; // rdi
  char v116; // dl
  signed __int32 v117; // eax
  char v118; // dl
  char v119; // dl
  char v120; // dl
  struct _Unwind_Exception *v121; // r12
  __int64 v122; // rdx
  __int64 v123; // r13
  std::string::pointer M_p; // rdi
  __int64 *v125; // rdi
  __int64 v126; // rax
  const char *v127; // rax
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > default_value; // [rsp+0h] [rbp-2D8h]
  char *default_valuea; // [rsp+0h] [rbp-2D8h]
  std::_Rb_tree_node_base::_Base_ptr v130; // [rsp+20h] [rbp-2B8h]
  unsigned __int64 v131; // [rsp+20h] [rbp-2B8h]
  unsigned __int64 v132; // [rsp+20h] [rbp-2B8h]
  common::milog::MiLogFile *v133; // [rsp+28h] [rbp-2B0h]
  common::milog::MiLogFile *v134; // [rsp+30h] [rbp-2A8h]
  unsigned __int64 v135; // [rsp+38h] [rbp-2A0h]
  char __first[8]; // [rsp+40h] [rbp-298h] BYREF
  unsigned __int64 v137; // [rsp+50h] [rbp-288h]
  void *dest[2]; // [rsp+60h] [rbp-278h] BYREF
  size_t n; // [rsp+70h] [rbp-268h]
  void *src[2]; // [rsp+80h] [rbp-258h] BYREF
  size_t v141; // [rsp+90h] [rbp-248h]
  std::string path; // [rsp+A0h] [rbp-238h] BYREF
  std::string v143; // [rsp+C0h] [rbp-218h] BYREF
  std::string v144; // [rsp+E0h] [rbp-1F8h] BYREF
  std::string type; // [rsp+100h] [rbp-1D8h] BYREF
  char v146[440]; // [rsp+120h] [rbp-1B8h] BYREF

  v5 = (unsigned __int64)v146;
  *(_QWORD *)&default_value.m_Pred.m_Storage.m_fixSet[8] = v146;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(384LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "9 32 1 4 __a2 48 4 9 level:317 64 8 6 __size 96 8 7 __osize 128 16 16 log_file_ptr:336 160 16 7 "
                        "__guard 192 24 13 level_vec:359 256 32 17 log_file_name:321 320 32 9 level:358";
  *(_QWORD *)(v5 + 16) = common::milog::MiLog::initLogFile;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -202116109;
  type._M_dataplus._M_p = type._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&type, byte_19EC2220, byte_19EC2220, v2);
  *(_QWORD *)(v5 + 320) = v5 + 336;
  std::string::_M_construct<char const*>((std::string *const)(v5 + 320), &byte_19EC28EE[-14], byte_19EC28EE, v8);
  common::tools::PTree::get<std::string>(
    (std::string *)(v5 + 256),
    pt,
    (const std::string *)(v5 + 320),
    (unsigned __int64)&type);
  v10 = *(char **)(v5 + 320);
  if ( v10 != (char *)(v5 + 336) )
    operator delete(v10);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
    operator delete(type._M_dataplus._M_p);
  if ( !*(_QWORD *)(v5 + 264) )
    goto LABEL_10;
  v13 = *(_BYTE *)(((unsigned __int64)&this->log_cut_time_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 16) & 7) + 1) >= v13 && v13 )
  {
    __asan_report_load2(&this->log_cut_time_);
  }
  else
  {
    LODWORD(default_value.m_Pred.m_Storage.m_dynSet) = this->log_cut_time_._M_i;
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&path, &byte_19EC2932[-18], byte_19EC2932, v9);
  }
  LOWORD(default_value.m_Pred.m_Size) = common::tools::PTree::get<unsigned short>(
                                          pt,
                                          &path,
                                          (unsigned __int16)default_value.m_Pred.m_Storage.m_dynSet);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
    operator delete(path._M_dataplus._M_p);
  v15 = *(_BYTE *)(((unsigned __int64)&this->log_keep_time_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 20) & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(&this->log_keep_time_);
  }
  else
  {
    LODWORD(default_value.m_Pred.m_Storage.m_dynSet) = this->log_keep_time_._M_i;
    v143._M_dataplus._M_p = v143._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v143, &byte_19EC2973[-19], byte_19EC2973, v14);
  }
  LODWORD(default_value.m_Pred.m_Storage.m_dynSet) = common::tools::PTree::get<unsigned int>(
                                                       pt,
                                                       &v143,
                                                       (unsigned int)default_value.m_Pred.m_Storage.m_dynSet);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v143._M_dataplus._M_p != &v143._anon_0 )
    operator delete(v143._M_dataplus._M_p);
  type._M_dataplus._M_p = type._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&type, &byte_19EC29C0[-32], byte_19EC29C0, v16);
  LOBYTE(default_value.m_eCompress) = common::tools::PTree::get<bool>(pt, &type, 0);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
    operator delete(type._M_dataplus._M_p);
  if ( LODWORD(default_value.m_Pred.m_Storage.m_dynSet) != 0 && LOWORD(default_value.m_Pred.m_Size) == 0 )
  {
    common::milog::MiLog::writeLog(
      this,
      3u,
      "%s can not set keep_time=%u when cut_time=0",
      *(const char **)(v5 + 256),
      LODWORD(default_value.m_Pred.m_Storage.m_dynSet));
    goto LABEL_10;
  }
  *(_QWORD *)(v5 + 128) = 0LL;
  *(_QWORD *)(v5 + 136) = 0LL;
  p_type = (std::string *)(v5 + 256);
  v18._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>,std::_Select1st<std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>>>::find(
                  &this->milog_file_map_._M_t,
                  (const std::string *)(v5 + 256))._M_node;
  if ( (std::_Rb_tree_header *)v18._M_node == &this->milog_file_map_._M_t._M_impl.std::_Rb_tree_header )
  {
    v28 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
    if ( v28 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v28 )
    {
      __asan_report_load1(
        &common::tools::perf::MemoryPerf::is_record,
        p_type,
        (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7);
      goto LABEL_53;
    }
    if ( common::tools::perf::MemoryPerf::is_record )
    {
      p_type = (std::string *)(v5 + 32);
      std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::milog::MiLogFile,common::tools::perf::allocator<common::milog::MiLogFile,common::milog::MiLogFile>,(__gnu_cxx::_Lock_policy)2>,common::milog::MiLogFile>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::milog::MiLogFile,common::tools::perf::allocator<common::milog::MiLogFile,common::milog::MiLogFile>,(__gnu_cxx::_Lock_policy)2>,common::milog::MiLogFile> *)(v5 + 32));
LABEL_53:
      v131 = *(_QWORD *)(v5 + 168);
      v29 = v131 + 8;
      v30 = *(_BYTE *)(((v131 + 8) >> 3) + 0x7FFF8000);
      if ( v30 && v30 <= 3 )
      {
        __asan_report_store4(v29, p_type);
      }
      else
      {
        *(_DWORD *)(v131 + 8) = 1;
        v29 = v131 + 12;
        v31 = *(_BYTE *)(((v131 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v131 + 12) & 7) + 3) < v31 || !v31 )
        {
          *(_DWORD *)(v131 + 12) = 1;
          if ( !*(_BYTE *)((v131 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)v131 = &`vtable for'std::_Sp_counted_ptr_inplace<common::milog::MiLogFile,common::tools::perf::allocator<common::milog::MiLogFile,common::milog::MiLogFile>,(__gnu_cxx::_Lock_policy)2>
                            + 2;
            v133 = (common::milog::MiLogFile *)(v131 + 16);
            if ( !common::tools::perf::MemoryPerf::is_record )
            {
LABEL_65:
              common::milog::MiLogFile::MiLogFile(v133);
              *(_QWORD *)(v5 + 168) = 0LL;
              v135 = v131;
              v134 = v133;
              goto LABEL_66;
            }
            type._M_dataplus._M_p = type._anon_0._M_local_buf;
            std::string::_M_construct<char const*>(
              &type,
              "N6common5milog9MiLogFileE",
              "",
              (std::forward_iterator_tag)v131);
LABEL_63:
            p_type = &type;
            common::tools::perf::MemoryPerfRecorder::construct(
              &common::tools::perf::MemoryPerf::recorder,
              &type,
              0x3A8uLL);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
              operator delete(type._M_dataplus._M_p);
            goto LABEL_65;
          }
LABEL_62:
          __asan_report_store8(v131, p_type);
          goto LABEL_63;
        }
      }
      __asan_report_store4(v29, p_type);
      goto LABEL_62;
    }
    p_type = (std::string *)(v5 + 32);
    std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::milog::MiLogFile,std::allocator<common::milog::MiLogFile>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::milog::MiLogFile,std::allocator<common::milog::MiLogFile>,(__gnu_cxx::_Lock_policy)2> > *)(v5 + 32));
    v132 = *(_QWORD *)(v5 + 168);
    v37 = v132 + 8;
    v38 = *(_BYTE *)(((v132 + 8) >> 3) + 0x7FFF8000);
    if ( v38 && v38 <= 3 )
    {
      __asan_report_store4(v37, p_type);
    }
    else
    {
      *(_DWORD *)(v132 + 8) = 1;
      v37 = v132 + 12;
      v39 = *(_BYTE *)(((v132 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v132 + 12) & 7) + 3) < v39 || !v39 )
      {
        *(_DWORD *)(v132 + 12) = 1;
        if ( !*(_BYTE *)((v132 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v132 = &`vtable for'std::_Sp_counted_ptr_inplace<common::milog::MiLogFile,std::allocator<common::milog::MiLogFile>,(__gnu_cxx::_Lock_policy)2>
                          + 2;
          v133 = (common::milog::MiLogFile *)(v132 + 16);
          common::milog::MiLogFile::MiLogFile((common::milog::MiLogFile *const)(v132 + 16));
LABEL_85:
          *(_QWORD *)(v5 + 168) = 0LL;
          v135 = v132;
          v134 = v133;
LABEL_66:
          *(_QWORD *)(v5 + 128) = v134;
          v130 = *(std::_Rb_tree_node_base::_Base_ptr *)(v5 + 136);
          *(_QWORD *)(v5 + 136) = v135;
          if ( !v130 )
          {
LABEL_72:
            v130 = 0LL;
            goto LABEL_74;
          }
          p_M_parent = &v130->_M_parent;
          if ( &_pthread_key_create )
          {
            v33 = *(_BYTE *)(((unsigned __int64)p_M_parent >> 3) + 0x7FFF8000);
            if ( (char)(((unsigned __int8)p_M_parent & 7) + 3) < v33 || !v33 )
            {
              M_parent = _InterlockedExchangeAdd((volatile signed __int32 *)p_M_parent, 0xFFFFFFFF);
              goto LABEL_71;
            }
            __asan_report_store4(p_M_parent, p_type);
          }
          v40 = *(_BYTE *)(((unsigned __int64)&v130->_M_parent >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v130 + 8) & 7) + 3) >= v40 && v40 )
          {
            __asan_report_load4(&v130->_M_parent);
            goto LABEL_91;
          }
          M_parent = (signed __int32)v130->_M_parent;
          LODWORD(v130->_M_parent) = M_parent - 1;
LABEL_71:
          if ( M_parent != 1 )
            goto LABEL_72;
LABEL_91:
          if ( *(_BYTE *)(((unsigned __int64)v130 >> 3) + 0x7FFF8000) )
          {
            v41 = (volatile signed __int32 *)v130;
            __asan_report_load8(v130);
          }
          else
          {
            v41 = (volatile signed __int32 *)(*(_QWORD *)&v130->_M_color + 16LL);
            if ( !*(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(*(_QWORD *)&v130->_M_color + 16LL))(v130);
              v41 = (volatile signed __int32 *)&v130->_M_parent + 1;
              if ( !&_pthread_key_create )
                goto LABEL_104;
              v42 = *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000);
              if ( (char)(((unsigned __int8)v41 & 7) + 3) < v42 || !v42 )
              {
                M_parent_high = _InterlockedExchangeAdd(v41, 0xFFFFFFFF);
                goto LABEL_97;
              }
LABEL_103:
              __asan_report_store4(v41, p_type);
LABEL_104:
              v45 = *(_BYTE *)((((unsigned __int64)&v130->_M_parent + 4) >> 3) + 0x7FFF8000);
              if ( (char)((((_BYTE)v130 + 12) & 7) + 3) >= v45 && v45 )
              {
                __asan_report_load4((char *)&v130->_M_parent + 4);
                goto LABEL_108;
              }
              M_parent_high = HIDWORD(v130->_M_parent);
              HIDWORD(v130->_M_parent) = M_parent_high - 1;
LABEL_97:
              if ( M_parent_high != 1 )
                goto LABEL_72;
              if ( !*(_BYTE *)(((unsigned __int64)v130 >> 3) + 0x7FFF8000) )
              {
                v44 = *(_QWORD *)&v130->_M_color + 24LL;
                if ( !*(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
                {
                  (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(*(_QWORD *)&v130->_M_color + 24LL))(v130);
                  goto LABEL_72;
                }
LABEL_109:
                __asan_report_load8(v44);
                __asan_report_store4(v44, p_type);
                v46 = *(_BYTE *)(((unsigned __int64)&v130->_M_parent >> 3) + 0x7FFF8000);
                if ( (char)((((_BYTE)v130 + 8) & 7) + 3) >= v46 && v46 )
                {
                  __asan_report_load4(&v130->_M_parent);
                }
                else
                {
                  v47 = (int)v130->_M_parent;
                  LODWORD(v130->_M_parent) = v47 - 1;
                  if ( v47 != 1 )
                  {
LABEL_74:
                    v35 = *(common::milog::MiLogFile **)(v5 + 128);
                    if ( v35 )
                    {
                      if ( common::milog::MiLogFile::openLogFile(
                             v35,
                             *(const char **)(v5 + 256),
                             default_value.m_Pred.m_Size,
                             (uint32_t)default_value.m_Pred.m_Storage.m_dynSet) )
                      {
                        v53 = 3LL;
                        common::milog::MiLog::writeLog(this, 3u, "open file %s failed.", *(const char **)(v5 + 256));
                        goto LABEL_211;
                      }
                      goto LABEL_46;
                    }
LABEL_132:
                    v53 = 3LL;
                    common::milog::MiLog::writeLog(this, 3u, "new log_file failed.");
                    goto LABEL_211;
                  }
                }
                if ( *(_BYTE *)(((unsigned __int64)v130 >> 3) + 0x7FFF8000) )
                {
                  v48 = (volatile signed __int32 *)v130;
                  __asan_report_load8(v130);
                }
                else
                {
                  v48 = (volatile signed __int32 *)(*(_QWORD *)&v130->_M_color + 16LL);
                  if ( !*(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
                  {
                    (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(*(_QWORD *)&v130->_M_color + 16LL))(v130);
                    v48 = (volatile signed __int32 *)&v130->_M_parent + 1;
                    if ( !&_pthread_key_create )
                      goto LABEL_126;
                    v49 = *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000);
                    if ( (char)(((unsigned __int8)v48 & 7) + 3) < v49 || !v49 )
                    {
                      v50 = _InterlockedExchangeAdd(v48, 0xFFFFFFFF);
                      goto LABEL_119;
                    }
LABEL_125:
                    __asan_report_store4(v48, p_type);
LABEL_126:
                    v52 = *(_BYTE *)((((unsigned __int64)&v130->_M_parent + 4) >> 3) + 0x7FFF8000);
                    if ( (char)((((_BYTE)v130 + 12) & 7) + 3) >= v52 && v52 )
                    {
                      __asan_report_load4((char *)&v130->_M_parent + 4);
                      goto LABEL_130;
                    }
                    v50 = HIDWORD(v130->_M_parent);
                    HIDWORD(v130->_M_parent) = v50 - 1;
LABEL_119:
                    if ( v50 != 1 )
                      goto LABEL_74;
                    if ( !*(_BYTE *)(((unsigned __int64)v130 >> 3) + 0x7FFF8000) )
                    {
                      v51 = *(_QWORD *)&v130->_M_color + 24LL;
                      if ( !*(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
                      {
                        (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(*(_QWORD *)&v130->_M_color + 24LL))(v130);
                        goto LABEL_74;
                      }
LABEL_131:
                      __asan_report_load8(v51);
                      goto LABEL_132;
                    }
LABEL_130:
                    v51 = (unsigned __int64)v130;
                    __asan_report_load8(v130);
                    goto LABEL_131;
                  }
                }
                __asan_report_load8(v48);
                goto LABEL_125;
              }
LABEL_108:
              v44 = (unsigned __int64)v130;
              __asan_report_load8(v130);
              goto LABEL_109;
            }
          }
          __asan_report_load8(v41);
          goto LABEL_103;
        }
LABEL_84:
        __asan_report_store8(v132, p_type);
        goto LABEL_85;
      }
    }
    __asan_report_store4(v37, p_type);
    goto LABEL_84;
  }
  v20 = (std::_Rb_tree_node_base::_Base_ptr *)&v18._M_node[2];
  if ( *(_BYTE *)(((unsigned __int64)&v18._M_node[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v20);
    goto LABEL_136;
  }
  *(_QWORD *)(v5 + 128) = *(_QWORD *)&v18._M_node[2]._M_color;
  v20 = &v18._M_node[2]._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v18._M_node[2]._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_136:
    __asan_report_load8(v20);
    goto LABEL_137;
  }
  v21 = v18._M_node[2]._M_parent;
  default_value.m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)v21;
  if ( v21 != *(std::_Rb_tree_node_base::_Base_ptr *)(v5 + 136) )
  {
    if ( !v21 )
      goto LABEL_39;
    v20 = &v21->_M_parent;
    if ( !&_pthread_key_create )
    {
LABEL_138:
      v24 = (volatile signed __int32 *)(default_value.m_Pred.m_Storage.m_dynSet + 8);
      v54 = *(_BYTE *)(((unsigned __int64)(default_value.m_Pred.m_Storage.m_dynSet + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((default_value.m_Pred.m_Storage.m_fixSet[0] + 8) & 7) + 3) >= v54 && v54 )
      {
        __asan_report_load4(v24);
        goto LABEL_142;
      }
      ++*((_DWORD *)default_value.m_Pred.m_Storage.m_dynSet + 2);
LABEL_39:
      v23 = *(_QWORD *)(v5 + 136);
      default_value.m_Pred.m_Size = v23;
      if ( !v23 )
      {
LABEL_45:
        *(_QWORD *)(v5 + 136) = default_value.m_Pred.m_Storage.m_dynSet;
        goto LABEL_46;
      }
      v24 = (volatile signed __int32 *)(v23 + 8);
      if ( !&_pthread_key_create )
        goto LABEL_143;
      v25 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v24 & 7) + 3) < v25 || !v25 )
      {
        v26 = _InterlockedExchangeAdd(v24, 0xFFFFFFFF);
        goto LABEL_44;
      }
LABEL_142:
      __asan_report_store4(v24, p_type);
LABEL_143:
      v55 = *(_BYTE *)(((default_value.m_Pred.m_Size + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((LOBYTE(default_value.m_Pred.m_Size) + 8) & 7) + 3) >= v55 && v55 )
      {
        __asan_report_load4(default_value.m_Pred.m_Size + 8);
        goto LABEL_147;
      }
      v19.gap0[0] = default_value.m_Pred.m_Size;
      v26 = *(_DWORD *)(default_value.m_Pred.m_Size + 8);
      *(_DWORD *)(default_value.m_Pred.m_Size + 8) = v26 - 1;
LABEL_44:
      if ( v26 != 1 )
        goto LABEL_45;
LABEL_147:
      if ( *(_BYTE *)((default_value.m_Pred.m_Size >> 3) + 0x7FFF8000) )
      {
        m_Size = default_value.m_Pred.m_Size;
        __asan_report_load8(default_value.m_Pred.m_Size);
      }
      else
      {
        m_Size = *(_QWORD *)default_value.m_Pred.m_Size + 16LL;
        if ( !*(_BYTE *)((m_Size >> 3) + 0x7FFF8000) )
        {
          (*(void (__fastcall **)(std::size_t))(*(_QWORD *)default_value.m_Pred.m_Size + 16LL))(default_value.m_Pred.m_Size);
          m_Size = default_value.m_Pred.m_Size + 12;
          if ( !&_pthread_key_create )
            goto LABEL_160;
          v57 = *(_BYTE *)((m_Size >> 3) + 0x7FFF8000);
          if ( (char)((m_Size & 7) + 3) < v57 || !v57 )
          {
            v58 = _InterlockedExchangeAdd((volatile signed __int32 *)m_Size, 0xFFFFFFFF);
            goto LABEL_153;
          }
LABEL_159:
          __asan_report_store4(m_Size, p_type);
LABEL_160:
          v60 = *(_BYTE *)(((default_value.m_Pred.m_Size + 12) >> 3) + 0x7FFF8000);
          if ( (char)(((LOBYTE(default_value.m_Pred.m_Size) + 12) & 7) + 3) >= v60 && v60 )
          {
            __asan_report_load4(default_value.m_Pred.m_Size + 12);
            goto LABEL_164;
          }
          v19.gap0[0] = default_value.m_Pred.m_Size;
          v58 = *(_DWORD *)(default_value.m_Pred.m_Size + 12);
          *(_DWORD *)(default_value.m_Pred.m_Size + 12) = v58 - 1;
LABEL_153:
          if ( v58 != 1 )
            goto LABEL_45;
          if ( !*(_BYTE *)((default_value.m_Pred.m_Size >> 3) + 0x7FFF8000) )
          {
            v59 = *(_QWORD *)default_value.m_Pred.m_Size + 24LL;
            if ( !*(_BYTE *)((v59 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(std::size_t))(*(_QWORD *)default_value.m_Pred.m_Size + 24LL))(default_value.m_Pred.m_Size);
              goto LABEL_45;
            }
LABEL_165:
            __asan_report_load8(v59);
            goto LABEL_166;
          }
LABEL_164:
          v59 = default_value.m_Pred.m_Size;
          __asan_report_load8(default_value.m_Pred.m_Size);
          goto LABEL_165;
        }
      }
      __asan_report_load8(m_Size);
      goto LABEL_159;
    }
    v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v20 & 7) + 3) < v22 || !v22 )
    {
      _InterlockedAdd((volatile signed __int32 *)v20, 1u);
      goto LABEL_39;
    }
LABEL_137:
    __asan_report_store4(v20, p_type);
    goto LABEL_138;
  }
LABEL_46:
  type._M_dataplus._M_p = type._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&type, byte_19EC2220, byte_19EC2220, v19);
LABEL_166:
  v144._M_dataplus._M_p = v144._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v144, &byte_19EC2AEF[-15], byte_19EC2AEF, v27);
  common::tools::PTree::get<std::string>((std::string *)(v5 + 320), pt, &v144, (unsigned __int64)&type);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v144._M_dataplus._M_p != &v144._anon_0 )
    operator delete(v144._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
    operator delete(type._M_dataplus._M_p);
  *(_QWORD *)(v5 + 192) = 0LL;
  *(_QWORD *)(v5 + 200) = 0LL;
  *(_QWORD *)(v5 + 208) = 0LL;
  *(_QWORD *)__first = 0LL;
  v137 = 1LL;
  memmove(__first, &unk_19EC2B20, 1uLL);
  if ( __first != &__first[v137] )
  {
    _BitScanReverse64(&v61, v137);
    std::__introsort_loop<char *,long,__gnu_cxx::__ops::_Iter_less_iter>(
      __first,
      &__first[v137],
      2LL * (int)(63 - (v61 ^ 0x3F)),
      (__gnu_cxx::__ops::_Iter_less_iter)&__first[v137]);
    std::__final_insertion_sort<char *,__gnu_cxx::__ops::_Iter_less_iter>(
      __first,
      default_valuea,
      (__gnu_cxx::__ops::_Iter_less_iter)default_valuea);
  }
  n = v137;
  dest[0] = 0LL;
  if ( v137 > 0x10 )
  {
    v62 = (void **)operator new[](v137);
    dest[0] = v62;
    v63 = *(char **)__first;
  }
  else
  {
    v62 = dest;
    v63 = __first;
  }
  memcpy(v62, v63, n);
  v141 = n;
  src[0] = 0LL;
  if ( n > 0x10 )
  {
    v64 = (void **)operator new[](n);
    src[0] = v64;
    v65 = (void **)dest[0];
  }
  else
  {
    v64 = src;
    v65 = dest;
  }
  memcpy(v64, v65, v141);
  type._anon_0._M_allocated_capacity = v141;
  type._M_dataplus._M_p = 0LL;
  if ( v141 > 0x10 )
  {
    v66 = (char *)operator new[](v141);
    type._M_dataplus._M_p = v66;
    v67 = (void **)src[0];
  }
  else
  {
    v66 = (char *)&type;
    v67 = src;
  }
  memcpy(v66, v67, type._anon_0._M_allocated_capacity);
  *((_DWORD *)&type._anon_0._M_allocated_capacity + 2) = 0;
  if ( v141 > 0x10 && src[0] )
    operator delete[](src[0]);
  boost::algorithm::iter_split<std::vector<std::string>,std::string,boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
    (std::vector<std::string> *)(v5 + 192),
    (std::string *)(v5 + 320),
    default_value);
  if ( type._anon_0._M_allocated_capacity > 0x10 && type._M_dataplus._M_p )
    operator delete[](type._M_dataplus._M_p);
  if ( n > 0x10 && dest[0] )
    operator delete[](dest[0]);
  if ( v137 > 0x10 && *(_QWORD *)__first )
    operator delete[](*(void **)__first);
  for ( i = 0LL; ; ++i )
  {
    v53 = *(_QWORD *)(v5 + 192);
    if ( i >= (*(_QWORD *)(v5 + 200) - v53) >> 5 )
      break;
    default_value.m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)(32 * i);
    v53 += 32 * i;
    LogLevelByName = common::milog::MiLog::getLogLevelByName(this, (const std::string *)v53);
    if ( !LogLevelByName )
    {
      v69 = (const char **)&default_value.m_Pred.m_Storage.m_dynSet[*(_QWORD *)(v5 + 192)];
      if ( *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v69);
      }
      else
      {
        v53 = 4LL;
        common::milog::MiLog::writeLog(this, 4u, "no log level name=%s", *v69);
      }
      v70 = *(void ***)(v5 + 200);
      for ( j = *(void ***)(v5 + 192); v70 != j; j += 4 )
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
      v72 = *(void **)(v5 + 192);
      if ( v72 )
        operator delete(v72);
      v73 = *(char **)(v5 + 320);
      if ( v73 != (char *)(v5 + 336) )
        operator delete(v73);
LABEL_211:
      v74 = *(volatile signed __int32 **)(v5 + 136);
      if ( !v74 )
        goto LABEL_10;
      v75 = v74 + 2;
      if ( &_pthread_key_create )
      {
        v76 = *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v75 & 7) + 3) < v76 || !v76 )
        {
          v77 = _InterlockedExchangeAdd(v75, 0xFFFFFFFF);
          goto LABEL_216;
        }
LABEL_345:
        __asan_report_store4(v75, v53);
      }
      v119 = *(_BYTE *)(((unsigned __int64)(v74 + 2) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v74 + 8) & 7) + 3) >= v119 && v119 )
      {
        __asan_report_load4(v74 + 2);
      }
      else
      {
        v77 = *((_DWORD *)v74 + 2);
        *((_DWORD *)v74 + 2) = v77 - 1;
LABEL_216:
        if ( v77 != 1 )
          goto LABEL_10;
        if ( !*(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
        {
          v78 = (volatile signed __int32 *)(*(_QWORD *)v74 + 16LL);
          if ( !*(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 16LL))(v74);
            v78 = v74 + 3;
            if ( &_pthread_key_create )
            {
              v79 = *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000);
              if ( (char)(((unsigned __int8)v78 & 7) + 3) < v79 || !v79 )
              {
                v80 = _InterlockedExchangeAdd(v78, 0xFFFFFFFF);
                goto LABEL_223;
              }
LABEL_352:
              __asan_report_store4(v78, v53);
            }
            v120 = *(_BYTE *)(((unsigned __int64)(v74 + 3) >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v74 + 12) & 7) + 3) >= v120 && v120 )
            {
              __asan_report_load4(v74 + 3);
              goto LABEL_357;
            }
            v80 = *((_DWORD *)v74 + 3);
            *((_DWORD *)v74 + 3) = v80 - 1;
LABEL_223:
            if ( v80 == 1 )
            {
              if ( !*(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
              {
                v81 = *(_QWORD *)v74 + 24LL;
                if ( !*(_BYTE *)((v81 >> 3) + 0x7FFF8000) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 24LL))(v74);
                  goto LABEL_10;
                }
LABEL_358:
                v121 = (struct _Unwind_Exception *)__asan_report_load8(v81);
                v123 = v122;
                M_p = type._M_dataplus._M_p;
                if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
                  operator delete(type._M_dataplus._M_p);
                if ( v123 != 1 )
                {
                  __asan_handle_no_return(M_p);
                  _Unwind_Resume(v121);
                }
                v125 = (__int64 *)__cxa_begin_catch(v121);
                if ( *(_BYTE *)(((unsigned __int64)v125 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v125);
                v126 = *v125;
                if ( *(_BYTE *)(((unsigned __int64)(*v125 + 16) >> 3) + 0x7FFF8000) )
                  v126 = __asan_report_load8(*v125 + 16);
                v127 = (const char *)(*(__int64 (**)(void))(v126 + 16))();
                common::milog::MiLog::writeLog(this, 4u, "%s", v127);
                __cxa_end_catch();
                result = 1;
                goto LABEL_13;
              }
LABEL_357:
              v81 = (unsigned __int64)v74;
              __asan_report_load8(v74);
              goto LABEL_358;
            }
LABEL_10:
            v11 = *(char **)(v5 + 256);
            if ( v11 != (char *)(v5 + 272) )
              operator delete(v11);
            result = 1;
            goto LABEL_13;
          }
LABEL_351:
          __asan_report_load8(v78);
          goto LABEL_352;
        }
      }
      v78 = v74;
      __asan_report_load8(v74);
      goto LABEL_351;
    }
    *(_DWORD *)(v5 + 48) = LogLevelByName;
    std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_insert_unique<unsigned int const&>(
      (std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> > *const)(*(_QWORD *)(v5 + 128) + 872LL),
      (const unsigned int *)(v5 + 48));
  }
  v83 = (__int64)&this->milog_file_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->milog_file_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->milog_file_map_._M_t._M_impl._M_header._M_parent);
    goto LABEL_244;
  }
  v53 = (__int64)this->milog_file_map_._M_t._M_impl._M_header._M_parent;
  v84._M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>,std::_Select1st<std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>>>::_M_lower_bound(
                  &this->milog_file_map_._M_t,
                  (std::_Rb_tree<std::string,std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> >,std::_Select1st<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > > >::_Link_type)v53,
                  &this->milog_file_map_._M_t._M_impl._M_header,
                  (const std::string *)(v5 + 256))._M_node;
  default_value.m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)v84._M_node;
  default_value.m_Pred.m_Size = (std::size_t)v84._M_node;
  if ( (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > >::_Base_ptr)v83 != v84._M_node )
  {
    v86 = (unsigned __int64)&v84._M_node[1];
    v83 = *(_QWORD *)(v5 + 264);
    *(_QWORD *)(v5 + 64) = v83;
    v87 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > >::_Base_ptr)((char *)v84._M_node + 40);
    if ( !*(_BYTE *)(((unsigned __int64)&v84._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
    {
      v130 = v84._M_node[1]._M_parent;
      *(_QWORD *)(v5 + 96) = v130;
      if ( v83 <= (unsigned __int64)v130 )
      {
        v88 = v5 + 64;
        goto LABEL_234;
      }
LABEL_245:
      v88 = v5 + 96;
LABEL_234:
      if ( *(_BYTE *)((v88 >> 3) + 0x7FFF8000) )
      {
        v86 = v88;
        __asan_report_load8(v88);
      }
      else
      {
        v89 = *(_QWORD *)v88;
        if ( !*(_BYTE *)((v86 >> 3) + 0x7FFF8000) )
        {
          v53 = *(_QWORD *)&v84._M_node[1]._M_color;
          if ( v89 )
          {
            v90 = memcmp(*(const void **)(v5 + 256), (const void *)v53, v89);
            if ( v90 )
            {
LABEL_241:
              if ( v90 >= 0 )
                goto LABEL_250;
              goto LABEL_242;
            }
          }
          v83 -= (__int64)v130;
          if ( v83 <= 0x7FFFFFFF )
          {
            if ( v83 < (__int64)0xFFFFFFFF80000000LL )
              v90 = 0x80000000;
            else
              v90 = v83;
            goto LABEL_241;
          }
LABEL_248:
          v90 = 0x7FFFFFFF;
          goto LABEL_241;
        }
      }
      __asan_report_load8(v86);
      goto LABEL_248;
    }
LABEL_244:
    v86 = (unsigned __int64)v87;
    v84._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > >::_Base_ptr)__asan_report_load8(v87);
    goto LABEL_245;
  }
LABEL_242:
  *(_QWORD *)(v5 + 96) = v5 + 256;
  v53 = default_value.m_Pred.m_Size;
  default_value.m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)std::_Rb_tree<std::string,std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>,std::_Select1st<std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<common::milog::MiLogFile>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(&this->milog_file_map_._M_t, (std::_Rb_tree<std::string,std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> >,std::_Select1st<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::shared_ptr<common::milog::MiLogFile> > > >::const_iterator)default_value.m_Pred.m_Size, &std::piecewise_construct, (std::tuple<const std::string&> *)(v5 + 96), (std::tuple<> *)(v5 + 32), (const std::piecewise_construct_t *)v85._M_node, (std::tuple<const std::string&> *)default_value.m_Pred.m_Storage.m_dynSet, *(std::tuple<> **)&default_value.m_Pred.m_Storage.m_fixSet[8])._M_node;
LABEL_250:
  v91 = (__int64)(default_value.m_Pred.m_Storage.m_dynSet + 64);
  if ( *(_BYTE *)(((unsigned __int64)(default_value.m_Pred.m_Storage.m_dynSet + 64) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(default_value.m_Pred.m_Storage.m_dynSet + 64, v53);
    goto LABEL_269;
  }
  *((_QWORD *)default_value.m_Pred.m_Storage.m_dynSet + 8) = *(_QWORD *)(v5 + 128);
  default_value.m_Pred.m_Size = (std::size_t)(default_value.m_Pred.m_Storage.m_dynSet + 72);
  v83 = *(_QWORD *)(v5 + 136);
  if ( *(_BYTE *)(((unsigned __int64)(default_value.m_Pred.m_Storage.m_dynSet + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_269:
    v92 = default_value.m_Pred.m_Size;
    __asan_report_load8(default_value.m_Pred.m_Size);
    goto LABEL_270;
  }
  if ( v83 == *((_QWORD *)default_value.m_Pred.m_Storage.m_dynSet + 9) )
    goto LABEL_266;
  if ( !v83 )
    goto LABEL_258;
  v92 = v83 + 8;
  if ( !&_pthread_key_create )
    goto LABEL_271;
  v93 = *(_BYTE *)((v92 >> 3) + 0x7FFF8000);
  if ( (char)((v92 & 7) + 3) < v93 || !v93 )
  {
    _InterlockedAdd((volatile signed __int32 *)v92, 1u);
    goto LABEL_258;
  }
LABEL_270:
  __asan_report_store4(v92, v53);
LABEL_271:
  v95 = (volatile signed __int32 *)(v83 + 8);
  v98 = *(_BYTE *)(((unsigned __int64)(v83 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v83 + 8) & 7) + 3) >= v98 && v98 )
  {
    __asan_report_load4(v95);
    goto LABEL_275;
  }
  ++*(_DWORD *)(v83 + 8);
LABEL_258:
  v94 = *((_QWORD *)default_value.m_Pred.m_Storage.m_dynSet + 9);
  default_value.m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)v94;
  if ( !v94 )
    goto LABEL_264;
  v95 = (volatile signed __int32 *)(v94 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_276;
  v96 = *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v95 & 7) + 3) < v96 || !v96 )
  {
    v97 = _InterlockedExchangeAdd(v95, 0xFFFFFFFF);
    goto LABEL_263;
  }
LABEL_275:
  __asan_report_store4(v95, v53);
LABEL_276:
  v99 = *(_BYTE *)(((unsigned __int64)(default_value.m_Pred.m_Storage.m_dynSet + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((default_value.m_Pred.m_Storage.m_fixSet[0] + 8) & 7) + 3) >= v99 && v99 )
  {
    __asan_report_load4(default_value.m_Pred.m_Storage.m_dynSet + 8);
    goto LABEL_280;
  }
  v97 = *((_DWORD *)default_value.m_Pred.m_Storage.m_dynSet + 2);
  *((_DWORD *)default_value.m_Pred.m_Storage.m_dynSet + 2) = v97 - 1;
LABEL_263:
  if ( v97 != 1 )
    goto LABEL_264;
LABEL_280:
  if ( *(_BYTE *)(((unsigned __int64)default_value.m_Pred.m_Storage.m_dynSet >> 3) + 0x7FFF8000) )
  {
    m_dynSet = (unsigned __int64)default_value.m_Pred.m_Storage.m_dynSet;
    __asan_report_load8(default_value.m_Pred.m_Storage.m_dynSet);
    goto LABEL_291;
  }
  m_dynSet = *(_QWORD *)default_value.m_Pred.m_Storage.m_dynSet + 16LL;
  if ( *(_BYTE *)((m_dynSet >> 3) + 0x7FFF8000) )
  {
LABEL_291:
    __asan_report_load8(m_dynSet);
    goto LABEL_292;
  }
  (*(void (__fastcall **)(boost::algorithm::detail::is_any_ofF<char>::set_value_type *))(*(_QWORD *)default_value.m_Pred.m_Storage.m_dynSet
                                                                                       + 16LL))(default_value.m_Pred.m_Storage.m_dynSet);
  m_dynSet = (unsigned __int64)(default_value.m_Pred.m_Storage.m_dynSet + 12);
  if ( !&_pthread_key_create )
    goto LABEL_293;
  v101 = *(_BYTE *)((m_dynSet >> 3) + 0x7FFF8000);
  if ( (char)((m_dynSet & 7) + 3) < v101 || !v101 )
  {
    v102 = _InterlockedExchangeAdd((volatile signed __int32 *)m_dynSet, 0xFFFFFFFF);
    goto LABEL_286;
  }
LABEL_292:
  __asan_report_store4(m_dynSet, v53);
LABEL_293:
  v104 = *(_BYTE *)(((unsigned __int64)(default_value.m_Pred.m_Storage.m_dynSet + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((default_value.m_Pred.m_Storage.m_fixSet[0] + 12) & 7) + 3) >= v104 && v104 )
  {
    __asan_report_load4(default_value.m_Pred.m_Storage.m_dynSet + 12);
LABEL_297:
    v103 = (unsigned __int64)default_value.m_Pred.m_Storage.m_dynSet;
    __asan_report_load8(default_value.m_Pred.m_Storage.m_dynSet);
    goto LABEL_298;
  }
  v102 = *((_DWORD *)default_value.m_Pred.m_Storage.m_dynSet + 3);
  *((_DWORD *)default_value.m_Pred.m_Storage.m_dynSet + 3) = v102 - 1;
LABEL_286:
  if ( v102 != 1 )
    goto LABEL_264;
  if ( *(_BYTE *)(((unsigned __int64)default_value.m_Pred.m_Storage.m_dynSet >> 3) + 0x7FFF8000) )
    goto LABEL_297;
  v103 = *(_QWORD *)default_value.m_Pred.m_Storage.m_dynSet + 24LL;
  if ( *(_BYTE *)((v103 >> 3) + 0x7FFF8000) )
  {
LABEL_298:
    __asan_report_load8(v103);
    goto LABEL_299;
  }
  (*(void (__fastcall **)(boost::algorithm::detail::is_any_ofF<char>::set_value_type *))(*(_QWORD *)default_value.m_Pred.m_Storage.m_dynSet
                                                                                       + 24LL))(default_value.m_Pred.m_Storage.m_dynSet);
LABEL_264:
  if ( !*(_BYTE *)((default_value.m_Pred.m_Size >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v91 + 8) = v83;
LABEL_266:
    if ( LOBYTE(default_value.m_eCompress) )
      common::milog::MiLogFile::removeExpiredLog(*(common::milog::MiLogFile *const *)(v5 + 128));
    goto LABEL_300;
  }
LABEL_299:
  __asan_report_store8(default_value.m_Pred.m_Size, v53);
LABEL_300:
  v105 = *(void ***)(v5 + 200);
  for ( k = *(void ***)(v5 + 192); v105 != k; k += 4 )
  {
    v107 = k;
    if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(k);
LABEL_302:
      operator delete(v107);
      continue;
    }
    v107 = *k;
    if ( *k != k + 2 )
      goto LABEL_302;
  }
  v108 = *(void **)(v5 + 192);
  if ( v108 )
    operator delete(v108);
  v109 = *(char **)(v5 + 320);
  if ( v109 != (char *)(v5 + 336) )
    operator delete(v109);
  v74 = *(volatile signed __int32 **)(v5 + 136);
  if ( !v74 )
    goto LABEL_318;
  v110 = v74 + 2;
  if ( &_pthread_key_create )
  {
    v111 = *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v110 & 7) + 3) < v111 || !v111 )
    {
      v112 = _InterlockedExchangeAdd(v110, 0xFFFFFFFF);
      goto LABEL_317;
    }
    __asan_report_store4(v110, v53);
  }
  v114 = *(_BYTE *)(((unsigned __int64)(v74 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v74 + 8) & 7) + 3) >= v114 && v114 )
  {
    __asan_report_load4(v74 + 2);
    goto LABEL_326;
  }
  v112 = *((_DWORD *)v74 + 2);
  *((_DWORD *)v74 + 2) = v112 - 1;
LABEL_317:
  if ( v112 == 1 )
  {
LABEL_326:
    if ( *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
    {
      v115 = v74;
      __asan_report_load8(v74);
    }
    else
    {
      v115 = (volatile signed __int32 *)(*(_QWORD *)v74 + 16LL);
      if ( !*(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 16LL))(v74);
        v115 = v74 + 3;
        if ( !&_pthread_key_create )
          goto LABEL_339;
        v116 = *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v115 & 7) + 3) < v116 || !v116 )
        {
          v117 = _InterlockedExchangeAdd(v115, 0xFFFFFFFF);
          goto LABEL_332;
        }
LABEL_338:
        __asan_report_store4(v115, v53);
LABEL_339:
        v118 = *(_BYTE *)(((unsigned __int64)(v74 + 3) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v74 + 12) & 7) + 3) >= v118 && v118 )
        {
          __asan_report_load4(v74 + 3);
          goto LABEL_343;
        }
        v117 = *((_DWORD *)v74 + 3);
        *((_DWORD *)v74 + 3) = v117 - 1;
LABEL_332:
        if ( v117 != 1 )
          goto LABEL_318;
        if ( !*(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
        {
          v75 = (volatile signed __int32 *)(*(_QWORD *)v74 + 24LL);
          if ( !*(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 24LL))(v74);
            goto LABEL_318;
          }
          goto LABEL_344;
        }
LABEL_343:
        v75 = v74;
        __asan_report_load8(v74);
LABEL_344:
        __asan_report_load8(v75);
        goto LABEL_345;
      }
    }
    __asan_report_load8(v115);
    goto LABEL_338;
  }
LABEL_318:
  v113 = *(char **)(v5 + 256);
  if ( v113 != (char *)(v5 + 272) )
    operator delete(v113);
  result = 0;
LABEL_13:
  if ( *(_QWORD *)&default_value.m_Pred.m_Storage.m_fixSet[8] == v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 390: range 000000000C98E172-000000000C98E62B
int32_t common::milog::MiLog::writeLog(common::milog::MiLog *const this, uint32_t log_level, const char *format, ...)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int128 v12; // xmm5
  __int128 v13; // xmm6
  __int128 v14; // xmm7
  unsigned __int64 v15; // r13
  _DWORD *v16; // r15
  char v17; // dl
  __int64 v18; // rsi
  void *v19; // rsp
  unsigned __int64 v20; // rdi
  char v21; // al
  signed __int8 v22; // dl
  signed __int8 v23; // cl
  unsigned __int64 v24; // rsi
  char v25; // al
  char v26; // dl
  char v27; // al
  char v28; // dl
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  char v32; // cl
  __int64 v34; // rax
  __int64 v35; // [rsp+0h] [rbp-170h] BYREF
  const char *formata; // [rsp+8h] [rbp-168h]
  uint32_t log_levela; // [rsp+14h] [rbp-15Ch]
  char *v38; // [rsp+18h] [rbp-158h] BYREF
  size_t max_log_len; // [rsp+20h] [rbp-150h]
  common::milog::MiLog *thisa; // [rsp+28h] [rbp-148h]
  char v41[96]; // [rsp+30h] [rbp-140h] BYREF
  char v42[24]; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-C8h]
  __int64 v44; // [rsp+B0h] [rbp-C0h]
  __int64 v45; // [rsp+B8h] [rbp-B8h]
  __int128 v46; // [rsp+C0h] [rbp-B0h]
  __int128 v47; // [rsp+D0h] [rbp-A0h]
  __int128 v48; // [rsp+E0h] [rbp-90h]
  __int128 v49; // [rsp+F0h] [rbp-80h]
  __int128 v50; // [rsp+100h] [rbp-70h]
  __int128 v51; // [rsp+110h] [rbp-60h]
  __int128 v52; // [rsp+120h] [rbp-50h]
  __int128 v53; // [rsp+130h] [rbp-40h]
  char v54; // [rsp+180h] [rbp+10h] BYREF

  v46 = v7;
  v47 = v8;
  v48 = v9;
  v49 = v10;
  v50 = v11;
  v51 = v12;
  v52 = v13;
  v53 = v14;
  thisa = this;
  log_levela = log_level;
  formata = format;
  v43 = v3;
  v44 = v5;
  v45 = v6;
  v15 = (unsigned __int64)v41;
  v38 = v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v34 = __asan_stack_malloc_1(96LL);
    if ( v34 )
      v15 = v34;
  }
  *(_QWORD *)v15 = 1102416563LL;
  *(_QWORD *)(v15 + 8) = "1 32 24 8 args:397";
  *(_QWORD *)(v15 + 16) = common::milog::MiLog::writeLog;
  v16 = (_DWORD *)(v15 >> 3);
  v16[536862720] = -235802127;
  v16[536862721] = -218103808;
  v16[536862722] = -202116109;
  v17 = *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)thisa & 7) + 3) >= v17 && v17 )
  {
    v20 = (unsigned __int64)thisa;
    __asan_report_load4(thisa);
LABEL_29:
    v18 = 64LL;
    __asan_report_store_n(v20, 64LL);
LABEL_30:
    __asan_report_store4(v20, v18);
LABEL_31:
    v24 = 32LL;
    __asan_report_store_n(v20, 32LL);
LABEL_32:
    __asan_report_store4(v20, v24);
LABEL_33:
    __asan_report_store4(v20, v24);
LABEL_34:
    __asan_report_store4(v20, v24);
    goto LABEL_35;
  }
  max_log_len = thisa->max_log_len_._M_i;
  v18 = max_log_len + 144;
  v19 = alloca(max_log_len + 144 + 32LL - (((_BYTE)max_log_len - 112) & 0x1F) + 88);
  v4 = (((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  __asan_alloca_poison(v4, max_log_len + 144);
  v20 = (((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 48;
  if ( *(_BYTE *)((((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 111) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 111) >> 3) + 0x7FFF8000) <= (unsigned __int8)(((((unsigned __int64)&v38 + 7) & 0xE0) + 111) & 7)
    || *(char *)((((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 48) >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_29;
  }
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x30) = 0LL;
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x38) = 0LL;
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x40) = 0LL;
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x48) = 0LL;
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x50) = 0LL;
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x58) = 0LL;
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x60) = 0LL;
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x68) = 0LL;
  v20 = (((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 112;
  v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
    goto LABEL_30;
  *(_DWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x70) = 0;
  v20 = (((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 116;
  v22 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  v24 = ((((unsigned __int64)&v38 + 7) & 0xE0) + 116) & 7;
  LOBYTE(v24) = v22 <= (signed __int8)v24;
  if ( ((v22 != 0) & (unsigned __int8)v24) != 0 )
    goto LABEL_31;
  v23 = *(_BYTE *)((((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 147) >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= (signed __int8)(((((unsigned __int64)&v38 + 7) & 0xE0) - 109) & 7) )
    goto LABEL_31;
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x74) = 0LL;
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x7C) = 0LL;
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x84) = 0LL;
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x8C) = 0LL;
  v20 = (((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 152;
  v25 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
    goto LABEL_32;
  *(_DWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x98) = 0;
  v20 = (((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 156;
  v26 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( (char)((((((unsigned __int64)&v38 + 7) & 0xE0) - 100) & 7) + 3) >= v26 && v26 )
    goto LABEL_33;
  *(_DWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x9C) = 0;
  v20 = (((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 160;
  v27 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( v27 && v27 <= 3 )
    goto LABEL_34;
  *(_DWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0xA0) = 0;
  v20 = (((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 168;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8(v20, v24);
LABEL_36:
    __asan_report_store4(v20, v24);
LABEL_37:
    __asan_report_store1(v20, v24, v30);
LABEL_38:
    __asan_report_store4(v20, v24);
    goto LABEL_39;
  }
  *(_QWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0xA8) = 0LL;
  v20 = (((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 148;
  v28 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( (char)((((((unsigned __int64)&v38 + 7) & 0xE0) - 108) & 7) + 3) >= v28 && v28 )
    goto LABEL_36;
  *(_DWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x94) = log_levela;
  *(_DWORD *)(v15 + 32) = 24;
  *(_DWORD *)(v15 + 36) = 48;
  *(_QWORD *)(v15 + 40) = &v54;
  *(_QWORD *)(v15 + 48) = v42;
  v24 = max_log_len;
  vsnprintf(
    (char *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 176),
    max_log_len,
    formata,
    (___va_list_tag *)(v15 + 32));
  v29 = strlen((const char *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 176));
  v20 = (((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 176 + v29;
  v30 = *(unsigned __int8 *)((v20 >> 3) + 0x7FFF8000);
  if ( (char)v30 <= (char)(((((unsigned __int64)&v38 + 7) & 0xE0) - 80 + v29) & 7) && (_BYTE)v30 )
    goto LABEL_37;
  *(_BYTE *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0xB0 + v29) = 10;
  v31 = v29 + 145;
  v20 = (((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 156;
  v32 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( (char)((((((unsigned __int64)&v38 + 7) & 0xE0) - 100) & 7) + 3) >= v32 && v32 )
    goto LABEL_38;
  *(_DWORD *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 0x9C) = v31;
  LODWORD(v4) = common::milog::MiLog::writeLog(
                  thisa,
                  (common::milog::MiLogHead *)((((unsigned __int64)&v38 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 32));
  if ( v38 != (char *)v15 )
  {
LABEL_39:
    *(_QWORD *)v15 = 1172321806LL;
    *(_QWORD *)((v15 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v15 >> 3) + 0x7FFF8008) = -168430091;
    goto LABEL_25;
  }
  *(_QWORD *)((v15 >> 3) + 0x7FFF8000) = 0LL;
  *(_DWORD *)((v15 >> 3) + 0x7FFF8008) = 0;
LABEL_25:
  __asan_allocas_unpoison(&v35, v42);
  return v4;
};

// Line 409: range 000000000C98DCB6-000000000C98E16C
int32_t __fastcall common::milog::MiLog::writeLog(common::milog::MiLog *const this, common::milog::MiLogHead *head)
{
  bool isLogLevelMask; // r13
  common::milog::MiLogHead *v4; // rbp
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  char v7; // dl
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rdx
  char *p_tid; // rdi
  char v13; // al
  char v14; // dl
  char *v15; // rax
  char *v16; // rbp
  char v17; // al
  unsigned __int64 LogBufHeadQueue; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  char v23; // al
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  common::milog::MiLogBuf *milog_buf; // [rsp+10h] [rbp-A8h]
  std::string v27; // [rsp+20h] [rbp-98h] BYREF
  char v28[120]; // [rsp+40h] [rbp-78h] BYREF

  v4 = head;
  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v5 = v9;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 12 skip_len:427";
  *(_QWORD *)(v5 + 16) = common::milog::MiLog::writeLog;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  v7 = *(_BYTE *)(((unsigned __int64)&head->log_level >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)head + 116) & 7) + 3) >= v7 && v7 )
  {
    __asan_report_load4(&head->log_level);
  }
  else
  {
    isLogLevelMask = common::milog::MiLog::isLogLevelMask(this, head->log_level);
    if ( isLogLevelMask )
      goto LABEL_5;
  }
  milog_buf = common::milog::MiLog::getMiLogBuf(this);
  if ( common::milog::MiLogBuf::needSync(milog_buf) )
  {
    common::tools::TimeUtils::getNowStr[abi:cxx11](&v27);
    printf("%s milog_buf need sync\n", v27._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
      operator delete(v27._M_dataplus._M_p);
    common::milog::MiLog::flushBuf(this);
  }
  v10 = *(_BYTE *)(((unsigned __int64)&head->log_level >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)head + 116) & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(&head->log_level);
    goto LABEL_28;
  }
  common::milog::MiLog::getLogLevelInfo(this, head->log_level);
  clock_gettime(0, &head->create_time);
  if ( !`guard variable for'common::milog::gettid(void)::tid[__readfsqword(0)] )
  {
LABEL_28:
    head = (common::milog::MiLogHead *)syscall(186LL);
    *(_QWORD *)((char *)&common::milog::gettid(void)::tid + __readfsqword(0)) = head;
    `guard variable for'common::milog::gettid(void)::tid[__readfsqword(0)] = 1;
  }
  v11 = *(_QWORD *)((char *)&common::milog::gettid(void)::tid + __readfsqword(0));
  p_tid = (char *)&v4->tid;
  v13 = *(_BYTE *)(((unsigned __int64)&v4->tid >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
  {
    __asan_report_store4(p_tid, head);
    goto LABEL_30;
  }
  v4->tid = v11;
  p_tid = (char *)&v4->milog_buf_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&v4->milog_buf_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8(p_tid, head);
LABEL_31:
    __asan_report_load4(p_tid);
    goto LABEL_32;
  }
  v4->milog_buf_ptr = milog_buf;
  *(_DWORD *)(v5 + 32) = 0;
  p_tid = (char *)&v4->total_len;
  v14 = *(_BYTE *)(((unsigned __int64)&v4->total_len >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v4 + 124) & 7) + 3) >= v14 && v14 )
    goto LABEL_31;
  head = v4;
  v15 = common::milog::MiLogBuf::append(milog_buf, (const char *)v4, v4->total_len, (int32_t *)(v5 + 32));
  v16 = v15;
  if ( !v15 )
    goto LABEL_33;
  p_tid = v15 + 128;
  v17 = *(_BYTE *)(((unsigned __int64)(v15 + 128) >> 3) + 0x7FFF8000);
  if ( !v17 || v17 > 3 )
  {
    *((_DWORD *)v16 + 32) = *(_DWORD *)(v5 + 32);
    while ( 1 )
    {
      LogBufHeadQueue = (unsigned __int64)common::milog::MiLog::getLogBufHeadQueue(this);
      v24 = LogBufHeadQueue + 72;
      if ( *(_BYTE *)(((LogBufHeadQueue + 72) >> 3) + 0x7FFF8000) )
        break;
      v20 = *(_QWORD *)(LogBufHeadQueue + 72);
      v24 = LogBufHeadQueue + 80;
      if ( *(_BYTE *)(((LogBufHeadQueue + 80) >> 3) + 0x7FFF8000) )
        goto LABEL_36;
      v19 = *(_QWORD *)(LogBufHeadQueue + 80);
      if ( !*(_BYTE *)((LogBufHeadQueue >> 3) + 0x7FFF8000) )
      {
        head = *(common::milog::MiLogHead **)LogBufHeadQueue;
        v21 = *(_QWORD *)LogBufHeadQueue + 1LL;
        goto LABEL_49;
      }
LABEL_37:
      v19 = LogBufHeadQueue;
      LogBufHeadQueue = __asan_report_load8(LogBufHeadQueue);
      do
      {
        v21 -= v20;
LABEL_49:
        ;
      }
      while ( v20 <= v21 );
      if ( *(_BYTE *)(((LogBufHeadQueue + 64) >> 3) + 0x7FFF8000) )
      {
        v22 = LogBufHeadQueue + 64;
        __asan_report_load8(LogBufHeadQueue + 64);
LABEL_40:
        __asan_report_store8(v22, head);
LABEL_41:
        v23 = isLogLevelMask;
        goto LABEL_54;
      }
      if ( v21 == *(_QWORD *)(LogBufHeadQueue + 64) )
        goto LABEL_41;
      v25 = v19 + 8LL * (_QWORD)head;
      v22 = v25;
      head = (common::milog::MiLogHead *)(v25 >> 3);
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        goto LABEL_40;
      *(_QWORD *)v25 = v16;
      *(_QWORD *)LogBufHeadQueue = v21;
      v23 = 1;
LABEL_54:
      if ( v23 )
        goto LABEL_5;
      common::tools::TimeUtils::getNowStr[abi:cxx11](&v27);
      head = (common::milog::MiLogHead *)v27._M_dataplus._M_p;
      printf("%s log queue need push\n", v27._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
        operator delete(v27._M_dataplus._M_p);
      common::milog::MiLog::flushBuf(this);
    }
    __asan_report_load8(v24);
LABEL_36:
    LogBufHeadQueue = __asan_report_load8(v24);
    goto LABEL_37;
  }
LABEL_32:
  __asan_report_store4(p_tid, head);
LABEL_33:
  common::tools::TimeUtils::getNowStr[abi:cxx11](&v27);
  printf("%s milog_buf append failed\n", v27._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
    operator delete(v27._M_dataplus._M_p);
LABEL_5:
  if ( v28 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return 0;
};

// Line 449: range 000000000C98C82E-000000000C98D1E3
common::milog::MiLogBuf *__fastcall common::milog::MiLog::getMiLogBuf(common::milog::MiLog *const this)
{
  std::string *p_type; // rsi
  unsigned __int64 v2; // r15
  unsigned __int64 v4; // rbx
  char *v5; // r13
  _DWORD *v6; // rbp
  common::milog::MiLogBuf *result; // rax
  __int64 v8; // rax
  std::atomic<unsigned int> *p_log_buf_size; // rdi
  char v10; // dl
  char v11; // al
  unsigned __int64 v12; // rdx
  char v13; // al
  char v14; // dl
  char v15; // al
  unsigned __int64 v16; // rdi
  char v17; // al
  char v18; // dl
  __int64 v19; // rax
  void *v20; // rdi
  char v21; // al
  std::vector<std::shared_ptr<common::milog::MiLogBuf>>::iterator v22; // rsi
  const std::shared_ptr<common::milog::MiLogBuf> *v23; // rcx
  std::mutex *p_buf_create_mutex; // r15
  std::vector<std::shared_ptr<common::milog::MiLogBuf>> *p_buf_vec; // rdi
  std::_Vector_base<std::shared_ptr<common::milog::MiLogBuf>>::pointer *p_M_finish; // r12
  __int64 p_M_end_of_storage; // rax
  __int64 v28; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdx
  volatile signed __int32 *v30; // rdx
  char v31; // cl
  unsigned __int64 v32; // r12
  volatile signed __int32 *v33; // rdi
  char v34; // dl
  signed __int32 v35; // eax
  unsigned __int64 v36; // rdi
  char v37; // dl
  signed __int32 v38; // eax
  unsigned __int64 v39; // rdi
  std::forward_iterator_tag v40; // cl
  struct _Unwind_Exception *v41; // rbx
  std::string::pointer M_p; // rdi
  char *v43; // rbp
  char v44; // al
  char *v45; // rsi
  unsigned __int64 v46; // rdi
  char v47; // al
  char v48; // dl
  char v49; // al
  unsigned __int64 v50; // rdi
  char v51; // al
  char v52; // dl
  __int64 v53; // rax
  void *v54; // rdi
  char v55; // al
  struct _Unwind_Exception *v56; // rbx
  void *v57; // rdi
  char v58; // dl
  char v59; // dl
  struct _Unwind_Exception *v60; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v61; // rdi
  unsigned __int64 v62; // [rsp+0h] [rbp-E8h]
  int v63; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v64; // [rsp+0h] [rbp-E8h]
  signed int v65; // [rsp+Ch] [rbp-DCh]
  std::string type; // [rsp+10h] [rbp-D8h] BYREF
  char v67[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v4 = v8;
  }
  v5 = (char *)(v4 + 128);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 4 __a2 64 16 20 milog_shared_ptr:453 96 16 7 __guard";
  *(_QWORD *)(v4 + 16) = common::milog::MiLog::getMiLogBuf;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  if ( !*(_QWORD *)(__readfsqword(0) - 5896) )
  {
    p_log_buf_size = &this->log_buf_size_;
    v10 = *(_BYTE *)(((unsigned __int64)&this->log_buf_size_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v10 && v10 )
    {
      __asan_report_load4(p_log_buf_size);
    }
    else
    {
      v65 = this->log_buf_size_._M_i << 10;
      p_log_buf_size = (std::atomic<unsigned int> *)&common::tools::perf::MemoryPerf::is_record;
      v11 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
      v12 = (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7;
      if ( v11 > (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) || !v11 )
      {
        if ( common::tools::perf::MemoryPerf::is_record )
        {
          *(_QWORD *)(v4 + 64) = 0LL;
          p_type = (std::string *)(v4 + 48);
          std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::milog::MiLogBuf,common::tools::perf::allocator<common::milog::MiLogBuf,common::milog::MiLogBuf>,(__gnu_cxx::_Lock_policy)2>,common::milog::MiLogBuf>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::milog::MiLogBuf,common::tools::perf::allocator<common::milog::MiLogBuf,common::milog::MiLogBuf>,(__gnu_cxx::_Lock_policy)2>,common::milog::MiLogBuf> *)(v4 + 48));
          v62 = *(_QWORD *)(v4 + 104);
          p_log_buf_size = (std::atomic<unsigned int> *)(v62 + 8);
          v13 = *(_BYTE *)(((v62 + 8) >> 3) + 0x7FFF8000);
          if ( !v13 || v13 > 3 )
          {
            *(_DWORD *)(v62 + 8) = 1;
            p_log_buf_size = (std::atomic<unsigned int> *)(v62 + 12);
            v14 = *(_BYTE *)(((v62 + 12) >> 3) + 0x7FFF8000);
            if ( (char)(((v62 + 12) & 7) + 3) < v14 || !v14 )
            {
              *(_DWORD *)(v62 + 12) = 1;
              if ( !*(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)v62 = &`vtable for'std::_Sp_counted_ptr_inplace<common::milog::MiLogBuf,common::tools::perf::allocator<common::milog::MiLogBuf,common::milog::MiLogBuf>,(__gnu_cxx::_Lock_policy)2>
                               + 2;
                v2 = v62 + 16;
                if ( !common::tools::perf::MemoryPerf::is_record )
                  goto LABEL_26;
                type._M_dataplus._M_p = type._anon_0._M_local_buf;
                std::string::_M_construct<char const*>(
                  &type,
                  "N6common5milog8MiLogBufE",
                  "",
                  (std::forward_iterator_tag)v62);
LABEL_24:
                p_type = &type;
                common::tools::perf::MemoryPerfRecorder::construct(
                  &common::tools::perf::MemoryPerf::recorder,
                  &type,
                  0x18uLL);
                if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
                  operator delete(type._M_dataplus._M_p);
LABEL_26:
                v15 = *(_BYTE *)((v2 >> 3) + 0x7FFF8000);
                if ( v15 && v15 <= 3 )
                {
                  v16 = v2;
                  __asan_report_store4(v2, p_type);
                }
                else
                {
                  p_type = (std::string *)(unsigned int)v65;
                  *(_DWORD *)(v62 + 16) = v65;
                  v16 = v2 + 8;
                  if ( !*(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)(v2 + 8) = 0LL;
                    v16 = v2 + 16;
                    v17 = *(_BYTE *)(((v2 + 16) >> 3) + 0x7FFF8000);
                    if ( !v17 || v17 > 3 )
                    {
                      *(_DWORD *)(v2 + 16) = 0;
                      v16 = v2 + 20;
                      v18 = *(_BYTE *)(((v2 + 20) >> 3) + 0x7FFF8000);
                      if ( (char)(((v2 + 20) & 7) + 3) < v18 || !v18 )
                      {
                        *(_DWORD *)(v2 + 20) = v65;
                        v19 = operator new[](v65);
                        goto LABEL_38;
                      }
LABEL_37:
                      v19 = __asan_report_store4(v16, p_type);
LABEL_38:
                      v20 = (void *)v19;
                      if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store8(v2 + 8, p_type);
                      }
                      else
                      {
                        *(_QWORD *)(v2 + 8) = v19;
                        v21 = *(_BYTE *)((v2 >> 3) + 0x7FFF8000);
                        if ( !v21 || v21 > 3 )
                        {
                          v22._M_current = 0LL;
                          memset(v20, 0, *(int *)(v62 + 16));
                          *(_QWORD *)(v4 + 104) = 0LL;
                          *(_QWORD *)(v4 + 72) = v62;
                          *(_QWORD *)(v4 + 64) = v2;
LABEL_42:
                          *(_QWORD *)(__readfsqword(0) - 5896) = *(_QWORD *)(v4 + 64);
                          p_buf_create_mutex = &this->buf_create_mutex;
                          if ( &_pthread_key_create )
                          {
                            v63 = pthread_mutex_lock(&this->buf_create_mutex._M_mutex);
                            if ( v63 )
                            {
                              __asan_handle_no_return(&this->buf_create_mutex);
                              std::__throw_system_error(v63);
                            }
                          }
                          p_buf_vec = &this->buf_vec;
                          p_M_finish = &this->buf_vec._M_impl._M_finish;
                          if ( *(_BYTE *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000) )
                          {
                            p_M_end_of_storage = __asan_report_load8(p_M_finish);
                          }
                          else
                          {
                            v22._M_current = p_buf_vec->_M_impl._M_finish;
                            p_M_end_of_storage = (__int64)&p_buf_vec->_M_impl._M_end_of_storage;
                            if ( !*(_BYTE *)(((unsigned __int64)&p_buf_vec->_M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
                            {
                              if ( v22._M_current == p_buf_vec->_M_impl._M_end_of_storage )
                                goto LABEL_123;
                              if ( !*(_BYTE *)(((unsigned __int64)v22._M_current >> 3) + 0x7FFF8000) )
                              {
                                v22._M_current->_M_ptr = *(std::__shared_ptr<common::milog::MiLogBuf,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 64);
                                v28 = *(_QWORD *)(v4 + 72);
                                p_M_refcount = &v22._M_current->_M_refcount;
                                if ( !*(_BYTE *)(((unsigned __int64)&v22._M_current->_M_refcount >> 3) + 0x7FFF8000) )
                                {
                                  v22._M_current->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v28;
                                  if ( !v28 )
                                  {
LABEL_54:
                                    ++p_buf_vec->_M_impl._M_finish;
                                    goto LABEL_55;
                                  }
                                  v30 = (volatile signed __int32 *)(v28 + 8);
                                  if ( !&_pthread_key_create )
                                    goto LABEL_119;
                                  v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
                                  if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
                                  {
                                    _InterlockedAdd(v30, 1u);
                                    goto LABEL_54;
                                  }
LABEL_118:
                                  p_buf_vec = (std::vector<std::shared_ptr<common::milog::MiLogBuf>> *)v30;
                                  v28 = __asan_report_store4(v30, v22._M_current);
LABEL_119:
                                  v22._M_current = (std::shared_ptr<common::milog::MiLogBuf> *)*(unsigned __int8 *)(((unsigned __int64)(v28 + 8) >> 3) + 0x7FFF8000);
                                  if ( (char)(((v28 + 8) & 7) + 3) < SLOBYTE(v22._M_current) || !LOBYTE(v22._M_current) )
                                  {
                                    ++*(_DWORD *)(v28 + 8);
                                    goto LABEL_54;
                                  }
                                  p_buf_vec = (std::vector<std::shared_ptr<common::milog::MiLogBuf>> *)(v28 + 8);
                                  __asan_report_load4(v28 + 8);
LABEL_123:
                                  std::vector<std::shared_ptr<common::milog::MiLogBuf>>::_M_realloc_insert<std::shared_ptr<common::milog::MiLogBuf> const&>(
                                    p_buf_vec,
                                    v22,
                                    (const std::shared_ptr<common::milog::MiLogBuf> *)(v4 + 64),
                                    v23);
LABEL_55:
                                  if ( &_pthread_key_create )
                                    pthread_mutex_unlock(&p_buf_create_mutex->_M_mutex);
                                  v32 = *(_QWORD *)(v4 + 72);
                                  if ( !v32 )
                                    goto LABEL_3;
                                  v33 = (volatile signed __int32 *)(v32 + 8);
                                  if ( &_pthread_key_create )
                                  {
                                    v34 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
                                    if ( (char)(((unsigned __int8)v33 & 7) + 3) < v34 || !v34 )
                                    {
                                      v35 = _InterlockedExchangeAdd(v33, 0xFFFFFFFF);
                                      goto LABEL_62;
                                    }
                                    __asan_report_store4(v33, v22._M_current);
                                  }
                                  v58 = *(_BYTE *)(((v32 + 8) >> 3) + 0x7FFF8000);
                                  if ( (char)(((v32 + 8) & 7) + 3) >= v58 && v58 )
                                  {
                                    __asan_report_load4(v32 + 8);
                                    goto LABEL_129;
                                  }
                                  v35 = *(_DWORD *)(v32 + 8);
                                  *(_DWORD *)(v32 + 8) = v35 - 1;
LABEL_62:
                                  if ( v35 != 1 )
                                    goto LABEL_3;
                                  if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
                                  {
                                    v36 = *(_QWORD *)v32 + 16LL;
                                    if ( !*(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
                                    {
                                      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v32 + 16LL))(v32);
                                      v36 = v32 + 12;
                                      if ( !&_pthread_key_create )
                                        goto LABEL_132;
                                      v37 = *(_BYTE *)((v36 >> 3) + 0x7FFF8000);
                                      if ( (char)((v36 & 7) + 3) < v37 || !v37 )
                                      {
                                        v38 = _InterlockedExchangeAdd((volatile signed __int32 *)v36, 0xFFFFFFFF);
                                        goto LABEL_69;
                                      }
LABEL_131:
                                      __asan_report_store4(v36, v22._M_current);
LABEL_132:
                                      v59 = *(_BYTE *)(((v32 + 12) >> 3) + 0x7FFF8000);
                                      if ( (char)(((v32 + 12) & 7) + 3) >= v59 && v59 )
                                      {
                                        __asan_report_load4(v32 + 12);
                                        goto LABEL_136;
                                      }
                                      v38 = *(_DWORD *)(v32 + 12);
                                      *(_DWORD *)(v32 + 12) = v38 - 1;
LABEL_69:
                                      if ( v38 != 1 )
                                        goto LABEL_3;
                                      if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
                                      {
                                        v39 = *(_QWORD *)v32 + 24LL;
                                        if ( !*(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
                                        {
                                          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v32 + 24LL))(v32);
                                          goto LABEL_3;
                                        }
LABEL_137:
                                        v60 = (struct _Unwind_Exception *)__asan_report_load8(v39);
                                        if ( &_pthread_key_create )
                                          pthread_mutex_unlock(&p_buf_create_mutex->_M_mutex);
                                        v61 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v5 - 7);
                                        if ( v61 )
                                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v61);
                                        __asan_handle_no_return(v61);
                                        _Unwind_Resume(v60);
                                      }
LABEL_136:
                                      v39 = v32;
                                      __asan_report_load8(v32);
                                      goto LABEL_137;
                                    }
LABEL_130:
                                    __asan_report_load8(v36);
                                    goto LABEL_131;
                                  }
LABEL_129:
                                  v36 = v32;
                                  __asan_report_load8(v32);
                                  goto LABEL_130;
                                }
LABEL_117:
                                __asan_report_store8(p_M_refcount, v22._M_current);
                                goto LABEL_118;
                              }
LABEL_116:
                              __asan_report_store8(v22._M_current, v22._M_current);
                              goto LABEL_117;
                            }
                          }
                          __asan_report_load8(p_M_end_of_storage);
                          goto LABEL_116;
                        }
                      }
                      v41 = (struct _Unwind_Exception *)__asan_report_load4(v2);
                      M_p = type._M_dataplus._M_p;
                      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
                        operator delete(type._M_dataplus._M_p);
                      while ( 1 )
                      {
                        v43 = (char *)*((_QWORD *)v5 - 3);
                        if ( !v43 )
                          goto LABEL_84;
                        M_p = (std::string::pointer)&common::tools::perf::MemoryPerf::is_record;
                        v44 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3)
                                       + 0x7FFF8000);
                        if ( v44 > (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) || !v44 )
                          break;
                        v41 = (struct _Unwind_Exception *)__asan_report_load1(
                                                            &common::tools::perf::MemoryPerf::is_record,
                                                            p_type,
                                                            (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7);
                      }
                      if ( common::tools::perf::MemoryPerf::is_record )
                      {
                        type._M_dataplus._M_p = type._anon_0._M_local_buf;
                        std::string::_M_construct<char const*>(&type, "N6common5milog8MiLogBufE", "", v40);
                        common::tools::perf::MemoryPerfRecorder::deallocate(
                          &common::tools::perf::MemoryPerf::recorder,
                          &type);
                        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
                          operator delete(type._M_dataplus._M_p);
                      }
                      M_p = v43;
                      free(v43);
LABEL_84:
                      __asan_handle_no_return(M_p);
                      _Unwind_Resume(v41);
                    }
LABEL_36:
                    __asan_report_store4(v16, p_type);
                    goto LABEL_37;
                  }
                }
                __asan_report_store8(v16, p_type);
                goto LABEL_36;
              }
LABEL_23:
              __asan_report_store8(v62, p_type);
              goto LABEL_24;
            }
LABEL_22:
            __asan_report_store4(p_log_buf_size, p_type);
            goto LABEL_23;
          }
LABEL_21:
          __asan_report_store4(p_log_buf_size, p_type);
          goto LABEL_22;
        }
        *(_QWORD *)(v4 + 64) = 0LL;
        v45 = (char *)(v4 + 48);
        std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::milog::MiLogBuf,std::allocator<common::milog::MiLogBuf>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::milog::MiLogBuf,std::allocator<common::milog::MiLogBuf>,(__gnu_cxx::_Lock_policy)2> > *)(v4 + 48));
        v64 = *(_QWORD *)(v4 + 104);
        v46 = v64 + 8;
        v47 = *(_BYTE *)(((v64 + 8) >> 3) + 0x7FFF8000);
        if ( v47 && v47 <= 3 )
        {
          __asan_report_store4(v46, v45);
        }
        else
        {
          *(_DWORD *)(v64 + 8) = 1;
          v46 = v64 + 12;
          v48 = *(_BYTE *)(((v64 + 12) >> 3) + 0x7FFF8000);
          if ( (char)(((v64 + 12) & 7) + 3) < v48 || !v48 )
          {
            *(_DWORD *)(v64 + 12) = 1;
            if ( !*(_BYTE *)((v64 >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)v64 = &`vtable for'std::_Sp_counted_ptr_inplace<common::milog::MiLogBuf,std::allocator<common::milog::MiLogBuf>,(__gnu_cxx::_Lock_policy)2>
                             + 2;
              v2 = v64 + 16;
              v49 = *(_BYTE *)(((v64 + 16) >> 3) + 0x7FFF8000);
              if ( !v49 || v49 > 3 )
              {
                *(_DWORD *)(v64 + 16) = v65;
                v50 = v64 + 24;
                if ( !*(_BYTE *)(((v64 + 24) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(v64 + 24) = 0LL;
                  v50 = v64 + 32;
                  v51 = *(_BYTE *)(((v64 + 32) >> 3) + 0x7FFF8000);
                  if ( !v51 || v51 > 3 )
                  {
                    *(_DWORD *)(v64 + 32) = 0;
                    v50 = v64 + 36;
                    v52 = *(_BYTE *)(((v64 + 36) >> 3) + 0x7FFF8000);
                    if ( (char)(((v64 + 36) & 7) + 3) < v52 || !v52 )
                    {
                      *(_DWORD *)(v64 + 36) = v65;
                      v53 = operator new[](v65);
                      goto LABEL_105;
                    }
LABEL_104:
                    v53 = __asan_report_store4(v50, v45);
LABEL_105:
                    v54 = (void *)v53;
                    if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store8(v2 + 8, v45);
                    }
                    else
                    {
                      *(_QWORD *)(v2 + 8) = v53;
                      v55 = *(_BYTE *)((v2 >> 3) + 0x7FFF8000);
                      if ( !v55 || v55 > 3 )
                      {
                        v22._M_current = 0LL;
                        memset(v54, 0, *(int *)(v64 + 16));
                        *(_QWORD *)(v4 + 104) = 0LL;
                        *(_QWORD *)(v4 + 72) = v64;
                        *(_QWORD *)(v4 + 64) = v2;
                        goto LABEL_42;
                      }
                    }
                    v56 = (struct _Unwind_Exception *)__asan_report_load4(v2);
                    v57 = (void *)*((_QWORD *)v5 - 3);
                    if ( v57 )
                      operator delete(v57);
                    __asan_handle_no_return(v57);
                    _Unwind_Resume(v56);
                  }
LABEL_103:
                  __asan_report_store4(v50, v45);
                  goto LABEL_104;
                }
LABEL_102:
                __asan_report_store8(v50, v45);
                goto LABEL_103;
              }
LABEL_101:
              v50 = v2;
              __asan_report_store4(v2, v45);
              goto LABEL_102;
            }
LABEL_100:
            __asan_report_store8(v64, v45);
            goto LABEL_101;
          }
        }
        __asan_report_store4(v46, v45);
        goto LABEL_100;
      }
    }
    __asan_report_load1(p_log_buf_size, p_type, v12);
    goto LABEL_21;
  }
LABEL_3:
  result = *(common::milog::MiLogBuf **)(__readfsqword(0) - 5896);
  if ( v67 == (char *)v4 )
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

// Line 464: range 000000000C98D1E8-000000000C98DCB0
common::milog::MiLog::LogBufHeadQueue *__fastcall common::milog::MiLog::getLogBufHeadQueue(
        common::milog::MiLog *const this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 p_type; // rsi
  unsigned __int64 v3; // r13
  std::__atomic_base<unsigned int>::__int_type M_i; // r14d
  unsigned __int64 v5; // rbp
  char *v6; // r15
  _DWORD *v7; // r12
  char v8; // dl
  common::milog::MiLog::LogBufHeadQueue *result; // rax
  __int64 v10; // rax
  std::__atomic_base<unsigned int>::__int_type v11; // r14d
  bool *v12; // rdi
  char v13; // al
  std::forward_iterator_tag v14; // cl
  char v15; // al
  char v16; // dl
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  const std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> > *v21; // rcx
  unsigned __int64 i; // rbx
  std::forward_iterator_tag v23; // cl
  struct _Unwind_Exception *v24; // rbx
  std::string::pointer M_p; // rdi
  char *v26; // rbp
  char v27; // al
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdi
  char v30; // al
  char v31; // dl
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  struct _Unwind_Exception *v36; // rbx
  void *v37; // rdi
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rdi
  unsigned __int64 j; // r14
  unsigned __int64 v44; // rbx
  _QWORD *v45; // rdi
  int v46; // r13d
  std::vector<std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> >>::iterator v47; // rsi
  std::vector<std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> >> *p_queue_vec; // rax
  std::_Vector_base<std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> >>::pointer *p_M_finish; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v50; // rdx
  volatile signed __int32 *M_current; // rdi
  char v52; // cl
  pthread_mutex_t *v53; // rbx
  volatile signed __int32 *p_owner; // rdi
  char v55; // dl
  signed __int32 owner; // eax
  unsigned __int64 v57; // rdi
  char v58; // dl
  signed __int32 nusers; // eax
  unsigned __int64 v60; // rdi
  char v61; // dl
  char v62; // dl
  struct _Unwind_Exception *v63; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v64; // rdi
  unsigned __int64 v66; // [rsp+10h] [rbp-118h]
  unsigned __int64 v67; // [rsp+18h] [rbp-110h]
  std::string type; // [rsp+30h] [rbp-F8h] BYREF
  char v69[216]; // [rsp+50h] [rbp-D8h] BYREF

  v5 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_2(160LL);
    if ( v10 )
      v5 = v10;
  }
  v6 = (char *)(v5 + 160);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 4 __a2 64 8 8 head:479 96 16 33 log_buf_head_queue_shared_ptr:470 128 16 7 __guard";
  *(_QWORD *)(v5 + 16) = common::milog::MiLog::getLogBufHeadQueue;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  v8 = *(_BYTE *)(((unsigned __int64)&this->log_queue_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 28) & 7) + 3) >= v8 && v8 )
  {
    __asan_report_load4(&this->log_queue_size_);
  }
  else
  {
    M_i = this->log_queue_size_._M_i;
    if ( *(_QWORD *)(__readfsqword(0) - 5904) )
      goto LABEL_5;
  }
  v11 = M_i << 10;
  v12 = &common::tools::perf::MemoryPerf::is_record;
  v13 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v13 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v13 )
  {
    __asan_report_load1(
      &common::tools::perf::MemoryPerf::is_record,
      p_type,
      (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7);
LABEL_21:
    __asan_report_store4(v12, p_type);
LABEL_22:
    __asan_report_store4(v12, p_type);
    goto LABEL_23;
  }
  if ( !common::tools::perf::MemoryPerf::is_record )
  {
    *(_QWORD *)(v5 + 96) = 0LL;
    p_type = v5 + 48;
    std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<boost::lockfree::spsc_queue<common::milog::MiLogHead *>,std::allocator<boost::lockfree::spsc_queue<common::milog::MiLogHead *>>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<boost::lockfree::spsc_queue<common::milog::MiLogHead*>,std::allocator<boost::lockfree::spsc_queue<common::milog::MiLogHead*> >,(__gnu_cxx::_Lock_policy)2> > *)(v5 + 48));
    v28 = *(_QWORD *)(v5 + 136);
    v29 = v28 + 8;
    v30 = *(_BYTE *)(((v28 + 8) >> 3) + 0x7FFF8000);
    if ( v30 && v30 <= 3 )
    {
      __asan_report_store4(v29, p_type);
    }
    else
    {
      *(_DWORD *)(v28 + 8) = 1;
      v29 = v28 + 12;
      v31 = *(_BYTE *)(((v28 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v28 + 12) & 7) + 3) < v31 || !v31 )
      {
        *(_DWORD *)(v28 + 12) = 1;
        if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v28 = &`vtable for'std::_Sp_counted_ptr_inplace<boost::lockfree::spsc_queue<common::milog::MiLogHead *>,std::allocator<boost::lockfree::spsc_queue<common::milog::MiLogHead *>>,(__gnu_cxx::_Lock_policy)2>
                         + 2;
          v3 = v28 + 16;
          if ( !*(_BYTE *)(((v28 + 16) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v28 + 16) = 0LL;
            v32 = v28 + 80;
            if ( !*(_BYTE *)(((v28 + 80) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v28 + 80) = 0LL;
              v33 = v11 + 1LL;
              v34 = v28 + 88;
              if ( !*(_BYTE *)(((v28 + 88) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v28 + 88) = v33;
                v35 = operator new(8 * v33);
LABEL_62:
                if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
                {
                  v36 = (struct _Unwind_Exception *)__asan_report_store8(v3 + 80, p_type);
                  v37 = *(void **)(v5 + 136);
                  if ( v37 )
                    operator delete(v37);
                  __asan_handle_no_return(v37);
                  _Unwind_Resume(v36);
                }
                *(_QWORD *)(v3 + 80) = v35;
                *(_QWORD *)(v5 + 136) = 0LL;
                *(_QWORD *)(v5 + 104) = v28;
                *(_QWORD *)(v5 + 96) = v28 + 16;
                goto LABEL_35;
              }
LABEL_61:
              v35 = __asan_report_store8(v34, p_type);
              goto LABEL_62;
            }
LABEL_60:
            v34 = __asan_report_store8(v32, p_type);
            goto LABEL_61;
          }
LABEL_59:
          v32 = __asan_report_store8(v3, p_type);
          goto LABEL_60;
        }
LABEL_58:
        __asan_report_store8(v28, p_type);
        goto LABEL_59;
      }
    }
    __asan_report_store4(v29, p_type);
    goto LABEL_58;
  }
  *(_QWORD *)(v5 + 96) = 0LL;
  p_type = v5 + 48;
  std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<boost::lockfree::spsc_queue<common::milog::MiLogHead *>,common::tools::perf::allocator<boost::lockfree::spsc_queue<common::milog::MiLogHead *>,boost::lockfree::spsc_queue<common::milog::MiLogHead *>>,(__gnu_cxx::_Lock_policy)2>,boost::lockfree::spsc_queue<common::milog::MiLogHead *>>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<boost::lockfree::spsc_queue<common::milog::MiLogHead*>,common::tools::perf::allocator<boost::lockfree::spsc_queue<common::milog::MiLogHead*>,boost::lockfree::spsc_queue<common::milog::MiLogHead*> >,(__gnu_cxx::_Lock_policy)2>,boost::lockfree::spsc_queue<common::milog::MiLogHead*> > *)(v5 + 48));
  v1 = *(_QWORD *)(v5 + 136);
  v12 = (bool *)(v1 + 8);
  v15 = *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_21;
  *(_DWORD *)(v1 + 8) = 1;
  v12 = (bool *)(v1 + 12);
  v16 = *(_BYTE *)(((v1 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v1 + 12) & 7) + 3) >= v16 && v16 )
    goto LABEL_22;
  *(_DWORD *)(v1 + 12) = 1;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8(v1, p_type);
    goto LABEL_24;
  }
  *(_QWORD *)v1 = &`vtable for'std::_Sp_counted_ptr_inplace<boost::lockfree::spsc_queue<common::milog::MiLogHead *>,common::tools::perf::allocator<boost::lockfree::spsc_queue<common::milog::MiLogHead *>,boost::lockfree::spsc_queue<common::milog::MiLogHead *>>,(__gnu_cxx::_Lock_policy)2>
                + 2;
  v3 = v1 + 16;
  if ( !common::tools::perf::MemoryPerf::is_record )
    goto LABEL_26;
  type._M_dataplus._M_p = type._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&type, "N5boost8lockfree10spsc_queueIPN6common5milog9MiLogHeadEJEEE", "", v14);
LABEL_24:
  p_type = (unsigned __int64)&type;
  common::tools::perf::MemoryPerfRecorder::construct(&common::tools::perf::MemoryPerf::recorder, &type, 0x58uLL);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
    operator delete(type._M_dataplus._M_p);
LABEL_26:
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
    v17 = __asan_report_store8(v3, p_type);
    goto LABEL_31;
  }
  *(_QWORD *)(v1 + 16) = 0LL;
  v17 = v3 + 64;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    v19 = __asan_report_store8(v17, p_type);
    goto LABEL_32;
  }
  *(_QWORD *)(v3 + 64) = 0LL;
  v18 = v11 + 1LL;
  v19 = v3 + 72;
  if ( *(_BYTE *)(((v3 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v20 = __asan_report_store8(v19, p_type);
    goto LABEL_33;
  }
  *(_QWORD *)(v3 + 72) = v18;
  v20 = operator new(8 * v18);
LABEL_33:
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
  {
    v24 = (struct _Unwind_Exception *)__asan_report_store8(v3 + 80, p_type);
    M_p = type._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
      operator delete(type._M_dataplus._M_p);
    while ( 1 )
    {
      v26 = (char *)*((_QWORD *)v6 - 3);
      if ( !v26 )
        goto LABEL_46;
      M_p = (std::string::pointer)&common::tools::perf::MemoryPerf::is_record;
      v27 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
      if ( v27 > (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) || !v27 )
        break;
      v24 = (struct _Unwind_Exception *)__asan_report_load1(
                                          &common::tools::perf::MemoryPerf::is_record,
                                          p_type,
                                          (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7);
    }
    if ( common::tools::perf::MemoryPerf::is_record )
    {
      type._M_dataplus._M_p = type._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(
        &type,
        "N5boost8lockfree10spsc_queueIPN6common5milog9MiLogHeadEJEEE",
        "",
        v23);
      common::tools::perf::MemoryPerfRecorder::deallocate(&common::tools::perf::MemoryPerf::recorder, &type);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
        operator delete(type._M_dataplus._M_p);
    }
    M_p = v26;
    free(v26);
LABEL_46:
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v24);
  }
  *(_QWORD *)(v3 + 80) = v20;
  *(_QWORD *)(v5 + 136) = 0LL;
  *(_QWORD *)(v5 + 104) = v1;
  *(_QWORD *)(v5 + 96) = v3;
LABEL_35:
  *(_QWORD *)(__readfsqword(0) - 5904) = *(_QWORD *)(v5 + 96);
  for ( i = 0LL; ; ++i )
  {
    v66 = v11;
    if ( v11 <= i )
      break;
    v38 = *(_QWORD *)(__readfsqword(0) - 5904);
    v42 = v38 + 72;
    if ( *(_BYTE *)(((v38 + 72) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v42);
LABEL_68:
      v38 = __asan_report_load8(v42);
      goto LABEL_69;
    }
    v40 = *(_QWORD *)(v38 + 72);
    v42 = v38 + 80;
    if ( *(_BYTE *)(((v38 + 80) >> 3) + 0x7FFF8000) )
      goto LABEL_68;
    v39 = *(_QWORD *)(v38 + 80);
    if ( !*(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
    {
      p_type = *(_QWORD *)v38;
      v21 = (const std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> > *)(*(_QWORD *)v38 + 1LL);
      goto LABEL_79;
    }
LABEL_69:
    v39 = v38;
    v38 = __asan_report_load8(v38);
    do
    {
      v21 = (const std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> > *)((char *)v21 - v40);
LABEL_79:
      ;
    }
    while ( v40 <= (unsigned __int64)v21 );
    if ( *(_BYTE *)(((v38 + 64) >> 3) + 0x7FFF8000) )
    {
      v38 = __asan_report_load8(v38 + 64);
LABEL_72:
      *(_QWORD *)v41 = 0LL;
      *(_QWORD *)v38 = v21;
      continue;
    }
    if ( v21 != *(const std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> > **)(v38 + 64) )
    {
      v41 = v39 + 8 * p_type;
      p_type = v41 >> 3;
      if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store8(v41, p_type);
        break;
      }
      goto LABEL_72;
    }
  }
  *(_QWORD *)(v5 + 64) = 0LL;
  for ( j = 0LL; v66 > j; ++j )
  {
    v44 = *(_QWORD *)(__readfsqword(0) - 5904);
    v45 = (_QWORD *)(v44 + 72);
    if ( *(_BYTE *)(((v44 + 72) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v45);
LABEL_86:
      __asan_report_load8(v45);
LABEL_87:
      __asan_report_load8(v45);
      goto LABEL_88;
    }
    v67 = *(_QWORD *)(v44 + 72);
    v45 = (_QWORD *)(v44 + 80);
    if ( *(_BYTE *)(((v44 + 80) >> 3) + 0x7FFF8000) )
      goto LABEL_86;
    v21 = *(const std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> > **)(v44 + 80);
    v45 = (_QWORD *)v44;
    if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
      goto LABEL_87;
    v45 = (_QWORD *)(v44 + 64);
    if ( !*(_BYTE *)(((v44 + 64) >> 3) + 0x7FFF8000) )
    {
      v3 = *(_QWORD *)(v44 + 64);
      if ( *(_QWORD *)v44 == v3 )
        continue;
      goto LABEL_89;
    }
LABEL_88:
    __asan_report_load8(v45);
LABEL_89:
    boost::lockfree::detail::copy_payload<common::milog::MiLogHead *,common::milog::MiLogHead *>(
      (common::milog::MiLogHead **)&v21->_M_ptr + v3++,
      (common::milog::MiLogHead **)(v5 + 64));
    while ( v67 <= v3 )
      v3 -= v67;
    *(_QWORD *)(v44 + 64) = v3;
  }
  if ( &_pthread_key_create )
  {
    v46 = pthread_mutex_lock(&this->flush_mutex._M_mutex);
    if ( v46 )
    {
      __asan_handle_no_return(&this->flush_mutex);
      std::__throw_system_error(v46);
    }
  }
  v47._M_current = (std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> > *)this;
  p_queue_vec = &this->queue_vec;
  p_M_finish = &this->queue_vec._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->queue_vec._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_134;
  }
  v47._M_current = this->queue_vec._M_impl._M_finish;
  p_M_finish = &this->queue_vec._M_impl._M_end_of_storage;
  if ( *(_BYTE *)(((unsigned __int64)&this->queue_vec._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_134:
    __asan_report_load8(p_M_finish);
LABEL_135:
    M_current = (volatile signed __int32 *)v47._M_current;
    __asan_report_store8(v47._M_current, v47._M_current);
    goto LABEL_136;
  }
  if ( v47._M_current == this->queue_vec._M_impl._M_end_of_storage )
  {
LABEL_142:
    std::vector<std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead *>>>::_M_realloc_insert<std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead *>> const&>(
      p_queue_vec,
      v47,
      (const std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> > *)(v5 + 96),
      v21);
    goto LABEL_114;
  }
  if ( *(_BYTE *)(((unsigned __int64)v47._M_current >> 3) + 0x7FFF8000) )
    goto LABEL_135;
  v47._M_current->_M_ptr = *(std::__shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*>,(__gnu_cxx::_Lock_policy)2>::element_type **)(v5 + 96);
  v50 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 104);
  M_current = (volatile signed __int32 *)&v47._M_current->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v47._M_current->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_136:
    __asan_report_store8(M_current, v47._M_current);
    goto LABEL_137;
  }
  v47._M_current->_M_refcount._M_pi = v50;
  if ( !v50 )
    goto LABEL_113;
  M_current = &v50->_M_use_count;
  if ( &_pthread_key_create )
  {
    v52 = *(_BYTE *)(((unsigned __int64)M_current >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_current & 7) + 3) < v52 || !v52 )
    {
      _InterlockedAdd(M_current, 1u);
      goto LABEL_113;
    }
LABEL_137:
    p_queue_vec = (std::vector<std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> >> *)__asan_report_store4(M_current, v47._M_current);
  }
  v47._M_current = (std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> > *)*(unsigned __int8 *)(((unsigned __int64)&v50->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v50 + 8) & 7) + 3) >= SLOBYTE(v47._M_current) && LOBYTE(v47._M_current) )
  {
    p_queue_vec = (std::vector<std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> >> *)__asan_report_load4(&v50->_M_use_count);
    goto LABEL_142;
  }
  ++v50->_M_use_count;
LABEL_113:
  v47._M_current = p_queue_vec->_M_impl._M_finish;
  p_queue_vec->_M_impl._M_finish = v47._M_current + 1;
LABEL_114:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->flush_mutex._M_mutex);
  v53 = *(pthread_mutex_t **)(v5 + 104);
  if ( !v53 )
    goto LABEL_5;
  p_owner = &v53->__data.__owner;
  if ( &_pthread_key_create )
  {
    v55 = *(_BYTE *)(((unsigned __int64)p_owner >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_owner & 7) + 3) < v55 || !v55 )
    {
      owner = _InterlockedExchangeAdd(p_owner, 0xFFFFFFFF);
      goto LABEL_121;
    }
    __asan_report_store4(p_owner, v47._M_current);
  }
  v61 = *(_BYTE *)(((unsigned __int64)(&v53->__align + 1) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v53 + 8) & 7) + 3) >= v61 && v61 )
  {
    __asan_report_load4(&v53->__align + 1);
LABEL_148:
    v57 = (unsigned __int64)v53;
    __asan_report_load8(v53);
    goto LABEL_149;
  }
  owner = v53->__data.__owner;
  v53->__data.__owner = owner - 1;
LABEL_121:
  if ( owner != 1 )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
    goto LABEL_148;
  v57 = v53->__align + 16;
  if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
  {
LABEL_149:
    __asan_report_load8(v57);
    goto LABEL_150;
  }
  (*(void (__fastcall **)(pthread_mutex_t *))(v53->__align + 16))(v53);
  v57 = (unsigned __int64)&v53->__align + 12;
  if ( &_pthread_key_create )
  {
    v58 = *(_BYTE *)((v57 >> 3) + 0x7FFF8000);
    if ( (char)((v57 & 7) + 3) < v58 || !v58 )
    {
      nusers = _InterlockedExchangeAdd((volatile signed __int32 *)v57, 0xFFFFFFFF);
      goto LABEL_128;
    }
LABEL_150:
    __asan_report_store4(v57, v47._M_current);
  }
  v62 = *(_BYTE *)((((unsigned __int64)&v53->__align + 12) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v53 + 12) & 7) + 3) >= v62 && v62 )
  {
    __asan_report_load4((char *)&v53->__align + 12);
    goto LABEL_155;
  }
  nusers = v53->__data.__nusers;
  v53->__data.__nusers = nusers - 1;
LABEL_128:
  if ( nusers == 1 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
    {
      v60 = v53->__align + 24;
      if ( !*(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(pthread_mutex_t *))(v53->__align + 24))(v53);
        goto LABEL_5;
      }
LABEL_156:
      v63 = (struct _Unwind_Exception *)__asan_report_load8(v60);
      if ( &_pthread_key_create )
        pthread_mutex_unlock(v53);
      v64 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v6 - 7);
      if ( v64 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v64);
      __asan_handle_no_return(v64);
      _Unwind_Resume(v63);
    }
LABEL_155:
    v60 = (unsigned __int64)v53;
    __asan_report_load8(v53);
    goto LABEL_156;
  }
LABEL_5:
  result = *(common::milog::MiLog::LogBufHeadQueue **)(__readfsqword(0) - 5904);
  if ( v69 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 495: range 000000000C98B870-000000000C98C055
bool __fastcall common::milog::MiLog::flushBuf(common::milog::MiLog *const this)
{
  unsigned __int64 M_ptr; // r12
  unsigned __int64 v2; // r13
  unsigned __int64 log_level; // r15
  unsigned __int64 v5; // rax
  char *v6; // rcx
  char *v7; // r14
  char *M_finish; // rsi
  std::mutex *p_flush_mutex; // rdi
  unsigned int v10; // eax
  unsigned __int64 p_queue_vec; // rdi
  std::_Vector_base<std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> >>::pointer M_start; // rax
  __int64 v13; // rax
  common::milog::MiLog::WriteBuffer *p_write_buf; // rax
  char **p_cur; // rax
  int32_t v16; // eax
  common::milog::MiLog::WriteBuffer *v17; // rdi
  int v18; // edx
  char *cur; // rsi
  unsigned __int64 v20; // rcx
  int32_t v21; // eax
  common::milog::MiLog::WriteBuffer *v22; // rdi
  char *v23; // rcx
  unsigned __int64 v24; // rdx
  common::milog::MiLog *M_left; // rax
  unsigned __int64 p_M_right; // rax
  common::milog::MiLog::WriteBuffer *v27; // rdi
  __int64 v28; // r12
  std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> > *v29; // rdi
  common::milog::MiLog::WriteBuffer *v30; // rdi
  common::milog::MiLogHead *v31; // rdi
  char v32; // cl
  const common::milog::LogLevelInfo *LogLevelInfo; // r15
  void *p_color; // rdi
  char v35; // dl
  __int64 v36; // rsi
  void *v37; // rsp
  char v38; // al
  uint32_t v39; // eax
  common::milog::MiLog *j; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v44; // rbx
  pthread_mutex_t *mutex; // [rsp+0h] [rbp-100h] BYREF
  char *v46; // [rsp+8h] [rbp-F8h]
  __int64 v47; // [rsp+10h] [rbp-F0h]
  char *v48; // [rsp+18h] [rbp-E8h] BYREF
  unsigned __int64 p_mutex; // [rsp+20h] [rbp-E0h]
  char *v50; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> > *v51; // [rsp+30h] [rbp-D0h]
  pthread_mutex_t **is_need_std_out; // [rsp+38h] [rbp-C8h]
  bool is_busy; // [rsp+46h] [rbp-BAh]
  bool i; // [rsp+47h] [rbp-B9h]
  std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> > *log_queue_ptr; // [rsp+48h] [rbp-B8h]
  char v56[128]; // [rsp+50h] [rbp-B0h] BYREF
  char v57[48]; // [rsp+D0h] [rbp-30h] BYREF

  v50 = v56;
  v46 = v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(128LL);
    if ( v13 )
      v50 = (char *)v13;
  }
  v5 = (unsigned __int64)v50;
  v6 = v50 + 128;
  v48 = v50 + 128;
  v7 = v50 + 128;
  *(_QWORD *)v50 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 4 9 level:494 64 8 9 guard:497 96 8 8 head:498";
  M_finish = (char *)common::milog::MiLog::flushBuf;
  *(_QWORD *)(v5 + 16) = common::milog::MiLog::flushBuf;
  v5 >>= 3;
  v47 = v5;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -234556943;
  *(_DWORD *)(v5 + 2147450888) = -218959360;
  *(_DWORD *)(v5 + 2147450892) = -202116352;
  p_mutex = 0LL;
  mutex = &this->flush_mutex._M_mutex;
  *((_QWORD *)v6 - 8) = &this->flush_mutex;
  if ( &_pthread_key_create )
  {
    p_flush_mutex = &this->flush_mutex;
    v10 = pthread_mutex_lock(&this->flush_mutex._M_mutex);
    M_ptr = v10;
    if ( v10 )
    {
      __asan_handle_no_return(p_flush_mutex);
      std::__throw_system_error(M_ptr);
    }
  }
  *((_QWORD *)v48 - 4) = 0LL;
  do
  {
    p_queue_vec = (unsigned __int64)&this->queue_vec;
    if ( *(_BYTE *)(((unsigned __int64)&this->queue_vec >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_queue_vec);
    }
    else
    {
      M_start = this->queue_vec._M_impl._M_start;
      p_queue_vec = (unsigned __int64)&this->queue_vec._M_impl._M_finish;
      if ( !*(_BYTE *)(((unsigned __int64)&this->queue_vec._M_impl._M_finish >> 3) + 0x7FFF8000) )
      {
        M_finish = (char *)this->queue_vec._M_impl._M_finish;
        v51 = (std::shared_ptr<boost::lockfree::spsc_queue<common::milog::MiLogHead*> > *)M_finish;
        is_busy = 0;
        goto LABEL_57;
      }
    }
    __asan_report_load8(p_queue_vec);
LABEL_13:
    __asan_report_load8(p_queue_vec);
LABEL_14:
    __asan_report_load8(p_queue_vec);
LABEL_15:
    __asan_report_load8(p_queue_vec);
LABEL_16:
    __asan_report_load8(p_queue_vec);
LABEL_17:
    __asan_report_load8(p_queue_vec);
    do
    {
      v2 -= log_level;
LABEL_65:
      ;
    }
    while ( log_level <= v2 );
    *(_QWORD *)(M_ptr + 64) = v2;
    for ( i = 1; ; i = 0 )
    {
      if ( !i )
        goto LABEL_56;
      v31 = (common::milog::MiLogHead *)*((_QWORD *)v7 - 4);
      if ( !v31 )
        goto LABEL_56;
      v32 = *(_BYTE *)(((unsigned __int64)&v31->log_level >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v31 + 116) & 7) + 3) >= v32 && v32 )
      {
        p_write_buf = (common::milog::MiLog::WriteBuffer *)__asan_report_load4(&v31->log_level);
LABEL_21:
        p_cur = (char **)__asan_report_load8(p_write_buf);
LABEL_22:
        v16 = __asan_report_load8(p_cur);
        goto LABEL_23;
      }
      log_level = v31->log_level;
      p_write_buf = &this->write_buf;
      if ( *(_BYTE *)(((unsigned __int64)&this->write_buf >> 3) + 0x7FFF8000) )
        goto LABEL_21;
      p_cur = &this->write_buf.cur_;
      if ( *(_BYTE *)(((unsigned __int64)&this->write_buf.cur_ >> 3) + 0x7FFF8000) )
        goto LABEL_22;
      M_finish = this->write_buf.cur_;
      v16 = common::milog::MiLogHead::printHead(
              v31,
              M_finish,
              LODWORD(this->write_buf.data_) + 0x4000 - (_DWORD)M_finish);
LABEL_23:
      v17 = &this->write_buf;
      if ( *(_BYTE *)(((unsigned __int64)&this->write_buf >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v17);
LABEL_29:
        v21 = __asan_report_load8(v17);
        goto LABEL_30;
      }
      M_finish = this->write_buf.data_;
      v18 = (_DWORD)M_finish + 0x4000;
      v17 = (common::milog::MiLog::WriteBuffer *)&this->write_buf.cur_;
      if ( *(_BYTE *)(((unsigned __int64)&this->write_buf.cur_ >> 3) + 0x7FFF8000) )
        goto LABEL_29;
      cur = this->write_buf.cur_;
      v20 = v18 - (int)cur;
      if ( v16 <= v20 )
        v20 = v16;
      M_finish = &cur[v20];
      this->write_buf.cur_ = M_finish;
      v21 = common::milog::MiLogHead::printBody(
              *((common::milog::MiLogHead *const *)v7 - 4),
              M_finish,
              v18 - (_DWORD)M_finish);
LABEL_30:
      v22 = &this->write_buf;
      if ( *(_BYTE *)(((unsigned __int64)&this->write_buf >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v22);
      }
      else
      {
        v22 = (common::milog::MiLog::WriteBuffer *)&this->write_buf.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->write_buf.cur_ >> 3) + 0x7FFF8000) )
        {
          v23 = this->write_buf.cur_;
          v24 = LODWORD(this->write_buf.data_) + 0x4000 - (int)v23;
          if ( v21 <= v24 )
            v24 = v21;
          this->write_buf.cur_ = &v23[v24];
          common::milog::MiLogHead::release(*((common::milog::MiLogHead *const *)v7 - 4));
          goto LABEL_37;
        }
      }
      __asan_report_load8(v22);
LABEL_37:
      *((_QWORD *)v7 - 4) = 0LL;
      if ( !*(_BYTE *)(((unsigned __int64)&this->milog_file_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
      {
        M_left = (common::milog::MiLog *)this->milog_file_map_._M_t._M_impl._M_header._M_left;
        M_finish = (char *)i;
        LOBYTE(is_need_std_out) = i;
        goto LABEL_45;
      }
      p_M_right = __asan_report_load8(&this->milog_file_map_._M_t._M_impl._M_header._M_left);
LABEL_40:
      v27 = (common::milog::MiLog::WriteBuffer *)p_M_right;
      __asan_report_load8(p_M_right);
LABEL_41:
      __asan_report_load8(v27);
LABEL_42:
      __asan_report_load8(v27);
LABEL_43:
      LOBYTE(is_need_std_out) = 0;
      while ( 1 )
      {
        M_left = (common::milog::MiLog *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v2);
LABEL_45:
        v2 = (unsigned __int64)M_left;
        if ( M_left == (common::milog::MiLog *)&this->milog_file_map_._M_t._M_impl.std::_Rb_tree_header )
          break;
        p_M_right = (unsigned __int64)&M_left->milog_file_map_._M_t._M_impl._M_header._M_right;
        if ( *(_BYTE *)((p_M_right >> 3) + 0x7FFF8000) )
          goto LABEL_40;
        v28 = *(_QWORD *)(v2 + 64);
        *((_DWORD *)v7 - 20) = log_level;
        v29 = (std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int> > *)(v28 + 872);
        M_ptr = v28 + 880;
        M_finish = v7 - 80;
        if ( (std::_Rb_tree_iterator<unsigned int>::_Base_ptr)M_ptr != std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::find(
                                                                         v29,
                                                                         (const unsigned int *)v7 - 20)._M_node )
        {
          v27 = (common::milog::MiLog::WriteBuffer *)&this->write_buf.cur_;
          if ( *(_BYTE *)(((unsigned __int64)&this->write_buf.cur_ >> 3) + 0x7FFF8000) )
            goto LABEL_41;
          v27 = &this->write_buf;
          if ( !*(_BYTE *)(((unsigned __int64)&this->write_buf >> 3) + 0x7FFF8000) )
          {
            M_finish = this->write_buf.data_;
            common::milog::MiLogFile::writeLog(
              *(common::milog::MiLogFile *const *)(v2 + 64),
              M_finish,
              (int32_t)&this->write_buf.cur_[-(_DWORD)M_finish]);
            goto LABEL_43;
          }
          goto LABEL_42;
        }
      }
      if ( (_BYTE)is_need_std_out )
      {
        is_need_std_out = &mutex;
        LogLevelInfo = common::milog::MiLog::getLogLevelInfo(this, log_level);
        p_color = this;
        v35 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)this & 7) + 3) >= v35 && v35 )
        {
          __asan_report_load4(this);
        }
        else
        {
          v36 = this->max_log_len_._M_i + 1;
          v37 = alloca(v36 + 32LL - ((LOBYTE(this->max_log_len_._M_i) + 1) & 0x1F) + 88);
          M_ptr = ((unsigned __int64)&v48 + 7) & 0xFFFFFFFFFFFFFFE0LL;
          p_mutex = ((unsigned __int64)&v48 + 7) & 0xFFFFFFFFFFFFFFE0LL;
          v2 = (((unsigned __int64)&v48 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 32;
          __asan_alloca_poison(v2, v36);
          p_color = &this->write_buf.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&this->write_buf.cur_ >> 3) + 0x7FFF8000) )
          {
            p_color = &this->write_buf;
            if ( !*(_BYTE *)(((unsigned __int64)&this->write_buf >> 3) + 0x7FFF8000) )
            {
              p_color = &LogLevelInfo->color;
              v38 = *(_BYTE *)(((unsigned __int64)&LogLevelInfo->color >> 3) + 0x7FFF8000);
              if ( !v38 || v38 > 3 )
              {
                v39 = common::milog::MiLog::addLogColor(
                        this,
                        LogLevelInfo->color,
                        (char *)((((unsigned __int64)&v48 + 7) & 0xFFFFFFFFFFFFFFE0LL) + 32),
                        this->write_buf.data_,
                        this->write_buf.cur_ - this->write_buf.data_);
LABEL_85:
                common::milog::MiLogFile::writeLog(&this->default_log_file_, (const char *)v2, v39);
                log_level = (unsigned __int64)is_need_std_out;
                M_finish = (char *)is_need_std_out;
                __asan_allocas_unpoison(M_ptr, is_need_std_out);
                p_mutex = (unsigned __int64)&mutex;
                goto LABEL_52;
              }
LABEL_84:
              v39 = __asan_report_load4(p_color);
              goto LABEL_85;
            }
LABEL_83:
            __asan_report_load8(p_color);
            goto LABEL_84;
          }
        }
        __asan_report_load8(p_color);
        goto LABEL_83;
      }
LABEL_52:
      v30 = &this->write_buf;
      if ( *(_BYTE *)(((unsigned __int64)&this->write_buf >> 3) + 0x7FFF8000) )
        break;
      v30 = (common::milog::MiLog::WriteBuffer *)&this->write_buf.cur_;
      if ( *(_BYTE *)(((unsigned __int64)&this->write_buf.cur_ >> 3) + 0x7FFF8000) )
        goto LABEL_87;
      this->write_buf.cur_ = this->write_buf.data_;
      if ( !is_busy )
        is_busy = i;
LABEL_56:
      M_start = log_queue_ptr + 1;
LABEL_57:
      log_queue_ptr = M_start;
      if ( M_start == v51 )
        goto LABEL_88;
      p_queue_vec = (unsigned __int64)M_start;
      if ( *(_BYTE *)(((unsigned __int64)M_start >> 3) + 0x7FFF8000) )
        goto LABEL_13;
      M_ptr = (unsigned __int64)log_queue_ptr->_M_ptr;
      M_finish = v7 - 32;
      p_queue_vec = (unsigned __int64)&log_queue_ptr->_M_ptr->max_elements_;
      if ( *(_BYTE *)((p_queue_vec >> 3) + 0x7FFF8000) )
        goto LABEL_14;
      log_level = *(_QWORD *)(M_ptr + 72);
      p_queue_vec = M_ptr + 80;
      if ( *(_BYTE *)(((M_ptr + 80) >> 3) + 0x7FFF8000) )
        goto LABEL_15;
      p_queue_vec = (unsigned __int64)log_queue_ptr->_M_ptr;
      if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
        goto LABEL_16;
      p_queue_vec = M_ptr + 64;
      if ( *(_BYTE *)(((M_ptr + 64) >> 3) + 0x7FFF8000) )
        goto LABEL_17;
      v2 = *(_QWORD *)(M_ptr + 64);
      if ( *(_QWORD *)M_ptr != v2 )
      {
        boost::lockfree::detail::copy_payload<common::milog::MiLogHead *,common::milog::MiLogHead *>(
          (common::milog::MiLogHead **)(*(_QWORD *)(M_ptr + 80) + 8 * v2++),
          (common::milog::MiLogHead **)M_finish);
        goto LABEL_65;
      }
    }
    __asan_report_load8(v30);
LABEL_87:
    __asan_report_store8(v30, M_finish);
LABEL_88:
    ;
  }
  while ( is_busy );
  if ( *(_BYTE *)(((unsigned __int64)&this->milog_file_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    v41 = __asan_report_load8(&this->milog_file_map_._M_t._M_impl._M_header._M_left);
    goto LABEL_92;
  }
  for ( j = (common::milog::MiLog *)this->milog_file_map_._M_t._M_impl._M_header._M_left;
        ;
        j = (common::milog::MiLog *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)M_ptr) )
  {
    M_ptr = (unsigned __int64)j;
    if ( j == (common::milog::MiLog *)&this->milog_file_map_._M_t._M_impl.std::_Rb_tree_header )
      break;
    v41 = (unsigned __int64)&j->milog_file_map_._M_t._M_impl._M_header._M_right;
    if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
LABEL_92:
      __asan_report_load8(v41);
    else
      common::milog::MiLogFile::flushBuf(*(common::milog::MiLogFile *const *)(M_ptr + 64));
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(mutex);
  if ( v46 == v50 )
  {
    v42 = v47;
    *(_QWORD *)(v47 + 2147450880) = 0LL;
    *(_QWORD *)(v42 + 2147450888) = 0LL;
  }
  else
  {
    *(_QWORD *)v50 = 1172321806LL;
    v44 = v47;
    *(_QWORD *)(v47 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v44 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
  }
  __asan_allocas_unpoison(&mutex, v57);
  return is_busy;
};

// Line 550: range 000000000C98A59A-000000000C98A809
// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall common::milog::MiLog::addLogColor(
        common::milog::MiLog *const this,
        common::milog::LogColor color,
        char *new_log_buf,
        const char *log_buf,
        uint32_t log_len)
{
  std::atomic<short unsigned int> *LogColorInfo; // r12
  size_t *p_M_i; // rdi
  size_t v10; // r15
  size_t v11; // r14
  char v12; // dl
  uint32_t v13; // ebx
  int v14; // ebx
  std::atomic<short unsigned int> *v15; // rdi
  uint32_t result; // eax
  __int64 v17; // rdx

  LogColorInfo = (std::atomic<short unsigned int> *)common::milog::MiLog::getLogColorInfo(this, color);
  p_M_i = (size_t *)&LogColorInfo[4]._M_i;
  if ( *(_BYTE *)(((unsigned __int64)&LogColorInfo[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_i);
    goto LABEL_13;
  }
  v10 = *(_QWORD *)&LogColorInfo[4]._M_i;
  p_M_i = (size_t *)&LogColorInfo[12]._M_i;
  if ( *(_BYTE *)(((unsigned __int64)&LogColorInfo[12] >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_M_i);
LABEL_14:
    __asan_report_load4(this);
LABEL_15:
    v15 = LogColorInfo;
    __asan_report_load8(LogColorInfo);
    goto LABEL_16;
  }
  v11 = *(_QWORD *)&LogColorInfo[12]._M_i;
  v12 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) >= v12 && v12 )
    goto LABEL_14;
  v13 = this->max_log_len_._M_i - v10 - v11;
  if ( v13 >= log_len )
    v13 = log_len;
  if ( *(_BYTE *)(((unsigned __int64)LogColorInfo >> 3) + 0x7FFF8000) )
    goto LABEL_15;
  memcpy(new_log_buf, *(const void **)&LogColorInfo->_M_i, (unsigned int)v10);
  *(_QWORD *)&color = log_buf;
  memcpy(&new_log_buf[(unsigned int)v10], log_buf, v13);
  v14 = v10 + v13;
  v15 = LogColorInfo + 8;
  if ( *(_BYTE *)(((unsigned __int64)&LogColorInfo[8] >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(v15);
    goto LABEL_17;
  }
  *(_QWORD *)&color = *(_QWORD *)&LogColorInfo[8]._M_i;
  memcpy(&new_log_buf[v14], *(const void **)&color, (unsigned int)v11);
  result = v14 + v11;
  v15 = (std::atomic<short unsigned int> *)&new_log_buf[(unsigned int)(v14 + v11)];
  v17 = *(unsigned __int8 *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
  if ( (char)v17 > (char)(((_BYTE)new_log_buf + v14 + v11) & 7) || !(_BYTE)v17 )
  {
    LOBYTE(v15->_M_i) = 10;
    return result;
  }
LABEL_17:
  __asan_report_store1(v15, *(_QWORD *)&color, v17);
  return common::milog::MiLog::getLogLevelByName((common::milog::MiLog *const)v15, *(const std::string **)&color);
};

// Line 570: range 000000000C98AC04-000000000C98ADF5
const common::milog::LogLevelInfo *__fastcall common::milog::MiLog::getLogLevelInfo(
        common::milog::MiLog *const this,
        uint32_t level)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  std::forward_iterator_tag v4; // cl
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,common::milog::LogLevelInfo>,std::_Select1st<std::pair<unsigned int const,common::milog::LogLevelInfo> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,common::milog::LogLevelInfo> > >::iterator v5; // rax
  const common::milog::LogLevelInfo *result; // rax
  __int64 v7; // rax
  std::forward_iterator_tag v8; // cl
  _BYTE v9[120]; // [rsp+0h] [rbp-78h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v2 = v7;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 level:569";
  *(_QWORD *)(v2 + 16) = common::milog::MiLog::getLogLevelInfo;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level;
  if ( !(_BYTE)`guard variable for'common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info
    && __cxa_guard_acquire(&`guard variable for'common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info) )
  {
    common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.level = 0;
    common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.name._M_dataplus._M_p = common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.name,
      &byte_19EC2165[-5],
      byte_19EC2165,
      v4);
    common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.head._M_dataplus._M_p = common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.head._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.head,
      &byte_19EC21A9[-9],
      byte_19EC21A9,
      v8);
    common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.tail._M_dataplus._M_p = common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.tail._anon_0._M_local_buf;
    common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.tail._M_string_length = 0LL;
    common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.tail._anon_0._M_local_buf[0] = 0;
    common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.color = COLOR_DEFAULT;
    common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info.format = LOG_FORMAT_SYSTEM;
    __cxa_guard_release(&`guard variable for'common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info);
    __cxa_atexit(
      (void (__fastcall *)(void *))common::milog::LogLevelInfo::~LogLevelInfo,
      &common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info,
      &_dso_handle);
  }
  v5._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,common::milog::LogLevelInfo>,std::_Select1st<std::pair<unsigned int const,common::milog::LogLevelInfo>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,common::milog::LogLevelInfo>>>::find(
                 &this->log_level_info_map_._M_t,
                 (const unsigned int *)(v2 + 32))._M_node;
  if ( (std::_Rb_tree_header *)v5._M_node == &this->log_level_info_map_._M_t._M_impl.std::_Rb_tree_header )
    result = &common::milog::MiLog::getLogLevelInfo(unsigned int)::default_info;
  else
    result = (const common::milog::LogLevelInfo *)&v5._M_node[1]._M_parent;
  if ( v9 == (_BYTE *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 582: range 000000000C98A578-000000000C98A599
const common::milog::LogColorInfo *__fastcall common::milog::MiLog::getLogColorInfo(
        common::milog::MiLog *const this,
        common::milog::LogColor color)
{
  if ( color > COLOR_DEFAULT )
    return &common::milog::LOG_COLORS[8];
  else
    return &common::milog::LOG_COLORS[color];
};

// Line 604: range 000000000C98A80A-000000000C98ABFE
bool __fastcall common::milog::MiLog::isLogLevelMask(common::milog::MiLog *const this, uint32_t level)
{
  _BOOL8 v2; // rax

  if ( level - 1 <= 0x3E )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->log_level_mask_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&this->log_level_mask_);
      JUMPOUT(0xC98A845LL);
    }
    return (this->log_level_mask_._M_i >> level) & 1;
  }
  else
  {
    LOBYTE(v2) = 1;
  }
  return v2;
};

// Line 614: range 000000000C98E630-000000000C98F07F
__int64 __fastcall common::milog::MiLog::addLogLevel(
        common::milog::MiLog *const this,
        uint32_t level,
        unsigned __int64 color,
        unsigned __int64 format,
        unsigned __int64 a5,
        common::milog::LogColor a6,
        std::string name)
{
  unsigned __int64 v11; // rbp
  std::forward_iterator_tag v12; // cl
  unsigned __int64 v13; // rdi
  std::forward_iterator_tag v14; // cl
  unsigned __int64 v15; // rdi
  std::forward_iterator_tag v16; // cl
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  common::milog::MiLog::LogLevelInfoMap *p_log_level_info_map; // r12
  std::_Rb_tree_header *v20; // r13
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rbx
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,common::milog::LogLevelInfo>,std::_Select1st<std::pair<unsigned int const,common::milog::LogLevelInfo> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,common::milog::LogLevelInfo> > >::iterator v22; // rax
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,common::milog::LogLevelInfo>,std::_Select1st<std::pair<unsigned int const,common::milog::LogLevelInfo> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,common::milog::LogLevelInfo> > >::iterator v23; // r9
  std::_Rb_tree_iterator<std::pair<unsigned int const,common::milog::LogLevelInfo> >::_Base_ptr M_node; // rbx
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,common::milog::LogLevelInfo>,std::_Select1st<std::pair<unsigned int const,common::milog::LogLevelInfo> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,common::milog::LogLevelInfo> > >::const_iterator v25; // rsi
  unsigned __int64 v26; // rax
  char v27; // cl
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,common::milog::LogLevelInfo>,std::_Select1st<std::pair<unsigned int const,common::milog::LogLevelInfo> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,common::milog::LogLevelInfo> > >::iterator v28; // rax
  struct _Unwind_Exception *v29; // rbx
  std::string::pointer M_p; // rdi
  std::_Rb_tree_node_base::_Base_ptr *v31; // rbx
  char v32; // al
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rdx
  unsigned __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // al
  __int64 v42; // rdx
  unsigned __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  std::string::pointer v46; // rdi
  char v47; // al
  __int64 v48; // rdx
  char v49; // al
  char v50; // dl
  std::string::size_type M_string_length; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // rdi
  char v55; // al
  unsigned __int64 v56; // rdx
  char v57; // al
  __int64 v58; // rdx
  __int64 M_color_low; // rdx
  char v60; // al
  std::string::size_type v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rdi
  char v64; // al
  unsigned __int64 v65; // rdx
  char v66; // al
  __int64 v67; // rdx
  __int64 v68; // rdx
  char v69; // al
  std::string::size_type v70; // rdi
  __int64 v71; // rax
  unsigned __int64 v72; // rdi
  char v73; // al
  unsigned __int64 v74; // rdx
  char v75; // al
  __int64 v76; // rdx
  __int64 v77; // rdx
  char v78; // al
  struct _Unwind_Exception *v79; // rbx
  std::tuple<unsigned int const&> *v80; // [rsp+0h] [rbp-138h]
  std::_Rb_tree_header *levela; // [rsp+8h] [rbp-130h]
  unsigned __int64 v82; // [rsp+10h] [rbp-128h]
  std::string::size_type v84; // [rsp+28h] [rbp-110h]
  std::string::size_type v85; // [rsp+30h] [rbp-108h]
  std::string::size_type v86; // [rsp+38h] [rbp-100h]
  std::tuple<> v87; // [rsp+47h] [rbp-F1h] BYREF
  std::tuple<unsigned int const&> v88; // [rsp+48h] [rbp-F0h] BYREF
  common::milog::LogLevelInfo v89; // [rsp+50h] [rbp-E8h] BYREF
  char v90[120]; // [rsp+C0h] [rbp-78h] BYREF

  v11 = (unsigned __int64)v90;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_0(64LL);
    if ( v17 )
      v11 = v17;
  }
  *(_QWORD *)v11 = 1102416563LL;
  *(_QWORD *)(v11 + 8) = "1 32 4 9 level:613";
  *(_QWORD *)(v11 + 16) = common::milog::MiLog::addLogLevel;
  v82 = v11 >> 3;
  *(_DWORD *)(v82 + 2147450880) = -235802127;
  *(_DWORD *)(v82 + 2147450884) = -202116348;
  *(_DWORD *)(v11 + 32) = level;
  levela = &this->log_level_info_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( &this->log_level_info_map_._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)std::_Rb_tree<unsigned int,std::pair<unsigned int const,common::milog::LogLevelInfo>,std::_Select1st<std::pair<unsigned int const,common::milog::LogLevelInfo>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,common::milog::LogLevelInfo>>>::find(
                                                                                                 &this->log_level_info_map_._M_t,
                                                                                                 (const unsigned int *)(v11 + 32))._M_node )
  {
    common::milog::MiLog::writeLog(this, 4u, "add an existed level %u", *(unsigned int *)(v11 + 32));
    __asan_handle_no_return(this);
    __assert_fail(
      "false",
      "src/milog.cpp",
      0x26Bu,
      "int32_t common::milog::MiLog::addLogLevel(uint32_t, std::string, std::string, std::string, common::milog::LogColor"
      ", common::milog::LogFormat)");
  }
  v89.level = *(_DWORD *)(v11 + 32);
  v89.name._M_dataplus._M_p = v89.name._anon_0._M_local_buf;
  if ( *(_BYTE *)((color >> 3) + 0x7FFF8000) )
  {
    v13 = color;
    __asan_report_load8(color);
    goto LABEL_12;
  }
  v13 = color + 8;
  if ( *(_BYTE *)(((color + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(v13);
    goto LABEL_13;
  }
  std::string::_M_construct<char *>(
    &v89.name,
    *(char **)color,
    (char *)(*(_QWORD *)(color + 8) + *(_QWORD *)color),
    v12);
  v89.head._M_dataplus._M_p = v89.head._anon_0._M_local_buf;
  if ( *(_BYTE *)((format >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    v15 = format;
    __asan_report_load8(format);
    goto LABEL_14;
  }
  v15 = format + 8;
  if ( !*(_BYTE *)(((format + 8) >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      &v89.head,
      *(char **)format,
      (char *)(*(_QWORD *)(format + 8) + *(_QWORD *)format),
      v14);
    goto LABEL_15;
  }
LABEL_14:
  __asan_report_load8(v15);
LABEL_15:
  v89.tail._M_dataplus._M_p = v89.tail._anon_0._M_local_buf;
  if ( *(_BYTE *)((a5 >> 3) + 0x7FFF8000) )
  {
    v18 = a5;
    __asan_report_load8(a5);
    goto LABEL_19;
  }
  v18 = a5 + 8;
  if ( *(_BYTE *)(((a5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(v18);
    goto LABEL_20;
  }
  std::string::_M_construct<char *>(&v89.tail, *(char **)a5, (char *)(*(_QWORD *)(a5 + 8) + *(_QWORD *)a5), v16);
LABEL_20:
  v89.color = a6;
  v89.format = (common::milog::LogFormat)name._M_dataplus._M_p;
  p_log_level_info_map = &this->log_level_info_map_;
  v20 = &this->log_level_info_map_._M_t._M_impl.std::_Rb_tree_header;
  p_M_parent = &this->log_level_info_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)p_M_parent >> 3) + 0x7FFF8000) )
  {
    v29 = (struct _Unwind_Exception *)__asan_report_load8(p_M_parent);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89.head._M_dataplus._M_p != &v89.head._anon_0 )
      operator delete(v89.head._M_dataplus._M_p);
    M_p = v89.name._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89.name._M_dataplus._M_p != &v89.name._anon_0 )
      operator delete(v89.name._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v29);
  }
  v22._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,common::milog::LogLevelInfo>,std::_Select1st<std::pair<unsigned int const,common::milog::LogLevelInfo>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,common::milog::LogLevelInfo>>>::_M_lower_bound(
                  &p_log_level_info_map->_M_t,
                  (std::_Rb_tree<unsigned int,std::pair<unsigned int const,common::milog::LogLevelInfo>,std::_Select1st<std::pair<unsigned int const,common::milog::LogLevelInfo> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,common::milog::LogLevelInfo> > >::_Link_type)p_log_level_info_map->_M_t._M_impl._M_header._M_parent,
                  &v20->_M_header,
                  (const unsigned int *)(v11 + 32))._M_node;
  M_node = v22._M_node;
  v25._M_node = v22._M_node;
  if ( v20 == (std::_Rb_tree_header *)v22._M_node )
    goto LABEL_25;
  v26 = (unsigned __int64)&v22._M_node[1];
  v27 = *(_BYTE *)((v26 >> 3) + 0x7FFF8000);
  if ( (char)((v26 & 7) + 3) >= v27 && v27 )
  {
    v28._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,common::milog::LogLevelInfo> >::_Base_ptr)__asan_report_load4(v26);
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v11 + 32) < v25._M_node[1]._M_color )
  {
LABEL_25:
    v88._M_head_impl = (const unsigned int *)(v11 + 32);
    v28._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,common::milog::LogLevelInfo>,std::_Select1st<std::pair<unsigned int const,common::milog::LogLevelInfo>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,common::milog::LogLevelInfo>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<unsigned int const&>,std::tuple<>>(
                    &p_log_level_info_map->_M_t,
                    v25,
                    &std::piecewise_construct,
                    &v88,
                    &v87,
                    (const std::piecewise_construct_t *)v23._M_node,
                    v80,
                    (std::tuple<> *)levela)._M_node;
LABEL_32:
    M_node = v28._M_node;
  }
  v31 = &M_node[1]._M_parent;
  v32 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
  if ( v32 && v32 <= 3 )
  {
    __asan_report_store4(v31, v25._M_node);
    goto LABEL_82;
  }
  *(_DWORD *)v31 = v89.level;
  p_log_level_info_map = (common::milog::MiLog::LogLevelInfoMap *)(v31 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v31 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    v33 = (unsigned __int64)p_log_level_info_map;
    __asan_report_load8(p_log_level_info_map);
LABEL_83:
    if ( !v89.name._M_string_length )
      goto LABEL_86;
    if ( v89.name._M_string_length != 1 )
    {
      memcpy((void *)v33, v25._M_node, v89.name._M_string_length);
      goto LABEL_86;
    }
    v57 = *(_BYTE *)(((unsigned __int64)v25._M_node >> 3) + 0x7FFF8000);
    v58 = (__int64)v25._M_node & 7;
    if ( v57 <= (char)v58 && v57 )
    {
      v33 = (unsigned __int64)v25._M_node;
      __asan_report_load1(v25._M_node, v25._M_node, v58);
    }
    else
    {
      M_color_low = LOBYTE(v25._M_node->_M_color);
      v60 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
      if ( v60 > (char)(v33 & 7) || !v60 )
      {
        *(_BYTE *)v33 = M_color_low;
LABEL_86:
        M_string_length = v89.name._M_string_length;
        v53 = (__int64)&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header;
        if ( !*(_BYTE *)(((unsigned __int64)&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)&p_log_level_info_map->_M_t._M_impl._M_header._M_color = v89.name._M_string_length;
          v54 = (unsigned __int64)v31[1] + M_string_length;
          v55 = *(_BYTE *)((v54 >> 3) + 0x7FFF8000);
          v56 = v54 & 7;
          if ( v55 > (char)v56 || !v55 )
          {
            *(_BYTE *)v54 = 0;
            goto LABEL_44;
          }
          goto LABEL_98;
        }
LABEL_97:
        v54 = v53;
        __asan_report_store8(v53, v25._M_node);
LABEL_98:
        v34 = __asan_report_store1(v54, v25._M_node, v56);
LABEL_99:
        __asan_report_load8(v34);
        goto LABEL_100;
      }
    }
    v53 = __asan_report_store1(v33, v25._M_node, M_color_low);
    goto LABEL_97;
  }
  v33 = (unsigned __int64)v31[1];
  v25._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,common::milog::LogLevelInfo> >::_Base_ptr)v89.name._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89.name._M_dataplus._M_p == &v89.name._anon_0 )
    goto LABEL_83;
  if ( (std::_Rb_tree_node_base::_Base_ptr *)v33 != v31 + 3 )
  {
    v34 = (__int64)(v31 + 3);
    if ( !*(_BYTE *)(((unsigned __int64)(v31 + 3) >> 3) + 0x7FFF8000) )
    {
      v86 = (std::string::size_type)v31[3];
      goto LABEL_40;
    }
    goto LABEL_99;
  }
LABEL_100:
  v33 = 0LL;
LABEL_40:
  v31[1] = (std::_Rb_tree_node_base::_Base_ptr)v25._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000) )
  {
    v35 = __asan_report_store8(&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header, v25._M_node);
    goto LABEL_102;
  }
  *(_QWORD *)&p_log_level_info_map->_M_t._M_impl._M_header._M_color = v89.name._M_string_length;
  v35 = (__int64)&p_log_level_info_map->_M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&p_log_level_info_map->_M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    __asan_report_store8(v35, v25._M_node);
    goto LABEL_103;
  }
  p_log_level_info_map->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)v89.name._anon_0._M_allocated_capacity;
  if ( !v33 )
  {
LABEL_103:
    v89.name._M_dataplus._M_p = v89.name._anon_0._M_local_buf;
    goto LABEL_44;
  }
  v89.name._M_dataplus._M_p = (std::string::pointer)v33;
  v89.name._anon_0._M_allocated_capacity = v86;
LABEL_44:
  v89.name._M_string_length = 0LL;
  v36 = *(_BYTE *)(((unsigned __int64)v89.name._M_dataplus._M_p >> 3) + 0x7FFF8000);
  v37 = (__int64)v89.name._M_dataplus._M_p & 7;
  if ( v36 <= (char)v37 && v36 )
  {
    __asan_report_store1(v89.name._M_dataplus._M_p, v25._M_node, v37);
    goto LABEL_105;
  }
  *v89.name._M_dataplus._M_p = 0;
  p_log_level_info_map = (common::milog::MiLog::LogLevelInfoMap *)(v31 + 5);
  if ( *(_BYTE *)(((unsigned __int64)(v31 + 5) >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    v38 = (unsigned __int64)p_log_level_info_map;
    __asan_report_load8(p_log_level_info_map);
LABEL_106:
    if ( !v89.head._M_string_length )
      goto LABEL_109;
    if ( v89.head._M_string_length != 1 )
    {
      memcpy((void *)v38, v25._M_node, v89.head._M_string_length);
      goto LABEL_109;
    }
    v66 = *(_BYTE *)(((unsigned __int64)v25._M_node >> 3) + 0x7FFF8000);
    v67 = (__int64)v25._M_node & 7;
    if ( v66 <= (char)v67 && v66 )
    {
      v38 = (unsigned __int64)v25._M_node;
      __asan_report_load1(v25._M_node, v25._M_node, v67);
    }
    else
    {
      v68 = LOBYTE(v25._M_node->_M_color);
      v69 = *(_BYTE *)((v38 >> 3) + 0x7FFF8000);
      if ( v69 > (char)(v38 & 7) || !v69 )
      {
        *(_BYTE *)v38 = v68;
LABEL_109:
        v61 = v89.head._M_string_length;
        v62 = (__int64)&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header;
        if ( !*(_BYTE *)(((unsigned __int64)&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)&p_log_level_info_map->_M_t._M_impl._M_header._M_color = v89.head._M_string_length;
          v63 = (unsigned __int64)v31[5] + v61;
          v64 = *(_BYTE *)((v63 >> 3) + 0x7FFF8000);
          v65 = v63 & 7;
          if ( v64 > (char)v65 || !v64 )
          {
            *(_BYTE *)v63 = 0;
            goto LABEL_55;
          }
          goto LABEL_121;
        }
LABEL_120:
        v63 = v62;
        __asan_report_store8(v62, v25._M_node);
LABEL_121:
        v39 = __asan_report_store1(v63, v25._M_node, v65);
LABEL_122:
        __asan_report_load8(v39);
        goto LABEL_123;
      }
    }
    v62 = __asan_report_store1(v38, v25._M_node, v68);
    goto LABEL_120;
  }
  v38 = (unsigned __int64)v31[5];
  v25._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,common::milog::LogLevelInfo> >::_Base_ptr)v89.head._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89.head._M_dataplus._M_p == &v89.head._anon_0 )
    goto LABEL_106;
  if ( (std::_Rb_tree_node_base::_Base_ptr *)v38 != v31 + 7 )
  {
    v39 = (__int64)(v31 + 7);
    if ( !*(_BYTE *)(((unsigned __int64)(v31 + 7) >> 3) + 0x7FFF8000) )
    {
      v85 = (std::string::size_type)v31[7];
      goto LABEL_51;
    }
    goto LABEL_122;
  }
LABEL_123:
  v38 = 0LL;
LABEL_51:
  v31[5] = (std::_Rb_tree_node_base::_Base_ptr)v25._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000) )
  {
    v40 = __asan_report_store8(&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header, v25._M_node);
    goto LABEL_125;
  }
  *(_QWORD *)&p_log_level_info_map->_M_t._M_impl._M_header._M_color = v89.head._M_string_length;
  v40 = (__int64)&p_log_level_info_map->_M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&p_log_level_info_map->_M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_125:
    __asan_report_store8(v40, v25._M_node);
    goto LABEL_126;
  }
  p_log_level_info_map->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)v89.head._anon_0._M_allocated_capacity;
  if ( !v38 )
  {
LABEL_126:
    v89.head._M_dataplus._M_p = v89.head._anon_0._M_local_buf;
    goto LABEL_55;
  }
  v89.head._M_dataplus._M_p = (std::string::pointer)v38;
  v89.head._anon_0._M_allocated_capacity = v85;
LABEL_55:
  v89.head._M_string_length = 0LL;
  v41 = *(_BYTE *)(((unsigned __int64)v89.head._M_dataplus._M_p >> 3) + 0x7FFF8000);
  v42 = (__int64)v89.head._M_dataplus._M_p & 7;
  if ( v41 <= (char)v42 && v41 )
  {
    __asan_report_store1(v89.head._M_dataplus._M_p, v25._M_node, v42);
    goto LABEL_128;
  }
  *v89.head._M_dataplus._M_p = 0;
  p_log_level_info_map = (common::milog::MiLog::LogLevelInfoMap *)(v31 + 9);
  if ( *(_BYTE *)(((unsigned __int64)(v31 + 9) >> 3) + 0x7FFF8000) )
  {
LABEL_128:
    v43 = (unsigned __int64)p_log_level_info_map;
    __asan_report_load8(p_log_level_info_map);
LABEL_129:
    if ( !v89.tail._M_string_length )
      goto LABEL_132;
    if ( v89.tail._M_string_length != 1 )
    {
      memcpy((void *)v43, v25._M_node, v89.tail._M_string_length);
      goto LABEL_132;
    }
    v75 = *(_BYTE *)(((unsigned __int64)v25._M_node >> 3) + 0x7FFF8000);
    v76 = (__int64)v25._M_node & 7;
    if ( v75 <= (char)v76 && v75 )
    {
      v43 = (unsigned __int64)v25._M_node;
      __asan_report_load1(v25._M_node, v25._M_node, v76);
    }
    else
    {
      v77 = LOBYTE(v25._M_node->_M_color);
      v78 = *(_BYTE *)((v43 >> 3) + 0x7FFF8000);
      if ( v78 > (char)(v43 & 7) || !v78 )
      {
        *(_BYTE *)v43 = v77;
LABEL_132:
        v70 = v89.tail._M_string_length;
        v71 = (__int64)&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header;
        if ( !*(_BYTE *)(((unsigned __int64)&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)&p_log_level_info_map->_M_t._M_impl._M_header._M_color = v89.tail._M_string_length;
          v72 = (unsigned __int64)v31[9] + v70;
          v73 = *(_BYTE *)((v72 >> 3) + 0x7FFF8000);
          v74 = v72 & 7;
          if ( v73 > (char)v74 || !v73 )
          {
            *(_BYTE *)v72 = 0;
            goto LABEL_66;
          }
          goto LABEL_144;
        }
LABEL_143:
        v72 = v71;
        __asan_report_store8(v71, v25._M_node);
LABEL_144:
        v44 = __asan_report_store1(v72, v25._M_node, v74);
LABEL_145:
        __asan_report_load8(v44);
        goto LABEL_146;
      }
    }
    v71 = __asan_report_store1(v43, v25._M_node, v77);
    goto LABEL_143;
  }
  v43 = (unsigned __int64)v31[9];
  v25._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,common::milog::LogLevelInfo> >::_Base_ptr)v89.tail._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89.tail._M_dataplus._M_p == &v89.tail._anon_0 )
    goto LABEL_129;
  if ( (std::_Rb_tree_node_base::_Base_ptr *)v43 != v31 + 11 )
  {
    v44 = (__int64)(v31 + 11);
    if ( !*(_BYTE *)(((unsigned __int64)(v31 + 11) >> 3) + 0x7FFF8000) )
    {
      v84 = (std::string::size_type)v31[11];
      goto LABEL_62;
    }
    goto LABEL_145;
  }
LABEL_146:
  v43 = 0LL;
LABEL_62:
  v31[9] = (std::_Rb_tree_node_base::_Base_ptr)v25._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000) )
  {
    v45 = __asan_report_store8(&p_log_level_info_map->_M_t._M_impl.std::_Rb_tree_header, v25._M_node);
    goto LABEL_148;
  }
  *(_QWORD *)&p_log_level_info_map->_M_t._M_impl._M_header._M_color = v89.tail._M_string_length;
  v45 = (__int64)&p_log_level_info_map->_M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&p_log_level_info_map->_M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_148:
    __asan_report_store8(v45, v25._M_node);
    goto LABEL_149;
  }
  p_log_level_info_map->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)v89.tail._anon_0._M_allocated_capacity;
  if ( !v43 )
  {
LABEL_149:
    v89.tail._M_dataplus._M_p = v89.tail._anon_0._M_local_buf;
    goto LABEL_66;
  }
  v89.tail._M_dataplus._M_p = (std::string::pointer)v43;
  v89.tail._anon_0._M_allocated_capacity = v84;
LABEL_66:
  v89.tail._M_string_length = 0LL;
  v46 = v89.tail._M_dataplus._M_p;
  v47 = *(_BYTE *)(((unsigned __int64)v89.tail._M_dataplus._M_p >> 3) + 0x7FFF8000);
  v48 = (__int64)v89.tail._M_dataplus._M_p & 7;
  if ( v47 <= (char)v48 && v47 )
  {
    __asan_report_store1(v89.tail._M_dataplus._M_p, v25._M_node, v48);
LABEL_151:
    __asan_report_store4(v46, v25._M_node);
    goto LABEL_152;
  }
  *v89.tail._M_dataplus._M_p = 0;
  v46 = (std::string::pointer)(v31 + 13);
  v49 = *(_BYTE *)(((unsigned __int64)(v31 + 13) >> 3) + 0x7FFF8000);
  if ( v49 && v49 <= 3 )
    goto LABEL_151;
  *((_DWORD *)v31 + 26) = v89.color;
  v46 = (char *)v31 + 108;
  v50 = *(_BYTE *)((((unsigned __int64)v31 + 108) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v31 + 108) & 7) + 3) >= v50 && v50 )
  {
LABEL_152:
    v79 = (struct _Unwind_Exception *)__asan_report_store4(v46, v25._M_node);
    common::milog::LogLevelInfo::~LogLevelInfo(&v89);
    __asan_handle_no_return(&v89);
    _Unwind_Resume(v79);
  }
  *((_DWORD *)v31 + 27) = v89.format;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89.tail._M_dataplus._M_p != &v89.tail._anon_0 )
    operator delete(v89.tail._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89.head._M_dataplus._M_p != &v89.head._anon_0 )
    operator delete(v89.head._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89.name._M_dataplus._M_p != &v89.name._anon_0 )
    operator delete(v89.name._M_dataplus._M_p);
  if ( v90 == (char *)v11 )
  {
    *(_QWORD *)((v11 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v11 = 1172321806LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return 0LL;
};

// Line 627: range 000000000C991946-000000000C991F1B
int32_t __fastcall common::milog::MiLog::setLogLevelMask(common::milog::MiLog *const this, const std::string *mask)
{
  __int64 v4; // r15
  char *i; // rbx
  char *v6; // rbp
  unsigned __int64 v7; // rax
  void **v8; // rdi
  char *v9; // rsi
  void **v10; // rdi
  void **v11; // rsi
  char *v12; // rdi
  void **v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  std::__atomic_base<long int>::__int_type v16; // r14
  void **v17; // rsi
  char *p_log_level_mask; // rdi
  std::forward_iterator_tag v19; // cl
  uint32_t LogLevelByName; // eax
  std::string *v21; // rdi
  void *v22; // rdi
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > v24; // [rsp+0h] [rbp-138h]
  __gnu_cxx::__ops::_Iter_less_iter v25; // [rsp+0h] [rbp-138h]
  _QWORD *v26; // [rsp+8h] [rbp-130h]
  __int64 v27; // [rsp+10h] [rbp-128h]
  _QWORD *v28; // [rsp+18h] [rbp-120h]
  char __first[8]; // [rsp+20h] [rbp-118h] BYREF
  unsigned __int64 v30; // [rsp+30h] [rbp-108h]
  void *dest[2]; // [rsp+40h] [rbp-F8h] BYREF
  size_t n; // [rsp+50h] [rbp-E8h]
  void *src[2]; // [rsp+60h] [rbp-D8h] BYREF
  size_t v34; // [rsp+70h] [rbp-C8h]
  std::string v35; // [rsp+80h] [rbp-B8h] BYREF
  char v36[152]; // [rsp+A0h] [rbp-98h] BYREF

  *(_QWORD *)&v24.m_Pred.m_Storage.m_fixSet[8] = v36;
  *(_QWORD *)&v24.m_eCompress = v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_1(96LL);
    if ( v14 )
      *(_QWORD *)&v24.m_Pred.m_Storage.m_fixSet[8] = v14;
  }
  v4 = *(_QWORD *)&v24.m_Pred.m_Storage.m_fixSet[8] + 96LL;
  **(_QWORD **)&v24.m_Pred.m_Storage.m_fixSet[8] = 1102416563LL;
  *(_QWORD *)(*(_QWORD *)&v24.m_Pred.m_Storage.m_fixSet[8] + 8LL) = "1 32 24 13 level_vec:628";
  *(_QWORD *)(*(_QWORD *)&v24.m_Pred.m_Storage.m_fixSet[8] + 16LL) = common::milog::MiLog::setLogLevelMask;
  v24.m_Pred.m_Size = *(_QWORD *)&v24.m_Pred.m_Storage.m_fixSet[8] >> 3;
  *(_DWORD *)(v24.m_Pred.m_Size + 2147450880) = -235802127;
  *(_DWORD *)(v24.m_Pred.m_Size + 2147450884) = -218103808;
  *(_DWORD *)(v24.m_Pred.m_Size + 2147450888) = -202116109;
  *(_OWORD *)(*(_QWORD *)&v24.m_Pred.m_Storage.m_fixSet[8] + 32LL) = 0uLL;
  *(_QWORD *)(*(_QWORD *)&v24.m_Pred.m_Storage.m_fixSet[8] + 48LL) = 0LL;
  *(_QWORD *)__first = 0LL;
  v30 = 1LL;
  i = __first;
  memmove(__first, &unk_19EC2B20, 1uLL);
  v6 = &__first[v30];
  if ( __first != &__first[v30] )
  {
    _BitScanReverse64(&v7, v30);
    std::__introsort_loop<char *,long,__gnu_cxx::__ops::_Iter_less_iter>(
      __first,
      &__first[v30],
      2LL * (int)(63 - (v7 ^ 0x3F)),
      (__gnu_cxx::__ops::_Iter_less_iter)v24.m_Pred.m_Storage.m_dynSet);
    std::__final_insertion_sort<char *,__gnu_cxx::__ops::_Iter_less_iter>(__first, v6, v25);
  }
  n = v30;
  dest[0] = 0LL;
  if ( v30 > 0x10 )
  {
    v8 = (void **)operator new[](v30);
    dest[0] = v8;
    v9 = *(char **)__first;
  }
  else
  {
    v8 = dest;
    v9 = __first;
  }
  memcpy(v8, v9, n);
  v34 = n;
  src[0] = 0LL;
  if ( n > 0x10 )
  {
    v10 = (void **)operator new[](n);
    src[0] = v10;
    v11 = (void **)dest[0];
  }
  else
  {
    v10 = src;
    v11 = dest;
  }
  memcpy(v10, v11, v34);
  v35._anon_0._M_allocated_capacity = v34;
  v35._M_dataplus._M_p = 0LL;
  if ( v34 > 0x10 )
  {
    v12 = (char *)operator new[](v34);
    v35._M_dataplus._M_p = v12;
    v13 = (void **)src[0];
  }
  else
  {
    v12 = (char *)&v35;
    v13 = src;
  }
  memcpy(v12, v13, v35._anon_0._M_allocated_capacity);
  *((_DWORD *)&v35._anon_0._M_allocated_capacity + 2) = 0;
  if ( v34 > 0x10 && src[0] )
    operator delete[](src[0]);
  boost::algorithm::iter_split<std::vector<std::string>,std::string const,boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
    (std::vector<std::string> *)(*(_QWORD *)&v24.m_Pred.m_Storage.m_fixSet[8] + 32LL),
    mask,
    v24);
  if ( v35._anon_0._M_allocated_capacity > 0x10 && v35._M_dataplus._M_p )
    operator delete[](v35._M_dataplus._M_p);
  if ( n > 0x10 && dest[0] )
    operator delete[](dest[0]);
  if ( v30 > 0x10 && *(_QWORD *)__first )
    operator delete[](*(void **)__first);
  v15 = *(_QWORD *)(v4 - 64);
  if ( *(_QWORD *)(v4 - 56) - v15 != 32 || (v17 = &off_19EC2BA0, (unsigned int)std::string::compare(v15, &off_19EC2BA0)) )
  {
    v6 = 0LL;
    v16 = 0LL;
    while ( 1 )
    {
      v17 = *(void ***)(v4 - 64);
      if ( (unsigned __int64)v6 >= (__int64)(*(_QWORD *)(v4 - 56) - (_QWORD)v17) >> 5 )
        goto LABEL_32;
      LogLevelByName = common::milog::MiLog::getLogLevelByName(this, (const std::string *)&v17[4 * (_QWORD)v6]);
      v19.gap0[0] = LogLevelByName;
      i = (char *)(*(_QWORD *)(v4 - 64) + 32LL * (_QWORD)v6);
      if ( *(_BYTE *)(((unsigned __int64)(i + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(i + 8);
      }
      else if ( (!*((_QWORD *)i + 1) || LogLevelByName) && LogLevelByName <= 0x3F )
      {
        v16 |= 1LL << LogLevelByName;
        goto LABEL_39;
      }
      v35._M_dataplus._M_p = v35._anon_0._M_local_buf;
      v21 = (std::string *)i;
      if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(i);
      }
      else
      {
        v21 = &v35;
        std::string::_M_construct<char *>(&v35, *(char **)i, (char *)(*((_QWORD *)i + 1) + *(_QWORD *)i), v19);
      }
      if ( 0x3FFFFFFFFFFFFFFFLL - v35._M_string_length <= 0x11 )
      {
        __asan_handle_no_return(v21);
        std::__throw_length_error("basic_string::append");
      }
      std::string::_M_append(&v35, " not known level.\n", 18LL);
      common::milog::MiLog::writeLog(this, 3u, v35._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v35._M_dataplus._M_p != &v35._anon_0 )
        operator delete(v35._M_dataplus._M_p);
LABEL_39:
      ++v6;
    }
  }
  v16 = -1LL;
LABEL_32:
  p_log_level_mask = (char *)&this->log_level_mask_;
  if ( *(_BYTE *)(((unsigned __int64)&this->log_level_mask_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_log_level_mask, v17);
    goto LABEL_52;
  }
  this->log_level_mask_._M_i = v16;
  _mm_mfence();
  v6 = *(char **)(v4 - 56);
  for ( i = *(char **)(v4 - 64); v6 != i; i += 32 )
  {
    p_log_level_mask = i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    {
LABEL_52:
      __asan_report_load8(p_log_level_mask);
LABEL_53:
      operator delete(p_log_level_mask);
      continue;
    }
    p_log_level_mask = *(char **)i;
    if ( *(char **)i != i + 16 )
      goto LABEL_53;
  }
  v22 = *(void **)(v4 - 64);
  if ( v22 )
    operator delete(v22);
  if ( v28 == v26 )
  {
    *(_QWORD *)(v27 + 2147450880) = 0LL;
    *(_DWORD *)(v27 + 2147450888) = 0;
  }
  else
  {
    *v26 = 1172321806LL;
    *(_QWORD *)(v27 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(v27 + 2147450888) = -168430091;
  }
  return 0;
};

// Line 689: range 000000000C992935-000000000C99294C
void __cdecl GLOBAL__sub_I_milog_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 689: range 000000000C98A1E8-000000000C98A395
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/milog.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      {
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
        {
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, &std::__ioinit);
          JUMPOUT(0xC98A27BLL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
