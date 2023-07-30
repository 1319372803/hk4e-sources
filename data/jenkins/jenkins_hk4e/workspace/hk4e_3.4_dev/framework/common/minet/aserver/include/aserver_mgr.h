// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/aserver/include/aserver_mgr.h

// Line 141: range 000000000C6AB4F6-000000000C6AB521
void __cdecl common::minet::AServerMgr<GateserverSession>::setThreadStartCallback(
        common::minet::AServerMgr<GateserverSession> *const this,
        std::function<int()> *p_cb)
{
  std::function<int ()(void)>::operator=(&this->thread_start_callback_, p_cb);
};

// Line 141: range 000000000C6AE5A2-000000000C6AE5CD
void __cdecl common::minet::AServerMgr<HttpSession>::setThreadStartCallback(
        common::minet::AServerMgr<HttpSession> *const this,
        std::function<int()> *p_cb)
{
  std::function<int ()(void)>::operator=(&this->thread_start_callback_, p_cb);
};

// Line 142: range 000000000C6AB522-000000000C6AB54D
void __cdecl common::minet::AServerMgr<GateserverSession>::setThreadEndCallback(
        common::minet::AServerMgr<GateserverSession> *const this,
        std::function<void()> *p_cb)
{
  std::function<void ()(void)>::operator=(&this->thread_end_callback_, p_cb);
};

// Line 142: range 000000000C6AE5CE-000000000C6AE5F9
void __cdecl common::minet::AServerMgr<HttpSession>::setThreadEndCallback(
        common::minet::AServerMgr<HttpSession> *const this,
        std::function<void()> *p_cb)
{
  std::function<void ()(void)>::operator=(&this->thread_end_callback_, p_cb);
};
