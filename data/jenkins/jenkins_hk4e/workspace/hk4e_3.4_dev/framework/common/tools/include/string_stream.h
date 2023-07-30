// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/string_stream.h

// Line 35: range 000000000C65A53A-000000000C65A60E
void __cdecl common::tools::FixedBuffer<4096>::FixedBuffer(common::tools::FixedBuffer<4096> *const this)
{
  char *v1; // rcx
  char *data; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->data_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->cur_);
  this->cur_ = 0LL;
  v1 = (char *)operator new[](0x1000uLL);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->data_ = v1;
  data = this->data_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->cur_);
  this->cur_ = data;
};

// Line 36: range 000000000C65A610-000000000C65A65A
void __cdecl common::tools::FixedBuffer<4096>::~FixedBuffer(common::tools::FixedBuffer<4096> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->data_ )
    operator delete[](this->data_);
};

// Line 38: range 000000000C664054-000000000C6640EC
void __cdecl common::tools::FixedBuffer<16384>::append(
        common::tools::FixedBuffer<16384> *const this,
        const char *buf,
        size_t len)
{
  size_t lena; // [rsp+8h] [rbp-18h]

  lena = len;
  if ( len > common::tools::FixedBuffer<16384>::avail(this) )
    lena = common::tools::FixedBuffer<16384>::avail(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->cur_);
  memcpy(this->cur_, buf, lena);
  this->cur_ += lena;
};

// Line 47: range 000000000C670056-000000000C6700CF
void __cdecl common::tools::FixedBuffer<16384>::add(common::tools::FixedBuffer<16384> *const this, size_t len)
{
  size_t lena; // [rsp+0h] [rbp-10h]

  lena = len;
  if ( len > common::tools::FixedBuffer<16384>::avail(this) )
    lena = common::tools::FixedBuffer<16384>::avail(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->cur_);
  this->cur_ += lena;
};

// Line 47: range 000000000C674470-000000000C6744E9
void __cdecl common::tools::FixedBuffer<4096>::add(common::tools::FixedBuffer<4096> *const this, size_t len)
{
  size_t lena; // [rsp+0h] [rbp-10h]

  lena = len;
  if ( len > common::tools::FixedBuffer<4096>::avail(this) )
    lena = common::tools::FixedBuffer<4096>::avail(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->cur_);
  this->cur_ += lena;
};

// Line 57: range 000000000C6744EA-000000000C674552
int __cdecl common::tools::FixedBuffer<4096>::length(const common::tools::FixedBuffer<4096> *const this)
{
  char *cur; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->cur_);
  cur = this->cur_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return (_DWORD)cur - LODWORD(this->data_);
};

// Line 58: range 000000000C66FE50-000000000C66FE8A
char *__cdecl common::tools::FixedBuffer<16384>::current(common::tools::FixedBuffer<16384> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->cur_);
  return this->cur_;
};

// Line 58: range 000000000C6742BE-000000000C6742F8
char *__cdecl common::tools::FixedBuffer<4096>::current(common::tools::FixedBuffer<4096> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->cur_);
  return this->cur_;
};

// Line 59: range 000000000C66FE00-000000000C66FE4F
int __cdecl common::tools::FixedBuffer<16384>::avail(const common::tools::FixedBuffer<16384> *const this)
{
  unsigned int v1; // edx

  v1 = (unsigned int)common::tools::FixedBuffer<16384>::end(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->cur_);
  return v1 - (unsigned __int64)this->cur_;
};

// Line 59: range 000000000C67426E-000000000C6742BD
int __cdecl common::tools::FixedBuffer<4096>::avail(const common::tools::FixedBuffer<4096> *const this)
{
  unsigned int v1; // edx

  v1 = (unsigned int)common::tools::FixedBuffer<4096>::end(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->cur_);
  return v1 - (unsigned __int64)this->cur_;
};

