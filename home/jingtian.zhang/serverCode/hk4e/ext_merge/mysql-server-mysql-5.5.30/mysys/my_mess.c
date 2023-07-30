// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_mess.c

// Line 20: range 000000000CFBBB40-000000000CFBBBCD
void __fastcall my_message_stderr(uint error, const char *str, myf MyFlags)
{
  char v3; // bl

  v3 = MyFlags;
  fflush(stdout);
  if ( (v3 & 4) != 0 )
    fputc(7, stderr);
  if ( my_progname )
  {
    fputs(my_progname, stderr);
    fwrite(ptr, 1uLL, 2uLL, stderr);
  }
  fputs(str, stderr);
  fputc(10, stderr);
  fflush(stderr);
};
