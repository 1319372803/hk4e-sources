// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/detail/auto_buffer.hpp

// Line 90: range 000000000BF40ADB-000000000BF40AEC
unsigned __int64 __cdecl boost::signals2::detail::default_grow_policy::new_capacity<unsigned long>(
        unsigned __int64 capacity)
{
  return 4 * capacity;
};

// Line 160: range 000000000BF4448C-000000000BF444D5
boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::allocate(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type capacity_arg)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::allocator_type *allocator; // rcx

  if ( capacity_arg <= 0xA )
    return (boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer)boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::members_type::address(&this->members_);
  allocator = boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::get_allocator(this);
  return __gnu_cxx::new_allocator<boost::shared_ptr<void>>::allocate(allocator, capacity_arg, 0LL);
};

// Line 168: range 000000000BF2CE06-000000000BF2CE47
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::deallocate(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer where,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type capacity_arg)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::allocator_type *allocator; // rcx

  if ( capacity_arg > 0xA )
  {
    allocator = boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::get_allocator(this);
    __gnu_cxx::new_allocator<boost::shared_ptr<void>>::deallocate(allocator, where, capacity_arg);
  }
};

// Line 176: range 000000000BF47250-000000000BF4727E
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::copy_impl<boost::shared_ptr<void>*>(
        boost::shared_ptr<void> *begin,
        boost::shared_ptr<void> *end,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer where,
        std::random_access_iterator_tag a4)
{
  boost::integral_constant<bool,false> v4; // [rsp+2Fh] [rbp-1h] BYREF

  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::copy_rai<boost::shared_ptr<void>*,false>(
    begin,
    end,
    where,
    &v4);
};

// Line 188: range 000000000BF488D2-000000000BF48903
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::copy_rai<boost::shared_ptr<void>*,false>(
        boost::shared_ptr<void> *begin,
        boost::shared_ptr<void> *end,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer where,
        const boost::integral_constant<bool,false> *a4)
{
  std::uninitialized_copy<boost::shared_ptr<void> *,boost::shared_ptr<void> *>(begin, end, where);
};

// Line 201: range 000000000BF4458F-000000000BF445BC
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::copy_impl<boost::shared_ptr<void>*>(
        boost::shared_ptr<void> *begin,
        boost::shared_ptr<void> *end,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer where)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::copy_impl<boost::shared_ptr<void>*>(
    begin,
    end,
    where,
    (std::random_access_iterator_tag)end);
};

// Line 238: range 000000000BF3BF16-000000000BF3BF38
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer where,
        const boost::false_type *a3)
{
  boost::shared_ptr<void>::~shared_ptr(where);
};

// Line 246: range 000000000BF35422-000000000BF3544B
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer where)
{
  boost::false_type v2; // [rsp+1Fh] [rbp-1h] BYREF

  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy(
    this,
    where,
    &v2);
};

// Line 251: range 000000000BF17124-000000000BF171B0
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this)
{
  boost::false_type v1; // [rsp+1Fh] [rbp-1h] BYREF

  if ( !boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::is_valid(this) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "is_valid()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/auto_buffer.hpp",
      0xFDu,
      "void boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::auto_buffer_destroy() [wit"
      "h T = boost::shared_ptr<void>; StackBufferPolicy = boost::signals2::detail::store_n_objects<10>; GrowPolicy = boos"
      "t::signals2::detail::default_grow_policy; Allocator = std::allocator<boost::shared_ptr<void> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->buffer_ )
    boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy(
      this,
      &v1);
};

// Line 259: range 000000000BF2CD14-000000000BF2CE05
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::destroy_back_n(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type n,
        const boost::false_type *a3)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer v3; // rcx
  boost::shared_ptr<void> *buffer; // [rsp+20h] [rbp-10h]
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer new_end; // [rsp+28h] [rbp-8h]

  if ( !n )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "n > 0",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/auto_buffer.hpp",
      0x105u,
      "void boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::destroy_back_n(boost::sign"
      "als2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::size_type, const false_type&) [with T = bo"
      "ost::shared_ptr<void>; StackBufferPolicy = boost::signals2::detail::store_n_objects<10>; GrowPolicy = boost::signa"
      "ls2::detail::default_grow_policy; Allocator = std::allocator<boost::shared_ptr<void> >; boost::signals2::detail::a"
      "uto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::size_type = long unsigned int; boost::false_type = boost:"
      ":integral_constant<bool, false>]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = this->buffer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  buffer = &v3[this->size_ - 1];
  new_end = &buffer[-n];
  while ( buffer > new_end )
    boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy(
      this,
      buffer--);
};

