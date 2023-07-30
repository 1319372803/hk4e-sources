// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/tuple/detail/tuple_basic.hpp

// Line 167: range 000000000C613CEB-000000000C613CF0
boost::tuples::null_type __cdecl boost::tuples::detail::cnull()
{
  boost::tuples::null_type result; // al

  return result;
};

// Line 279: range 000000001229A42C-000000001229A439
boost::tuples::access_traits<const std::string*>::const_type __cdecl boost::tuples::cons<std::string const*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type>>::get_head(
        const boost::tuples::cons<const std::string*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type> > *const this)
{
  return &this->head;
};

// Line 282: range 000000001229A43A-000000001229A44B
boost::tuples::access_traits<boost::tuples::cons<unsigned int const*,boost::tuples::null_type> >::const_type __cdecl boost::tuples::cons<std::string const*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type>>::get_tail(
        const boost::tuples::cons<const std::string*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type> > *const this)
{
  return &this->tail;
};

// Line 298: range 000000001229A2AE-000000001229A42A
void __cdecl boost::tuples::cons<std::string const*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type>>::cons<std::string const* const,unsigned int const* const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const>(
        boost::tuples::cons<const std::string*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type> > *const this,
        const std::string *const *t1,
        const unsigned int *const *t2,
        const boost::tuples::null_type *t3,
        const boost::tuples::null_type *t4,
        const boost::tuples::null_type *t5,
        const boost::tuples::null_type *t6,
        const boost::tuples::null_type *t7,
        const boost::tuples::null_type *t8,
        const boost::tuples::null_type *t9,
        const boost::tuples::null_type *t10)
{
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  const std::string *v14; // rdx
  char v19[112]; // [rsp+30h] [rbp-70h] BYREF

  v11 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v11 = v12;
  }
  *(_QWORD *)v11 = 1102416563LL;
  *(_QWORD *)(v11 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v11 + 16) = boost::tuples::cons<std::string const*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type>>::cons<std::string const* const,unsigned int const* const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const>;
  v13 = v11 >> 3;
  *(_DWORD *)(v13 + 2147450880) = -235802127;
  *(_DWORD *)(v13 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)t1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = *t1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->head = v14;
  boost::tuples::detail::cnull();
  boost::tuples::cons<unsigned int const*,boost::tuples::null_type>::cons<unsigned int const* const>(
    &this->tail,
    t2,
    t3,
    t4,
    t5,
    t6,
    t7,
    t8,
    t9,
    t10,
    (const boost::tuples::null_type *)(v11 + 32));
  if ( v19 == (char *)v11 )
  {
    *(_QWORD *)((v11 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v11 = 1172321806LL;
    *(_QWORD *)((v11 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 368: range 000000000C875686-000000000C875693
boost::tuples::access_traits<const std::string*>::const_type __cdecl boost::tuples::cons<std::string const*,boost::tuples::null_type>::get_head(
        const boost::tuples::cons<const std::string*,boost::tuples::null_type> *const this)
{
  return &this->head;
};

// Line 368: range 00000000122B9B90-00000000122B9B9D
boost::tuples::access_traits<unsigned int const*>::const_type __cdecl boost::tuples::cons<unsigned int const*,boost::tuples::null_type>::get_head(
        const boost::tuples::cons<unsigned int const*,boost::tuples::null_type> *const this)
{
  return &this->head;
};

// Line 370: range 000000000C875770-000000000C875779
boost::tuples::null_type __cdecl boost::tuples::cons<std::string const*,boost::tuples::null_type>::get_tail(
        const boost::tuples::cons<const std::string*,boost::tuples::null_type> *const this)
{
  boost::tuples::null_type result; // al

  return result;
};

// Line 370: range 00000000122B9CB2-00000000122B9CBB
boost::tuples::null_type __cdecl boost::tuples::cons<unsigned int const*,boost::tuples::null_type>::get_tail(
        const boost::tuples::cons<unsigned int const*,boost::tuples::null_type> *const this)
{
  boost::tuples::null_type result; // al

  return result;
};

// Line 380: range 000000000C875612-000000000C875684
void __cdecl boost::tuples::cons<std::string const*,boost::tuples::null_type>::cons<std::string const* const>(
        boost::tuples::cons<const std::string*,boost::tuples::null_type> *const this,
        const std::string *const *t1,
        const boost::tuples::null_type *a3,
        const boost::tuples::null_type *a4,
        const boost::tuples::null_type *a5,
        const boost::tuples::null_type *a6,
        const boost::tuples::null_type *a7,
        const boost::tuples::null_type *a8,
        const boost::tuples::null_type *a9,
        const boost::tuples::null_type *a10,
        const boost::tuples::null_type *a11)
{
  const std::string *v11; // rdx

  if ( *(_BYTE *)(((unsigned __int64)t1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v11 = *t1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->head = v11;
};

// Line 380: range 00000000122B9B1C-00000000122B9B8E
void __cdecl boost::tuples::cons<unsigned int const*,boost::tuples::null_type>::cons<unsigned int const* const>(
        boost::tuples::cons<unsigned int const*,boost::tuples::null_type> *const this,
        const unsigned int *const *t1,
        const boost::tuples::null_type *a3,
        const boost::tuples::null_type *a4,
        const boost::tuples::null_type *a5,
        const boost::tuples::null_type *a6,
        const boost::tuples::null_type *a7,
        const boost::tuples::null_type *a8,
        const boost::tuples::null_type *a9,
        const boost::tuples::null_type *a10,
        const boost::tuples::null_type *a11)
{
  const unsigned int *v11; // rdx

  if ( *(_BYTE *)(((unsigned __int64)t1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v11 = *t1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->head = v11;
};

// Line 487: range 000000000C7B0794-000000000C7B0941
void __cdecl boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>::tuple(
        boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> *const this,
        boost::tuples::access_traits<const std::string*>::parameter_type t0)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  char v5[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <"
                        "unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>::tuple;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -202116351;
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::cons<std::string const*,boost::tuples::null_type>::cons<std::string const* const>(
    this,
    t0,
    (const boost::tuples::null_type *)(v2 + 32),
    (const boost::tuples::null_type *)(v2 + 48),
    (const boost::tuples::null_type *)(v2 + 64),
    (const boost::tuples::null_type *)(v2 + 80),
    (const boost::tuples::null_type *)(v2 + 96),
    (const boost::tuples::null_type *)(v2 + 112),
    (const boost::tuples::null_type *)(v2 + 128),
    (const boost::tuples::null_type *)(v2 + 144),
    (const boost::tuples::null_type *)(v2 + 160));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 492: range 000000001226E21E-000000001226E3CD
void __cdecl boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>::tuple(
        boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> *const this,
        boost::tuples::access_traits<const std::string*>::parameter_type t0,
        boost::tuples::access_traits<unsigned int const*>::parameter_type t1)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  char v7[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9 "
                        "<unknown> 144 1 9 <unknown> 160 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>::tuple;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -234753535;
  v5[536862724] = -234753535;
  v5[536862725] = -202116351;
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::detail::cnull();
  boost::tuples::cons<std::string const*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type>>::cons<std::string const* const,unsigned int const* const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const,boost::tuples::null_type const>(
    this,
    t0,
    t1,
    (const boost::tuples::null_type *)(v3 + 48),
    (const boost::tuples::null_type *)(v3 + 64),
    (const boost::tuples::null_type *)(v3 + 80),
    (const boost::tuples::null_type *)(v3 + 96),
    (const boost::tuples::null_type *)(v3 + 112),
    (const boost::tuples::null_type *)(v3 + 128),
    (const boost::tuples::null_type *)(v3 + 144),
    (const boost::tuples::null_type *)(v3 + 160));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
