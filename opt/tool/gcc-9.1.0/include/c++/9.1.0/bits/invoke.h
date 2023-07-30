// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/invoke.h

// Line 59: range 000000000C704441-000000000C7044B1
boost::context::fiber __fastcall std::__invoke_impl<boost::context::fiber,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1} &,boost::context::fiber>(
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *a1,
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *__f,
        boost::context::fiber *a3,
        boost::context::fiber *__args_0)
{
  boost::context::fiber *v4; // rbx

  v4 = (boost::context::fiber *)std::forward<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1} &>(__f);
  std::forward<boost::context::fiber>(a3);
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::operator()(
    a1,
    v4);
  return (boost::context::fiber)a1;
};

// Line 59: range 000000000C7044CE-000000000C70453E
boost::context::fiber __fastcall std::__invoke_impl<boost::context::fiber,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1} &,boost::context::fiber>(
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *a1,
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *__f,
        boost::context::fiber *a3,
        boost::context::fiber *__args_0)
{
  boost::context::fiber *v4; // rbx

  v4 = (boost::context::fiber *)std::forward<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1} &>(__f);
  std::forward<boost::context::fiber>(a3);
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::operator()(
    a1,
    v4);
  return (boost::context::fiber)a1;
};

// Line 59: range 0000000012EA2DBB-0000000012EA2DF8
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineAddExtraProb const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudCombineConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectCombineAddExtraProb&>::type *__f,
        const LifeEffectCombineAddExtraProb *a3,
        const LifeEffectCombineAddExtraProb *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *v4; // rbx
  const LifeEffectCombineAddExtraProb *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectCombineAddExtraProb const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA2D7D-0000000012EA2DBA
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineMultiplyOutput const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudCombineConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectCombineMultiplyOutput&>::type *__f,
        const LifeEffectCombineMultiplyOutput *a3,
        const LifeEffectCombineMultiplyOutput *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *v4; // rbx
  const LifeEffectCombineMultiplyOutput *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectCombineMultiplyOutput const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA2D3F-0000000012EA2D7C
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineReturnMaterial const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudCombineConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectCombineReturnMaterial&>::type *__f,
        const LifeEffectCombineReturnMaterial *a3,
        const LifeEffectCombineReturnMaterial *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *v4; // rbx
  const LifeEffectCombineReturnMaterial *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectCombineReturnMaterial const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA2DF9-0000000012EA2E36
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineReturnSpecialMaterial const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudCombineConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectCombineReturnSpecialMaterial&>::type *__f,
        const LifeEffectCombineReturnSpecialMaterial *a3,
        const LifeEffectCombineReturnSpecialMaterial *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *v4; // rbx
  const LifeEffectCombineReturnSpecialMaterial *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectCombineReturnSpecialMaterial const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA2EB3-0000000012EA2EF0
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookAddBonusProb const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudCookConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectCookAddBonusProb&>::type *__f,
        const LifeEffectCookAddBonusProb *a3,
        const LifeEffectCookAddBonusProb *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rbx
  const LifeEffectCookAddBonusProb *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectCookAddBonusProb const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA2F6D-0000000012EA2FAA
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookCanNotCook const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudCookConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectCookCanNotCook&>::type *__f,
        const LifeEffectCookCanNotCook *a3,
        const LifeEffectCookCanNotCook *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rbx
  const LifeEffectCookCanNotCook *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectCookCanNotCook const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA2E37-0000000012EA2E74
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookExtraProficiency const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudCookConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectCookExtraProficiency&>::type *__f,
        const LifeEffectCookExtraProficiency *a3,
        const LifeEffectCookExtraProficiency *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rbx
  const LifeEffectCookExtraProficiency *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectCookExtraProficiency const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA2EF1-0000000012EA2F2E
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookPerfectMultiOutput const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudCookConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectCookPerfectMultiOutput&>::type *__f,
        const LifeEffectCookPerfectMultiOutput *a3,
        const LifeEffectCookPerfectMultiOutput *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rbx
  const LifeEffectCookPerfectMultiOutput *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectCookPerfectMultiOutput const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA2F2F-0000000012EA2F6C
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookProbMultiOutput const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudCookConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectCookProbMultiOutput&>::type *__f,
        const LifeEffectCookProbMultiOutput *a3,
        const LifeEffectCookProbMultiOutput *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rbx
  const LifeEffectCookProbMultiOutput *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectCookProbMultiOutput const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA2E75-0000000012EA2EB2
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookWidenJudgeArea const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudCookConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectCookWidenJudgeArea&>::type *__f,
        const LifeEffectCookWidenJudgeArea *a3,
        const LifeEffectCookWidenJudgeArea *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rbx
  const LifeEffectCookWidenJudgeArea *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectCookWidenJudgeArea const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA30A3-0000000012EA30E0
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor &,LifeEffectExpeditionExtraOutput const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudExpeditionConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectExpeditionExtraOutput&>::type *__f,
        const LifeEffectExpeditionExtraOutput *a3,
        const LifeEffectExpeditionExtraOutput *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *v4; // rbx
  const LifeEffectExpeditionExtraOutput *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectExpeditionExtraOutput const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA3065-0000000012EA30A2
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor &,LifeEffectExpeditionShortenTime const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudExpeditionConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectExpeditionShortenTime&>::type *__f,
        const LifeEffectExpeditionShortenTime *a3,
        const LifeEffectExpeditionShortenTime *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *v4; // rbx
  const LifeEffectExpeditionShortenTime *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectExpeditionShortenTime const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA2FE9-0000000012EA3026
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &,LifeEffectForgeAddExtraProb const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudForgeConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectForgeAddExtraProb&>::type *__f,
        const LifeEffectForgeAddExtraProb *a3,
        const LifeEffectForgeAddExtraProb *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *v4; // rbx
  const LifeEffectForgeAddExtraProb *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectForgeAddExtraProb const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA2FAB-0000000012EA2FE8
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &,LifeEffectForgeReduceTime const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudForgeConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectForgeReduceTime&>::type *__f,
        const LifeEffectForgeReduceTime *a3,
        const LifeEffectForgeReduceTime *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *v4; // rbx
  const LifeEffectForgeReduceTime *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectForgeReduceTime const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA3027-0000000012EA3064
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &,LifeEffectForgeReturnMaterial const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudForgeConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectForgeReturnMaterial&>::type *__f,
        const LifeEffectForgeReturnMaterial *a3,
        const LifeEffectForgeReturnMaterial *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *v4; // rbx
  const LifeEffectForgeReturnMaterial *v5; // rax

  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &>(a1);
  v5 = std::forward<LifeEffectForgeReturnMaterial const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor::operator()(
           v4,
           v5);
};

// Line 59: range 0000000012EA30E1-0000000012EA311E
int32_t __fastcall std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudFurnitureMakeConfigVisitor &,LifeEffectFurnitureMakeReturnMaterial const&>(
        std::remove_reference<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(const TxtConfigMgr&)::ProudFurnitureMakeConfigVisitor&>::type *a1,
        std::remove_reference<const LifeEffectFurnitureMakeReturnMaterial&>::type *__f,
        const LifeEffectFurnitureMakeReturnMaterial *a3,
        const LifeEffectFurnitureMakeReturnMaterial *__args_0)
{
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudFurnitureMakeConfigVisitor *Config; // rbx
  const LifeEffectFurnitureMakeReturnMaterial *Return; // rax

  Config = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudFurnitureMakeConfigVisitor &>(a1);
  Return = std::forward<LifeEffectFurnitureMakeReturnMaterial const&>(__f);
  return AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudFurnitureMakeConfigVisitor::operator()(
           Config,
           Return);
};