// Line 276: range 000000000BF23AA0-000000000BF23B7A
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        const boost::false_type *x)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type capacity; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->size_ )
    boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::destroy_back_n(
      this,
      this->size_,
      x);
  if ( *(_BYTE *)(((unsigned __int64)&this->members_.capacity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  capacity = this->members_.capacity_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::deallocate(
    this,
    this->buffer_,
    capacity);
};

// Line 301: range 000000000BF40A74-000000000BF40ADA
boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::move_to_new_buffer(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type new_capacity,
        const boost::true_type *a3)
{
  boost::shared_ptr<void> *v3; // rbx
  boost::shared_ptr<void> *v4; // rcx
  boost::shared_ptr<void> *new_buffer; // [rsp+28h] [rbp-18h]

  new_buffer = boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::allocate(
                 this,
                 new_capacity);
  v3 = boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::end(this);
  v4 = boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::begin(this);
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::copy_impl<boost::shared_ptr<void>*>(
    v4,
    v3,
    new_buffer);
  return new_buffer;
};

// Line 308: range 000000000BF3C030-000000000BF3C13B
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::reserve_impl(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type new_capacity)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *thisa; // [rsp+8h] [rbp-18h]
  boost::true_type v3; // [rsp+17h] [rbp-9h] BYREF
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer new_buffer; // [rsp+18h] [rbp-8h]

  thisa = this;
  new_buffer = boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::move_to_new_buffer(
                 this,
                 new_capacity,
                 &v3);
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
  {
    this = (boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)((char *)this + 168);
    __asan_report_store8();
  }
  thisa->buffer_ = new_buffer;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->members_.capacity_ >> 3) + 0x7FFF8000) )
  {
    this = (boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)&thisa->members_.capacity_;
    __asan_report_store8();
  }
  thisa->members_.capacity_ = new_capacity;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->size_ >> 3) + 0x7FFF8000) )
  {
    this = (boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)&thisa->size_;
    __asan_report_load8();
  }
  if ( thisa->size_ > thisa->members_.capacity_ )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "size_ <= members_.capacity_",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/auto_buffer.hpp",
      0x13Bu,
      "void boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::reserve_impl(boost::signal"
      "s2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::size_type) [with T = boost::shared_ptr<void>"
      "; StackBufferPolicy = boost::signals2::detail::store_n_objects<10>; GrowPolicy = boost::signals2::detail::default_"
      "grow_policy; Allocator = std::allocator<boost::shared_ptr<void> >; boost::signals2::detail::auto_buffer<T, StackBu"
      "fferPolicy, GrowPolicy, Allocator>::size_type = long unsigned int]");
  }
};

