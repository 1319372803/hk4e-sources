// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_thr_init.c

// Line 55: range 000000000CFBC790-000000000CFBC796
void *__fastcall __noreturn nptl_pthread_exit_hack_handler(void *arg)
{
  pthread_exit(0LL);
};

// Line 79: range 000000000CFBC7A0-000000000CFBCB5A
void __cdecl my_thread_global_reinit()
{
  PSI_mutex *v0; // rax
  PSI_mutex *v1; // rax
  PSI_mutex *v2; // rax
  PSI_mutex *v3; // rax
  PSI_mutex *v4; // rax
  PSI_mutex *v5; // rax
  PSI_mutex *v6; // rax
  PSI_mutex *v7; // rax
  PSI_cond *v8; // rax
  char *v9; // rbp
  PSI_mutex *v10; // rax
  PSI_cond *v11; // rax

  my_init_mysys_psi_keys();
  if ( PSI_server && THR_LOCK_isam.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_isam.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_isam);
  v0 = 0LL;
  if ( PSI_server )
    v0 = PSI_server->init_mutex(key_THR_LOCK_isam, &THR_LOCK_isam);
  THR_LOCK_isam.m_psi = v0;
  pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_isam, 0LL);
  if ( PSI_server && THR_LOCK_heap.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_heap.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_heap);
  v1 = 0LL;
  if ( PSI_server )
    v1 = PSI_server->init_mutex(key_THR_LOCK_heap, &THR_LOCK_heap);
  THR_LOCK_heap.m_psi = v1;
  pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_heap, &my_fast_mutexattr);
  if ( PSI_server && THR_LOCK_net.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_net.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_net);
  v2 = 0LL;
  if ( PSI_server )
    v2 = PSI_server->init_mutex(key_THR_LOCK_net, &THR_LOCK_net);
  THR_LOCK_net.m_psi = v2;
  pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_net, &my_fast_mutexattr);
  if ( PSI_server && THR_LOCK_myisam.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_myisam.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_myisam);
  v3 = 0LL;
  if ( PSI_server )
    v3 = PSI_server->init_mutex(key_THR_LOCK_myisam, &THR_LOCK_myisam);
  THR_LOCK_myisam.m_psi = v3;
  pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_myisam, 0LL);
  if ( PSI_server && THR_LOCK_malloc.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_malloc.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_malloc);
  v4 = 0LL;
  if ( PSI_server )
    v4 = PSI_server->init_mutex(key_THR_LOCK_malloc, &THR_LOCK_malloc);
  THR_LOCK_malloc.m_psi = v4;
  pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_malloc, &my_fast_mutexattr);
  if ( PSI_server && THR_LOCK_open.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_open.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_open);
  v5 = 0LL;
  if ( PSI_server )
    v5 = PSI_server->init_mutex(key_THR_LOCK_open, &THR_LOCK_open);
  THR_LOCK_open.m_psi = v5;
  pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_open, &my_fast_mutexattr);
  if ( PSI_server && THR_LOCK_charset.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_charset.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_charset);
  v6 = 0LL;
  if ( PSI_server )
    v6 = PSI_server->init_mutex(key_THR_LOCK_charset, &THR_LOCK_charset);
  THR_LOCK_charset.m_psi = v6;
  pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_charset, &my_fast_mutexattr);
  if ( PSI_server && THR_LOCK_threads.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_threads.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_threads);
  v7 = 0LL;
  if ( PSI_server )
    v7 = PSI_server->init_mutex(key_THR_LOCK_threads, &THR_LOCK_threads);
  THR_LOCK_threads.m_psi = v7;
  pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_threads, &my_fast_mutexattr);
  if ( PSI_server && THR_COND_threads.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_cond)();
    THR_COND_threads.m_psi = 0LL;
  }
  pthread_cond_destroy((pthread_cond_t *)&THR_COND_threads);
  v8 = 0LL;
  if ( PSI_server )
    v8 = PSI_server->init_cond(key_THR_COND_threads, &THR_COND_threads);
  THR_COND_threads.m_psi = v8;
  pthread_cond_init((pthread_cond_t *)&THR_COND_threads, 0LL);
  v9 = (char *)pthread_getspecific(THR_KEY_mysys);
  if ( PSI_server && *((_QWORD *)v9 + 13) )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    *((_QWORD *)v9 + 13) = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)(v9 + 64));
  v10 = 0LL;
  if ( PSI_server )
    v10 = PSI_server->init_mutex(key_my_thread_var_mutex, v9 + 64);
  *((_QWORD *)v9 + 13) = v10;
  pthread_mutex_init((pthread_mutex_t *)(v9 + 64), &my_fast_mutexattr);
  if ( PSI_server && *((_QWORD *)v9 + 7) )
  {
    ((void (*)(void))PSI_server->destroy_cond)();
    *((_QWORD *)v9 + 7) = 0LL;
  }
  pthread_cond_destroy((pthread_cond_t *)(v9 + 8));
  v11 = 0LL;
  if ( PSI_server )
    v11 = PSI_server->init_cond(key_my_thread_var_suspend, v9 + 8);
  *((_QWORD *)v9 + 7) = v11;
  pthread_cond_init((pthread_cond_t *)(v9 + 8), 0LL);
};

