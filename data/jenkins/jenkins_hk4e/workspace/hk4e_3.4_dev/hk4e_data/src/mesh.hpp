// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/mesh.hpp

// Line 19: range 000000000CED1F98-000000000CED258B
std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *__fastcall Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::createMesh(
        std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *length,
        int32_t width,
        int a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char v15[320]; // [rsp+10h] [rbp-140h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 9 length:19 48 4 8 width:19 64 16 11 mesh_ptr:27 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::createMesh;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 32) = width;
  *(_DWORD *)(v3 + 48) = a3;
  if ( *(int *)(v3 + 32) > 0 && *(int *)(v3 + 48) > 0 )
  {
    if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    common::tools::perf::make_shared<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>,int &,int &>(
      (common::tools::perf::allocator<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *)(v3 + 64),
      (int *)(v3 + 32),
      (int *)(v3 + 48),
      (int *)(v3 + 32));
    if ( std::operator==<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>(
           (const std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *)(v3 + 64),
           0LL) )
    {
      if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/mesh.hpp",
        "createMesh",
        30);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
        (common::milog::MiLogStream *const)(v3 + 160),
        (const char (*)[17])"mesh_ptr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::shared_ptr(length, 0LL);
    }
    else
    {
      v9 = std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::init(v9) )
      {
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/mesh.hpp",
          "createMesh",
          35);
        v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[20])"init fails, length:");
        v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v3 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])", width:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::shared_ptr(length, 0LL);
      }
      else
      {
        std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::shared_ptr(
          length,
          (std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *)(v3 + 64));
      }
    }
    std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::~shared_ptr((std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > > *const)(v3 + 64));
  }
  else
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/mesh.hpp",
      "createMesh",
      24);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[16])"invalid length:");
    v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])", width:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>::shared_ptr(length, 0LL);
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return length;
};