// Line 63: range 000000000C667ECE-000000000C667F66
std::string *__cdecl common::tools::FixedBuffer<4096>::toString[abi:cxx11](
        std::string *retstr,
        const common::tools::FixedBuffer<4096> *const this)
{
  __int64 v2; // rdx
  char v4[17]; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(v4);
  v2 = common::tools::FixedBuffer<4096>::length(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::string::basic_string(retstr, this->data_, v2, v4);
  std::allocator<char>::~allocator(v4);
  return retstr;
};

// Line 67: range 000000000C67CBB8-000000000C67CBF3
const char *__cdecl common::tools::FixedBuffer<16384>::end(const common::tools::FixedBuffer<16384> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->data_ + 0x4000;
};

// Line 67: range 000000000C67FFF0-000000000C68002B
const char *__cdecl common::tools::FixedBuffer<4096>::end(const common::tools::FixedBuffer<4096> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->data_ + 4096;
};

// Line 74: range 000000000C63F590-000000000C63F5AA
void __cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this)
{
  common::tools::FixedBuffer<4096>::FixedBuffer(&this->buffer_);
};

// Line 74: range 000000000C63F5AC-000000000C63F5C6
void __cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this)
{
  common::tools::FixedBuffer<4096>::~FixedBuffer(&this->buffer_);
};

// Line 81: range 000000000F8F304A-000000000F8F308A
common::tools::StringStream<common::tools::FixedBuffer<16384> >::self *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        bool v)
{
  const char *v2; // rax

  if ( v )
    v2 = "1";
  else
    v2 = "0";
  common::tools::FixedBuffer<16384>::append(&this->buffer_, v2, 1uLL);
  return this;
};

// Line 96: range 000000000CF63280-000000000CF632A7
common::tools::StringStream<common::tools::FixedBuffer<16384> >::self *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        float v)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this, v);
  return this;
};

// Line 107: range 000000000C657630-000000000C65768E
common::tools::StringStream<common::tools::FixedBuffer<16384> >::self *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        const char *str)
{
  size_t v2; // rdx

  if ( str )
  {
    v2 = strlen(str);
    common::tools::FixedBuffer<16384>::append(&this->buffer_, str, v2);
  }
  else
  {
    common::tools::FixedBuffer<16384>::append(&this->buffer_, "(null)", 6uLL);
  }
  return this;
};

// Line 123: range 000000000C6693CC-000000000C669418
common::tools::StringStream<common::tools::FixedBuffer<16384> >::self *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        const std::string *v)
{
  size_t v2; // r12
  const char *v3; // rax

  v2 = std::string::size(v);
  v3 = (const char *)std::string::c_str(v);
  common::tools::FixedBuffer<16384>::append(&this->buffer_, v3, v2);
  return this;
};

// Line 123: range 000000000F7F108A-000000000F7F10D6
common::tools::StringStream<common::tools::FixedBuffer<4096> >::self *__cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        const std::string *v)
{
  size_t v2; // r12
  const char *v3; // rax

  v2 = std::string::size(v);
  v3 = (const char *)std::string::c_str(v);
  common::tools::FixedBuffer<4096>::append(&this->buffer_, v3, v2);
  return this;
};

// Line 154: range 000000000C65A6E2-000000000C65A76D
std::string *__cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
        std::string *retstr,
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    this = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)32;
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::FixedBuffer<4096>::toString[abi:cxx11](retstr, &this->buffer_);
  return retstr;
};

// Line 187: range 000000000C66FE8C-000000000C670055
size_t __cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::convert<int>(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        char *buf,
        int value)
{
  unsigned __int64 v3; // rcx
  char v4; // si
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  int i; // [rsp+20h] [rbp-10h]
  int lsd; // [rsp+24h] [rbp-Ch]
  unsigned __int64 p; // [rsp+28h] [rbp-8h]

  i = value;
  p = (unsigned __int64)buf;
  do
  {
    lsd = i % 10;
    i /= 10;
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
    v3 = (unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero[lsd];
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero + lsd) & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero[lsd]);
    }
    v4 = *(_BYTE *)v3;
    v5 = p++;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store1(v5);
    *(_BYTE *)v5 = v4;
  }
  while ( i );
  if ( value < 0 )
  {
    v6 = p++;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_store1(v6);
    *(_BYTE *)v6 = 45;
  }
  if ( *(_BYTE *)((p >> 3) + 0x7FFF8000) != 0 && (char)(p & 7) >= *(_BYTE *)((p >> 3) + 0x7FFF8000) )
    __asan_report_store1(p);
  *(_BYTE *)p = 0;
  std::reverse<char *>(buf, (char *)p);
  return p - (_QWORD)buf;
};