// Line 318: range 000000000BF3C13C-000000000BF3C307
boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type __fastcall boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::new_capacity_impl(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type n)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned __int64 *v5; // rax
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type result; // rax
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *thisa; // [rsp+8h] [rbp-88h]
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  thisa = this;
  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)96;
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 16 new_capacity:321 64 8 5 n:318";
  *(_QWORD *)(v2 + 16) = boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::new_capacity_impl;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  *(_QWORD *)(v2 + 64) = n;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->members_.capacity_ >> 3) + 0x7FFF8000) )
  {
    this = (boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)&thisa->members_.capacity_;
    __asan_report_load8();
  }
  if ( thisa->members_.capacity_ >= *(_QWORD *)(v2 + 64) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "n > members_.capacity_",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/auto_buffer.hpp",
      0x140u,
      "boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::size_type boost::signals2::deta"
      "il::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::new_capacity_impl(boost::signals2::detail::auto_buff"
      "er<T, StackBufferPolicy, GrowPolicy, Allocator>::size_type) [with T = boost::shared_ptr<void>; StackBufferPolicy ="
      " boost::signals2::detail::store_n_objects<10>; GrowPolicy = boost::signals2::detail::default_grow_policy; Allocato"
      "r = std::allocator<boost::shared_ptr<void> >; boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolic"
      "y, Allocator>::size_type = long unsigned int]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->members_.capacity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_QWORD *)(v2 + 32) = boost::signals2::detail::default_grow_policy::new_capacity<unsigned long>(thisa->members_.capacity_);
  v5 = std::max<unsigned long>((const unsigned __int64 *)(v2 + 32), (const unsigned __int64 *)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = *v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 453: range 000000000BF2389C-000000000BF23A93
bool __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::is_valid(
        const boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this)
{
  char v2; // al
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer buffer; // rbx
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type size; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->buffer_ )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->members_.capacity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->members_.capacity_ <= 9 )
    return 0;
  if ( boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::is_on_stack(this) )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)&this->members_.capacity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->members_.capacity_ <= 0xA )
    v2 = 1;
  else
LABEL_14:
    v2 = 0;
  if ( v2 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  buffer = this->buffer_;
  if ( buffer == boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::members_type::address(&this->members_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->members_.capacity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->members_.capacity_ > 0xA )
      return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  size = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->members_.capacity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return size <= this->members_.capacity_;
};

// Line 477: range 000000000BF16FF4-000000000BF170FB
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this)
{
  boost::shared_ptr<void> *v1; // rax

  std::allocator<boost::shared_ptr<void>>::allocator((std::allocator<boost::shared_ptr<void> > *const)this);
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::members_type::members_type(
    &this->members_,
    0xAuLL);
  v1 = (boost::shared_ptr<void> *)boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::members_type::address(&this->members_);
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
    v1 = (boost::shared_ptr<void> *)__asan_report_store8();
  this->buffer_ = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->size_ = 0LL;
  if ( !boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::is_valid(this) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "is_valid()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/auto_buffer.hpp",
      0x1E2u,
      "boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::auto_buffer() [with T = boost::"
      "shared_ptr<void>; StackBufferPolicy = boost::signals2::detail::store_n_objects<10>; GrowPolicy = boost::signals2::"
      "detail::default_grow_policy; Allocator = std::allocator<boost::shared_ptr<void> >]");
  }
};

// Line 606: range 000000000BF09CC2-000000000BF09CF4
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::~auto_buffer(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy(this);
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::members_type::~members_type(&this->members_);
  std::allocator<boost::shared_ptr<void>>::~allocator((std::allocator<boost::shared_ptr<void> > *const)this);
};

// Line 617: range 000000000BF3BF3A-000000000BF3BFB1
bool __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::full(
        const boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type size; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  size = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->members_.capacity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return size == this->members_.capacity_;
};

// Line 622: range 000000000BF2CCCC-000000000BF2CD12
bool __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::is_on_stack(
        const boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->members_.capacity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->members_.capacity_ <= 0xA;
};

// Line 648: range 000000000BF3544C-000000000BF35459
boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::allocator_type *__cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::get_allocator(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this)
{
  return (boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::allocator_type *)this;
};

// Line 659: range 000000000BF444D6-000000000BF44515
boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::iterator __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::begin(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->buffer_;
};

// Line 669: range 000000000BF44516-000000000BF4458E
boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::iterator __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::end(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer buffer; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  buffer = this->buffer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return &buffer[this->size_];
};