// Line 59: range 000000001341E040-000000001341E084
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCombineAddExtraProb&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectCombineAddExtraProb&>::type *__f,
        LifeEffectCombineAddExtraProb *a3,
        LifeEffectCombineAddExtraProb *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectCombineAddExtraProb *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_ES9_RNSt16remove_referenceIS8_E4typeE(a1);
  v6 = std::forward<LifeEffectCombineAddExtraProb &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectCombineAddExtraProb&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341DFD2-000000001341E016
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCombineMultiplyOutput&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectCombineMultiplyOutput&>::type *__f,
        LifeEffectCombineMultiplyOutput *a3,
        LifeEffectCombineMultiplyOutput *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectCombineMultiplyOutput *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_ES9_RNSt16remove_referenceIS8_E4typeE(a1);
  v6 = std::forward<LifeEffectCombineMultiplyOutput &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectCombineMultiplyOutput&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341DF20-000000001341DF64
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCombineReturnMaterial&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectCombineReturnMaterial&>::type *__f,
        LifeEffectCombineReturnMaterial *a3,
        LifeEffectCombineReturnMaterial *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectCombineReturnMaterial *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_ES9_RNSt16remove_referenceIS8_E4typeE(a1);
  v6 = std::forward<LifeEffectCombineReturnMaterial &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectCombineReturnMaterial&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E0AE-000000001341E0F2
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCombineReturnSpecialMaterial&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectCombineReturnSpecialMaterial&>::type *__f,
        LifeEffectCombineReturnSpecialMaterial *a3,
        LifeEffectCombineReturnSpecialMaterial *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectCombineReturnSpecialMaterial *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_ES9_RNSt16remove_referenceIS8_E4typeE(a1);
  v6 = std::forward<LifeEffectCombineReturnSpecialMaterial &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectCombineReturnSpecialMaterial&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341DF65-000000001341DFA9
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::__detail::__variant::__variant_cookie>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<std::__detail::__variant::__variant_cookie>::type *__f,
        std::__detail::__variant::__variant_cookie *a3,
        std::__detail::__variant::__variant_cookie *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  std::__detail::__variant::__variant_cookie *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_ES9_RNSt16remove_referenceIS8_E4typeE(a1);
  v6 = std::forward<std::__detail::__variant::__variant_cookie>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<std::__detail::__variant::__variant_cookie>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E23C-000000001341E280
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookAddBonusProb&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectCookAddBonusProb&>::type *__f,
        LifeEffectCookAddBonusProb *a3,
        LifeEffectCookAddBonusProb *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectCookAddBonusProb *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(a1);
  v6 = std::forward<LifeEffectCookAddBonusProb &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectCookAddBonusProb&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E386-000000001341E3CA
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookCanNotCook&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectCookCanNotCook&>::type *__f,
        LifeEffectCookCanNotCook *a3,
        LifeEffectCookCanNotCook *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectCookCanNotCook *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(a1);
  v6 = std::forward<LifeEffectCookCanNotCook &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectCookCanNotCook&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E11C-000000001341E160
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookExtraProficiency&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectCookExtraProficiency&>::type *__f,
        LifeEffectCookExtraProficiency *a3,
        LifeEffectCookExtraProficiency *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectCookExtraProficiency *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(a1);
  v6 = std::forward<LifeEffectCookExtraProficiency &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectCookExtraProficiency&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E2AA-000000001341E2EE
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookPerfectMultiOutput&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectCookPerfectMultiOutput&>::type *__f,
        LifeEffectCookPerfectMultiOutput *a3,
        LifeEffectCookPerfectMultiOutput *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectCookPerfectMultiOutput *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(a1);
  v6 = std::forward<LifeEffectCookPerfectMultiOutput &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectCookPerfectMultiOutput&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E318-000000001341E35C
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookProbMultiOutput&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectCookProbMultiOutput&>::type *__f,
        LifeEffectCookProbMultiOutput *a3,
        LifeEffectCookProbMultiOutput *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectCookProbMultiOutput *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(a1);
  v6 = std::forward<LifeEffectCookProbMultiOutput &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectCookProbMultiOutput&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E1CE-000000001341E212
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookWidenJudgeArea&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectCookWidenJudgeArea&>::type *__f,
        LifeEffectCookWidenJudgeArea *a3,
        LifeEffectCookWidenJudgeArea *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectCookWidenJudgeArea *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(a1);
  v6 = std::forward<LifeEffectCookWidenJudgeArea &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectCookWidenJudgeArea&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E161-000000001341E1A5
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::__detail::__variant::__variant_cookie>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<std::__detail::__variant::__variant_cookie>::type *__f,
        std::__detail::__variant::__variant_cookie *a3,
        std::__detail::__variant::__variant_cookie *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  std::__detail::__variant::__variant_cookie *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(a1);
  v6 = std::forward<std::__detail::__variant::__variant_cookie>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<std::__detail::__variant::__variant_cookie>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E4A6-000000001341E4EA
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectForgeAddExtraProb&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectForgeAddExtraProb&>::type *__f,
        LifeEffectForgeAddExtraProb *a3,
        LifeEffectForgeAddExtraProb *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectForgeAddExtraProb *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES8_RNSt16remove_referenceIS7_E4typeE(a1);
  v6 = std::forward<LifeEffectForgeAddExtraProb &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectForgeAddExtraProb&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E3F4-000000001341E438
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectForgeReduceTime&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectForgeReduceTime&>::type *__f,
        LifeEffectForgeReduceTime *a3,
        LifeEffectForgeReduceTime *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectForgeReduceTime *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES8_RNSt16remove_referenceIS7_E4typeE(a1);
  v6 = std::forward<LifeEffectForgeReduceTime &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectForgeReduceTime&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E514-000000001341E558
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectForgeReturnMaterial&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectForgeReturnMaterial&>::type *__f,
        LifeEffectForgeReturnMaterial *a3,
        LifeEffectForgeReturnMaterial *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LifeEffectForgeReturnMaterial *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES8_RNSt16remove_referenceIS7_E4typeE(a1);
  v6 = std::forward<LifeEffectForgeReturnMaterial &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectForgeReturnMaterial&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E439-000000001341E47D
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::__detail::__variant::__variant_cookie>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<std::__detail::__variant::__variant_cookie>::type *__f,
        std::__detail::__variant::__variant_cookie *a3,
        std::__detail::__variant::__variant_cookie *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  std::__detail::__variant::__variant_cookie *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES8_RNSt16remove_referenceIS7_E4typeE(a1);
  v6 = std::forward<std::__detail::__variant::__variant_cookie>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<std::__detail::__variant::__variant_cookie>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000001341E582-000000001341E5C6
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectFurnitureMakeReturnMaterial&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectFurnitureMakeReturnMaterial}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LifeEffectFurnitureMakeReturnMaterial&>::type *__f,
        LifeEffectFurnitureMakeReturnMaterial *a3,
        LifeEffectFurnitureMakeReturnMaterial *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE; // rbx
  LifeEffectFurnitureMakeReturnMaterial *Return; // rax

  ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ37LifeEffectFurnitureMakeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE(a1);
  Return = std::forward<LifeEffectFurnitureMakeReturnMaterial &>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LifeEffectFurnitureMakeReturnMaterial&>(
    ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE,
    Return);
  return v4;
};

// Line 59: range 000000001341E5C7-000000001341E60B
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::__detail::__variant::__variant_cookie>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {LifeEffectFurnitureMakeReturnMaterial}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<std::__detail::__variant::__variant_cookie>::type *__f,
        std::__detail::__variant::__variant_cookie *a3,
        std::__detail::__variant::__variant_cookie *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE; // rbx
  std::__detail::__variant::__variant_cookie *v6; // rax

  ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ37LifeEffectFurnitureMakeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE(a1);
  v6 = std::forward<std::__detail::__variant::__variant_cookie>(__f);
  std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<std::__detail::__variant::__variant_cookie>(
    ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE,
    v6);
  return v4;
};

