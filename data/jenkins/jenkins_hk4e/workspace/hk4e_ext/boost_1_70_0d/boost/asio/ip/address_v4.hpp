// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/address_v4.hpp

// Line 64: range 000000000C618C24-000000000C618C73
void __cdecl boost::asio::ip::address_v4::address_v4(boost::asio::ip::address_v4 *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->addr_.s_addr = 0;
};

// Line 76: range 000000000C618C74-000000000C618D00
void __cdecl boost::asio::ip::address_v4::address_v4(
        boost::asio::ip::address_v4 *const this,
        const boost::asio::ip::address_v4 *other)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)other & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(other);
  }
  this->addr_.s_addr = other->addr_.s_addr;
};

// Line 83: range 000000000C618D02-000000000C618D8E
void __cdecl boost::asio::ip::address_v4::address_v4(
        boost::asio::ip::address_v4 *const this,
        boost::asio::ip::address_v4 *other)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)other & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(other);
  }
  this->addr_.s_addr = other->addr_.s_addr;
};

// Line 98: range 000000000C618D90-000000000C618E1F
boost::asio::ip::address_v4 *__cdecl boost::asio::ip::address_v4::operator=(
        boost::asio::ip::address_v4 *const this,
        boost::asio::ip::address_v4 *other)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)other & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(other);
  }
  this->addr_.s_addr = other->addr_.s_addr;
  return this;
};

// Line 167: range 000000000C618E20-000000000C618EB1
bool __cdecl boost::asio::ip::operator==(const boost::asio::ip::address_v4 *a1, const boost::asio::ip::address_v4 *a2)
{
  in_addr_t s_addr; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(a1);
  }
  s_addr = a1->addr_.s_addr;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(a2);
  }
  return s_addr == a2->addr_.s_addr;
};