// Line 187: range 000000000C6CF5AC-000000000C6CF790
size_t __cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::convert<long>(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        char *buf,
        __int64 value)
{
  unsigned __int64 v3; // rcx
  char v4; // si
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  int lsd; // [rsp+2Ch] [rbp-14h]
  __int64 i; // [rsp+30h] [rbp-10h]
  unsigned __int64 p; // [rsp+38h] [rbp-8h]

  i = value;
  p = (unsigned __int64)buf;
  do
  {
    lsd = (int)i % 10;
    i /= 10LL;
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
    v3 = (unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero[lsd];
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero + lsd) & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero[lsd]);
    }
    v4 = *(_BYTE *)v3;
    v5 = p++;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store1(v5);
    *(_BYTE *)v5 = v4;
  }
  while ( i );
  if ( value < 0 )
  {
    v6 = p++;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_store1(v6);
    *(_BYTE *)v6 = 45;
  }
  if ( *(_BYTE *)((p >> 3) + 0x7FFF8000) != 0 && (char)(p & 7) >= *(_BYTE *)((p >> 3) + 0x7FFF8000) )
    __asan_report_store1(p);
  *(_BYTE *)p = 0;
  std::reverse<char *>(buf, (char *)p);
  return p - (_QWORD)buf;
};

// Line 187: range 000000000C68337E-000000000C6834F2
size_t __cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::convert<unsigned int>(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        char *buf,
        unsigned int value)
{
  unsigned __int64 v3; // rcx
  char v4; // si
  unsigned __int64 v5; // rax
  int lsd; // [rsp+24h] [rbp-Ch]
  unsigned __int64 p; // [rsp+28h] [rbp-8h]

  p = (unsigned __int64)buf;
  do
  {
    lsd = value % 0xA;
    value /= 0xAu;
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
    v3 = (unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero[lsd];
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero + lsd) & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero[lsd]);
    }
    v4 = *(_BYTE *)v3;
    v5 = p++;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store1(v5);
    *(_BYTE *)v5 = v4;
  }
  while ( value );
  if ( *(_BYTE *)((p >> 3) + 0x7FFF8000) != 0 && (char)(p & 7) >= *(_BYTE *)((p >> 3) + 0x7FFF8000) )
    __asan_report_store1(p);
  *(_BYTE *)p = 0;
  std::reverse<char *>(buf, (char *)p);
  return p - (_QWORD)buf;
};

// Line 187: range 000000000C6839AC-000000000C683B2F
size_t __cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::convert<unsigned long>(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        char *buf,
        unsigned __int64 value)
{
  unsigned __int64 v3; // rcx
  char v4; // si
  unsigned __int64 v5; // rax
  int lsd; // [rsp+2Ch] [rbp-14h]
  unsigned __int64 p; // [rsp+38h] [rbp-8h]

  p = (unsigned __int64)buf;
  do
  {
    lsd = value % 0xA;
    value /= 0xAuLL;
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
    v3 = (unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero[lsd];
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero + lsd) & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero[lsd]);
    }
    v4 = *(_BYTE *)v3;
    v5 = p++;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store1(v5);
    *(_BYTE *)v5 = v4;
  }
  while ( value );
  if ( *(_BYTE *)((p >> 3) + 0x7FFF8000) != 0 && (char)(p & 7) >= *(_BYTE *)((p >> 3) + 0x7FFF8000) )
    __asan_report_store1(p);
  *(_BYTE *)p = 0;
  std::reverse<char *>(buf, (char *)p);
  return p - (_QWORD)buf;
};

// Line 187: range 000000000F8CB840-000000000F8CBA09
size_t __cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::convert<int>(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        char *buf,
        int value)
{
  unsigned __int64 v3; // rcx
  char v4; // si
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  int i; // [rsp+20h] [rbp-10h]
  int lsd; // [rsp+24h] [rbp-Ch]
  unsigned __int64 p; // [rsp+28h] [rbp-8h]

  i = value;
  p = (unsigned __int64)buf;
  do
  {
    lsd = i % 10;
    i /= 10;
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
    v3 = (unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero[lsd];
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero + lsd) & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero[lsd]);
    }
    v4 = *(_BYTE *)v3;
    v5 = p++;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store1(v5);
    *(_BYTE *)v5 = v4;
  }
  while ( i );
  if ( value < 0 )
  {
    v6 = p++;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_store1(v6);
    *(_BYTE *)v6 = 45;
  }
  if ( *(_BYTE *)((p >> 3) + 0x7FFF8000) != 0 && (char)(p & 7) >= *(_BYTE *)((p >> 3) + 0x7FFF8000) )
    __asan_report_store1(p);
  *(_BYTE *)p = 0;
  std::reverse<char *>(buf, (char *)p);
  return p - (_QWORD)buf;
};