// Line 59: range 000000000F9682E1-000000000F968325
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTForinNode&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LuaASTForinNode&>::type *__f,
        LuaASTForinNode *a3,
        LuaASTForinNode *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LuaASTForinNode *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<LuaASTForinNode &>(__f);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LuaASTForinNode&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F968326-000000000F96836A
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTFornumNode&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LuaASTFornumNode&>::type *__f,
        LuaASTFornumNode *a3,
        LuaASTFornumNode *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LuaASTFornumNode *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<LuaASTFornumNode &>(__f);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LuaASTFornumNode&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F9683B0-000000000F9683F4
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTLocalNode&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LuaASTLocalNode&>::type *__f,
        LuaASTLocalNode *a3,
        LuaASTLocalNode *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LuaASTLocalNode *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<LuaASTLocalNode &>(__f);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LuaASTLocalNode&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F96843A-000000000F96847E
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTOpNode&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LuaASTOpNode&>::type *__f,
        LuaASTOpNode *a3,
        LuaASTOpNode *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LuaASTOpNode *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<LuaASTOpNode &>(__f);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LuaASTOpNode&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F96836B-000000000F9683AF
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTSetNode&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LuaASTSetNode&>::type *__f,
        LuaASTSetNode *a3,
        LuaASTSetNode *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LuaASTSetNode *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<LuaASTSetNode &>(__f);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LuaASTSetNode&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F9683F5-000000000F968439
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTTableNode&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LuaASTTableNode&>::type *__f,
        LuaASTTableNode *a3,
        LuaASTTableNode *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LuaASTTableNode *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<LuaASTTableNode &>(__f);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LuaASTTableNode&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F96847F-000000000F9684C3
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaFunctionNode&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<LuaFunctionNode&>::type *__f,
        LuaFunctionNode *a3,
        LuaFunctionNode *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  LuaFunctionNode *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<LuaFunctionNode &>(__f);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<LuaFunctionNode&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F968212-000000000F968256
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},bool &>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__f,
        bool *a3,
        bool *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  bool *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<bool &>((std::remove_reference<bool&>::type *)__f->gap0);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<bool &>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F968188-000000000F9681CC
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},double &>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__f,
        double *a3,
        double *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  double *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<double &>((std::remove_reference<double&>::type *)__f->gap0);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<double &>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F9681CD-000000000F968211
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::__detail::__variant::__variant_cookie>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<std::__detail::__variant::__variant_cookie>::type *__f,
        std::__detail::__variant::__variant_cookie *a3,
        std::__detail::__variant::__variant_cookie *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  std::__detail::__variant::__variant_cookie *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<std::__detail::__variant::__variant_cookie>(__f);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<std::__detail::__variant::__variant_cookie>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F968257-000000000F96829B
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::string&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<std::string&>::type *__f,
        std::string *a3,
        std::string *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  std::string *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<std::string &>(__f);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<std::string&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F96829C-000000000F9682E0
__int64 __fastcall std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::vector<std::string>&>(
        std::remove_reference<std::__detail::__variant::_Variant_storage<false,_Types ___>::_M_reset_impl() [with _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:1&&)> >::type *a1,
        std::remove_reference<std::vector<std::string>&>::type *__f,
        std::vector<std::string> *a3,
        std::vector<std::string> *__args_0)
{
  unsigned int v4; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rbx
  std::vector<std::string> *v6; // rax

  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(a1);
  v6 = std::forward<std::vector<std::string> &>(__f);
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(false &&)#1}::operator()<std::vector<std::string>&>(
    v5,
    v6);
  return v4;
};

