// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/resource_box.cpp

// Line 114: range 0000000014E402F0-0000000014E4046C
int32_t __cdecl ResourceBox::isRun()
{
  unsigned __int64 v0; // rdx

  if ( *(_BYTE *)(((unsigned __int64)ResourceBox::network_mgr_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(ResourceBox::network_mgr_ptr._M_ptr);
    goto LABEL_5;
  }
  v0 = (unsigned __int64)(ResourceBox::network_mgr_ptr._M_ptr->_vptr_NetworkMgrBase + 5);
  if ( *(_BYTE *)((v0 >> 3) + 0x7FFF8000) )
  {
LABEL_5:
    __asan_report_load8(v0);
    JUMPOUT(0x14E4033DLL);
  }
  return (*((unsigned __int8 (**)(void))ResourceBox::network_mgr_ptr._M_ptr->_vptr_NetworkMgrBase + 5))();
};

// Line 138: range 0000000014E40472-0000000014E404CF
int32_t __cdecl ResourceBox::fini()
{
  if ( ResourceBox::mysql_mgr_ptr._M_ptr )
    common::midb::MySqlMgrT<std::mutex>::final(ResourceBox::mysql_mgr_ptr._M_ptr);
  if ( ResourceBox::redis_mgr_ptr._M_ptr )
    common::midb::RedisMgr::final(ResourceBox::redis_mgr_ptr._M_ptr);
  if ( ResourceBox::monitor_report_ptr._M_ptr )
    MonitorReport::final(ResourceBox::monitor_report_ptr._M_ptr);
  if ( ResourceBox::tracing_mgr_ptr._M_ptr )
    TracingMgr::final(ResourceBox::tracing_mgr_ptr._M_ptr);
  return 0;
};

// Line 160: range 0000000014E404D0-0000000014E416EA
void __cdecl ResourceBox::destroy()
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rbx
  volatile signed __int32 *p_M_use_count; // rdi
  char v2; // dl
  signed __int32 M_use_count; // eax
  volatile signed __int32 *v4; // rdi
  char v5; // dl
  signed __int32 v6; // eax
  volatile signed __int32 *v7; // rdi
  char v8; // dl
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rdi
  char v11; // dl
  signed __int32 v12; // eax
  volatile signed __int32 *v13; // rdi
  char v14; // dl
  signed __int32 v15; // eax
  volatile signed __int32 *v16; // rdi
  char v17; // dl
  signed __int32 v18; // eax
  char v19; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v21; // dl
  signed __int32 M_weak_count; // eax
  char v23; // dl
  char v24; // dl
  volatile signed __int32 *v25; // rdi
  char v26; // dl
  signed __int32 v27; // eax
  char v28; // dl
  char v29; // dl
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  signed __int32 v32; // eax
  char v33; // dl
  char v34; // dl
  volatile signed __int32 *v35; // rdi
  char v36; // dl
  signed __int32 v37; // eax
  char v38; // dl
  char v39; // dl
  volatile signed __int32 *v40; // rdi
  char v41; // dl
  signed __int32 v42; // eax
  char v43; // dl
  char v44; // dl
  volatile signed __int32 *v45; // rdi
  char v46; // dl
  signed __int32 v47; // eax
  unsigned __int64 v48; // rdi
  char v49; // dl

  ResourceBox::network_mgr_ptr._M_ptr = 0LL;
  M_pi = ResourceBox::network_mgr_ptr._M_refcount._M_pi;
  ResourceBox::network_mgr_ptr._M_refcount._M_pi = 0LL;
  if ( !M_pi )
    goto LABEL_7;
  p_M_use_count = &M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v2 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v2 || !v2 )
    {
      M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
      goto LABEL_6;
    }
    __asan_report_store4(p_M_use_count);
  }
  v19 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v19 && v19 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
LABEL_43:
    if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      p_M_weak_count = (volatile signed __int32 *)M_pi;
      __asan_report_load8(M_pi);
    }
    else
    {
      p_M_weak_count = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
        p_M_weak_count = &M_pi->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_56;
        v21 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v21 || !v21 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_49;
        }
LABEL_55:
        __asan_report_store4(p_M_weak_count);
LABEL_56:
        v23 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v23 && v23 )
        {
          __asan_report_load4(&M_pi->_M_weak_count);
          goto LABEL_60;
        }
        M_weak_count = M_pi->_M_weak_count;
        M_pi->_M_weak_count = M_weak_count - 1;
LABEL_49:
        if ( M_weak_count != 1 )
          goto LABEL_7;
        if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        {
          v4 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base
             + 3))(M_pi);
            goto LABEL_7;
          }
LABEL_61:
          __asan_report_load8(v4);
          goto LABEL_62;
        }
LABEL_60:
        v4 = (volatile signed __int32 *)M_pi;
        __asan_report_load8(M_pi);
        goto LABEL_61;
      }
    }
    __asan_report_load8(p_M_weak_count);
    goto LABEL_55;
  }
  M_use_count = M_pi->_M_use_count;
  M_pi->_M_use_count = M_use_count - 1;
LABEL_6:
  if ( M_use_count == 1 )
    goto LABEL_43;
LABEL_7:
  ResourceBox::config_mgr_ptr._M_ptr = 0LL;
  M_pi = ResourceBox::config_mgr_ptr._M_refcount._M_pi;
  ResourceBox::config_mgr_ptr._M_refcount._M_pi = 0LL;
  if ( !M_pi )
    goto LABEL_13;
  v4 = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_63;
  v5 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v4 & 7) + 3) < v5 || !v5 )
  {
    v6 = _InterlockedExchangeAdd(v4, 0xFFFFFFFF);
    goto LABEL_12;
  }
LABEL_62:
  __asan_report_store4(v4);
LABEL_63:
  v24 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v24 && v24 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_67;
  }
  v6 = M_pi->_M_use_count;
  M_pi->_M_use_count = v6 - 1;
LABEL_12:
  if ( v6 != 1 )
    goto LABEL_13;
