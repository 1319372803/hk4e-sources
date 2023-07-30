// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_error.c

// Line 72: range 000000000CFBA110-000000000CFBA258
void my_error(int nr, myf MyFlags, ...)
{
  my_err_head *v2; // rbx
  const char *v3; // rcx
  va_list args; // [rsp+8h] [rbp-2E0h] BYREF
  char ebuff[512]; // [rsp+20h] [rbp-2C8h] BYREF

  v2 = my_errmsgs_list;
  if ( my_errmsgs_list )
  {
    if ( nr > my_errmsgs_list->meh_last )
    {
      while ( 1 )
      {
        v2 = v2->meh_next;
        if ( !v2 )
          break;
        if ( v2->meh_last >= nr )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( nr >= v2->meh_first )
      {
        v3 = v2->get_errmsgs()[nr - v2->meh_first];
        if ( v3 )
        {
          if ( *v3 )
          {
            va_start(args, MyFlags);
            my_vsnprintf_ex(&my_charset_utf8_general_ci, ebuff, 0x200uLL, v3, (__va_list_tag *)args);
            goto LABEL_7;
          }
        }
      }
    }
  }
  my_snprintf(ebuff, 0x200uLL, "Unknown error %d", (unsigned int)nr);
LABEL_7:
  error_handler_hook(nr, ebuff, MyFlags);
};

// Line 113: range 000000000CFBA260-000000000CFBA333
void my_printf_error(uint error, const char *format, myf MyFlags, ...)
{
  va_list args; // [rsp+8h] [rbp-2E0h] BYREF
  char ebuff[512]; // [rsp+20h] [rbp-2C8h] BYREF

  va_start(args, MyFlags);
  my_vsnprintf_ex(&my_charset_utf8_general_ci, ebuff, 0x200uLL, format, (__va_list_tag *)args);
  error_handler_hook(error, ebuff, MyFlags);
};

// Line 140: range 000000000CFBA340-000000000CFBA37C
void __fastcall my_printv_error(uint error, const char *format, myf MyFlags, __va_list_tag *ap)
{
  char ebuff[512]; // [rsp+0h] [rbp-218h] BYREF

  my_vsnprintf(ebuff, 0x200uLL, format, ap);
  error_handler_hook(error, ebuff, MyFlags);
};

// Line 161: range 000000000CFBA380-000000000CFBA44E
void my_printf_warning(const char *format, ...)
{
  va_list args; // [rsp+8h] [rbp-2D0h] BYREF
  char wbuff[512]; // [rsp+20h] [rbp-2B8h] BYREF

  va_start(args, format);
  my_vsnprintf(wbuff, 0x200uLL, format, (__va_list_tag *)args);
  sql_print_warning_hook(wbuff);
};

// Line 185: range 000000000CFBA450-000000000CFBA45A
void __fastcall my_message(uint error, const char *str, myf MyFlags)
{
  error_handler_hook(error, str, MyFlags);
};

// Line 212: range 000000000CFBA460-000000000CFBA501
int __fastcall my_error_register(const char **(*get_errmsgs)(...), int first, int last)
{
  _QWORD *v5; // rax
  my_err_head *v6; // rcx
  my_err_head **p_meh_next; // rsi

  v5 = my_malloc(0x18uLL, 16);
  if ( v5 )
  {
    v6 = my_errmsgs_list;
    v5[1] = get_errmsgs;
    *((_DWORD *)v5 + 4) = first;
    *((_DWORD *)v5 + 5) = last;
    if ( v6 )
    {
      if ( first < v6->meh_last )
      {
        p_meh_next = &my_errmsgs_list;
LABEL_9:
        if ( last >= v6->meh_first )
        {
          my_free(v5);
          return 1;
        }
LABEL_8:
        *v5 = v6;
        *p_meh_next = (my_err_head *)v5;
        return 0;
      }
      while ( 1 )
      {
        p_meh_next = &v6->meh_next;
        v6 = v6->meh_next;
        if ( !v6 )
          break;
        if ( first < v6->meh_last )
          goto LABEL_9;
      }
    }
    else
    {
      p_meh_next = &my_errmsgs_list;
    }
    v6 = 0LL;
    goto LABEL_8;
  }
  return 1;
};

// Line 269: range 000000000CFBA510-000000000CFBA570
const char **__fastcall my_error_unregister(int first, int last)
{
  my_err_head *v2; // rbx
  my_err_head **p_meh_next; // rax
  const char **v4; // rbp

  v2 = my_errmsgs_list;
  if ( !my_errmsgs_list )
    return 0LL;
  p_meh_next = &my_errmsgs_list;
  while ( v2->meh_first != first || v2->meh_last != last )
  {
    p_meh_next = &v2->meh_next;
    v2 = v2->meh_next;
    if ( !v2 )
      return 0LL;
  }
  *p_meh_next = v2->meh_next;
  v4 = v2->get_errmsgs();
  my_free(v2);
  return v4;
};

// Line 302: range 000000000CFBA580-000000000CFBA5BA
void __cdecl my_error_unregister_all()
{
  my_err_head *meh_next; // rdi
  my_err_head *v1; // rbx

  meh_next = my_errmsgs_globerrs.meh_next;
  if ( my_errmsgs_globerrs.meh_next )
  {
    while ( 1 )
    {
      v1 = meh_next->meh_next;
      my_free(meh_next);
      if ( !v1 )
        break;
      meh_next = v1;
    }
  }
  my_errmsgs_globerrs.meh_next = 0LL;
  my_errmsgs_list = &my_errmsgs_globerrs;
};
