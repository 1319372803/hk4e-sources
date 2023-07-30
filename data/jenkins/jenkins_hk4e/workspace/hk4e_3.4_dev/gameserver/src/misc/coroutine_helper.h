// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/coroutine_helper.h

// Line 25: range 000000001750E51C-000000001750E556
void __cdecl PlayerCoroExec::~PlayerCoroExec(PlayerCoroExec *const this)
{
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr(&this->coro_ptr_);
  std::queue<std::shared_ptr<common::minet::Packet>>::~queue(&this->packet_queue);
  std::enable_shared_from_this<PlayerCoroExec>::~enable_shared_from_this(this);
};

// Line 40: range 000000001720BF8E-000000001720BFBA
std::shared_ptr<common::minet::Coroutine> __cdecl PlayerCoroExec::getCoroPtr(const PlayerCoroExec *const this)
{
  const std::shared_ptr<common::minet::Coroutine> *v1; // rsi
  std::shared_ptr<common::minet::Coroutine> result; // rax

  std::shared_ptr<common::minet::Coroutine>::shared_ptr((std::shared_ptr<common::minet::Coroutine> *const)this, v1 + 6);
  result._M_ptr = (std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