// Line 59: range 000000000F925744-000000000F925798
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JNS1_16__variant_cookieESt17integral_constantImLm18446744073709551615EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::remove_reference<std::__detail::__variant::__variant_cookie>::type *__f,
        std::remove_reference<std::integral_constant<long unsigned int,18446744073709551615> >::type *a3,
        std::integral_constant<long unsigned int,18446744073709551615> *a4,
        std::__detail::__variant::__variant_cookie *__args_0,
        std::integral_constant<long unsigned int,18446744073709551615> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  std::__detail::__variant::__variant_cookie *v8; // rax
  std::integral_constant<long unsigned int,18446744073709551615> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,18446744073709551615ul>>(a3);
  v8 = std::forward<std::__detail::__variant::__variant_cookie>(__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<std::__detail::__variant::__variant_cookie,std::integral_constant<unsigned long,18446744073709551615ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 59: range 000000000F92580A-000000000F92585E
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRS9_St17integral_constantImLm2EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::remove_reference<std::string&>::type *__f,
        std::remove_reference<std::integral_constant<long unsigned int,2> >::type *a3,
        std::integral_constant<long unsigned int,2> *a4,
        std::string *__args_0,
        std::integral_constant<long unsigned int,2> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  std::string *v8; // rax
  std::integral_constant<long unsigned int,2> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,2ul>>(a3);
  v8 = std::forward<std::string &>(__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<std::string&,std::integral_constant<unsigned long,2ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 59: range 000000000F925888-000000000F9258DC
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSC_St17integral_constantImLm3EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::remove_reference<std::vector<std::string>&>::type *__f,
        std::remove_reference<std::integral_constant<long unsigned int,3> >::type *a3,
        std::integral_constant<long unsigned int,3> *a4,
        std::vector<std::string> *__args_0,
        std::integral_constant<long unsigned int,3> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  std::vector<std::string> *v8; // rax
  std::integral_constant<long unsigned int,3> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,3ul>>(a3);
  v8 = std::forward<std::vector<std::string> &>(__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<std::vector<std::string>&,std::integral_constant<unsigned long,3ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 59: range 000000000F925906-000000000F92595A
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSD_St17integral_constantImLm4EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::remove_reference<LuaASTForinNode&>::type *__f,
        std::remove_reference<std::integral_constant<long unsigned int,4> >::type *a3,
        std::integral_constant<long unsigned int,4> *a4,
        LuaASTForinNode *__args_0,
        std::integral_constant<long unsigned int,4> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  LuaASTForinNode *v8; // rax
  std::integral_constant<long unsigned int,4> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,4ul>>(a3);
  v8 = std::forward<LuaASTForinNode &>(__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<LuaASTForinNode&,std::integral_constant<unsigned long,4ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 59: range 000000000F925984-000000000F9259D8
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSE_St17integral_constantImLm5EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::remove_reference<LuaASTFornumNode&>::type *__f,
        std::remove_reference<std::integral_constant<long unsigned int,5> >::type *a3,
        std::integral_constant<long unsigned int,5> *a4,
        LuaASTFornumNode *__args_0,
        std::integral_constant<long unsigned int,5> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  LuaASTFornumNode *v8; // rax
  std::integral_constant<long unsigned int,5> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,5ul>>(a3);
  v8 = std::forward<LuaASTFornumNode &>(__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<LuaASTFornumNode&,std::integral_constant<unsigned long,5ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 59: range 000000000F925A02-000000000F925A56
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSF_St17integral_constantImLm6EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::remove_reference<LuaASTSetNode&>::type *__f,
        std::remove_reference<std::integral_constant<long unsigned int,6> >::type *a3,
        std::integral_constant<long unsigned int,6> *a4,
        LuaASTSetNode *__args_0,
        std::integral_constant<long unsigned int,6> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  LuaASTSetNode *v8; // rax
  std::integral_constant<long unsigned int,6> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,6ul>>(a3);
  v8 = std::forward<LuaASTSetNode &>(__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<LuaASTSetNode&,std::integral_constant<unsigned long,6ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 59: range 000000000F925A80-000000000F925AD4
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSG_St17integral_constantImLm7EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::remove_reference<LuaASTLocalNode&>::type *__f,
        std::remove_reference<std::integral_constant<long unsigned int,7> >::type *a3,
        std::integral_constant<long unsigned int,7> *a4,
        LuaASTLocalNode *__args_0,
        std::integral_constant<long unsigned int,7> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  LuaASTLocalNode *v8; // rax
  std::integral_constant<long unsigned int,7> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,7ul>>(a3);
  v8 = std::forward<LuaASTLocalNode &>(__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<LuaASTLocalNode&,std::integral_constant<unsigned long,7ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 59: range 000000000F925AFE-000000000F925B52
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSH_St17integral_constantImLm8EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::remove_reference<LuaASTTableNode&>::type *__f,
        std::remove_reference<std::integral_constant<long unsigned int,8> >::type *a3,
        std::integral_constant<long unsigned int,8> *a4,
        LuaASTTableNode *__args_0,
        std::integral_constant<long unsigned int,8> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  LuaASTTableNode *v8; // rax
  std::integral_constant<long unsigned int,8> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,8ul>>(a3);
  v8 = std::forward<LuaASTTableNode &>(__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<LuaASTTableNode&,std::integral_constant<unsigned long,8ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 59: range 000000000F925B8A-000000000F925BDE
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSI_St17integral_constantImLm9EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::remove_reference<LuaASTOpNode&>::type *__f,
        std::remove_reference<std::integral_constant<long unsigned int,9> >::type *a3,
        std::integral_constant<long unsigned int,9> *a4,
        LuaASTOpNode *__args_0,
        std::integral_constant<long unsigned int,9> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  LuaASTOpNode *v8; // rax
  std::integral_constant<long unsigned int,9> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,9ul>>(a3);
  v8 = std::forward<LuaASTOpNode &>(__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<LuaASTOpNode&,std::integral_constant<unsigned long,9ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 59: range 000000000F925C16-000000000F925C6A
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSJ_St17integral_constantImLm10EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::remove_reference<LuaFunctionNode&>::type *__f,
        std::remove_reference<std::integral_constant<long unsigned int,10> >::type *a3,
        std::integral_constant<long unsigned int,10> *a4,
        LuaFunctionNode *__args_0,
        std::integral_constant<long unsigned int,10> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  LuaFunctionNode *v8; // rax
  std::integral_constant<long unsigned int,10> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,10ul>>(a3);
  v8 = std::forward<LuaFunctionNode &>(__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<LuaFunctionNode&,std::integral_constant<unsigned long,10ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 59: range 000000000F9257A7-000000000F9257FB
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRbSt17integral_constantImLm1EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__f,
        std::remove_reference<std::integral_constant<long unsigned int,1> >::type *a3,
        std::integral_constant<long unsigned int,1> *a4,
        bool *__args_0,
        std::integral_constant<long unsigned int,1> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  bool *v8; // rax
  std::integral_constant<long unsigned int,1> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,1ul>>(a3);
  v8 = std::forward<bool &>((std::remove_reference<bool&>::type *)__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<bool &,std::integral_constant<unsigned long,1ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 59: range 000000000F9256D3-000000000F925727
__int64 __fastcall ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRdSt17integral_constantImLm0EEEESM_St14__invoke_otherOSO_DpOT1_(
        std::remove_reference<std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>::operator=(std::__detail::__variant::_Move_assign_base<<anonymous>,_Types>&&) [with bool <anonymous> _ false_ _Types _ {double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode}]::<lambda(auto:5&&,auto:6)> >::type *a1,
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__f,
        std::remove_reference<std::integral_constant<long unsigned int,0> >::type *a3,
        std::integral_constant<long unsigned int,0> *a4,
        double *__args_0,
        std::integral_constant<long unsigned int,0> *__args_1)
{
  unsigned int v6; // r12d
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v7; // rbx
  double *v8; // rax
  std::integral_constant<long unsigned int,0> v9; // dl

  v7 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(a1);
  std::forward<std::integral_constant<unsigned long,0ul>>(a3);
  v8 = std::forward<double &>((std::remove_reference<double&>::type *)__f);
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=(std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>&&)::{lambda(false &&,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode)#1}::operator()<double &,std::integral_constant<unsigned long,0ul>>(
    v7,
    v8,
    v9);
  return v6;
};

// Line 89: range 000000000C703D71-000000000C703DE1
std::__success_type<boost::context::fiber>::type __fastcall std::__invoke<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1} &,boost::context::fiber &&>(
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *__fn,
        std::remove_reference<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)>&>::type *a2,
        boost::context::fiber *__args_0)
{
  boost::context::fiber *v3; // rbx
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *v4; // rcx

  v3 = std::forward<boost::context::fiber>(__args_0);
  v4 = std::forward<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1} &>(a2);
  if ( *(_BYTE *)(((unsigned __int64)__fn >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  std::__invoke_impl<boost::context::fiber,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1} &,boost::context::fiber>(
    __fn,
    v4,
    v3,
    (boost::context::fiber *)v4);
  return (std::__success_type<boost::context::fiber>::type)__fn;
};

// Line 89: range 000000000C703FBD-000000000C70402D
std::__success_type<boost::context::fiber>::type __fastcall std::__invoke<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1} &,boost::context::fiber &&>(
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *__fn,
        std::remove_reference<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)>&>::type *a2,
        boost::context::fiber *__args_0)
{
  boost::context::fiber *v3; // rbx
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *v4; // rcx

  v3 = std::forward<boost::context::fiber>(__args_0);
  v4 = std::forward<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1} &>(a2);
  if ( *(_BYTE *)(((unsigned __int64)__fn >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  std::__invoke_impl<boost::context::fiber,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1} &,boost::context::fiber>(
    __fn,
    v4,
    v3,
    (boost::context::fiber *)v4);
  return (std::__success_type<boost::context::fiber>::type)__fn;
};

// Line 89: range 0000000012EA1A2C-0000000012EA1A69
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineAddExtraProb const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *__fn,
        LifeEffectCombineAddExtraProb *a2,
        const LifeEffectCombineAddExtraProb *__args_0)
{
  std::remove_reference<const LifeEffectCombineAddExtraProb&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *v4; // rax
  const LifeEffectCombineAddExtraProb *v5; // rdx
  const LifeEffectCombineAddExtraProb *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectCombineAddExtraProb&>::type *)std::forward<LifeEffectCombineAddExtraProb const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineAddExtraProb const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA19EE-0000000012EA1A2B
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineMultiplyOutput const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *__fn,
        LifeEffectCombineMultiplyOutput *a2,
        const LifeEffectCombineMultiplyOutput *__args_0)
{
  std::remove_reference<const LifeEffectCombineMultiplyOutput&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *v4; // rax
  const LifeEffectCombineMultiplyOutput *v5; // rdx
  const LifeEffectCombineMultiplyOutput *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectCombineMultiplyOutput&>::type *)std::forward<LifeEffectCombineMultiplyOutput const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineMultiplyOutput const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA19B0-0000000012EA19ED
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineReturnMaterial const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *__fn,
        LifeEffectCombineReturnMaterial *a2,
        const LifeEffectCombineReturnMaterial *__args_0)
{
  std::remove_reference<const LifeEffectCombineReturnMaterial&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *v4; // rax
  const LifeEffectCombineReturnMaterial *v5; // rdx
  const LifeEffectCombineReturnMaterial *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectCombineReturnMaterial&>::type *)std::forward<LifeEffectCombineReturnMaterial const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineReturnMaterial const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1A6A-0000000012EA1AA7
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineReturnSpecialMaterial const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *__fn,
        LifeEffectCombineReturnSpecialMaterial *a2,
        const LifeEffectCombineReturnSpecialMaterial *__args_0)
{
  std::remove_reference<const LifeEffectCombineReturnSpecialMaterial&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCombineConfigVisitor *v4; // rax
  const LifeEffectCombineReturnSpecialMaterial *v5; // rdx
  const LifeEffectCombineReturnSpecialMaterial *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectCombineReturnSpecialMaterial&>::type *)std::forward<LifeEffectCombineReturnSpecialMaterial const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCombineConfigVisitor &,LifeEffectCombineReturnSpecialMaterial const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1B40-0000000012EA1B7D
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookAddBonusProb const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *__fn,
        LifeEffectCookAddBonusProb *a2,
        const LifeEffectCookAddBonusProb *__args_0)
{
  std::remove_reference<const LifeEffectCookAddBonusProb&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rax
  const LifeEffectCookAddBonusProb *v5; // rdx
  const LifeEffectCookAddBonusProb *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectCookAddBonusProb&>::type *)std::forward<LifeEffectCookAddBonusProb const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookAddBonusProb const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1BFA-0000000012EA1C37
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookCanNotCook const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *__fn,
        LifeEffectCookCanNotCook *a2,
        const LifeEffectCookCanNotCook *__args_0)
{
  std::remove_reference<const LifeEffectCookCanNotCook&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rax
  const LifeEffectCookCanNotCook *v5; // rdx
  const LifeEffectCookCanNotCook *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectCookCanNotCook&>::type *)std::forward<LifeEffectCookCanNotCook const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookCanNotCook const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1AC4-0000000012EA1B01
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookExtraProficiency const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *__fn,
        LifeEffectCookExtraProficiency *a2,
        const LifeEffectCookExtraProficiency *__args_0)
{
  std::remove_reference<const LifeEffectCookExtraProficiency&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rax
  const LifeEffectCookExtraProficiency *v5; // rdx
  const LifeEffectCookExtraProficiency *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectCookExtraProficiency&>::type *)std::forward<LifeEffectCookExtraProficiency const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookExtraProficiency const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1B7E-0000000012EA1BBB
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookPerfectMultiOutput const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *__fn,
        LifeEffectCookPerfectMultiOutput *a2,
        const LifeEffectCookPerfectMultiOutput *__args_0)
{
  std::remove_reference<const LifeEffectCookPerfectMultiOutput&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rax
  const LifeEffectCookPerfectMultiOutput *v5; // rdx
  const LifeEffectCookPerfectMultiOutput *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectCookPerfectMultiOutput&>::type *)std::forward<LifeEffectCookPerfectMultiOutput const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookPerfectMultiOutput const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1BBC-0000000012EA1BF9
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookProbMultiOutput const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *__fn,
        LifeEffectCookProbMultiOutput *a2,
        const LifeEffectCookProbMultiOutput *__args_0)
{
  std::remove_reference<const LifeEffectCookProbMultiOutput&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rax
  const LifeEffectCookProbMultiOutput *v5; // rdx
  const LifeEffectCookProbMultiOutput *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectCookProbMultiOutput&>::type *)std::forward<LifeEffectCookProbMultiOutput const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookProbMultiOutput const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1B02-0000000012EA1B3F
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookWidenJudgeArea const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *__fn,
        LifeEffectCookWidenJudgeArea *a2,
        const LifeEffectCookWidenJudgeArea *__args_0)
{
  std::remove_reference<const LifeEffectCookWidenJudgeArea&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudCookConfigVisitor *v4; // rax
  const LifeEffectCookWidenJudgeArea *v5; // rdx
  const LifeEffectCookWidenJudgeArea *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectCookWidenJudgeArea&>::type *)std::forward<LifeEffectCookWidenJudgeArea const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudCookConfigVisitor &,LifeEffectCookWidenJudgeArea const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1D68-0000000012EA1DA5
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor &,LifeEffectExpeditionExtraOutput const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *__fn,
        LifeEffectExpeditionExtraOutput *a2,
        const LifeEffectExpeditionExtraOutput *__args_0)
{
  std::remove_reference<const LifeEffectExpeditionExtraOutput&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *v4; // rax
  const LifeEffectExpeditionExtraOutput *v5; // rdx
  const LifeEffectExpeditionExtraOutput *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectExpeditionExtraOutput&>::type *)std::forward<LifeEffectExpeditionExtraOutput const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor &,LifeEffectExpeditionExtraOutput const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1D2A-0000000012EA1D67
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor &,LifeEffectExpeditionShortenTime const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *__fn,
        LifeEffectExpeditionShortenTime *a2,
        const LifeEffectExpeditionShortenTime *__args_0)
{
  std::remove_reference<const LifeEffectExpeditionShortenTime&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudExpeditionConfigVisitor *v4; // rax
  const LifeEffectExpeditionShortenTime *v5; // rdx
  const LifeEffectExpeditionShortenTime *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectExpeditionShortenTime&>::type *)std::forward<LifeEffectExpeditionShortenTime const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudExpeditionConfigVisitor &,LifeEffectExpeditionShortenTime const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1C92-0000000012EA1CCF
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &,LifeEffectForgeAddExtraProb const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *__fn,
        LifeEffectForgeAddExtraProb *a2,
        const LifeEffectForgeAddExtraProb *__args_0)
{
  std::remove_reference<const LifeEffectForgeAddExtraProb&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *v4; // rax
  const LifeEffectForgeAddExtraProb *v5; // rdx
  const LifeEffectForgeAddExtraProb *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectForgeAddExtraProb&>::type *)std::forward<LifeEffectForgeAddExtraProb const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &,LifeEffectForgeAddExtraProb const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1C54-0000000012EA1C91
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &,LifeEffectForgeReduceTime const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *__fn,
        LifeEffectForgeReduceTime *a2,
        const LifeEffectForgeReduceTime *__args_0)
{
  std::remove_reference<const LifeEffectForgeReduceTime&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *v4; // rax
  const LifeEffectForgeReduceTime *v5; // rdx
  const LifeEffectForgeReduceTime *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectForgeReduceTime&>::type *)std::forward<LifeEffectForgeReduceTime const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &,LifeEffectForgeReduceTime const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1CD0-0000000012EA1D0D
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &,LifeEffectForgeReturnMaterial const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *__fn,
        LifeEffectForgeReturnMaterial *a2,
        const LifeEffectForgeReturnMaterial *__args_0)
{
  std::remove_reference<const LifeEffectForgeReturnMaterial&>::type *v3; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudForgeConfigVisitor *v4; // rax
  const LifeEffectForgeReturnMaterial *v5; // rdx
  const LifeEffectForgeReturnMaterial *v6; // rcx

  v3 = (std::remove_reference<const LifeEffectForgeReturnMaterial&>::type *)std::forward<LifeEffectForgeReturnMaterial const&>(a2);
  v4 = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudForgeConfigVisitor &,LifeEffectForgeReturnMaterial const&>(
           v4,
           v3,
           v5,
           v6);
};