LABEL_67:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v25 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_78;
  }
  v25 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v25);
    goto LABEL_79;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  v25 = &M_pi->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_80;
  v26 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v25 & 7) + 3) < v26 || !v26 )
  {
    v27 = _InterlockedExchangeAdd(v25, 0xFFFFFFFF);
    goto LABEL_73;
  }
LABEL_79:
  __asan_report_store4(v25);
LABEL_80:
  v28 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v28 && v28 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
LABEL_84:
    v7 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_85;
  }
  v27 = M_pi->_M_weak_count;
  M_pi->_M_weak_count = v27 - 1;
LABEL_73:
  if ( v27 != 1 )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_84;
  v7 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_load8(v7);
    goto LABEL_86;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
LABEL_13:
  ResourceBox::mysql_mgr_ptr._M_ptr = 0LL;
  M_pi = ResourceBox::mysql_mgr_ptr._M_refcount._M_pi;
  ResourceBox::mysql_mgr_ptr._M_refcount._M_pi = 0LL;
  if ( M_pi )
  {
    v7 = &M_pi->_M_use_count;
    if ( !&_pthread_key_create )
      goto LABEL_87;
    v8 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v7 & 7) + 3) < v8 || !v8 )
    {
      v9 = _InterlockedExchangeAdd(v7, 0xFFFFFFFF);
      goto LABEL_18;
    }
LABEL_86:
    __asan_report_store4(v7);
LABEL_87:
    v29 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v29 && v29 )
    {
      __asan_report_load4(&M_pi->_M_use_count);
      goto LABEL_91;
    }
    v9 = M_pi->_M_use_count;
    M_pi->_M_use_count = v9 - 1;
LABEL_18:
    if ( v9 != 1 )
      goto LABEL_19;
LABEL_91:
    if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      v30 = (volatile signed __int32 *)M_pi;
      __asan_report_load8(M_pi);
    }
    else
    {
      v30 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
        v30 = &M_pi->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_104;
        v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
        {
          v32 = _InterlockedExchangeAdd(v30, 0xFFFFFFFF);
          goto LABEL_97;
        }
LABEL_103:
        __asan_report_store4(v30);
LABEL_104:
        v33 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v33 && v33 )
        {
          __asan_report_load4(&M_pi->_M_weak_count);
          goto LABEL_108;
        }
        v32 = M_pi->_M_weak_count;
        M_pi->_M_weak_count = v32 - 1;
LABEL_97:
        if ( v32 != 1 )
          goto LABEL_19;
        if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        {
          v10 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base
             + 3))(M_pi);
            goto LABEL_19;
          }
LABEL_109:
          __asan_report_load8(v10);
          goto LABEL_110;
        }
LABEL_108:
        v10 = (volatile signed __int32 *)M_pi;
        __asan_report_load8(M_pi);
        goto LABEL_109;
      }
    }
    __asan_report_load8(v30);
    goto LABEL_103;
  }
LABEL_19:
  ResourceBox::redis_mgr_ptr._M_ptr = 0LL;
  M_pi = ResourceBox::redis_mgr_ptr._M_refcount._M_pi;
  ResourceBox::redis_mgr_ptr._M_refcount._M_pi = 0LL;
  if ( !M_pi )
    goto LABEL_25;
  v10 = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_111;
  v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v10 & 7) + 3) < v11 || !v11 )
  {
    v12 = _InterlockedExchangeAdd(v10, 0xFFFFFFFF);
    goto LABEL_24;
  }
LABEL_110:
  __asan_report_store4(v10);
LABEL_111:
  v34 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v34 && v34 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_115;
  }
  v12 = M_pi->_M_use_count;
  M_pi->_M_use_count = v12 - 1;
LABEL_24:
  if ( v12 != 1 )
    goto LABEL_25;
LABEL_115:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v35 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_126;
  }
  v35 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
  {
LABEL_126:
    __asan_report_load8(v35);
    goto LABEL_127;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  v35 = &M_pi->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_128;
  v36 = *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v35 & 7) + 3) < v36 || !v36 )
  {
    v37 = _InterlockedExchangeAdd(v35, 0xFFFFFFFF);
    goto LABEL_121;
  }
LABEL_127:
  __asan_report_store4(v35);
LABEL_128:
  v38 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v38 && v38 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
LABEL_132:
    v13 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_133;
  }
  v37 = M_pi->_M_weak_count;
  M_pi->_M_weak_count = v37 - 1;
LABEL_121:
  if ( v37 != 1 )
    goto LABEL_25;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_132;
  v13 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
LABEL_133:
    __asan_report_load8(v13);
    goto LABEL_134;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
LABEL_25:
  ResourceBox::monitor_report_ptr._M_ptr = 0LL;
  M_pi = ResourceBox::monitor_report_ptr._M_refcount._M_pi;
  ResourceBox::monitor_report_ptr._M_refcount._M_pi = 0LL;
  if ( M_pi )
  {
    v13 = &M_pi->_M_use_count;
    if ( !&_pthread_key_create )
      goto LABEL_135;
    v14 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v13 & 7) + 3) < v14 || !v14 )
    {
      v15 = _InterlockedExchangeAdd(v13, 0xFFFFFFFF);
      goto LABEL_30;
    }
LABEL_134:
    __asan_report_store4(v13);
LABEL_135:
    v39 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v39 && v39 )
    {
      __asan_report_load4(&M_pi->_M_use_count);
      goto LABEL_139;
    }
    v15 = M_pi->_M_use_count;
    M_pi->_M_use_count = v15 - 1;
LABEL_30:
    if ( v15 != 1 )
      goto LABEL_31;
LABEL_139:
    if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      v40 = (volatile signed __int32 *)M_pi;
      __asan_report_load8(M_pi);
    }
    else
    {
      v40 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
        v40 = &M_pi->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_152;
        v41 = *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v40 & 7) + 3) < v41 || !v41 )
        {
          v42 = _InterlockedExchangeAdd(v40, 0xFFFFFFFF);
          goto LABEL_145;
        }
