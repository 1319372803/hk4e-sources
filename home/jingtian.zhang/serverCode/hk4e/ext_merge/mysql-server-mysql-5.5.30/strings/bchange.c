// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/strings/bchange.c

// Line 32: range 000000000CFBE380-000000000CFBE3D0
void __fastcall bchange(uchar *dst, size_t old_length, const uchar *src, size_t new_length, size_t tot_length)
{
  size_t v6; // rdx

  v6 = tot_length - old_length;
  if ( old_length < new_length )
    bmove_upp(&dst[v6 + new_length], &dst[tot_length], v6);
  else
    memmove(&dst[new_length], &dst[old_length], v6);
  memcpy(dst, src, new_length);
};
