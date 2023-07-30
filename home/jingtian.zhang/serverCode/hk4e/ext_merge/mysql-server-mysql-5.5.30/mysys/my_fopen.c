// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_fopen.c

// Line 42: range 000000000CFBA7B0-000000000CFBAA30
FILE *__fastcall my_fopen(const char *filename, int flags, myf MyFlags)
{
  FILE *v4; // rax
  FILE *v5; // r12
  __int64 v6; // r15
  PSI_mutex *v7; // rsi
  PSI_mutex_locker *v8; // r8
  int v9; // eax
  __int64 v10; // r15
  char *v11; // rax
  PSI *v12; // rax
  PSI_mutex *m_psi; // rsi
  PSI_mutex_locker *v15; // r13
  int v16; // eax
  st_my_thread_var *v17; // rbx
  st_my_thread_var *v18; // rax
  PSI_mutex_locker *v20; // [rsp+8h] [rbp-A0h]
  st_my_file_info *v21; // [rsp+8h] [rbp-A0h]
  char type[5]; // [rsp+10h] [rbp-98h] BYREF
  char v23[136]; // [rsp+20h] [rbp-88h] BYREF

  make_ftype(type, flags);
  v4 = fopen64(filename, type);
  v5 = v4;
  if ( v4 )
  {
    v6 = my_fileno(v4);
    if ( (unsigned int)v6 >= my_file_limit )
    {
      if ( PSI_server
        && (m_psi = THR_LOCK_open.m_psi) != 0LL
        && (v15 = PSI_server->get_thread_mutex_locker(v23, m_psi, 0LL)) != 0LL )
      {
        PSI_server->start_mutex_wait(
          v15,
          "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_fopen.c",
          67LL);
        v16 = pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
        PSI_server->end_mutex_wait(v15, v16);
      }
      else
      {
        pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
      }
      ++my_stream_opened;
      v12 = PSI_server;
      if ( !PSI_server )
        goto LABEL_11;
      goto LABEL_9;
    }
    if ( PSI_server
      && (v7 = THR_LOCK_open.m_psi) != 0LL
      && (v8 = PSI_server->get_thread_mutex_locker(v23, v7, 0LL)) != 0LL )
    {
      v20 = v8;
      PSI_server->start_mutex_wait(
        v8,
        "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_fopen.c",
        70LL);
      v9 = pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
      PSI_server->end_mutex_wait(v20, v9);
    }
    else
    {
      pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
    }
    v10 = v6;
    v21 = &my_file_info[v10];
    v11 = my_strdup(filename, MyFlags);
    v21->name = v11;
    if ( v11 )
    {
      ++my_stream_opened;
      ++my_file_total_opened;
      my_file_info[v10].type = STREAM_BY_FOPEN;
      v12 = PSI_server;
      if ( !PSI_server )
      {
LABEL_11:
        pthread_mutex_unlock((pthread_mutex_t *)&THR_LOCK_open);
        return v5;
      }
LABEL_9:
      if ( THR_LOCK_open.m_psi )
        ((void (*)(void))v12->unlock_mutex)();
      goto LABEL_11;
    }
    if ( PSI_server && THR_LOCK_open.m_psi )
      ((void (*)(void))PSI_server->unlock_mutex)();
    pthread_mutex_unlock((pthread_mutex_t *)&THR_LOCK_open);
    my_fclose(v5, MyFlags);
    my_thread_var()->thr_errno = 12;
  }
  else
  {
    v17 = my_thread_var();
    v17->thr_errno = *__errno_location();
  }
  v5 = 0LL;
  if ( (MyFlags & 0x19) != 0 )
  {
    v18 = my_thread_var();
    my_error(flags == 0 ? 29 : 1, 36, filename, (unsigned int)v18->thr_errno);
  }
  return v5;
};

// Line 219: range 000000000CFBA630-000000000CFBA7A4
// attributes: thunk
FILE *__fastcall my_freopen(const char *path, const char *mode, FILE *stream)
{
  return freopen64(path, mode, stream);
};

// Line 263: range 000000000CFBAA40-000000000CFBABD2
FILE *__fastcall my_fdopen(File Filedes, const char *name, int Flags, myf MyFlags)
{
  FILE *v5; // rbx
  PSI_mutex *m_psi; // rsi
  PSI_mutex_locker *v7; // r15
  int v8; // eax
  st_my_file_info *v10; // r13
  st_my_thread_var *v11; // rbp
  unsigned int *v12; // rax
  char *v13; // rax
  st_my_file_info *v14; // rdx
  char type[5]; // [rsp+10h] [rbp-98h] BYREF
  char v17[136]; // [rsp+20h] [rbp-88h] BYREF

  make_ftype(type, Flags);
  v5 = fdopen(Filedes, type);
  if ( v5 )
  {
    if ( PSI_server
      && (m_psi = THR_LOCK_open.m_psi) != 0LL
      && (v7 = PSI_server->get_thread_mutex_locker(v17, m_psi, 0LL)) != 0LL )
    {
      PSI_server->start_mutex_wait(
        v7,
        "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_fopen.c",
        284LL);
      v8 = pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
      PSI_server->end_mutex_wait(v7, v8);
    }
    else
    {
      pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
    }
    ++my_stream_opened;
    if ( Filedes < my_file_limit )
    {
      v10 = &my_file_info[Filedes];
      if ( v10->type )
      {
        --my_file_opened;
      }
      else
      {
        v13 = my_strdup(name, MyFlags);
        v14 = &my_file_info[Filedes];
        v10->name = v13;
        v10 = v14;
      }
      v10->type = STREAM_BY_FDOPEN;
    }
    if ( PSI_server && THR_LOCK_open.m_psi )
      ((void (*)(void))PSI_server->unlock_mutex)();
    pthread_mutex_unlock((pthread_mutex_t *)&THR_LOCK_open);
  }
  else
  {
    v11 = my_thread_var();
    v12 = (unsigned int *)__errno_location();
    v11->thr_errno = *v12;
    if ( (MyFlags & 0x18) != 0 )
      my_error(15, 36, *v12);
  }
  return v5;
};

// Line 337: range 000000000CFBA5C0-000000000CFBA62B
void __fastcall make_ftype(char *to, int flag)
{
  if ( (flag & 1) != 0 )
  {
    *(_WORD *)to = (unsigned __int8)((flag & 0x400) == 0 ? 119 : 97);
  }
  else if ( (flag & 2) != 0 )
  {
    if ( (flag & 0x240) != 0 )
    {
      *to = 119;
    }
    else if ( (flag & 0x400) != 0 )
    {
      *to = 97;
    }
    else
    {
      *to = 114;
    }
    to[1] = 43;
    to[2] = 0;
  }
  else
  {
    *to = 114;
    to[1] = 0;
  }
};
