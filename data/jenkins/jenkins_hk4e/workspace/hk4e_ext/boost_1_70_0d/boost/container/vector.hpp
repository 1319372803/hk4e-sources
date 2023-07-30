// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/container/vector.hpp

// Line 308: range 000000000BF4CD8A-000000000BF4CE32
void __cdecl boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,unsigned long,boost::move_detail::integral_constant<unsigned int,1u>>::vector_alloc_holder(
        boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *const this)
{
  boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::new_allocator((boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_start = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_size >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_capacity >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_capacity = 0LL;
};

// Line 308: range 000000000BF4C926-000000000BF4C9CE
void __cdecl boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,unsigned long,boost::move_detail::integral_constant<unsigned int,1u>>::vector_alloc_holder(
        boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *const this)
{
  boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::new_allocator((boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_start = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_size >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_size = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_capacity >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_capacity = 0LL;
};

// Line 455: range 000000000BFA0CAC-000000000BFA0F89
boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type __cdecl boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,unsigned long,boost::move_detail::integral_constant<unsigned int,1u>>::next_capacity<boost::container::growth_factor_60>(
        const boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *const this,
        boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type additional_objects)
{
  char v2; // r15
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_capacity; // rcx
  void *p_m_capacity; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type result; // rax
  const boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *thisa; // [rsp+8h] [rbp-D8h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type remaining_cap; // [rsp+20h] [rbp-C0h]
  unsigned __int64 min_additional_cap; // [rsp+28h] [rbp-B8h]
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *const)96;
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 4 flag 64 8 7 max:458";
  *(_QWORD *)(v3 + 16) = boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,unsigned long,boost::move_detail::integral_constant<unsigned int,1u>>::next_capacity<boost::container::growth_factor_60>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_capacity >> 3) + 0x7FFF8000) )
  {
    this = (const boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *const)&thisa->m_capacity;
    __asan_report_load8(&thisa->m_capacity);
  }
  m_capacity = thisa->m_capacity;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_size >> 3) + 0x7FFF8000) )
  {
    this = (const boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *const)&thisa->m_size;
    __asan_report_load8(&thisa->m_size);
  }
  if ( additional_objects <= m_capacity - thisa->m_size )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "additional_objects > size_type(this->m_capacity - this->m_size)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
      0x1C9u,
      "boost::container::vector_alloc_holder<Allocator, StoredSizeType, AllocatorVersion>::size_type boost::container::ve"
      "ctor_alloc_holder<Allocator, StoredSizeType, AllocatorVersion>::next_capacity(boost::container::vector_alloc_holde"
      "r<Allocator, StoredSizeType, AllocatorVersion>::size_type) const [with GrowthFactorType = boost::container::growth"
      "_factor_60; Allocator = boost::container::new_allocator<boost::container::dtl::pair<unsigned int, std::shared_ptr<"
      "GateserverSession> > >; StoredSizeType = long unsigned int; AllocatorVersion = boost::move_detail::integral_consta"
      "nt<unsigned int, 1>; boost::container::vector_alloc_holder<Allocator, StoredSizeType, AllocatorVersion>::size_type"
      " = long unsigned int]");
  }
  *(_BYTE *)(v3 + 48) = v2;
  p_m_capacity = (void *)thisa;
  *(_QWORD *)(v3 + 64) = boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::max_size((const boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *const)thisa);
  v8 = *(_QWORD *)(v3 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_capacity >> 3) + 0x7FFF8000) )
  {
    p_m_capacity = &thisa->m_capacity;
    __asan_report_load8(&thisa->m_capacity);
  }
  remaining_cap = v8 - thisa->m_capacity;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_size >> 3) + 0x7FFF8000) )
  {
    p_m_capacity = &thisa->m_size;
    __asan_report_load8(&thisa->m_size);
  }
  min_additional_cap = thisa->m_size - thisa->m_capacity + additional_objects;
  if ( remaining_cap < min_additional_cap )
  {
    __asan_handle_no_return(p_m_capacity);
    boost::container::throw_length_error("get_next_capacity, allocator's max size reached");
  }
  v9 = *(_QWORD *)(v3 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_capacity >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_capacity);
  result = boost::container::dtl::grow_factor_ratio<0u,8u,5u>::operator()<unsigned long>(
             (const boost::container::dtl::grow_factor_ratio<0,8,5> *const)(v3 + 48),
             thisa->m_capacity,
             min_additional_cap,
             v9);
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 455: range 000000000BFA47E6-000000000BFA4AC3
boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type __cdecl boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,unsigned long,boost::move_detail::integral_constant<unsigned int,1u>>::next_capacity<boost::container::growth_factor_60>(
        const boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *const this,
        boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type additional_objects)
{
  char v2; // r15
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_capacity; // rcx
  void *p_m_capacity; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type result; // rax
  const boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *thisa; // [rsp+8h] [rbp-D8h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type remaining_cap; // [rsp+20h] [rbp-C0h]
  unsigned __int64 min_additional_cap; // [rsp+28h] [rbp-B8h]
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *const)96;
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 4 flag 64 8 7 max:458";
  *(_QWORD *)(v3 + 16) = boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,unsigned long,boost::move_detail::integral_constant<unsigned int,1u>>::next_capacity<boost::container::growth_factor_60>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_capacity >> 3) + 0x7FFF8000) )
  {
    this = (const boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *const)&thisa->m_capacity;
    __asan_report_load8(&thisa->m_capacity);
  }
  m_capacity = thisa->m_capacity;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_size >> 3) + 0x7FFF8000) )
  {
    this = (const boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> > *const)&thisa->m_size;
    __asan_report_load8(&thisa->m_size);
  }
  if ( additional_objects <= m_capacity - thisa->m_size )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "additional_objects > size_type(this->m_capacity - this->m_size)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
      0x1C9u,
      "boost::container::vector_alloc_holder<Allocator, StoredSizeType, AllocatorVersion>::size_type boost::container::ve"
      "ctor_alloc_holder<Allocator, StoredSizeType, AllocatorVersion>::next_capacity(boost::container::vector_alloc_holde"
      "r<Allocator, StoredSizeType, AllocatorVersion>::size_type) const [with GrowthFactorType = boost::container::growth"
      "_factor_60; Allocator = boost::container::new_allocator<boost::container::dtl::pair<unsigned int, std::shared_ptr<"
      "HttpSession> > >; StoredSizeType = long unsigned int; AllocatorVersion = boost::move_detail::integral_constant<uns"
      "igned int, 1>; boost::container::vector_alloc_holder<Allocator, StoredSizeType, AllocatorVersion>::size_type = long unsigned int]");
  }
  *(_BYTE *)(v3 + 48) = v2;
  p_m_capacity = (void *)thisa;
  *(_QWORD *)(v3 + 64) = boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::max_size((const boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *const)thisa);
  v8 = *(_QWORD *)(v3 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_capacity >> 3) + 0x7FFF8000) )
  {
    p_m_capacity = &thisa->m_capacity;
    __asan_report_load8(&thisa->m_capacity);
  }
  remaining_cap = v8 - thisa->m_capacity;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_size >> 3) + 0x7FFF8000) )
  {
    p_m_capacity = &thisa->m_size;
    __asan_report_load8(&thisa->m_size);
  }
  min_additional_cap = thisa->m_size - thisa->m_capacity + additional_objects;
  if ( remaining_cap < min_additional_cap )
  {
    __asan_handle_no_return(p_m_capacity);
    boost::container::throw_length_error("get_next_capacity, allocator's max size reached");
  }
  v9 = *(_QWORD *)(v3 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_capacity >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->m_capacity);
  result = boost::container::dtl::grow_factor_ratio<0u,8u,5u>::operator()<unsigned long>(
             (const boost::container::dtl::grow_factor_ratio<0,8,5> *const)(v3 + 48),
             thisa->m_capacity,
             min_additional_cap,
             v9);
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 838: range 000000000BF4C63A-000000000BF4C654
void __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::vector(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const this)
{
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,unsigned long,boost::move_detail::integral_constant<unsigned int,1u>>::vector_alloc_holder(&this->m_holder);
};

