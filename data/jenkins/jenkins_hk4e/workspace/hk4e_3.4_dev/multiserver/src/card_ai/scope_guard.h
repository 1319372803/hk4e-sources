// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/scope_guard.h

// Line 29: range 000000000D7DB412-000000000D7DB474
void __cdecl BT::ScopeExit::ScopeExit<BT::BehaviorTree::tickRoot(void)::{lambda(void)#1}>::ScopeExit(
        BT::ScopeExit::ScopeExit<BT::BehaviorTree::tickRoot()::<lambda()> > *const this,
        BT::BehaviorTree::tickRoot::<lambda()> *fn)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  if ( *(_BYTE *)(((unsigned __int64)fn >> 3) + 0x7FFF8000) )
    __asan_report_load8(fn);
  this->m_fn.__this = fn->__this;
};

// Line 33: range 000000000D7D9528-000000000D7D9542
void __cdecl BT::ScopeExit::ScopeExit<BT::BehaviorTree::tickRoot(void)::{lambda(void)#1}>::~ScopeExit(
        BT::ScopeExit::ScopeExit<BT::BehaviorTree::tickRoot()::<lambda()> > *const this)
{
  BT::BehaviorTree::tickRoot(void)::{lambda(void)#1}::operator()(&this->m_fn);
};

// Line 53: range 000000000D7D94F0-000000000D7D9527
BT::ScopeExit::ScopeExit<BT::BehaviorTree::tickRoot()::<lambda()> > __cdecl BT::ScopeExit::MakeScopeExit::operator+=<BT::BehaviorTree::tickRoot(void)::{lambda(void)#1}>(
        BT::ScopeExit::MakeScopeExit *const this,
        BT::BehaviorTree::tickRoot::<lambda()> *fn)
{
  BT::BehaviorTree::tickRoot::<lambda()> *v2; // rdx
  std::remove_reference<BT::BehaviorTree::tickRoot()::<lambda()>&>::type *v3; // rdx

  v3 = std::move<BT::BehaviorTree::tickRoot(void)::{lambda(void)#1} &>(v2);
  BT::ScopeExit::ScopeExit<BT::BehaviorTree::tickRoot(void)::{lambda(void)#1}>::ScopeExit(
    (BT::ScopeExit::ScopeExit<BT::BehaviorTree::tickRoot()::<lambda()> > *const)this,
    v3);
  return (BT::ScopeExit::ScopeExit<BT::BehaviorTree::tickRoot()::<lambda()> >)this;
};