// Line 141: range 000000000CFBD120-000000000CFBD579
my_bool __cdecl my_thread_global_init()
{
  my_bool result; // al
  unsigned int v1; // eax
  PSI_mutex *v2; // rax
  PSI_mutex *v3; // rax
  PSI_mutex *v4; // rax
  PSI_mutex *v5; // rax
  my_bool v6; // dl
  PSI_mutex *v7; // rax
  PSI_mutex *v8; // rax
  PSI_mutex *v9; // rax
  PSI_mutex *v10; // rax
  PSI_mutex *v11; // rax
  PSI_mutex *v12; // rax
  PSI_cond *v13; // rax
  pthread_t dummy_thread; // [rsp+0h] [rbp-60h] BYREF
  pthread_attr_t_0 dummy_thread_attr; // [rsp+8h] [rbp-58h] BYREF

  result = 0;
  if ( !my_thread_global_init_done[0] )
  {
    my_thread_global_init_done[0] = 1;
    pthread_mutexattr_init(&my_fast_mutexattr);
    pthread_mutexattr_settype(&my_fast_mutexattr, 3);
    pthread_mutexattr_init(&my_errorcheck_mutexattr);
    pthread_mutexattr_settype(&my_errorcheck_mutexattr, 2);
    v1 = pthread_key_create(&THR_KEY_mysys, 0LL);
    if ( v1 )
    {
      fprintf(stderr, "Can't initialize threads: error %d\n", v1);
      return 1;
    }
    else
    {
      if ( PSI_server )
        v2 = PSI_server->init_mutex(key_THR_LOCK_malloc, &THR_LOCK_malloc);
      else
        v2 = 0LL;
      THR_LOCK_malloc.m_psi = v2;
      pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_malloc, &my_fast_mutexattr);
      if ( PSI_server )
        v3 = PSI_server->init_mutex(key_THR_LOCK_open, &THR_LOCK_open);
      else
        v3 = 0LL;
      THR_LOCK_open.m_psi = v3;
      pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_open, &my_fast_mutexattr);
      if ( PSI_server )
        v4 = PSI_server->init_mutex(key_THR_LOCK_charset, &THR_LOCK_charset);
      else
        v4 = 0LL;
      THR_LOCK_charset.m_psi = v4;
      pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_charset, &my_fast_mutexattr);
      if ( PSI_server )
        v5 = PSI_server->init_mutex(key_THR_LOCK_threads, &THR_LOCK_threads);
      else
        v5 = 0LL;
      THR_LOCK_threads.m_psi = v5;
      pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_threads, &my_fast_mutexattr);
      v6 = my_thread_init();
      result = 1;
      if ( !v6 )
      {
        confstr(3, dummy_thread_attr.__size, 0x40uLL);
        if ( !strncasecmp(dummy_thread_attr.__size, "NPTL", 4uLL) )
        {
          thd_lib_detected = 2;
          pthread_attr_init(&dummy_thread_attr);
          pthread_attr_setdetachstate(&dummy_thread_attr, 0);
          if ( !pthread_create(&dummy_thread, &dummy_thread_attr, nptl_pthread_exit_hack_handler, 0LL) )
            pthread_join(dummy_thread, 0LL);
        }
        else
        {
          thd_lib_detected = strncasecmp(dummy_thread_attr.__size, "linuxthreads", 0xCuLL) == 0 ? 4 : 1;
        }
        if ( PSI_server )
          v7 = PSI_server->init_mutex(key_THR_LOCK_lock, &THR_LOCK_lock);
        else
          v7 = 0LL;
        THR_LOCK_lock.m_psi = v7;
        pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_lock, &my_fast_mutexattr);
        if ( PSI_server )
          v8 = PSI_server->init_mutex(key_THR_LOCK_isam, &THR_LOCK_isam);
        else
          v8 = 0LL;
        THR_LOCK_isam.m_psi = v8;
        pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_isam, 0LL);
        if ( PSI_server )
          v9 = PSI_server->init_mutex(key_THR_LOCK_myisam, &THR_LOCK_myisam);
        else
          v9 = 0LL;
        THR_LOCK_myisam.m_psi = v9;
        pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_myisam, 0LL);
        if ( PSI_server )
          v10 = PSI_server->init_mutex(key_THR_LOCK_myisam_mmap, &THR_LOCK_myisam_mmap);
        else
          v10 = 0LL;
        THR_LOCK_myisam_mmap.m_psi = v10;
        pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_myisam_mmap, &my_fast_mutexattr);
        if ( PSI_server )
          v11 = PSI_server->init_mutex(key_THR_LOCK_heap, &THR_LOCK_heap);
        else
          v11 = 0LL;
        THR_LOCK_heap.m_psi = v11;
        pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_heap, &my_fast_mutexattr);
        if ( PSI_server )
          v12 = PSI_server->init_mutex(key_THR_LOCK_net, &THR_LOCK_net);
        else
          v12 = 0LL;
        THR_LOCK_net.m_psi = v12;
        pthread_mutex_init((pthread_mutex_t *)&THR_LOCK_net, &my_fast_mutexattr);
        if ( PSI_server )
          v13 = PSI_server->init_cond(key_THR_COND_threads, &THR_COND_threads);
        else
          v13 = 0LL;
        THR_COND_threads.m_psi = v13;
        pthread_cond_init((pthread_cond_t *)&THR_COND_threads, 0LL);
        return 0;
      }
    }
  }
  return result;
};