// Line 838: range 000000000BF4C174-000000000BF4C18E
void __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::vector(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const this)
{
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,unsigned long,boost::move_detail::integral_constant<unsigned int,1u>>::vector_alloc_holder(&this->m_holder);
};

// Line 1114: range 000000000BF4B2D0-000000000BF4B41F
void __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::~vector(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const this)
{
  unsigned __int64 m_size; // rdx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v2; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_capacity; // [rsp+30h] [rbp-50h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_holder.m_size);
  m_size = this->m_holder.m_size;
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::container::destroy_alloc_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*,unsigned long>(
    (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
    v2->m_holder.m_start,
    m_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_capacity >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_holder.m_capacity);
  if ( this->m_holder.m_capacity )
  {
    m_capacity = this->m_holder.m_capacity;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::deallocate(
      (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *const)this,
      this->m_holder.m_start,
      m_capacity);
  }
};

// Line 1114: range 000000000BF4AE0E-000000000BF4AF5D
void __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::~vector(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const this)
{
  unsigned __int64 m_size; // rdx
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v2; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_capacity; // [rsp+30h] [rbp-50h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_holder.m_size);
  m_size = this->m_holder.m_size;
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::container::destroy_alloc_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*,unsigned long>(
    (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
    v2->m_holder.m_start,
    m_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_capacity >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->m_holder.m_capacity);
  if ( this->m_holder.m_capacity )
  {
    m_capacity = this->m_holder.m_capacity;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::deallocate(
      (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *const)this,
      this->m_holder.m_start,
      m_capacity);
  }
};

// Line 1665: range 000000000BF7A1AE-000000000BF7A29C
boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::iterator __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::nth(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const this,
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type n)
{
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type v2; // rdx
  _QWORD *v3; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type na; // [rsp+8h] [rbp-38h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::iterator v6; // [rsp+18h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-10h]

  v6.m_ptr = (boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *)this;
  na = v2;
  if ( *(_BYTE *)(((n + 8) >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)(n + 8);
    __asan_report_load8(n + 8);
  }
  if ( na > *(_QWORD *)(n + 8) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->m_holder.m_size >= n",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
      0x683u,
      "boost::container::vector<T, Allocator, Options>::iterator boost::container::vector<T, Allocator, Options>::nth(boo"
      "st::container::vector<T, Allocator, Options>::size_type) [with T = boost::container::dtl::pair<unsigned int, std::"
      "shared_ptr<GateserverSession> >; A = boost::container::new_allocator<boost::container::dtl::pair<unsigned int, std"
      "::shared_ptr<GateserverSession> > >; Options = void; boost::container::vector<T, Allocator, Options>::iterator = b"
      "oost::container::vec_iterator<boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> >*, fal"
      "se>; typename boost::container::allocator_traits<typename boost::container::real_allocator<T, A>::type>::pointer ="
      " boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> >*; boost::container::vector<T, Allo"
      "cator, Options>::size_type = long unsigned int]");
  }
  v3 = (_QWORD *)n;
  if ( *(_BYTE *)((n >> 3) + 0x7FFF8000) )
    __asan_report_load8(n);
  v7 = *v3 + 24 * na;
  if ( *(_BYTE *)(((unsigned __int64)v6.m_ptr >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)&v6.m_ptr->first = v7;
  return v6;
};

// Line 1665: range 000000000BF7C59C-000000000BF7C68A
boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::iterator __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::nth(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const this,
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type n)
{
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type v2; // rdx
  _QWORD *v3; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type na; // [rsp+8h] [rbp-38h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::iterator v6; // [rsp+18h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-10h]

  v6.m_ptr = (boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *)this;
  na = v2;
  if ( *(_BYTE *)(((n + 8) >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)(n + 8);
    __asan_report_load8(n + 8);
  }
  if ( na > *(_QWORD *)(n + 8) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->m_holder.m_size >= n",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
      0x683u,
      "boost::container::vector<T, Allocator, Options>::iterator boost::container::vector<T, Allocator, Options>::nth(boo"
      "st::container::vector<T, Allocator, Options>::size_type) [with T = boost::container::dtl::pair<unsigned int, std::"
      "shared_ptr<HttpSession> >; A = boost::container::new_allocator<boost::container::dtl::pair<unsigned int, std::shar"
      "ed_ptr<HttpSession> > >; Options = void; boost::container::vector<T, Allocator, Options>::iterator = boost::contai"
      "ner::vec_iterator<boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> >*, false>; typename boos"
      "t::container::allocator_traits<typename boost::container::real_allocator<T, A>::type>::pointer = boost::container:"
      ":dtl::pair<unsigned int, std::shared_ptr<HttpSession> >*; boost::container::vector<T, Allocator, Options>::size_ty"
      "pe = long unsigned int]");
  }
  v3 = (_QWORD *)n;
  if ( *(_BYTE *)((n >> 3) + 0x7FFF8000) )
    __asan_report_load8(n);
  v7 = *v3 + 24 * na;
  if ( *(_BYTE *)(((unsigned __int64)v6.m_ptr >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)&v6.m_ptr->first = v7;
  return v6;
};

// Line 2059: range 000000000BF7CD44-000000000BF7D193
boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::iterator __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::erase(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const this,
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *p_position)
{
  unsigned __int64 v2; // rdx
  __int64 *v3; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *v4; // rax
  __int64 m_ptr; // rax
  unsigned __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rax
  char v9; // al
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::pointer *v10; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *v11; // rax
  unsigned __int64 p_positiona; // [rsp+8h] [rbp-118h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::iterator v14; // [rsp+18h] [rbp-108h]
  __int64 v15; // [rsp+20h] [rbp-100h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-F8h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-F0h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::pointer p; // [rsp+38h] [rbp-E8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *pos_ptr; // [rsp+40h] [rbp-E0h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *beg_ptr; // [rsp+48h] [rbp-D8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *new_end_ptr; // [rsp+50h] [rbp-D0h]
  unsigned __int64 v22; // [rsp+58h] [rbp-C8h]
  unsigned __int64 v23; // [rsp+60h] [rbp-C0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *v24; // [rsp+68h] [rbp-B8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *v25; // [rsp+70h] [rbp-B0h]
  __int64 *v26; // [rsp+78h] [rbp-A8h]
  __int64 v27; // [rsp+80h] [rbp-A0h]
  unsigned __int64 *v28; // [rsp+88h] [rbp-98h]
  unsigned __int64 v29; // [rsp+90h] [rbp-90h]
  unsigned __int64 v30; // [rsp+98h] [rbp-88h]
  unsigned __int64 v31; // [rsp+A0h] [rbp-80h]
  __int64 v32; // [rsp+A8h] [rbp-78h]
  __int64 v33; // [rsp+B0h] [rbp-70h]
  unsigned __int64 *v34; // [rsp+B8h] [rbp-68h]
  __int64 v35; // [rsp+C0h] [rbp-60h]
  unsigned __int64 *v36; // [rsp+C8h] [rbp-58h]
  unsigned __int64 v37; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v38; // [rsp+D8h] [rbp-48h]
  _QWORD *v39; // [rsp+E0h] [rbp-40h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::pointer v40; // [rsp+E8h] [rbp-38h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *v41; // [rsp+F0h] [rbp-30h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *v42; // [rsp+F8h] [rbp-28h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v43; // [rsp+100h] [rbp-20h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::pointer v44; // [rsp+108h] [rbp-18h]
  unsigned __int64 v45; // [rsp+110h] [rbp-10h]
  unsigned __int64 v46; // [rsp+118h] [rbp-8h]

  v14.m_ptr = (boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *)this;
  p_positiona = v2;
  v37 = v2;
  v38 = v2;
  v3 = (__int64 *)v2;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)v2;
    __asan_report_load8();
  }
  v15 = *v3;
  v22 = (unsigned __int64)p_position;
  v23 = (unsigned __int64)&v15;
  v24 = p_position;
  v25 = p_position;
  v4 = p_position;
  if ( *(_BYTE *)(((unsigned __int64)p_position >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)p_position;
    __asan_report_load8();
  }
  m_ptr = (__int64)v4->m_ptr;
  v26 = (__int64 *)&v17;
  v27 = m_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&v17 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)&v17;
    __asan_report_store8();
  }
  *v26 = v27;
  v28 = (unsigned __int64 *)v23;
  v6 = v17;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)v23;
    __asan_report_load8();
  }
  if ( v6 > *v28 )
    goto LABEL_23;
  v29 = v22;
  v30 = v22;
  v31 = v22;
  v7 = (__int64 *)v22;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)v22;
    __asan_report_load8();
  }
  v32 = *v7;
  if ( *(_BYTE *)(((v30 + 8) >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)(v30 + 8);
    __asan_report_load8();
  }
  v33 = *(_QWORD *)(v30 + 8);
  if ( v33 )
    v8 = 24 * v33 + v32;
  else
    v8 = v32;
  v34 = &v16;
  v35 = v8;
  if ( *(_BYTE *)(((unsigned __int64)&v16 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)&v16;
    __asan_report_store8();
  }
  *v34 = v35;
  v36 = (unsigned __int64 *)v23;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)v23;
    __asan_report_load8();
  }
  if ( *v36 >= v16 )