LABEL_151:
        __asan_report_store4(v40);
LABEL_152:
        v43 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v43 && v43 )
        {
          __asan_report_load4(&M_pi->_M_weak_count);
          goto LABEL_156;
        }
        v42 = M_pi->_M_weak_count;
        M_pi->_M_weak_count = v42 - 1;
LABEL_145:
        if ( v42 != 1 )
          goto LABEL_31;
        if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        {
          v16 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base
             + 3))(M_pi);
            goto LABEL_31;
          }
LABEL_157:
          __asan_report_load8(v16);
          goto LABEL_158;
        }
LABEL_156:
        v16 = (volatile signed __int32 *)M_pi;
        __asan_report_load8(M_pi);
        goto LABEL_157;
      }
    }
    __asan_report_load8(v40);
    goto LABEL_151;
  }
LABEL_31:
  ResourceBox::tracing_mgr_ptr._M_ptr = 0LL;
  M_pi = ResourceBox::tracing_mgr_ptr._M_refcount._M_pi;
  ResourceBox::tracing_mgr_ptr._M_refcount._M_pi = 0LL;
  if ( !M_pi )
    return;
  v16 = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_159;
  v17 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v16 & 7) + 3) < v17 || !v17 )
  {
    v18 = _InterlockedExchangeAdd(v16, 0xFFFFFFFF);
    goto LABEL_36;
  }
LABEL_158:
  __asan_report_store4(v16);
LABEL_159:
  v44 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v44 && v44 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_163;
  }
  v18 = M_pi->_M_use_count;
  M_pi->_M_use_count = v18 - 1;
LABEL_36:
  if ( v18 != 1 )
    return;
LABEL_163:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v45 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_174;
  }
  v45 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
  {
LABEL_174:
    __asan_report_load8(v45);
    goto LABEL_175;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  v45 = &M_pi->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_176;
  v46 = *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v45 & 7) + 3) < v46 || !v46 )
  {
    v47 = _InterlockedExchangeAdd(v45, 0xFFFFFFFF);
    goto LABEL_169;
  }
LABEL_175:
  __asan_report_store4(v45);
LABEL_176:
  v49 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v49 && v49 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
    goto LABEL_180;
  }
  v47 = M_pi->_M_weak_count;
  M_pi->_M_weak_count = v47 - 1;
LABEL_169:
  if ( v47 == 1 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      v48 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
      if ( !*(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
        return;
      }
LABEL_181:
      __asan_report_load8(v48);
      JUMPOUT(0x14E40E51LL);
    }
LABEL_180:
    v48 = (unsigned __int64)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_181;
  }
};

// Line 170: range 0000000014E416F0-0000000014E42949
void __cdecl ResourceBox::monitorReport()
{
  size_t M_left; // rbp
  __int64 v1; // r12
  __int64 v2; // r14
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r15
  std::__shared_ptr<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *v4; // rdx
  std::__shared_ptr<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  size_t v8; // rax
  __int64 v9; // rax
  std::pair<std::_Rb_tree_iterator<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > >,bool> v10; // rax
  __int64 v11; // r14
  char v12; // al
  std::forward_iterator_tag v13; // cl
  std::string *v14; // rdi
  std::string::size_type v15; // rax
  std::string::size_type M_allocated_capacity; // rsi
  std::string::size_type v17; // rsi
  unsigned __int64 v18; // rax
  std::string::size_type M_string_length; // rdx
  __m128i *v20; // rcx
  __m128i *v21; // rdi
  char v22; // dl
  uint32_t Size; // eax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v24; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v25; // r9
  unsigned __int64 v26; // rdx
  size_t *v27; // rcx
  size_t *v28; // rdi
  size_t v29; // rcx
  int v30; // eax
  char v31; // cl
  char *v32; // rdi
  char *i; // rax
  std::string::size_type v34; // rdi
  void *v35; // rdi
  size_t v36; // r12
  size_t v37; // rdx
  const void *v38; // rsi
  void *v39; // rdi
  void *v40; // rdi
  char v41; // dl
  char *v42; // r15
  std::__shared_ptr<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v43; // r15
  std::_Rb_tree_node_base::_Base_ptr *p_M_left; // rdi
  std::forward_iterator_tag v45; // cl
  std::string *v46; // rdi
  std::string::size_type v47; // rax
  std::string::size_type v48; // rcx
  std::string::size_type v49; // rcx
  unsigned __int64 v50; // rax
  std::string::size_type v51; // rdx
  __m128i *v52; // rcx
  __m128i *v53; // rdi
  char v54; // dl
  uint32_t v55; // eax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v56; // rax
  std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::iterator v57; // r9
  unsigned __int64 v58; // rdx
  size_t *v59; // rcx
  size_t *v60; // rdi
  size_t v61; // rcx
  int v62; // eax
  char v63; // cl
  char *v64; // rdi
  char v65; // al
  char *j; // rax
  __int64 v67; // r14
  std::string::size_type v68; // rdi
  void *v69; // rdi
  size_t v70; // r12
  __int64 v71; // r12
  size_t v72; // rdx
  const void *v73; // rsi
  void *v74; // rdi
  size_t v75; // rbp
  __int64 v76; // r12
  void *v77; // rdi
  size_t v78; // rbp
  char v79; // dl
  char *v80; // r15
  std::string::size_type v81; // rbp
  std::tuple<const std::string&> *__args_1; // [rsp+0h] [rbp-1F8h]
  std::tuple<const std::string&> *__args_1a; // [rsp+0h] [rbp-1F8h]
  std::tuple<> *v84; // [rsp+8h] [rbp-1F0h]
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr __pos; // [rsp+10h] [rbp-1E8h]
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr __posa; // [rsp+10h] [rbp-1E8h]
  unsigned __int64 v87; // [rsp+18h] [rbp-1E0h]
  _DWORD *v88; // [rsp+20h] [rbp-1D8h]
  std::tuple<> v89; // [rsp+3Fh] [rbp-1B9h] BYREF
  std::string v90; // [rsp+40h] [rbp-1B8h] BYREF
  std::string v91; // [rsp+60h] [rbp-198h] BYREF
  char v92[376]; // [rsp+80h] [rbp-178h] BYREF

  v87 = (unsigned __int64)v92;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(320LL);
    if ( v9 )
      v87 = v9;
  }
  *(_QWORD *)v87 = 1102416563LL;
  *(_QWORD *)(v87 + 8) = "5 32 8 6 __size 64 8 7 __osize 96 32 12 addr_key:206 160 48 13 count_map:183 240 48 13 count_map:202";
  *(_QWORD *)(v87 + 16) = ResourceBox::monitorReport;
  v88 = (_DWORD *)(v87 >> 3);
  v88[536862720] = -235802127;
  v88[536862721] = -218959360;
  v88[536862722] = -218959360;
  v88[536862724] = -218959118;
  v88[536862726] = -219021312;
  v88[536862727] = 62194;
  v88[536862729] = -202116109;
  if ( !ResourceBox::monitor_report_ptr._M_ptr )
    goto LABEL_237;
  if ( ResourceBox::network_mgr_ptr._M_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)ResourceBox::network_mgr_ptr._M_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(ResourceBox::network_mgr_ptr._M_ptr);
    }
    else
    {
      v4 = (std::__shared_ptr<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(ResourceBox::network_mgr_ptr._M_ptr->_vptr_NetworkMgrBase
                                                                                       + 10);
      if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))ResourceBox::network_mgr_ptr._M_ptr->_vptr_NetworkMgrBase + 10))();
        goto LABEL_7;
      }
    }
    M_ptr = v4;
    __asan_report_load8(v4);
