// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/AStar/a_star_info_manager.h

// Line 8: range 000000000CCC508C-000000000CCC5137
bool __cdecl AStarCmp::operator()(
        AStarCmp *const this,
        const std::shared_ptr<AStarInfo> *p_a,
        const std::shared_ptr<AStarInfo> *p_b)
{
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  float score; // [rsp+4h] [rbp-1Ch]

  v3 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_a);
  if ( *(_BYTE *)(((unsigned __int64)&v3->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v3->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v3->score);
  }
  score = v3->score;
  v4 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_b);
  if ( *(_BYTE *)(((unsigned __int64)&v4->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v4->score);
  }
  return score > v4->score;
};
