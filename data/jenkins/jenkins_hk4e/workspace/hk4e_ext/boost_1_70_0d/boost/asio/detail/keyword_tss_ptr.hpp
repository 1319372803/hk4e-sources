// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/keyword_tss_ptr.hpp

// Line 36: range 000000000C66CCB4-000000000C66CCCE
void __cdecl boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::keyword_tss_ptr(
        boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl>::context> *const this)
{
  boost::asio::detail::noncopyable::noncopyable(this);
};

// Line 36: range 000000000C66CAAE-000000000C66CAC8
void __cdecl boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::keyword_tss_ptr(
        boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl>::context> *const this)
{
  boost::asio::detail::noncopyable::noncopyable(this);
};

// Line 36: range 000000000C6696DE-000000000C6696F8
void __cdecl boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::keyword_tss_ptr(
        boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *const this)
{
  boost::asio::detail::noncopyable::noncopyable(this);
};

// Line 41: range 000000000C66CCD0-000000000C66CCEA
void __cdecl boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~keyword_tss_ptr(
        boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl>::context> *const this)
{
  boost::asio::detail::noncopyable::~noncopyable(this);
};

// Line 41: range 000000000C66CACA-000000000C66CAE4
void __cdecl boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~keyword_tss_ptr(
        boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl>::context> *const this)
{
  boost::asio::detail::noncopyable::~noncopyable(this);
};

// Line 41: range 000000000C6696FA-000000000C669714
void __cdecl boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~keyword_tss_ptr(
        boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *const this)
{
  boost::asio::detail::noncopyable::~noncopyable(this);
};

// Line 46: range 000000000C66CAE6-000000000C66CB06
boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *__cdecl boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::operator boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context*(
        const boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl>::context> *const this)
{
  return *(boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context **)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::value_ + __readfsqword(0));
};

// Line 46: range 000000000C669716-000000000C669736
boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context *__cdecl boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::operator boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context*(
        const boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *const this)
{
  return *(boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context **)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_ + __readfsqword(0));
};

// Line 52: range 000000000C6794D4-000000000C6794FD
void __cdecl boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::operator=(
        boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl>::context> *const this,
        boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *value)
{
  *(boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context **)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::value_ + __readfsqword(0)) = value;
};

// Line 52: range 000000000C67702C-000000000C677055
void __cdecl boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::operator=(
        boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *const this,
        boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context *value)
{
  *(boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context **)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_ + __readfsqword(0)) = value;
};
