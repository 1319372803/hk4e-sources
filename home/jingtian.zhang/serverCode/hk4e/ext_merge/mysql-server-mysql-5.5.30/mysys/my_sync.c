// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_sync.c

// Line 26: range 000000000CFBC5F0-000000000CFBC5FE
void __fastcall thr_set_sync_wait_callback(void (*before_wait)(void), void (*after_wait)(void))
{
  before_sync_wait = before_wait;
  after_sync_wait = after_wait;
};

// Line 54: range 000000000CFBC600-000000000CFBC6E4
int __fastcall my_sync(File fd, myf my_flags)
{
  int v2; // ebp
  int v3; // eax
  int v4; // ebx
  st_my_thread_var *v6; // rax
  int v7; // edx
  st_my_thread_var *v8; // r14
  unsigned int thr_errno; // ebp
  char *v10; // rax

  if ( before_sync_wait )
    before_sync_wait();
  while ( 1 )
  {
    v3 = fsync(fd);
    v4 = v3;
    if ( v3 != -1 )
      break;
    v2 = *__errno_location();
    if ( v2 != 4 )
      goto LABEL_10;
  }
  if ( !v3 )
  {
    if ( after_sync_wait )
    {
      after_sync_wait();
      return v4;
    }
    return 0;
  }
  v2 = *__errno_location();
LABEL_10:
  v6 = my_thread_var();
  v7 = -1;
  v8 = v6;
  if ( v2 )
    v7 = v2;
  v6->thr_errno = v7;
  if ( after_sync_wait )
    after_sync_wait();
  if ( (my_flags & 0x20) != 0 && ((v2 & 0xFFFFFFF7) == 22 || v2 == 9) )
    return 0;
  if ( (my_flags & 0x10) == 0 )
    return v4;
  thr_errno = v8->thr_errno;
  v10 = my_filename(fd);
  my_error(27, 36, v10, thr_errno);
  return v4;
};

// Line 128: range 000000000CFBC6F0-000000000CFBC749
int __fastcall my_sync_dir(const char *dir_name, myf my_flags)
{
  int v2; // ebx
  int v3; // eax
  File v4; // r12d

  v2 = 1;
  if ( !*dir_name )
    dir_name = ".";
  v3 = my_open(dir_name, 0, my_flags);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v2 = my_sync(v3, my_flags | 0x20) != 0 ? 2 : 0;
    if ( my_close(v4, my_flags) )
      return 3;
  }
  return v2;
};

// Line 178: range 000000000CFBC750-000000000CFBC783
int __fastcall my_sync_dir_by_file(const char *file_name, myf my_flags)
{
  size_t dir_name_length; // [rsp+8h] [rbp-220h] BYREF
  char dir_name[512]; // [rsp+10h] [rbp-218h] BYREF

  dirname_part(dir_name, file_name, &dir_name_length);
  return my_sync_dir(dir_name, my_flags);
};