// Line 89: range 0000000012EA1DC2-0000000012EA1DFF
std::__success_type<int>::type __fastcall std::__invoke<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudFurnitureMakeConfigVisitor &,LifeEffectFurnitureMakeReturnMaterial const&>(
        AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudFurnitureMakeConfigVisitor *__fn,
        LifeEffectFurnitureMakeReturnMaterial *a2,
        const LifeEffectFurnitureMakeReturnMaterial *__args_0)
{
  std::remove_reference<const LifeEffectFurnitureMakeReturnMaterial&>::type *Return; // rbx
  AvatarTalentExcelConfigMgr::checkLifeEffectConfig::ProudFurnitureMakeConfigVisitor *Config; // rax
  const LifeEffectFurnitureMakeReturnMaterial *v5; // rdx
  const LifeEffectFurnitureMakeReturnMaterial *v6; // rcx

  Return = (std::remove_reference<const LifeEffectFurnitureMakeReturnMaterial&>::type *)std::forward<LifeEffectFurnitureMakeReturnMaterial const&>(a2);
  Config = std::forward<AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudFurnitureMakeConfigVisitor &>(__fn);
  return std::__invoke_impl<int,AvatarTalentExcelConfigMgr::checkLifeEffectConfig(TxtConfigMgr const&)::ProudFurnitureMakeConfigVisitor &,LifeEffectFurnitureMakeReturnMaterial const&>(
           Config,
           Return,
           v5,
           v6);
};