// Line 232: range 000000000CFBCB60-000000000CFBCF55
void __cdecl my_thread_global_end()
{
  PSI_mutex *m_psi; // rsi
  PSI_mutex_locker *v1; // rbp
  int v2; // eax
  PSI_cond *v3; // rsi
  PSI_cond_locker *v4; // r15
  __int64 v5; // rbp
  char v6; // r13
  timespec abstime; // [rsp+10h] [rbp-98h] BYREF
  timeval tv; // [rsp+20h] [rbp-88h] BYREF

  gettimeofday(&tv, 0LL);
  abstime.tv_sec = tv.tv_sec + my_thread_end_wait_time;
  abstime.tv_nsec = 1000 * tv.tv_usec;
  if ( PSI_server
    && (m_psi = THR_LOCK_threads.m_psi) != 0LL
    && (v1 = PSI_server->get_thread_mutex_locker(&tv, m_psi, 0LL)) != 0LL )
  {
    PSI_server->start_mutex_wait(
      v1,
      "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_thr_init.c",
      237LL);
    v2 = pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_threads);
    PSI_server->end_mutex_wait(v1, v2);
  }
  else
  {
    pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_threads);
  }
  do
  {
    if ( !THR_thread_count )
    {
      v6 = 1;
      goto LABEL_13;
    }
    if ( PSI_server
      && (v3 = THR_COND_threads.m_psi) != 0LL
      && (v4 = PSI_server->get_thread_cond_locker(&tv, v3, THR_LOCK_threads.m_psi, 1LL)) != 0LL )
    {
      PSI_server->start_cond_wait(
        v4,
        "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_thr_init.c",
        241LL);
      v5 = (unsigned int)pthread_cond_timedwait(
                           (pthread_cond_t *)&THR_COND_threads,
                           (pthread_mutex_t *)&THR_LOCK_threads,
                           &abstime);
      PSI_server->end_cond_wait(v4, v5);
    }
    else
    {
      LODWORD(v5) = pthread_cond_timedwait(
                      (pthread_cond_t *)&THR_COND_threads,
                      (pthread_mutex_t *)&THR_LOCK_threads,
                      &abstime);
    }
  }
  while ( (_DWORD)v5 != 62 && (_DWORD)v5 != 110 );
  v6 = 0;
  if ( THR_thread_count )
    fprintf(stderr, "Error in my_thread_global_end(): %d threads didn't exit\n", THR_thread_count);