LABEL_23:
    v9 = 0;
  else
    v9 = 1;
  if ( !v9 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->priv_in_range(position)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
      0x80Du,
      "boost::container::vector<T, Allocator, Options>::iterator boost::container::vector<T, Allocator, Options>::erase(b"
      "oost::container::vector<T, Allocator, Options>::const_iterator) [with T = boost::container::dtl::pair<unsigned int"
      ", std::shared_ptr<GateserverSession> >; A = boost::container::new_allocator<boost::container::dtl::pair<unsigned i"
      "nt, std::shared_ptr<GateserverSession> > >; Options = void; boost::container::vector<T, Allocator, Options>::itera"
      "tor = boost::container::vec_iterator<boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> "
      ">*, false>; typename boost::container::allocator_traits<typename boost::container::real_allocator<T, A>::type>::po"
      "inter = boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> >*; boost::container::vector<"
      "T, Allocator, Options>::const_iterator = boost::container::vec_iterator<boost::container::dtl::pair<unsigned int, "
      "std::shared_ptr<GateserverSession> >*, true>]");
  }
  v45 = p_positiona;
  v46 = p_positiona;
  v10 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::pointer *)p_positiona;
  if ( *(_BYTE *)((p_positiona >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p = *v10;
  v44 = p;
  pos_ptr = p;
  v41 = p_position;
  v42 = p_position;
  v11 = p_position;
  if ( *(_BYTE *)(((unsigned __int64)p_position >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v43 = v11->m_ptr;
  beg_ptr = v43;
  if ( *(_BYTE *)(((unsigned __int64)&p_position[1] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  new_end_ptr = boost::container::move<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *>(
                  pos_ptr + 1,
                  &beg_ptr[(__int64)p_position[1].m_ptr],
                  pos_ptr);
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_destroy_last(
    (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)p_position,
    pos_ptr != new_end_ptr);
  v39 = v14.m_ptr;
  v40 = p;
  if ( *(_BYTE *)(((unsigned __int64)v14.m_ptr >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v39 = v40;
  return v14;
};

// Line 2059: range 000000000BF805D2-000000000BF80A21
boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::iterator __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::erase(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const this,
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *p_position)
{
  unsigned __int64 v2; // rdx
  __int64 *v3; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *v4; // rax
  __int64 m_ptr; // rax
  unsigned __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rax
  char v9; // al
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::pointer *v10; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *v11; // rax
  unsigned __int64 p_positiona; // [rsp+8h] [rbp-118h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::iterator v14; // [rsp+18h] [rbp-108h]
  __int64 v15; // [rsp+20h] [rbp-100h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-F8h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-F0h] BYREF
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::pointer p; // [rsp+38h] [rbp-E8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *pos_ptr; // [rsp+40h] [rbp-E0h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *beg_ptr; // [rsp+48h] [rbp-D8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *new_end_ptr; // [rsp+50h] [rbp-D0h]
  unsigned __int64 v22; // [rsp+58h] [rbp-C8h]
  unsigned __int64 v23; // [rsp+60h] [rbp-C0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *v24; // [rsp+68h] [rbp-B8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *v25; // [rsp+70h] [rbp-B0h]
  __int64 *v26; // [rsp+78h] [rbp-A8h]
  __int64 v27; // [rsp+80h] [rbp-A0h]
  unsigned __int64 *v28; // [rsp+88h] [rbp-98h]
  unsigned __int64 v29; // [rsp+90h] [rbp-90h]
  unsigned __int64 v30; // [rsp+98h] [rbp-88h]
  unsigned __int64 v31; // [rsp+A0h] [rbp-80h]
  __int64 v32; // [rsp+A8h] [rbp-78h]
  __int64 v33; // [rsp+B0h] [rbp-70h]
  unsigned __int64 *v34; // [rsp+B8h] [rbp-68h]
  __int64 v35; // [rsp+C0h] [rbp-60h]
  unsigned __int64 *v36; // [rsp+C8h] [rbp-58h]
  unsigned __int64 v37; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v38; // [rsp+D8h] [rbp-48h]
  _QWORD *v39; // [rsp+E0h] [rbp-40h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::pointer v40; // [rsp+E8h] [rbp-38h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *v41; // [rsp+F0h] [rbp-30h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *v42; // [rsp+F8h] [rbp-28h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v43; // [rsp+100h] [rbp-20h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::pointer v44; // [rsp+108h] [rbp-18h]
  unsigned __int64 v45; // [rsp+110h] [rbp-10h]
  unsigned __int64 v46; // [rsp+118h] [rbp-8h]

  v14.m_ptr = (boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *)this;
  p_positiona = v2;
  v37 = v2;
  v38 = v2;
  v3 = (__int64 *)v2;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)v2;
    __asan_report_load8();
  }
  v15 = *v3;
  v22 = (unsigned __int64)p_position;
  v23 = (unsigned __int64)&v15;
  v24 = p_position;
  v25 = p_position;
  v4 = p_position;
  if ( *(_BYTE *)(((unsigned __int64)p_position >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)p_position;
    __asan_report_load8();
  }
  m_ptr = (__int64)v4->m_ptr;
  v26 = (__int64 *)&v17;
  v27 = m_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&v17 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)&v17;
    __asan_report_store8();
  }
  *v26 = v27;
  v28 = (unsigned __int64 *)v23;
  v6 = v17;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)v23;
    __asan_report_load8();
  }
  if ( v6 > *v28 )
    goto LABEL_23;
  v29 = v22;
  v30 = v22;
  v31 = v22;
  v7 = (__int64 *)v22;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)v22;
    __asan_report_load8();
  }
  v32 = *v7;
  if ( *(_BYTE *)(((v30 + 8) >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)(v30 + 8);
    __asan_report_load8();
  }
  v33 = *(_QWORD *)(v30 + 8);
  if ( v33 )
    v8 = 24 * v33 + v32;
  else
    v8 = v32;
  v34 = &v16;
  v35 = v8;
  if ( *(_BYTE *)(((unsigned __int64)&v16 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)&v16;
    __asan_report_store8();
  }
  *v34 = v35;
  v36 = (unsigned __int64 *)v23;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)v23;
    __asan_report_load8();
  }
  if ( *v36 >= v16 )
LABEL_23:
    v9 = 0;
  else
    v9 = 1;
  if ( !v9 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->priv_in_range(position)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
      0x80Du,
      "boost::container::vector<T, Allocator, Options>::iterator boost::container::vector<T, Allocator, Options>::erase(b"
      "oost::container::vector<T, Allocator, Options>::const_iterator) [with T = boost::container::dtl::pair<unsigned int"
      ", std::shared_ptr<HttpSession> >; A = boost::container::new_allocator<boost::container::dtl::pair<unsigned int, st"
      "d::shared_ptr<HttpSession> > >; Options = void; boost::container::vector<T, Allocator, Options>::iterator = boost:"
      ":container::vec_iterator<boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> >*, false>; typena"
      "me boost::container::allocator_traits<typename boost::container::real_allocator<T, A>::type>::pointer = boost::con"
      "tainer::dtl::pair<unsigned int, std::shared_ptr<HttpSession> >*; boost::container::vector<T, Allocator, Options>::"
      "const_iterator = boost::container::vec_iterator<boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> >*, true>]");
  }
  v45 = p_positiona;
  v46 = p_positiona;
  v10 = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::pointer *)p_positiona;
  if ( *(_BYTE *)((p_positiona >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p = *v10;
  v44 = p;
  pos_ptr = p;
  v41 = p_position;
  v42 = p_position;
  v11 = p_position;
  if ( *(_BYTE *)(((unsigned __int64)p_position >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v43 = v11->m_ptr;
  beg_ptr = v43;
  if ( *(_BYTE *)(((unsigned __int64)&p_position[1] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  new_end_ptr = boost::container::move<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *>(
                  pos_ptr + 1,
                  &beg_ptr[(__int64)p_position[1].m_ptr],
                  pos_ptr);
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_destroy_last(
    (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)p_position,
    pos_ptr != new_end_ptr);
  v39 = v14.m_ptr;
  v40 = p;
  if ( *(_BYTE *)(((unsigned __int64)v14.m_ptr >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v39 = v40;
  return v14;
};

// Line 2599: range 000000000BF8372C-000000000BF8393D
void __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_destroy_last(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const this,
        const bool moved)
{
  char v2; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v6; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rcx
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v8; // [rsp+28h] [rbp-A8h]
  char v9[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 4 flag";
  *(_QWORD *)(v3 + 16) = boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_destroy_last;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m_start = v6->m_holder.m_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = &m_start[this->m_holder.m_size - 1];
  *(_BYTE *)(v3 + 32) = v2;
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::~pair(v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  --this->m_holder.m_size;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2599: range 000000000BF873C6-000000000BF875D7
void __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_destroy_last(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const this,
        const bool moved)
{
  char v2; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v6; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rcx
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v8; // [rsp+28h] [rbp-A8h]
  char v9[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 4 flag";
  *(_QWORD *)(v3 + 16) = boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_destroy_last;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m_start = v6->m_holder.m_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = &m_start[this->m_holder.m_size - 1];
  *(_BYTE *)(v3 + 32) = v2;
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::~pair(v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  --this->m_holder.m_size;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2636: range 000000000BF90D32-000000000BF91055
boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::iterator __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_insert<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const this,
        const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *p,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *x)
{
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v3; // rcx
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v4; // rax
  const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *v5; // rax
  __int64 m_ptr; // rax
  unsigned __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rax
  char v10; // al
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v11; // rdx
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *xa; // [rsp+0h] [rbp-E0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v15; // [rsp+18h] [rbp-C8h]
  __int64 v16; // [rsp+28h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-B0h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-A0h]
  unsigned __int64 v20; // [rsp+48h] [rbp-98h]
  const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *v21; // [rsp+50h] [rbp-90h]
  const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::const_iterator *v22; // [rsp+58h] [rbp-88h]
  __int64 *v23; // [rsp+60h] [rbp-80h]
  __int64 v24; // [rsp+68h] [rbp-78h]
  unsigned __int64 *v25; // [rsp+70h] [rbp-70h]
  unsigned __int64 v26; // [rsp+78h] [rbp-68h]
  unsigned __int64 v27; // [rsp+80h] [rbp-60h]
  unsigned __int64 v28; // [rsp+88h] [rbp-58h]
  __int64 v29; // [rsp+90h] [rbp-50h]
  __int64 v30; // [rsp+98h] [rbp-48h]
  unsigned __int64 *v31; // [rsp+A0h] [rbp-40h]
  __int64 v32; // [rsp+A8h] [rbp-38h]
  unsigned __int64 *v33; // [rsp+B0h] [rbp-30h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v34; // [rsp+B8h] [rbp-28h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v35; // [rsp+C0h] [rbp-20h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v36; // [rsp+C8h] [rbp-18h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v37; // [rsp+D0h] [rbp-10h]
  boost::movelib::iterator_traits<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::value_type *v; // [rsp+D8h] [rbp-8h]

  v15 = this;
  xa = v3;
  v34 = x;
  v35 = x;
  v4 = x;
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)x;
    __asan_report_load8();
  }
  v16 = *(_QWORD *)&v4->first;
  v19 = (unsigned __int64)p;
  v20 = (unsigned __int64)&v16;
  v21 = p;
  v22 = p;
  v5 = p;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)p;
    __asan_report_load8();
  }
  m_ptr = (__int64)v5->m_ptr;
  v23 = (__int64 *)&v18;
  v24 = m_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&v18 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)&v18;
    __asan_report_store8();
  }
  *v23 = v24;
  v25 = (unsigned __int64 *)v20;
  v7 = v18;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)v20;
    __asan_report_load8();
  }
  if ( v7 > *v25 )
    goto LABEL_23;
  v26 = v19;
  v27 = v19;
  v28 = v19;
  v8 = (__int64 *)v19;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)v19;
    __asan_report_load8();
  }
  v29 = *v8;
  if ( *(_BYTE *)(((v27 + 8) >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)(v27 + 8);
    __asan_report_load8();
  }
  v30 = *(_QWORD *)(v27 + 8);
  if ( v30 )
    v9 = 24 * v30 + v29;
  else
    v9 = v29;
  v31 = &v17;
  v32 = v9;
  if ( *(_BYTE *)(((unsigned __int64)&v17 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)&v17;
    __asan_report_store8();
  }
  *v31 = v32;
  v33 = (unsigned __int64 *)v20;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)v20;
    __asan_report_load8();
  }
  if ( *v33 > v17 )
LABEL_23:
    v10 = 0;
  else
    v10 = 1;
  if ( !v10 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->priv_in_range_or_end(p)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
      0xA4Eu,
      "boost::container::vector<T, Allocator, Options>::iterator boost::container::vector<T, Allocator, Options>::priv_in"
      "sert(const const_iterator&, U&&) [with U = boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSes"
      "sion> >; T = boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> >; A = boost::container:"
      ":new_allocator<boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> > >; Options = void; b"
      "oost::container::vector<T, Allocator, Options>::iterator = boost::container::vec_iterator<boost::container::dtl::p"
      "air<unsigned int, std::shared_ptr<GateserverSession> >*, false>; typename boost::container::allocator_traits<typen"
      "ame boost::container::real_allocator<T, A>::type>::pointer = boost::container::dtl::pair<unsigned int, std::shared"
      "_ptr<GateserverSession> >*; boost::container::vector<T, Allocator, Options>::const_iterator = boost::container::ve"
      "c_iterator<boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> >*, true>]");
  }
  v = xa;
  boost::container::dtl::get_insert_value_proxy<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>(xa);
  v36 = x;
  v37 = x;
  v11 = x;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>(
    v15,
    &p->m_ptr,
    (const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type)v11,
    (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>)1LL);
  return (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::iterator)v15;
};

// Line 2636: range 000000000BF93DB0-000000000BF940D3
boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::iterator __cdecl boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_insert<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const this,
        const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *p,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *x)
{
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v3; // rcx
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v4; // rax
  const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *v5; // rax
  __int64 m_ptr; // rax
  unsigned __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rax
  char v10; // al
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v11; // rdx
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *xa; // [rsp+0h] [rbp-E0h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v15; // [rsp+18h] [rbp-C8h]
  __int64 v16; // [rsp+28h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-B0h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-A0h]
  unsigned __int64 v20; // [rsp+48h] [rbp-98h]
  const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *v21; // [rsp+50h] [rbp-90h]
  const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::const_iterator *v22; // [rsp+58h] [rbp-88h]
  __int64 *v23; // [rsp+60h] [rbp-80h]
  __int64 v24; // [rsp+68h] [rbp-78h]
  unsigned __int64 *v25; // [rsp+70h] [rbp-70h]
  unsigned __int64 v26; // [rsp+78h] [rbp-68h]
  unsigned __int64 v27; // [rsp+80h] [rbp-60h]
  unsigned __int64 v28; // [rsp+88h] [rbp-58h]
  __int64 v29; // [rsp+90h] [rbp-50h]
  __int64 v30; // [rsp+98h] [rbp-48h]
  unsigned __int64 *v31; // [rsp+A0h] [rbp-40h]
  __int64 v32; // [rsp+A8h] [rbp-38h]
  unsigned __int64 *v33; // [rsp+B0h] [rbp-30h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v34; // [rsp+B8h] [rbp-28h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v35; // [rsp+C0h] [rbp-20h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v36; // [rsp+C8h] [rbp-18h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v37; // [rsp+D0h] [rbp-10h]
  boost::movelib::iterator_traits<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::value_type *v; // [rsp+D8h] [rbp-8h]

  v15 = this;
  xa = v3;
  v34 = x;
  v35 = x;
  v4 = x;
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)x;
    __asan_report_load8();
  }
  v16 = *(_QWORD *)&v4->first;
  v19 = (unsigned __int64)p;
  v20 = (unsigned __int64)&v16;
  v21 = p;
  v22 = p;
  v5 = p;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)p;
    __asan_report_load8();
  }
  m_ptr = (__int64)v5->m_ptr;
  v23 = (__int64 *)&v18;
  v24 = m_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&v18 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)&v18;
    __asan_report_store8();
  }
  *v23 = v24;
  v25 = (unsigned __int64 *)v20;
  v7 = v18;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)v20;
    __asan_report_load8();
  }
  if ( v7 > *v25 )
    goto LABEL_23;
  v26 = v19;
  v27 = v19;
  v28 = v19;
  v8 = (__int64 *)v19;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)v19;
    __asan_report_load8();
  }
  v29 = *v8;
  if ( *(_BYTE *)(((v27 + 8) >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)(v27 + 8);
    __asan_report_load8();
  }
  v30 = *(_QWORD *)(v27 + 8);
  if ( v30 )
    v9 = 24 * v30 + v29;
  else
    v9 = v29;
  v31 = &v17;
  v32 = v9;
  if ( *(_BYTE *)(((unsigned __int64)&v17 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)&v17;
    __asan_report_store8();
  }
  *v31 = v32;
  v33 = (unsigned __int64 *)v20;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)v20;
    __asan_report_load8();
  }
  if ( *v33 > v17 )