// Line 765: range 000000000BF3547C-000000000BF35590
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::unchecked_push_back(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::optimized_const_reference x)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::pointer buffer; // rcx
  boost::shared_ptr<void> *v3; // rdx

  if ( boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::full(this) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "!full()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/auto_buffer.hpp",
      0x2FFu,
      "void boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::unchecked_push_back(boost:"
      ":signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::optimized_const_reference) [with T = "
      "boost::shared_ptr<void>; StackBufferPolicy = boost::signals2::detail::store_n_objects<10>; GrowPolicy = boost::sig"
      "nals2::detail::default_grow_policy; Allocator = std::allocator<boost::shared_ptr<void> >; boost::signals2::detail:"
      ":auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::optimized_const_reference = const boost::shared_ptr<void>&]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  buffer = this->buffer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (boost::shared_ptr<void> *)operator new(0x10uLL, &buffer[this->size_]);
  boost::shared_ptr<void>::shared_ptr(v3, x);
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ++this->size_;
};

// Line 791: range 000000000BF35592-000000000BF356BD
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::reserve(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type n)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type v2; // rdx
  void *p_capacity; // rdi
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->members_.capacity_ >> 3) + 0x7FFF8000) )
  {
    this = (boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)((char *)this + 160);
    __asan_report_load8();
  }
  if ( thisa->members_.capacity_ <= 9 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "members_.capacity_ >= N",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/auto_buffer.hpp",
      0x319u,
      "void boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::reserve(boost::signals2::d"
      "etail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::size_type) [with T = boost::shared_ptr<void>; Sta"
      "ckBufferPolicy = boost::signals2::detail::store_n_objects<10>; GrowPolicy = boost::signals2::detail::default_grow_"
      "policy; Allocator = std::allocator<boost::shared_ptr<void> >; boost::signals2::detail::auto_buffer<T, StackBufferP"
      "olicy, GrowPolicy, Allocator>::size_type = long unsigned int]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->members_.capacity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( n > thisa->members_.capacity_ )
  {
    v2 = boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::new_capacity_impl(
           thisa,
           n);
    p_capacity = thisa;
    boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::reserve_impl(
      thisa,
      v2);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->members_.capacity_ >> 3) + 0x7FFF8000) )
    {
      p_capacity = &thisa->members_.capacity_;
      __asan_report_load8();
    }
    if ( n > thisa->members_.capacity_ )
    {
      __asan_handle_no_return(p_capacity);
      __assert_fail(
        "members_.capacity_ >= n",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2"
        "/detail/auto_buffer.hpp",
        0x31Fu,
        "void boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::reserve(boost::signals2:"
        ":detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::size_type) [with T = boost::shared_ptr<void>;"
        " StackBufferPolicy = boost::signals2::detail::store_n_objects<10>; GrowPolicy = boost::signals2::detail::default"
        "_grow_policy; Allocator = std::allocator<boost::shared_ptr<void> >; boost::signals2::detail::auto_buffer<T, Stac"
        "kBufferPolicy, GrowPolicy, Allocator>::size_type = long unsigned int]");
    }
  }
};

// Line 815: range 000000000BF2CE48-000000000BF2CF30
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::push_back(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::optimized_const_reference x)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type size; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  size = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->members_.capacity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( size == this->members_.capacity_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::reserve(
      this,
      this->size_ + 1);
    boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::unchecked_push_back(
      this,
      x);
  }
  else
  {
    boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::unchecked_push_back(
      this,
      x);
  }
};

// Line 1065: range 000000000BF09CA6-000000000BF09CC0
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::members_type::~members_type(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::members_type *const this)
{
  boost::aligned_storage<160ul,8ul>::~aligned_storage(this);
};

// Line 1069: range 000000000BF23846-000000000BF2389A
void __cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::members_type::members_type(
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::members_type *const this,
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::size_type capacity)
{
  boost::aligned_storage<160ul,8ul>::aligned_storage(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->capacity_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->capacity_ = capacity;
};

// Line 1073: range 000000000BF23810-000000000BF23829
void *__cdecl boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::members_type::address(
        const boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > >::members_type *const this)
{
  return boost::aligned_storage<160ul,8ul>::address(&this->boost::aligned_storage<160,8>);
};