LABEL_13:
  if ( PSI_server && THR_LOCK_threads.m_psi )
    ((void (*)(void))PSI_server->unlock_mutex)();
  pthread_mutex_unlock((pthread_mutex_t *)&THR_LOCK_threads);
  pthread_key_delete(THR_KEY_mysys);
  pthread_mutexattr_destroy(&my_fast_mutexattr);
  pthread_mutexattr_destroy(&my_errorcheck_mutexattr);
  if ( PSI_server && THR_LOCK_malloc.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_malloc.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_malloc);
  if ( PSI_server && THR_LOCK_open.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_open.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_open);
  if ( PSI_server && THR_LOCK_lock.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_lock.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_lock);
  if ( PSI_server && THR_LOCK_isam.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_isam.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_isam);
  if ( PSI_server && THR_LOCK_myisam.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_myisam.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_myisam);
  if ( PSI_server && THR_LOCK_myisam_mmap.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_myisam_mmap.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_myisam_mmap);
  if ( PSI_server && THR_LOCK_heap.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_heap.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_heap);
  if ( PSI_server && THR_LOCK_net.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_net.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_net);
  if ( PSI_server && THR_LOCK_charset.m_psi )
  {
    ((void (*)(void))PSI_server->destroy_mutex)();
    THR_LOCK_charset.m_psi = 0LL;
  }
  pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_charset);
  if ( v6 )
  {
    if ( PSI_server && THR_LOCK_threads.m_psi )
    {
      ((void (*)(void))PSI_server->destroy_mutex)();
      THR_LOCK_threads.m_psi = 0LL;
    }
    pthread_mutex_destroy((pthread_mutex_t *)&THR_LOCK_threads);
    if ( PSI_server && THR_COND_threads.m_psi )
    {
      ((void (*)(void))PSI_server->destroy_cond)();
      THR_COND_threads.m_psi = 0LL;
    }
    pthread_cond_destroy((pthread_cond_t *)&THR_COND_threads);
  }
  my_thread_global_init_done[0] = 0;
};