// Line 187: range 000000000C6742FA-000000000C67446E
size_t __cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::convert<unsigned int>(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        char *buf,
        unsigned int value)
{
  unsigned __int64 v3; // rcx
  char v4; // si
  unsigned __int64 v5; // rax
  int lsd; // [rsp+24h] [rbp-Ch]
  unsigned __int64 p; // [rsp+28h] [rbp-8h]

  p = (unsigned __int64)buf;
  do
  {
    lsd = value % 0xA;
    value /= 0xAu;
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
    v3 = (unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero[lsd];
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero + lsd) & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero[lsd]);
    }
    v4 = *(_BYTE *)v3;
    v5 = p++;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store1(v5);
    *(_BYTE *)v5 = v4;
  }
  while ( value );
  if ( *(_BYTE *)((p >> 3) + 0x7FFF8000) != 0 && (char)(p & 7) >= *(_BYTE *)((p >> 3) + 0x7FFF8000) )
    __asan_report_store1(p);
  *(_BYTE *)p = 0;
  std::reverse<char *>(buf, (char *)p);
  return p - (_QWORD)buf;
};

// Line 187: range 000000000F8BF7BA-000000000F8BF93D
size_t __cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::convert<unsigned long>(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        char *buf,
        unsigned __int64 value)
{
  unsigned __int64 v3; // rcx
  char v4; // si
  unsigned __int64 v5; // rax
  int lsd; // [rsp+2Ch] [rbp-14h]
  unsigned __int64 p; // [rsp+38h] [rbp-8h]

  p = (unsigned __int64)buf;
  do
  {
    lsd = value % 0xA;
    value /= 0xAuLL;
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
    v3 = (unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero[lsd];
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero + lsd) & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero[lsd]);
    }
    v4 = *(_BYTE *)v3;
    v5 = p++;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store1(v5);
    *(_BYTE *)v5 = v4;
  }
  while ( value );
  if ( *(_BYTE *)((p >> 3) + 0x7FFF8000) != 0 && (char)(p & 7) >= *(_BYTE *)((p >> 3) + 0x7FFF8000) )
    __asan_report_store1(p);
  *(_BYTE *)p = 0;
  std::reverse<char *>(buf, (char *)p);
  return p - (_QWORD)buf;
};

// Line 211: range 000000000CA2318A-000000000CA234BF
size_t __fastcall common::tools::StringStream<common::tools::FixedBuffer<16384>>::convertHex(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        char *buf,
        uintptr_t value)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v3; // rbp
  char *i; // rcx
  uintptr_t v6; // rdi
  int v7; // eax
  uintptr_t v8; // rax
  const void *v9; // rsi
  char v10; // al
  char v11; // al

  for ( i = buf; ; i = (char *)v3 )
  {
    v7 = value & 0xF;
    v6 = value;
    value >>= 4;
    v8 = (uintptr_t)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::digitsHex[v7];
    v9 = (const void *)*(unsigned __int8 *)((v8 >> 3) + 0x7FFF8000);
    if ( (char)v9 <= (char)(v8 & 7) && (_BYTE)v9 )
    {
      v6 = v8;
      __asan_report_load1(v8);
      goto LABEL_3;
    }
    v9 = (const void *)*(unsigned __int8 *)v8;
    v3 = (common::tools::StringStream<common::tools::FixedBuffer<16384> > *)(i + 1);
    v10 = *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000);
    if ( v10 <= ((unsigned __int8)i & 7) )
    {
      if ( v10 )
        break;
    }
LABEL_3:
    *i = (char)v9;
    if ( v6 <= 0xF )
      goto LABEL_10;
  }
  __asan_report_store1(i);
