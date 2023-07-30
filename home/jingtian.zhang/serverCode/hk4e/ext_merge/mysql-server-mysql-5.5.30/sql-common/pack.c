// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/sql-common/pack.c

// Line 23: range 000000000CFA9E90-000000000CFA9F2D
ulong __fastcall net_field_length(uchar **packet)
{
  uchar *v1; // rdx
  uchar v2; // al
  ulong result; // rax

  v1 = *packet;
  v2 = **packet;
  if ( v2 <= 0xFAu )
  {
    *packet = v1 + 1;
    return *v1;
  }
  else
  {
    switch ( v2 )
    {
      case 0xFB:
        result = -1LL;
        *packet = v1 + 1;
        break;
      case 0xFC:
        *packet = v1 + 3;
        return (unsigned __int16)(v1[1] + (v1[2] << 8));
      case 0xFD:
        *packet = v1 + 4;
        return v1[1] + (v1[2] << 8) + (v1[3] << 16);
      default:
        *packet = v1 + 9;
        return v1[1] + (v1[3] << 16) + (v1[2] << 8) + (v1[4] << 24);
    }
  }
  return result;
};

// Line 51: range 000000000CFA9F30-000000000CFA9FFD
my_ulonglong __fastcall net_field_length_ll(uchar **packet)
{
  uchar *v1; // rdx
  uchar v2; // al
  my_ulonglong result; // rax

  v1 = *packet;
  v2 = **packet;
  if ( v2 <= 0xFAu )
  {
    *packet = v1 + 1;
    return *v1;
  }
  else
  {
    switch ( v2 )
    {
      case 0xFB:
        result = -1LL;
        *packet = v1 + 1;
        break;
      case 0xFC:
        *packet = v1 + 3;
        return (unsigned __int16)(v1[1] + (v1[2] << 8));
      case 0xFD:
        *packet = v1 + 4;
        return v1[1] + (v1[2] << 8) + (v1[3] << 16);
      default:
        *packet = v1 + 9;
        return v1[1]
             + (v1[2] << 8)
             + (v1[3] << 16)
             + (v1[4] << 24)
             + ((unsigned __int64)(v1[5] + (v1[7] << 16) + (v1[6] << 8) + (v1[8] << 24)) << 32);
    }
  }
  return result;
};

// Line 99: range 000000000CFAA000-000000000CFAA09D
uchar *__fastcall net_store_length(uchar *packet, ulonglong length)
{
  uchar *result; // rax

  if ( length <= 0xFA )
  {
    *packet = length;
    return packet + 1;
  }
  else if ( length <= 0xFFFF )
  {
    packet[1] = length;
    *packet = -4;
    packet[2] = BYTE1(length);
    return packet + 3;
  }
  else
  {
    packet[1] = length;
    if ( length <= 0xFFFFFF )
    {
      *packet = -3;
      packet[3] = BYTE2(length);
      packet[2] = BYTE1(length);
      return packet + 4;
    }
    else
    {
      *packet = -2;
      packet[2] = BYTE1(length);
      packet[5] = BYTE4(length);
      packet[3] = BYTE2(length);
      packet[4] = BYTE3(length);
      packet[6] = BYTE5(length);
      packet[8] = HIBYTE(length);
      result = packet + 9;
      packet[7] = BYTE6(length);
    }
  }
  return result;
};
