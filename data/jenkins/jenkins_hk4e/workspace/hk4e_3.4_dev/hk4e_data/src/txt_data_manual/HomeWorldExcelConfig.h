// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/HomeWorldExcelConfig.h

// Line 22: range 0000000014D348E0-0000000014D34936
void __cdecl HomeWorldExcelConfigMgr::FurnitureTransferConfig::FurnitureTransferConfig(
        HomeWorldExcelConfigMgr::FurnitureTransferConfig *const this)
{
  Vector3::Vector3(&this->offset_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->offset_rot, 0.0, 0.0, 0.0);
  Quaternion::Quaternion(&this->offset_quat);
};

// Line 55: range 00000000147368F0-0000000014736A88
bool __fastcall HomeWorldExcelConfigMgr::isFurnitureCanMake(
        const HomeWorldExcelConfigMgr *const this,
        __int64 furniture_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_set<unsigned int> *p_furniture_make_furniture_id_set; // rdx
  std::unordered_set<unsigned int> *v6; // rdx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 furniture_id:55 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::isFurnitureCanMake;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = furniture_id;
  p_furniture_make_furniture_id_set = &this->furniture_make_furniture_id_set;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, furniture_id);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 96) = std::unordered_set<unsigned int>::cend(p_furniture_make_furniture_id_set);
  v6 = &this->furniture_make_furniture_id_set;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, furniture_id);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 64) = std::unordered_set<unsigned int>::find(
                                                                     v6,
                                                                     (const std::unordered_set<unsigned int>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<unsigned int,false>(
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 96));
  if ( v8 == (char *)v2 )
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

// Line 75: range 000000000F00F980-000000000F00FB18
bool __fastcall HomeWorldExcelConfigMgr::isHomePlantHomeGatherId(
        const HomeWorldExcelConfigMgr *const this,
        __int64 home_gather_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_set<unsigned int> *p_home_gather_id_set; // rdx
  std::unordered_set<unsigned int> *v6; // rdx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 home_gather_id:75 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::isHomePlantHomeGatherId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = home_gather_id;
  p_home_gather_id_set = &this->home_gather_id_set;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, home_gather_id);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 96) = std::unordered_set<unsigned int>::end(p_home_gather_id_set);
  v6 = &this->home_gather_id_set;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, home_gather_id);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 64) = std::unordered_set<unsigned int>::find(
                                                                     v6,
                                                                     (const std::unordered_set<unsigned int>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<unsigned int,false>(
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 96));
  if ( v8 == (char *)v2 )
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
