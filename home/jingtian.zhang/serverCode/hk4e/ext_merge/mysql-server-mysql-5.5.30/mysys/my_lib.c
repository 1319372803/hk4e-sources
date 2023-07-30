// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_lib.c

// Line 69: range 000000000CFBB490-000000000CFBB4C1
void __fastcall my_dirend(MY_DIR *buffer)
{
  if ( buffer )
  {
    delete_dynamic((DYNAMIC_ARRAY *)&buffer[1]);
    free_root((MEM_ROOT *)&buffer[2].number_off_files, 0);
    my_free(buffer);
  }
};

// Line 85: range 000000000CFBB480-000000000CFBB486
int __fastcall comp_names(fileinfo *a, fileinfo *b)
{
  return strcmp(a->name, b->name);
};

// Line 92: range 000000000CFBB5D0-000000000CFBB8F9
MY_DIR *__fastcall my_dir(const char *path, myf MyFlags)
{
  char *v2; // rax
  DIR *v3; // rbx
  char *v4; // rax
  char *v5; // rbp
  void *v6; // rdi
  int *v7; // r12
  st_my_thread_var *v8; // r13
  MY_DIR *v9; // rdi
  int v11; // eax
  stat *v12; // rax
  _DWORD *v13; // rdi
  unsigned int v14; // edx
  __int64 v15; // rcx
  _DWORD *v16; // rdi
  void *v17; // rdi
  unsigned int v18; // eax
  DYNAMIC_ARRAY *dir_entries_storage; // [rsp+18h] [rbp-4B0h]
  char *tmp_file; // [rsp+38h] [rbp-490h]
  dirent *dp; // [rsp+48h] [rbp-480h] BYREF
  FILEINFO finfo; // [rsp+50h] [rbp-478h] BYREF
  char tmp_path[514]; // [rsp+60h] [rbp-468h] BYREF
  char dirent_tmp[537]; // [rsp+270h] [rbp-258h] BYREF

  v2 = directory_file_name(tmp_path, path);
  v3 = opendir(v2);
  if ( !v3 )
  {
    v8 = my_thread_var();
    v5 = 0LL;
    v8->thr_errno = *__errno_location();
    my_dirend(0LL);
    if ( (MyFlags & 0x18) == 0 )
      return (MY_DIR *)v5;
    goto LABEL_9;
  }
  v4 = (char *)my_malloc(0x60uLL, (unsigned __int16)MyFlags);
  v5 = v4;
  if ( !v4 )
  {
    v7 = __errno_location();
LABEL_5:
    v8 = my_thread_var();
    v8->thr_errno = *v7;
    closedir(v3);
    v9 = (MY_DIR *)v5;
    v5 = 0LL;
    my_dirend(v9);
    if ( (MyFlags & 0x18) == 0 )
      return (MY_DIR *)v5;
LABEL_9:
    my_error(12, 36, path, (unsigned int)v8->thr_errno);
    return (MY_DIR *)v5;
  }
  dir_entries_storage = (DYNAMIC_ARRAY *)(v4 + 16);
  if ( init_dynamic_array2((DYNAMIC_ARRAY *)(v4 + 16), 0x10u, 0LL, 0x200u, 0x1000u) )
  {
    v6 = v5;
    v5 = 0LL;
    my_free(v6);
    v7 = __errno_location();
    goto LABEL_5;
  }
  init_alloc_root((MEM_ROOT *)(v5 + 40), 0x8000uLL, 0x8000uLL);
  tmp_file = strend(tmp_path);
  dp = (dirent *)dirent_tmp;
  v7 = __errno_location();
  while ( 1 )
  {
    v11 = readdir64_r(v3, (struct dirent64 *)dirent_tmp, (struct dirent64 **)&dp);
    *v7 = v11;
    if ( v11 || !dp )
      break;
    finfo.name = strdup_root((MEM_ROOT *)(v5 + 40), dp->d_name);
    if ( !finfo.name )
      goto LABEL_5;
    if ( (MyFlags & 0x400) == 0 )
    {
      finfo.mystat = 0LL;
      goto LABEL_16;
    }
    v12 = (stat *)alloc_root((MEM_ROOT *)(v5 + 40), 0x90uLL);
    finfo.mystat = v12;
    if ( !v12 )
      goto LABEL_5;
    v13 = v12;
    v14 = 144;
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      LOBYTE(v12->st_dev) = 0;
      v13 = (_DWORD *)((char *)&v12->st_dev + 1);
      LOBYTE(v14) = -113;
    }
    if ( ((unsigned __int8)v13 & 2) != 0 )
    {
      v13 = (_DWORD *)((char *)v13 + 2);
      v14 -= 2;
      *((_WORD *)v13 - 1) = 0;
    }
    if ( ((unsigned __int8)v13 & 4) != 0 )
    {
      *v13 = 0;
      v14 -= 4;
      ++v13;
    }
    v15 = v14 >> 3;
    memset(v13, 0, 8 * v15);
    v16 = &v13[2 * v15];
    if ( (v14 & 4) != 0 )
      *v16++ = 0;
    if ( (v14 & 2) != 0 )
    {
      v16 = (_DWORD *)((char *)v16 + 2);
      *((_WORD *)v16 - 1) = 0;
    }
    if ( (v14 & 1) != 0 )
      *(_BYTE *)v16 = 0;
    strcpy(tmp_file, dp->d_name);
    my_stat(tmp_path, finfo.mystat, (unsigned __int16)MyFlags);
    if ( (finfo.mystat->st_mode & 0x100) != 0 )
    {
LABEL_16:
      if ( insert_dynamic(dir_entries_storage, (uchar *)&finfo) )
        goto LABEL_5;
    }
  }
  closedir(v3);
  v17 = (void *)*((_QWORD *)v5 + 2);
  v18 = *((_DWORD *)v5 + 6);
  *(_QWORD *)v5 = v17;
  *((_DWORD *)v5 + 2) = v18;
  if ( (MyFlags & 0x200) == 0 )
    my_qsort(v17, v18, 0x10uLL, (qsort_cmp)comp_names);
  return (MY_DIR *)v5;
};

