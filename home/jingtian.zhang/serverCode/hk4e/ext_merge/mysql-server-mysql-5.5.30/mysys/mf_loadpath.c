// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/mf_loadpath.c

// Line 28: range 000000000CFC7B30-000000000CFC7C56
char *__fastcall my_load_path(char *to, const char *path, const char *own_path_prefix)
{
  int v4; // r12d
  int v5; // eax
  char buff[512]; // [rsp+0h] [rbp-228h] BYREF

  if ( *(_WORD *)path == 12158 || test_if_hard_path(path) )
    goto LABEL_9;
  if ( *path == 46 && path[1] == 47 )
  {
    v4 = 514;
    LODWORD(own_path_prefix) = 2;
  }
  else if ( is_prefix(path, "..") )
  {
    v4 = 512;
    LODWORD(own_path_prefix) = 0;
  }
  else
  {
    v4 = 512;
    if ( own_path_prefix )
    {
      strxnmov(buff, 0x200uLL, own_path_prefix, path, 0LL);
      goto LABEL_8;
    }
  }
  v5 = strlen(path);
  if ( my_getwd(buff, (unsigned int)(v4 - v5), 0) )
LABEL_9:
    strnmov(buff, path, 0x200uLL);
  else
    strncat(buff, &path[(int)own_path_prefix], 0x1FFuLL);
LABEL_8:
  strnmov(to, buff, 0x200uLL);
  to[511] = 0;
  return to;
};
