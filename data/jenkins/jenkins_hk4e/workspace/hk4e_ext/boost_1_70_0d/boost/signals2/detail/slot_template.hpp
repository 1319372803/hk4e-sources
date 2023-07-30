// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/detail/slot_template.hpp

// Line 37: range 000000000BF83D76-000000000BF83DD9
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::slot(
        boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *const this,
        const boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *a2)
{
  boost::signals2::slot_base::slot_base(this, a2);
  boost::function<int ()(common::minet::AServerSession *)>::function(&this->_slot_function, &a2->_slot_function);
};

// Line 37: range 000000000BF638C8-000000000BF638F2
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::~slot(
        boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *const this)
{
  boost::function<int ()(common::minet::AServerSession *)>::~function(&this->_slot_function);
  boost::signals2::slot_base::~slot_base(this);
};

// Line 37: range 000000000BF849BE-000000000BF84A21
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::slot(
        boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *const this,
        const boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *a2)
{
  boost::signals2::slot_base::slot_base(this, a2);
  boost::function<int ()(common::minet::AServerSession *,unsigned int)>::function(
    &this->_slot_function,
    &a2->_slot_function);
};

// Line 37: range 000000000BF63910-000000000BF6393A
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::~slot(
        boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *const this)
{
  boost::function<int ()(common::minet::AServerSession *,unsigned int)>::~function(&this->_slot_function);
  boost::signals2::slot_base::~slot_base(this);
};

// Line 83: range 000000000BF6AD40-000000000BF6ADB4
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::slot<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
        boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *const this,
        const boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *f)
{
  boost::signals2::slot_base::slot_base(this);
  boost::function<int ()(common::minet::AServerSession *)>::function(&this->_slot_function);
  boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
    this,
    f);
};

// Line 83: range 000000000BF6ECDE-000000000BF6ED52
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::slot<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
        boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *const this,
        const boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *f)
{
  boost::signals2::slot_base::slot_base(this);
  boost::function<int ()(common::minet::AServerSession *)>::function(&this->_slot_function);
  boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
    this,
    f);
};

// Line 83: range 000000000BF6B596-000000000BF6B60A
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::slot<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *const this,
        const boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *f)
{
  boost::signals2::slot_base::slot_base(this);
  boost::function<int ()(common::minet::AServerSession *,unsigned int)>::function(&this->_slot_function);
  boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
    this,
    f);
};

// Line 83: range 000000000BF6F3EC-000000000BF6F460
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::slot<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *const this,
        const boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *f)
{
  boost::signals2::slot_base::slot_base(this);
  boost::function<int ()(common::minet::AServerSession *,unsigned int)>::function(&this->_slot_function);
  boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
    this,
    f);
};

// Line 158: range 000000000BF7201A-000000000BF72195
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
        boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *const this,
        const boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 n; // rax
  boost::function<int(common::minet::AServerSession*)> *p_slot_function; // rdi
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 11 visitor:161";
  *(_QWORD *)(v2 + 16) = boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::signals2::detail::tag_type<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(f);
  n = (unsigned __int64)boost::signals2::detail::get_invocable_slot<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
                          f,
                          (boost::signals2::detail::value_tag)f);
  p_slot_function = &this->_slot_function;
  if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0 && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
  {
    p_slot_function = (boost::function<int(common::minet::AServerSession*)> *)n;
    n = __asan_report_load_n(
          n,
          24LL,
          n,
          (*(char *)((n >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
                                                               && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000)));
  }
  boost::function<int ()(common::minet::AServerSession *)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
    p_slot_function,
    *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)n);
  boost::signals2::detail::tracked_objects_visitor::tracked_objects_visitor(
    (boost::signals2::detail::tracked_objects_visitor *const)(v2 + 32),
    this);
  boost::visit_each<boost::signals2::detail::tracked_objects_visitor,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
    (boost::signals2::detail::tracked_objects_visitor *)(v2 + 32),
    f);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 158: range 000000000BF74D20-000000000BF74E9B
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
        boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *const this,
        const boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 n; // rax
  boost::function<int(common::minet::AServerSession*)> *p_slot_function; // rdi
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 11 visitor:161";
  *(_QWORD *)(v2 + 16) = boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::signals2::detail::tag_type<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(f);
  n = (unsigned __int64)boost::signals2::detail::get_invocable_slot<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
                          f,
                          (boost::signals2::detail::value_tag)f);
  p_slot_function = &this->_slot_function;
  if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0 && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
  {
    p_slot_function = (boost::function<int(common::minet::AServerSession*)> *)n;
    n = __asan_report_load_n(
          n,
          24LL,
          n,
          (*(char *)((n >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
                                                               && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000)));
  }
  boost::function<int ()(common::minet::AServerSession *)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
    p_slot_function,
    *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)n);
  boost::signals2::detail::tracked_objects_visitor::tracked_objects_visitor(
    (boost::signals2::detail::tracked_objects_visitor *const)(v2 + 32),
    this);
  boost::visit_each<boost::signals2::detail::tracked_objects_visitor,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
    (boost::signals2::detail::tracked_objects_visitor *)(v2 + 32),
    f);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 158: range 000000000BF72982-000000000BF72AFD
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *const this,
        const boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 n; // rax
  boost::function<int(common::minet::AServerSession*,unsigned int)> *p_slot_function; // rdi
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 11 visitor:161";
  *(_QWORD *)(v2 + 16) = boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::signals2::detail::tag_type<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(f);
  n = (unsigned __int64)boost::signals2::detail::get_invocable_slot<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
                          f,
                          (boost::signals2::detail::value_tag)f);
  p_slot_function = &this->_slot_function;
  if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0 && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
  {
    p_slot_function = (boost::function<int(common::minet::AServerSession*,unsigned int)> *)n;
    n = __asan_report_load_n(
          n,
          24LL,
          n,
          (*(char *)((n >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
                                                               && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000)));
  }
  boost::function<int ()(common::minet::AServerSession *,unsigned int)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
    p_slot_function,
    *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)n);
  boost::signals2::detail::tracked_objects_visitor::tracked_objects_visitor(
    (boost::signals2::detail::tracked_objects_visitor *const)(v2 + 32),
    this);
  boost::visit_each<boost::signals2::detail::tracked_objects_visitor,boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
    (boost::signals2::detail::tracked_objects_visitor *)(v2 + 32),
    f);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 158: range 000000000BF75364-000000000BF754DF
void __cdecl boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *const this,
        const boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 n; // rax
  boost::function<int(common::minet::AServerSession*,unsigned int)> *p_slot_function; // rdi
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 11 visitor:161";
  *(_QWORD *)(v2 + 16) = boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::init_slot_function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::signals2::detail::tag_type<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(f);
  n = (unsigned __int64)boost::signals2::detail::get_invocable_slot<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
                          f,
                          (boost::signals2::detail::value_tag)f);
  p_slot_function = &this->_slot_function;
  if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0 && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
  {
    p_slot_function = (boost::function<int(common::minet::AServerSession*,unsigned int)> *)n;
    n = __asan_report_load_n(
          n,
          24LL,
          n,
          (*(char *)((n >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
                                                               && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000)));
  }
  boost::function<int ()(common::minet::AServerSession *,unsigned int)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
    p_slot_function,
    *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)n);
  boost::signals2::detail::tracked_objects_visitor::tracked_objects_visitor(
    (boost::signals2::detail::tracked_objects_visitor *const)(v2 + 32),
    this);
  boost::visit_each<boost::signals2::detail::tracked_objects_visitor,boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
    (boost::signals2::detail::tracked_objects_visitor *)(v2 + 32),
    f);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
