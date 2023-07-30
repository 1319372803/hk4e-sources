// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/bind/storage.hpp

// Line 42: range 000000000BF73A18-000000000BF73AF7
void __fastcall boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>>::storage1(
        boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> > *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // rax
  char v6[80]; // [rsp+10h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 a1:42";
  *(_QWORD *)(v2 + 16) = boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>>::storage1;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v2 + 32) = a1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  this->a1_.t_ = *(common::minet::AServerMgr<GateserverSession> **)(v4 - 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 42: range 000000000BF75C6E-000000000BF75D4D
void __fastcall boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>>::storage1(
        boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<HttpSession>*> > *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // rax
  char v6[80]; // [rsp+10h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 a1:42";
  *(_QWORD *)(v2 + 16) = boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>>::storage1;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v2 + 32) = a1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  this->a1_.t_ = *(common::minet::AServerMgr<HttpSession> **)(v4 - 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 42: range 000000000BF25A88-000000000BF25B67
void __fastcall boost::_bi::storage1<boost::reference_wrapper<boost::shared_mutex::state_data>>::storage1(
        boost::_bi::storage1<boost::reference_wrapper<boost::shared_mutex::state_data> > *const this,
        boost::reference_wrapper<boost::shared_mutex::state_data> a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // rax
  char v6[80]; // [rsp+10h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 a1:42";
  *(_QWORD *)(v2 + 16) = boost::_bi::storage1<boost::reference_wrapper<boost::shared_mutex::state_data>>::storage1;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(boost::reference_wrapper<boost::shared_mutex::state_data> *)(v2 + 32) = a1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  this->a1_.t_ = *(boost::shared_mutex::state_data **)(v4 - 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 44: range 000000000BF95344-000000000BF9536E
void __cdecl boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::_bi::visit_each<boost::signals2::detail::tracked_objects_visitor,common::minet::AServerMgr<GateserverSession> *>(
    v,
    &this->a1_,
    0);
};

// Line 44: range 000000000BF99A4C-000000000BF99A76
void __cdecl boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<HttpSession>*> > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::_bi::visit_each<boost::signals2::detail::tracked_objects_visitor,common::minet::AServerMgr<HttpSession> *>(
    v,
    &this->a1_,
    0);
};

// Line 80: range 000000000BF6CDBA-000000000BF6CF16
void __fastcall boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::_bi::value<unsigned short>>::storage2(
        boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1,
        boost::_bi::value<short unsigned int> a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 2 5 a2:80 64 8 5 a1:80";
  *(_QWORD *)(v3 + 16) = boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::_bi::value<unsigned short>>::storage2;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234688015;
  v5[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v3 + 64) = a1;
  *(boost::_bi::value<short unsigned int> *)(v3 + 48) = a2;
  boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>>::storage1(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->a2_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->a2_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->a2_);
  }
  this->a2_.t_ = *(_WORD *)(v3 + 48);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 80: range 000000000BF702CA-000000000BF70426
void __fastcall boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::_bi::value<unsigned short>>::storage2(
        boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1,
        boost::_bi::value<short unsigned int> a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 2 5 a2:80 64 8 5 a1:80";
  *(_QWORD *)(v3 + 16) = boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::_bi::value<unsigned short>>::storage2;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234688015;
  v5[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v3 + 64) = a1;
  *(boost::_bi::value<short unsigned int> *)(v3 + 48) = a2;
  boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>>::storage1(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->a2_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->a2_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->a2_);
  }
  this->a2_.t_ = *(_WORD *)(v3 + 48);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 97: range 000000000BF6C046-000000000BF6C115
void __fastcall boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::storage2(
        boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1,
        boost::arg<1> a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 a1:97";
  *(_QWORD *)(v3 + 16) = boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::storage2;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v3 + 32) = a1;
  boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>>::storage1(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v3 + 32));
  if ( v6 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 97: range 000000000BF6FA54-000000000BF6FB23
void __fastcall boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::storage2(
        boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1,
        boost::arg<1> a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 a1:97";
  *(_QWORD *)(v3 + 16) = boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::storage2;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v3 + 32) = a1;
  boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>>::storage1(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v3 + 32));
  if ( v6 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 99: range 000000000BF8F0B0-000000000BF8F0D5
void __cdecl boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    this,
    v);
};

// Line 99: range 000000000BF9391E-000000000BF93943
void __cdecl boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    this,
    v);
};

// Line 104: range 000000000BF929FE-000000000BF92A1B
boost::arg<1> __cdecl boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::a2_()
{
  boost::arg<1> v0; // bl
  boost::arg<1> v2; // [rsp+Fh] [rbp-11h] BYREF

  boost::arg<1>::arg(&v2);
  return v0;
};

