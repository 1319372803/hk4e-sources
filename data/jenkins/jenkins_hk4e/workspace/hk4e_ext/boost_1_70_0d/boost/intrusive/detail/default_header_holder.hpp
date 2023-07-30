// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/intrusive/detail/default_header_holder.hpp

// Line 41: range 000000000C75369E-000000000C753709
void __cdecl boost::intrusive::detail::default_header_holder<boost::intrusive::list_node_traits<void *>>::default_header_holder(
        boost::intrusive::detail::default_header_holder<boost::intrusive::list_node_traits<void*> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->next_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->prev_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->prev_ = 0LL;
};

// Line 41: range 000000000C78E566-000000000C78E640
void __cdecl boost::intrusive::detail::default_header_holder<boost::intrusive::rbtree_node_traits<void *,false>>::default_header_holder(
        boost::intrusive::detail::default_header_holder<boost::intrusive::rbtree_node_traits<void*,false> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->parent_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->left_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->right_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->right_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->color_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->color_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->color_);
  }
  this->color_ = red_t;
};
