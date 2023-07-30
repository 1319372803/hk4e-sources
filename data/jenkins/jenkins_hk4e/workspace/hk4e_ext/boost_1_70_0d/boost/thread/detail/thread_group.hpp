// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/detail/thread_group.hpp

// Line 29: range 000000000BEFFB3C-000000000BEFFB89
void __cdecl boost::thread_group::thread_group(boost::thread_group *const this)
{
  std::list<boost::thread *>::list(&this->threads);
  boost::shared_mutex::shared_mutex(&this->m);
};

// Line 30: range 000000000BEFFB8A-000000000BEFFD22
void __cdecl boost::thread_group::~thread_group(boost::thread_group *const this)
{
  std::_List_iterator<boost::thread*>::_Self *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_List_iterator<boost::thread*>::reference v4; // rax
  boost::thread *v5; // r14
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (std::_List_iterator<boost::thread*>::_Self *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = (std::_List_iterator<boost::thread*>::_Self *)v2;
  }
  v1->_M_node = (std::__detail::_List_node_base *)1102416563;
  v1[1]._M_node = (std::__detail::_List_node_base *)"2 32 8 5 it:32 64 8 6 end:32";
  v1[2]._M_node = (std::__detail::_List_node_base *)boost::thread_group::~thread_group;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  v1[4]._M_node = std::list<boost::thread *>::begin(&this->threads)._M_node;
  v1[8]._M_node = std::list<boost::thread *>::end(&this->threads)._M_node;
  while ( std::operator!=(v1 + 4, v1 + 8) )
  {
    v4 = std::_List_iterator<boost::thread *>::operator*(v1 + 4);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = *v4;
    if ( *v4 )
    {
      boost::thread::~thread(*v4);
      operator delete(v5, 0x10uLL);
    }
    std::_List_iterator<boost::thread *>::operator++(v1 + 4);
  }
  boost::shared_mutex::~shared_mutex(&this->m);
  std::list<boost::thread *>::~list(&this->threads);
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v1->_M_node = (std::__detail::_List_node_base *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 76: range 000000000BF5D518-000000000BF5D783
boost::thread *__fastcall boost::thread_group::create_thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>>(
        boost::thread_group *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > threadfunc)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::thread *v5; // r14
  boost::thread *v6; // r14
  boost::thread *result; // rax
  std::list<boost::thread*>::value_type __x[3]; // [rsp+10h] [rbp-100h] BYREF
  boost::thread **v9; // [rsp+28h] [rbp-E8h]
  boost::thread *v10; // [rsp+30h] [rbp-E0h]
  boost::thread *v11; // [rsp+38h] [rbp-D8h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 guard:78 64 8 13 new_thread:79 96 32 13 threadfunc:76";
  *(_QWORD *)(v2 + 16) = boost::thread_group::create_thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  *(boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > *)(v2 + 96) = threadfunc;
  boost::lock_guard<boost::shared_mutex>::lock_guard((boost::lock_guard<boost::shared_mutex> *const)(v2 + 32), &this->m);
  v5 = (boost::thread *)operator new(0x10uLL);
  boost::thread::thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>> &>(
    v5,
    (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > *)(v2 + 96));
  __x[1] = v5;
  __x[2] = 0LL;
  v9 = (boost::thread **)(v2 + 64);
  v10 = v5;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v9 = v10;
  __x[0] = *(std::list<boost::thread*>::value_type *)(v2 + 64);
  std::list<boost::thread *>::push_back(&this->threads, __x);
  v11 = *(boost::thread **)(v2 + 64);
  *(_QWORD *)(v2 + 64) = 0LL;
  v6 = v11;
  boost::movelib::unique_ptr<boost::thread,boost::movelib::default_delete<boost::thread>>::~unique_ptr((boost::movelib::unique_ptr<boost::thread,boost::movelib::default_delete<boost::thread> > *const)(v2 + 64));
  boost::lock_guard<boost::shared_mutex>::~lock_guard((boost::lock_guard<boost::shared_mutex> *const)(v2 + 32));
  result = v6;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 76: range 000000000BF607F6-000000000BF60A61
boost::thread *__fastcall boost::thread_group::create_thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>>(
        boost::thread_group *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > threadfunc)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::thread *v5; // r14
  boost::thread *v6; // r14
  boost::thread *result; // rax
  std::list<boost::thread*>::value_type __x[3]; // [rsp+10h] [rbp-100h] BYREF
  boost::thread **v9; // [rsp+28h] [rbp-E8h]
  boost::thread *v10; // [rsp+30h] [rbp-E0h]
  boost::thread *v11; // [rsp+38h] [rbp-D8h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 guard:78 64 8 13 new_thread:79 96 32 13 threadfunc:76";
  *(_QWORD *)(v2 + 16) = boost::thread_group::create_thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  *(boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > *)(v2 + 96) = threadfunc;
  boost::lock_guard<boost::shared_mutex>::lock_guard((boost::lock_guard<boost::shared_mutex> *const)(v2 + 32), &this->m);
  v5 = (boost::thread *)operator new(0x10uLL);
  boost::thread::thread<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>> &>(
    v5,
    (boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > *)(v2 + 96));
  __x[1] = v5;
  __x[2] = 0LL;
  v9 = (boost::thread **)(v2 + 64);
  v10 = v5;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *v9 = v10;
  __x[0] = *(std::list<boost::thread*>::value_type *)(v2 + 64);
  std::list<boost::thread *>::push_back(&this->threads, __x);
  v11 = *(boost::thread **)(v2 + 64);
  *(_QWORD *)(v2 + 64) = 0LL;
  v6 = v11;
  boost::movelib::unique_ptr<boost::thread,boost::movelib::default_delete<boost::thread>>::~unique_ptr((boost::movelib::unique_ptr<boost::thread,boost::movelib::default_delete<boost::thread> > *const)(v2 + 64));
  boost::lock_guard<boost::shared_mutex>::~lock_guard((boost::lock_guard<boost::shared_mutex> *const)(v2 + 32));
  result = v6;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 107: range 000000000BEFFD24-000000000BEFFF25
void __cdecl boost::thread_group::join_all(boost::thread_group *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  boost::thread **v4; // rax
  boost::thread *const *v5; // rax
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 6 it:114 64 8 7 end:114 96 16 9 guard:112";
  *(_QWORD *)(v1 + 16) = boost::thread_group::join_all;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  boost::shared_lock<boost::shared_mutex>::shared_lock(
    (boost::shared_lock<boost::shared_mutex> *const)(v1 + 96),
    &this->m);
  *(std::list<boost::thread*>::iterator *)(v1 + 32) = std::list<boost::thread *>::begin(&this->threads);
  *(std::list<boost::thread*>::iterator *)(v1 + 64) = std::list<boost::thread *>::end(&this->threads);
  while ( std::operator!=(
            (const std::_List_iterator<boost::thread*>::_Self *)(v1 + 32),
            (const std::_List_iterator<boost::thread*>::_Self *)(v1 + 64)) )
  {
    v4 = std::_List_iterator<boost::thread *>::operator*((const std::_List_iterator<boost::thread*> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (unsigned __int8)boost::thread::joinable(*v4) )
    {
      v5 = std::_List_iterator<boost::thread *>::operator*((const std::_List_iterator<boost::thread*> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      boost::thread::join(*v5);
    }
    std::_List_iterator<boost::thread *>::operator++((std::_List_iterator<boost::thread*> *const)(v1 + 32));
  }
  boost::shared_lock<boost::shared_mutex>::~shared_lock((boost::shared_lock<boost::shared_mutex> *const)(v1 + 96));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