// Line 104: range 000000000BF94618-000000000BF94635
boost::arg<1> __cdecl boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::a2_()
{
  boost::arg<1> v0; // bl
  boost::arg<1> v2; // [rsp+Fh] [rbp-11h] BYREF

  boost::arg<1>::arg(&v2);
  return v0;
};

// Line 111: range 000000000BF7972E-000000000BF79801
void __fastcall boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void)>::storage2(
        boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)()> *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1,
        boost::arg<1> (*a3)(void))
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 6 a1:111";
  *(_QWORD *)(v3 + 16) = boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void)>::storage2;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v3 + 32) = a1;
  boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>>::storage1(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v3 + 32));
  if ( v6 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 111: range 000000000BF7BB56-000000000BF7BC29
void __fastcall boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void)>::storage2(
        boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)()> *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1,
        boost::arg<1> (*a3)(void))
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 6 a1:111";
  *(_QWORD *)(v3 + 16) = boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void)>::storage2;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v3 + 32) = a1;
  boost::_bi::storage1<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>>::storage1(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v3 + 32));
  if ( v6 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 118: range 000000000BFADC20-000000000BFADC3D
boost::arg<1> __cdecl boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void)>::a2_()
{
  boost::arg<1> v0; // bl
  boost::arg<1> v2; // [rsp+Fh] [rbp-11h] BYREF

  boost::arg<1>::arg(&v2);
  return v0;
};

// Line 118: range 000000000BFADE6C-000000000BFADE89
boost::arg<1> __cdecl boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void)>::a2_()
{
  boost::arg<1> v0; // bl
  boost::arg<1> v2; // [rsp+Fh] [rbp-11h] BYREF

  boost::arg<1>::arg(&v2);
  return v0;
};

// Line 129: range 000000000BF745A8-000000000BF74702
void __fastcall boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::storage3(
        boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1,
        boost::arg<1> (*a2)(void),
        boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 6 a1:129 64 8 6 a3:129";
  *(_QWORD *)(v4 + 16) = boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::storage3;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v4 + 32) = a1;
  *(boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)(v4 + 64) = a3;
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void)>::storage2(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v4 + 32),
    a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->a3_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->a3_.t_ = *(boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> **)(v4 + 64);
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 129: range 000000000BF7629C-000000000BF763F6
void __fastcall boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::storage3(
        boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1,
        boost::arg<1> (*a2)(void),
        boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 6 a1:129 64 8 6 a3:129";
  *(_QWORD *)(v4 + 16) = boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::storage3;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v4 + 32) = a1;
  *(boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)(v4 + 64) = a3;
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void)>::storage2(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v4 + 32),
    a2);
  if ( *(_BYTE *)(((unsigned __int64)&this->a3_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->a3_.t_ = *(boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> **)(v4 + 64);
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 146: range 000000000BF77874-000000000BF77977
void __fastcall boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::storage3(
        boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1,
        boost::arg<1> a2,
        boost::arg<2> a4,
        __int64 a5,
        __int64 a6,
        boost::arg<2> a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 1 6 a2:146 64 8 6 a1:146";
  *(_QWORD *)(v7 + 16) = boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::storage3;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v7 + 64) = a1;
  *(boost::arg<2> *)(v7 + 48) = a7;
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::storage2(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v7 + 64),
    (boost::arg<1>)this);
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 146: range 000000000BF7A9B0-000000000BF7AAB3
void __fastcall boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::storage3(
        boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1,
        boost::arg<1> a2,
        boost::arg<2> a4,
        __int64 a5,
        __int64 a6,
        boost::arg<2> a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 1 6 a2:146 64 8 6 a1:146";
  *(_QWORD *)(v7 + 16) = boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::storage3;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v7 + 64) = a1;
  *(boost::arg<2> *)(v7 + 48) = a7;
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::storage2(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v7 + 64),
    (boost::arg<1>)this);
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 148: range 000000000BF913B4-000000000BF913D9
void __cdecl boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    this,
    v);
};

// Line 148: range 000000000BF94432-000000000BF94457
void __cdecl boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    this,
    v);
};

// Line 153: range 000000000BFA1EB4-000000000BFA1ED1
boost::arg<2> __cdecl boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::a3_()
{
  boost::arg<2> v0; // bl
  boost::arg<2> v2; // [rsp+Fh] [rbp-11h] BYREF

  boost::arg<2>::arg(&v2);
  return v0;
};

// Line 153: range 000000000BFA59AC-000000000BFA59C9
boost::arg<2> __cdecl boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::a3_()
{
  boost::arg<2> v0; // bl
  boost::arg<2> v2; // [rsp+Fh] [rbp-11h] BYREF

  boost::arg<2>::arg(&v2);
  return v0;
};
