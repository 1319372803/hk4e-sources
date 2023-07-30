// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/x86_64-pc-linux-gnu/bits/gthr-default.h

// Line 181: range 000000000EE87466-000000000EE87484
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 0000000011572B5C-0000000011572B7A
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 000000000FA115FC-000000000FA1161A
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 00000000137CB0B6-00000000137CB0D4
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 0000000013426DAC-0000000013426DCA
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 0000000011E78F04-0000000011E78F22
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 000000000D4AFE3C-000000000D4AFE5A
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 000000001193ECFC-000000001193ED1A
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 000000000E04DE68-000000000E04DE86
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 000000000CACDBF2-000000000CACDC10
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 000000000F1C61C4-000000000F1C61E2
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 000000000E47CF58-000000000E47CF76
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 249: range 000000000C60E832-000000000C60E850
int __cdecl __gthread_active_p()
{
  return &_pthread_key_create != 0LL;
};

// Line 336: range 000000000C634A49-000000000C634A62
int __cdecl __gthread_recursive_mutex_lock(__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_lock(__mutex);
};

// Line 747: range 000000000C60E851-000000000C60E87F
int __cdecl __gthread_mutex_lock(__gthread_mutex_t *__mutex)
{
  if ( __gthread_active_p() )
    return pthread_mutex_lock(__mutex);
  else
    return 0;
};

// Line 777: range 000000000C60E880-000000000C60E8AE
int __cdecl __gthread_mutex_unlock(__gthread_mutex_t *__mutex)
{
  if ( __gthread_active_p() )
    return pthread_mutex_unlock(__mutex);
  else
    return 0;
};

// Line 831: range 000000000C634A63-000000000C634A7C
int __cdecl __gthread_recursive_mutex_unlock(__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_unlock(__mutex);
};
