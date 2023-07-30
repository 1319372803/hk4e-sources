// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/tracing/tracing.h

// Line 50: range 0000000014E8C887-0000000014E8C947
SpanContextGuardMgr *__cdecl SpanContextGuardMgr::instance()
{
  std::_Deque_base<const jaegertracing::SpanContext*> *v1; // rbx

  if ( !`guard variable for'SpanContextGuardMgr::instance(void)::instance[__readfsqword(0)] )
  {
    v1 = (std::_Deque_base<const jaegertracing::SpanContext*> *)((char *)&SpanContextGuardMgr::instance(void)::instance
                                                               + __readfsqword(0));
    v1->_M_impl._M_map = 0LL;
    v1->_M_impl._M_map_size = 0LL;
    v1->_M_impl._M_start._M_cur = 0LL;
    v1->_M_impl._M_start._M_first = 0LL;
    v1->_M_impl._M_start._M_last = 0LL;
    v1->_M_impl._M_start._M_node = 0LL;
    v1->_M_impl._M_finish._M_cur = 0LL;
    v1->_M_impl._M_finish._M_first = 0LL;
    v1->_M_impl._M_finish._M_last = 0LL;
    v1->_M_impl._M_finish._M_node = 0LL;
    std::_Deque_base<jaegertracing::SpanContext const*>::_M_initialize_map(v1, 0LL);
    `guard variable for'SpanContextGuardMgr::instance(void)::instance[__readfsqword(0)] = 1;
    __cxa_thread_atexit((void (__fastcall *)(void *))SpanContextGuardMgr::~SpanContextGuardMgr, v1, &_dso_handle);
  }
  return (SpanContextGuardMgr *)((char *)&SpanContextGuardMgr::instance(void)::instance + __readfsqword(0));
};
