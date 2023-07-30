// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/detail/move.hpp

// Line 355: range 000000000BF6CF17-000000000BF6CFC7
boost::decay<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > >&>::type *__cdecl boost::thread_detail::decay_copy<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>> &>(
        boost::decay<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > >&>::type *retstr,
        boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > *t)
{
  boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > *n; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx

  n = t;
  if ( *(char *)(((unsigned __int64)t >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&t->l_.a2_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)t + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&t->l_.a2_ + 7) >> 3) + 0x7FFF8000) )
  {
    n = (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > *)__asan_report_load_n(t, 32LL, t, (*(char *)(((unsigned __int64)t >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&t->l_.a2_ + 7) >> 3) + 0x7FFF8000) != 0 && (((unsigned __int8)t + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&t->l_.a2_ + 7) >> 3) + 0x7FFF8000)));
  }
  v3 = *((_QWORD *)&n->f_.f_ + 1);
  retstr->f_.f_ = n->f_.f_;
  *((_QWORD *)&retstr->f_.f_ + 1) = v3;
  v4 = *(_QWORD *)&n->l_.a2_.t_;
  retstr->l_.a1_.t_ = n->l_.a1_.t_;
  *(_QWORD *)&retstr->l_.a2_.t_ = v4;
  return retstr;
};

// Line 355: range 000000000BF70427-000000000BF704D7
boost::decay<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > >&>::type *__cdecl boost::thread_detail::decay_copy<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>> &>(
        boost::decay<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > >&>::type *retstr,
        boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > *t)
{
  boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > *n; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx

  n = t;
  if ( *(char *)(((unsigned __int64)t >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&t->l_.a2_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)t + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&t->l_.a2_ + 7) >> 3) + 0x7FFF8000) )
  {
    n = (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > *)__asan_report_load_n(t, 32LL, t, (*(char *)(((unsigned __int64)t >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&t->l_.a2_ + 7) >> 3) + 0x7FFF8000) != 0 && (((unsigned __int8)t + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&t->l_.a2_ + 7) >> 3) + 0x7FFF8000)));
  }
  v3 = *((_QWORD *)&n->f_.f_ + 1);
  retstr->f_.f_ = n->f_.f_;
  *((_QWORD *)&retstr->f_.f_ + 1) = v3;
  v4 = *(_QWORD *)&n->l_.a2_.t_;
  retstr->l_.a1_.t_ = n->l_.a1_.t_;
  *(_QWORD *)&retstr->l_.a2_.t_ = v4;
  return retstr;
};