// Line 89: range 0000000013419C59-0000000013419C9D
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_JNS1_16__variant_cookieEEENSt15__invoke_resultIS7_JDpT0_EE4typeES8_DpOSC_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        std::__detail::__variant::__variant_cookie *a2,
        std::__detail::__variant::__variant_cookie *__args_0)
{
  unsigned int v3; // r12d
  std::__detail::__variant::__variant_cookie *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  std::__detail::__variant::__variant_cookie *v6; // rdx
  std::__detail::__variant::__variant_cookie *v7; // rcx

  v4 = std::forward<std::__detail::__variant::__variant_cookie>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES8_RNSt16remove_referenceIS7_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::__detail::__variant::__variant_cookie>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419C14-0000000013419C58
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_JRS3_EENSt15__invoke_resultIS7_JDpT0_EE4typeES8_DpOSC_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectForgeReduceTime *a2,
        LifeEffectForgeReduceTime *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectForgeReduceTime *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectForgeReduceTime *v6; // rdx
  LifeEffectForgeReduceTime *v7; // rcx

  v4 = std::forward<LifeEffectForgeReduceTime &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES8_RNSt16remove_referenceIS7_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectForgeReduceTime&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419CC6-0000000013419D0A
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_JRS4_EENSt15__invoke_resultIS7_JDpT0_EE4typeES8_DpOSC_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectForgeAddExtraProb *a2,
        LifeEffectForgeAddExtraProb *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectForgeAddExtraProb *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectForgeAddExtraProb *v6; // rdx
  LifeEffectForgeAddExtraProb *v7; // rcx

  v4 = std::forward<LifeEffectForgeAddExtraProb &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES8_RNSt16remove_referenceIS7_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectForgeAddExtraProb&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419D34-0000000013419D78
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_JRS5_EENSt15__invoke_resultIS7_JDpT0_EE4typeES8_DpOSC_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectForgeReturnMaterial *a2,
        LifeEffectForgeReturnMaterial *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectForgeReturnMaterial *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectForgeReturnMaterial *v6; // rdx
  LifeEffectForgeReturnMaterial *v7; // rcx

  v4 = std::forward<LifeEffectForgeReturnMaterial &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ25LifeEffectForgeReduceTime27LifeEffectForgeAddExtraProb29LifeEffectForgeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES8_RNSt16remove_referenceIS7_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectForgeReturnMaterial&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419949-000000001341998D
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_JNS1_16__variant_cookieEEENSt15__invoke_resultISA_JDpT0_EE4typeESB_DpOSF_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        std::__detail::__variant::__variant_cookie *a2,
        std::__detail::__variant::__variant_cookie *__args_0)
{
  unsigned int v3; // r12d
  std::__detail::__variant::__variant_cookie *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  std::__detail::__variant::__variant_cookie *v6; // rdx
  std::__detail::__variant::__variant_cookie *v7; // rcx

  v4 = std::forward<std::__detail::__variant::__variant_cookie>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::__detail::__variant::__variant_cookie>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419904-0000000013419948
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_JRS3_EENSt15__invoke_resultISA_JDpT0_EE4typeESB_DpOSF_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectCookExtraProficiency *a2,
        LifeEffectCookExtraProficiency *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectCookExtraProficiency *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectCookExtraProficiency *v6; // rdx
  LifeEffectCookExtraProficiency *v7; // rcx

  v4 = std::forward<LifeEffectCookExtraProficiency &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookExtraProficiency&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 00000000134199B6-00000000134199FA
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_JRS4_EENSt15__invoke_resultISA_JDpT0_EE4typeESB_DpOSF_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectCookWidenJudgeArea *a2,
        LifeEffectCookWidenJudgeArea *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectCookWidenJudgeArea *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectCookWidenJudgeArea *v6; // rdx
  LifeEffectCookWidenJudgeArea *v7; // rcx

  v4 = std::forward<LifeEffectCookWidenJudgeArea &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookWidenJudgeArea&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419A24-0000000013419A68
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_JRS5_EENSt15__invoke_resultISA_JDpT0_EE4typeESB_DpOSF_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectCookAddBonusProb *a2,
        LifeEffectCookAddBonusProb *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectCookAddBonusProb *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectCookAddBonusProb *v6; // rdx
  LifeEffectCookAddBonusProb *v7; // rcx

  v4 = std::forward<LifeEffectCookAddBonusProb &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookAddBonusProb&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419A92-0000000013419AD6
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_JRS6_EENSt15__invoke_resultISA_JDpT0_EE4typeESB_DpOSF_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectCookPerfectMultiOutput *a2,
        LifeEffectCookPerfectMultiOutput *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectCookPerfectMultiOutput *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectCookPerfectMultiOutput *v6; // rdx
  LifeEffectCookPerfectMultiOutput *v7; // rcx

  v4 = std::forward<LifeEffectCookPerfectMultiOutput &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookPerfectMultiOutput&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419B00-0000000013419B44
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_JRS7_EENSt15__invoke_resultISA_JDpT0_EE4typeESB_DpOSF_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectCookProbMultiOutput *a2,
        LifeEffectCookProbMultiOutput *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectCookProbMultiOutput *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectCookProbMultiOutput *v6; // rdx
  LifeEffectCookProbMultiOutput *v7; // rcx

  v4 = std::forward<LifeEffectCookProbMultiOutput &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookProbMultiOutput&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419B6E-0000000013419BB2
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_JRS8_EENSt15__invoke_resultISA_JDpT0_EE4typeESB_DpOSF_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectCookCanNotCook *a2,
        LifeEffectCookCanNotCook *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectCookCanNotCook *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectCookCanNotCook *v6; // rdx
  LifeEffectCookCanNotCook *v7; // rcx

  v4 = std::forward<LifeEffectCookCanNotCook &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ30LifeEffectCookExtraProficiency28LifeEffectCookWidenJudgeArea26LifeEffectCookAddBonusProb32LifeEffectCookPerfectMultiOutput29LifeEffectCookProbMultiOutput24LifeEffectCookCanNotCookEE13_M_reset_implEvEUlOT_E_ESB_RNSt16remove_referenceISA_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCookExtraProficiency,LifeEffectCookWidenJudgeArea,LifeEffectCookAddBonusProb,LifeEffectCookPerfectMultiOutput,LifeEffectCookProbMultiOutput,LifeEffectCookCanNotCook>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCookCanNotCook&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419715-0000000013419759
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_JNS1_16__variant_cookieEEENSt15__invoke_resultIS8_JDpT0_EE4typeES9_DpOSD_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        std::__detail::__variant::__variant_cookie *a2,
        std::__detail::__variant::__variant_cookie *__args_0)
{
  unsigned int v3; // r12d
  std::__detail::__variant::__variant_cookie *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  std::__detail::__variant::__variant_cookie *v6; // rdx
  std::__detail::__variant::__variant_cookie *v7; // rcx

  v4 = std::forward<std::__detail::__variant::__variant_cookie>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_ES9_RNSt16remove_referenceIS8_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::__detail::__variant::__variant_cookie>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 00000000134196D0-0000000013419714
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_JRS3_EENSt15__invoke_resultIS8_JDpT0_EE4typeES9_DpOSD_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectCombineReturnMaterial *a2,
        LifeEffectCombineReturnMaterial *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectCombineReturnMaterial *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectCombineReturnMaterial *v6; // rdx
  LifeEffectCombineReturnMaterial *v7; // rcx

  v4 = std::forward<LifeEffectCombineReturnMaterial &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_ES9_RNSt16remove_referenceIS8_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCombineReturnMaterial&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419782-00000000134197C6
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_JRS4_EENSt15__invoke_resultIS8_JDpT0_EE4typeES9_DpOSD_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectCombineMultiplyOutput *a2,
        LifeEffectCombineMultiplyOutput *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectCombineMultiplyOutput *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectCombineMultiplyOutput *v6; // rdx
  LifeEffectCombineMultiplyOutput *v7; // rcx

  v4 = std::forward<LifeEffectCombineMultiplyOutput &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_ES9_RNSt16remove_referenceIS8_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCombineMultiplyOutput&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 00000000134197F0-0000000013419834
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_JRS5_EENSt15__invoke_resultIS8_JDpT0_EE4typeES9_DpOSD_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectCombineAddExtraProb *a2,
        LifeEffectCombineAddExtraProb *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectCombineAddExtraProb *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectCombineAddExtraProb *v6; // rdx
  LifeEffectCombineAddExtraProb *v7; // rcx

  v4 = std::forward<LifeEffectCombineAddExtraProb &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_ES9_RNSt16remove_referenceIS8_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCombineAddExtraProb&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000001341985E-00000000134198A2
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_JRS6_EENSt15__invoke_resultIS8_JDpT0_EE4typeES9_DpOSD_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectCombineReturnSpecialMaterial *a2,
        LifeEffectCombineReturnSpecialMaterial *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectCombineReturnSpecialMaterial *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LifeEffectCombineReturnSpecialMaterial *v6; // rdx
  LifeEffectCombineReturnSpecialMaterial *v7; // rcx

  v4 = std::forward<LifeEffectCombineReturnSpecialMaterial &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ31LifeEffectCombineReturnMaterial31LifeEffectCombineMultiplyOutput29LifeEffectCombineAddExtraProb38LifeEffectCombineReturnSpecialMaterialEE13_M_reset_implEvEUlOT_E_ES9_RNSt16remove_referenceIS8_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectCombineReturnSpecialMaterial&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419E1F-0000000013419E63
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ37LifeEffectFurnitureMakeReturnMaterialEE13_M_reset_implEvEUlOT_E_JNS1_16__variant_cookieEEENSt15__invoke_resultIS5_JDpT0_EE4typeES6_DpOSA_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        std::__detail::__variant::__variant_cookie *a2,
        std::__detail::__variant::__variant_cookie *__args_0)
{
  unsigned int v3; // r12d
  std::__detail::__variant::__variant_cookie *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE; // rax
  std::__detail::__variant::__variant_cookie *v6; // rdx
  std::__detail::__variant::__variant_cookie *v7; // rcx

  v4 = std::forward<std::__detail::__variant::__variant_cookie>(a2);
  ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ37LifeEffectFurnitureMakeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::__detail::__variant::__variant_cookie>(
    ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 0000000013419DDA-0000000013419E1E
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJ37LifeEffectFurnitureMakeReturnMaterialEE13_M_reset_implEvEUlOT_E_JRS3_EENSt15__invoke_resultIS5_JDpT0_EE4typeES6_DpOSA_(
        std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LifeEffectFurnitureMakeReturnMaterial *a2,
        LifeEffectFurnitureMakeReturnMaterial *__args_0)
{
  unsigned int v3; // r12d
  LifeEffectFurnitureMakeReturnMaterial *Return; // rbx
  std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl::<lambda(auto:1&&)> *ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE; // rax
  LifeEffectFurnitureMakeReturnMaterial *v6; // rdx
  LifeEffectFurnitureMakeReturnMaterial *v7; // rcx

  Return = std::forward<LifeEffectFurnitureMakeReturnMaterial &>(a2);
  ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJ37LifeEffectFurnitureMakeReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,LifeEffectFurnitureMakeReturnMaterial>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LifeEffectFurnitureMakeReturnMaterial&>(
    ReturnMaterialEE13_M_reset_implEvEUlOT_E_ES6_RNSt16remove_referenceIS5_E4typeE,
    Return,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F92068D-000000000F9206D1
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JNS1_16__variant_cookieEEENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        std::__detail::__variant::__variant_cookie *a2,
        std::__detail::__variant::__variant_cookie *__args_0)
{
  unsigned int v3; // r12d
  std::__detail::__variant::__variant_cookie *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  std::__detail::__variant::__variant_cookie *v6; // rdx
  std::__detail::__variant::__variant_cookie *v7; // rcx

  v4 = std::forward<std::__detail::__variant::__variant_cookie>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::__detail::__variant::__variant_cookie>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F920717-000000000F92075B
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JRS8_EENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        std::string *a2,
        std::string *__args_0)
{
  unsigned int v3; // r12d
  std::string *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  std::string *v6; // rdx
  std::string *v7; // rcx

  v4 = std::forward<std::string &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::string&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F92075C-000000000F9207A0
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JRSB_EENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        std::vector<std::string> *a2,
        std::vector<std::string> *__args_0)
{
  unsigned int v3; // r12d
  std::vector<std::string> *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  std::vector<std::string> *v6; // rdx
  std::vector<std::string> *v7; // rcx

  v4 = std::forward<std::vector<std::string> &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},std::vector<std::string>&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F9207A1-000000000F9207E5
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JRSC_EENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LuaASTForinNode *a2,
        LuaASTForinNode *__args_0)
{
  unsigned int v3; // r12d
  std::remove_reference<LuaASTForinNode&>::type *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LuaASTForinNode *v6; // rdx
  LuaASTForinNode *v7; // rcx

  v4 = std::forward<LuaASTForinNode &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTForinNode&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F9207E6-000000000F92082A
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JRSD_EENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LuaASTFornumNode *a2,
        LuaASTFornumNode *__args_0)
{
  unsigned int v3; // r12d
  std::remove_reference<LuaASTFornumNode&>::type *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LuaASTFornumNode *v6; // rdx
  LuaASTFornumNode *v7; // rcx

  v4 = std::forward<LuaASTFornumNode &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTFornumNode&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F92082B-000000000F92086F
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JRSE_EENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LuaASTSetNode *a2,
        LuaASTSetNode *__args_0)
{
  unsigned int v3; // r12d
  std::remove_reference<LuaASTSetNode&>::type *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LuaASTSetNode *v6; // rdx
  LuaASTSetNode *v7; // rcx

  v4 = std::forward<LuaASTSetNode &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTSetNode&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F920870-000000000F9208B4
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JRSF_EENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LuaASTLocalNode *a2,
        LuaASTLocalNode *__args_0)
{
  unsigned int v3; // r12d
  std::remove_reference<LuaASTLocalNode&>::type *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LuaASTLocalNode *v6; // rdx
  LuaASTLocalNode *v7; // rcx

  v4 = std::forward<LuaASTLocalNode &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTLocalNode&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F9208B5-000000000F9208F9
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JRSG_EENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LuaASTTableNode *a2,
        LuaASTTableNode *__args_0)
{
  unsigned int v3; // r12d
  LuaASTTableNode *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LuaASTTableNode *v6; // rdx
  LuaASTTableNode *v7; // rcx

  v4 = std::forward<LuaASTTableNode &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTTableNode&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F9208FA-000000000F92093E
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JRSH_EENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LuaASTOpNode *a2,
        LuaASTOpNode *__args_0)
{
  unsigned int v3; // r12d
  LuaASTOpNode *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LuaASTOpNode *v6; // rdx
  LuaASTOpNode *v7; // rcx

  v4 = std::forward<LuaASTOpNode &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaASTOpNode&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F92093F-000000000F920983
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JRSI_EENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        LuaFunctionNode *a2,
        LuaFunctionNode *__args_0)
{
  unsigned int v3; // r12d
  LuaFunctionNode *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  LuaFunctionNode *v6; // rdx
  LuaFunctionNode *v7; // rcx

  v4 = std::forward<LuaFunctionNode &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},LuaFunctionNode&>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F9206D2-000000000F920716
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JRbEENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        bool *a2,
        bool *__args_0)
{
  unsigned int v3; // r12d
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  bool *v6; // rdx
  bool *v7; // rcx

  v4 = (std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *)std::forward<bool &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},bool &>(
    v5,
    v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F920648-000000000F92068C
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_JRdEENSt15__invoke_resultISK_JDpT0_EE4typeESL_DpOSP_(
        std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *__fn,
        double *a2,
        double *__args_0)
{
  unsigned int v3; // r12d
  double *v4; // rbx
  std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *v5; // rax
  double *v6; // rdx
  double *v7; // rcx

  v4 = std::forward<double &>(a2);
  v5 = ZSt7forwardIZNSt8__detail9__variant16_Variant_storageILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEE13_M_reset_implEvEUlOT_E_ESL_RNSt16remove_referenceISK_E4typeE(__fn);
  std::__invoke_impl<std::__detail::__variant::__variant_cookie,std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl(void)::{lambda(std::__detail::__variant::__variant_cookie &&)#1},double &>(
    v5,
    (std::__detail::__variant::_Variant_storage<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::_M_reset_impl::<lambda(auto:1&&)> *)v4,
    v6,
    v7);
  return v3;
};

// Line 89: range 000000000F8C15AE-000000000F8C160C
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JNS1_16__variant_cookieESt17integral_constantImLm18446744073709551615EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        std::__detail::__variant::__variant_cookie *a2,
        std::integral_constant<long unsigned int,18446744073709551615> *a3,
        std::__detail::__variant::__variant_cookie *__args_0,
        std::integral_constant<long unsigned int,18446744073709551615> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,18446744073709551615> *v6; // r12
  std::__detail::__variant::__variant_cookie *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,18446744073709551615> *v9; // rcx
  std::__detail::__variant::__variant_cookie *v10; // r8
  std::integral_constant<long unsigned int,18446744073709551615> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,18446744073709551615ul>>(a3);
  v7 = std::forward<std::__detail::__variant::__variant_cookie>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JNS1_16__variant_cookieESt17integral_constantImLm18446744073709551615EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};

// Line 89: range 000000000F8C167B-000000000F8C16D9
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JRS8_St17integral_constantImLm2EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        std::string *a2,
        std::integral_constant<long unsigned int,2> *a3,
        std::string *__args_0,
        std::integral_constant<long unsigned int,2> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,2> *v6; // r12
  std::string *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,2> *v9; // rcx
  std::string *v10; // r8
  std::integral_constant<long unsigned int,2> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,2ul>>(a3);
  v7 = std::forward<std::string &>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRS9_St17integral_constantImLm2EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};