// Line 198: range 000000000CFBB4D0-000000000CFBB4FD
char *__fastcall directory_file_name(char *dst, const char *src)
{
  char *v2; // rax

  if ( !*src )
    src = ".";
  v2 = strnmov(dst, src, 0x201uLL);
  if ( *(v2 - 1) != 47 )
  {
    *v2 = 47;
    v2[1] = 0;
  }
  return dst;
};

// Line 386: range 000000000CFBB500-000000000CFBB50A
int __fastcall my_fstat(File Filedes, stat *stat_area, myf MyFlags)
{
  return __fxstat64(1, Filedes, (struct stat64 *)stat_area);
};

// Line 398: range 000000000CFBB510-000000000CFBB5C0
stat *__fastcall my_stat(const char *path, stat *stat_area, myf my_flags)
{
  char v3; // r12
  struct stat64 *v4; // rbx
  stat *v5; // rbp
  st_my_thread_var *v6; // rbp
  st_my_thread_var *v8; // rax

  v3 = my_flags;
  v4 = (struct stat64 *)stat_area;
  if ( !stat_area )
  {
    v4 = (struct stat64 *)my_malloc(0x90uLL, (unsigned __int8)my_flags);
    if ( !v4 )
      goto error;
  }
  v5 = (stat *)v4;
  if ( !__xstat64(1, path, v4) )
    return v5;
  v6 = my_thread_var();
  v6->thr_errno = *__errno_location();
  if ( !stat_area )
  {
    v5 = 0LL;
    my_free(v4);
    if ( (v3 & 0x18) == 0 )
      return v5;
  }
  else
  {
error:
    v5 = 0LL;
    if ( (v3 & 0x18) == 0 )
      return v5;
  }
  v8 = my_thread_var();
  my_error(13, 36, path, (unsigned int)v8->thr_errno);
  return 0LL;
};
