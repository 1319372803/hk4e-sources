// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/hot_patch.cpp

// Line 41: range 0000000019B44C9E-0000000019B45081
int32_t __fastcall common::tools::HotPatch::hotReplaceFunc(void *old_func, void *new_func)
{
  void *v2; // r15
  unsigned __int64 v5; // r13
  char *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  common::milog::MilogStringStream *ostr; // rdi
  char *cur; // rdi
  size_t v14; // rbx
  int v15; // r14d
  int *v17; // rax
  char v18; // cl
  struct _Unwind_Exception *v19; // rbx
  size_t len; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v21; // [rsp+10h] [rbp-A8h]
  void *page_end; // [rsp+18h] [rbp-A0h]
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-98h] BYREF
  char v24[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_0(64LL);
    if ( v11 )
      v5 = v11;
  }
  v6 = (char *)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 13 14 instruction:66";
  *(_QWORD *)(v5 + 16) = common::tools::HotPatch::hotReplaceFunc;
  v21 = v5 >> 3;
  *(_DWORD *)(v21 + 2147450880) = -235802127;
  *(_DWORD *)(v21 + 2147450884) = -202177280;
  v7 = sysconf(30);
  v8 = v7;
  if ( v7 )
  {
    v9 = -v7;
    v2 = (void *)((unsigned __int64)old_func & v9);
    v10 = ((unsigned __int64)old_func + 13) & v9;
    len = v8 + v10 - ((unsigned __int64)old_func & v9);
    page_end = (void *)v10;
    if ( ((unsigned __int64)old_func & v9) == v10 )
      goto LABEL_15;
    common::milog::MiLogStream::MiLogStream(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/hot_patch.cpp",
      "hotReplaceFunc",
      55);
    common::milog::MiLogStream::operator()(&v23, "[HotPatch] page start %p, page end:%p not in same page", v2, page_end);
LABEL_14:
    common::milog::MiLogStream::~MiLogStream(&v23);
LABEL_15:
    v15 = mprotect(v2, len, 6);
    if ( v15 )
    {
      common::milog::MiLogStream::MiLogStream(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/hot_patch.cpp",
        "hotReplaceFunc",
        61);
      v17 = __errno_location();
      v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v17 & 7) + 3) >= v18 && v18 )
        __asan_report_load4(v17);
      else
        common::milog::MiLogStream::operator()(&v23, "[HotPatch] mprotect call error:%d", (unsigned int)*v17);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v15 = -1;
    }
    else
    {
      *(v6 - 32) = 73;
      *(v6 - 31) = -69;
      *(v6 - 22) = 65;
      *(v6 - 21) = -1;
      *(v6 - 20) = -29;
      *(_QWORD *)(v6 - 30) = new_func;
      if ( *(_BYTE *)(((unsigned __int64)old_func >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)old_func >> 3) + 0x7FFF8000) <= ((unsigned __int8)old_func & 7)
        || *(_BYTE *)((((unsigned __int64)old_func + 12) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)old_func + 12) >> 3) + 0x7FFF8000) <= (((unsigned __int8)old_func + 12) & 7) )
      {
        v19 = (struct _Unwind_Exception *)__asan_report_store_n(old_func, 13LL);
        common::milog::MiLogStream::~MiLogStream(&v23);
        __asan_handle_no_return(&v23);
        _Unwind_Resume(v19);
      }
      *(_QWORD *)old_func = *((_QWORD *)v6 - 4);
      *((_DWORD *)old_func + 2) = *((_DWORD *)v6 - 6);
      *((_BYTE *)old_func + 12) = *(v6 - 20);
      mprotect(v2, len, 4);
    }
    goto LABEL_19;
  }
  common::milog::MiLogStream::MiLogStream(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/hot_patch.cpp",
    "hotReplaceFunc",
    46);
  new_func = v23.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v23.ostr_ >> 3) + 0x7FFF8000) )
  {
    ostr = v23.ostr_;
    __asan_report_load8(v23.ostr_);
    goto LABEL_13;
  }
  v6 = v23.ostr_->buffer_.data_ + 0x4000;
  ostr = (common::milog::MilogStringStream *)&v23.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v23.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(ostr);
    goto LABEL_14;
  }
  cur = v23.ostr_->buffer_.cur_;
  v14 = (int)v6 - (int)cur;
  if ( v14 > 0x1E )
    v14 = 31LL;
  memcpy(cur, "[HotPatch] get page size error,", v14);
  *((_QWORD *)new_func + 1) += v14;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v23.ostr_, 0LL);
  common::milog::MiLogStream::~MiLogStream(&v23);
  v15 = -1;
LABEL_19:
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 74: range 0000000019B42E9E-0000000019B4386F
int32_t __fastcall common::tools::HotPatch::flushInstalledPatchName(const std::string *patch_dir)
{
  std::forward_iterator_tag v1; // cl
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rbp
  char *v4; // rbx
  _DWORD *v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __m128i *v8; // rdx
  __m128i *v9; // rdi
  char v10; // dl
  unsigned __int64 v11; // rdi
  char *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  char v19; // al
  std::string::size_type *p_M_string_length; // rdi
  std::string::size_type *v21; // r15
  std::string::size_type v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  char *v27; // rdx
  char v28; // al
  char *v29; // rdi
  char *v30; // rax
  unsigned __int64 v31; // rdi
  void *v32; // rax
  __int64 v33; // rax
  char *v34; // rdi
  std::string v36; // [rsp+0h] [rbp-2F8h] BYREF
  char v37[728]; // [rsp+20h] [rbp-2D8h] BYREF

  v2 = (unsigned __int64)patch_dir;
  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(672LL);
    if ( v6 )
      v3 = v6;
  }
  v4 = (char *)(v3 + 672);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 17 installed_file:75 96 512 19 installed_stream:76";
  *(_QWORD *)(v3 + 16) = common::tools::HotPatch::flushInstalledPatchName;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862739] = -202116109;
  v5[536862740] = -202116109;
  v36._M_dataplus._M_p = v36._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)patch_dir >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(patch_dir);
    goto LABEL_9;
  }
  patch_dir = (const std::string *)((char *)patch_dir + 8);
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(patch_dir);
LABEL_10:
    __asan_handle_no_return(patch_dir);
    std::__throw_length_error("basic_string::append");
  }
  patch_dir = &v36;
  std::string::_M_construct<char *>(&v36, *(char **)v2, (char *)(*(_QWORD *)(v2 + 8) + *(_QWORD *)v2), v1);
  if ( v36._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_10;
  std::string::_M_append(&v36, "/", 1LL);
  if ( 0x3FFFFFFFFFFFFFFFLL - v36._M_string_length <= 8 )
  {
    __asan_handle_no_return(&v36);
    std::__throw_length_error("basic_string::append");
  }
  v7 = std::string::_M_append(&v36, "installed", 9LL);
  *(_QWORD *)(v3 + 32) = v3 + 48;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_load8(v7);
  }
  else
  {
    v8 = (__m128i *)(v7 + 16);
    if ( *(_QWORD *)v7 != v7 + 16 )
    {
      *(_QWORD *)(v3 + 32) = *(_QWORD *)v7;
      v9 = (__m128i *)(v7 + 16);
      if ( !*(_BYTE *)(((v7 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v3 + 48) = *(_QWORD *)(v7 + 16);
        goto LABEL_18;
      }
LABEL_34:
      __asan_report_load8(v9);
      goto LABEL_35;
    }
  }
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) <= ((unsigned __int8)v8 & 7)
    || *(_BYTE *)(((v7 + 31) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v7 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v7 + 31) & 7) )
  {
    __asan_report_load_n(v8, 16LL);
    goto LABEL_34;
  }
  *(__m128i *)(v3 + 48) = _mm_loadu_si128((const __m128i *)(v7 + 16));
LABEL_18:
  v9 = (__m128i *)(v7 + 8);
  if ( *(_BYTE *)(((v7 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(v9);
LABEL_36:
    __asan_report_store1(v9);
LABEL_37:
    __asan_report_load8(v9);
    goto LABEL_38;
  }
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(v7 + 8);
  *(_QWORD *)v7 = v8;
  *(_QWORD *)(v7 + 8) = 0LL;
  v9 = (__m128i *)(v7 + 16);
  v10 = *(_BYTE *)(((v7 + 16) >> 3) + 0x7FFF8000);
  if ( v10 <= (char)((v7 + 16) & 7) && v10 )
    goto LABEL_36;
  *(_BYTE *)(v7 + 16) = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p != &v36._anon_0 )
    operator delete(v36._M_dataplus._M_p);
  std::ios_base::ios_base((std::ios_base *)(v3 + 344));
  *(_QWORD *)(v3 + 344) = (char *)&`vtable for'std::ios + 16;
  *(_QWORD *)(v3 + 560) = 0LL;
  *(_BYTE *)(v3 + 568) = 0;
  *(_BYTE *)(v3 + 569) = 0;
  *(_QWORD *)(v3 + 576) = 0LL;
  *(_QWORD *)(v3 + 584) = 0LL;
  *(_QWORD *)(v3 + 592) = 0LL;
  *(_QWORD *)(v3 + 600) = 0LL;
  v9 = (__m128i *)&`VTT for'std::ofstream[1];
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ofstream[1] >> 3) + 0x7FFF8000) )
    goto LABEL_37;
  v2 = `VTT for'std::ofstream[1];
  *(_QWORD *)(v3 + 96) = v2;
  v9 = (__m128i *)(v2 - 24);
  if ( *(_BYTE *)(((v2 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    v12 = (char *)__asan_report_load8(v9);
    goto LABEL_39;
  }
  v11 = (unsigned __int64)&v4[*(_QWORD *)(v2 - 24) - 576];
  v12 = (char *)&`VTT for'std::ofstream[2];
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ofstream[2] >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    v11 = (unsigned __int64)v12;
    __asan_report_load8(v12);
    goto LABEL_40;
  }
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_store8(v11);
    goto LABEL_41;
  }
  *(_QWORD *)v11 = `VTT for'std::ofstream[2];
  v13 = *(_QWORD *)(v3 + 96);
  v11 = v13 - 24;
  if ( !*(_BYTE *)(((unsigned __int64)(v13 - 24) >> 3) + 0x7FFF8000) )
  {
    std::ios::init(&v4[*(_QWORD *)(v13 - 24) - 576], 0LL);
    goto LABEL_42;
  }
LABEL_41:
  __asan_report_load8(v11);
LABEL_42:
  *(_QWORD *)(v3 + 96) = (char *)&`vtable for'std::ofstream + 24;
  *(_QWORD *)(v3 + 344) = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::basic_filebuf(v3 + 104);
  std::ios::init(v3 + 344, v3 + 104);
  if ( std::filebuf::open(v3 + 104, *(_QWORD *)(v3 + 32), 16LL) )
  {
    v14 = *(_QWORD *)(v3 + 96);
    v15 = v14 - 24;
    if ( !*(_BYTE *)(((unsigned __int64)(v14 - 24) >> 3) + 0x7FFF8000) )
    {
      std::ios::clear(&v4[*(_QWORD *)(v14 - 24) - 576], 0LL);
      goto LABEL_52;
    }
  }
  else
  {
    v16 = *(_QWORD *)(v3 + 96);
    if ( *(_BYTE *)(((unsigned __int64)(v16 - 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v16 - 24);
    }
    else
    {
      v17 = (__int64)&v4[*(_QWORD *)(v16 - 24) - 576];
      v18 = v17 + 32;
      v19 = *(_BYTE *)(((unsigned __int64)(v17 + 32) >> 3) + 0x7FFF8000);
      if ( !v19 || v19 > 3 )
      {
        std::ios::clear(v17, *(_DWORD *)(v17 + 32) | 4u);
        goto LABEL_52;
      }
    }
    v15 = v18;
    __asan_report_load4(v18);
  }
  __asan_report_load8(v15);
LABEL_52:
  if ( !(unsigned __int8)std::__basic_file<char>::is_open(v3 + 208) )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v36,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/hot_patch.cpp",
      "flushInstalledPatchName",
      79);
    v21 = (std::string::size_type *)*(&v36._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&v36._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
    {
      v22 = *(&v36._anon_0._M_allocated_capacity + 1);
      __asan_report_load8(*(&v36._anon_0._M_allocated_capacity + 1));
    }
    else
    {
      v2 = **((_QWORD **)&v36._anon_0._M_allocated_capacity + 1) + 0x4000LL;
      v22 = *(&v36._anon_0._M_allocated_capacity + 1) + 8;
      if ( !*(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      {
        v23 = *(void **)(*(&v36._anon_0._M_allocated_capacity + 1) + 8);
        v2 = (int)v2 - (int)v23;
        if ( v2 > 0x1B )
          v2 = 28LL;
        memcpy(v23, "[HotPatch] open file failed:", v2);
        v21[1] += v2;
        v21 = (std::string::size_type *)*(&v36._anon_0._M_allocated_capacity + 1);
        if ( !*(_BYTE *)((*(&v36._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
        {
          v2 = **((_QWORD **)&v36._anon_0._M_allocated_capacity + 1) + 0x4000LL;
          p_M_string_length = (std::string::size_type *)(*(&v36._anon_0._M_allocated_capacity + 1) + 8);
          if ( !*(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          {
            v24 = *(void **)(*(&v36._anon_0._M_allocated_capacity + 1) + 8);
            v2 = (int)v2 - (int)v24;
            if ( *(_QWORD *)(v3 + 40) <= v2 )
              v2 = *(_QWORD *)(v3 + 40);
            memcpy(v24, *(const void **)(v3 + 32), v2);
            v21[1] += v2;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v36);
            LODWORD(v2) = -1;
            goto LABEL_73;
          }
          goto LABEL_68;
        }
LABEL_67:
        p_M_string_length = v21;
        __asan_report_load8(v21);
LABEL_68:
        __asan_report_load8(p_M_string_length);
        goto LABEL_69;
      }
    }
    __asan_report_load8(v22);
    goto LABEL_67;
  }
  p_M_string_length = &common::tools::HotPatch::installed_patch_context.patch_name._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.patch_name._M_string_length >> 3)
                + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(p_M_string_length);
    goto LABEL_70;
  }
  p_M_string_length = (std::string::size_type *)&common::tools::HotPatch::installed_patch_context;
  if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context >> 3) + 0x7FFF8000) )
  {
    std::__ostream_insert<char,std::char_traits<char>>(
      v3 + 96,
      common::tools::HotPatch::installed_patch_context.patch_name._M_dataplus._M_p,
      common::tools::HotPatch::installed_patch_context.patch_name._M_string_length);
    goto LABEL_71;
  }
LABEL_70:
  __asan_report_load8(p_M_string_length);
LABEL_71:
  if ( !std::filebuf::close(v3 + 104) )
  {
    v25 = *(_QWORD *)(v3 + 96);
    if ( *(_BYTE *)(((unsigned __int64)(v25 - 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v25 - 24);
    }
    else
    {
      v26 = (__int64)&v4[*(_QWORD *)(v25 - 24) - 576];
      v27 = (char *)(v26 + 32);
      v28 = *(_BYTE *)(((unsigned __int64)(v26 + 32) >> 3) + 0x7FFF8000);
      if ( !v28 || v28 > 3 )
      {
        std::ios::clear(v26, *(_DWORD *)(v26 + 32) | 4u);
        goto LABEL_72;
      }
    }
    v29 = v27;
    __asan_report_load4(v27);
    goto LABEL_80;
  }
LABEL_72:
  LODWORD(v2) = 0;
LABEL_73:
  *(_QWORD *)(v3 + 96) = (char *)&`vtable for'std::ofstream + 24;
  *(_QWORD *)(v3 + 344) = (char *)&`vtable for'std::ofstream + 64;
  *(_QWORD *)(v3 + 104) = (char *)&`vtable for'std::filebuf + 16;
  std::filebuf::close(v3 + 104);
  while ( 1 )
  {
    std::__basic_file<char>::~__basic_file(v3 + 208);
    *(_QWORD *)(v3 + 104) = (char *)&`vtable for'std::streambuf + 16;
    std::locale::~locale((std::locale *)(v3 + 160));
    v29 = (char *)&`VTT for'std::ofstream[1];
    if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ofstream[1] >> 3) + 0x7FFF8000) )
    {
LABEL_80:
      __asan_report_load8(v29);
LABEL_81:
      v30 = (char *)__asan_report_load8(v29);
LABEL_82:
      v31 = (unsigned __int64)v30;
      __asan_report_load8(v30);
      goto LABEL_83;
    }
    v33 = `VTT for'std::ofstream[1];
    *(_QWORD *)(v3 + 96) = v33;
    v29 = (char *)(v33 - 24);
    if ( *(_BYTE *)(((unsigned __int64)(v33 - 24) >> 3) + 0x7FFF8000) )
      goto LABEL_81;
    v31 = (unsigned __int64)&v4[*(_QWORD *)(v33 - 24) - 576];
    v30 = (char *)&`VTT for'std::ofstream[2];
    if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ofstream[2] >> 3) + 0x7FFF8000) )
      goto LABEL_82;
    if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      break;
LABEL_83:
    v32 = (void *)__asan_report_store8(v31);
    __cxa_begin_catch(v32);
    __cxa_end_catch();
  }
  *(_QWORD *)v31 = `VTT for'std::ofstream[2];
  *(_QWORD *)(v3 + 344) = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)(v3 + 344));
  v34 = *(char **)(v3 + 32);
  if ( v34 != (char *)(v3 + 48) )
    operator delete(v34);
  if ( v37 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return v2;
};

// Line 103: range 0000000019B42458-0000000019B42E98
int32_t __fastcall common::tools::HotPatch::readPendingPatchName(
        const std::string *patch_dir,
        std::string *pending_patch_name)
{
  std::forward_iterator_tag v2; // cl
  const std::string *v3; // r15
  unsigned __int64 v4; // r12
  char *v5; // rbx
  _DWORD *v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __m128i *v9; // rcx
  __m128i *v10; // rdi
  char v11; // dl
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  char *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  char v21; // al
  std::string::size_type v22; // r15
  std::string::size_type v23; // rdi
  void *v24; // rdi
  size_t v25; // r13
  std::string::size_type v26; // rdi
  void *v27; // rdi
  size_t v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdi
  char *v31; // rdx
  char v32; // al
  char *v33; // rdi
  char *v34; // rax
  unsigned __int64 v35; // rdi
  void *v36; // rax
  __int64 v37; // rax
  char *v38; // rdi
  std::string v40; // [rsp+0h] [rbp-358h] BYREF
  char v41[824]; // [rsp+20h] [rbp-338h] BYREF

  v3 = patch_dir;
  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(768LL);
    if ( v7 )
      v4 = v7;
  }
  v5 = (char *)(v4 + 768);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 32 16 pending_file:104 112 520 18 pending_stream:105";
  *(_QWORD *)(v4 + 16) = common::tools::HotPatch::readPendingPatchName;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -219021312;
  v6[536862723] = 62194;
  v6[536862739] = -218103808;
  v6[536862740] = -202116109;
  v6[536862741] = -202116109;
  v6[536862742] = -202116109;
  v6[536862743] = -202116109;
  v40._M_dataplus._M_p = v40._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)patch_dir >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(patch_dir);
    goto LABEL_9;
  }
  patch_dir = (const std::string *)((char *)patch_dir + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(patch_dir);
LABEL_10:
    __asan_handle_no_return(patch_dir);
    std::__throw_length_error("basic_string::append");
  }
  patch_dir = &v40;
  std::string::_M_construct<char *>(&v40, v3->_M_dataplus._M_p, &v3->_M_dataplus._M_p[v3->_M_string_length], v2);
  if ( v40._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_10;
  std::string::_M_append(&v40, "/", 1LL);
  if ( 0x3FFFFFFFFFFFFFFFLL - v40._M_string_length <= 6 )
  {
    __asan_handle_no_return(&v40);
    std::__throw_length_error("basic_string::append");
  }
  v8 = std::string::_M_append(&v40, "pending", 7LL);
  *(_QWORD *)(v4 + 48) = v4 + 64;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load8(v8);
  }
  else
  {
    v9 = (__m128i *)(v8 + 16);
    if ( *(_QWORD *)v8 != v8 + 16 )
    {
      *(_QWORD *)(v4 + 48) = *(_QWORD *)v8;
      v10 = (__m128i *)(v8 + 16);
      if ( !*(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v4 + 64) = *(_QWORD *)(v8 + 16);
        goto LABEL_18;
      }
LABEL_34:
      __asan_report_load8(v10);
      goto LABEL_35;
    }
  }
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) <= ((unsigned __int8)v9 & 7)
    || *(_BYTE *)(((v8 + 31) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v8 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v8 + 31) & 7) )
  {
    __asan_report_load_n(v9, 16LL);
    goto LABEL_34;
  }
  *(__m128i *)(v4 + 64) = _mm_loadu_si128((const __m128i *)(v8 + 16));
