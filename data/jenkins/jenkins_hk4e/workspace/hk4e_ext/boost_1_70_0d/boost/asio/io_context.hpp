// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/io_context.hpp

// Line 709: range 000000000BEF4494-000000000BEF44FB
bool __cdecl boost::asio::operator==(
        const boost::asio::io_context::executor_type *a,
        const boost::asio::io_context::executor_type *b)
{
  boost::asio::io_context *io_context; // rcx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
    __asan_report_load8(a);
  io_context = a->io_context_;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_load8(b);
  return io_context == b->io_context_;
};

// Line 729: range 000000000BEF44FC-000000000BEF453A
void __cdecl boost::asio::io_context::executor_type::executor_type(
        boost::asio::io_context::executor_type *const this,
        boost::asio::io_context *i)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->io_context_ = i;
};

// Line 839: range 000000000BEF86F4-000000000BEF8741
void __cdecl boost::asio::detail::service_base<boost::asio::detail::strand_service>::~service_base(
        boost::asio::detail::service_base<boost::asio::detail::strand_service> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::service_base<boost::asio::detail::strand_service> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  boost::asio::io_context::service::~service(this);
};

// Line 839: range 000000000BEF8742-000000000BEF876C
void __cdecl boost::asio::detail::service_base<boost::asio::detail::strand_service>::~service_base(
        boost::asio::detail::service_base<boost::asio::detail::strand_service> *const this)
{
  boost::asio::detail::service_base<boost::asio::detail::strand_service>::~service_base(this);
  operator delete(this, 0x28uLL);
};

// Line 846: range 000000000BF09266-000000000BF092BE
void __cdecl boost::asio::detail::service_base<boost::asio::detail::strand_service>::service_base(
        boost::asio::detail::service_base<boost::asio::detail::strand_service> *const this,
        boost::asio::io_context *io_context)
{
  int (**v2)(...); // rdx

  boost::asio::io_context::service::service(this, io_context);
  v2 = (int (**)(...))(&`vtable for'boost::asio::detail::service_base<boost::asio::detail::strand_service> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v2;
};
