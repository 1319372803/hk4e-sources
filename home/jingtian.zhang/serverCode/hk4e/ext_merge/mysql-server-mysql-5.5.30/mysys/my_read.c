// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_read.c

// Line 37: range 000000000CFBC220-000000000CFBC3BF
size_t __fastcall my_read(File Filedes, uchar *Buffer, size_t Count, myf MyFlags)
{
  __int16 v4; // r12
  int v6; // r13d
  size_t v7; // rbx
  int *v8; // r14
  size_t v9; // r15
  st_my_thread_var *v10; // rax
  size_t result; // rax
  char *v12; // rax
  unsigned int thr_errno; // ebx
  char *v14; // rax
  unsigned int v16; // [rsp+1Ch] [rbp-3Ch]

  v4 = MyFlags;
  v6 = MyFlags & 6;
  v7 = Count;
  v8 = __errno_location();
  while ( 1 )
  {
    *v8 = 0;
    v9 = read(Filedes, Buffer, v7);
    if ( v9 == v7 )
      break;
    v10 = my_thread_var();
    v10->thr_errno = *v8;
    if ( !*v8 )
      goto LABEL_15;
    if ( v9 == -1LL )
    {
LABEL_7:
      if ( *v8 != 4 )
      {
        if ( (v4 & 0x1A) == 0 )
          goto LABEL_18;
        goto LABEL_9;
      }
    }
    else
    {
      if ( v6 )
      {
LABEL_15:
        v10->thr_errno = 175;
        if ( !v9 )
          goto LABEL_7;
        goto LABEL_16;
      }
      if ( !v9 )
        goto LABEL_7;
LABEL_16:
      if ( (_DWORD)v9 == -1 )
        goto LABEL_7;
      if ( (v4 & 0x1A) == 0 )
      {
LABEL_18:
        if ( v9 == -1LL )
          return -1LL;
        goto LABEL_19;
      }
LABEL_9:
      if ( v9 == -1LL )
      {
        thr_errno = v10->thr_errno;
        v14 = my_filename(Filedes);
        my_error(2, 36, v14, thr_errno);
        return -1LL;
      }
      if ( !v6 )
      {
LABEL_11:
        if ( (v4 & 0x200) == 0 )
          goto LABEL_12;
        goto LABEL_21;
      }
      v16 = v10->thr_errno;
      v12 = my_filename(Filedes);
      my_error(9, 36, v12, v16);
LABEL_19:
      if ( !v6 )
        goto LABEL_11;
      if ( (v4 & 0x200) == 0 )
        return -1LL;
LABEL_21:
      Buffer += v9;
      v7 -= v9;
    }
  }
  if ( v6 )
    return 0LL;
LABEL_12:
  result = Count;
  if ( (v4 & 0x200) == 0 )
    return v9;
  return result;
};