// Line 89: range 000000000F8C1702-000000000F8C1760
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JRSB_St17integral_constantImLm3EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        std::vector<std::string> *a2,
        std::integral_constant<long unsigned int,3> *a3,
        std::vector<std::string> *__args_0,
        std::integral_constant<long unsigned int,3> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,3> *v6; // r12
  std::vector<std::string> *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,3> *v9; // rcx
  std::vector<std::string> *v10; // r8
  std::integral_constant<long unsigned int,3> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,3ul>>(a3);
  v7 = std::forward<std::vector<std::string> &>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSC_St17integral_constantImLm3EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};

// Line 89: range 000000000F8C178A-000000000F8C17E8
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JRSC_St17integral_constantImLm4EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        LuaASTForinNode *a2,
        std::integral_constant<long unsigned int,4> *a3,
        LuaASTForinNode *__args_0,
        std::integral_constant<long unsigned int,4> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,4> *v6; // r12
  std::remove_reference<LuaASTForinNode&>::type *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,4> *v9; // rcx
  LuaASTForinNode *v10; // r8
  std::integral_constant<long unsigned int,4> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,4ul>>(a3);
  v7 = std::forward<LuaASTForinNode &>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSD_St17integral_constantImLm4EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};

// Line 89: range 000000000F8C1812-000000000F8C1870
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JRSD_St17integral_constantImLm5EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        LuaASTFornumNode *a2,
        std::integral_constant<long unsigned int,5> *a3,
        LuaASTFornumNode *__args_0,
        std::integral_constant<long unsigned int,5> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,5> *v6; // r12
  std::remove_reference<LuaASTFornumNode&>::type *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,5> *v9; // rcx
  LuaASTFornumNode *v10; // r8
  std::integral_constant<long unsigned int,5> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,5ul>>(a3);
  v7 = std::forward<LuaASTFornumNode &>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSE_St17integral_constantImLm5EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};

