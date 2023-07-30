// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/lockfree/detail/freelist.hpp

// Line 121: range 000000000C2711CC-000000000C271221
void __fastcall boost::lockfree::detail::freelist_stack<boost::lockfree::queue<unsigned long>::node,std::allocator<boost::lockfree::queue<unsigned long>::node>>::~freelist_stack(
        boost::lockfree::detail::freelist_stack<boost::lockfree::queue<long unsigned int>::node,std::allocator<boost::lockfree::queue<long unsigned int>::node> > *const this)
{
  boost::lockfree::detail::tagged_ptr<boost::lockfree::detail::freelist_stack<boost::lockfree::queue<long unsigned int>::node,std::allocator<boost::lockfree::queue<long unsigned int>::node> >::freelist_node>::compressed_ptr_t ptr; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_4;
  }
  ptr = this->pool_._M_i.ptr;
  while ( (ptr & 0xFFFFFFFFFFFFLL) != 0 )
  {
    this = (boost::lockfree::detail::freelist_stack<boost::lockfree::queue<long unsigned int>::node,std::allocator<boost::lockfree::queue<long unsigned int>::node> > *const)(ptr & 0xFFFFFFFFFFFFLL);
    if ( (ptr & 0xFFFFFFFFFFFFLL) != 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
        return;
      }
LABEL_4:
      ptr = this->pool_._M_i.ptr;
    }
    operator delete(this, (std::align_val_t)64LL);
  }
};