LABEL_18:
    __asan_report_load8(M_ptr);
    goto LABEL_19;
  }
LABEL_7:
  M_ptr = ResourceBox::config_mgr_ptr._M_ptr;
  if ( !ResourceBox::config_mgr_ptr._M_ptr )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)ResourceBox::config_mgr_ptr._M_ptr >> 3) + 0x7FFF8000) )
    goto LABEL_18;
  v6 = (unsigned __int64)(ResourceBox::config_mgr_ptr._M_ptr->_vptr_ConfigMgrBase + 5);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v7 = v6;
    __asan_report_load8(v6);
    goto LABEL_20;
  }
  (*((void (**)(void))ResourceBox::config_mgr_ptr._M_ptr->_vptr_ConfigMgrBase + 5))();
LABEL_11:
  v1 = (__int64)ResourceBox::mysql_mgr_ptr._M_ptr;
  if ( !ResourceBox::mysql_mgr_ptr._M_ptr )
    goto LABEL_128;
  *(_DWORD *)(v87 + 168) = 0;
  *(_QWORD *)(v87 + 176) = 0LL;
  *(_QWORD *)(v87 + 184) = v87 + 168;
  *(_QWORD *)(v87 + 192) = v87 + 168;
  *(_QWORD *)(v87 + 200) = 0LL;
  *(_DWORD *)(v87 + 248) = 0;
  *(_QWORD *)(v87 + 256) = 0LL;
  *(_QWORD *)(v87 + 264) = v87 + 248;
  *(_QWORD *)(v87 + 272) = v87 + 248;
  *(_QWORD *)(v87 + 280) = 0LL;
  v7 = v1 + 32;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(v7);
    goto LABEL_21;
  }
  v8 = *(_QWORD *)(v1 + 32);
  v1 += 16LL;
  while ( 1 )
  {
    M_left = v8;
    if ( v8 == v1 )
      break;
    v7 = v8 + 40;
    if ( *(_BYTE *)(((v8 + 40) >> 3) + 0x7FFF8000) )
    {
LABEL_21:
      __asan_report_load8(v7);
    }
    else
    {
      if ( !*(_QWORD *)(v8 + 40) )
        goto LABEL_23;
      v10 = std::_Rb_tree<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>,std::_Identity<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>,std::less<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>,std::allocator<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>>::_M_insert_unique<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>> const&>(
              (std::_Rb_tree<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> >,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> >,std::_Identity<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > >,std::less<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > >,std::allocator<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > > > *const)(v87 + 240),
              (const std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > *)(v8 + 40));
    }
    if ( !v10.second )
      goto LABEL_23;
    v11 = *(_QWORD *)(M_left + 40);
    v12 = *(_BYTE *)(((unsigned __int64)(v11 + 112) >> 3) + 0x7FFF8000);
    if ( v12 && v12 <= 1 )
      __asan_report_load2();
    else
      __gnu_cxx::__to_xstring<std::string,char>(
        &v91,
        (int (*)(char *, std::size_t, const char *, ___va_list_tag *))&vsnprintf,
        0x10uLL,
        "%d",
        *(unsigned __int16 *)(v11 + 112));
    v90._M_dataplus._M_p = v90._anon_0._M_local_buf;
    v14 = (std::string *)(v11 + 80);
    if ( *(_BYTE *)(((unsigned __int64)(v11 + 80) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v14);
    }
    else
    {
      v14 = (std::string *)(v11 + 88);
      if ( !*(_BYTE *)(((unsigned __int64)(v11 + 88) >> 3) + 0x7FFF8000) )
      {
        v14 = &v90;
        std::string::_M_construct<char *>(
          &v90,
          *(char **)(v11 + 80),
          (char *)(*(_QWORD *)(v11 + 88) + *(_QWORD *)(v11 + 80)),
          v13);
        goto LABEL_37;
      }
    }
    __asan_report_load8(v14);
LABEL_37:
    if ( v90._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    {
      __asan_handle_no_return(v14);
      std::__throw_length_error("basic_string::append");
    }
    std::string::_M_append(&v90, ":", 1LL);
    v15 = v90._M_string_length + v91._M_string_length;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v90._M_dataplus._M_p == &v90._anon_0 )
      M_allocated_capacity = 15LL;
    else
      M_allocated_capacity = v90._anon_0._M_allocated_capacity;
    if ( v15 > M_allocated_capacity
      && ((std::string::$CFBEC286C7F52157F7E59FC354047095 *)v91._M_dataplus._M_p == &v91._anon_0
        ? (v17 = 15LL)
        : (v17 = v91._anon_0._M_allocated_capacity),
          v15 <= v17) )
    {
      M_string_length = v91._M_string_length;
      if ( v91._M_string_length )
        M_string_length = 0LL;
      v18 = std::string::_M_replace(&v91, 0LL, M_string_length, v90._M_dataplus._M_p, v90._M_string_length);
    }
    else
    {
      v18 = std::string::_M_append(&v90, v91._M_dataplus._M_p, v91._M_string_length);
    }
    *(_QWORD *)(v87 + 96) = v87 + 112;
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    {
      v18 = __asan_report_load8(v18);
    }
    else
    {
      v20 = (__m128i *)(v18 + 16);
      if ( *(_QWORD *)v18 != v18 + 16 )
      {
        *(_QWORD *)(v87 + 96) = *(_QWORD *)v18;
        v21 = (__m128i *)(v18 + 16);
        if ( *(_BYTE *)(((v18 + 16) >> 3) + 0x7FFF8000) )
          goto LABEL_70;
        *(_QWORD *)(v87 + 112) = *(_QWORD *)(v18 + 16);
        goto LABEL_56;
      }
    }
    v21 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) <= ((unsigned __int8)v20 & 7)
      || *(_BYTE *)(((v18 + 31) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v18 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v18 + 31) & 7) )
    {
      __asan_report_load_n(v20, 16LL);
LABEL_70:
      __asan_report_load8(v21);
LABEL_71:
      __asan_report_load8(v21);
LABEL_72:
      __asan_report_store1(v21);
      goto LABEL_73;
    }
    *(__m128i *)(v87 + 112) = _mm_loadu_si128((const __m128i *)(v18 + 16));
