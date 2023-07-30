// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/smart_ptr/weak_ptr.hpp

// Line 24: range 000000000BF0BC92-000000000BF0BCB0
void __cdecl boost::weak_ptr<boost::detail::thread_data_base>::~weak_ptr(
        boost::weak_ptr<boost::detail::thread_data_base> *const this)
{
  boost::detail::weak_count::~weak_count(&this->pn);
};

// Line 24: range 000000000BEFA9E8-000000000BEFAA06
void __cdecl boost::weak_ptr<boost::signals2::detail::connection_body_base>::~weak_ptr(
        boost::weak_ptr<boost::signals2::detail::connection_body_base> *const this)
{
  boost::detail::weak_count::~weak_count(&this->pn);
};

// Line 24: range 000000000BEFA7BC-000000000BEFA7DA
void __cdecl boost::weak_ptr<boost::signals2::detail::trackable_pointee>::~weak_ptr(
        boost::weak_ptr<boost::signals2::detail::trackable_pointee> *const this)
{
  boost::detail::weak_count::~weak_count(&this->pn);
};

// Line 24: range 000000000BEFA82C-000000000BEFA84A
void __cdecl boost::weak_ptr<void>::~weak_ptr(boost::weak_ptr<void> *const this)
{
  boost::detail::weak_count::~weak_count(&this->pn);
};

// Line 35: range 000000000BF0BC46-000000000BF0BC90
void __cdecl boost::weak_ptr<boost::detail::thread_data_base>::weak_ptr(
        boost::weak_ptr<boost::detail::thread_data_base> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px = 0LL;
  boost::detail::weak_count::weak_count(&this->pn);
};

// Line 35: range 000000000BF09C5A-000000000BF09CA4
void __cdecl boost::weak_ptr<void>::weak_ptr(boost::weak_ptr<void> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px = 0LL;
  boost::detail::weak_count::weak_count(&this->pn);
};

// Line 45: range 000000000BF09DFE-000000000BF09E7B
void __cdecl boost::weak_ptr<boost::signals2::detail::connection_body_base>::weak_ptr(
        boost::weak_ptr<boost::signals2::detail::connection_body_base> *const this,
        const boost::weak_ptr<boost::signals2::detail::connection_body_base> *r)
{
  boost::weak_ptr<boost::signals2::detail::connection_body_base>::element_type *px; // rdx

  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  px = r->px;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px = px;
  boost::detail::weak_count::weak_count(&this->pn, &r->pn);
};

// Line 45: range 000000000BF4CEFA-000000000BF4CF77
void __cdecl boost::weak_ptr<boost::signals2::detail::trackable_pointee>::weak_ptr(
        boost::weak_ptr<boost::signals2::detail::trackable_pointee> *const this,
        const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *r)
{
  boost::weak_ptr<boost::signals2::detail::trackable_pointee>::element_type *px; // rdx

  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  px = r->px;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px = px;
  boost::detail::weak_count::weak_count(&this->pn, &r->pn);
};

// Line 45: range 000000000BF4CF78-000000000BF4CFF5
void __cdecl boost::weak_ptr<void>::weak_ptr(boost::weak_ptr<void> *const this, const boost::weak_ptr<void> *r)
{
  boost::weak_ptr<void>::element_type *px; // rdx

  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  px = r->px;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px = px;
  boost::detail::weak_count::weak_count(&this->pn, &r->pn);
};

// Line 128: range 000000000BF7D936-000000000BF7D9B8
void __cdecl boost::weak_ptr<boost::signals2::detail::connection_body_base>::weak_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>(
        boost::weak_ptr<boost::signals2::detail::connection_body_base> *const this,
        const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *r,
        boost::detail::sp_enable_if_convertible_impl<true>::type a3)
{
  boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::element_type *px; // rdx

  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  px = r->px;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px = px;
  boost::detail::weak_count::weak_count(&this->pn, &r->pn);
  boost::detail::sp_assert_convertible<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>,boost::signals2::detail::connection_body_base>();
};

// Line 128: range 000000000BF7EAB0-000000000BF7EB32
void __cdecl boost::weak_ptr<boost::signals2::detail::connection_body_base>::weak_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>(
        boost::weak_ptr<boost::signals2::detail::connection_body_base> *const this,
        const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *r,
        boost::detail::sp_enable_if_convertible_impl<true>::type a3)
{
  boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::element_type *px; // rdx

  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  px = r->px;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px = px;
  boost::detail::weak_count::weak_count(&this->pn, &r->pn);
  boost::detail::sp_assert_convertible<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>,boost::signals2::detail::connection_body_base>();
};

// Line 165: range 000000000BF35EF8-000000000BF35F7D
boost::weak_ptr<boost::detail::thread_data_base> *__cdecl boost::weak_ptr<boost::detail::thread_data_base>::operator=<boost::detail::thread_data_base>(
        boost::weak_ptr<boost::detail::thread_data_base> *const this,
        const boost::shared_ptr<boost::detail::thread_data_base> *r)
{
  boost::shared_ptr<boost::detail::thread_data_base>::element_type *px; // rdx

  boost::detail::sp_assert_convertible<boost::detail::thread_data_base,boost::detail::thread_data_base>();
  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  px = r->px;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px = px;
  boost::detail::weak_count::operator=(&this->pn, &r->pn);
  return this;
};

// Line 177: range 000000000BF09CF6-000000000BF09D1E
boost::shared_ptr<void> __cdecl boost::weak_ptr<void>::lock(const boost::weak_ptr<void> *const this)
{
  const boost::weak_ptr<void> *v1; // rsi
  boost::shared_ptr<void> result; // rax

  boost::shared_ptr<void>::shared_ptr<void>((boost::shared_ptr<void> *const)this, v1, (boost::detail::sp_nothrow_tag)v1);
  result.px = (boost::shared_ptr<void>::element_type *)this;
  return result;
};

// Line 187: range 000000000BF35E76-000000000BF35E99
bool __cdecl boost::weak_ptr<boost::detail::thread_data_base>::expired(
        const boost::weak_ptr<boost::detail::thread_data_base> *const this)
{
  return boost::detail::weak_count::use_count(&this->pn) == 0;
};

// Line 187: range 000000000BF4881C-000000000BF4883F
bool __cdecl boost::weak_ptr<boost::signals2::detail::trackable_pointee>::expired(
        const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *const this)
{
  return boost::detail::weak_count::use_count(&this->pn) == 0;
};

// Line 187: range 000000000BF09DDA-000000000BF09DFD
bool __cdecl boost::weak_ptr<void>::expired(const boost::weak_ptr<void> *const this)
{
  return boost::detail::weak_count::use_count(&this->pn) == 0;
};