// Line 312: range 000000000CFBCF60-000000000CFBD110
my_bool __cdecl my_thread_init()
{
  void *v0; // rdx
  my_bool result; // al
  st_my_thread_var *v2; // rsi
  st_my_thread_var *v3; // rbp
  PSI_mutex *v4; // rax
  PSI_cond *v5; // rax
  pthread_cond_t *p_suspend; // r12
  PSI_mutex *m_psi; // rsi
  PSI_mutex_locker *v8; // r12
  int v9; // eax
  st_my_thread_var *tmp; // [rsp+8h] [rbp-70h] BYREF
  char v11[104]; // [rsp+10h] [rbp-68h] BYREF

  v0 = pthread_getspecific(THR_KEY_mysys);
  result = 0;
  if ( !v0 )
  {
    v2 = (st_my_thread_var *)calloc(1uLL, 0xC0uLL);
    tmp = v2;
    result = 1;
    if ( v2 )
    {
      pthread_setspecific(THR_KEY_mysys, v2);
      v3 = tmp;
      tmp->pthread_self = pthread_self();
      v4 = (PSI_mutex *)PSI_server;
      if ( PSI_server )
        v4 = PSI_server->init_mutex(key_my_thread_var_mutex, &v3->mutex);
      v3->mutex.m_psi = v4;
      pthread_mutex_init((pthread_mutex_t *)&v3->mutex, &my_fast_mutexattr);
      v5 = (PSI_cond *)PSI_server;
      p_suspend = (pthread_cond_t *)&tmp->suspend;
      if ( PSI_server )
        v5 = PSI_server->init_cond(key_my_thread_var_suspend, &tmp->suspend);
      tmp->suspend.m_psi = v5;
      pthread_cond_init(p_suspend, 0LL);
      tmp->stack_ends_here = &v11[-my_thread_stack_size - 8];
      if ( PSI_server
        && (m_psi = THR_LOCK_threads.m_psi) != 0LL
        && (v8 = PSI_server->get_thread_mutex_locker(v11, m_psi, 0LL)) != 0LL )
      {
        PSI_server->start_mutex_wait(
          v8,
          "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_thr_init.c",
          347LL);
        v9 = pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_threads);
        PSI_server->end_mutex_wait(v8, v9);
      }
      else
      {
        pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_threads);
      }
      tmp->id = ++thread_id;
      ++THR_thread_count;
      if ( PSI_server )
      {
        if ( THR_LOCK_threads.m_psi )
          ((void (*)(void))PSI_server->unlock_mutex)();
      }
      pthread_mutex_unlock((pthread_mutex_t *)&THR_LOCK_threads);
      tmp->init = 1;
      return 0;
    }
  }
  return result;
};

// Line 375: range 000000000CFBD580-000000000CFBD701
void __cdecl my_thread_end()
{
  char *v0; // rbx
  PSI_mutex *m_psi; // rsi
  PSI_mutex_locker *v2; // r13
  int v3; // eax
  __int64 v4; // [rsp+0h] [rbp-78h] BYREF

  v0 = (char *)pthread_getspecific(THR_KEY_mysys);
  if ( PSI_server )
    PSI_server->delete_current_thread();
  if ( v0 && v0[152] )
  {
    if ( PSI_server && *((_QWORD *)v0 + 7) )
    {
      ((void (*)(void))PSI_server->destroy_cond)();
      *((_QWORD *)v0 + 7) = 0LL;
    }
    pthread_cond_destroy((pthread_cond_t *)(v0 + 8));
    if ( PSI_server && *((_QWORD *)v0 + 13) )
    {
      ((void (*)(void))PSI_server->destroy_mutex)();
      *((_QWORD *)v0 + 13) = 0LL;
    }
    pthread_mutex_destroy((pthread_mutex_t *)(v0 + 64));
    free(v0);
    if ( PSI_server
      && (m_psi = THR_LOCK_threads.m_psi) != 0LL
      && (v2 = PSI_server->get_thread_mutex_locker(&v4, m_psi, 0LL)) != 0LL )
    {
      PSI_server->start_mutex_wait(
        v2,
        "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_thr_init.c",
        418LL);
      v3 = pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_threads);
      PSI_server->end_mutex_wait(v2, v3);
    }
    else
    {
      pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_threads);
    }
    if ( !--THR_thread_count )
    {
      if ( PSI_server && THR_COND_threads.m_psi )
        ((void (*)(void))PSI_server->signal_cond)();
      pthread_cond_signal((pthread_cond_t *)&THR_COND_threads);
    }
    if ( PSI_server && THR_LOCK_threads.m_psi )
      ((void (*)(void))PSI_server->unlock_mutex)();
    pthread_mutex_unlock((pthread_mutex_t *)&THR_LOCK_threads);
  }
  pthread_setspecific(THR_KEY_mysys, 0LL);
};

// Line 429: range 000000000CFBD710-000000000CFBD719
st_my_thread_var *__cdecl my_thread_var()
{
  return (st_my_thread_var *)pthread_getspecific(THR_KEY_mysys);
};

// Line 438: range 000000000CFBD720-000000000CFBD734
my_thread_id __cdecl my_thread_dbug_id()
{
  return my_thread_var()->id;
};

// Line 446: range 000000000CFBD740-000000000CFBD747
const char *__cdecl my_thread_name()
{
  return "no_name";
};
