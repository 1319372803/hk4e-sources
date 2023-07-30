// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/list.tcc

// Line 66: range 000000000CDCB21C-000000000CDCB2DA
void __cdecl std::_List_base<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::_M_clear(
        std::_List_base<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const this)
{
  std::_List_base<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::_Node_alloc_type *Node_allocator; // rdx
  std::_List_node<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *__cur; // [rsp+18h] [rbp-18h]
  std::_List_node<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *__tmp; // [rsp+20h] [rbp-10h]
  InteriorCheckablePolygon::initByPointVec::SpanningEdge *__val; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  __cur = (std::_List_node<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *)this->_M_impl._M_node._M_next;
  while ( __cur != (std::_List_node<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *)this )
  {
    __tmp = __cur;
    if ( *(_BYTE *)(((unsigned __int64)__cur >> 3) + 0x7FFF8000) )
      __asan_report_load8(__cur);
    __cur = (std::_List_node<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *)__cur->_M_next;
    __val = std::_List_node<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::_M_valptr(__tmp);
    Node_allocator = std::_List_base<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::_M_get_Node_allocator(this);
    std::allocator_traits<std::allocator<std::_List_node<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>>::destroy<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>(
      Node_allocator,
      __val);
    std::_List_base<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::_M_put_node(
      this,
      __tmp);
  }
};

// Line 66: range 000000000C6F0D26-000000000C6F0DE4
void __cdecl std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_M_clear(
        std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >> *const this)
{
  std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::_Node_alloc_type *Node_allocator; // rdx
  std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *__cur; // [rsp+18h] [rbp-18h]
  std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *__tmp; // [rsp+20h] [rbp-10h]
  boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *__val; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  __cur = (std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)this->_M_impl._M_node._M_next;
  while ( __cur != (std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)this )
  {
    __tmp = __cur;
    if ( *(_BYTE *)(((unsigned __int64)__cur >> 3) + 0x7FFF8000) )
      __asan_report_load8(__cur);
    __cur = (std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)__cur->_M_next;
    __val = std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_M_valptr(__tmp);
    Node_allocator = std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_M_get_Node_allocator(this);
    std::allocator_traits<std::allocator<std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>::destroy<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>(
      Node_allocator,
      __val);
    std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_M_put_node(
      this,
      __tmp);
  }
};

// Line 66: range 000000000C6F2DEC-000000000C6F2EAA
void __cdecl std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_M_clear(
        std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >> *const this)
{
  std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::_Node_alloc_type *Node_allocator; // rdx
  std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *__cur; // [rsp+18h] [rbp-18h]
  std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *__tmp; // [rsp+20h] [rbp-10h]
  boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *__val; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  __cur = (std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)this->_M_impl._M_node._M_next;
  while ( __cur != (std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)this )
  {
    __tmp = __cur;
    if ( *(_BYTE *)(((unsigned __int64)__cur >> 3) + 0x7FFF8000) )
      __asan_report_load8(__cur);
    __cur = (std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)__cur->_M_next;
    __val = std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_M_valptr(__tmp);
    Node_allocator = std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_M_get_Node_allocator(this);
    std::allocator_traits<std::allocator<std::_List_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>::destroy<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>(
      Node_allocator,
      __val);
    std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_M_put_node(
      this,
      __tmp);
  }
};

// Line 66: range 000000000C66EE52-000000000C66EF10
void __cdecl std::_List_base<boost::thread *>::_M_clear(std::_List_base<boost::thread*> *const this)
{
  std::_List_base<boost::thread*>::_Node_alloc_type *Node_allocator; // rdx
  std::_List_node<boost::thread*> *__cur; // [rsp+18h] [rbp-18h]
  std::_List_node<boost::thread*> *__tmp; // [rsp+20h] [rbp-10h]
  boost::thread **__val; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  __cur = (std::_List_node<boost::thread*> *)this->_M_impl._M_node._M_next;
  while ( __cur != (std::_List_node<boost::thread*> *)this )
  {
    __tmp = __cur;
    if ( *(_BYTE *)(((unsigned __int64)__cur >> 3) + 0x7FFF8000) )
      __asan_report_load8(__cur);
    __cur = (std::_List_node<boost::thread*> *)__cur->_M_next;
    __val = std::_List_node<boost::thread *>::_M_valptr(__tmp);
    Node_allocator = std::_List_base<boost::thread *>::_M_get_Node_allocator(this);
    std::allocator_traits<std::allocator<std::_List_node<boost::thread *>>>::destroy<boost::thread *>(
      Node_allocator,
      __val);
    std::_List_base<boost::thread *>::_M_put_node(this, __tmp);
  }
};

