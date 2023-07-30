// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/container/new_allocator.hpp

// Line 125: range 000000000BF4D3B6-000000000BF4D3C0
void __cdecl boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::new_allocator(
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *const this)
{
  ;
};

// Line 125: range 000000000BF4D0A6-000000000BF4D0B0
void __cdecl boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::new_allocator(
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *const this)
{
  ;
};

// Line 141: range 000000000BFA9A4A-000000000BFA9A9E
boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >::pointer __cdecl boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::allocate(
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *const this,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >::size_type count)
{
  if ( count > boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::max_size(this) )
  {
    __asan_handle_no_return(this);
    boost::container::throw_bad_alloc();
  }
  return (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >::pointer)operator new(24 * count);
};

// Line 141: range 000000000BFAA902-000000000BFAA956
boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >::pointer __cdecl boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::allocate(
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *const this,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >::size_type count)
{
  if ( count > boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::max_size(this) )
  {
    __asan_handle_no_return(this);
    boost::container::throw_bad_alloc();
  }
  return (boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >::pointer)operator new(24 * count);
};

// Line 150: range 000000000BF4D3C2-000000000BF4D3E3
void __cdecl boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::deallocate(
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *const this,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >::pointer ptr,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >::size_type a3)
{
  operator delete(ptr);
};

// Line 150: range 000000000BF4D0B2-000000000BF4D0D3
void __cdecl boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::deallocate(
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *const this,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >::pointer ptr,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >::size_type a3)
{
  operator delete(ptr);
};

// Line 155: range 000000000BFA9954-000000000BFA9967
boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >::size_type __cdecl boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>::max_size(
        const boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *const this)
{
  return 0xAAAAAAAAAAAAAAALL;
};

// Line 155: range 000000000BFAA8EE-000000000BFAA901
boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >::size_type __cdecl boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>::max_size(
        const boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *const this)
{
  return 0xAAAAAAAAAAAAAAALL;
};
