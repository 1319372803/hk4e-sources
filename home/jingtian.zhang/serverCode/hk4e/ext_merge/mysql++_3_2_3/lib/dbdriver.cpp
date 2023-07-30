// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/dbdriver.cpp

// Line 47: range 000000000CF82040-000000000CF821A7
__int64 __fastcall mysqlpp::DBDriver::DBDriver(mysqlpp::DBDriver *this)
{
  __int64 result; // rax

  this->_vptr_DBDriver = (int (**)(...))(&`vtable for'mysqlpp::DBDriver + 2);
  this->is_connected_ = 0;
  this->applied_options_._M_impl._M_map = 0LL;
  this->applied_options_._M_impl._M_map_size = 0LL;
  this->applied_options_._M_impl._M_start._M_cur = 0LL;
  this->applied_options_._M_impl._M_start._M_first = 0LL;
  this->applied_options_._M_impl._M_start._M_last = 0LL;
  this->applied_options_._M_impl._M_start._M_node = 0LL;
  this->applied_options_._M_impl._M_finish._M_cur = 0LL;
  this->applied_options_._M_impl._M_finish._M_first = 0LL;
  this->applied_options_._M_impl._M_finish._M_last = 0LL;
  this->applied_options_._M_impl._M_finish._M_node = 0LL;
  std::_Deque_base<mysqlpp::Option *>::_M_initialize_map(&this->applied_options_, 0LL);
  this->pending_options_._M_impl._M_map = 0LL;
  this->pending_options_._M_impl._M_map_size = 0LL;
  this->pending_options_._M_impl._M_start._M_cur = 0LL;
  this->pending_options_._M_impl._M_start._M_first = 0LL;
  this->pending_options_._M_impl._M_start._M_last = 0LL;
  this->pending_options_._M_impl._M_start._M_node = 0LL;
  this->pending_options_._M_impl._M_finish._M_cur = 0LL;
  this->pending_options_._M_impl._M_finish._M_first = 0LL;
  this->pending_options_._M_impl._M_finish._M_last = 0LL;
  this->pending_options_._M_impl._M_finish._M_node = 0LL;
  std::_Deque_base<mysqlpp::Option *>::_M_initialize_map(&this->pending_options_, 0LL);
  this->error_message_._M_string_length = 0LL;
  this->error_message_._M_dataplus._M_p = this->error_message_._anon_0._M_local_buf;
  result = 0LL;
  this->error_message_._anon_0._M_local_buf[0] = 0;
  this->mysql_.net.vio = 0LL;
  this->mysql_.extension = 0LL;
  memset(
    (void *)((unsigned __int64)&this->mysql_.net.buff & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)this - (((_DWORD)this + 16) & 0xFFFFFFF8) + 1280) >> 3));
  return result;
};

// Line 57: range 000000000CF821B0-000000000CF82310
void __fastcall mysqlpp::DBDriver::DBDriver(mysqlpp::DBDriver *this, const mysqlpp::DBDriver *other)
{
  this->_vptr_DBDriver = (int (**)(...))(&`vtable for'mysqlpp::DBDriver + 2);
  this->is_connected_ = 0;
  this->applied_options_._M_impl._M_map = 0LL;
  this->applied_options_._M_impl._M_map_size = 0LL;
  this->applied_options_._M_impl._M_start._M_cur = 0LL;
  this->applied_options_._M_impl._M_start._M_first = 0LL;
  this->applied_options_._M_impl._M_start._M_last = 0LL;
  this->applied_options_._M_impl._M_start._M_node = 0LL;
  this->applied_options_._M_impl._M_finish._M_cur = 0LL;
  this->applied_options_._M_impl._M_finish._M_first = 0LL;
  this->applied_options_._M_impl._M_finish._M_last = 0LL;
  this->applied_options_._M_impl._M_finish._M_node = 0LL;
  std::_Deque_base<mysqlpp::Option *>::_M_initialize_map(&this->applied_options_, 0LL);
  this->pending_options_._M_impl._M_map = 0LL;
  this->pending_options_._M_impl._M_map_size = 0LL;
  this->pending_options_._M_impl._M_start._M_cur = 0LL;
  this->pending_options_._M_impl._M_start._M_first = 0LL;
  this->pending_options_._M_impl._M_start._M_last = 0LL;
  this->pending_options_._M_impl._M_start._M_node = 0LL;
  this->pending_options_._M_impl._M_finish._M_cur = 0LL;
  this->pending_options_._M_impl._M_finish._M_first = 0LL;
  this->pending_options_._M_impl._M_finish._M_last = 0LL;
  this->pending_options_._M_impl._M_finish._M_node = 0LL;
  std::_Deque_base<mysqlpp::Option *>::_M_initialize_map(&this->pending_options_, 0LL);
  this->error_message_._anon_0._M_local_buf[0] = 0;
  this->error_message_._M_dataplus._M_p = this->error_message_._anon_0._M_local_buf;
  this->error_message_._M_string_length = 0LL;
  mysqlpp::DBDriver::copy(this, other);
};

// Line 63: range 000000000CF81640-000000000CF8170D
void __fastcall mysqlpp::DBDriver::~DBDriver(mysqlpp::DBDriver *const this)
{
  bool v2; // zf
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Elt_pointer M_cur; // rbx
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Elt_pointer M_last; // r12
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Elt_pointer v5; // rax
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Elt_pointer *v6; // r13
  mysqlpp::DBDriver *M_p; // rdi

  v2 = !this->is_connected_;
  this->_vptr_DBDriver = (int (**)(...))(&`vtable for'mysqlpp::DBDriver + 2);
  if ( !v2 )
    mysqlpp::DBDriver::disconnect(this);
  M_cur = this->applied_options_._M_impl._M_start._M_cur;
  M_last = this->applied_options_._M_impl._M_start._M_last;
  v5 = this->applied_options_._M_impl._M_finish._M_cur;
  v6 = this->applied_options_._M_impl._M_start._M_node + 1;
  while ( v5 != M_cur )
  {
    while ( 1 )
    {
      if ( *M_cur )
      {
        (*((void (__fastcall **)(mysqlpp::Option *))(*M_cur)->_vptr_Option + 1))(*M_cur);
        v5 = this->applied_options_._M_impl._M_finish._M_cur;
      }
      if ( M_last != ++M_cur )
        break;
      M_cur = *v6++;
      M_last = M_cur + 64;
      if ( v5 == M_cur )
        goto LABEL_9;
    }
  }
LABEL_9:
  M_p = (mysqlpp::DBDriver *)this->error_message_._M_dataplus._M_p;
  if ( M_p != (mysqlpp::DBDriver *)&this->error_message_._anon_0 )
    operator delete(M_p);
  std::_Deque_base<mysqlpp::Option *>::~_Deque_base(&this->pending_options_);
  std::_Deque_base<mysqlpp::Option *>::~_Deque_base(&this->applied_options_);
};

// Line 63: range 000000000CF81720-000000000CF81732
void __fastcall mysqlpp::DBDriver::~DBDriver(mysqlpp::DBDriver *const this)
{
  mysqlpp::DBDriver::~DBDriver(this);
  operator delete(this, 0x5C8uLL);
};

// Line 80: range 000000000CF81E60-000000000CF81ECB
bool __fastcall mysqlpp::DBDriver::connect(
        mysqlpp::DBDriver *const this,
        const char *host,
        const char *socket_name,
        unsigned int port,
        const char *db,
        const char *user,
        const char *password)
{
  bool result; // al

  result = mysqlpp::DBDriver::connect_prepare(this);
  if ( result )
    result = mysql_real_connect(&this->mysql_, host, user, password, db, port, socket_name, this->mysql_.client_flag) != 0LL;
  this->is_connected_ = result;
  return result;
};

// Line 90: range 000000000CF81ED0-000000000CF81F44
bool __fastcall mysqlpp::DBDriver::connect(mysqlpp::DBDriver *const this, const MYSQL *other)
{
  bool result; // al

  result = mysqlpp::DBDriver::connect_prepare(this);
  if ( result )
  {
    result = mysql_real_connect(
               &this->mysql_,
               other->host,
               other->user,
               other->passwd,
               other->db,
               other->port,
               other->unix_socket,
               other->client_flag) != 0LL;
    this->is_connected_ = result;
  }
  else
  {
    this->is_connected_ = 0;
  }
  return result;
};

// Line 101: range 000000000CF81D10-000000000CF81E4D
bool __fastcall mysqlpp::DBDriver::connect_prepare(mysqlpp::DBDriver *const this)
{
  std::string::pointer M_p; // rax
  mysqlpp::Option **M_cur; // rbx
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Elt_pointer M_last; // rbp
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Map_pointer M_node; // r12
  bool result; // al
  mysqlpp::Option ***v7; // rbp
  mysqlpp::Option **v8; // r15
  mysqlpp::Option **M_first; // r14
  void **v10; // r12
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Map_pointer v11; // rbx
  void *v12; // rdi
  mysqlpp::Option **v13; // [rsp+8h] [rbp-40h]

  if ( this->is_connected_ )
    mysqlpp::DBDriver::disconnect(this);
  mysql_init(&this->mysql_);
  M_p = this->error_message_._M_dataplus._M_p;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  M_cur = this->pending_options_._M_impl._M_start._M_cur;
  M_last = this->pending_options_._M_impl._M_start._M_last;
  M_node = this->pending_options_._M_impl._M_start._M_node;
LABEL_4:
  if ( this->pending_options_._M_impl._M_finish._M_cur == M_cur )
    goto LABEL_8;
  while ( 1 )
  {
    result = mysqlpp::DBDriver::set_option_impl(this, *M_cur);
    if ( !result )
      break;
    if ( M_last != ++M_cur )
      goto LABEL_4;
    M_cur = M_node[1];
    ++M_node;
    M_last = M_cur + 64;
    if ( this->pending_options_._M_impl._M_finish._M_cur == M_cur )
      goto LABEL_8;
  }
  if ( this->pending_options_._M_impl._M_finish._M_cur == M_cur )
  {
LABEL_8:
    v7 = this->pending_options_._M_impl._M_start._M_node;
    v8 = this->pending_options_._M_impl._M_start._M_cur;
    M_first = this->pending_options_._M_impl._M_start._M_first;
    v13 = this->pending_options_._M_impl._M_start._M_last;
    v10 = (void **)(v7 + 1);
    v11 = this->pending_options_._M_impl._M_finish._M_node + 1;
    if ( v11 > v7 + 1 )
    {
      do
      {
        v12 = *v10++;
        operator delete(v12);
      }
      while ( v11 > (std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Map_pointer)v10 );
    }
    this->pending_options_._M_impl._M_finish._M_cur = v8;
    this->pending_options_._M_impl._M_finish._M_first = M_first;
    this->pending_options_._M_impl._M_finish._M_last = v13;
    result = 1;
    this->pending_options_._M_impl._M_finish._M_node = v7;
  }
  return result;
};

// Line 129: range 000000000CF81F50-000000000CF81F93
void __fastcall mysqlpp::DBDriver::copy(mysqlpp::DBDriver *const this, const mysqlpp::DBDriver *other)
{
  if ( !this->is_connected_ )
  {
    if ( !other->is_connected_ )
      return;
LABEL_5:
    mysqlpp::DBDriver::connect(this, &other->mysql_);
    return;
  }
  mysqlpp::DBDriver::disconnect(this);
  if ( other->is_connected_ )
    goto LABEL_5;
};

// Line 143: range 000000000CF81280-000000000CF812F3
void __fastcall mysqlpp::DBDriver::disconnect(mysqlpp::DBDriver *const this)
{
  if ( this->is_connected_ )
  {
    mysql_close(&this->mysql_);
    this->mysql_.net.vio = 0LL;
    this->mysql_.extension = 0LL;
    memset(
      (void *)((unsigned __int64)&this->mysql_.net.buff & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((_DWORD)this + 8 - (((_DWORD)this + 16) & 0xFFFFFFF8) + 1272) >> 3));
    this->is_connected_ = 0;
    this->error_message_._M_string_length = 0LL;
    *this->error_message_._M_dataplus._M_p = 0;
  }
};

// Line 173: range 000000000CF81320-000000000CF813EE
size_t __fastcall mysqlpp::DBDriver::escape_string(
        mysqlpp::DBDriver *const this,
        std::string *ps,
        const char *original,
        size_t length)
{
  std::string::pointer M_p; // rax
  const char *v5; // r13
  size_t M_string_length; // r12
  char *v7; // rax
  char *v8; // r14
  size_t v9; // r12

  M_p = this->error_message_._M_dataplus._M_p;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  if ( !ps )
    return 0LL;
  v5 = original;
  if ( original )
  {
    M_string_length = length;
    if ( !length )
      M_string_length = strlen(original);
  }
  else
  {
    v5 = ps->_M_dataplus._M_p;
    M_string_length = ps->_M_string_length;
  }
  v7 = (char *)operator new[](2 * M_string_length + 1);
  this->error_message_._M_string_length = 0LL;
  v8 = v7;
  *this->error_message_._M_dataplus._M_p = 0;
  v9 = mysql_real_escape_string(&this->mysql_, v7, v5, M_string_length);
  std::string::_M_replace(ps, 0LL, ps->_M_string_length, v8, v9);
  operator delete[](v8);
  return v9;
};

// Line 205: range 000000000CF813F0-000000000CF81491
size_t __fastcall mysqlpp::DBDriver::escape_string_no_conn(std::string *ps, const char *original, size_t length)
{
  const char *M_p; // r13
  size_t M_string_length; // r12
  char *v5; // r14
  size_t v6; // r12

  if ( !ps )
    return 0LL;
  M_p = original;
  if ( original )
  {
    M_string_length = length;
    if ( !length )
      M_string_length = strlen(original);
  }
  else
  {
    M_p = ps->_M_dataplus._M_p;
    M_string_length = ps->_M_string_length;
  }
  v5 = (char *)operator new[](2 * M_string_length + 1);
  v6 = mysql_escape_string(v5, M_p, M_string_length);
  std::string::_M_replace(ps, 0LL, ps->_M_string_length, v5, v6);
  operator delete[](v5);
  return v6;
};

// Line 234: range 000000000CF81FA0-000000000CF81FAF
mysqlpp::DBDriver *__fastcall mysqlpp::DBDriver::operator=(mysqlpp::DBDriver *const this, const mysqlpp::DBDriver *rhs)
{
  mysqlpp::DBDriver::copy(this, rhs);
  return this;
};

// Line 242: range 000000000CF814A0-000000000CF81591
std::string *__fastcall mysqlpp::DBDriver::query_info[abi:cxx11](std::string *retstr, mysqlpp::DBDriver *const this)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r13
  std::string::pointer M_p; // rax
  const char *v4; // rax
  char *v5; // rbp
  std::string::size_type v6; // rax
  size_t v7; // r14
  std::string *result; // rax
  char *v9; // rax
  std::string::size_type v10[6]; // [rsp+8h] [rbp-30h] BYREF

  p_anon_0 = &retstr->_anon_0;
  M_p = this->error_message_._M_dataplus._M_p;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  v4 = mysql_info(&this->mysql_);
  if ( v4 )
  {
    retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
    v5 = (char *)v4;
    v6 = strlen(v4);
    v10[0] = v6;
    v7 = v6;
    if ( v6 > 0xF )
    {
      v9 = (char *)std::string::_M_create(retstr, v10, 0LL);
      retstr->_M_dataplus._M_p = v9;
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9;
      retstr->_anon_0._M_allocated_capacity = v10[0];
    }
    else
    {
      if ( v6 == 1 )
      {
        retstr->_anon_0._M_local_buf[0] = *v5;
LABEL_5:
        retstr->_M_string_length = v6;
        p_anon_0->_M_local_buf[v6] = 0;
        return retstr;
      }
      if ( !v6 )
        goto LABEL_5;
    }
    memcpy(p_anon_0, v5, v7);
    v6 = v10[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
    goto LABEL_5;
  }
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  result = retstr;
  retstr->_M_string_length = 0LL;
  retstr->_anon_0._M_local_buf[0] = 0;
  return result;
};

// Line 254: range 000000000CF815A0-000000000CF815FC
bool __fastcall mysqlpp::DBDriver::set_option(mysqlpp::DBDriver *const this, unsigned int o, bool arg)
{
  int v3; // ecx
  bool result; // al
  unsigned __int64 client_flag; // rcx
  unsigned __int64 v6; // rsi

  v3 = o;
  if ( !o )
    return 0;
  if ( (o & 1) == 0 )
  {
    do
    {
      v3 >>= 1;
      if ( !v3 )
        return 0;
    }
    while ( (v3 & 1) == 0 );
  }
  result = v3 == 1 && o - 1 <= 0x1FFFF;
  if ( result )
  {
    client_flag = this->mysql_.client_flag;
    if ( arg )
    {
      result = arg;
      v6 = client_flag | o;
    }
    else
    {
      v6 = (unsigned int)client_flag & ~o;
    }
    this->mysql_.client_flag = v6;
  }
  return result;
};

// Line 287: range 000000000CF81FB0-000000000CF82036
bool __fastcall mysqlpp::DBDriver::set_option(mysqlpp::DBDriver *const this, mysqlpp::Option *o)
{
  bool v2; // zf
  std::string::pointer M_p; // rax
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Elt_pointer M_cur; // rax
  mysqlpp::Option *const *v5; // rdx
  mysqlpp::Option **v6; // rax
  mysqlpp::Option *v8; // [rsp+8h] [rbp-10h] BYREF

  v2 = !this->is_connected_;
  v8 = o;
  if ( !v2 )
    return mysqlpp::DBDriver::set_option_impl(this, o);
  M_p = this->error_message_._M_dataplus._M_p;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  M_cur = this->pending_options_._M_impl._M_finish._M_cur;
  v5 = this->pending_options_._M_impl._M_finish._M_last - 1;
  if ( M_cur == v5 )
  {
    std::deque<mysqlpp::Option *>::_M_push_back_aux<mysqlpp::Option * const&>(&this->pending_options_, &v8, v5);
  }
  else
  {
    v6 = M_cur + 1;
    *(v6 - 1) = v8;
    this->pending_options_._M_impl._M_finish._M_cur = v6;
  }
  return 1;
};

// Line 301: range 000000000CF81740-000000000CF81CFC
__int64 __fastcall mysqlpp::DBDriver::set_option_impl(
        mysqlpp::DBDriver *this,
        mysqlpp::Option *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        std::string a12)
{
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // rdi
  mysqlpp::Option *v17; // rbp
  __int64 *v18; // r13
  mysqlpp::DBDriver *v19; // rdi
  std::string::size_type v20; // rdx
  std::string::size_type v21; // rsi
  std::string::size_type M_allocated_capacity; // rcx
  __int64 v23; // rax
  std::_Deque_iterator<mysqlpp::Option*,mysqlpp::Option*&,mysqlpp::Option**>::_Elt_pointer M_cur; // rax
  mysqlpp::Option *const *v26; // rdx
  mysqlpp::Option **v27; // rax
  std::string::pointer M_p; // rax
  const char *client_info; // r14
  unsigned __int64 v30; // kr08_8
  int v31; // esi
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int v36; // edi
  __int64 *v37; // rdi
  __int64 v38; // [rsp+8h] [rbp-220h]
  mysqlpp::Option *v39; // [rsp+28h] [rbp-200h] BYREF
  std::string w; // [rsp+30h] [rbp-1F8h] BYREF
  void *v41; // [rsp+50h] [rbp-1D8h] BYREF
  size_t n; // [rsp+58h] [rbp-1D0h]
  __int64 src[2]; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v44; // [rsp+70h] [rbp-1B8h] BYREF
  __int64 v45[3]; // [rsp+78h] [rbp-1B0h] BYREF
  unsigned __int64 v46; // [rsp+90h] [rbp-198h]
  const char *v47; // [rsp+98h] [rbp-190h]
  unsigned __int64 v48; // [rsp+A0h] [rbp-188h]
  __int64 v49; // [rsp+A8h] [rbp-180h]
  std::locale v50; // [rsp+B0h] [rbp-178h] BYREF
  int v51; // [rsp+B8h] [rbp-170h]
  void *v52[2]; // [rsp+C0h] [rbp-168h] BYREF
  _BYTE v53[16]; // [rsp+D0h] [rbp-158h] BYREF
  __int64 v54[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v55; // [rsp+1C0h] [rbp-68h]
  __int64 v56; // [rsp+1C8h] [rbp-60h]
  __int64 v57; // [rsp+1D0h] [rbp-58h]
  __int64 v58; // [rsp+1D8h] [rbp-50h]
  __int64 v59; // [rsp+1E0h] [rbp-48h]

  v39 = a2;
  std::ios_base::ios_base((std::ios_base *)v54);
  v54[27] = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v54[0] = (__int64)&`vtable for'std::ios + 16;
  v55 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v13 = *((_QWORD *)&edata + 1);
  v14 = *((_QWORD *)&edata + 2);
  v15 = *(_QWORD *)(v13 - 24);
  v44 = v13;
  v38 = v14;
  v16 = (__int64 *)((char *)&v45[-1] + v15);
  *v16 = v14;
  std::ios::init(v16, 0LL);
  v45[1] = 0LL;
  v45[2] = 0LL;
  v46 = 0LL;
  v44 = (__int64)&`vtable for'std::ostringstream + 24;
  v47 = 0LL;
  v48 = 0LL;
  v54[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v49 = 0LL;
  v45[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v50);
  v51 = 16;
  v52[1] = 0LL;
  v53[0] = 0;
  v45[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v52[0] = v53;
  std::ios::init(v54, v45);
  v17 = v39;
  switch ( (*((unsigned int (__fastcall **)(mysqlpp::Option *, mysqlpp::DBDriver *))v39->_vptr_Option + 2))(v39, this) )
  {
    case 0u:
      M_cur = this->applied_options_._M_impl._M_finish._M_cur;
      v26 = this->applied_options_._M_impl._M_finish._M_last - 1;
      if ( M_cur == v26 )
      {
        std::deque<mysqlpp::Option *>::_M_push_back_aux<mysqlpp::Option * const&>(&this->applied_options_, &v39, v26);
        v17 = 0LL;
      }
      else
      {
        v27 = M_cur + 1;
        v17 = 0LL;
        *(v27 - 1) = v39;
        this->applied_options_._M_impl._M_finish._M_cur = v27;
      }
      goto LABEL_3;
    case 1u:
      std::__ostream_insert<char,std::char_traits<char>>(&v44, "Option not supported by database driver v", 41LL);
      M_p = this->error_message_._M_dataplus._M_p;
      this->error_message_._M_string_length = 0LL;
      *M_p = 0;
      client_info = mysql_get_client_info();
      v41 = src;
      if ( !client_info )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v30 = strlen(client_info) + 1;
      w._M_dataplus._M_p = (std::string::pointer)(v30 - 1);
      if ( v30 - 1 > 0xF )
      {
        v41 = (void *)std::string::_M_create(&v41, &w, 0LL);
        v37 = (__int64 *)v41;
        src[0] = (__int64)w._M_dataplus._M_p;
      }
      else
      {
        if ( v30 == 2 )
        {
          LOBYTE(src[0]) = *client_info;
          goto LABEL_36;
        }
        if ( v30 == 1 )
        {
LABEL_36:
          n = (size_t)w._M_dataplus._M_p;
          *((_BYTE *)v41 + (unsigned __int64)w._M_dataplus._M_p) = 0;
          v31 = (int)v41;
          std::__ostream_insert<char,std::char_traits<char>>(&v44, v41, n);
          v36 = (int)v41;
          if ( v41 != src )
            operator delete(v41);
          mysqlpp::DBDriver::set_option_impl(v36, v31, v32, v33, v34, v35, a7, a8, a9, a10, a11, a12);
        }
        v37 = src;
      }
      memcpy(v37, client_info, v30 - 1);
      goto LABEL_36;
    case 2u:
      std::__ostream_insert<char,std::char_traits<char>>(&v44, "Database driver failed to set option", 36LL);
      goto LABEL_3;
    case 3u:
      std::__ostream_insert<char,std::char_traits<char>>(
        &v44,
        "Option can only be set before connection is established",
        55LL);
      goto LABEL_3;
    case 4u:
      std::__ostream_insert<char,std::char_traits<char>>(
        &v44,
        "Option can only be set while the connection is established",
        58LL);
      goto LABEL_3;
    default:
LABEL_3:
      v18 = src;
      LOBYTE(src[0]) = 0;
      v41 = src;
      n = 0LL;
      if ( v48 )
      {
        if ( v48 > v46 )
          std::string::_M_replace(&v41, 0LL, 0LL, v47, v48 - (_QWORD)v47);
        else
          std::string::_M_replace(&v41, 0LL, 0LL, v47, v46 - (_QWORD)v47);
      }
      else
      {
        std::string::_M_assign(&v41, v52);
      }
      v19 = (mysqlpp::DBDriver *)this->error_message_._M_dataplus._M_p;
      v20 = n;
      if ( v41 == src )
      {
        if ( n )
        {
          if ( n == 1 )
            LOBYTE(v19->_vptr_DBDriver) = src[0];
          else
            memcpy(v19, src, n);
          v20 = n;
          v19 = (mysqlpp::DBDriver *)this->error_message_._M_dataplus._M_p;
        }
        this->error_message_._M_string_length = v20;
        *((_BYTE *)&v19->_vptr_DBDriver + v20) = 0;
        v19 = (mysqlpp::DBDriver *)v41;
      }
      else
      {
        v21 = src[0];
        if ( v19 == (mysqlpp::DBDriver *)&this->error_message_._anon_0 )
        {
          this->error_message_._M_dataplus._M_p = (std::string::pointer)v41;
          this->error_message_._M_string_length = v20;
          this->error_message_._anon_0._M_allocated_capacity = v21;
        }
        else
        {
          M_allocated_capacity = this->error_message_._anon_0._M_allocated_capacity;
          this->error_message_._M_dataplus._M_p = (std::string::pointer)v41;
          this->error_message_._M_string_length = v20;
          this->error_message_._anon_0._M_allocated_capacity = v21;
          if ( v19 )
          {
            v41 = v19;
            src[0] = M_allocated_capacity;
            goto LABEL_10;
          }
        }
        v41 = src;
        v18 = src;
        v19 = (mysqlpp::DBDriver *)src;
      }
LABEL_10:
      n = 0LL;
      LOBYTE(v19->_vptr_DBDriver) = 0;
      if ( v41 != src )
        operator delete(v41);
      LOBYTE(v18) = this->error_message_._M_string_length == 0;
      if ( v17 )
        (*((void (__fastcall **)(mysqlpp::Option *))v17->_vptr_Option + 1))(v17);
      v44 = (__int64)&`vtable for'std::ostringstream + 24;
      v54[0] = (__int64)&`vtable for'std::ostringstream + 64;
      v45[0] = (__int64)&`vtable for'std::stringbuf + 16;
      if ( v52[0] != v53 )
        operator delete(v52[0]);
      v45[0] = (__int64)&`vtable for'std::streambuf + 16;
      std::locale::~locale(&v50);
      v23 = *(_QWORD *)(v13 - 24);
      v44 = v13;
      *(__int64 *)((char *)&v45[-1] + v23) = v38;
      v54[0] = (__int64)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base((std::ios_base *)v54);
      return (unsigned int)v18;
  }
};

// Line 314: range 000000000C73766A-000000000C7376E2
void __fastcall __noreturn mysqlpp::DBDriver::set_option_impl(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11,
        std::string w)
{
  mysqlpp::Exception *exception; // r13
  __int64 v13; // rbx
  std::string *M_p; // rdi

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
  if ( a11 )
  {
    v13 = *(_QWORD *)(*a11 - 8LL);
    std::stringbuf::str(&w, a10);
    mysqlpp::Exception::Exception(exception, &w);
    M_p = (std::string *)w._M_dataplus._M_p;
    *(_QWORD *)exception[1].baseclass_0 = v13;
    *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::BadOption + 2;
    if ( M_p != (std::string *)&w._anon_0 )
      operator delete(M_p);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'mysqlpp::BadOption,
      (void (__fastcall *)(void *))mysqlpp::BadOption::~BadOption);
  }
  __cxa_bad_typeid();
};

// Line 336: range 000000000CF81600-000000000CF8162D
bool __fastcall mysqlpp::DBDriver::shutdown(mysqlpp::DBDriver *const this)
{
  std::string::pointer M_p; // rax
  MYSQL *p_mysql; // rdi

  M_p = this->error_message_._M_dataplus._M_p;
  p_mysql = &this->mysql_;
  *(_QWORD *)&p_mysql[1].net.last_error[25] = 0LL;
  *M_p = 0;
  return mysql_shutdown(p_mysql, SHUTDOWN_DEFAULT) != 0;
};

// Line 354: range 000000000CF81630-000000000CF81632
bool __cdecl mysqlpp::DBDriver::thread_aware()
{
  return 0;
};