LABEL_10:
  v11 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
  if ( v11 <= ((unsigned __int8)v3 & 7) && v11 )
  {
    __asan_report_store1(v3);
    return (size_t)common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v3, v9);
  }
  else
  {
    LOBYTE(v3->buffer_.data_) = 0;
    std::__reverse<char *>(buf, (char *)v3, (std::random_access_iterator_tag)((unsigned __int8)v3 & 7));
    return (char *)v3 - buf;
  }
};

// Line 245: range 000000000C6640EE-000000000C66414D
void __cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::formatInteger<int>(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        int v)
{
  char *v2; // rcx
  size_t len; // [rsp+18h] [rbp-8h]

  if ( common::tools::FixedBuffer<16384>::avail(&this->buffer_) > 31 )
  {
    v2 = common::tools::FixedBuffer<16384>::current(&this->buffer_);
    len = common::tools::StringStream<common::tools::FixedBuffer<16384>>::convert<int>(this, v2, v);
    common::tools::FixedBuffer<16384>::add(&this->buffer_, len);
  }
};

// Line 245: range 000000000C6CA434-000000000C6CA495
void __cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::formatInteger<long>(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        __int64 v)
{
  char *v2; // rcx
  size_t len; // [rsp+18h] [rbp-8h]

  if ( common::tools::FixedBuffer<16384>::avail(&this->buffer_) > 31 )
  {
    v2 = common::tools::FixedBuffer<16384>::current(&this->buffer_);
    len = common::tools::StringStream<common::tools::FixedBuffer<16384>>::convert<long>(this, v2, v);
    common::tools::FixedBuffer<16384>::add(&this->buffer_, len);
  }
};

// Line 245: range 000000000C67A462-000000000C67A4C1
void __cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::formatInteger<unsigned int>(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        unsigned int v)
{
  char *v2; // rcx
  size_t len; // [rsp+18h] [rbp-8h]

  if ( common::tools::FixedBuffer<16384>::avail(&this->buffer_) > 31 )
  {
    v2 = common::tools::FixedBuffer<16384>::current(&this->buffer_);
    len = common::tools::StringStream<common::tools::FixedBuffer<16384>>::convert<unsigned int>(this, v2, v);
    common::tools::FixedBuffer<16384>::add(&this->buffer_, len);
  }
};

// Line 245: range 000000000C67A886-000000000C67A8E7
void __cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::formatInteger<unsigned long>(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        unsigned __int64 v)
{
  char *v2; // rcx
  size_t len; // [rsp+18h] [rbp-8h]

  if ( common::tools::FixedBuffer<16384>::avail(&this->buffer_) > 31 )
  {
    v2 = common::tools::FixedBuffer<16384>::current(&this->buffer_);
    len = common::tools::StringStream<common::tools::FixedBuffer<16384>>::convert<unsigned long>(this, v2, v);
    common::tools::FixedBuffer<16384>::add(&this->buffer_, len);
  }
};

// Line 245: range 000000000F85B4B4-000000000F85B513
void __cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::formatInteger<int>(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        int v)
{
  char *v2; // rcx
  size_t len; // [rsp+18h] [rbp-8h]

  if ( common::tools::FixedBuffer<4096>::avail(&this->buffer_) > 31 )
  {
    v2 = common::tools::FixedBuffer<4096>::current(&this->buffer_);
    len = common::tools::StringStream<common::tools::FixedBuffer<4096>>::convert<int>(this, v2, v);
    common::tools::FixedBuffer<4096>::add(&this->buffer_, len);
  }
};

// Line 245: range 000000000C667DD4-000000000C667E33
void __cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::formatInteger<unsigned int>(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        unsigned int v)
{
  char *v2; // rcx
  size_t len; // [rsp+18h] [rbp-8h]

  if ( common::tools::FixedBuffer<4096>::avail(&this->buffer_) > 31 )
  {
    v2 = common::tools::FixedBuffer<4096>::current(&this->buffer_);
    len = common::tools::StringStream<common::tools::FixedBuffer<4096>>::convert<unsigned int>(this, v2, v);
    common::tools::FixedBuffer<4096>::add(&this->buffer_, len);
  }
};

