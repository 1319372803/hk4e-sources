// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/opentracing-cpp/include/opentracing/variant/recursive_wrapper.hpp

// Line 49: range 000000000C849A2E-000000000C849A84
void __cdecl opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>::~recursive_wrapper(
        opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > *const this)
{
  std::unordered_map<std::string,opentracing::v3::Value> *p; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p = this->p_;
  if ( this->p_ )
  {
    std::unordered_map<std::string,opentracing::v3::Value>::~unordered_map(this->p_);
    operator delete(p, 0x38uLL);
  }
};

// Line 470: range 000000000C84756A-000000000C8475C0
void __cdecl opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>::~recursive_wrapper(
        opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> > *const this)
{
  std::vector<opentracing::v3::Value> *p; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p = this->p_;
  if ( this->p_ )
  {
    std::vector<opentracing::v3::Value>::~vector(this->p_);
    operator delete(p, 0x18uLL);
  }
};
