// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/db/mysql_op_base.cpp

// Line 20: range 00000000157AB557-00000000157AB82F
void __fastcall populate_TableNameData<(mysqlpp::sql_dummy_type)0>(TableNameData *s, const mysqlpp::Row *row)
{
  bool exceptions; // r12
  std::string::size_type M_allocated_capacity; // r13
  TableNameData *v4; // rbx
  const mysqlpp::String *v6; // rax
  TableNameData *M_p; // rsi
  __int64 p_M_allocated_capacity; // rax
  void *p_exceptions; // rdi
  char v10; // al
  std::string::size_type M_string_length; // rdi
  __int64 p_M_string_length; // rax
  unsigned __int64 v13; // rdi
  char v14; // al
  char v15; // al
  char v16; // al
  struct _Unwind_Exception *v17; // rbx
  bool *v18; // rdi
  std::string v19; // [rsp+0h] [rbp-68h] BYREF
  std::string v20; // [rsp+20h] [rbp-48h] BYREF

  v4 = s;
  if ( *(char *)(((unsigned __int64)&row->exceptions_ >> 3) + 0x7FFF8000) < 0 )
  {
    v6 = (const mysqlpp::String *)__asan_report_load1(&row->exceptions_);
  }
  else
  {
    exceptions = row->exceptions_;
    row->exceptions_ = 0;
    v6 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  }
  M_p = (TableNameData *)v6;
  v19._M_dataplus._M_p = v19._anon_0._M_local_buf;
  v19._M_string_length = 0LL;
  v19._anon_0._M_local_buf[0] = 0;
  mysqlpp::String::conv<std::string>(&v20, v6, v19);
  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(s, M_p);
LABEL_22:
    if ( !v20._M_string_length )
      goto LABEL_25;
    if ( v20._M_string_length != 1 )
    {
      memcpy(s, M_p, v20._M_string_length);
      goto LABEL_25;
    }
    v15 = *(_BYTE *)(((unsigned __int64)M_p >> 3) + 0x7FFF8000);
    if ( v15 <= ((unsigned __int8)M_p & 7) && v15 )
    {
      s = M_p;
      __asan_report_load1(M_p);
    }
    else
    {
      v16 = *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000);
      if ( v16 > ((unsigned __int8)s & 7) || !v16 )
      {
        LOBYTE(s->table_name._M_dataplus._M_p) = M_p->table_name._M_dataplus._M_p;
LABEL_25:
        M_string_length = v20._M_string_length;
        p_M_string_length = (__int64)&v4->table_name._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&v4->table_name._M_string_length >> 3) + 0x7FFF8000) )
        {
          v4->table_name._M_string_length = v20._M_string_length;
          v13 = (unsigned __int64)&v4->table_name._M_dataplus._M_p[M_string_length];
          v14 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
          if ( v14 > (char)(v13 & 7) || !v14 )
          {
            *(_BYTE *)v13 = 0;
            goto LABEL_13;
          }
          goto LABEL_37;
        }
LABEL_36:
        v13 = p_M_string_length;
        __asan_report_store8();
LABEL_37:
        p_M_allocated_capacity = __asan_report_store1(v13);
LABEL_38:
        __asan_report_load8(p_M_allocated_capacity, M_p);
        goto LABEL_39;
      }
    }
    p_M_string_length = __asan_report_store1(s);
    goto LABEL_36;
  }
  s = (TableNameData *)s->table_name._M_dataplus._M_p;
  M_p = (TableNameData *)v20._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p == &v20._anon_0 )
    goto LABEL_22;
  if ( s != (TableNameData *)&v4->table_name._anon_0 )
  {
    p_M_allocated_capacity = (__int64)&v4->table_name._anon_0._M_allocated_capacity;
    if ( !*(_BYTE *)(((unsigned __int64)&v4->table_name._anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = v4->table_name._anon_0._M_allocated_capacity;
      goto LABEL_9;
    }
    goto LABEL_38;
  }
LABEL_39:
  s = 0LL;
LABEL_9:
  v4->table_name._M_dataplus._M_p = (std::string::pointer)M_p;
  if ( *(_BYTE *)(((unsigned __int64)&v4->table_name._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_41;
  }
  v4->table_name._M_string_length = v20._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v4->table_name._anon_0 >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8();
    goto LABEL_42;
  }
  v4->table_name._anon_0._M_allocated_capacity = v20._anon_0._M_allocated_capacity;
  if ( !s )
  {
LABEL_42:
    v20._M_dataplus._M_p = v20._anon_0._M_local_buf;
    goto LABEL_13;
  }
  v20._M_dataplus._M_p = (std::string::pointer)s;
  v20._anon_0._M_allocated_capacity = M_allocated_capacity;
LABEL_13:
  v20._M_string_length = 0LL;
  p_exceptions = v20._M_dataplus._M_p;
  v10 = *(_BYTE *)(((unsigned __int64)v20._M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v10 <= ((__int64)v20._M_dataplus._M_p & 7) && v10 )
  {
    __asan_report_store1(v20._M_dataplus._M_p);
    goto LABEL_44;
  }
  *v20._M_dataplus._M_p = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p != &v20._anon_0 )
    operator delete(v20._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19._M_dataplus._M_p != &v19._anon_0 )
    operator delete(v19._M_dataplus._M_p);
  p_exceptions = &row->exceptions_;
  if ( *(char *)(((unsigned __int64)&row->exceptions_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_44:
    v17 = (struct _Unwind_Exception *)__asan_report_store1(p_exceptions);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19._M_dataplus._M_p != &v19._anon_0 )
      operator delete(v19._M_dataplus._M_p);
    while ( 1 )
    {
      v18 = &row->exceptions_;
      if ( *(char *)(((unsigned __int64)&row->exceptions_ >> 3) + 0x7FFF8000) >= 0 )
        break;
      v17 = (struct _Unwind_Exception *)__asan_report_store1(v18);
    }
    row->exceptions_ = exceptions;
    __asan_handle_no_return(v18);
    _Unwind_Resume(v17);
  }
  row->exceptions_ = exceptions;
};

// Line 80: range 00000000157AB501-00000000157AB518
void __cdecl GLOBAL__sub_I_mysql_op_base_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 80: range 00000000157A9DB4-00000000157AB4FC
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/db/mysql_op_base.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      {
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
        {
          __asan_report_store8();
          JUMPOUT(0x157A9E63LL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
