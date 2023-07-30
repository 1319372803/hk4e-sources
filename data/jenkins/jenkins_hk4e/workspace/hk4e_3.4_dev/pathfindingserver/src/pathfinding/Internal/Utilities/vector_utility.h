// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/vector_utility.h

// Line 25: range 000000000D00DEEE-000000000D00E211
void __cdecl resize_trimmed<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>(
        std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *v,
        unsigned int sz)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  AutoOffMeshLinkData *v5; // r14
  std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> >::iterator v6; // rax
  AutoOffMeshLinkData *M_current; // r14
  std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> >::iterator v8; // rax
  std::_Vector_base<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > v9; // [rsp+17h] [rbp-99h] BYREF

  v2 = (unsigned __int64)&v9._M_impl._M_finish + 1;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 7 temp:44";
  *(_QWORD *)(v2 + 16) = resize_trimmed<std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( sz <= std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::size(v) )
  {
    if ( sz < std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::size(v) )
    {
      std::_Vector_base<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::get_allocator(&v9);
      *(std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> >::iterator *)((char *)&v9._M_impl._M_start
                                                                                           + 1) = std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::begin(v);
      M_current = __gnu_cxx::__normal_iterator<AutoOffMeshLinkData *,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>::operator+(
                    (const __gnu_cxx::__normal_iterator<AutoOffMeshLinkData*,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > > *const)((char *)&v9._M_impl._M_start + 1),
                    sz)._M_current;
      v8._M_current = std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::begin(v)._M_current;
      std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::vector<__gnu_cxx::__normal_iterator<AutoOffMeshLinkData*,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>,void>(
        (std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *const)(v2 + 32),
        v8,
        (__gnu_cxx::__normal_iterator<AutoOffMeshLinkData*,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > >)M_current,
        (const std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> >::allocator_type *)&v9);
      stl_allocator<AutoOffMeshLinkData,16>::~stl_allocator((stl_allocator<AutoOffMeshLinkData,16> *const)&v9);
      std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::swap(
        (std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *const)(v2 + 32),
        v);
      std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::~vector((std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *const)(v2 + 32));
    }
  }
  else if ( sz == std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::capacity(v) )
  {
    std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::resize(v, sz);
  }
  else
  {
    std::_Vector_base<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::get_allocator(&v9);
    std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::vector(
      (std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *const)(v2 + 32),
      (const std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> >::allocator_type *)&v9);
    stl_allocator<AutoOffMeshLinkData,16>::~stl_allocator((stl_allocator<AutoOffMeshLinkData,16> *const)&v9);
    std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::reserve(
      (std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *const)(v2 + 32),
      sz);
    v5 = std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::end(v)._M_current;
    v6._M_current = std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::begin(v)._M_current;
    std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::assign<__gnu_cxx::__normal_iterator<AutoOffMeshLinkData*,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>>,void>(
      (std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *const)(v2 + 32),
      v6,
      (__gnu_cxx::__normal_iterator<AutoOffMeshLinkData*,std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > >)v5);
    std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::resize(
      (std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *const)(v2 + 32),
      sz);
    std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::swap(
      (std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *const)(v2 + 32),
      v);
    std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16>>::~vector((std::vector<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> > *const)(v2 + 32));
  }
  if ( (std::_Vector_base<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> >::pointer *)((char *)&v9._M_impl._M_finish
                                                                                                + 1) == (std::_Vector_base<AutoOffMeshLinkData,stl_allocator<AutoOffMeshLinkData,16> >::pointer *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 25: range 000000000D00DBA4-000000000D00DEC7
void __cdecl resize_trimmed<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>(
        std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *v,
        unsigned int sz)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  NavMeshTileData *v5; // r14
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::iterator v6; // rax
  NavMeshTileData *M_current; // r14
  std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::iterator v8; // rax
  std::_Vector_base<NavMeshTileData,stl_allocator<NavMeshTileData,16> > v9; // [rsp+17h] [rbp-99h] BYREF

  v2 = (unsigned __int64)&v9._M_impl._M_finish + 1;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 7 temp:44";
  *(_QWORD *)(v2 + 16) = resize_trimmed<std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( sz <= std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(v) )
  {
    if ( sz < std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::size(v) )
    {
      std::_Vector_base<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::get_allocator(&v9);
      *(std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::iterator *)((char *)&v9._M_impl._M_start + 1) = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::begin(v);
      M_current = __gnu_cxx::__normal_iterator<NavMeshTileData *,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>::operator+(
                    (const __gnu_cxx::__normal_iterator<NavMeshTileData*,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > > *const)((char *)&v9._M_impl._M_start + 1),
                    sz)._M_current;
      v8._M_current = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::begin(v)._M_current;
      std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::vector<__gnu_cxx::__normal_iterator<NavMeshTileData*,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>,void>(
        (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v2 + 32),
        v8,
        (__gnu_cxx::__normal_iterator<NavMeshTileData*,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > >)M_current,
        (const std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::allocator_type *)&v9);
      stl_allocator<NavMeshTileData,16>::~stl_allocator((stl_allocator<NavMeshTileData,16> *const)&v9);
      std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::swap(
        (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v2 + 32),
        v);
      std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::~vector((std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v2 + 32));
    }
  }
  else if ( sz == std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::capacity(v) )
  {
    std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::resize(v, sz);
  }
  else
  {
    std::_Vector_base<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::get_allocator(&v9);
    std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::vector(
      (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v2 + 32),
      (const std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::allocator_type *)&v9);
    stl_allocator<NavMeshTileData,16>::~stl_allocator((stl_allocator<NavMeshTileData,16> *const)&v9);
    std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::reserve(
      (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v2 + 32),
      sz);
    v5 = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::end(v)._M_current;
    v6._M_current = std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::begin(v)._M_current;
    std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::assign<__gnu_cxx::__normal_iterator<NavMeshTileData*,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>>,void>(
      (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v2 + 32),
      v6,
      (__gnu_cxx::__normal_iterator<NavMeshTileData*,std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > >)v5);
    std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::resize(
      (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v2 + 32),
      sz);
    std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::swap(
      (std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v2 + 32),
      v);
    std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16>>::~vector((std::vector<NavMeshTileData,stl_allocator<NavMeshTileData,16> > *const)(v2 + 32));
  }
  if ( (std::_Vector_base<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::pointer *)((char *)&v9._M_impl._M_finish
                                                                                        + 1) == (std::_Vector_base<NavMeshTileData,stl_allocator<NavMeshTileData,16> >::pointer *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};
