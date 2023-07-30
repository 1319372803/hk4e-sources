// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/bmove_upp.c

// Line 30: range 000000000CFAA8A0-000000000CFAA8C9
void __fastcall bmove_upp(uchar *dst, const uchar *src, size_t len)
{
  size_t v3; // rax
  const uchar *v4; // rsi
  uchar *v5; // rdi

  v3 = len - 1;
  v4 = &src[-len];
  v5 = &dst[-len];
  if ( len )
  {
    do
    {
      v5[v3] = v4[v3];
      --v3;
    }
    while ( v3 != -1LL );
  }
};
