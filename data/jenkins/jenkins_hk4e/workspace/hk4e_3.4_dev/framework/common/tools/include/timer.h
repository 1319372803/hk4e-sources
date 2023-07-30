// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/timer.h

// Line 35: range 0000000019B607FA-0000000019B60D29
void __fastcall common::tools::TimerProxy::~TimerProxy(common::tools::TimerProxy *const this)
{
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *v1; // rbx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_pi; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v3; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v4; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v5; // rax
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  char v9; // cl
  signed __int32 v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rdx
  common::tools::TimerProxy *v13; // rdi

  v1 = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this);
    goto LABEL_24;
  }
  this->_vptr_DoubleLinkNode = (int (**)(...))(&`vtable for'common::tools::TimerProxy + 2);
  this = (common::tools::TimerProxy *const)((char *)this + 208);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(this);
LABEL_25:
    __asan_report_load8(this);
LABEL_26:
    __asan_report_load8(this);
LABEL_27:
    __asan_report_load8(this);
LABEL_28:
    v6 = v1;
    __asan_report_store8(v1);
    goto LABEL_29;
  }
  M_pi = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v1[26]._M_pi;
  if ( M_pi != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&v1[28] )
    operator delete(M_pi);
  this = (common::tools::TimerProxy *const)&v1[16];
  if ( *(_BYTE *)(((unsigned __int64)&v1[16] >> 3) + 0x7FFF8000) )
    goto LABEL_25;
  v3 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v1[16]._M_pi;
  if ( v3 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&v1[18] )
    operator delete(v3);
  this = (common::tools::TimerProxy *const)&v1[12];
  if ( *(_BYTE *)(((unsigned __int64)&v1[12] >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  v4 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v1[12]._M_pi;
  if ( v4 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&v1[14] )
    operator delete(v4);
  this = (common::tools::TimerProxy *const)&v1[10];
  if ( *(_BYTE *)(((unsigned __int64)&v1[10] >> 3) + 0x7FFF8000) )
    goto LABEL_27;
  v5 = v1[10]._M_pi;
  if ( v5 )
    ((void (__fastcall *)(std::__weak_count<(__gnu_cxx::_Lock_policy)2> *, std::__weak_count<(__gnu_cxx::_Lock_policy)2> *, __int64))v5)(
      &v1[8],
      &v1[8],
      3LL);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    goto LABEL_28;
  v1->_M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(&`vtable for'common::tools::DoubleLinkNode + 2);
  common::tools::DoubleLinkNode::removeFromList((common::tools::DoubleLinkNode *const)v1);
  v6 = v1 + 5;
  if ( *(_BYTE *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    v8 = __asan_report_load8(v6);
    goto LABEL_30;
  }
  v7 = (unsigned __int64)v1[5]._M_pi;
  if ( !v7 )
  {
LABEL_22:
    operator delete(v1, 0xF0uLL);
    return;
  }
  v8 = v7 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_31;
  v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( (char)((v8 & 7) + 3) < v9 || !v9 )
  {
    v10 = _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF);
    goto LABEL_21;
  }
LABEL_30:
  v7 = v8;
  __asan_report_store4(v8);
LABEL_31:
  v11 = *(_BYTE *)(((v7 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v7 + 12) & 7) + 3) >= v11 && v11 )
  {
    v7 += 12LL;
    __asan_report_load4(v7);
    goto LABEL_35;
  }
  v10 = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v7 + 12) = v10 - 1;
LABEL_21:
  if ( v10 != 1 )
    goto LABEL_22;
LABEL_35:
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7);
  }
  else
  {
    v12 = *(_QWORD *)v7 + 24LL;
    if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    {
      (*(void (**)(void))(*(_QWORD *)v7 + 24LL))();
      goto LABEL_22;
    }
  }
  v13 = (common::tools::TimerProxy *)v12;
  __asan_report_load8(v12);
  common::tools::TimerProxy::~TimerProxy(v13);
};