// Line 245: range 000000000F852764-000000000F8527C5
void __cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::formatInteger<unsigned long>(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        unsigned __int64 v)
{
  char *v2; // rcx
  size_t len; // [rsp+18h] [rbp-8h]

  if ( common::tools::FixedBuffer<4096>::avail(&this->buffer_) > 31 )
  {
    v2 = common::tools::FixedBuffer<4096>::current(&this->buffer_);
    len = common::tools::StringStream<common::tools::FixedBuffer<4096>>::convert<unsigned long>(this, v2, v);
    common::tools::FixedBuffer<4096>::add(&this->buffer_, len);
  }
};

// Line 252: range 000000000C667E34-000000000C667ECC
void __cdecl common::tools::FixedBuffer<4096>::append(
        common::tools::FixedBuffer<4096> *const this,
        const char *buf,
        size_t len)
{
  size_t lena; // [rsp+8h] [rbp-18h]

  lena = len;
  if ( len > common::tools::FixedBuffer<4096>::avail(this) )
    lena = common::tools::FixedBuffer<4096>::avail(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->cur_);
  memcpy(this->cur_, buf, lena);
  this->cur_ += lena;
};

// Line 262: range 000000000C6B8C52-000000000C6B8C7B
common::tools::StringStream<common::tools::FixedBuffer<16384> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        unsigned __int16 v)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this, v);
  return this;
};

// Line 269: range 000000000C657690-000000000C6576B5
common::tools::StringStream<common::tools::FixedBuffer<16384> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        int v)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::formatInteger<int>(this, v);
  return this;
};

// Line 269: range 000000000F7FBB38-000000000F7FBB5D
common::tools::StringStream<common::tools::FixedBuffer<4096> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        int v)
{
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::formatInteger<int>(this, v);
  return this;
};

// Line 276: range 000000000C66DB6E-000000000C66DB93
common::tools::StringStream<common::tools::FixedBuffer<16384> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        unsigned int v)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::formatInteger<unsigned int>(this, v);
  return this;
};

// Line 276: range 000000000C65A65C-000000000C65A681
common::tools::StringStream<common::tools::FixedBuffer<4096> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        unsigned int v)
{
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::formatInteger<unsigned int>(this, v);
  return this;
};

// Line 280: range 000000000C65A682-000000000C65A6E0
common::tools::StringStream<common::tools::FixedBuffer<4096> >::self *__cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        const char *str)
{
  size_t v2; // rdx

  if ( str )
  {
    v2 = strlen(str);
    common::tools::FixedBuffer<4096>::append(&this->buffer_, str, v2);
  }
  else
  {
    common::tools::FixedBuffer<4096>::append(&this->buffer_, "(null)", 6uLL);
  }
  return this;
};

// Line 283: range 000000000C6C2884-000000000C6C28AC
common::tools::StringStream<common::tools::FixedBuffer<16384> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        __int64 v)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::formatInteger<long>(this, v);
  return this;
};

// Line 290: range 000000000C66E160-000000000C66E188
common::tools::StringStream<common::tools::FixedBuffer<16384> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        unsigned __int64 v)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::formatInteger<unsigned long>(this, v);
  return this;
};

// Line 290: range 000000000F7F4ABC-000000000F7F4AE4
common::tools::StringStream<common::tools::FixedBuffer<4096> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        unsigned __int64 v)
{
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::formatInteger<unsigned long>(this, v);
  return this;
};