// Line 66: range 000000000CA29914-000000000CA29962
void __fastcall std::_List_base<mysqlpp::ConnectionPool::ConnectionInfo>::_M_clear(
        std::_List_base<mysqlpp::ConnectionPool::ConnectionInfo> *const this)
{
  std::_List_base<mysqlpp::ConnectionPool::ConnectionInfo> *v1; // rbp
  std::_List_base<mysqlpp::ConnectionPool::ConnectionInfo> *M_next; // rbx

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_4;
  }
  for ( this = (std::_List_base<mysqlpp::ConnectionPool::ConnectionInfo> *const)this->_M_impl._M_node._M_next;
        v1 != this;
        this = M_next )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(this);
      return;
    }
LABEL_4:
    M_next = (std::_List_base<mysqlpp::ConnectionPool::ConnectionInfo> *)this->_M_impl._M_node._M_next;
    operator delete(this);
  }
};

// Line 66: range 000000000C99640E-000000000C9964A3
void __fastcall std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(
        std::_List_base<std::pair<std::string,common::tools::PTree>> *const this)
{
  std::_List_base<std::pair<std::string,common::tools::PTree>> *i; // rbx
  std::__detail::_List_node_base *M_next; // r12
  std::_List_base<std::pair<std::string,common::tools::PTree>> *v3; // r13

  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_4;
  }
  for ( i = (std::_List_base<std::pair<std::string,common::tools::PTree>> *)this->_M_impl._M_node._M_next;
        v3 != i;
        i = (std::_List_base<std::pair<std::string,common::tools::PTree>> *)M_next )
  {
    this = i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    {
LABEL_4:
      __asan_report_load8(this);
LABEL_5:
      __asan_report_load8(this);
LABEL_6:
      operator delete(this);
      goto LABEL_7;
    }
    M_next = i->_M_impl._M_node._M_next;
    common::tools::PTree::~PTree((common::tools::PTree *const)&i[2]);
    this = (std::_List_base<std::pair<std::string,common::tools::PTree>> *const)&i->_M_impl._M_node._M_size;
    if ( *(_BYTE *)(((unsigned __int64)&i->_M_impl._M_node._M_size >> 3) + 0x7FFF8000) )
      goto LABEL_5;
    this = (std::_List_base<std::pair<std::string,common::tools::PTree>> *const)i->_M_impl._M_node._M_size;
    if ( this != (std::_List_base<std::pair<std::string,common::tools::PTree>> *const)&i[1]._M_impl._M_node._M_prev )
      goto LABEL_6;
LABEL_7:
    operator delete(i);
  }
};

// Line 101: range 000000000C6E015C-000000000C6E0292
std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::iterator __fastcall std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::insert(
        std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >> *const this,
        std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::const_iterator __position,
        const std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::value_type *__x)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator v6; // rax
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::iterator result; // rax
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > v9; // [rsp+20h] [rbp-80h] BYREF
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::_Node *__tmp; // [rsp+28h] [rbp-78h]
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 14 __position:103";
  *(_QWORD *)(v3 + 16) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::insert;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::const_iterator *)(v3 + 32) = __position;
  __tmp = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_M_create_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>> const&>(
            this,
            __x,
            __x);
  v6._M_node = std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_M_const_cast((const std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)(v3 + 32))._M_node;
  std::__detail::_List_node_base::_M_hook(__tmp, v6._M_node);
  std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_M_inc_size(
    this,
    1uLL);
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_List_iterator(
    &v9,
    __tmp);
  result._M_node = v9._M_node;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 101: range 000000000C6E166A-000000000C6E17A0
std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::iterator __fastcall std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::insert(
        std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >> *const this,
        std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::const_iterator __position,
        const std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::value_type *__x)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator v6; // rax
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::iterator result; // rax
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > v9; // [rsp+20h] [rbp-80h] BYREF
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::_Node *__tmp; // [rsp+28h] [rbp-78h]
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 14 __position:103";
  *(_QWORD *)(v3 + 16) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::insert;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::const_iterator *)(v3 + 32) = __position;
  __tmp = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_M_create_node<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>> const&>(
            this,
            __x,
            __x);
  v6._M_node = std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_M_const_cast((const std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)(v3 + 32))._M_node;
  std::__detail::_List_node_base::_M_hook(__tmp, v6._M_node);
  std::_List_base<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_M_inc_size(
    this,
    1uLL);
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_List_iterator(
    &v9,
    __tmp);
  result._M_node = v9._M_node;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 133: range 000000000CDC7490-000000000CDC7789
