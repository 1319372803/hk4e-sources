// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/scope_committer.hpp

// Line 25: range 000000001461EA56-000000001461EAC3
void __cdecl common::tools::ScopedCommitter::ScopedCommitter(
        common::tools::ScopedCommitter *const this,
        std::function<void()> *rollbacker)
{
  std::function<void()> *v2; // rax

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_committed_ = 0;
  v2 = std::move<std::function<void ()(void)> &>(rollbacker);
  std::function<void ()(void)>::function(&this->rollbacker_, v2);
};

// Line 28: range 000000001461EAC4-000000001461EB07
void __cdecl common::tools::ScopedCommitter::commit(common::tools::ScopedCommitter *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_committed_ = 1;
};

// Line 30: range 000000001461EB08-000000001461EBA1
void __cdecl common::tools::ScopedCommitter::~ScopedCommitter(common::tools::ScopedCommitter *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  if ( !this->is_committed_ && std::operator!=<void>(0LL, &this->rollbacker_) )
    std::function<void ()(void)>::operator()(&this->rollbacker_);
  std::function<void ()(void)>::~function(&this->rollbacker_);
};
