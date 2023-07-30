// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/crc16.c

// Line 80: range 000000000CAC2DF0-000000000CAC2E25
uint16_t __fastcall crc16(const char *buf, int len)
{
  const char *v2; // rsi
  uint16_t result; // ax

  if ( len <= 0 )
    return 0;
  v2 = &buf[len - 1 + 1];
  result = 0;
  do
    result = crc16tab[(unsigned __int8)(*buf++ ^ HIBYTE(result))] ^ (result << 8);
  while ( buf != v2 );
  return result;
};