LABEL_23:
    v10 = 0;
  else
    v10 = 1;
  if ( !v10 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->priv_in_range_or_end(p)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
      0xA4Eu,
      "boost::container::vector<T, Allocator, Options>::iterator boost::container::vector<T, Allocator, Options>::priv_in"
      "sert(const const_iterator&, U&&) [with U = boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> "
      ">; T = boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> >; A = boost::container::new_allocat"
      "or<boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> > >; Options = void; boost::container::v"
      "ector<T, Allocator, Options>::iterator = boost::container::vec_iterator<boost::container::dtl::pair<unsigned int, "
      "std::shared_ptr<HttpSession> >*, false>; typename boost::container::allocator_traits<typename boost::container::re"
      "al_allocator<T, A>::type>::pointer = boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> >*; bo"
      "ost::container::vector<T, Allocator, Options>::const_iterator = boost::container::vec_iterator<boost::container::d"
      "tl::pair<unsigned int, std::shared_ptr<HttpSession> >*, true>]");
  }
  v = xa;
  boost::container::dtl::get_insert_value_proxy<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>(xa);
  v36 = x;
  v37 = x;
  v11 = x;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>(
    v15,
    &p->m_ptr,
    (const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type)v11,
    (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>)1LL);
  return (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::iterator)v15;
};

