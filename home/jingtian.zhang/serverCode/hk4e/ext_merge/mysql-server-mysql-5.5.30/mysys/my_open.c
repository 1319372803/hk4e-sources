// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_open.c

// Line 39: range 000000000CFBC1E0-000000000CFBC213
File __fastcall my_open(const char *FileName, int Flags, myf MyFlags)
{
  int v4; // eax

  v4 = open64(FileName, Flags, (unsigned int)my_umask);
  return my_register_filename(v4, FileName, FILE_BY_OPEN, 0x1Du, MyFlags);
};

// Line 68: range 000000000CFBBDC0-000000000CFBBF42
int __fastcall my_close(File fd, myf MyFlags)
{
  char v2; // r15
  PSI_mutex *m_psi; // rsi
  PSI_mutex_locker *v4; // rbx
  int v5; // eax
  int *v6; // rax
  int v7; // ebp
  int *v8; // rdx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r12
  int *v13; // rax
  unsigned int v14; // ebp
  char *v15; // rax
  int *v16; // [rsp+8h] [rbp-90h]
  char v17[136]; // [rsp+10h] [rbp-88h] BYREF

  v2 = MyFlags;
  if ( PSI_server
    && (m_psi = THR_LOCK_open.m_psi) != 0LL
    && (v4 = PSI_server->get_thread_mutex_locker(v17, m_psi, 0LL)) != 0LL )
  {
    PSI_server->start_mutex_wait(
      v4,
      "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_open.c",
      73LL);
    v5 = pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
    PSI_server->end_mutex_wait(v4, v5);
  }
  else
  {
    pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
  }
  while ( 1 )
  {
    v9 = close(fd);
    v10 = v9;
    if ( v9 != -1 )
      break;
    v6 = __errno_location();
    v7 = *v6;
    v8 = v6;
    if ( *v6 != 4 )
      goto LABEL_16;
  }
  if ( !v9 )
    goto LABEL_8;
  v13 = __errno_location();
  v7 = *v13;
  v8 = v13;
LABEL_16:
  v16 = v8;
  my_thread_var()->thr_errno = v7;
  if ( (v2 & 0x18) != 0 )
  {
    v14 = *v16;
    v15 = my_filename(fd);
    my_error(4, 36, v15, v14);
  }
LABEL_8:
  if ( fd < my_file_limit )
  {
    v11 = fd;
    if ( my_file_info[v11].type )
    {
      my_free(my_file_info[fd].name);
      my_file_info[v11].type = UNOPEN;
    }
  }
  --my_file_opened;
  if ( PSI_server && THR_LOCK_open.m_psi )
    ((void (*)(void))PSI_server->unlock_mutex)();
  pthread_mutex_unlock((pthread_mutex_t *)&THR_LOCK_open);
  return v10;
};

// Line 122: range 000000000CFBBF50-000000000CFBC1D0
File __fastcall my_register_filename(
        File fd,
        const char *FileName,
        file_type type_of_file,
        uint error_message_number,
        myf MyFlags)
{
  File v7; // ebx
  PSI_mutex *v9; // rsi
  PSI_mutex_locker *v10; // rcx
  int v11; // eax
  char *v12; // rax
  PSI *v13; // rax
  PSI_mutex *m_psi; // rsi
  PSI_mutex_locker *v16; // r13
  int v17; // eax
  st_my_thread_var *v18; // rbx
  int v19; // edi
  PSI_mutex_locker *v21; // [rsp+10h] [rbp-98h]
  st_my_file_info *v22; // [rsp+10h] [rbp-98h]
  char v23[136]; // [rsp+20h] [rbp-88h] BYREF

  v7 = fd;
  if ( fd < 0 )
  {
    v18 = my_thread_var();
    v18->thr_errno = *__errno_location();
  }
  else
  {
    if ( fd >= my_file_limit )
    {
      if ( PSI_server
        && (m_psi = THR_LOCK_open.m_psi) != 0LL
        && (v16 = PSI_server->get_thread_mutex_locker(v23, m_psi, 0LL)) != 0LL )
      {
        PSI_server->start_mutex_wait(
          v16,
          "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_open.c",
          131LL);
        v17 = pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
        PSI_server->end_mutex_wait(v16, v17);
      }
      else
      {
        pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
      }
      ++my_file_opened;
      v13 = PSI_server;
      if ( !PSI_server )
        goto LABEL_11;
      goto LABEL_9;
    }
    if ( PSI_server
      && (v9 = THR_LOCK_open.m_psi) != 0LL
      && (v10 = PSI_server->get_thread_mutex_locker(v23, v9, 0LL)) != 0LL )
    {
      v21 = v10;
      PSI_server->start_mutex_wait(
        v10,
        "/home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_open.c",
        137LL);
      v11 = pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
      PSI_server->end_mutex_wait(v21, v11);
    }
    else
    {
      pthread_mutex_lock((pthread_mutex_t *)&THR_LOCK_open);
    }
    v22 = &my_file_info[fd];
    v12 = my_strdup(FileName, MyFlags);
    v22->name = v12;
    if ( v12 )
    {
      ++my_file_opened;
      ++my_file_total_opened;
      my_file_info[fd].type = type_of_file;
      v13 = PSI_server;
      if ( !PSI_server )
      {
LABEL_11:
        pthread_mutex_unlock((pthread_mutex_t *)&THR_LOCK_open);
        return v7;
      }
LABEL_9:
      if ( THR_LOCK_open.m_psi )
        ((void (*)(void))v13->unlock_mutex)();
      goto LABEL_11;
    }
    if ( PSI_server && THR_LOCK_open.m_psi )
      ((void (*)(void))PSI_server->unlock_mutex)();
    pthread_mutex_unlock((pthread_mutex_t *)&THR_LOCK_open);
    my_thread_var()->thr_errno = 12;
    my_close(fd, MyFlags);
  }
  v7 = -1;
  if ( (MyFlags & 0x19) != 0 )
  {
    v19 = 23;
    if ( my_thread_var()->thr_errno != 24 )
      v19 = error_message_number;
    my_error(v19, 36, FileName);
  }
  return v7;
};