// Line 42: range 000000000D4A4E96-000000000D4A50DF
void __cdecl Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::~Mesh(
        Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_iterator<std::pair<int const,SceneGridConfig*>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::tuple_element<1,std::pair<int const,SceneGridConfig*> >::type *v5; // rax
  std::unordered_map<int,SceneGridConfig*> *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<int const,SceneGridConfig*>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<int const,SceneGridConfig*> >::type *val; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<int const,SceneGridConfig*>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<int const,SceneGridConfig*>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,SceneGridConfig*>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,SceneGridConfig*>,false>::__node_type *)"2 32 8 14 __for_begin:53 64 8 12 __for_end:53";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,SceneGridConfig*>,false>::__node_type *)Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::~Mesh;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->grid_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_cur = std::unordered_map<int,SceneGridConfig *>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_cur = std::unordered_map<int,SceneGridConfig *>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<int const,SceneGridConfig *>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<int const,SceneGridConfig *>,false,false>::operator*(v2 + 4);
    std::get<0ul,int const,SceneGridConfig *>(__in);
    v5 = std::get<1ul,int const,SceneGridConfig *>(__in);
    val = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    if ( *val )
      MeshAllocator<SceneGridConfig>::destory(&this->allocator, val);
    std::__detail::_Node_iterator<std::pair<int const,SceneGridConfig *>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  std::unordered_map<int,SceneGridConfig *>::~unordered_map(&this->grid_map_);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,SceneGridConfig*>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 64: range 000000000CED274C-000000000CED2A7F
Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >::pointer_type __cdecl Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::getGrid(
        Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *const this,
        int32_t x,
        int32_t y)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >::pointer_type result; // rax
  std::unordered_map<int,SceneGridConfig*> *p_grid_map; // rcx
  __int64 v8; // rsi
  char *v9; // rsi
  std::unordered_map<int,SceneGridConfig*>::mapped_type *v10; // rax
  MeshAllocator<SceneGridConfig>::pointer_type v11; // rdx
  __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rdx
  char v15; // cl
  Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >::pointer_type *val; // [rsp+18h] [rbp-68h]
  char v19[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::getGrid;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( x >= this->length || x < 0 )
    goto LABEL_12;
  if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->width);
  }
  if ( y < this->width && y >= 0 )
  {
    p_grid_map = &this->grid_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->width);
    }
    v8 = (unsigned int)(x * this->width + y);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, v8);
    *(_DWORD *)(v3 + 32) = v8;
    v9 = (char *)(v3 + 32);
    v10 = std::unordered_map<int,SceneGridConfig *>::operator[](
            p_grid_map,
            (std::unordered_map<int,SceneGridConfig*>::key_type *)(v3 + 32));
    val = v10;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    if ( !*val )
    {
      v11 = MeshAllocator<SceneGridConfig>::create(&this->allocator);
      if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
        __asan_report_store8(val, v9);
      *val = v11;
      if ( *val )
      {
        v12 = (__int64)*val;
        v13 = *(_BYTE *)(((unsigned __int64)&(*val)->x >> 3) + 0x7FFF8000);
        if ( v13 != 0 && v13 <= 3 )
        {
          LOBYTE(v9) = v13 != 0;
          v12 = __asan_report_store4(&(*val)->x, v9);
        }
        *(_DWORD *)(v12 + 152) = x;
        v14 = (__int64)*val;
        v15 = *(_BYTE *)(((unsigned __int64)&(*val)->y >> 3) + 0x7FFF8000);
        if ( v15 != 0 && (char)(((*(_BYTE *)val - 100) & 7) + 3) >= v15 )
        {
          LOBYTE(v9) = v15 != 0;
          __asan_report_store4(&(*val)->y, v9);
        }
        *(_DWORD *)(v14 + 156) = y;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
      __asan_report_load8(val);
    result = *val;
  }
  else
  {
LABEL_12:
    result = 0LL;
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 88: range 000000000CED2C56-000000000CED2F8E
Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >::pointer_type __cdecl Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::findGrid(
        const Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *const this,
        int32_t x,
        int32_t y)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> >::pointer_type result; // rax
  std::unordered_map<int,SceneGridConfig*> *p_grid_map; // rcx
  __int64 v8; // rsi
  std::unordered_map<int,SceneGridConfig*> *v9; // rdx
  bool v10; // al
  std::__detail::_Node_const_iterator<std::pair<int const,SceneGridConfig*>,false,false>::pointer v11; // rax
  char v13[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 9 <unknown> 64 8 7 iter:97 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::findGrid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( x >= this->length || x < 0 )
    goto LABEL_12;
  if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->width);
  }
  if ( y < this->width && y >= 0 )
  {
    p_grid_map = &this->grid_map_;
    if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->width);
    }
    v8 = (unsigned int)(x * this->width + y);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, v8);
    *(_DWORD *)(v3 + 48) = v8;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v8);
    *(std::unordered_map<int,SceneGridConfig*>::const_iterator *)(v3 + 64) = std::unordered_map<int,SceneGridConfig *>::find(
                                                                               p_grid_map,
                                                                               (const std::unordered_map<int,SceneGridConfig*>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    v9 = &this->grid_map_;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::unordered_map<int,SceneGridConfig*>::const_iterator *)(v3 + 96) = std::unordered_map<int,SceneGridConfig *>::end(v9);
    v10 = std::__detail::operator==<std::pair<int const,SceneGridConfig *>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<int const,SceneGridConfig*>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<int const,SceneGridConfig*>,false> *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      result = 0LL;
    }
    else
    {
      v11 = std::__detail::_Node_const_iterator<std::pair<int const,SceneGridConfig *>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<int const,SceneGridConfig*>,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v11->second);
      result = v11->second;
    }
  }
  else
  {
LABEL_12:
    result = 0LL;
  }
  if ( v13 == (char *)v3 )
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

// Line 139: range 000000000CFDE1F6-000000000CFDE396
int32_t __cdecl Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::init(
        Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t result; // eax
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::init;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 32, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v1 + 32),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/mesh.hpp",
    "init",
    144);
  common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
    (common::milog::MiLogStream *const)(v1 + 32),
    (const char (*)[14])"init map mesh");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
  result = 0;
  if ( v5 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