LABEL_18:
  v10 = (__m128i *)(v8 + 8);
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(v10);
LABEL_36:
    __asan_report_store1(v10);
LABEL_37:
    __asan_report_load8(v10);
    goto LABEL_38;
  }
  *(_QWORD *)(v4 + 56) = *(_QWORD *)(v8 + 8);
  *(_QWORD *)v8 = v9;
  *(_QWORD *)(v8 + 8) = 0LL;
  v10 = (__m128i *)(v8 + 16);
  v11 = *(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000);
  if ( v11 <= (char)((v8 + 16) & 7) && v11 )
    goto LABEL_36;
  *(_BYTE *)(v8 + 16) = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v40._M_dataplus._M_p != &v40._anon_0 )
    operator delete(v40._M_dataplus._M_p);
  std::ios_base::ios_base((std::ios_base *)(v4 + 368));
  *(_QWORD *)(v4 + 368) = (char *)&`vtable for'std::ios + 16;
  *(_QWORD *)(v4 + 584) = 0LL;
  *(_BYTE *)(v4 + 592) = 0;
  *(_BYTE *)(v4 + 593) = 0;
  *(_QWORD *)(v4 + 600) = 0LL;
  *(_QWORD *)(v4 + 608) = 0LL;
  *(_QWORD *)(v4 + 616) = 0LL;
  *(_QWORD *)(v4 + 624) = 0LL;
  v10 = (__m128i *)&`VTT for'std::ifstream[1];
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ifstream[1] >> 3) + 0x7FFF8000) )
    goto LABEL_37;
  v12 = `VTT for'std::ifstream[1];
  *(_QWORD *)(v4 + 112) = v12;
  v10 = (__m128i *)(v12 - 24);
  if ( *(_BYTE *)(((unsigned __int64)(v12 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    v14 = (char *)__asan_report_load8(v10);
    goto LABEL_39;
  }
  v13 = (unsigned __int64)&v5[*(_QWORD *)(v12 - 24) - 656];
  v14 = (char *)&`VTT for'std::ifstream[2];
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ifstream[2] >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    v13 = (unsigned __int64)v14;
    __asan_report_load8(v14);
    goto LABEL_40;
  }
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_store8(v13);
    goto LABEL_41;
  }
  *(_QWORD *)v13 = `VTT for'std::ifstream[2];
  *(_QWORD *)(v4 + 120) = 0LL;
  v15 = *(_QWORD *)(v4 + 112);
  v13 = v15 - 24;
  if ( !*(_BYTE *)(((unsigned __int64)(v15 - 24) >> 3) + 0x7FFF8000) )
  {
    std::ios::init(&v5[*(_QWORD *)(v15 - 24) - 656], 0LL);
    goto LABEL_42;
  }
LABEL_41:
  __asan_report_load8(v13);
LABEL_42:
  *(_QWORD *)(v4 + 112) = (char *)&`vtable for'std::ifstream + 24;
  *(_QWORD *)(v4 + 368) = (char *)&`vtable for'std::ifstream + 64;
  std::filebuf::basic_filebuf(v4 + 128);
  std::ios::init(v4 + 368, v4 + 128);
  if ( std::filebuf::open(v4 + 128, *(_QWORD *)(v4 + 48), 8LL) )
  {
    v16 = *(_QWORD *)(v4 + 112);
    v17 = v16 - 24;
    if ( !*(_BYTE *)(((unsigned __int64)(v16 - 24) >> 3) + 0x7FFF8000) )
    {
      std::ios::clear(&v5[*(_QWORD *)(v16 - 24) - 656], 0LL);
      goto LABEL_52;
    }
  }
  else
  {
    v18 = *(_QWORD *)(v4 + 112);
    if ( *(_BYTE *)(((unsigned __int64)(v18 - 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v18 - 24);
    }
    else
    {
      v19 = (__int64)&v5[*(_QWORD *)(v18 - 24) - 656];
      v20 = v19 + 32;
      v21 = *(_BYTE *)(((unsigned __int64)(v19 + 32) >> 3) + 0x7FFF8000);
      if ( !v21 || v21 > 3 )
      {
        std::ios::clear(v19, *(_DWORD *)(v19 + 32) | 4u);
        goto LABEL_52;
      }
    }
    v17 = v20;
    __asan_report_load4(v20);
  }
  __asan_report_load8(v17);
LABEL_52:
  if ( (unsigned __int8)std::__basic_file<char>::is_open(v4 + 232) )
  {
    std::operator>><char>(v4 + 112, pending_patch_name);
    goto LABEL_67;
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v40,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/hot_patch.cpp",
    "readPendingPatchName",
    108);
  v22 = *(&v40._anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)((*(&v40._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
    v23 = *(&v40._anon_0._M_allocated_capacity + 1);
    __asan_report_load8(*(&v40._anon_0._M_allocated_capacity + 1));
    goto LABEL_64;
  }
  v23 = *(&v40._anon_0._M_allocated_capacity + 1) + 8;
  if ( *(_BYTE *)(((*(&v40._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(v23);
    goto LABEL_65;
  }
  v24 = *(void **)(*(&v40._anon_0._M_allocated_capacity + 1) + 8);
  v25 = **((_DWORD **)&v40._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v24;
  if ( v25 > 0x23 )
    v25 = 36LL;
  memcpy(v24, "[HotPatch] pending file open failed:", v25);
  *(_QWORD *)(v22 + 8) += v25;
  v22 = *(&v40._anon_0._M_allocated_capacity + 1);
  if ( !*(_BYTE *)((*(&v40._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
    v26 = *(&v40._anon_0._M_allocated_capacity + 1) + 8;
    if ( !*(_BYTE *)(((*(&v40._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    {
      v27 = *(void **)(*(&v40._anon_0._M_allocated_capacity + 1) + 8);
      v28 = **((_DWORD **)&v40._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v27;
      if ( *(_QWORD *)(v4 + 56) <= v28 )
        v28 = *(_QWORD *)(v4 + 56);
      memcpy(v27, *(const void **)(v4 + 48), v28);
      *(_QWORD *)(v22 + 8) += v28;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
      goto LABEL_68;
    }
    goto LABEL_66;
  }
LABEL_65:
  v26 = v22;
  __asan_report_load8(v22);
LABEL_66:
  __asan_report_load8(v26);
LABEL_67:
  if ( !std::filebuf::close(v4 + 128) )
  {
    v29 = *(_QWORD *)(v4 + 112);
    if ( *(_BYTE *)(((unsigned __int64)(v29 - 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v29 - 24);
    }
    else
    {
      v30 = (__int64)&v5[*(_QWORD *)(v29 - 24) - 656];
      v31 = (char *)(v30 + 32);
      v32 = *(_BYTE *)(((unsigned __int64)(v30 + 32) >> 3) + 0x7FFF8000);
      if ( !v32 || v32 > 3 )
      {
        std::ios::clear(v30, *(_DWORD *)(v30 + 32) | 4u);
        goto LABEL_68;
      }
    }
    v33 = v31;
    __asan_report_load4(v31);
    goto LABEL_75;
  }
LABEL_68:
  *(_QWORD *)(v4 + 112) = (char *)&`vtable for'std::ifstream + 24;
  *(_QWORD *)(v4 + 368) = (char *)&`vtable for'std::ifstream + 64;
  *(_QWORD *)(v4 + 128) = (char *)&`vtable for'std::filebuf + 16;
  std::filebuf::close(v4 + 128);
  while ( 1 )
  {
    std::__basic_file<char>::~__basic_file(v4 + 232);
    *(_QWORD *)(v4 + 128) = (char *)&`vtable for'std::streambuf + 16;
    std::locale::~locale((std::locale *)(v4 + 184));
    v33 = (char *)&`VTT for'std::ifstream[1];
    if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ifstream[1] >> 3) + 0x7FFF8000) )
    {
LABEL_75:
      __asan_report_load8(v33);
LABEL_76:
      v34 = (char *)__asan_report_load8(v33);
LABEL_77:
      v35 = (unsigned __int64)v34;
      __asan_report_load8(v34);
      goto LABEL_78;
    }
    v37 = `VTT for'std::ifstream[1];
    *(_QWORD *)(v4 + 112) = v37;
    v33 = (char *)(v37 - 24);
    if ( *(_BYTE *)(((unsigned __int64)(v37 - 24) >> 3) + 0x7FFF8000) )
      goto LABEL_76;
    v35 = (unsigned __int64)&v5[*(_QWORD *)(v37 - 24) - 656];
    v34 = (char *)&`VTT for'std::ifstream[2];
    if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ifstream[2] >> 3) + 0x7FFF8000) )
      goto LABEL_77;
    if ( !*(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
      break;
LABEL_78:
    v36 = (void *)__asan_report_store8(v35);
    __cxa_begin_catch(v36);
    __cxa_end_catch();
  }
  *(_QWORD *)v35 = `VTT for'std::ifstream[2];
  *(_QWORD *)(v4 + 120) = 0LL;
  *(_QWORD *)(v4 + 368) = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)(v4 + 368));
  v38 = *(char **)(v4 + 48);
  if ( v38 != (char *)(v4 + 64) )
    operator delete(v38);
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return 0;
};

// Line 118: range 0000000019B412F4-0000000019B415E0
void __cdecl common::tools::HotPatch::printInstalledFuncMap()
{
  common::milog::MilogStringStream *ostr; // rbp
  void *p_cur; // rdi
  char *cur; // rdi
  size_t v3; // rbx
  common::tools::HotPatch::InstalledPatchContext *i; // rax
  common::milog::MilogStringStream *v5; // r12
  common::milog::MilogStringStream *v6; // rdi
  char *v7; // rdi
  unsigned __int64 M_ptr; // rbx
  common::milog::MilogStringStream *v9; // r12
  char *v10; // rdi
  size_t v11; // rbx
  common::milog::MilogStringStream *v12; // rbp
  common::milog::MilogStringStream *v13; // rdi
  char *v14; // rdi
  size_t v15; // rbx
  struct _Unwind_Exception *v16; // rbx
  common::milog::MiLogStream v17; // [rsp+0h] [rbp-58h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-38h] BYREF

  common::milog::MiLogStream::MiLogStream(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/hot_patch.cpp",
    "printInstalledFuncMap",
    119);
  ostr = v18.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v18.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v18.ostr_;
    __asan_report_load8(v18.ostr_);
    goto LABEL_8;
  }
  p_cur = &v18.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v18.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(p_cur);
LABEL_9:
    __asan_report_load8(p_cur);
    goto LABEL_10;
  }
  cur = v18.ostr_->buffer_.cur_;
  v3 = (size_t)&v18.ostr_->buffer_.data_[-(int)cur + 0x4000];
  if ( v3 > 0x27 )
    v3 = 40LL;
  memcpy(cur, "[HotPatch] InstalledFuncMap Print Start:", v3);
  ostr->buffer_.cur_ += v3;
  common::milog::MiLogStream::~MiLogStream(&v18);
  p_cur = &common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left >> 3)
                + 0x7FFF8000) )
    goto LABEL_9;
  for ( i = (common::tools::HotPatch::InstalledPatchContext *)common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left;
        ;
        i = (common::tools::HotPatch::InstalledPatchContext *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)ostr) )
  {
    ostr = (common::milog::MilogStringStream *)i;
    if ( i == (common::tools::HotPatch::InstalledPatchContext *)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl.std::_Rb_tree_header )
      break;
    common::milog::MiLogStream::MiLogStream(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/hot_patch.cpp",
      "printInstalledFuncMap",
      122);
    v9 = v17.ostr_;
    p_cur = v17.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v17.ostr_ >> 3) + 0x7FFF8000) )
    {
LABEL_10:
      __asan_report_load8(p_cur);
LABEL_11:
      __asan_report_load8(p_cur);
      goto LABEL_12;
    }
    p_cur = &v17.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v17.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    v10 = v17.ostr_->buffer_.cur_;
    v11 = (size_t)&v17.ostr_->buffer_.data_[-(int)v10 + 0x4000];
    if ( v11 > 0xA )
      v11 = 11LL;
    memcpy(v10, "[HotPatch] ", v11);
    v9->buffer_.cur_ += v11;
    common::tools::HotPatch::HookFunc::debugString[abi:cxx11](
      (std::string *)&v18,
      (common::tools::HotPatch::HookFunc *const)&ostr[2].buffer_.cur_);
LABEL_12:
    v5 = v17.ostr_;
    v6 = v17.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v17.ostr_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v17.ostr_);
LABEL_26:
      __asan_report_load8(v6);
      break;
    }
    v6 = (common::milog::MilogStringStream *)&v17.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v17.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_26;
    v7 = v17.ostr_->buffer_.cur_;
    M_ptr = (unsigned __int64)&v17.ostr_->buffer_.data_[-(int)v7 + 0x4000];
    if ( v18.ostr_ptr_._M_ptr <= (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)M_ptr )
      M_ptr = (unsigned __int64)v18.ostr_ptr_._M_ptr;
    memcpy(v7, v18.log_, M_ptr);
    v5->buffer_.cur_ += M_ptr;
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v18.log_ != &v18.ostr_ptr_._M_refcount )
      operator delete(v18.log_);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  common::milog::MiLogStream::MiLogStream(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/hot_patch.cpp",
    "printInstalledFuncMap",
    124);
  v12 = v18.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v18.ostr_ >> 3) + 0x7FFF8000) )
  {
    v13 = v18.ostr_;
    __asan_report_load8(v18.ostr_);
LABEL_33:
    v16 = (struct _Unwind_Exception *)__asan_report_load8(v13);
    common::milog::MiLogStream::~MiLogStream(&v17);
    __asan_handle_no_return(&v17);
    _Unwind_Resume(v16);
  }
  v13 = (common::milog::MilogStringStream *)&v18.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v18.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v14 = v18.ostr_->buffer_.cur_;
  v15 = (size_t)&v18.ostr_->buffer_.data_[-(int)v14 + 0x4000];
  if ( v15 > 0x25 )
    v15 = 38LL;
  memcpy(v14, "[HotPatch] InstalledFuncMap Print End.", v15);
  v12->buffer_.cur_ += v15;
  common::milog::MiLogStream::~MiLogStream(&v18);
};

// Line 128: range 0000000019B415E6-0000000019B417A3
bool __fastcall common::tools::HotPatch::isSubPatch(const std::map<std::string,std::string> *new_map)
{
  std::_Rb_tree_node_base::_Base_ptr v1; // rbp
  std::_Rb_tree_node_base::_Base_ptr i; // rax
  common::milog::MilogStringStream *ostr; // r12
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v6; // rbx
  common::milog::MilogStringStream *v7; // rbp
  common::milog::MilogStringStream *v8; // rdi
  char *v9; // rdi
  size_t M_string_length; // rbx
  common::milog::MiLogStream v12; // [rsp+0h] [rbp-58h] BYREF
  std::string v13; // [rsp+20h] [rbp-38h] BYREF

  if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left >> 3)
                 + 0x7FFF8000) )
  {
    for ( i = common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left;
          ;
          i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(v1) )
    {
      v1 = i;
      if ( i == (std::_Rb_tree_node_base::_Base_ptr)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl.std::_Rb_tree_header )
        break;
      if ( &new_map->_M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::find(
                                                                                    &new_map->_M_t,
                                                                                    (const std::string *)&i[1]._M_parent)._M_node )
        goto LABEL_7;
    }
    return 1;
  }
  __asan_report_load8(&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left);
LABEL_7:
  common::milog::MiLogStream::MiLogStream(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/hot_patch.cpp",
    "isSubPatch",
    133);
  ostr = v12.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v12.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v12.ostr_;
    __asan_report_load8(v12.ostr_);
    goto LABEL_13;
  }
  p_cur = (common::milog::MilogStringStream *)&v12.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v12.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_cur);
    goto LABEL_14;
  }
  cur = v12.ostr_->buffer_.cur_;
  v6 = (size_t)&v12.ostr_->buffer_.data_[-(int)cur + 0x4000];
  if ( v6 > 0x2D )
    v6 = 46LL;
  memcpy(cur, "[HotPatch] function is not found in new patch:", v6);
  ostr->buffer_.cur_ += v6;
  common::tools::HotPatch::HookFunc::debugString[abi:cxx11](
    &v13,
    (common::tools::HotPatch::HookFunc *const)&v1[1]._M_parent);
LABEL_14:
  v7 = v12.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v12.ostr_ >> 3) + 0x7FFF8000) )
  {
    v8 = v12.ostr_;
    __asan_report_load8(v12.ostr_);
    goto LABEL_22;
  }
  v8 = (common::milog::MilogStringStream *)&v12.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v12.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(v8);
    return 1;
  }
  v9 = v12.ostr_->buffer_.cur_;
  M_string_length = (size_t)&v12.ostr_->buffer_.data_[-(int)v9 + 0x4000];
  if ( v13._M_string_length <= M_string_length )
    M_string_length = v13._M_string_length;
  memcpy(v9, v13._M_dataplus._M_p, M_string_length);
  v7->buffer_.cur_ += M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13._M_dataplus._M_p != &v13._anon_0 )
    operator delete(v13._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v12);
  return 0;
};

// Line 141: range 0000000019B40E56-0000000019B412EF
int32_t __cdecl common::tools::HotPatch::uninstallPatch()
{
  std::_Rb_tree_node<std::pair<void* const,common::tools::HotPatch::HookFunc> > *M_parent; // rsi
  int32_t result; // eax
  std::string *p_M_string_length; // rdi
  common::milog::MilogStringStream *ostr; // rbp
  char *cur; // rdi
  size_t v5; // rbx
  common::milog::MiLogStream v6; // [rsp+0h] [rbp-38h] BYREF

  M_parent = (std::_Rb_tree_node<std::pair<void* const,common::tools::HotPatch::HookFunc> > *)&unk_1B5CA060;
  result = std::string::compare(&common::tools::HotPatch::installed_patch_context, &unk_1B5CA060);
  if ( !result )
    return result;
  if ( *(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.handle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&common::tools::HotPatch::installed_patch_context.handle);
  }
  else if ( common::tools::HotPatch::installed_patch_context.handle )
  {
    p_M_string_length = (std::string *)&common::tools::HotPatch::installed_patch_context.patch_name._M_string_length;
    if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.patch_name._M_string_length >> 3)
                   + 0x7FFF8000) )
    {
      M_parent = 0LL;
      std::string::_M_replace(
        &common::tools::HotPatch::installed_patch_context,
        0LL,
        common::tools::HotPatch::installed_patch_context.patch_name._M_string_length,
        &unk_1B5CA060,
        0LL);
      p_M_string_length = (std::string *)&common::tools::HotPatch::installed_patch_context.handle;
      if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.handle >> 3) + 0x7FFF8000) )
      {
        common::tools::HotPatch::installed_patch_context.handle = 0LL;
        p_M_string_length = (std::string *)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_parent;
        if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_parent >> 3)
                       + 0x7FFF8000) )
        {
          M_parent = (std::_Rb_tree_node<std::pair<void* const,common::tools::HotPatch::HookFunc> > *)common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_parent;
          std::_Rb_tree<void *,std::pair<void * const,common::tools::HotPatch::HookFunc>,std::_Select1st<std::pair<void * const,common::tools::HotPatch::HookFunc>>,std::less<void *>,std::allocator<std::pair<void * const,common::tools::HotPatch::HookFunc>>>::_M_erase(
            &common::tools::HotPatch::installed_patch_context.func_map._M_t,
            M_parent);
          p_M_string_length = (std::string *)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_parent;
          if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_parent >> 3)
                         + 0x7FFF8000) )
          {
            common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_parent = 0LL;
            p_M_string_length = (std::string *)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left;
            if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left >> 3)
                           + 0x7FFF8000) )
            {
              common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left = &common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header;
              p_M_string_length = (std::string *)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_right;
              if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_right >> 3)
                             + 0x7FFF8000) )
              {
                common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_right = &common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header;
                p_M_string_length = (std::string *)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_node_count;
                if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_node_count >> 3)
                               + 0x7FFF8000) )
                {
                  common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_node_count = 0LL;
                  return 0;
                }
LABEL_27:
                __asan_report_store8(p_M_string_length);
                return (unsigned int)common::tools::HotPatch::HookFunc::debugString[abi:cxx11](
                                       p_M_string_length,
                                       (common::tools::HotPatch::HookFunc *const)M_parent);
              }
LABEL_26:
              __asan_report_store8(p_M_string_length);
              goto LABEL_27;
            }
LABEL_25:
            __asan_report_store8(p_M_string_length);
            goto LABEL_26;
          }
LABEL_24:
          __asan_report_store8(p_M_string_length);
          goto LABEL_25;
        }
LABEL_23:
        __asan_report_load8(p_M_string_length);
        goto LABEL_24;
      }
LABEL_22:
      __asan_report_store8(p_M_string_length);
      goto LABEL_23;
    }
LABEL_21:
    __asan_report_load8(p_M_string_length);
    goto LABEL_22;
  }
  M_parent = (std::_Rb_tree_node<std::pair<void* const,common::tools::HotPatch::HookFunc> > *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/hot_patch.cpp",
    "uninstallPatch",
    148);
  ostr = v6.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v6.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = (std::string *)v6.ostr_;
    __asan_report_load8(v6.ostr_);
    goto LABEL_20;
  }
  p_M_string_length = (std::string *)&v6.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v6.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(p_M_string_length);
    goto LABEL_21;
  }
  cur = v6.ostr_->buffer_.cur_;
  v5 = (size_t)&v6.ostr_->buffer_.data_[-(int)cur + 0x4000];
  if ( v5 > 0x37 )
    v5 = 56LL;
  memcpy(cur, "[HotPatch] installed_patch_context handle cannot be null", v5);
  ostr->buffer_.cur_ += v5;
  common::milog::MiLogStream::~MiLogStream(&v6);
  return -1;
};

// Line 166: range 0000000019B463BA-0000000019B46C4D
int32_t __fastcall common::tools::HotPatch::installPrePatch(
        const std::string *patch_dir,
        const std::string *app_rely_code_version)
{
  unsigned __int64 v3; // r12
  common::milog::MilogStringStream *v4; // r13
  unsigned __int64 v5; // r14
  common::milog::MilogStringStream *ostr; // r15
  void *p_cur; // rdi
  char *cur; // rdi
  size_t v9; // rbp
  char **p_data; // rdi
  char *v11; // rdi
  size_t M_string_length; // rbp
  void *p_M_string_length; // rdi
  char *v14; // rdi
  size_t v15; // rbp
  char **v16; // rdi
  char *v17; // rdi
  std::string::size_type v18; // rbp
  const char *M_p; // rsi
  std::forward_iterator_tag v20; // cl
  void *v21; // rdi
  __int64 v22; // rax
  common::tools::HotPatch::InstalledPatchContext *v23; // rdi
  char *v24; // rdi
  char **v25; // rdi
  char *v26; // rdi
  size_t v27; // rbx
  char v28; // al
  bool v29; // r15
  int32_t InstalledPatchName; // eax
  common::milog::MilogStringStream *v31; // r15
  void *v32; // rdi
  char *v33; // rdi
  size_t v34; // r13
  std::string::size_type v35; // rax
  std::string::pointer v36; // rsi
  char **v37; // rdi
  char *v38; // rdi
  size_t v39; // rbx
  char *data; // rdi
  int32_t v42; // eax
  common::milog::MilogStringStream *v43; // rdi
  char *v44; // rdi
  size_t v45; // rbx
  common::milog::MiLogStream v47; // [rsp+10h] [rbp-E8h] BYREF
  std::filesystem::__cxx11::path v48; // [rsp+30h] [rbp-C8h] BYREF
  char v49[152]; // [rsp+60h] [rbp-98h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v22 = __asan_stack_malloc_1(96LL);
    if ( v22 )
      v3 = v22;
  }
  v4 = (common::milog::MilogStringStream *)(v3 + 96);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 18 pre_patch_name:181";
  *(_QWORD *)(v3 + 16) = common::tools::HotPatch::installPrePatch;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  common::milog::MiLogStream::MiLogStream(
    &v47,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/hot_patch.cpp",
    "installPrePatch",
    167);
  ostr = v47.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v47.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v47.ostr_;
    __asan_report_load8(v47.ostr_);
    goto LABEL_29;
  }
  p_cur = &v47.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v47.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(p_cur);
LABEL_30:
    __asan_report_load8(p_cur);
    goto LABEL_31;
  }
  cur = v47.ostr_->buffer_.cur_;
  v9 = (size_t)&v47.ostr_->buffer_.data_[-(int)cur + 0x4000];
  if ( v9 > 0x22 )
    v9 = 35LL;
  memcpy(cur, "[HotPatch] start install pre patch:", v9);
  ostr->buffer_.cur_ += v9;
  ostr = v47.ostr_;
  p_cur = &patch_dir->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&patch_dir->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_30;
  if ( *(_BYTE *)(((unsigned __int64)patch_dir >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(patch_dir);
    goto LABEL_32;
  }
  if ( *(_BYTE *)(((unsigned __int64)v47.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    p_data = &ostr->buffer_.data_;
    __asan_report_load8(ostr);
    goto LABEL_33;
  }
  p_data = &v47.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v47.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_data);
LABEL_34:
    p_M_string_length = ostr;
    __asan_report_load8(ostr);
    goto LABEL_35;
  }
  v11 = v47.ostr_->buffer_.cur_;
  M_string_length = (size_t)&v47.ostr_->buffer_.data_[-(int)v11 + 0x4000];
  if ( patch_dir->_M_string_length <= M_string_length )
    M_string_length = patch_dir->_M_string_length;
  memcpy(v11, patch_dir->_M_dataplus._M_p, M_string_length);
  ostr->buffer_.cur_ += M_string_length;
  ostr = v47.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v47.ostr_ >> 3) + 0x7FFF8000) )
    goto LABEL_34;
  p_M_string_length = &v47.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v47.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_string_length);
LABEL_36:
    __asan_report_load8(p_M_string_length);
    goto LABEL_37;
  }
  v14 = v47.ostr_->buffer_.cur_;
  v15 = (size_t)&v47.ostr_->buffer_.data_[-(int)v14 + 0x4000];
  if ( v15 > 0x12 )
    v15 = 19LL;
  memcpy(v14, " rely_code_version:", v15);
  ostr->buffer_.cur_ += v15;
  ostr = v47.ostr_;
  p_M_string_length = &app_rely_code_version->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&app_rely_code_version->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_36;
  if ( *(_BYTE *)(((unsigned __int64)app_rely_code_version >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(app_rely_code_version);
    goto LABEL_38;
  }
  if ( *(_BYTE *)(((unsigned __int64)v47.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    v16 = &ostr->buffer_.data_;
    __asan_report_load8(ostr);
    goto LABEL_39;
  }
  v16 = &v47.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v47.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(v16);
    goto LABEL_40;
  }
  v17 = v47.ostr_->buffer_.cur_;
  v18 = (std::string::size_type)&v47.ostr_->buffer_.data_[-(int)v17 + 0x4000];
  if ( app_rely_code_version->_M_string_length <= v18 )
    v18 = app_rely_code_version->_M_string_length;
  memcpy(v17, app_rely_code_version->_M_dataplus._M_p, v18);
  ostr->buffer_.cur_ += v18;
  common::milog::MiLogStream::~MiLogStream(&v47);
  M_p = (const char *)&unk_1B5CA060;
  LODWORD(v18) = std::string::compare(&common::tools::HotPatch::installed_patch_context, &unk_1B5CA060);
  if ( !(_DWORD)v18 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)patch_dir >> 3) + 0x7FFF8000) )
    {
      M_p = patch_dir->_M_dataplus._M_p;
      v21 = &patch_dir->_M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)&patch_dir->_M_string_length >> 3) + 0x7FFF8000) )
      {
        v48._M_pathname._M_dataplus._M_p = v48._M_pathname._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(&v48._M_pathname, M_p, &M_p[patch_dir->_M_string_length], v20);
        std::filesystem::__cxx11::path::_List::_List(&v48._M_cmpts);
        goto LABEL_59;
      }
LABEL_58:
      __asan_report_load8(v21);
LABEL_59:
      std::filesystem::__cxx11::path::_M_split_cmpts(&v48);
      v28 = std::filesystem::status((std::filesystem *)&v48, (const std::filesystem::__cxx11::path *)M_p);
      if ( v28 )
        v29 = v28 != -1;
      else
        v29 = 0;
      if ( v48._M_cmpts._M_impl._M_t._M_t._M_head_impl )
        std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()(&v48._M_cmpts);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v48._M_pathname._M_dataplus._M_p != &v48._M_pathname._anon_0 )
        operator delete(v48._M_pathname._M_dataplus._M_p);
      if ( v29 )
      {
        *(_QWORD *)(v3 + 32) = v3 + 48;
        *(_QWORD *)(v3 + 40) = 0LL;
        *(_BYTE *)(v3 + 48) = 0;
        InstalledPatchName = common::tools::HotPatch::readInstalledPatchName(patch_dir, (std::string *)(v3 + 32));
        goto LABEL_85;
      }
      common::milog::MiLogStream::MiLogStream(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "src/hot_patch.cpp",
        "installPrePatch",
        176);
      v31 = v47.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v47.ostr_ >> 3) + 0x7FFF8000) )
      {
        v32 = v47.ostr_;
        __asan_report_load8(v47.ostr_);
      }
      else
      {
        v4 = (common::milog::MilogStringStream *)(v47.ostr_->buffer_.data_ + 0x4000);
        v32 = &v47.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v47.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          v33 = v47.ostr_->buffer_.cur_;
          v34 = (int)v4 - (int)v33;
          if ( v34 > 0x1F )
            v34 = 32LL;
          memcpy(v33, "[HotPatch] patch dir not exists:", v34);
          v31->buffer_.cur_ += v34;
          v4 = v47.ostr_;
          v32 = &patch_dir->_M_string_length;
          if ( !*(_BYTE *)(((unsigned __int64)&patch_dir->_M_string_length >> 3) + 0x7FFF8000) )
          {
            v35 = patch_dir->_M_string_length;
            if ( !*(_BYTE *)(((unsigned __int64)patch_dir >> 3) + 0x7FFF8000) )
            {
              v36 = patch_dir->_M_dataplus._M_p;
              if ( !*(_BYTE *)(((unsigned __int64)v47.ostr_ >> 3) + 0x7FFF8000) )
              {
                patch_dir = (const std::string *)(v47.ostr_->buffer_.data_ + 0x4000);
                v37 = &v47.ostr_->buffer_.cur_;
                if ( !*(_BYTE *)(((unsigned __int64)&v47.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                {
                  v38 = v47.ostr_->buffer_.cur_;
                  v39 = (int)patch_dir - (int)v38;
                  if ( v35 <= v39 )
                    v39 = v35;
                  memcpy(v38, v36, v39);
                  v4->buffer_.cur_ += v39;
                  common::milog::MiLogStream::~MiLogStream(&v47);
                  goto LABEL_89;
                }
LABEL_84:
                InstalledPatchName = __asan_report_load8(v37);
LABEL_85:
                if ( InstalledPatchName )
                {
                  LODWORD(v18) = -1;
                }
                else
                {
                  LODWORD(v18) = std::string::compare(&v4[-4], &unk_1B5CA060);
                  if ( (_DWORD)v18 )
                  {
                    if ( common::tools::HotPatch::isRelyCodeVersionMatched(
                           (const std::string *)&v4[-4],
                           app_rely_code_version) )
                    {
                      v42 = common::tools::HotPatch::installPatch(patch_dir, (const std::string *)&v4[-4]);
                    }
                    else
                    {
                      common::milog::MiLogStream::MiLogStream(
                        &v47,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "src/hot_patch.cpp",
                        "installPrePatch",
                        192);
                      v18 = (std::string::size_type)v47.ostr_;
                      if ( *(_BYTE *)(((unsigned __int64)v47.ostr_ >> 3) + 0x7FFF8000) )
                      {
                        v43 = v47.ostr_;
                        __asan_report_load8(v47.ostr_);
                      }
                      else
                      {
                        patch_dir = (const std::string *)(v47.ostr_->buffer_.data_ + 0x4000);
                        v43 = (common::milog::MilogStringStream *)&v47.ostr_->buffer_.cur_;
                        if ( !*(_BYTE *)(((unsigned __int64)&v47.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                        {
                          v44 = v47.ostr_->buffer_.cur_;
                          v45 = (int)patch_dir - (int)v44;
                          if ( v45 > 0x29 )
                            v45 = 42LL;
                          memcpy(v44, "[HotPatch] isRelyCodeVersionMatched failed", v45);
                          *(_QWORD *)(v18 + 8) += v45;
                          common::milog::MiLogStream::~MiLogStream(&v47);
                          LODWORD(v18) = -1;
                          goto LABEL_87;
                        }
                      }
                      v42 = __asan_report_load8(v43);
                    }
                    if ( v42 )
                    {
                      LODWORD(v18) = -1;
                    }
                    else
                    {
                      LODWORD(v18) = common::tools::HotPatch::flushInstalledPatchName(patch_dir);
                      if ( (_DWORD)v18 )
                        LODWORD(v18) = -1;
                    }
                  }
                }
LABEL_87:
                data = v4[-4].buffer_.data_;
                if ( data != (char *)&v4[-3] )
                  operator delete(data);
                goto LABEL_89;
              }
LABEL_83:
              v37 = &v4->buffer_.data_;
              __asan_report_load8(v4);
              goto LABEL_84;
            }
LABEL_82:
            __asan_report_load8(patch_dir);
            goto LABEL_83;
          }
LABEL_81:
          __asan_report_load8(v32);
          goto LABEL_82;
        }
      }
      __asan_report_load8(v32);
      goto LABEL_81;
    }
LABEL_57:
    v21 = (void *)patch_dir;
    __asan_report_load8(patch_dir);
    goto LABEL_58;
  }
LABEL_40:
  M_p = (const char *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v47,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/hot_patch.cpp",
    "installPrePatch",
    170);
  v18 = (std::string::size_type)v47.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v47.ostr_ >> 3) + 0x7FFF8000) )
  {
    v23 = (common::tools::HotPatch::InstalledPatchContext *)v47.ostr_;
    __asan_report_load8(v47.ostr_);
    goto LABEL_52;
  }
  patch_dir = (const std::string *)(v47.ostr_->buffer_.data_ + 0x4000);
  v23 = (common::tools::HotPatch::InstalledPatchContext *)&v47.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v47.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(v23);
LABEL_53:
    __asan_report_load8(v23);
    goto LABEL_54;
  }
  v24 = v47.ostr_->buffer_.cur_;
  patch_dir = (const std::string *)((int)patch_dir - (int)v24);
  if ( (unsigned __int64)patch_dir > 0x31 )
    patch_dir = (const std::string *)50;
  M_p = "[HotPatch] installed_patch patch should be empty: ";
  memcpy(v24, "[HotPatch] installed_patch patch should be empty: ", (size_t)patch_dir);
  *(_QWORD *)(v18 + 8) += patch_dir;
  v18 = (std::string::size_type)v47.ostr_;
  v23 = (common::tools::HotPatch::InstalledPatchContext *)&common::tools::HotPatch::installed_patch_context.patch_name._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.patch_name._M_string_length >> 3)
                + 0x7FFF8000) )
    goto LABEL_53;
  v23 = &common::tools::HotPatch::installed_patch_context;
  if ( *(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(v23);
    goto LABEL_55;
  }
  M_p = common::tools::HotPatch::installed_patch_context.patch_name._M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)v47.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    v25 = (char **)v18;
    __asan_report_load8(v18);
    goto LABEL_56;
  }
  patch_dir = (const std::string *)(v47.ostr_->buffer_.data_ + 0x4000);
  v25 = &v47.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v47.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_load8(v25);
    goto LABEL_57;
  }
  v26 = v47.ostr_->buffer_.cur_;
  v27 = (int)patch_dir - (int)v26;
  if ( common::tools::HotPatch::installed_patch_context.patch_name._M_string_length <= v27 )
    v27 = common::tools::HotPatch::installed_patch_context.patch_name._M_string_length;
  memcpy(v26, common::tools::HotPatch::installed_patch_context.patch_name._M_dataplus._M_p, v27);
  *(_QWORD *)(v18 + 8) += v27;
  common::milog::MiLogStream::~MiLogStream(&v47);
  LODWORD(v18) = -1;
LABEL_89:
  if ( v49 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v18;
};

// Line 209: range 0000000019B46C52-0000000019B4752D
int32_t __fastcall common::tools::HotPatch::installPendingPatch(
        const std::string *patch_dir,
        const std::string *app_rely_code_version)
{
  size_t M_string_length; // rbp
  unsigned __int64 v4; // r13
  common::milog::MilogStringStream *v5; // r12
  unsigned __int64 v6; // r14
  std::string::pointer M_p; // rsi
  common::milog::MilogStringStream *ostr; // r15
  void *p_cur; // rdi
  char *cur; // rdi
  char **p_data; // rdi
  char *v12; // rdi
  std::forward_iterator_tag v13; // cl
  void *p_M_string_length; // rdi
  __int64 v15; // rax
  char v16; // al
  bool v17; // r15
  int32_t PendingPatchName; // eax
  void *v19; // rdi
  char *v20; // rdi
  size_t v21; // rbp
  std::string::size_type v22; // rax
  std::string::pointer v23; // rsi
  char **v24; // rdi
  char *v25; // rdi
  size_t v26; // rbx
  int32_t v27; // ebp
  size_t v28; // rdx
  unsigned __int64 v29; // rax
  char isRelyCodeVersionMatched; // al
  common::milog::MilogStringStream *v31; // r15
  common::milog::MilogStringStream *v32; // rdi
  char *v33; // rdi
  char **v34; // rdi
  char *v35; // rdi
  size_t v36; // rbx
  common::milog::MilogStringStream *v37; // rbp
  common::milog::MilogStringStream *v38; // rdi
  char *v39; // rdi
  char **v40; // rdi
  char *v41; // rdi
  size_t v42; // rbx
  int32_t v43; // eax
  common::milog::MilogStringStream *v44; // rbp
  common::milog::MilogStringStream *v45; // rdi
  char *v46; // rdi
  size_t v47; // rbx
  char *data; // rdi
  common::milog::MiLogStream v51; // [rsp+10h] [rbp-128h] BYREF
  common::milog::MiLogStream v52; // [rsp+30h] [rbp-108h] BYREF
  common::milog::MiLogStream v53; // [rsp+50h] [rbp-E8h] BYREF
  std::filesystem::__cxx11::path v54; // [rsp+70h] [rbp-C8h] BYREF
  char v55[152]; // [rsp+A0h] [rbp-98h] BYREF

  v4 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_1(96LL);
    if ( v15 )
      v4 = v15;
  }
  v5 = (common::milog::MilogStringStream *)(v4 + 96);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 22 pending_patch_name:224";
  *(_QWORD *)(v4 + 16) = common::tools::HotPatch::installPendingPatch;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  M_p = (std::string::pointer)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v53,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/hot_patch.cpp",
    "installPendingPatch",
    210);
  ostr = v53.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v53.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v53.ostr_;
    __asan_report_load8(v53.ostr_);
    goto LABEL_18;
  }
  M_string_length = (size_t)(v53.ostr_->buffer_.data_ + 0x4000);
  p_cur = &v53.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v53.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_cur);
LABEL_19:
    __asan_report_load8(p_cur);
    goto LABEL_20;
  }
  cur = v53.ostr_->buffer_.cur_;
  M_string_length = (int)M_string_length - (int)cur;
  if ( M_string_length > 0x26 )
    M_string_length = 39LL;
  M_p = "[HotPatch] start install pending patch:";
  memcpy(cur, "[HotPatch] start install pending patch:", M_string_length);
  ostr->buffer_.cur_ += M_string_length;
  ostr = v53.ostr_;
  p_cur = &patch_dir->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&patch_dir->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)patch_dir >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(patch_dir);
    goto LABEL_21;
  }
  M_p = patch_dir->_M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)v53.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_data = &ostr->buffer_.data_;
    __asan_report_load8(ostr);
    goto LABEL_22;
  }
  M_string_length = (size_t)(v53.ostr_->buffer_.data_ + 0x4000);
  p_data = &v53.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v53.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_data);
LABEL_23:
    p_M_string_length = (void *)patch_dir;
    __asan_report_load8(patch_dir);
    goto LABEL_24;
  }
  v12 = v53.ostr_->buffer_.cur_;
  M_string_length = (int)M_string_length - (int)v12;
  if ( patch_dir->_M_string_length <= M_string_length )
    M_string_length = patch_dir->_M_string_length;
  memcpy(v12, M_p, M_string_length);
  ostr->buffer_.cur_ += M_string_length;
  common::milog::MiLogStream::~MiLogStream(&v53);
  if ( *(_BYTE *)(((unsigned __int64)patch_dir >> 3) + 0x7FFF8000) )
    goto LABEL_23;
  M_p = patch_dir->_M_dataplus._M_p;
  p_M_string_length = &patch_dir->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&patch_dir->_M_string_length >> 3) + 0x7FFF8000) )
  {
    v54._M_pathname._M_dataplus._M_p = v54._M_pathname._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v54._M_pathname, M_p, &M_p[patch_dir->_M_string_length], v13);
    std::filesystem::__cxx11::path::_List::_List(&v54._M_cmpts);
    goto LABEL_25;
  }
LABEL_24:
  __asan_report_load8(p_M_string_length);
LABEL_25:
  std::filesystem::__cxx11::path::_M_split_cmpts(&v54);
  v16 = std::filesystem::status((std::filesystem *)&v54, (const std::filesystem::__cxx11::path *)M_p);
  if ( v16 )
    v17 = v16 != -1;
  else
    v17 = 0;
  if ( v54._M_cmpts._M_impl._M_t._M_t._M_head_impl )
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()(&v54._M_cmpts);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v54._M_pathname._M_dataplus._M_p != &v54._M_pathname._anon_0 )
    operator delete(v54._M_pathname._M_dataplus._M_p);
  if ( v17 )
  {
    if ( common::tools::HotPatch::flushInstalledPatchName(patch_dir) )
    {
      v27 = -1;
      goto LABEL_107;
    }
    *(_QWORD *)(v4 + 32) = v4 + 48;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_BYTE *)(v4 + 48) = 0;
    PendingPatchName = common::tools::HotPatch::readPendingPatchName(patch_dir, (std::string *)(v4 + 32));
LABEL_52:
    v27 = PendingPatchName;
    if ( PendingPatchName )
    {
      v27 = -1;
      goto LABEL_105;
    }
    v28 = (size_t)v5[-4].buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.patch_name._M_string_length >> 3)
                  + 0x7FFF8000) )
    {
      v29 = __asan_report_load8(&common::tools::HotPatch::installed_patch_context.patch_name._M_string_length);
    }
    else
    {
      v29 = (unsigned __int64)&common::tools::HotPatch::installed_patch_context;
      if ( v28 != common::tools::HotPatch::installed_patch_context.patch_name._M_string_length )
      {
        v17 = 0;
        goto LABEL_56;
      }
    }
    if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&common::tools::HotPatch::installed_patch_context);
      goto LABEL_65;
    }
    if ( v28
      && memcmp(v5[-4].buffer_.data_, common::tools::HotPatch::installed_patch_context.patch_name._M_dataplus._M_p, v28) )
    {
      v17 = 0;
    }
LABEL_56:
    if ( !v17 )
    {
      if ( (unsigned int)std::string::compare(&v5[-4], &unk_1B5CA060) )
      {
        isRelyCodeVersionMatched = common::tools::HotPatch::isRelyCodeVersionMatched(
                                     (const std::string *)&v5[-4],
                                     app_rely_code_version);
LABEL_91:
        if ( isRelyCodeVersionMatched )
        {
          v43 = common::tools::HotPatch::installPatch(patch_dir, (const std::string *)&v5[-4]);
        }
        else
        {
          common::milog::MiLogStream::MiLogStream(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/hot_patch.cpp",
            "installPendingPatch",
            242);
          v44 = v53.ostr_;
          if ( *(_BYTE *)(((unsigned __int64)v53.ostr_ >> 3) + 0x7FFF8000) )
          {
            v45 = v53.ostr_;
            __asan_report_load8(v53.ostr_);
          }
          else
          {
            patch_dir = (const std::string *)(v53.ostr_->buffer_.data_ + 0x4000);
            v45 = (common::milog::MilogStringStream *)&v53.ostr_->buffer_.cur_;
            if ( !*(_BYTE *)(((unsigned __int64)&v53.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
            {
              v46 = v53.ostr_->buffer_.cur_;
              v47 = (int)patch_dir - (int)v46;
              if ( v47 > 0x29 )
                v47 = 42LL;
              memcpy(v46, "[HotPatch] isRelyCodeVersionMatched failed", v47);
              v44->buffer_.cur_ += v47;
              common::milog::MiLogStream::~MiLogStream(&v53);
              v27 = -1;
              goto LABEL_105;
            }
          }
          v43 = __asan_report_load8(v45);
        }
        if ( v43 )
        {
          v27 = -1;
        }
        else
        {
          v27 = common::tools::HotPatch::flushInstalledPatchName(patch_dir);
          if ( v27 )
            v27 = -1;
        }
LABEL_105:
        data = v5[-4].buffer_.data_;
        if ( data != (char *)&v5[-3] )
          operator delete(data);
        goto LABEL_107;
      }
LABEL_78:
      common::milog::MiLogStream::MiLogStream(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/hot_patch.cpp",
        "installPendingPatch",
        237);
      v37 = v52.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v52.ostr_ >> 3) + 0x7FFF8000) )
      {
        v38 = v52.ostr_;
        __asan_report_load8(v52.ostr_);
      }
      else
      {
        patch_dir = (const std::string *)(v52.ostr_->buffer_.data_ + 0x4000);
        v38 = (common::milog::MilogStringStream *)&v52.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v52.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          v39 = v52.ostr_->buffer_.cur_;
          patch_dir = (const std::string *)((int)patch_dir - (int)v39);
          if ( (unsigned __int64)patch_dir > 0x2D )
            patch_dir = (const std::string *)46;
          memcpy(v39, "[HotPatch] pending patch should not be empty: ", (size_t)patch_dir);
          v37->buffer_.cur_ += (unsigned __int64)patch_dir;
          v37 = v52.ostr_;
          if ( !*(_BYTE *)(((unsigned __int64)v52.ostr_ >> 3) + 0x7FFF8000) )
          {
            patch_dir = (const std::string *)(v52.ostr_->buffer_.data_ + 0x4000);
            v40 = &v52.ostr_->buffer_.cur_;
            if ( !*(_BYTE *)(((unsigned __int64)&v52.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
            {
              v41 = v52.ostr_->buffer_.cur_;
              v42 = (int)patch_dir - (int)v41;
              if ( v5[-4].buffer_.cur_ <= (char *)v42 )
                v42 = (size_t)v5[-4].buffer_.cur_;
              memcpy(v41, v5[-4].buffer_.data_, v42);
              v37->buffer_.cur_ += v42;
              common::milog::MiLogStream::~MiLogStream(&v52);
              v27 = -1;
              goto LABEL_105;
            }
            goto LABEL_90;
          }
LABEL_89:
          v40 = &v37->buffer_.data_;
          __asan_report_load8(v37);
LABEL_90:
          isRelyCodeVersionMatched = __asan_report_load8(v40);
          goto LABEL_91;
        }
      }
      __asan_report_load8(v38);
      goto LABEL_89;
    }
LABEL_65:
    common::milog::MiLogStream::MiLogStream(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/hot_patch.cpp",
      "installPendingPatch",
      232);
    v31 = v51.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v51.ostr_ >> 3) + 0x7FFF8000) )
    {
      v32 = v51.ostr_;
      __asan_report_load8(v51.ostr_);
    }
    else
    {
      patch_dir = (const std::string *)(v51.ostr_->buffer_.data_ + 0x4000);
      v32 = (common::milog::MilogStringStream *)&v51.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v51.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        v33 = v51.ostr_->buffer_.cur_;
        patch_dir = (const std::string *)((int)patch_dir - (int)v33);
        if ( (unsigned __int64)patch_dir > 0x3C )
          patch_dir = (const std::string *)61;
        memcpy(v33, "[HotPatch] pending patch and installed patch are same,patch: ", (size_t)patch_dir);
        v31->buffer_.cur_ += (unsigned __int64)patch_dir;
        v31 = v51.ostr_;
        if ( !*(_BYTE *)(((unsigned __int64)v51.ostr_ >> 3) + 0x7FFF8000) )
        {
          patch_dir = (const std::string *)(v51.ostr_->buffer_.data_ + 0x4000);
          v34 = &v51.ostr_->buffer_.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&v51.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          {
            v35 = v51.ostr_->buffer_.cur_;
            v36 = (int)patch_dir - (int)v35;
            if ( v5[-4].buffer_.cur_ <= (char *)v36 )
              v36 = (size_t)v5[-4].buffer_.cur_;
            memcpy(v35, v5[-4].buffer_.data_, v36);
            v31->buffer_.cur_ += v36;
            common::milog::MiLogStream::~MiLogStream(&v51);
            goto LABEL_105;
          }
          goto LABEL_77;
        }
LABEL_76:
        v34 = &v31->buffer_.data_;
        __asan_report_load8(v31);
LABEL_77:
        __asan_report_load8(v34);
        goto LABEL_78;
      }
    }
    __asan_report_load8(v32);
    goto LABEL_76;
  }
  common::milog::MiLogStream::MiLogStream(
    &v53,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/hot_patch.cpp",
    "installPendingPatch",
    213);
  v5 = v53.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v53.ostr_ >> 3) + 0x7FFF8000) )
  {
    v19 = v53.ostr_;
    __asan_report_load8(v53.ostr_);
    goto LABEL_47;
  }
  M_string_length = (size_t)(v53.ostr_->buffer_.data_ + 0x4000);
  v19 = &v53.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v53.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(v19);
LABEL_48:
    __asan_report_load8(v19);
    goto LABEL_49;
  }
  v20 = v53.ostr_->buffer_.cur_;
  v21 = (int)M_string_length - (int)v20;
  if ( v21 > 0x1F )
    v21 = 32LL;
  memcpy(v20, "[HotPatch] patch dir not exists:", v21);
  v5->buffer_.cur_ += v21;
  M_string_length = (size_t)v53.ostr_;
  v19 = &patch_dir->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&patch_dir->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_48;
  v22 = patch_dir->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)patch_dir >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(patch_dir);
    goto LABEL_50;
  }
  v23 = patch_dir->_M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)v53.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    v24 = (char **)M_string_length;
    __asan_report_load8(M_string_length);
    goto LABEL_51;
  }
  patch_dir = (const std::string *)(v53.ostr_->buffer_.data_ + 0x4000);
  v24 = &v53.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v53.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    PendingPatchName = __asan_report_load8(v24);
    goto LABEL_52;
  }
  v25 = v53.ostr_->buffer_.cur_;
  v26 = (int)patch_dir - (int)v25;
  if ( v22 <= v26 )
    v26 = v22;
  memcpy(v25, v23, v26);
  *(_QWORD *)(M_string_length + 8) += v26;
  common::milog::MiLogStream::~MiLogStream(&v53);
  v27 = 0;
LABEL_107:
  if ( v55 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v27;
};

// Line 301: range 0000000019B45086-0000000019B463B4
int32_t __fastcall common::tools::HotPatch::installPatch(const std::string *patch_dir, const std::string *patch_name)
{
  const std::string *v2; // rbx
  _DWORD *v4; // r14
  std::forward_iterator_tag v5; // cl
  char *M_p; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __m128i *v9; // rcx
  __m128i *v10; // rdi
  char v11; // dl
  common::milog::MilogStringStream *ostr; // r12
  void *p_cur; // rdi
  char *cur; // rdi
  size_t v15; // rbx
  char **p_data; // rdi
  char *v17; // rdi
  size_t M_string_length; // rbx
  int32_t PatchFuncMap; // eax
  char *v20; // rax
  common::milog::MilogStringStream *v21; // r12
  void *p_M_string_length; // rdi
  char *v23; // rdi
  size_t v24; // rbx
  char **v25; // rdi
  char *v26; // rdi
  size_t v27; // r12
  common::milog::MilogStringStream *v28; // r12
  void *v29; // rdi
  char *v30; // rdi
  char **v31; // rdi
  char *v32; // rdi
  size_t v33; // rbx
  char *i; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdi
  int32_t v37; // eax
  __int64 v38; // r15
  std::string::size_type v39; // rdi
  void *v40; // rdi
  size_t v41; // r12
  __int64 v42; // r15
  std::string::size_type v43; // rdi
  void *v44; // rdi
  size_t v45; // r12
  unsigned __int64 v46; // rbx
  int v47; // eax
  unsigned __int64 v48; // rdi
  char v49; // al
  char v50; // dl
  unsigned __int64 v51; // rdi
  char v52; // al
  unsigned __int64 v53; // rdi
  char v54; // al
  char v55; // al
  unsigned __int64 v56; // rbx
  pthread_mutex_t *v57; // rdi
  pthread_mutex_t *v58; // rdi
  pthread_mutex_t *v59; // rdi
  common::milog::MilogStringStream *v60; // r12
  common::milog::MilogStringStream *v61; // rdi
  char *v62; // rdi
  size_t v63; // rbx
  std::string::size_type v64; // r12
  std::string::size_type *v65; // rdi
  void *v66; // rdi
  size_t v67; // rbx
  std::string::size_type v68; // rdi
  void *v69; // rdi
  size_t v70; // rbx
  __int64 v71; // rcx
  char *v72; // rdi
  unsigned __int64 v74; // [rsp+10h] [rbp-2D8h]
  void *handle; // [rsp+18h] [rbp-2D0h]
  int32_t v76; // [rsp+24h] [rbp-2C4h]
  common::milog::MiLogStream v77; // [rsp+30h] [rbp-2B8h] BYREF
  common::milog::MiLogStream v78; // [rsp+50h] [rbp-298h] BYREF
  common::milog::MiLogStream v79; // [rsp+70h] [rbp-278h] BYREF
  std::string v80; // [rsp+90h] [rbp-258h] BYREF
  common::milog::MiLogStream v81; // [rsp+B0h] [rbp-238h] BYREF
  std::string v82; // [rsp+D0h] [rbp-218h] BYREF
  boost::thread_exception v83; // [rsp+F0h] [rbp-1F8h] BYREF
  boost::thread_exception v84; // [rsp+130h] [rbp-1B8h] BYREF
  char v85[376]; // [rsp+170h] [rbp-178h] BYREF

  v2 = patch_dir;
  v74 = (unsigned __int64)v85;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(320LL);
    if ( v7 )
      v74 = v7;
  }
  *(_QWORD *)v74 = 1102416563LL;
  *(_QWORD *)(v74 + 8) = "6 48 16 9 timer:303 80 16 8 lock:326 112 16 2 lk 144 16 13 internal_lock 176 32 14 patch_path:3"
                         "04 240 48 18 cache_func_map:316";
  *(_QWORD *)(v74 + 16) = common::tools::HotPatch::installPatch;
  v4 = (_DWORD *)(v74 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  common::tools::HotPatch::printInstalledFuncMap();
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v74 + 48));
  v82._M_dataplus._M_p = v82._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)patch_dir >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(patch_dir);
  }
  else
  {
    M_p = patch_dir->_M_dataplus._M_p;
    patch_dir = (const std::string *)((char *)patch_dir + 8);
    if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
    {
      patch_dir = &v82;
      std::string::_M_construct<char *>(&v82, M_p, &M_p[v2->_M_string_length], v5);
      goto LABEL_9;
    }
  }
  __asan_report_load8(patch_dir);
LABEL_9:
  if ( 0x3FFFFFFFFFFFFFFFLL - v82._M_string_length <= 4 )
  {
    __asan_handle_no_return(patch_dir);
    std::__throw_length_error("basic_string::append");
  }
  std::string::_M_append(&v82, "/lib/", 5LL);
  if ( *(_BYTE *)(((unsigned __int64)&patch_name->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&patch_name->_M_string_length);
  }
  else if ( !*(_BYTE *)(((unsigned __int64)patch_name >> 3) + 0x7FFF8000) )
  {
    v8 = std::string::_M_append(&v82, patch_name->_M_dataplus._M_p, patch_name->_M_string_length);
    goto LABEL_17;
  }
  v8 = __asan_report_load8(patch_name);
LABEL_17:
  *(_QWORD *)(v74 + 176) = v74 + 192;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load8(v8);
  }
  else
  {
    v9 = (__m128i *)(v8 + 16);
    if ( *(_QWORD *)v8 != v8 + 16 )
    {
      *(_QWORD *)(v74 + 176) = *(_QWORD *)v8;
      v10 = (__m128i *)(v8 + 16);
      if ( !*(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v74 + 192) = *(_QWORD *)(v8 + 16);
        goto LABEL_21;
      }
LABEL_32:
      __asan_report_load8(v10);
      goto LABEL_33;
    }
  }
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) <= ((unsigned __int8)v9 & 7)
    || *(_BYTE *)(((v8 + 31) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v8 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v8 + 31) & 7) )
  {
    __asan_report_load_n(v9, 16LL);
    goto LABEL_32;
  }
  *(__m128i *)(v74 + 192) = _mm_loadu_si128((const __m128i *)(v8 + 16));
LABEL_21:
  v10 = (__m128i *)(v8 + 8);
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(v10);
LABEL_34:
    __asan_report_store1(v10);
    goto LABEL_35;
  }
  *(_QWORD *)(v74 + 184) = *(_QWORD *)(v8 + 8);
  *(_QWORD *)v8 = v9;
  *(_QWORD *)(v8 + 8) = 0LL;
  v10 = (__m128i *)(v8 + 16);
  v11 = *(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000);
  if ( v11 <= (char)((v8 + 16) & 7) && v11 )
    goto LABEL_34;
  *(_BYTE *)(v8 + 16) = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v82._M_dataplus._M_p != &v82._anon_0 )
    operator delete(v82._M_dataplus._M_p);
  common::milog::MiLogStream::MiLogStream(
    &v77,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/hot_patch.cpp",
    "installPatch",
    306);
LABEL_35:
  ostr = v77.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v77.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v77.ostr_;
    __asan_report_load8(v77.ostr_);
    goto LABEL_48;
  }
  p_cur = &v77.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v77.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(p_cur);
LABEL_49:
    __asan_report_load8(p_cur);
    goto LABEL_50;
  }
  cur = v77.ostr_->buffer_.cur_;
  v15 = (size_t)&v77.ostr_->buffer_.data_[-(int)cur + 0x4000];
  if ( v15 > 0x1E )
    v15 = 31LL;
  memcpy(cur, "[HotPatch] start install patch:", v15);
  ostr->buffer_.cur_ += v15;
  ostr = v77.ostr_;
  p_cur = &patch_name->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&patch_name->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_49;
  if ( *(_BYTE *)(((unsigned __int64)patch_name >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(patch_name);
    goto LABEL_51;
  }
  if ( *(_BYTE *)(((unsigned __int64)v77.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    p_data = &ostr->buffer_.data_;
    __asan_report_load8(ostr);
    goto LABEL_52;
  }
  p_data = &v77.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v77.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(p_data);
LABEL_53:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v82,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/hot_patch.cpp",
      "installPatch",
      311);
    v20 = dlerror();
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v82,
      "[HotPatch] dlopen error:%s,%s",
      *(const char **)(v74 + 176),
      v20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v82);
    v76 = -1;
    goto LABEL_198;
  }
  v17 = v77.ostr_->buffer_.cur_;
  M_string_length = (size_t)&v77.ostr_->buffer_.data_[-(int)v17 + 0x4000];
  if ( patch_name->_M_string_length <= M_string_length )
    M_string_length = patch_name->_M_string_length;
  memcpy(v17, patch_name->_M_dataplus._M_p, M_string_length);
  ostr->buffer_.cur_ += M_string_length;
  common::milog::MiLogStream::~MiLogStream(&v77);
  handle = dlopen(*(const char **)(v74 + 176), 2);
  if ( !handle )
    goto LABEL_53;
  *(_DWORD *)(v74 + 248) = 0;
  *(_QWORD *)(v74 + 256) = 0LL;
  *(_QWORD *)(v74 + 264) = v74 + 248;
  *(_QWORD *)(v74 + 272) = v74 + 248;
  *(_QWORD *)(v74 + 280) = 0LL;
  PatchFuncMap = common::tools::HotPatch::getPatchFuncMap(
                   handle,
                   patch_name,
                   (std::map<void*,common::tools::HotPatch::HookFunc> *)(v74 + 240));
  v76 = PatchFuncMap;
  if ( !PatchFuncMap )
  {
    *(_QWORD *)(v74 + 80) = &common::tools::HotPatch::mutex;
    boost::shared_mutex::lock(&common::tools::HotPatch::mutex);
    goto LABEL_73;
  }
  dlclose(handle);
  common::milog::MiLogStream::MiLogStream(
    &v78,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/hot_patch.cpp",
    "installPatch",
    320);
  v21 = v78.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v78.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = v78.ostr_;
    __asan_report_load8(v78.ostr_);
    goto LABEL_68;
  }
  M_string_length = (size_t)(v78.ostr_->buffer_.data_ + 0x4000);
  p_M_string_length = &v78.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v78.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(p_M_string_length);
LABEL_69:
    __asan_report_load8(p_M_string_length);
    goto LABEL_70;
  }
  v23 = v78.ostr_->buffer_.cur_;
  v24 = (int)M_string_length - (int)v23;
  if ( v24 > 0x12 )
    v24 = 19LL;
  memcpy(v23, "check patch failed:", v24);
  v21->buffer_.cur_ += v24;
  M_string_length = (size_t)v78.ostr_;
  p_M_string_length = &patch_name->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&patch_name->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_69;
  if ( *(_BYTE *)(((unsigned __int64)patch_name >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load8(patch_name);
    goto LABEL_71;
  }
  if ( !*(_BYTE *)(((unsigned __int64)v78.ostr_ >> 3) + 0x7FFF8000) )
  {
    v25 = &v78.ostr_->buffer_.cur_;
    if ( !*(_BYTE *)(((unsigned __int64)&v78.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
    {
      v26 = v78.ostr_->buffer_.cur_;
      v27 = (size_t)&v78.ostr_->buffer_.data_[-(int)v26 + 0x4000];
      if ( patch_name->_M_string_length <= v27 )
        v27 = patch_name->_M_string_length;
      memcpy(v26, patch_name->_M_dataplus._M_p, v27);
      *(_QWORD *)(M_string_length + 8) += v27;
      common::milog::MiLogStream::~MiLogStream(&v78);
      v76 = -1;
      goto LABEL_197;
    }
    goto LABEL_72;
  }
LABEL_71:
  v25 = (char **)M_string_length;
  __asan_report_load8(M_string_length);
LABEL_72:
  __asan_report_load8(v25);
LABEL_73:
  *(_BYTE *)(v74 + 88) = 1;
  common::milog::MiLogStream::MiLogStream(
    &v79,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/hot_patch.cpp",
    "installPatch",
    327);
  v28 = v79.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v79.ostr_ >> 3) + 0x7FFF8000) )
  {
    v29 = v79.ostr_;
    __asan_report_load8(v79.ostr_);
    goto LABEL_85;
  }
  M_string_length = (size_t)(v79.ostr_->buffer_.data_ + 0x4000);
  v29 = &v79.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v79.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_load8(v29);
LABEL_86:
    __asan_report_load8(v29);
    goto LABEL_87;
  }
  v30 = v79.ostr_->buffer_.cur_;
  M_string_length = (int)M_string_length - (int)v30;
  if ( M_string_length > 0x19 )
    M_string_length = 26LL;
  memcpy(v30, "[HotPatch] get lock succ: ", M_string_length);
  v28->buffer_.cur_ += M_string_length;
  v28 = v79.ostr_;
  v29 = &patch_name->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&patch_name->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_86;
  if ( *(_BYTE *)(((unsigned __int64)patch_name >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_load8(patch_name);
    goto LABEL_88;
  }
  if ( *(_BYTE *)(((unsigned __int64)v79.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    v31 = &v28->buffer_.data_;
    __asan_report_load8(v28);
    goto LABEL_89;
  }
  M_string_length = (size_t)(v79.ostr_->buffer_.data_ + 0x4000);
  v31 = &v79.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v79.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    v35 = __asan_report_load8(v31);
    goto LABEL_90;
  }
  v32 = v79.ostr_->buffer_.cur_;
  v33 = (int)M_string_length - (int)v32;
  if ( patch_name->_M_string_length <= v33 )
    v33 = patch_name->_M_string_length;
  memcpy(v32, patch_name->_M_dataplus._M_p, v33);
  v28->buffer_.cur_ += v33;
  common::milog::MiLogStream::~MiLogStream(&v79);
  for ( i = *(char **)(v74 + 264); ; i = (char *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)M_string_length) )
  {
    M_string_length = (size_t)i;
    if ( i == (char *)(v74 + 248) )
      break;
    v35 = (unsigned __int64)(i + 112);
    if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
    {
LABEL_90:
      v36 = v35;
      __asan_report_load8(v35);
LABEL_91:
      v37 = __asan_report_load8(v36);
      goto LABEL_92;
    }
    v36 = M_string_length + 104;
    if ( *(_BYTE *)(((M_string_length + 104) >> 3) + 0x7FFF8000) )
      goto LABEL_91;
    v37 = common::tools::HotPatch::hotReplaceFunc(*(void **)(M_string_length + 104), *(void **)(M_string_length + 112));
LABEL_92:
    if ( !v37 )
      continue;
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v82,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/hot_patch.cpp",
      "installPatch",
      333);
    v38 = *(&v82._anon_0._M_allocated_capacity + 1);
    v39 = *(&v82._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&v82._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(*(&v82._anon_0._M_allocated_capacity + 1));
    }
    else
    {
      v39 = *(&v82._anon_0._M_allocated_capacity + 1) + 8;
      if ( !*(_BYTE *)(((*(&v82._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      {
        v40 = *(void **)(*(&v82._anon_0._M_allocated_capacity + 1) + 8);
        v41 = **((_DWORD **)&v82._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v40;
        if ( v41 > 0x21 )
          v41 = 34LL;
        memcpy(v40, "[HotPatch] hotReplaceFunc failed: ", v41);
        *(_QWORD *)(v38 + 8) += v41;
        common::tools::HotPatch::HookFunc::debugString[abi:cxx11](
          &v80,
          (common::tools::HotPatch::HookFunc *const)(M_string_length + 40));
        goto LABEL_105;
      }
    }
    __asan_report_load8(v39);
LABEL_105:
    v42 = *(&v82._anon_0._M_allocated_capacity + 1);
    v43 = *(&v82._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&v82._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(*(&v82._anon_0._M_allocated_capacity + 1));
LABEL_113:
      __asan_report_load8(v43);
      break;
    }
    v43 = *(&v82._anon_0._M_allocated_capacity + 1) + 8;
    if ( *(_BYTE *)(((*(&v82._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_113;
    v44 = *(void **)(*(&v82._anon_0._M_allocated_capacity + 1) + 8);
    v45 = **((_DWORD **)&v82._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v44;
    if ( v80._M_string_length <= v45 )
      v45 = v80._M_string_length;
    memcpy(v44, v80._M_dataplus._M_p, v45);
    *(_QWORD *)(v42 + 8) += v45;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v80._M_dataplus._M_p != &v80._anon_0 )
      operator delete(v80._M_dataplus._M_p);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v82);
  }
  if ( !*(_BYTE *)(v74 + 88) )
    goto LABEL_164;
  v46 = *(_QWORD *)(v74 + 80);
  *(_QWORD *)(v74 + 112) = v46 + 8;
  if ( v46 == -8LL )
  {
    boost::thread_exception::thread_exception(&v83, 1, "boost unique_lock has no mutex");
    *(_QWORD *)v83.baseclass_0 = &`vtable for'boost::lock_error + 2;
    __asan_handle_no_return(&v83);
    boost::throw_exception<boost::lock_error>((const boost::lock_error *)&v83);
  }
  v47 = pthread_mutex_lock((pthread_mutex_t *)(v46 + 8));
  if ( v47 )
  {
    boost::thread_exception::thread_exception(&v84, v47, "boost: mutex lock failed in pthread_mutex_lock");
    *(_QWORD *)v84.baseclass_0 = &`vtable for'boost::lock_error + 2;
    __asan_handle_no_return(&v84);
    boost::throw_exception<boost::lock_error>((const boost::lock_error *)&v84);
  }
  *(_BYTE *)(v74 + 120) = 1;
  v48 = v46 + 4;
  v49 = *(_BYTE *)(((v46 + 4) >> 3) + 0x7FFF8000);
  if ( v49 <= (char)((v46 + 4) & 7) && v49 )
  {
    __asan_report_load1(v48);
LABEL_146:
    __asan_handle_no_return(v48);
    __assert_fail(
      "exclusive",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/shared_mutex.hpp",
      0x33u,
      "void boost::shared_mutex::state_data::assert_locked() const");
  }
  if ( !*(_BYTE *)(v46 + 4) )
    goto LABEL_146;
  v50 = *(_BYTE *)((v46 >> 3) + 0x7FFF8000);
  if ( (char)((v46 & 7) + 3) >= v50 && v50 )
  {
    v48 = v46;
    __asan_report_load4(v46);
LABEL_148:
    __asan_handle_no_return(v48);
    __assert_fail(
      "shared_count==0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/shared_mutex.hpp",
      0x34u,
      "void boost::shared_mutex::state_data::assert_locked() const");
  }
  if ( *(_DWORD *)v46 )
    goto LABEL_148;
  v51 = v46 + 5;
  v52 = *(_BYTE *)(((v46 + 5) >> 3) + 0x7FFF8000);
  if ( v52 <= (char)((v46 + 5) & 7) && v52 )
  {
    __asan_report_load1(v51);
LABEL_150:
    __asan_handle_no_return(v51);
    __assert_fail(
      "! upgrade",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/shared_mutex.hpp",
      0x35u,
      "void boost::shared_mutex::state_data::assert_locked() const");
  }
  if ( *(_BYTE *)(v46 + 5) )
    goto LABEL_150;
  v53 = v46 + 4;
  v54 = *(_BYTE *)(((v46 + 4) >> 3) + 0x7FFF8000);
  if ( v54 <= (char)((v46 + 4) & 7) && v54 )
  {
    __asan_report_store1(v53);
LABEL_152:
    __asan_report_store1(v53);
LABEL_153:
    __asan_handle_no_return(v53);
    __assert_fail(
      "! exclusive",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/shared_mutex.hpp",
      0x2Cu,
      "void boost::shared_mutex::state_data::assert_free() const");
  }
  *(_BYTE *)(v46 + 4) = 0;
  v53 = v46 + 6;
  v55 = *(_BYTE *)(((v46 + 6) >> 3) + 0x7FFF8000);
  if ( v55 <= (char)((v46 + 6) & 7) && v55 )
    goto LABEL_152;
  *(_BYTE *)(v46 + 6) = 0;
  if ( *(_BYTE *)(v46 + 4) )
    goto LABEL_153;
  if ( *(_BYTE *)(v46 + 5) )
  {
    __asan_handle_no_return(v53);
    __assert_fail(
      "! upgrade",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/shared_mutex.hpp",
      0x2Du,
      "void boost::shared_mutex::state_data::assert_free() const");
  }
  if ( *(_DWORD *)v46 )
  {
    __asan_handle_no_return(v53);
    __assert_fail(
      "shared_count==0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/shared_mutex.hpp",
      0x2Eu,
      "void boost::shared_mutex::state_data::assert_free() const");
  }
  *(_QWORD *)(v74 + 144) = v46 + 136;
  *(_BYTE *)(v74 + 152) = 1;
  if ( pthread_mutex_lock((pthread_mutex_t *)(v46 + 136)) )
  {
    __asan_handle_no_return(v46 + 136);
    __assert_fail(
      "!posix::pthread_mutex_lock(m)",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/pthread_"
      "mutex_scoped_lock.hpp",
      0x5Fu,
      "boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(pthread_mutex_t*)");
  }
  if ( pthread_cond_signal((pthread_cond_t *)(v46 + 176)) )
  {
    __asan_handle_no_return(v46 + 176);
    __assert_fail(
      "!pthread_cond_signal(&cond)",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/condition_variable.hpp",
      0x95u,
      "void boost::condition_variable::notify_one()");
  }
  if ( *(_BYTE *)(v74 + 152) )
  {
    v58 = *(pthread_mutex_t **)(v74 + 144);
    if ( pthread_mutex_unlock(v58) )
    {
      __asan_handle_no_return(v58);
      __assert_fail(
        "!posix::pthread_mutex_unlock(m)",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/pthrea"
        "d_mutex_scoped_lock.hpp",
        0x63u,
        "void boost::pthread::pthread_mutex_scoped_lock::unlock()");
    }
  }
  v56 = v46 + 48;
  *(_QWORD *)(v74 + 144) = v56;
  *(_BYTE *)(v74 + 152) = 1;
  if ( pthread_mutex_lock((pthread_mutex_t *)v56) )
  {
    __asan_handle_no_return(v56);
    __assert_fail(
      "!posix::pthread_mutex_lock(m)",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/pthread_"
      "mutex_scoped_lock.hpp",
      0x5Fu,
      "boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(pthread_mutex_t*)");
  }
  if ( pthread_cond_broadcast((pthread_cond_t *)(v56 + 40)) )
  {
    __asan_handle_no_return(v56 + 40);
    __assert_fail(
      "!pthread_cond_broadcast(&cond)",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/condition_variable.hpp",
      0x9Du,
      "void boost::condition_variable::notify_all()");
  }
  if ( *(_BYTE *)(v74 + 152) )
  {
    v59 = *(pthread_mutex_t **)(v74 + 144);
    if ( pthread_mutex_unlock(v59) )
    {
      __asan_handle_no_return(v59);
      __assert_fail(
        "!posix::pthread_mutex_unlock(m)",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/pthrea"
        "d_mutex_scoped_lock.hpp",
        0x63u,
        "void boost::pthread::pthread_mutex_scoped_lock::unlock()");
    }
  }
  if ( *(_BYTE *)(v74 + 120) )
  {
    v57 = *(pthread_mutex_t **)(v74 + 112);
    if ( pthread_mutex_unlock(v57) )
    {
      __asan_handle_no_return(v57);
      __assert_fail(
        "res == 0",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/mutex.hpp",
        0x4Eu,
        "void boost::mutex::unlock()");
    }
  }
LABEL_164:
  if ( common::tools::HotPatch::uninstallPatch() )
  {
    common::milog::MiLogStream::MiLogStream(
      &v81,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/hot_patch.cpp",
      "installPatch",
      340);
    v60 = v81.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v81.ostr_ >> 3) + 0x7FFF8000) )
    {
      v61 = v81.ostr_;
      __asan_report_load8(v81.ostr_);
    }
    else
    {
      v61 = (common::milog::MilogStringStream *)&v81.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v81.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        v62 = v81.ostr_->buffer_.cur_;
        v63 = (size_t)&v81.ostr_->buffer_.data_[-(int)v62 + 0x4000];
        if ( v63 > 0x23 )
          v63 = 36LL;
        memcpy(v62, "[HotPatch] uninstall old patch error", v63);
        v60->buffer_.cur_ += v63;
        common::milog::MiLogStream::~MiLogStream(&v81);
        goto LABEL_170;
      }
    }
    __asan_report_load8(v61);
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v82,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/hot_patch.cpp",
    "installPatch",
    344);
  v64 = *(&v82._anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)((*(&v82._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
    v65 = (std::string::size_type *)*(&v82._anon_0._M_allocated_capacity + 1);
    __asan_report_load8(*(&v82._anon_0._M_allocated_capacity + 1));
    goto LABEL_185;
  }
  v65 = (std::string::size_type *)(*(&v82._anon_0._M_allocated_capacity + 1) + 8);
  if ( *(_BYTE *)(((*(&v82._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_185:
    __asan_report_load8(v65);
LABEL_186:
    __asan_report_load8(v65);
    goto LABEL_187;
  }
  v66 = *(void **)(*(&v82._anon_0._M_allocated_capacity + 1) + 8);
  v67 = **((_DWORD **)&v82._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v66;
  if ( v67 > 0x24 )
    v67 = 37LL;
  memcpy(v66, "[HotPatch] uninstall old patch succ: ", v67);
  *(_QWORD *)(v64 + 8) += v67;
  v64 = *(&v82._anon_0._M_allocated_capacity + 1);
  v65 = &common::tools::HotPatch::installed_patch_context.patch_name._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.patch_name._M_string_length >> 3)
                + 0x7FFF8000) )
    goto LABEL_186;
  v65 = (std::string::size_type *)&common::tools::HotPatch::installed_patch_context;
  if ( *(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context >> 3) + 0x7FFF8000) )
  {
LABEL_187:
    __asan_report_load8(v65);
    goto LABEL_188;
  }
  if ( *(_BYTE *)((*(&v82._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_188:
    v68 = v64;
    __asan_report_load8(v64);
    goto LABEL_189;
  }
  v68 = *(&v82._anon_0._M_allocated_capacity + 1) + 8;
  if ( *(_BYTE *)(((*(&v82._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_189:
    __asan_report_load8(v68);
    goto LABEL_190;
  }
  v69 = *(void **)(*(&v82._anon_0._M_allocated_capacity + 1) + 8);
  v70 = **((_DWORD **)&v82._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v69;
  if ( common::tools::HotPatch::installed_patch_context.patch_name._M_string_length <= v70 )
    v70 = common::tools::HotPatch::installed_patch_context.patch_name._M_string_length;
  memcpy(v69, common::tools::HotPatch::installed_patch_context.patch_name._M_dataplus._M_p, v70);
  *(_QWORD *)(v64 + 8) += v70;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v82);
LABEL_170:
  std::string::_M_assign(&common::tools::HotPatch::installed_patch_context, patch_name);
LABEL_190:
  if ( *(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.handle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&common::tools::HotPatch::installed_patch_context.handle);
  }
  else
  {
    common::tools::HotPatch::installed_patch_context.handle = handle;
    std::_Rb_tree<void *,std::pair<void * const,common::tools::HotPatch::HookFunc>,std::_Select1st<std::pair<void * const,common::tools::HotPatch::HookFunc>>,std::less<void *>,std::allocator<std::pair<void * const,common::tools::HotPatch::HookFunc>>>::operator=(
      &common::tools::HotPatch::installed_patch_context.func_map._M_t,
      (const std::_Rb_tree<void*,std::pair<void* const,common::tools::HotPatch::HookFunc>,std::_Select1st<std::pair<void* const,common::tools::HotPatch::HookFunc> >,std::less<void*>,std::allocator<std::pair<void* const,common::tools::HotPatch::HookFunc> > > *)(v74 + 240));
  }
  common::tools::HotPatch::printInstalledFuncMap();
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v82,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/hot_patch.cpp",
    "installPatch",
    353);
  v71 = (unsigned int)(common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v74 + 48))
                     / 1000);
  if ( *(_BYTE *)(((unsigned __int64)patch_name >> 3) + 0x7FFF8000) )
    __asan_report_load8(patch_name);
  else
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v82,
      "[HotPatch] new patch:%s installed succ,timecost:%dms",
      patch_name->_M_dataplus._M_p,
      v71);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v82);
LABEL_197:
  std::_Rb_tree<void *,std::pair<void * const,common::tools::HotPatch::HookFunc>,std::_Select1st<std::pair<void * const,common::tools::HotPatch::HookFunc>>,std::less<void *>,std::allocator<std::pair<void * const,common::tools::HotPatch::HookFunc>>>::_M_erase(
    (std::_Rb_tree<void*,std::pair<void* const,common::tools::HotPatch::HookFunc>,std::_Select1st<std::pair<void* const,common::tools::HotPatch::HookFunc> >,std::less<void*>,std::allocator<std::pair<void* const,common::tools::HotPatch::HookFunc> > > *const)(v74 + 240),
    *(std::_Rb_tree<void*,std::pair<void* const,common::tools::HotPatch::HookFunc>,std::_Select1st<std::pair<void* const,common::tools::HotPatch::HookFunc> >,std::less<void*>,std::allocator<std::pair<void* const,common::tools::HotPatch::HookFunc> > >::_Link_type *)(v74 + 256));
LABEL_198:
  v72 = *(char **)(v74 + 176);
  if ( v72 != (char *)(v74 + 192) )
    operator delete(v72);
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v74 + 48));
  if ( v85 == (char *)v74 )
  {
    *(_QWORD *)((v74 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v74 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v74 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v74 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v74 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v74 = 1172321806LL;
    *(_QWORD *)((v74 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v74 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v74 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v74 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v74 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v76;
};

// Line 358: range 0000000019B43874-0000000019B44C98
bool __fastcall common::tools::HotPatch::isRelyCodeVersionMatched(
        const std::string *patch_name,
        const std::string *app_rely_code_version)
{
  unsigned __int64 v3; // rbx
  std::forward_iterator_tag v4; // cl
  char *M_p; // rsi
  std::string *v6; // rdi
  __int64 v7; // rbp
  std::string::size_type v8; // rdi
  void *v9; // rdi
  size_t v10; // rbx
  __int64 v12; // r12
  std::string::pointer v13; // rsi
  std::string::size_type *v14; // r13
  std::string::size_type *p_M_string_length; // rdi
  void *v16; // rdi
  size_t v17; // r12
  const std::string *M_string_length; // rax
  std::string::size_type v19; // rdi
  void *v20; // rdi
  std::string::size_type v21; // rdi
  void *v22; // rdi
  size_t v23; // rbp
  size_t v24; // rax
  std::string *v25; // rdi
  void *v26; // rdi
  size_t v27; // rbx
  std::string::size_type *v28; // rdi
  void *v29; // rdi
  size_t v30; // r12
  const std::string *v31; // rax
  std::string::size_type v32; // rdi
  void *v33; // rdi
  std::string::size_type v34; // rdi
  void *v35; // rdi
  size_t v36; // rbp
  size_t v37; // rax
  const std::string *v38; // rdi
  void *v39; // rdi
  size_t v40; // rbx
  std::map<void*,common::tools::HotPatch::HookFunc> *v41; // rdx
  std::string v42[2]; // [rsp+0h] [rbp-48h] BYREF

  v3 = (unsigned __int64)app_rely_code_version;
  if ( (unsigned int)std::string::compare(app_rely_code_version, &unk_1B5CA060) )
  {
    v42[0]._M_dataplus._M_p = v42[0]._anon_0._M_local_buf;
    if ( !*(_BYTE *)(((unsigned __int64)app_rely_code_version >> 3) + 0x7FFF8000) )
    {
      M_p = app_rely_code_version->_M_dataplus._M_p;
      v6 = (std::string *)(v3 + 8);
      if ( !*(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
      {
        v6 = v42;
        std::string::_M_construct<char *>(v42, M_p, &M_p[*(_QWORD *)(v3 + 8)], v4);
        if ( v42[0]._M_string_length != 0x3FFFFFFFFFFFFFFFLL )
        {
          std::string::_M_append(v42, "_", 1LL);
          v12 = std::string::find(patch_name, v42[0]._M_dataplus._M_p, 0LL, v42[0]._M_string_length);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v42[0]._M_dataplus._M_p != &v42[0]._anon_0 )
            operator delete(v42[0]._M_dataplus._M_p);
          if ( v12 != -1 )
          {
            v13 = (std::string::pointer)&common::milog::MiLogDefault::default_log_obj_;
            common::milog::MiLogStream::MiLogStream(
              (common::milog::MiLogStream *const)v42,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "src/hot_patch.cpp",
              "isRelyCodeVersionMatched",
              371);
            v14 = (std::string::size_type *)*(&v42[0]._anon_0._M_allocated_capacity + 1);
            if ( !*(_BYTE *)((*(&v42[0]._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
            {
              v12 = **((_QWORD **)&v42[0]._anon_0._M_allocated_capacity + 1) + 0x4000LL;
              p_M_string_length = (std::string::size_type *)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
              if ( !*(_BYTE *)(((*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
              {
                v16 = *(void **)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
                v17 = (int)v12 - (int)v16;
                if ( v17 > 0x2E )
                  v17 = 47LL;
                v13 = "[HotPatch] rely_code_version match patch_name: ";
                memcpy(v16, "[HotPatch] rely_code_version match patch_name: ", v17);
                v14[1] += v17;
                v12 = *(&v42[0]._anon_0._M_allocated_capacity + 1);
                p_M_string_length = &patch_name->_M_string_length;
                if ( !*(_BYTE *)(((unsigned __int64)&patch_name->_M_string_length >> 3) + 0x7FFF8000) )
                {
                  M_string_length = (const std::string *)patch_name->_M_string_length;
                  if ( !*(_BYTE *)(((unsigned __int64)patch_name >> 3) + 0x7FFF8000) )
                  {
                    v13 = patch_name->_M_dataplus._M_p;
                    if ( !*(_BYTE *)((*(&v42[0]._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
                    {
                      patch_name = (const std::string *)(**((_QWORD **)&v42[0]._anon_0._M_allocated_capacity + 1)
                                                       + 0x4000LL);
                      v19 = *(&v42[0]._anon_0._M_allocated_capacity + 1) + 8;
                      if ( !*(_BYTE *)(((*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                      {
                        v20 = *(void **)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
                        patch_name = (const std::string *)((int)patch_name - (int)v20);
                        if ( M_string_length <= patch_name )
                          patch_name = M_string_length;
                        memcpy(v20, v13, (size_t)patch_name);
                        *(_QWORD *)(v12 + 8) += patch_name;
                        v12 = *(&v42[0]._anon_0._M_allocated_capacity + 1);
                        if ( !*(_BYTE *)((*(&v42[0]._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
                        {
                          patch_name = (const std::string *)(**((_QWORD **)&v42[0]._anon_0._M_allocated_capacity + 1)
                                                           + 0x4000LL);
                          v21 = *(&v42[0]._anon_0._M_allocated_capacity + 1) + 8;
                          if ( !*(_BYTE *)(((*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                          {
                            v22 = *(void **)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
                            v23 = (int)patch_name - (int)v22;
                            if ( v23 > 0xE )
                              v23 = 15LL;
                            v13 = " rely_version: ";
                            memcpy(v22, " rely_version: ", v23);
                            *(_QWORD *)(v12 + 8) += v23;
                            patch_name = (const std::string *)*(&v42[0]._anon_0._M_allocated_capacity + 1);
                            v21 = v3 + 8;
                            if ( !*(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
                            {
                              v24 = *(_QWORD *)(v3 + 8);
                              if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                              {
                                v13 = *(std::string::pointer *)v3;
                                if ( !*(_BYTE *)((*(&v42[0]._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
                                {
                                  v25 = (std::string *)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
                                  if ( !*(_BYTE *)(((*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                                  {
                                    v26 = *(void **)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
                                    v27 = **((_DWORD **)&v42[0]._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v26;
                                    if ( v24 <= v27 )
                                      v27 = v24;
                                    memcpy(v26, v13, v27);
                                    patch_name->_M_string_length += v27;
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v42);
                                    return 1;
                                  }
LABEL_84:
                                  __asan_report_load8(v25);
                                  return common::tools::HotPatch::getPatchFuncMap(v25, (const std::string *)v13, v41);
                                }
LABEL_83:
                                v25 = (std::string *)patch_name;
                                __asan_report_load8(patch_name);
                                goto LABEL_84;
                              }
LABEL_82:
                              __asan_report_load8(v3);
                              goto LABEL_83;
                            }
LABEL_81:
                            __asan_report_load8(v21);
                            goto LABEL_82;
                          }
LABEL_80:
                          __asan_report_load8(v21);
                          goto LABEL_81;
                        }
LABEL_79:
                        v21 = v12;
                        __asan_report_load8(v12);
                        goto LABEL_80;
                      }
LABEL_78:
                      __asan_report_load8(v19);
                      goto LABEL_79;
                    }
LABEL_77:
                    v19 = v12;
                    __asan_report_load8(v12);
                    goto LABEL_78;
                  }
LABEL_76:
                  __asan_report_load8(patch_name);
                  goto LABEL_77;
                }
LABEL_75:
                __asan_report_load8(p_M_string_length);
                goto LABEL_76;
              }
LABEL_74:
              __asan_report_load8(p_M_string_length);
              goto LABEL_75;
            }
LABEL_73:
            p_M_string_length = v14;
            __asan_report_load8(v14);
            goto LABEL_74;
          }
          v13 = (std::string::pointer)&common::milog::MiLogDefault::default_log_obj_;
          common::milog::MiLogStream::MiLogStream(
            (common::milog::MiLogStream *const)v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "src/hot_patch.cpp",
            "isRelyCodeVersionMatched",
            366);
          v14 = (std::string::size_type *)*(&v42[0]._anon_0._M_allocated_capacity + 1);
          if ( *(_BYTE *)((*(&v42[0]._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
          {
            v28 = (std::string::size_type *)*(&v42[0]._anon_0._M_allocated_capacity + 1);
            __asan_report_load8(*(&v42[0]._anon_0._M_allocated_capacity + 1));
          }
          else
          {
            v12 = **((_QWORD **)&v42[0]._anon_0._M_allocated_capacity + 1) + 0x4000LL;
            v28 = (std::string::size_type *)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
            if ( !*(_BYTE *)(((*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            {
              v29 = *(void **)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
              v30 = (int)v12 - (int)v29;
              if ( v30 > 0x34 )
                v30 = 53LL;
              v13 = "[HotPatch] rely_code_version donot match patch_name: ";
              memcpy(v29, "[HotPatch] rely_code_version donot match patch_name: ", v30);
              v14[1] += v30;
              v12 = *(&v42[0]._anon_0._M_allocated_capacity + 1);
              v28 = &patch_name->_M_string_length;
              if ( !*(_BYTE *)(((unsigned __int64)&patch_name->_M_string_length >> 3) + 0x7FFF8000) )
              {
                v31 = (const std::string *)patch_name->_M_string_length;
                if ( !*(_BYTE *)(((unsigned __int64)patch_name >> 3) + 0x7FFF8000) )
                {
                  v13 = patch_name->_M_dataplus._M_p;
                  if ( !*(_BYTE *)((*(&v42[0]._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
                  {
                    patch_name = (const std::string *)(**((_QWORD **)&v42[0]._anon_0._M_allocated_capacity + 1)
                                                     + 0x4000LL);
                    v32 = *(&v42[0]._anon_0._M_allocated_capacity + 1) + 8;
                    if ( !*(_BYTE *)(((*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                    {
                      v33 = *(void **)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
                      patch_name = (const std::string *)((int)patch_name - (int)v33);
                      if ( v31 <= patch_name )
                        patch_name = v31;
                      memcpy(v33, v13, (size_t)patch_name);
                      *(_QWORD *)(v12 + 8) += patch_name;
                      v12 = *(&v42[0]._anon_0._M_allocated_capacity + 1);
                      if ( !*(_BYTE *)((*(&v42[0]._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
                      {
                        patch_name = (const std::string *)(**((_QWORD **)&v42[0]._anon_0._M_allocated_capacity + 1)
                                                         + 0x4000LL);
                        v34 = *(&v42[0]._anon_0._M_allocated_capacity + 1) + 8;
                        if ( !*(_BYTE *)(((*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                        {
                          v35 = *(void **)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
                          v36 = (int)patch_name - (int)v35;
                          if ( v36 > 0xE )
                            v36 = 15LL;
                          v13 = " rely_version: ";
                          memcpy(v35, " rely_version: ", v36);
                          *(_QWORD *)(v12 + 8) += v36;
                          patch_name = (const std::string *)*(&v42[0]._anon_0._M_allocated_capacity + 1);
                          v34 = v3 + 8;
                          if ( !*(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
                          {
                            v37 = *(_QWORD *)(v3 + 8);
                            if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                            {
                              v13 = *(std::string::pointer *)v3;
                              if ( !*(_BYTE *)((*(&v42[0]._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
                              {
                                v3 = **((_QWORD **)&v42[0]._anon_0._M_allocated_capacity + 1) + 0x4000LL;
                                v38 = (const std::string *)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
                                if ( !*(_BYTE *)(((*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                                {
                                  v39 = *(void **)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
                                  v40 = (int)v3 - (int)v39;
                                  if ( v37 <= v40 )
                                    v40 = v37;
                                  memcpy(v39, v13, v40);
                                  patch_name->_M_string_length += v40;
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v42);
                                  return 0;
                                }
LABEL_72:
                                __asan_report_load8(v38);
                                goto LABEL_73;
                              }
LABEL_71:
                              v38 = patch_name;
                              __asan_report_load8(patch_name);
                              goto LABEL_72;
                            }
LABEL_70:
                            __asan_report_load8(v3);
                            goto LABEL_71;
                          }
LABEL_69:
                          __asan_report_load8(v34);
                          goto LABEL_70;
                        }
LABEL_68:
                        __asan_report_load8(v34);
                        goto LABEL_69;
                      }
LABEL_67:
                      v34 = v12;
                      __asan_report_load8(v12);
                      goto LABEL_68;
                    }
LABEL_66:
                    __asan_report_load8(v32);
                    goto LABEL_67;
                  }
LABEL_65:
                  v32 = v12;
                  __asan_report_load8(v12);
                  goto LABEL_66;
                }
LABEL_64:
                __asan_report_load8(patch_name);
                goto LABEL_65;
              }
LABEL_63:
              __asan_report_load8(v28);
              goto LABEL_64;
            }
          }
          __asan_report_load8(v28);
          goto LABEL_63;
        }
LABEL_15:
        __asan_handle_no_return(v6);
        std::__throw_length_error("basic_string::append");
      }
LABEL_14:
      __asan_report_load8(v6);
      goto LABEL_15;
    }
LABEL_13:
    v6 = (std::string *)v3;
    __asan_report_load8(v3);
    goto LABEL_14;
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)v42,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/hot_patch.cpp",
    "isRelyCodeVersionMatched",
    361);
  v7 = *(&v42[0]._anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)((*(&v42[0]._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
    v8 = *(&v42[0]._anon_0._M_allocated_capacity + 1);
    __asan_report_load8(*(&v42[0]._anon_0._M_allocated_capacity + 1));
    goto LABEL_12;
  }
  v3 = **((_QWORD **)&v42[0]._anon_0._M_allocated_capacity + 1) + 0x4000LL;
  v8 = *(&v42[0]._anon_0._M_allocated_capacity + 1) + 8;
  if ( *(_BYTE *)(((*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(v8);
    goto LABEL_13;
  }
  v9 = *(void **)(*(&v42[0]._anon_0._M_allocated_capacity + 1) + 8);
  v10 = (int)v3 - (int)v9;
  if ( v10 > 0x1C )
    v10 = 29LL;
  memcpy(v9, "[HotPatch] rely_version empty", v10);
  *(_QWORD *)(v7 + 8) += v10;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v42);
  return 0;
};

// Line 376: range 0000000019B4752F-0000000019B47546
void __cdecl GLOBAL__sub_I_hot_patch_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 376: range 0000000019B417A8-0000000019B42452
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  common::tools::HotPatch::InstalledPatchContext *p_M_string_length; // rdi
  char v3; // al

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/hot_patch.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    boost::shared_mutex::shared_mutex(&common::tools::HotPatch::mutex);
    __cxa_atexit(
      (void (__fastcall *)(void *))boost::shared_mutex::~shared_mutex,
      &common::tools::HotPatch::mutex,
      &_dso_handle);
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context >> 3) + 0x7FFF8000) )
    {
      p_M_string_length = &common::tools::HotPatch::installed_patch_context;
      __asan_report_store8(&common::tools::HotPatch::installed_patch_context);
    }
    else
    {
      common::tools::HotPatch::installed_patch_context.patch_name._M_dataplus._M_p = common::tools::HotPatch::installed_patch_context.patch_name._anon_0._M_local_buf;
      p_M_string_length = (common::tools::HotPatch::InstalledPatchContext *)&common::tools::HotPatch::installed_patch_context.patch_name._M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.patch_name._M_string_length >> 3)
                     + 0x7FFF8000) )
      {
        common::tools::HotPatch::installed_patch_context.patch_name._M_string_length = 0LL;
        p_M_string_length = (common::tools::HotPatch::InstalledPatchContext *)&common::tools::HotPatch::installed_patch_context.patch_name._anon_0;
        if ( *(char *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.patch_name._anon_0 >> 3)
                     + 0x7FFF8000) >= 0 )
        {
          common::tools::HotPatch::installed_patch_context.patch_name._anon_0._M_local_buf[0] = 0;
          p_M_string_length = (common::tools::HotPatch::InstalledPatchContext *)&common::tools::HotPatch::installed_patch_context.handle;
          if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.handle >> 3) + 0x7FFF8000) )
          {
            common::tools::HotPatch::installed_patch_context.handle = 0LL;
            p_M_string_length = (common::tools::HotPatch::InstalledPatchContext *)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl.std::_Rb_tree_header;
            v3 = *(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl.std::_Rb_tree_header >> 3)
                          + 0x7FFF8000);
            if ( !v3 || v3 > 3 )
            {
              common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_color = _S_red;
              p_M_string_length = (common::tools::HotPatch::InstalledPatchContext *)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_parent;
              if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_parent >> 3)
                             + 0x7FFF8000) )
              {
                common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_parent = 0LL;
                p_M_string_length = (common::tools::HotPatch::InstalledPatchContext *)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left;
                if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left >> 3)
                               + 0x7FFF8000) )
                {
                  common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_left = &common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header;
                  p_M_string_length = (common::tools::HotPatch::InstalledPatchContext *)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_right;
                  if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_right >> 3)
                                 + 0x7FFF8000) )
                  {
                    common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header._M_right = &common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_header;
                    p_M_string_length = (common::tools::HotPatch::InstalledPatchContext *)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_node_count;
                    if ( !*(_BYTE *)(((unsigned __int64)&common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_node_count >> 3)
                                   + 0x7FFF8000) )
                    {
                      common::tools::HotPatch::installed_patch_context.func_map._M_t._M_impl._M_node_count = 0LL;
                      __cxa_atexit(
                        (void (__fastcall *)(void *))common::tools::HotPatch::InstalledPatchContext::~InstalledPatchContext,
                        &common::tools::HotPatch::installed_patch_context,
                        &_dso_handle);
                      if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
                        goto LABEL_3;
                      `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
                      if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                                     + 0x7FFF8000) )
                      {
                        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                                             + 9;
                        goto LABEL_3;
                      }
LABEL_26:
                      __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
                      JUMPOUT(0x19B41A11LL);
                    }
LABEL_25:
                    __asan_report_store8(p_M_string_length);
                    goto LABEL_26;
                  }
LABEL_24:
                  __asan_report_store8(p_M_string_length);
                  goto LABEL_25;
                }
LABEL_23:
                __asan_report_store8(p_M_string_length);
                goto LABEL_24;
              }
LABEL_22:
              __asan_report_store8(p_M_string_length);
              goto LABEL_23;
            }
LABEL_21:
            __asan_report_store4(p_M_string_length);
            goto LABEL_22;
          }
LABEL_20:
          __asan_report_store8(p_M_string_length);
          goto LABEL_21;
        }
LABEL_19:
        __asan_report_store1(p_M_string_length);
        goto LABEL_20;
      }
    }
    __asan_report_store8(p_M_string_length);
    goto LABEL_19;
  }
};