// Line 89: range 000000000F8C189A-000000000F8C18F8
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JRSE_St17integral_constantImLm6EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        LuaASTSetNode *a2,
        std::integral_constant<long unsigned int,6> *a3,
        LuaASTSetNode *__args_0,
        std::integral_constant<long unsigned int,6> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,6> *v6; // r12
  std::remove_reference<LuaASTSetNode&>::type *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,6> *v9; // rcx
  LuaASTSetNode *v10; // r8
  std::integral_constant<long unsigned int,6> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,6ul>>(a3);
  v7 = std::forward<LuaASTSetNode &>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSF_St17integral_constantImLm6EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};

// Line 89: range 000000000F8C1922-000000000F8C1980
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JRSF_St17integral_constantImLm7EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        LuaASTLocalNode *a2,
        std::integral_constant<long unsigned int,7> *a3,
        LuaASTLocalNode *__args_0,
        std::integral_constant<long unsigned int,7> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,7> *v6; // r12
  std::remove_reference<LuaASTLocalNode&>::type *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,7> *v9; // rcx
  LuaASTLocalNode *v10; // r8
  std::integral_constant<long unsigned int,7> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,7ul>>(a3);
  v7 = std::forward<LuaASTLocalNode &>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSG_St17integral_constantImLm7EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};

// Line 89: range 000000000F8C19AA-000000000F8C1A08
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JRSG_St17integral_constantImLm8EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        LuaASTTableNode *a2,
        std::integral_constant<long unsigned int,8> *a3,
        LuaASTTableNode *__args_0,
        std::integral_constant<long unsigned int,8> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,8> *v6; // r12
  LuaASTTableNode *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,8> *v9; // rcx
  LuaASTTableNode *v10; // r8
  std::integral_constant<long unsigned int,8> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,8ul>>(a3);
  v7 = std::forward<LuaASTTableNode &>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSH_St17integral_constantImLm8EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};

// Line 89: range 000000000F8C1A32-000000000F8C1A90
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JRSH_St17integral_constantImLm9EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        LuaASTOpNode *a2,
        std::integral_constant<long unsigned int,9> *a3,
        LuaASTOpNode *__args_0,
        std::integral_constant<long unsigned int,9> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,9> *v6; // r12
  LuaASTOpNode *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,9> *v9; // rcx
  LuaASTOpNode *v10; // r8
  std::integral_constant<long unsigned int,9> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,9ul>>(a3);
  v7 = std::forward<LuaASTOpNode &>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSI_St17integral_constantImLm9EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};

// Line 89: range 000000000F8C1ABA-000000000F8C1B18
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JRSI_St17integral_constantImLm10EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        LuaFunctionNode *a2,
        std::integral_constant<long unsigned int,10> *a3,
        LuaFunctionNode *__args_0,
        std::integral_constant<long unsigned int,10> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,10> *v6; // r12
  LuaFunctionNode *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,10> *v9; // rcx
  LuaFunctionNode *v10; // r8
  std::integral_constant<long unsigned int,10> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,10ul>>(a3);
  v7 = std::forward<LuaFunctionNode &>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRSJ_St17integral_constantImLm10EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};

// Line 89: range 000000000F8C161C-000000000F8C167A
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JRbSt17integral_constantImLm1EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        bool *a2,
        std::integral_constant<long unsigned int,1> *a3,
        bool *__args_0,
        std::integral_constant<long unsigned int,1> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,1> *v6; // r12
  bool *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,1> *v9; // rcx
  bool *v10; // r8
  std::integral_constant<long unsigned int,1> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,1ul>>(a3);
  v7 = std::forward<bool &>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRbSt17integral_constantImLm1EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    (std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *)v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};

// Line 89: range 000000000F8C154F-000000000F8C15AD
__int64 __fastcall ZSt8__invokeIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_JRdSt17integral_constantImLm0EEEENSt15__invoke_resultISL_JDpT0_EE4typeESM_DpOST_(
        std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *__fn,
        double *a2,
        std::integral_constant<long unsigned int,0> *a3,
        double *__args_0,
        std::integral_constant<long unsigned int,0> *__args_1)
{
  unsigned int v5; // r13d
  std::integral_constant<long unsigned int,0> *v6; // r12
  double *v7; // rbx
  std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *v8; // rax
  std::integral_constant<long unsigned int,0> *v9; // rcx
  double *v10; // r8
  std::integral_constant<long unsigned int,0> *v11; // r9

  v6 = std::forward<std::integral_constant<unsigned long,0ul>>(a3);
  v7 = std::forward<double &>(a2);
  v8 = ZSt7forwardIZNSt8__detail9__variant17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS8_SaIS8_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSJ_EUlOT_T0_E_ESM_RNSt16remove_referenceISL_E4typeE(__fn);
  ZSt13__invoke_implINSt8__detail9__variant20__variant_idx_cookieEZNS1_17_Move_assign_baseILb0EJdbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS9_SaIS9_EE15LuaASTForinNode16LuaASTFornumNode13LuaASTSetNode15LuaASTLocalNode15LuaASTTableNode12LuaASTOpNode15LuaFunctionNodeEEaSEOSK_EUlOT_T0_E_JRdSt17integral_constantImLm0EEEESM_St14__invoke_otherOSO_DpOT1_(
    v8,
    (std::__detail::__variant::_Move_assign_base<false,double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::operator=::<lambda(auto:5&&, auto:6)> *)v7,
    v6,
    v9,
    v10,
    v11);
  return v5;
};