std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator __fastcall std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::insert<__gnu_cxx::__normal_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge const*,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>>,void>(
        std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const this,
        std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::const_iterator __position,
        __gnu_cxx::__normal_iterator<const InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge*,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > __first,
        __gnu_cxx::__normal_iterator<const InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge*,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > __last)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__detail::_List_node_base *M_node; // r14
  std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator result; // rax
  char v11[304]; // [rsp+20h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 1 9 <unknown> 64 8 8 __it:140 96 8 14 __position:134 128 8 11 __first:134 160 8 10 __last:1"
                        "35 192 24 9 __tmp:137";
  *(_QWORD *)(v4 + 16) = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::insert<__gnu_cxx::__normal_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge const*,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>>,void>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::const_iterator *)(v4 + 96) = __position;
  *(__gnu_cxx::__normal_iterator<const InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge*,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > *)(v4 + 128) = __first;
  *(__gnu_cxx::__normal_iterator<const InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge*,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > *)(v4 + 160) = __last;
  if ( *(char *)(((v4 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v4 + 48);
  std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::get_allocator((const std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v4 + 48));
  std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::list<__gnu_cxx::__normal_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge const*,std::vector<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>>,void>(
    (std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v4 + 192),
    *(__gnu_cxx::__normal_iterator<const InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge*,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > *)(v4 + 128),
    *(__gnu_cxx::__normal_iterator<const InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge*,std::vector<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > > *)(v4 + 160),
    (const std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::allocator_type *)(v4 + 48));
  std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::~allocator((std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *const)(v4 + 48));
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::empty((const std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v4 + 192)) )
  {
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator *)(v4 + 64) = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::begin((std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v4 + 192));
    std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::splice(
      this,
      *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::const_iterator *)(v4 + 96),
      (std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *)(v4 + 192));
    M_node = *(std::__detail::_List_node_base **)(v4 + 64);
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  }
  else
  {
    M_node = std::_List_const_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::_M_const_cast((const std::_List_const_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *const)(v4 + 96))._M_node;
  }
  std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::~list((std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const)(v4 + 192));
  result._M_node = M_node;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 150: range 000000000CDC6F5C-000000000CDC70E5
std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator __fastcall std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::erase(
        std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> > *const this,
        std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::const_iterator __position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  std::_List_const_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge>::iterator v6; // rax
  std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::iterator result; // rax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 __ret:157 64 8 14 __position:152";
  *(_QWORD *)(v2 + 16) = std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::erase;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  *(std::list<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> >::const_iterator *)(v2 + 64) = __position;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 64);
  v5 = *(_QWORD *)(v2 + 64);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)(v2 + 64));
  std::_List_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::_List_iterator(
    (std::_List_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *const)(v2 + 32),
    *(std::__detail::_List_node_base **)v5);
  v6._M_node = std::_List_const_iterator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>::_M_const_cast((const std::_List_const_iterator<InteriorCheckablePolygon::initByPointVec(const Point2DList&)::SpanningEdge> *const)(v2 + 64))._M_node;
  std::list<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge,std::allocator<InteriorCheckablePolygon::initByPointVec(std::vector<data::Point2D> const&)::SpanningEdge>>::_M_erase(
    this,
    v6);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 32);
  result._M_node = *(std::__detail::_List_node_base **)(v2 + 32);
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

// Line 150: range 000000000C6EC110-000000000C6EC278
std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::iterator __fastcall std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::erase(
        std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >> *const this,
        std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::const_iterator __position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator v6; // rax
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::iterator result; // rax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 __ret:157 64 8 14 __position:152";
  *(_QWORD *)(v2 + 16) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::erase;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::const_iterator *)(v2 + 64) = __position;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 64);
  v5 = *(_QWORD *)(v2 + 64);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)(v2 + 64));
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_List_iterator(
    (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)(v2 + 32),
    *(std::__detail::_List_node_base **)v5);
  v6._M_node = std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_M_const_cast((const std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)(v2 + 64))._M_node;
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_M_erase(
    this,
    v6);
  result._M_node = *(std::__detail::_List_node_base **)(v2 + 32);
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

// Line 150: range 000000000C6EE31A-000000000C6EE482
std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::iterator __fastcall std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::erase(
        std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >> *const this,
        std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::const_iterator __position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator v6; // rax
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::iterator result; // rax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 __ret:157 64 8 14 __position:152";
  *(_QWORD *)(v2 + 16) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::erase;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::const_iterator *)(v2 + 64) = __position;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 64);
  v5 = *(_QWORD *)(v2 + 64);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)(v2 + 64));
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_List_iterator(
    (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)(v2 + 32),
    *(std::__detail::_List_node_base **)v5);
  v6._M_node = std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_M_const_cast((const std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)(v2 + 64))._M_node;
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_M_erase(
    this,
    v6);
  result._M_node = *(std::__detail::_List_node_base **)(v2 + 32);
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