// Line 2752: range 000000000BF9BD66-000000000BF9C103
boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::iterator __fastcall boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert_no_capacity<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const this,
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *pos,
        const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type n,
        const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> insert_range_proxy,
        __int64 a5)
{
  char v5; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r12
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v9; // rsi
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v10; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v11; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type n_pos; // [rsp+40h] [rbp-130h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *raw_pos; // [rsp+48h] [rbp-128h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type new_cap; // [rsp+50h] [rbp-120h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *new_buf; // [rsp+58h] [rbp-118h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v21; // [rsp+68h] [rbp-108h]
  char v22[144]; // [rsp+E0h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 4 flag 64 8 23 insert_range_proxy:2753";
  *(_QWORD *)(v6 + 16) = boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert_no_capacity<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -202116352;
  *(_QWORD *)(v6 + 64) = a5;
  if ( *(_BYTE *)((n >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = *(boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > **)n;
  v10 = pos;
  if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  n_pos = 0xAAAAAAAAAAAAAAABLL * (((char *)v9 - (char *)v10->m_holder.m_start) >> 3);
  raw_pos = *(boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > **)n;
  new_cap = boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,unsigned long,boost::move_detail::integral_constant<unsigned int,1u>>::next_capacity<boost::container::growth_factor_60>(
              &pos->m_holder,
              (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type)insert_range_proxy.v_);
  *(_BYTE *)(v6 + 48) = v5;
  if ( new_cap > boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::max_size((const boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *const)pos) )
  {
    __asan_handle_no_return(pos);
    boost::container::throw_length_error("get_next_capacity, allocator's max size reached");
  }
  new_buf = boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::allocate(
              (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *const)pos,
              new_cap);
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert_new_allocation<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>(
    pos,
    new_buf,
    new_cap,
    raw_pos,
    (const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type)insert_range_proxy.v_,
    *(boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *)(v6 + 64));
  v11 = pos;
  if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v21 = v11->m_holder.m_start + n_pos;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_holder.m_start = v21;
  if ( v22 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::iterator)this;
};

// Line 2752: range 000000000BF9E6CC-000000000BF9EA69
boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::iterator __fastcall boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert_no_capacity<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const this,
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *pos,
        const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type n,
        const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> insert_range_proxy,
        __int64 a5)
{
  char v5; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r12
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v9; // rsi
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v10; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v11; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type n_pos; // [rsp+40h] [rbp-130h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *raw_pos; // [rsp+48h] [rbp-128h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type new_cap; // [rsp+50h] [rbp-120h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *new_buf; // [rsp+58h] [rbp-118h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v21; // [rsp+68h] [rbp-108h]
  char v22[144]; // [rsp+E0h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 4 flag 64 8 23 insert_range_proxy:2753";
  *(_QWORD *)(v6 + 16) = boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert_no_capacity<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -202116352;
  *(_QWORD *)(v6 + 64) = a5;
  if ( *(_BYTE *)((n >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = *(boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > **)n;
  v10 = pos;
  if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  n_pos = 0xAAAAAAAAAAAAAAABLL * (((char *)v9 - (char *)v10->m_holder.m_start) >> 3);
  raw_pos = *(boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > **)n;
  new_cap = boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,unsigned long,boost::move_detail::integral_constant<unsigned int,1u>>::next_capacity<boost::container::growth_factor_60>(
              &pos->m_holder,
              (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::size_type)insert_range_proxy.v_);
  *(_BYTE *)(v6 + 48) = v5;
  if ( new_cap > boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::max_size((const boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *const)pos) )
  {
    __asan_handle_no_return(pos);
    boost::container::throw_length_error("get_next_capacity, allocator's max size reached");
  }
  new_buf = boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::allocate(
              (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *const)pos,
              new_cap);
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert_new_allocation<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>(
    pos,
    new_buf,
    new_cap,
    raw_pos,
    (const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type)insert_range_proxy.v_,
    *(boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *)(v6 + 64));
  v11 = pos;
  if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v21 = v11->m_holder.m_start + n_pos;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_holder.m_start = v21;
  if ( v22 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::iterator)this;
};

// Line 2818: range 000000000BF96F5C-000000000BF9733D
boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::iterator __fastcall boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const this,
        unsigned __int64 pos,
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type n,
        const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> insert_range_proxy,
        __int64 a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v18; // [rsp+28h] [rbp-D8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *raw_pos; // [rsp+48h] [rbp-B8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type n_pos; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+70h] [rbp-90h]
  char v22[96]; // [rsp+A0h] [rbp-60h] BYREF

  v18 = this;
  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)64;
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = v5 + 64;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 23 insert_range_proxy:2819";
  *(_QWORD *)(v5 + 16) = boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>;
  v8 = v5 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = a5;
  if ( *(_BYTE *)(((pos + 16) >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)(pos + 16);
    __asan_report_load8();
  }
  v9 = *(_QWORD *)(pos + 16);
  if ( *(_BYTE *)(((pos + 8) >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)(pos + 8);
    __asan_report_load8();
  }
  if ( v9 < *(_QWORD *)(pos + 8) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->m_holder.capacity() >= this->m_holder.m_size",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
      0xB05u,
      "boost::container::vector<T, Allocator, Options>::iterator boost::container::vector<T, Allocator, Options>::priv_fo"
      "rward_range_insert(const pointer&, boost::container::vector<T, Allocator, Options>::size_type, InsertionProxy) [wi"
      "th InsertionProxy = boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl"
      "::pair<unsigned int, std::shared_ptr<GateserverSession> > >, boost::container::dtl::pair<unsigned int, std::shared"
      "_ptr<GateserverSession> >*>; T = boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> >; A"
      " = boost::container::new_allocator<boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> > "
      ">; Options = void; boost::container::vector<T, Allocator, Options>::iterator = boost::container::vec_iterator<boos"
      "t::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> >*, false>; typename boost::container::al"
      "locator_traits<typename boost::container::real_allocator<T, A>::type>::pointer = boost::container::dtl::pair<unsig"
      "ned int, std::shared_ptr<GateserverSession> >*; boost::container::vector<T, Allocator, Options>::pointer = boost::"
      "container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> >*; boost::container::vector<T, Allocator, O"
      "ptions>::size_type = long unsigned int]");
  }
  if ( *(_BYTE *)(((pos + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = *(_QWORD *)(pos + 16);
  if ( *(_BYTE *)(((pos + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (unsigned __int64)insert_range_proxy.v_ <= v10 - *(_QWORD *)(pos + 8) )
  {
    if ( *(_BYTE *)((n >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    raw_pos = *(boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > **)n;
    v11 = (_QWORD *)pos;
    if ( *(_BYTE *)((pos >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    n_pos = 0xAAAAAAAAAAAAAAABLL * (((__int64)raw_pos - *v11) >> 3);
    boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert_expand_forward<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>(
      (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const)pos,
      raw_pos,
      (const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type)insert_range_proxy.v_,
      *(boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *)(v7 - 32));
    v12 = (_QWORD *)pos;
    if ( *(_BYTE *)((pos >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = *v12 + 24 * n_pos;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    v18->m_holder.m_start = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer)v21;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8();
    boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert_no_capacity<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>(
      v18,
      (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *)pos,
      n,
      insert_range_proxy,
      *(_QWORD *)(v7 - 32));
  }
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::iterator)v18;
};

// Line 2818: range 000000000BF99A9C-000000000BF99E7D
boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::iterator __fastcall boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const this,
        unsigned __int64 pos,
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type n,
        const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> insert_range_proxy,
        __int64 a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v18; // [rsp+28h] [rbp-D8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *raw_pos; // [rsp+48h] [rbp-B8h]
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type n_pos; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+70h] [rbp-90h]
  char v22[96]; // [rsp+A0h] [rbp-60h] BYREF

  v18 = this;
  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)64;
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = v5 + 64;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 23 insert_range_proxy:2819";
  *(_QWORD *)(v5 + 16) = boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>;
  v8 = v5 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = a5;
  if ( *(_BYTE *)(((pos + 16) >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)(pos + 16);
    __asan_report_load8();
  }
  v9 = *(_QWORD *)(pos + 16);
  if ( *(_BYTE *)(((pos + 8) >> 3) + 0x7FFF8000) )
  {
    this = (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)(pos + 8);
    __asan_report_load8();
  }
  if ( v9 < *(_QWORD *)(pos + 8) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "this->m_holder.capacity() >= this->m_holder.m_size",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/vector.hpp",
      0xB05u,
      "boost::container::vector<T, Allocator, Options>::iterator boost::container::vector<T, Allocator, Options>::priv_fo"
      "rward_range_insert(const pointer&, boost::container::vector<T, Allocator, Options>::size_type, InsertionProxy) [wi"
      "th InsertionProxy = boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl"
      "::pair<unsigned int, std::shared_ptr<HttpSession> > >, boost::container::dtl::pair<unsigned int, std::shared_ptr<H"
      "ttpSession> >*>; T = boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> >; A = boost::containe"
      "r::new_allocator<boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> > >; Options = void; boost"
      "::container::vector<T, Allocator, Options>::iterator = boost::container::vec_iterator<boost::container::dtl::pair<"
      "unsigned int, std::shared_ptr<HttpSession> >*, false>; typename boost::container::allocator_traits<typename boost:"
      ":container::real_allocator<T, A>::type>::pointer = boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpS"
      "ession> >*; boost::container::vector<T, Allocator, Options>::pointer = boost::container::dtl::pair<unsigned int, s"
      "td::shared_ptr<HttpSession> >*; boost::container::vector<T, Allocator, Options>::size_type = long unsigned int]");
  }
  if ( *(_BYTE *)(((pos + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = *(_QWORD *)(pos + 16);
  if ( *(_BYTE *)(((pos + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (unsigned __int64)insert_range_proxy.v_ <= v10 - *(_QWORD *)(pos + 8) )
  {
    if ( *(_BYTE *)((n >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    raw_pos = *(boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > **)n;
    v11 = (_QWORD *)pos;
    if ( *(_BYTE *)((pos >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    n_pos = 0xAAAAAAAAAAAAAAABLL * (((__int64)raw_pos - *v11) >> 3);
    boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert_expand_forward<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>(
      (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const)pos,
      raw_pos,
      (const boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type)insert_range_proxy.v_,
      *(boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *)(v7 - 32));
    v12 = (_QWORD *)pos;
    if ( *(_BYTE *)((pos >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = *v12 + 24 * n_pos;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    v18->m_holder.m_start = (boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer)v21;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8();
    boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert_no_capacity<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>(
      v18,
      (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *)pos,
      n,
      insert_range_proxy,
      *(_QWORD *)(v7 - 32));
  }
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::iterator)v18;
};

// Line 2962: range 000000000BF9C104-000000000BF9C5D8
void __fastcall boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert_expand_forward<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const this,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *const pos,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::size_type n,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> insert_range_proxy)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v7; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rcx
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *old_finish; // [rsp+20h] [rbp-D0h]
  boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::size_type elems_after; // [rsp+28h] [rbp-C8h]
  char v13[96]; // [rsp+90h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 23 insert_range_proxy:2962";
  *(_QWORD *)(v4 + 16) = boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert_expand_forward<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *)(v4 + 32) = insert_range_proxy;
  if ( n )
  {
    v7 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    m_start = v7->m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    old_finish = &m_start[this->m_holder.m_size];
    elems_after = 0xAAAAAAAAAAAAAAABLL * (((char *)old_finish - (char *)pos) >> 3);
    if ( elems_after )
    {
      if ( elems_after < n )
      {
        boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>(
          (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
          pos,
          old_finish,
          &pos[n]);
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>::copy_n_and_update(
          (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *const)(v4 + 32),
          (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
          pos,
          elems_after);
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>::uninitialized_copy_n_and_update(
          (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *const)(v4 + 32),
          (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
          old_finish,
          n - elems_after);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        this->m_holder.m_size += n;
      }
      else
      {
        boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>(
          (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
          &old_finish[-n],
          old_finish,
          old_finish);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        this->m_holder.m_size += n;
        boost::container::move_backward<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *>(
          pos,
          &old_finish[-n],
          old_finish);
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>::copy_n_and_update(
          (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *const)(v4 + 32),
          (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
          pos,
          n);
      }
    }
    else
    {
      boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>::uninitialized_copy_n_and_update(
        (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *const)(v4 + 32),
        (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
        old_finish,
        n);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      this->m_holder.m_size += n;
    }
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2962: range 000000000BF9EA6A-000000000BF9EF3E
void __fastcall boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert_expand_forward<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const this,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *const pos,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::size_type n,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> insert_range_proxy)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v7; // rax
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::pointer m_start; // rcx
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *old_finish; // [rsp+20h] [rbp-D0h]
  boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::size_type elems_after; // [rsp+28h] [rbp-C8h]
  char v13[96]; // [rsp+90h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 23 insert_range_proxy:2962";
  *(_QWORD *)(v4 + 16) = boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert_expand_forward<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *)(v4 + 32) = insert_range_proxy;
  if ( n )
  {
    v7 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    m_start = v7->m_holder.m_start;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    old_finish = &m_start[this->m_holder.m_size];
    elems_after = 0xAAAAAAAAAAAAAAABLL * (((char *)old_finish - (char *)pos) >> 3);
    if ( elems_after )
    {
      if ( elems_after < n )
      {
        boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>(
          (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
          pos,
          old_finish,
          &pos[n]);
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>::copy_n_and_update(
          (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *const)(v4 + 32),
          (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
          pos,
          elems_after);
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>::uninitialized_copy_n_and_update(
          (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *const)(v4 + 32),
          (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
          old_finish,
          n - elems_after);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        this->m_holder.m_size += n;
      }
      else
      {
        boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>(
          (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
          &old_finish[-n],
          old_finish,
          old_finish);
        if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        this->m_holder.m_size += n;
        boost::container::move_backward<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *>(
          pos,
          &old_finish[-n],
          old_finish);
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>::copy_n_and_update(
          (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *const)(v4 + 32),
          (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
          pos,
          n);
      }
    }
    else
    {
      boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>::uninitialized_copy_n_and_update(
        (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *const)(v4 + 32),
        (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
        old_finish,
        n);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      this->m_holder.m_size += n;
    }
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3006: range 000000000BFA0F8A-000000000BFA168E
void __fastcall boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert_new_allocation<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *const this,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *const new_start,
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void>::size_type new_cap,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *const pos,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::size_type n,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> insert_range_proxy)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v9; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v10; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,void> *v11; // rcx
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v12; // rdx
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v13; // rcx
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v14; // rdx
  boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::type new_finish; // [rsp+38h] [rbp-1F8h]
  boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::type new_finisha; // [rsp+38h] [rbp-1F8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *old_buffer; // [rsp+40h] [rbp-1F0h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *old_finish; // [rsp+48h] [rbp-1E8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *old_finisha; // [rsp+48h] [rbp-1E8h]
  boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *v24; // [rsp+B8h] [rbp-178h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_capacity; // [rsp+C8h] [rbp-168h]
  char v26[288]; // [rsp+110h] [rbp-120h] BYREF

  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 8 14 new_start:3007 64 8 12 new_cap:3007 96 8 23 insert_range_proxy:3007 128 24 27 new_buff"
                        "er_deallocator:3013 192 24 25 new_values_destroyer:3014";
  *(_QWORD *)(v6 + 16) = boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,void>::priv_forward_range_insert_new_allocation<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -234881024;
  v8[536862725] = -218959118;
  v8[536862726] = -218103808;
  v8[536862727] = -202116109;
  *(_QWORD *)(v6 + 32) = new_start;
  *(_QWORD *)(v6 + 64) = new_cap;
  *(boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *)(v6 + 96) = insert_range_proxy;
  new_finish = *(boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::type *)(v6 + 32);
  boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::scoped_array_deallocator(
    (boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const)(v6 + 128),
    new_finish,
    (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
    *(_QWORD *)(v6 + 64));
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::scoped_destructor_n(
    (boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const)(v6 + 192),
    *(boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > >::pointer *)(v6 + 32),
    (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
    0LL);
  v9 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  old_buffer = v9->m_holder.m_start;
  if ( v9->m_holder.m_start )
  {
    old_finish = new_finish;
    v10 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    new_finish = boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>(
                   (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
                   v10->m_holder.m_start,
                   pos,
                   new_finish);
    boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::increment_size(
      (boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const)(v6 + 192),
      0xAAAAAAAAAAAAAAABLL * (((char *)new_finish - (char *)old_finish) >> 3));
  }
  old_finisha = new_finish;
  boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>::uninitialized_copy_n_and_update(
    (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *const)(v6 + 96),
    (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
    new_finish,
    n);
  new_finisha = &new_finish[n];
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::increment_size(
    (boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const)(v6 + 192),
    0xAAAAAAAAAAAAAAABLL * (((char *)new_finisha - (char *)old_finisha) >> 3));
  if ( old_buffer )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    new_finisha = boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>(
                    (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
                    pos,
                    &old_buffer[this->m_holder.m_size],
                    new_finisha);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    boost::container::destroy_alloc_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*,unsigned long>(
      (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)this,
      old_buffer,
      this->m_holder.m_size);
    v11 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_capacity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v24 = (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *)v11;
    m_capacity = this->m_holder.m_capacity;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::deallocate(
      v24,
      this->m_holder.m_start,
      m_capacity);
  }
  v12 = *(boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > **)(v6 + 32);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_holder.m_start = v12;
  v13 = 0xAAAAAAAAAAAAAAABLL * (((__int64)new_finisha - *(_QWORD *)(v6 + 32)) >> 3);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_holder.m_size = v13;
  v14 = *(_QWORD *)(v6 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_capacity >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_holder.m_capacity = v14;
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::release((boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const)(v6 + 192));
  boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::release((boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const)(v6 + 128));
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::~scoped_destructor_n((boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const)(v6 + 192));
  boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>::~scoped_array_deallocator((boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > > *const)(v6 + 128));
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3006: range 000000000BFA4AC4-000000000BFA51C8
void __fastcall boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert_new_allocation<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>(
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *const this,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *const new_start,
        boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void>::size_type new_cap,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *const pos,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::size_type n,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> insert_range_proxy)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v9; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v10; // rax
  boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,void> *v11; // rcx
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v12; // rdx
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v13; // rcx
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type v14; // rdx
  boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::type new_finish; // [rsp+38h] [rbp-1F8h]
  boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::type new_finisha; // [rsp+38h] [rbp-1F8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *old_buffer; // [rsp+40h] [rbp-1F0h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *old_finish; // [rsp+48h] [rbp-1E8h]
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *old_finisha; // [rsp+48h] [rbp-1E8h]
  boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *v24; // [rsp+B8h] [rbp-178h]
  boost::container::vector_alloc_holder<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,long unsigned int,boost::move_detail::integral_constant<unsigned int,1> >::stored_size_type m_capacity; // [rsp+C8h] [rbp-168h]
  char v26[288]; // [rsp+110h] [rbp-120h] BYREF

  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 8 14 new_start:3007 64 8 12 new_cap:3007 96 8 23 insert_range_proxy:3007 128 24 27 new_buff"
                        "er_deallocator:3013 192 24 25 new_values_destroyer:3014";
  *(_QWORD *)(v6 + 16) = boost::container::vector<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,void>::priv_forward_range_insert_new_allocation<boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -234881024;
  v8[536862725] = -218959118;
  v8[536862726] = -218103808;
  v8[536862727] = -202116109;
  *(_QWORD *)(v6 + 32) = new_start;
  *(_QWORD *)(v6 + 64) = new_cap;
  *(boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *)(v6 + 96) = insert_range_proxy;
  new_finish = *(boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::type *)(v6 + 32);
  boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::scoped_array_deallocator(
    (boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const)(v6 + 128),
    new_finish,
    (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
    *(_QWORD *)(v6 + 64));
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::scoped_destructor_n(
    (boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const)(v6 + 192),
    *(boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > >::pointer *)(v6 + 32),
    (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
    0LL);
  v9 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  old_buffer = v9->m_holder.m_start;
  if ( v9->m_holder.m_start )
  {
    old_finish = new_finish;
    v10 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    new_finish = boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>(
                   (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
                   v10->m_holder.m_start,
                   pos,
                   new_finish);
    boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::increment_size(
      (boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const)(v6 + 192),
      0xAAAAAAAAAAAAAAABLL * (((char *)new_finish - (char *)old_finish) >> 3));
  }
  old_finisha = new_finish;
  boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>::uninitialized_copy_n_and_update(
    (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *const)(v6 + 96),
    (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
    new_finish,
    n);
  new_finisha = &new_finish[n];
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::increment_size(
    (boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const)(v6 + 192),
    0xAAAAAAAAAAAAAAABLL * (((char *)new_finisha - (char *)old_finisha) >> 3));
  if ( old_buffer )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    new_finisha = boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>(
                    (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
                    pos,
                    &old_buffer[this->m_holder.m_size],
                    new_finisha);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    boost::container::destroy_alloc_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*,unsigned long>(
      (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)this,
      old_buffer,
      this->m_holder.m_size);
    v11 = this;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_capacity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v24 = (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *)v11;
    m_capacity = this->m_holder.m_capacity;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::deallocate(
      v24,
      this->m_holder.m_start,
      m_capacity);
  }
  v12 = *(boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > **)(v6 + 32);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_holder.m_start = v12;
  v13 = 0xAAAAAAAAAAAAAAABLL * (((__int64)new_finisha - *(_QWORD *)(v6 + 32)) >> 3);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_size >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_holder.m_size = v13;
  v14 = *(_QWORD *)(v6 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_holder.m_capacity >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_holder.m_capacity = v14;
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::release((boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const)(v6 + 192));
  boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::release((boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const)(v6 + 128));
  boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::~scoped_destructor_n((boost::container::dtl::scoped_destructor_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const)(v6 + 192));
  boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>::~scoped_array_deallocator((boost::container::dtl::scoped_array_deallocator<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > > *const)(v6 + 128));
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