LABEL_56:
    v21 = (__m128i *)(v18 + 8);
    if ( *(_BYTE *)(((v18 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_71;
    *(_QWORD *)(v87 + 104) = *(_QWORD *)(v18 + 8);
    *(_QWORD *)v18 = v20;
    *(_QWORD *)(v18 + 8) = 0LL;
    v21 = (__m128i *)(v18 + 16);
    v22 = *(_BYTE *)(((v18 + 16) >> 3) + 0x7FFF8000);
    if ( v22 <= (char)((v18 + 16) & 7) && v22 )
      goto LABEL_72;
    *(_BYTE *)(v18 + 16) = 0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v90._M_dataplus._M_p != &v90._anon_0 )
      operator delete(v90._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v91._M_dataplus._M_p != &v91._anon_0 )
      operator delete(v91._M_dataplus._M_p);
    v21 = (__m128i *)(M_left + 40);
    if ( !*(_BYTE *)(((M_left + 40) >> 3) + 0x7FFF8000) )
    {
      Size = common::midb::MysqlConnPoolT<std::mutex>::getSize(*(common::midb::MysqlConnPoolT<std::mutex> *const *)(M_left + 40));
      goto LABEL_74;
    }
LABEL_73:
    Size = __asan_report_load8(v21);
LABEL_74:
    HIDWORD(v84) = Size;
    v2 = v87 + 168;
    v24._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v87 + 160),
                    *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type *)(v87 + 176),
                    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Base_ptr)(v87 + 168),
                    (const std::string *)(v87 + 96))._M_node;
    __args_1 = (std::tuple<const std::string&> *)v24._M_node;
    __pos = v24._M_node;
    if ( v24._M_node != (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)(v87 + 168) )
    {
      v26 = (unsigned __int64)&v24._M_node[1];
      v2 = *(_QWORD *)(v87 + 104);
      *(_QWORD *)(v87 + 32) = v2;
      if ( *(_BYTE *)(((unsigned __int64)&v24._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
      {
        v24._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(&v24._M_node[1]._M_parent);
      }
      else
      {
        M_parent = v24._M_node[1]._M_parent;
        *(_QWORD *)(v87 + 64) = M_parent;
        if ( v2 <= (unsigned __int64)M_parent )
        {
          v27 = (size_t *)(v87 + 32);
          goto LABEL_78;
        }
      }
      v27 = (size_t *)(v87 + 64);
LABEL_78:
      v28 = v27;
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v27);
      }
      else
      {
        v29 = *v27;
        v28 = (size_t *)v26;
        if ( !*(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        {
          if ( v29 )
          {
            v30 = memcmp(*(const void **)(v87 + 96), *(const void **)&v24._M_node[1]._M_color, v29);
            if ( v30 )
            {
LABEL_85:
              if ( v30 >= 0 )
                goto LABEL_93;
              goto LABEL_86;
            }
          }
          v2 -= (__int64)M_parent;
          if ( v2 <= 0x7FFFFFFF )
          {
            if ( v2 < (__int64)0xFFFFFFFF80000000LL )
              v30 = 0x80000000;
            else
              v30 = v2;
            goto LABEL_85;
          }
LABEL_91:
          v30 = 0x7FFFFFFF;
          goto LABEL_85;
        }
      }
      __asan_report_load8(v28);
      goto LABEL_91;
    }
LABEL_86:
    *(_QWORD *)(v87 + 64) = v87 + 96;
    __args_1 = (std::tuple<const std::string&> *)std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                                                   (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v87 + 160),
                                                   (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__pos,
                                                   &std::piecewise_construct,
                                                   (std::tuple<const std::string&> *)(v87 + 64),
                                                   &v89,
                                                   (const std::piecewise_construct_t *)v25._M_node,
                                                   __args_1,
                                                   v84)._M_node;
LABEL_93:
    v31 = *(_BYTE *)(((unsigned __int64)&__args_1[8] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)__args_1 + 64) & 7) + 3) >= v31 && v31 )
    {
      __asan_report_load4(&__args_1[8]);
      break;
    }
    LODWORD(__args_1[8]._M_head_impl) += HIDWORD(v84);
    v32 = *(char **)(v87 + 96);
    if ( v32 != (char *)(v87 + 112) )
      operator delete(v32);
