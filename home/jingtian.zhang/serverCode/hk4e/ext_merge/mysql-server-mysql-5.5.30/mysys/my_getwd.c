// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_getwd.c

// Line 53: range 000000000CFBAE70-000000000CFBAF45
int __fastcall my_getwd(char *buf, size_t size, myf MyFlags)
{
  char v3; // r12
  char *v4; // rax
  st_my_thread_var *v6; // rbx
  unsigned int *v7; // rax

  if ( !size )
    return -1;
  if ( curr_dir[0] )
  {
    strmake(buf, curr_dir, size - 1);
    return 0;
  }
  else if ( size <= 1 )
  {
    return -1;
  }
  else
  {
    v3 = MyFlags;
    if ( getcwd(buf, (unsigned int)(size - 2)) || (v3 & 0x10) == 0 )
    {
      v4 = strend(buf);
      if ( *(v4 - 1) != 47 )
      {
        *v4 = 47;
        v4[1] = 0;
      }
      strmake(curr_dir, buf, 0x1FFuLL);
      return 0;
    }
    else
    {
      v6 = my_thread_var();
      v7 = (unsigned int *)__errno_location();
      v6->thr_errno = *v7;
      my_error(16, 36, *v7);
      return -1;
    }
  }
};

// Line 92: range 000000000CFBAFA0-000000000CFBB094
int __fastcall my_setwd(const char *dir, myf MyFlags)
{
  char v3; // al
  const char *v4; // rdi
  int v5; // ebp
  st_my_thread_var *v6; // r13
  unsigned int *v7; // rax
  char *v9; // rax
  unsigned int v10; // eax

  v3 = *dir;
  v4 = dirsep;
  if ( v3 )
  {
    v4 = dir;
    if ( v3 == 47 )
    {
      v4 = dirsep;
      if ( dir[1] )
        v4 = dir;
    }
  }
  v5 = chdir(v4);
  if ( v5 )
  {
    v6 = my_thread_var();
    v7 = (unsigned int *)__errno_location();
    v6->thr_errno = *v7;
    if ( (MyFlags & 0x10) == 0 )
      return v5;
    my_error(17, 36, dir, *v7);
    return v5;
  }
  else
  {
    if ( test_if_hard_path(dir) )
    {
      v9 = strmake(curr_dir, dir, 0x1FFuLL);
      if ( *(v9 - 1) != 47 )
      {
        v10 = (_DWORD)v9 - (unsigned int)curr_dir;
        curr_dir[v10] = 47;
        curr_dir[v10 + 1] = 0;
      }
      return v5;
    }
    curr_dir[0] = 0;
    return v5;
  }
};

// Line 133: range 000000000CFBAF50-000000000CFBAF94
int __fastcall test_if_hard_path(const char *dir_name)
{
  int result; // eax

  result = *dir_name == 47;
  if ( *dir_name == 126 )
  {
    result = 0;
    if ( dir_name[1] == 47 )
    {
      if ( home_dir )
        return test_if_hard_path(home_dir) != 0;
    }
  }
  return result;
};

// Line 158: range 000000000CFBB0A0-000000000CFBB0B8
my_bool __fastcall has_path(const char *name)
{
  return strchr(name, 47) != 0LL;
};
