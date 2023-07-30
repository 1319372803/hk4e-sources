// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/random/detail/seed_impl.hpp

// Line 266: range 0000000019B69096-0000000019B69365
void __fastcall boost::random::detail::seed_array_int_impl<32,624ul,boost::uuids::detail::random_provider,unsigned int>(
        boost::uuids::detail::random_provider *seq,
        unsigned int (*x)[624])
{
  intmax_t v2; // r14
  unsigned __int64 v4; // r15
  char *v5; // rbp
  char *i; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  int *v10; // rax
  boost::uuids::entropy_error *v11; // rdi
  char v12; // cl
  unsigned __int64 j; // rdx
  char v14; // cl
  __int64 v15; // rax
  unsigned int v16; // esi
  unsigned __int64 v17; // rdi
  char v18; // r9
  _DWORD *v19; // [rsp+8h] [rbp-AE0h]
  boost::uuids::entropy_error v20; // [rsp+10h] [rbp-AD8h] BYREF
  std::string v21; // [rsp+30h] [rbp-AB8h] BYREF
  char v22[2712]; // [rsp+50h] [rbp-A98h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_6(2656LL);
    if ( v7 )
      v4 = v7;
  }
  v5 = (char *)(v4 + 2656);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 2496 11 storage:268";
  *(_QWORD *)(v4 + 16) = boost::random::detail::seed_array_int_impl<32,624ul,boost::uuids::detail::random_provider,unsigned int>;
  v19 = (_DWORD *)(v4 >> 3);
  v19[536862720] = -235802127;
  v19[536862799] = -202116109;
  v19[536862800] = -202116109;
  v19[536862801] = -202116109;
  v19[536862802] = -202116109;
  for ( i = (char *)(v4 + 32); i != (char *)(v4 + 2528); i += 4 )
  {
    v8 = 0LL;
    while ( v8 <= 3 )
    {
      v9 = syscall(318LL, &i[v8], 4 - v8, 0LL);
      if ( v9 >= 0 )
      {
        v8 += v9;
      }
      else
      {
        v10 = __errno_location();
        v11 = (boost::uuids::entropy_error *)v10;
        v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v10 & 7) + 3) >= v12 && v12 )
        {
          __asan_report_load4(v10);
          goto LABEL_6;
        }
        v2 = (unsigned int)*v10;
        if ( (_DWORD)v2 != 4 )
        {
          v21._M_dataplus._M_p = v21._anon_0._M_local_buf;
          std::string::_M_construct<char const*>(
            &v21,
            &byte_1B5CF5C9[-9],
            byte_1B5CF5C9,
            (std::forward_iterator_tag)v12);
          v2 = (int)v2;
          v11 = &v20;
          std::runtime_error::runtime_error(&v20, &v21);
LABEL_6:
          *(_QWORD *)v20.baseclass_0 = &`vtable for'boost::uuids::entropy_error + 2;
          v20.m_errcode = v2;
          __asan_handle_no_return(v11);
          boost::exception_detail::throw_exception_<boost::uuids::entropy_error>(
            &v20,
            "void boost::uuids::detail::random_provider_base::get_random_bytes(void*, std::size_t)",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/uuid/detail/rando"
            "m_provider_getrandom.ipp",
            55);
        }
      }
    }
  }
  for ( j = 0LL; j <= 0x26F; ++j )
  {
    v15 = 0LL;
    v16 = 0;
    while ( !v15 )
    {
      v17 = (unsigned __int64)&v5[4 * j - 2624];
      v18 = *(_BYTE *)((v17 >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v5 + 4 * j - 64) & 7) + 3) >= v18 && v18 )
      {
        __asan_report_load4(v17);
        break;
      }
      v16 += *(_DWORD *)&v5[4 * j - 2624];
      v15 = 1LL;
    }
    v14 = *(_BYTE *)(((unsigned __int64)&(*x)[j] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)x + 4 * j) & 7) + 3) >= v14 && v14 )
    {
      __asan_report_store4(&(*x)[j]);
      break;
    }
    (*x)[j] = v16;
  }
  if ( v22 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF813C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8144) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_6(v4, 2656LL, v22);
  }
};