// Line 342: range 000000000F81E956-000000000F81EB86
common::tools::StringStream<common::tools::FixedBuffer<16384> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<<std::pair<unsigned int,bool>>(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        const std::vector<std::pair<unsigned int,bool>> *vec)
{
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,bool>*,std::vector<std::pair<unsigned int,bool>> > *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,bool>*,std::vector<std::pair<unsigned int,bool>> >::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<const std::pair<unsigned int,bool>*,std::vector<std::pair<unsigned int,bool>> > *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<const std::pair<unsigned int,bool>*,std::vector<std::pair<unsigned int,bool>> > *)v3;
  }
  v2->_M_current = (const std::pair<unsigned int,bool> *)1102416563;
  v2[1]._M_current = (const std::pair<unsigned int,bool> *)"2 32 8 15 __for_begin:346 64 8 13 __for_end:346";
  v2[2]._M_current = (const std::pair<unsigned int,bool> *)common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<<std::pair<unsigned int,bool>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4]);
  v2[4]._M_current = std::vector<std::pair<unsigned int,bool>>::begin(vec)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8]);
  v2[8]._M_current = std::vector<std::pair<unsigned int,bool>>::end(vec)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,bool> const*,std::vector<std::pair<unsigned int,bool>>>(
            v2 + 4,
            v2 + 8) )
  {
    t = __gnu_cxx::__normal_iterator<std::pair<unsigned int,bool> const*,std::vector<std::pair<unsigned int,bool>>>::operator*(v2 + 4);
    if ( is_first )
      is_first = 0;
    else
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this, ",");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<<unsigned int,bool>(this, t);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,bool> const*,std::vector<std::pair<unsigned int,bool>>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const std::pair<unsigned int,bool> *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 342: range 000000000F7F4734-000000000F7F4964
common::tools::StringStream<common::tools::FixedBuffer<4096> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<std::string>(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        const std::vector<std::string> *vec)
{
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  const std::string *t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)v3;
  }
  v2->_M_current = (const std::string *)1102416563;
  v2[1]._M_current = (const std::string *)"2 32 8 15 __for_begin:346 64 8 13 __for_end:346";
  v2[2]._M_current = (const std::string *)common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<std::string>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(this, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4]);
  v2[4]._M_current = std::vector<std::string>::begin(vec)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8]);
  v2[8]._M_current = std::vector<std::string>::end(vec)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(v2 + 4, v2 + 8) )
  {
    t = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(v2 + 4);
    if ( is_first )
      is_first = 0;
    else
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(this, ",");
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(this, t);
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(this, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const std::string *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 379: range 000000000F7FCB9E-000000000F7FCDCE
common::tools::StringStream<common::tools::FixedBuffer<4096> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<std::string>(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        const std::set<std::string> *set)
{
  std::_Rb_tree_const_iterator<std::string >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  const std::string *t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::string >::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::string >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)"2 32 8 15 __for_begin:383 64 8 13 __for_end:383";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<std::string>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(this, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4]);
  v2[4]._M_node = std::set<std::string>::begin(set)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8]);
  v2[8]._M_node = std::set<std::string>::end(set)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    t = std::_Rb_tree_const_iterator<std::string>::operator*(v2 + 4);
    if ( is_first )
      is_first = 0;
    else
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(this, ",");
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(this, t);
    std::_Rb_tree_const_iterator<std::string>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(this, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 451: range 000000000F884BC4-000000000F884CA6
common::tools::StringStream<common::tools::FixedBuffer<16384> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<<unsigned int,bool>(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        const std::pair<unsigned int,bool> *pair)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v2; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v3; // rax
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v4; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v5; // rax

  v2 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this, "(");
  if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pair);
  }
  v3 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v2, pair->first);
  v4 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v3, ",");
  if ( *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pair + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&pair->second);
  }
  v5 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v4, pair->second);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v5, ")");
  return this;
};

// Line 458: range 000000000D04C446-000000000D04C4BB
common::tools::StringStream<common::tools::FixedBuffer<16384> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<16384> > *const this,
        double v)
{
  char *v2; // rax
  int len; // [rsp+1Ch] [rbp-4h]

  if ( common::tools::FixedBuffer<16384>::avail(&this->buffer_) > 31 )
  {
    v2 = common::tools::FixedBuffer<16384>::current(&this->buffer_);
    len = snprintf(v2, 0x20uLL, "%.12g", v);
    common::tools::FixedBuffer<16384>::add(&this->buffer_, len);
  }
  return this;
};

// Line 458: range 000000000F7F1294-000000000F7F1309
common::tools::StringStream<common::tools::FixedBuffer<4096> > *__cdecl common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
        common::tools::StringStream<common::tools::FixedBuffer<4096> > *const this,
        double v)
{
  char *v2; // rax
  int len; // [rsp+1Ch] [rbp-4h]

  if ( common::tools::FixedBuffer<4096>::avail(&this->buffer_) > 31 )
  {
    v2 = common::tools::FixedBuffer<4096>::current(&this->buffer_);
    len = snprintf(v2, 0x20uLL, "%.12g", v);
    common::tools::FixedBuffer<4096>::add(&this->buffer_, len);
  }
  return this;
};
