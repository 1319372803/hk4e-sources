// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/container/detail/destroyers.hpp

// Line 110: range 000000000BFA734C-000000000BFA73F4
void __cdecl boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::scoped_array_deallocator(
        boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const this,
        boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > >::pointer p,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *a,
        boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > >::size_type length)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ptr = p;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_alloc = a;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_length >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_length = length;
};

// Line 110: range 000000000BFA8ACA-000000000BFA8B72
void __cdecl boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::scoped_array_deallocator(
        boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const this,
        boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > >::pointer p,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *a,
        boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > >::size_type length)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ptr = p;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_alloc = a;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_length >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_length = length;
};

// Line 113: range 000000000BFA73F6-000000000BFA749D
void __cdecl boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::~scoped_array_deallocator(
        boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const this)
{
  boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *m_alloc; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->m_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_alloc);
    m_alloc = this->m_alloc;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_length >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_length);
    boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::deallocate(
      m_alloc,
      this->m_ptr,
      this->m_length);
  }
};

// Line 113: range 000000000BFA8B74-000000000BFA8C1B
void __cdecl boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::~scoped_array_deallocator(
        boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const this)
{
  boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *m_alloc; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->m_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_alloc);
    m_alloc = this->m_alloc;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_length >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->m_length);
    boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::deallocate(
      m_alloc,
      this->m_ptr,
      this->m_length);
  }
};

// Line 116: range 000000000BFA77E6-000000000BFA781F
void __cdecl boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::release(
        boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ptr = 0LL;
};

// Line 116: range 000000000BFA8F64-000000000BFA8F9D
void __cdecl boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::release(
        boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ptr = 0LL;
};

// Line 186: range 000000000BFA749E-000000000BFA7546
void __cdecl boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::scoped_destructor_n(
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const this,
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > >::pointer p,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *a,
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > >::size_type n)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_p = p;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_a >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_a = a;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_n >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_n = n;
};

// Line 186: range 000000000BFA8C1C-000000000BFA8CC4
void __cdecl boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::scoped_destructor_n(
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const this,
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > >::pointer p,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *a,
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > >::size_type n)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_p = p;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_a >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_a = a;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_n >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_n = n;
};

// Line 190: range 000000000BFA77AC-000000000BFA77E5
void __cdecl boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::release(
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_p = 0LL;
};

// Line 190: range 000000000BFA8F2A-000000000BFA8F63
void __cdecl boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::release(
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_p = 0LL;
};

// Line 193: range 000000000BFA775E-000000000BFA77AB
void __cdecl boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::increment_size(
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const this,
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > >::size_type inc)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_n >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_n);
  this->m_n += inc;
};

// Line 193: range 000000000BFA8EDC-000000000BFA8F29
void __cdecl boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::increment_size(
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const this,
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > >::size_type inc)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_n >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_n);
  this->m_n += inc;
};

// Line 202: range 000000000BFA7548-000000000BFA775C
void __cdecl boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::~scoped_destructor_n(
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const this)
{
  char v1; // r15
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > >::size_type m_n; // rax
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v6; // rax
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > >::value_type *raw_ptr; // [rsp+20h] [rbp-A0h]
  char v8[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 4 flag";
  *(_QWORD *)(v2 + 16) = boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::~scoped_destructor_n;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->m_p )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    raw_ptr = this->m_p;
    while ( 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_n >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_n);
      m_n = this->m_n;
      this->m_n = m_n - 1;
      if ( !m_n )
        break;
      v6 = raw_ptr++;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_a >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_a);
      *(_BYTE *)(v2 + 32) = v1;
      boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::~pair(v6);
    }
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 202: range 000000000BFA8CC6-000000000BFA8EDA
void __cdecl boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::~scoped_destructor_n(
        boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const this)
{
  char v1; // r15
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > >::size_type m_n; // rax
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v6; // rax
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > >::value_type *raw_ptr; // [rsp+20h] [rbp-A0h]
  char v8[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 4 flag";
  *(_QWORD *)(v2 + 16) = boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::~scoped_destructor_n;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->m_p )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    raw_ptr = this->m_p;
    while ( 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_n >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_n);
      m_n = this->m_n;
      this->m_n = m_n - 1;
      if ( !m_n )
        break;
      v6 = raw_ptr++;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_a >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->m_a);
      *(_BYTE *)(v2 + 32) = v1;
      boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::~pair(v6);
    }
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 279: range 000000000BF7DA4A-000000000BF7DABD
void __cdecl boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::value_destructor(
        boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *const this,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *a,
        boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >::value_type *rv)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->rv_ = rv;
  if ( *(_BYTE *)(((unsigned __int64)&this->a_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->a_ = a;
};

// Line 279: range 000000000BF80BF4-000000000BF80C67
void __cdecl boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::value_destructor(
        boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *const this,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *a,
        boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >::value_type *rv)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->rv_ = rv;
  if ( *(_BYTE *)(((unsigned __int64)&this->a_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->a_ = a;
};

// Line 283: range 000000000BF7DABE-000000000BF7DC06
void __cdecl boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::~value_destructor(
        boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *const this)
{
  char v1; // r14
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *rv; // rdx
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 4 flag";
  *(_QWORD *)(v2 + 16) = boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::~value_destructor;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  rv = this->rv_;
  if ( *(_BYTE *)(((unsigned __int64)&this->a_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->a_);
  *(_BYTE *)(v2 + 32) = v1;
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::~pair(rv);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 283: range 000000000BF80C68-000000000BF80DB0
void __cdecl boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::~value_destructor(
        boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *const this)
{
  char v1; // r14
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *rv; // rdx
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 4 flag";
  *(_QWORD *)(v2 + 16) = boost::container::dtl::value_destructor<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::~value_destructor;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  rv = this->rv_;
  if ( *(_BYTE *)(((unsigned __int64)&this->a_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->a_);
  *(_BYTE *)(v2 + 32) = v1;
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::~pair(rv);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
