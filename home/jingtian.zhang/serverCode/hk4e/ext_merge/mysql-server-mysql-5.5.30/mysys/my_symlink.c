// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_symlink.c

// Line 36: range 000000000CFBC3E0-000000000CFBC470
int __fastcall my_readlink(char *to, const char *filename, myf MyFlags)
{
  char v3; // r12
  int v4; // eax
  int v5; // ebx
  st_my_thread_var *v7; // r13
  unsigned int *v8; // rax
  unsigned int v9; // edx

  v3 = MyFlags;
  v4 = readlink(filename, to, 0x1FFuLL);
  if ( v4 < 0 )
  {
    v7 = my_thread_var();
    v8 = (unsigned int *)__errno_location();
    v9 = *v8;
    v7->thr_errno = *v8;
    if ( v9 == 22 )
    {
      v5 = 1;
      strcpy(to, filename);
    }
    else
    {
      v5 = -1;
      if ( (v3 & 0x10) != 0 )
        my_error(24, 0, filename, *v8);
    }
  }
  else
  {
    to[v4] = 0;
    return 0;
  }
  return v5;
};

// Line 71: range 000000000CFBC480-000000000CFBC51B
int __fastcall my_symlink(const char *content, const char *linkname, myf MyFlags)
{
  st_my_thread_var *v4; // rbx
  unsigned int *v5; // rax
  int v6; // ebx

  if ( symlink(content, linkname) )
  {
    v4 = my_thread_var();
    v5 = (unsigned int *)__errno_location();
    v4->thr_errno = *v5;
    v6 = -1;
    if ( (MyFlags & 0x10) == 0 )
      return v6;
    my_error(25, 0, linkname, content, *v5);
    return -1;
  }
  else
  {
    v6 = 0;
    if ( (MyFlags & 0x2000) == 0 )
      return v6;
    return -(my_sync_dir_by_file(linkname, MyFlags) != 0);
  }
};

// Line 103: range 000000000CFBC520-000000000CFBC559
int __fastcall my_is_symlink(const char *filename)
{
  int v1; // eax
  int v2; // edx
  stat stat_buff; // [rsp+0h] [rbp-98h] BYREF

  v1 = __lxstat64(1, filename, (struct stat64 *)&stat_buff);
  v2 = 0;
  if ( !v1 )
    return (stat_buff.st_mode & 0xF000) == 40960;
  return v2;
};

// Line 122: range 000000000CFBC560-000000000CFBC5EE
int __fastcall my_realpath(char *to, const char *filename, myf MyFlags)
{
  char v3; // r12
  char *v4; // rax
  st_my_thread_var *v6; // r13
  char buff[4096]; // [rsp+0h] [rbp-1028h] BYREF

  v3 = MyFlags;
  v4 = realpath(filename, buff);
  if ( v4 )
  {
    strmake(to, v4, 0x1FFuLL);
    return 0;
  }
  else
  {
    v6 = my_thread_var();
    v6->thr_errno = *__errno_location();
    if ( (v3 & 0x10) != 0 )
      my_error(26, 0, filename);
    my_load_path(to, filename, 0LL);
    return -1;
  }
};
