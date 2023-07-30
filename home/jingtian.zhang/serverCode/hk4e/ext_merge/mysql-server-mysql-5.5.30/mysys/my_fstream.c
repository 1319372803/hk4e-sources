// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_fstream.c

// Line 46: range 000000000CFBAC30-000000000CFBAD41
size_t __fastcall my_fread(FILE *stream, uchar *Buffer, size_t Count, myf MyFlags)
{
  char v4; // r13
  size_t v6; // r12
  int *v7; // rbp
  st_my_thread_var *v8; // rax
  int v9; // edx
  int v10; // eax
  size_t v11; // rdx
  int *v13; // rax
  unsigned int v14; // r14d
  int v15; // eax
  char *v16; // rax
  int *v17; // rax
  unsigned int v18; // r14d
  int v19; // eax
  char *v20; // rax

  v4 = MyFlags;
  v6 = fread(Buffer, 1uLL, Count, stream);
  if ( v6 == Count )
  {
    v11 = 0LL;
    goto LABEL_9;
  }
  if ( (v4 & 0x1A) == 0 )
    goto LABEL_3;
  if ( ferror(stream) )
  {
    v17 = __errno_location();
    v18 = *v17;
    v7 = v17;
    v19 = my_fileno(stream);
    v20 = my_filename(v19);
    my_error(2, 36, v20, v18);
  }
  else
  {
    if ( (v4 & 6) == 0 )
    {
LABEL_3:
      v7 = __errno_location();
      goto LABEL_4;
    }
    v13 = __errno_location();
    v14 = *v13;
    v7 = v13;
    v15 = my_fileno(stream);
    v16 = my_filename(v15);
    my_error(9, 36, v16, v14);
  }
LABEL_4:
  v8 = my_thread_var();
  v9 = -1;
  if ( *v7 )
    v9 = *v7;
  v8->thr_errno = v9;
  v10 = ferror(stream);
  v11 = -1LL;
  if ( v10 )
    return -1LL;
LABEL_9:
  if ( (v4 & 6) == 0 )
    return v6;
  return v11;
};

// Line 90: range 000000000CFBAD50-000000000CFBAE62
size_t __fastcall my_fwrite(FILE *stream, const uchar *Buffer, size_t Count, myf MyFlags)
{
  __off64_t i; // r13
  size_t v7; // r15
  st_my_thread_var *v8; // r14
  int *v9; // rcx
  size_t v10; // r14
  unsigned int v12; // ebx
  int v13; // eax
  char *v14; // rax
  char MyFlagsa; // [rsp+Ch] [rbp-4Ch]
  size_t writtenbytes; // [rsp+10h] [rbp-48h]
  int *v17; // [rsp+18h] [rbp-40h]

  MyFlagsa = MyFlags;
  writtenbytes = 0LL;
  for ( i = ftello64(stream); ; my_fseek(stream, i, 0, 0) )
  {
    v7 = fwrite(Buffer, 1uLL, Count, stream);
    if ( v7 == Count )
      break;
    v8 = my_thread_var();
    v9 = __errno_location();
    v8->thr_errno = *v9;
    if ( v7 != -1LL )
    {
      writtenbytes += v7;
      i += v7;
      Buffer += v7;
      Count -= v7;
    }
    if ( *v9 != 4 )
    {
      v17 = v9;
      if ( !ferror(stream) && (MyFlagsa & 6) == 0 )
        return v7 + writtenbytes;
      v10 = -1LL;
      if ( (MyFlagsa & 0x1A) != 0 )
      {
        v12 = *v17;
        v13 = my_fileno(stream);
        v14 = my_filename(v13);
        my_error(3, 36, v14, v12);
      }
      return v10;
    }
  }
  if ( (MyFlagsa & 6) == 0 )
    return v7 + writtenbytes;
  return 0LL;
};

// Line 164: range 000000000CFBABE0-000000000CFBAC04
my_off_t __fastcall my_fseek(FILE *stream, my_off_t pos, int whence, myf MyFlags)
{
  if ( fseeko64(stream, pos, whence) )
    return -1LL;
  else
    return ftello64(stream);
};

// Line 180: range 000000000CFBAC10-000000000CFBAC20
// attributes: thunk
my_off_t __fastcall my_ftell(FILE *stream, myf MyFlags)
{
  return ftello64(stream);
};
