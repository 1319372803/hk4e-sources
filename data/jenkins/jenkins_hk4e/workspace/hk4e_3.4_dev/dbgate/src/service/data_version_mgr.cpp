// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/service/data_version_mgr.cpp

// Line 19: range 000000000C5D77DC-000000000C5D7A42
__int64 __fastcall DataVersionMgr::updateDataVersion(DataVersionMgr *const this, uint32_t uid, uint32_t data_version)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  char v8; // al
  char *v9; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  char v12; // cl
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  char v16[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 6 uid:18 64 8 7 lock:20 96 8 7 iter:21";
  *(_QWORD *)(v3 + 16) = DataVersionMgr::updateDataVersion;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64), &this->data_version_mu_);
  *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->data_version_map_,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->data_version_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96),
         &__y) )
  {
    goto LABEL_8;
  }
  v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
  p_second = &v6->second;
  if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_second);
  }
  if ( data_version > v6->second )
LABEL_8:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    v9 = (char *)(v3 + 48);
    v10 = std::map<unsigned int,unsigned int>::operator[](
            &this->data_version_map_,
            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    v11 = v10;
    v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
    {
      LOBYTE(v9) = v12 != 0;
      __asan_report_store4(v10, v9);
    }
    *v11 = data_version;
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64));
  result = 0LL;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 31: range 000000000C5D7A44-000000000C5D7C66
__int64 __fastcall DataVersionMgr::delDataVersion(DataVersionMgr *const this, uint32_t uid, uint32_t data_version)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  char v8; // al
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 6 uid:30 64 8 7 lock:32 96 8 7 iter:33";
  *(_QWORD *)(v3 + 16) = DataVersionMgr::delDataVersion;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64), &this->data_version_mu_);
  *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->data_version_map_,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->data_version_map_)._M_node;
  if ( !std::operator!=(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96),
          &__y) )
    goto LABEL_9;
  v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
  p_second = &v6->second;
  if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_second);
  }
  if ( data_version >= v6->second )
    v8 = 1;
  else
LABEL_9:
    v8 = 0;
  if ( v8 )
    std::map<unsigned int,unsigned int>::erase(
      &this->data_version_map_,
      (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 64));
  result = 0LL;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 43: range 000000000C5D7C68-000000000C5D7E58
__int64 __fastcall DataVersionMgr::findDataVersion(DataVersionMgr *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int second; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 uid:42 64 8 7 lock:44 96 8 7 iter:45";
  *(_QWORD *)(v2 + 16) = DataVersionMgr::findDataVersion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 64), &this->data_version_mu_);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->data_version_map_,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->data_version_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
         &__y) )
  {
    second = 0;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v6->second;
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 64));
  result = second;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
