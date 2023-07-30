// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/jaeger_client_cpp/include/jaegertracing/metrics/NullStatsFactory.h

// Line 36: range 0000000014E7EB04-0000000014E7EB16
void __fastcall jaegertracing::metrics::NullStatsFactory::~NullStatsFactory(
        jaegertracing::metrics::NullStatsFactory *const this)
{
  operator delete(this, 8uLL);
};

// Line 43: range 0000000014E7E924-0000000014E7EAB2
std::unique_ptr<jaegertracing::metrics::Counter> __fastcall jaegertracing::metrics::NullStatsFactory::createCounter(
        unsigned __int64 a1,
        jaegertracing::metrics::NullStatsFactory *const this,
        const std::string *a3,
        const std::unordered_map<std::string,std::string> *a4)
{
  unsigned __int64 v4; // rax
  std::unique_ptr<jaegertracing::metrics::Counter> result; // rax
  const std::string *v6; // rdx
  const std::unordered_map<std::string,std::string> *v7; // rcx

  v4 = operator new(8uLL);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    *(_QWORD *)v4 = &`vtable for'jaegertracing::metrics::NullCounter + 2;
    if ( !*(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)a1 = v4;
      return (std::unique_ptr<jaegertracing::metrics::Counter>)a1;
    }
  }
  __asan_report_store8();
  result._M_t._M_t._M_head_impl = (jaegertracing::metrics::Counter *)jaegertracing::metrics::NullStatsFactory::createTimer(
                                                                       this,
                                                                       v6,
                                                                       v7)._M_t._M_t._M_head_impl;
  return result;
};
