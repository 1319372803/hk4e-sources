// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/smart_ptr/detail/shared_count.hpp

// Line 122: range 000000000BEF6FBE-000000000BEF6FF8
void __cdecl boost::detail::shared_count::shared_count(boost::detail::shared_count *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
};

// Line 136: range 000000000BF802EC-000000000BF803A8
void __cdecl boost::detail::shared_count::shared_count<boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>>>(
        boost::detail::shared_count *const this,
        boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > > *p)
{
  boost::detail::sp_counted_impl_p<boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > > > *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > > > *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>>>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 136: range 000000000BF8271A-000000000BF827D6
void __cdecl boost::detail::shared_count::shared_count<boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>>>(
        boost::detail::shared_count *const this,
        boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > > *p)
{
  boost::detail::sp_counted_impl_p<boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > > > *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > > > *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>>>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 136: range 000000000BF2EC94-000000000BF2ED50
void __cdecl boost::detail::shared_count::shared_count<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>>(
        boost::detail::shared_count *const this,
        boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *p)
{
  boost::detail::sp_counted_impl_p<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> > *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> > *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 136: range 000000000BF2EEB6-000000000BF2EF72
void __cdecl boost::detail::shared_count::shared_count<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>(
        boost::detail::shared_count *const this,
        boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *p)
{
  boost::detail::sp_counted_impl_p<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> > *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> > *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 136: range 000000000BF8FEBE-000000000BF8FF7A
void __cdecl boost::detail::shared_count::shared_count<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>(
        boost::detail::shared_count *const this,
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *p)
{
  boost::detail::sp_counted_impl_p<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 136: range 000000000BF91F68-000000000BF92024
void __cdecl boost::detail::shared_count::shared_count<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>(
        boost::detail::shared_count *const this,
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *p)
{
  boost::detail::sp_counted_impl_p<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 136: range 000000000BF9AED8-000000000BF9AF94
void __cdecl boost::detail::shared_count::shared_count<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>(
        boost::detail::shared_count *const this,
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *p)
{
  boost::detail::sp_counted_impl_p<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 136: range 000000000BF9CF9E-000000000BF9D05A
void __cdecl boost::detail::shared_count::shared_count<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>(
        boost::detail::shared_count *const this,
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *p)
{
  boost::detail::sp_counted_impl_p<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 136: range 000000000BF9AF96-000000000BF9B052
void __cdecl boost::detail::shared_count::shared_count<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>(
        boost::detail::shared_count *const this,
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *p)
{
  boost::detail::sp_counted_impl_p<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state> *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state> *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 136: range 000000000BF9D05C-000000000BF9D118
void __cdecl boost::detail::shared_count::shared_count<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>(
        boost::detail::shared_count *const this,
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *p)
{
  boost::detail::sp_counted_impl_p<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state> *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state> *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 136: range 000000000BF963C2-000000000BF9647E
void __cdecl boost::detail::shared_count::shared_count<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>(
        boost::detail::shared_count *const this,
        boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *p)
{
  boost::detail::sp_counted_impl_p<boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > > *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > > *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 136: range 000000000BF98388-000000000BF98444
void __cdecl boost::detail::shared_count::shared_count<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>(
        boost::detail::shared_count *const this,
        boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *p)
{
  boost::detail::sp_counted_impl_p<boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > > *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
  v2 = (boost::detail::sp_counted_impl_p<boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > > *)operator new(0x18uLL);
  boost::detail::sp_counted_impl_p<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>::sp_counted_impl_p(
    v2,
    p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = v2;
};

// Line 425: range 000000000BEF6FFA-000000000BEF7044
void __cdecl boost::detail::shared_count::~shared_count(boost::detail::shared_count *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->pi_ )
    boost::detail::sp_counted_base::release(this->pi_);
};

// Line 433: range 000000000BEF7046-000000000BEF70C3
void __cdecl boost::detail::shared_count::shared_count(
        boost::detail::shared_count *const this,
        const boost::detail::shared_count *r)
{
  boost::detail::sp_counted_base *pi; // rdx

  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  pi = r->pi_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = pi;
  if ( this->pi_ )
    boost::detail::sp_counted_base::add_ref_copy(this->pi_);
};

// Line 470: range 000000000BEF70C4-000000000BEF713C
void __cdecl boost::detail::shared_count::swap(boost::detail::shared_count *const this, boost::detail::shared_count *r)
{
  boost::detail::sp_counted_base *tmp; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  tmp = r->pi_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  r->pi_ = this->pi_;
  this->pi_ = tmp;
};

// Line 477: range 000000000BEF713E-000000000BEF718E
__int64 __cdecl boost::detail::shared_count::use_count(const boost::detail::shared_count *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->pi_ )
    return boost::detail::sp_counted_base::use_count(this->pi_);
  else
    return 0LL;
};

// Line 482: range 000000000BEF7190-000000000BEF71B0
bool __cdecl boost::detail::shared_count::unique(const boost::detail::shared_count *const this)
{
  return boost::detail::shared_count::use_count(this) == 1;
};

// Line 487: range 000000000BEF71B2-000000000BEF71ED
bool __cdecl boost::detail::shared_count::empty(const boost::detail::shared_count *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->pi_ == 0LL;
};

// Line 533: range 000000000BEF71EE-000000000BEF7228
void __cdecl boost::detail::weak_count::weak_count(boost::detail::weak_count *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = 0LL;
};

// Line 540: range 000000000BEF722A-000000000BEF72A7
void __cdecl boost::detail::weak_count::weak_count(
        boost::detail::weak_count *const this,
        const boost::detail::shared_count *r)
{
  boost::detail::sp_counted_base *pi; // rdx

  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  pi = r->pi_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = pi;
  if ( this->pi_ )
    boost::detail::sp_counted_base::weak_add_ref(this->pi_);
};

// Line 548: range 000000000BEF72A8-000000000BEF7325
void __cdecl boost::detail::weak_count::weak_count(
        boost::detail::weak_count *const this,
        const boost::detail::weak_count *r)
{
  boost::detail::sp_counted_base *pi; // rdx

  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  pi = r->pi_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = pi;
  if ( this->pi_ )
    boost::detail::sp_counted_base::weak_add_ref(this->pi_);
};

// Line 570: range 000000000BEF7326-000000000BEF7370
void __cdecl boost::detail::weak_count::~weak_count(boost::detail::weak_count *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->pi_ )
    boost::detail::sp_counted_base::weak_release(this->pi_);
};

// Line 578: range 000000000BEF7372-000000000BEF745C
boost::detail::weak_count *__cdecl boost::detail::weak_count::operator=(
        boost::detail::weak_count *const this,
        const boost::detail::shared_count *r)
{
  boost::detail::sp_counted_base *tmp; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  tmp = r->pi_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( tmp != this->pi_ )
  {
    if ( tmp )
      boost::detail::sp_counted_base::weak_add_ref(tmp);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->pi_ )
      boost::detail::sp_counted_base::weak_release(this->pi_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->pi_ = tmp;
  }
  return this;
};

// Line 613: range 000000000BEF745E-000000000BEF74AE
__int64 __cdecl boost::detail::weak_count::use_count(const boost::detail::weak_count *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->pi_ )
    return boost::detail::sp_counted_base::use_count(this->pi_);
  else
    return 0LL;
};

// Line 645: range 000000000BEF74B0-000000000BEF7570
void __cdecl boost::detail::shared_count::shared_count(
        boost::detail::shared_count *const this,
        const boost::detail::weak_count *r,
        boost::detail::sp_nothrow_tag a3)
{
  boost::detail::sp_counted_base *pi; // rdx

  if ( *(_BYTE *)(((unsigned __int64)r >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  pi = r->pi_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pi_ = pi;
  if ( this->pi_ && !boost::detail::sp_counted_base::add_ref_lock(this->pi_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->pi_ = 0LL;
  }
};