LABEL_23:
    v8 = std::_Rb_tree_increment((std::_Rb_tree_node_base *)M_left);
  }
  for ( i = *(char **)(v87 + 184); ; i = (char *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v42) )
  {
    v42 = i;
    if ( i == (char *)(v87 + 168) )
      break;
    M_left = (size_t)(i + 32);
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v91,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/core_class/resource_box.cpp",
      "monitorReport",
      197);
    v2 = *(&v91._anon_0._M_allocated_capacity + 1);
    v34 = *(&v91._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&v91._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(*(&v91._anon_0._M_allocated_capacity + 1));
LABEL_119:
      __asan_report_load8(v34);
LABEL_120:
      __asan_report_load8(v34);
LABEL_121:
      __asan_report_load8(v34);
LABEL_122:
      __asan_report_load8(v34);
LABEL_123:
      __asan_report_load8(v34);
LABEL_124:
      __asan_report_load8(v34);
LABEL_125:
      __asan_report_load8(v34);
LABEL_126:
      __asan_report_load4(v34);
      break;
    }
    v1 = **((_QWORD **)&v91._anon_0._M_allocated_capacity + 1) + 0x4000LL;
    v34 = *(&v91._anon_0._M_allocated_capacity + 1) + 8;
    if ( *(_BYTE *)(((*(&v91._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_119;
    v35 = *(void **)(*(&v91._anon_0._M_allocated_capacity + 1) + 8);
    v36 = (int)v1 - (int)v35;
    if ( v36 > 0x13 )
      v36 = 20LL;
    memcpy(v35, "ConnectionNum Mysql:", v36);
    *(_QWORD *)(v2 + 8) += v36;
    v1 = *(&v91._anon_0._M_allocated_capacity + 1);
    v34 = M_left + 8;
    if ( *(_BYTE *)(((M_left + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_120;
    v37 = *(_QWORD *)(M_left + 8);
    v34 = M_left;
    if ( *(_BYTE *)((M_left >> 3) + 0x7FFF8000) )
      goto LABEL_121;
    v38 = *(const void **)M_left;
    v34 = *(&v91._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&v91._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_122;
    M_left = **((_QWORD **)&v91._anon_0._M_allocated_capacity + 1) + 0x4000LL;
    v34 = *(&v91._anon_0._M_allocated_capacity + 1) + 8;
    if ( *(_BYTE *)(((*(&v91._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_123;
    v39 = *(void **)(*(&v91._anon_0._M_allocated_capacity + 1) + 8);
    M_left = (int)M_left - (int)v39;
    if ( v37 <= M_left )
      M_left = v37;
    memcpy(v39, v38, M_left);
    *(_QWORD *)(v1 + 8) += M_left;
    v1 = *(&v91._anon_0._M_allocated_capacity + 1);
    v34 = *(&v91._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&v91._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_124;
    M_left = **((_QWORD **)&v91._anon_0._M_allocated_capacity + 1) + 0x4000LL;
    v34 = *(&v91._anon_0._M_allocated_capacity + 1) + 8;
    if ( *(_BYTE *)(((*(&v91._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_125;
    v40 = *(void **)(*(&v91._anon_0._M_allocated_capacity + 1) + 8);
    M_left = (int)M_left - (int)v40;
    if ( M_left > 4 )
      M_left = 5LL;
    memcpy(v40, " num:", M_left);
    *(_QWORD *)(v1 + 8) += M_left;
    v34 = (std::string::size_type)(v42 + 64);
    v41 = *(_BYTE *)(((unsigned __int64)(v42 + 64) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v42 + 64) & 7) + 3) >= v41 && v41 )
      goto LABEL_126;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v91._anon_0._M_allocated_capacity + 1),
      *((_DWORD *)v42 + 16));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v91);
  }
  std::_Rb_tree<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>,std::_Identity<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>,std::less<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>,std::allocator<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex>>>>::_M_erase(
    (std::_Rb_tree<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> >,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> >,std::_Identity<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > >,std::less<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > >,std::allocator<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > > > *const)(v87 + 240),
    *(std::_Rb_tree<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> >,std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> >,std::_Identity<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > >,std::less<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > >,std::allocator<std::shared_ptr<common::midb::MysqlConnPoolT<std::mutex> > > >::_Link_type *)(v87 + 256));
  std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v87 + 160),
    *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type *)(v87 + 176));
LABEL_128:
  v43 = ResourceBox::redis_mgr_ptr._M_ptr;
  if ( !ResourceBox::redis_mgr_ptr._M_ptr )
    goto LABEL_237;
  *(_DWORD *)(v87 + 248) = 0;
  *(_QWORD *)(v87 + 256) = 0LL;
  *(_QWORD *)(v87 + 264) = v87 + 248;
  *(_QWORD *)(v87 + 272) = v87 + 248;
  *(_QWORD *)(v87 + 280) = 0LL;
  p_M_left = &v43->pool_ptr_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&v43->pool_ptr_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_left);
    goto LABEL_132;
  }
  M_left = (size_t)v43->pool_ptr_map_._M_t._M_impl._M_header._M_left;
  v43 = (std::__shared_ptr<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)((char *)v43 + 16);
  while ( 2 )
  {
    v2 = M_left;
    if ( (std::__shared_ptr<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)M_left != v43 )
    {
      p_M_left = (std::_Rb_tree_node_base::_Base_ptr *)(M_left + 40);
      if ( *(_BYTE *)(((M_left + 40) >> 3) + 0x7FFF8000) )
      {
LABEL_132:
        __asan_report_load8(p_M_left);
      }
      else
      {
        v1 = *(_QWORD *)(M_left + 40);
        if ( !v1 )
          goto LABEL_199;
        v65 = *(_BYTE *)(((unsigned __int64)(v1 + 64) >> 3) + 0x7FFF8000);
        if ( !v65 || v65 > 1 )
        {
          __gnu_cxx::__to_xstring<std::string,char>(
            &v91,
            (int (*)(char *, std::size_t, const char *, ___va_list_tag *))&vsnprintf,
            0x10uLL,
            "%d",
            *(unsigned __int16 *)(v1 + 64));
LABEL_134:
          v90._M_dataplus._M_p = v90._anon_0._M_local_buf;
          v46 = (std::string *)(v1 + 32);
          if ( *(_BYTE *)(((unsigned __int64)(v1 + 32) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v46);
          }
          else
          {
            v46 = (std::string *)(v1 + 40);
            if ( !*(_BYTE *)(((unsigned __int64)(v1 + 40) >> 3) + 0x7FFF8000) )
            {
              v46 = &v90;
              std::string::_M_construct<char *>(
                &v90,
                *(char **)(v1 + 32),
                (char *)(*(_QWORD *)(v1 + 40) + *(_QWORD *)(v1 + 32)),
                v45);
              goto LABEL_139;
            }
          }
          __asan_report_load8(v46);
LABEL_139:
          if ( v90._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
          {
            __asan_handle_no_return(v46);
            std::__throw_length_error("basic_string::append");
          }
          std::string::_M_append(&v90, ":", 1LL);
          v47 = v90._M_string_length + v91._M_string_length;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v90._M_dataplus._M_p == &v90._anon_0 )
            v48 = 15LL;
          else
            v48 = v90._anon_0._M_allocated_capacity;
          if ( v47 > v48
            && ((std::string::$CFBEC286C7F52157F7E59FC354047095 *)v91._M_dataplus._M_p == &v91._anon_0
              ? (v49 = 15LL)
              : (v49 = v91._anon_0._M_allocated_capacity),
                v47 <= v49) )
          {
            v51 = v91._M_string_length;
            if ( v91._M_string_length )
              v51 = 0LL;
            v50 = std::string::_M_replace(&v91, 0LL, v51, v90._M_dataplus._M_p, v90._M_string_length);
          }
          else
          {
            v50 = std::string::_M_append(&v90, v91._M_dataplus._M_p, v91._M_string_length);
          }
          *(_QWORD *)(v87 + 96) = v87 + 112;
          if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
          {
            v50 = __asan_report_load8(v50);
          }
          else
          {
            v52 = (__m128i *)(v50 + 16);
            if ( *(_QWORD *)v50 != v50 + 16 )
            {
              *(_QWORD *)(v87 + 96) = *(_QWORD *)v50;
              v53 = (__m128i *)(v50 + 16);
              if ( !*(_BYTE *)(((v50 + 16) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v87 + 112) = *(_QWORD *)(v50 + 16);
                goto LABEL_158;
              }
LABEL_172:
              __asan_report_load8(v53);
              goto LABEL_173;
            }
          }
          v53 = v52;
          if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) <= ((unsigned __int8)v52 & 7)
            || *(_BYTE *)(((v50 + 31) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((v50 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v50 + 31) & 7) )
          {
            __asan_report_load_n(v52, 16LL);
            goto LABEL_172;
          }
          *(__m128i *)(v87 + 112) = _mm_loadu_si128((const __m128i *)(v50 + 16));
LABEL_158:
          v53 = (__m128i *)(v50 + 8);
          if ( *(_BYTE *)(((v50 + 8) >> 3) + 0x7FFF8000) )
          {
LABEL_173:
            __asan_report_load8(v53);
          }
          else
          {
            *(_QWORD *)(v87 + 104) = *(_QWORD *)(v50 + 8);
            *(_QWORD *)v50 = v52;
            *(_QWORD *)(v50 + 8) = 0LL;
            v53 = (__m128i *)(v50 + 16);
            v54 = *(_BYTE *)(((v50 + 16) >> 3) + 0x7FFF8000);
            if ( v54 > (char)((v50 + 16) & 7) || !v54 )
            {
              *(_BYTE *)(v50 + 16) = 0;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v90._M_dataplus._M_p != &v90._anon_0 )
                operator delete(v90._M_dataplus._M_p);
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v91._M_dataplus._M_p != &v91._anon_0 )
                operator delete(v91._M_dataplus._M_p);
              v53 = (__m128i *)(v2 + 40);
              if ( !*(_BYTE *)(((unsigned __int64)(v2 + 40) >> 3) + 0x7FFF8000) )
              {
                v55 = common::midb::RedisConnPool::getSize(*(common::midb::RedisConnPool *const *)(v2 + 40));
                goto LABEL_176;
              }
LABEL_175:
              v55 = __asan_report_load8(v53);
LABEL_176:
              HIDWORD(v84) = v55;
              v1 = v87 + 248;
              v56._M_node = std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_lower_bound(
                              (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v87 + 240),
                              *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type *)(v87 + 256),
                              (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Base_ptr)(v87 + 248),
                              (const std::string *)(v87 + 96))._M_node;
              __args_1a = (std::tuple<const std::string&> *)v56._M_node;
              __posa = v56._M_node;
              if ( v56._M_node == (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)(v87 + 248) )
                goto LABEL_188;
              v58 = (unsigned __int64)&v56._M_node[1];
              v1 = *(_QWORD *)(v87 + 104);
              *(_QWORD *)(v87 + 32) = v1;
              if ( *(_BYTE *)(((unsigned __int64)&v56._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
              {
                v56._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Base_ptr)__asan_report_load8(&v56._M_node[1]._M_parent);
              }
              else
              {
                v2 = (__int64)v56._M_node[1]._M_parent;
                *(_QWORD *)(v87 + 64) = v2;
                if ( v1 <= (unsigned __int64)v2 )
                {
                  v59 = (size_t *)(v87 + 32);
                  goto LABEL_180;
                }
              }
              v59 = (size_t *)(v87 + 64);
LABEL_180:
              v60 = v59;
              if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v59);
              }
              else
              {
                v61 = *v59;
                v60 = (size_t *)v58;
                if ( !*(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
                {
                  if ( !v61
                    || (v62 = memcmp(*(const void **)(v87 + 96), *(const void **)&v56._M_node[1]._M_color, v61)) == 0 )
                  {
                    v1 -= v2;
                    if ( v1 <= 0x7FFFFFFF )
                    {
                      if ( v1 < (__int64)0xFFFFFFFF80000000LL )
                        v62 = 0x80000000;
                      else
                        v62 = v1;
                      goto LABEL_187;
                    }
LABEL_193:
                    v62 = 0x7FFFFFFF;
                  }
LABEL_187:
                  if ( v62 < 0 )
                  {
LABEL_188:
                    *(_QWORD *)(v87 + 64) = v87 + 96;
                    __args_1a = (std::tuple<const std::string&> *)std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                                                                    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v87 + 240),
                                                                    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::const_iterator)__posa,
                                                                    &std::piecewise_construct,
                                                                    (std::tuple<const std::string&> *)(v87 + 64),
                                                                    &v89,
                                                                    (const std::piecewise_construct_t *)v57._M_node,
                                                                    __args_1a,
                                                                    v84)._M_node;
                  }
                  v63 = *(_BYTE *)(((unsigned __int64)&__args_1a[8] >> 3) + 0x7FFF8000);
                  if ( (char)((((_BYTE)__args_1a + 64) & 7) + 3) >= v63 && v63 )
                  {
                    __asan_report_load4(&__args_1a[8]);
                    break;
                  }
                  LODWORD(__args_1a[8]._M_head_impl) += HIDWORD(v84);
                  v64 = *(char **)(v87 + 96);
                  if ( v64 != (char *)(v87 + 112) )
                    operator delete(v64);
LABEL_199:
                  M_left = std::_Rb_tree_increment((std::_Rb_tree_node_base *)M_left);
                  continue;
                }
              }
              __asan_report_load8(v60);
              goto LABEL_193;
            }
          }
          __asan_report_store1(v53);
          goto LABEL_175;
        }
      }
      __asan_report_load2();
      goto LABEL_134;
    }
    break;
  }
  for ( j = *(char **)(v87 + 264); ; j = (char *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v80) )
  {
    v80 = j;
    if ( j == (char *)(v87 + 248) )
      break;
    v81 = (std::string::size_type)(j + 32);
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v91,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/core_class/resource_box.cpp",
      "monitorReport",
      212);
    v67 = *(&v91._anon_0._M_allocated_capacity + 1);
    v68 = *(&v91._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&v91._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(*(&v91._anon_0._M_allocated_capacity + 1));
LABEL_228:
      __asan_report_load8(v68);
LABEL_229:
      __asan_report_load8(v68);
LABEL_230:
      __asan_report_load8(v68);
LABEL_231:
      __asan_report_load8(v68);
LABEL_232:
      __asan_report_load8(v68);
LABEL_233:
      __asan_report_load8(v68);
LABEL_234:
      __asan_report_load8(v68);
LABEL_235:
      __asan_report_load4(v68);
      break;
    }
    v68 = *(&v91._anon_0._M_allocated_capacity + 1) + 8;
    if ( *(_BYTE *)(((*(&v91._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_228;
    v69 = *(void **)(*(&v91._anon_0._M_allocated_capacity + 1) + 8);
    v70 = **((_DWORD **)&v91._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v69;
    if ( v70 > 0x13 )
      v70 = 20LL;
    memcpy(v69, "ConnectionNum Redis:", v70);
    *(_QWORD *)(v67 + 8) += v70;
    v71 = *(&v91._anon_0._M_allocated_capacity + 1);
    v68 = v81 + 8;
    if ( *(_BYTE *)(((v81 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_229;
    v72 = *(_QWORD *)(v81 + 8);
    v68 = v81;
    if ( *(_BYTE *)((v81 >> 3) + 0x7FFF8000) )
      goto LABEL_230;
    v73 = *(const void **)v81;
    v68 = *(&v91._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&v91._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_231;
    v68 = *(&v91._anon_0._M_allocated_capacity + 1) + 8;
    if ( *(_BYTE *)(((*(&v91._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_232;
    v74 = *(void **)(*(&v91._anon_0._M_allocated_capacity + 1) + 8);
    v75 = **((_DWORD **)&v91._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v74;
    if ( v72 <= v75 )
      v75 = v72;
    memcpy(v74, v73, v75);
    *(_QWORD *)(v71 + 8) += v75;
    v76 = *(&v91._anon_0._M_allocated_capacity + 1);
    v68 = *(&v91._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&v91._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_233;
    v68 = *(&v91._anon_0._M_allocated_capacity + 1) + 8;
    if ( *(_BYTE *)(((*(&v91._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_234;
    v77 = *(void **)(*(&v91._anon_0._M_allocated_capacity + 1) + 8);
    v78 = **((_DWORD **)&v91._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v77;
    if ( v78 > 4 )
      v78 = 5LL;
    memcpy(v77, " num:", v78);
    *(_QWORD *)(v76 + 8) += v78;
    v68 = (std::string::size_type)(v80 + 64);
    v79 = *(_BYTE *)(((unsigned __int64)(v80 + 64) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v80 + 64) & 7) + 3) >= v79 && v79 )
      goto LABEL_235;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v91._anon_0._M_allocated_capacity + 1),
      *((_DWORD *)v80 + 16));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v91);
  }
  std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > > *const)(v87 + 240),
    *(std::_Rb_tree<std::string,std::pair<const std::string,unsigned int>,std::_Select1st<std::pair<const std::string,unsigned int> >,std::less<std::string >,std::allocator<std::pair<const std::string,unsigned int> > >::_Link_type *)(v87 + 256));
LABEL_237:
  if ( v92 == (char *)v87 )
  {
    *(_QWORD *)((v87 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v87 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v87 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v87 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v87 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v87 = 1172321806LL;
    *(_QWORD *)((v87 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v87 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v87 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v87 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v87 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 215: range 0000000014E4294E-0000000014E42965
void __cdecl GLOBAL__sub_I_resource_box_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
