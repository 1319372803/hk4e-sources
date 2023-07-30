// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataProcess/addr_processor.cpp

// Line 8: range 000000000CBCF67A-000000000CBCF8A0
void __cdecl AddrProcessor::GetBlockFileAddr(int xIndex, int zIndex, const std::string *prefix, std::string *res)
{
  std::string __lhs; // [rsp+20h] [rbp-110h] BYREF
  std::string v7; // [rsp+40h] [rbp-F0h] BYREF
  std::string __rhs; // [rsp+60h] [rbp-D0h] BYREF
  std::string v9; // [rsp+80h] [rbp-B0h] BYREF
  std::string v10; // [rsp+A0h] [rbp-90h] BYREF
  std::string v11; // [rsp+C0h] [rbp-70h] BYREF
  std::string v12; // [rsp+E0h] [rbp-50h] BYREF
  std::string v13; // [rsp+100h] [rbp-30h] BYREF

  std::to_string(&v11, zIndex);
  std::to_string(&__rhs, xIndex);
  std::operator+<char>(&__lhs, "Data/", prefix);
  std::operator+<char>(&v7, &__lhs, "_");
  std::operator+<char>(&v9, &v7, &__rhs);
  std::operator+<char>(&v10, &v9, "_");
  std::operator+<char>(&v12, &v10, &v11);
  std::operator+<char>(&v13, &v12, ".data");
  std::string::operator=(res, &v13);
  std::string::~string(&v13);
  std::string::~string(&v12);
  std::string::~string(&v10);
  std::string::~string(&v9);
  std::string::~string(&v7);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::string::~string(&v11);
};

// Line 13: range 000000000CBCF8A2-000000000CBCF9F5
void __cdecl AddrProcessor::GetSuffix(int x, int z, std::string *suffix)
{
  std::string __rhs; // [rsp+10h] [rbp-B0h] BYREF
  std::string __lhs; // [rsp+30h] [rbp-90h] BYREF
  std::string v6; // [rsp+50h] [rbp-70h] BYREF
  std::string v7; // [rsp+70h] [rbp-50h] BYREF
  std::string v8; // [rsp+90h] [rbp-30h] BYREF

  std::to_string(&v7, z);
  std::to_string(&__rhs, x);
  std::operator+<char>(&__lhs, "_", &__rhs);
  std::operator+<char>(&v6, &__lhs, "_");
  std::operator+<char>(&v8, &v6, &v7);
  std::string::operator=(suffix, &v8);
  std::string::~string(&v8);
  std::string::~string(&v6);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::string::~string(&v7);
};

// Line 18: range 000000000CBCF9F6-000000000CBCFBF4
void __cdecl AddrProcessor::GenerateFileInfoForWorld(
        const std::vector<std::string> *addrList,
        const std::vector<unsigned int> *md5List,
        std::map<int,std::map<const IntPair,const std::string&>> *blockAddrMap,
        std::map<int,std::map<const IntPair,unsigned int>> *md5Map)
{
  std::vector<std::string>::size_type v4; // rbx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v5; // rax
  unsigned int *v6; // rdx
  unsigned int v7; // ebx
  const std::string *v8; // rdi
  common::milog::MiLogStream *v9; // rbx
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int i; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-30h] BYREF

  v4 = std::vector<std::string>::size(addrList);
  if ( v4 == std::vector<unsigned int>::size(md5List) )
  {
    for ( i = 0; i < std::vector<std::string>::size(addrList); ++i )
    {
      v5 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 md5List,
                                                                                                 i);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      v7 = *v6;
      v8 = std::vector<std::string>::operator[](addrList, i);
      if ( !AddrProcessor::ParseWorldBlockAddrAndMd5(v8, v7, blockAddrMap, md5Map) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/tothemoon/Internal/AStarPathFinding/DataProcess/addr_processor.cpp",
          "GenerateFileInfoForWorld",
          26);
        v9 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
               &v16,
               (const char (*)[59])"[LoadWorld][BlockAddrListToBlockAddrMap] parse block addr ");
        v10 = std::vector<std::string>::operator[](addrList, i);
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/addr_processor.cpp",
      "GenerateFileInfoForWorld",
      20);
    common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
      &v16,
      (const char (*)[81])"[LoadWorld][GenerateFileInfoForWorld] size of AddList is different from md5List.");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
};

// Line 31: range 000000000CBCFBF6-000000000CBCFD14
void __cdecl AddrProcessor::BlockAddrListToBlockAddrMap(
        const std::vector<std::string> *addrList,
        std::map<int,std::map<const IntPair,const std::string&>> *blockAddrMap)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  std::vector<std::string>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+20h] [rbp-40h]
  const std::string *blockAddr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  __for_range = addrList;
  __for_begin._M_current = std::vector<std::string>::begin(addrList)._M_current;
  __for_end._M_current = std::vector<std::string>::end(addrList)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
  {
    blockAddr = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
    if ( !AddrProcessor::ParseWorldBlockAddr(blockAddr, blockAddrMap) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/addr_processor.cpp",
        "BlockAddrListToBlockAddrMap",
        34);
      v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v8,
             (const char (*)[48])"[BlockAddrListToBlockAddrMap] parse block addr ");
      v3 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, blockAddr);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v3, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
  }
};

// Line 39: range 000000000CBCFD16-000000000CBD019F
bool __cdecl AddrProcessor::ParseWorldBlockAddr(
        const std::string *blockAddr,
        std::map<int,std::map<const IntPair,const std::string&>> *blockAddrMap)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  std::string *v6; // rax
  std::string *v7; // rax
  std::string *v8; // rax
  bool result; // al
  std::allocator<char> __a; // [rsp+1Fh] [rbp-161h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::map<const IntPair,const std::string&> > >::_Self __x; // [rsp+20h] [rbp-160h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::map<const IntPair,const std::string&> > >::_Self __y; // [rsp+28h] [rbp-158h] BYREF
  std::string *fileName; // [rsp+30h] [rbp-150h]
  std::map<const IntPair,const std::string&> *sceneData; // [rsp+38h] [rbp-148h]
  std::pair<IntPair,const std::string&> v15; // [rsp+40h] [rbp-140h] BYREF
  std::string seperator; // [rsp+50h] [rbp-130h] BYREF
  char v17[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 10 sceneId:50 64 8 13 blockIndex:54 96 24 11 addrSegs:40 160 24 15 fileNameSegs:45";
  *(_QWORD *)(v2 + 16) = AddrProcessor::ParseWorldBlockAddr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 96));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&seperator, ".", &__a);
  CommonUtils::split(blockAddr, &seperator, (std::vector<std::string> *)(v2 + 96));
  std::string::~string(&seperator);
  std::allocator<char>::~allocator(&__a);
  if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v2 + 96)) > 1 )
  {
    fileName = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 96), 0LL);
    std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&seperator, "_", &__a);
    CommonUtils::split(fileName, &seperator, (std::vector<std::string> *)(v2 + 160));
    std::string::~string(&seperator);
    std::allocator<char>::~allocator(&__a);
    if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v2 + 160)) > 3 )
    {
      v6 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 160), 1uLL);
      *(_DWORD *)(v2 + 48) = CommonUtils::StoiDefaultZero(v6);
      if ( *(_DWORD *)(v2 + 48) )
      {
        IntPair::IntPair((IntPair *const)(v2 + 64));
        v7 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 160), 2uLL);
        *(_DWORD *)(v2 + 64) = CommonUtils::StoiDefaultZero(v7);
        v8 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 160), 3uLL);
        *(_DWORD *)(v2 + 68) = CommonUtils::StoiDefaultZero(v8);
        __y._M_node = std::map<int,std::map<IntPair const,std::string const&>>::end(blockAddrMap)._M_node;
        __x._M_node = std::map<int,std::map<IntPair const,std::string const&>>::find(
                        blockAddrMap,
                        (const std::map<int,std::map<const IntPair,const std::string&>>::key_type *)(v2 + 48))._M_node;
        if ( std::operator==(&__x, &__y) )
          std::map<int,std::map<IntPair const,std::string const&>>::operator[](
            blockAddrMap,
            (const std::map<int,std::map<const IntPair,const std::string&>>::key_type *)(v2 + 48));
        sceneData = std::map<int,std::map<IntPair const,std::string const&>>::operator[](
                      blockAddrMap,
                      (const std::map<int,std::map<const IntPair,const std::string&>>::key_type *)(v2 + 48));
        std::pair<IntPair,std::string const&>::pair<IntPair&,true>(&v15, (IntPair *)(v2 + 64), blockAddr);
        std::map<IntPair const,std::string const&>::insert<std::pair<IntPair,std::string const&>>(sceneData, &v15);
        v5 = 1;
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      v5 = 0;
    }
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 160));
  }
  else
  {
    v5 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 96));
  result = v5;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 65: range 000000000CBD01A0-000000000CBD0780
bool __cdecl AddrProcessor::ParseWorldBlockAddrAndMd5(
        const std::string *blockAddr,
        unsigned int md5,
        std::map<int,std::map<const IntPair,const std::string&>> *blockAddrMap,
        std::map<int,std::map<const IntPair,unsigned int>> *md5Map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::vector<std::string>::size_type v7; // rax
  common::milog::MiLogStream *v8; // rax
  bool v9; // r14
  std::string *v10; // rax
  std::string *v11; // rax
  std::string *v12; // rax
  std::map<const IntPair,unsigned int> *v13; // rax
  std::map<const IntPair,unsigned int>::mapped_type *v14; // rax
  unsigned int *v15; // rdx
  bool result; // al
  std::allocator<char> __a; // [rsp+27h] [rbp-169h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::map<const IntPair,const std::string&> > >::_Self __x; // [rsp+28h] [rbp-168h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::map<const IntPair,unsigned int> > >::_Self v21; // [rsp+30h] [rbp-160h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::map<const IntPair,const std::string&> > >::_Self __y; // [rsp+38h] [rbp-158h] BYREF
  std::string *fileName; // [rsp+40h] [rbp-150h]
  std::map<const IntPair,const std::string&> *sceneAddrData; // [rsp+48h] [rbp-148h]
  std::pair<IntPair,const std::string&> v25; // [rsp+50h] [rbp-140h] BYREF
  std::string seperator; // [rsp+60h] [rbp-130h] BYREF
  char v27[272]; // [rsp+80h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 10 sceneId:78 64 8 13 blockIndex:81 96 24 11 addrSegs:66 160 24 15 fileNameSegs:70";
  *(_QWORD *)(v4 + 16) = AddrProcessor::ParseWorldBlockAddrAndMd5;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 96));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&seperator, "/", &__a);
  CommonUtils::split(blockAddr, &seperator, (std::vector<std::string> *)(v4 + 96));
  std::string::~string(&seperator);
  std::allocator<char>::~allocator(&__a);
  v7 = std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 96));
  fileName = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 96), v7 - 1);
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 160));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&seperator, "_", &__a);
  CommonUtils::split(fileName, &seperator, (std::vector<std::string> *)(v4 + 160));
  std::string::~string(&seperator);
  std::allocator<char>::~allocator(&__a);
  if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 160)) > 3 )
  {
    v10 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 160), 1uLL);
    *(_DWORD *)(v4 + 48) = CommonUtils::StoiDefaultZero(v10);
    if ( *(_DWORD *)(v4 + 48) )
    {
      IntPair::IntPair((IntPair *const)(v4 + 64));
      v11 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 160), 2uLL);
      *(_DWORD *)(v4 + 64) = CommonUtils::StoiDefaultZero(v11);
      v12 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 160), 3uLL);
      *(_DWORD *)(v4 + 68) = CommonUtils::StoiDefaultZero(v12);
      __y._M_node = std::map<int,std::map<IntPair const,std::string const&>>::end(blockAddrMap)._M_node;
      __x._M_node = std::map<int,std::map<IntPair const,std::string const&>>::find(
                      blockAddrMap,
                      (const std::map<int,std::map<const IntPair,const std::string&>>::key_type *)(v4 + 48))._M_node;
      if ( std::operator==(&__x, &__y) )
        std::map<int,std::map<IntPair const,std::string const&>>::operator[](
          blockAddrMap,
          (const std::map<int,std::map<const IntPair,const std::string&>>::key_type *)(v4 + 48));
      sceneAddrData = std::map<int,std::map<IntPair const,std::string const&>>::operator[](
                        blockAddrMap,
                        (const std::map<int,std::map<const IntPair,const std::string&>>::key_type *)(v4 + 48));
      std::pair<IntPair,std::string const&>::pair<IntPair&,true>(&v25, (IntPair *)(v4 + 64), blockAddr);
      std::map<IntPair const,std::string const&>::insert<std::pair<IntPair,std::string const&>>(sceneAddrData, &v25);
      __y._M_node = std::map<int,std::map<IntPair const,unsigned int>>::end(md5Map)._M_node;
      v21._M_node = std::map<int,std::map<IntPair const,unsigned int>>::find(
                      md5Map,
                      (const std::map<int,std::map<const IntPair,unsigned int>>::key_type *)(v4 + 48))._M_node;
      if ( std::operator==(
             &v21,
             (const std::_Rb_tree_iterator<std::pair<int const,std::map<const IntPair,unsigned int> > >::_Self *)&__y) )
      {
        std::map<int,std::map<IntPair const,unsigned int>>::operator[](
          md5Map,
          (const std::map<int,std::map<const IntPair,unsigned int>>::key_type *)(v4 + 48));
      }
      v13 = std::map<int,std::map<IntPair const,unsigned int>>::operator[](
              md5Map,
              (const std::map<int,std::map<const IntPair,unsigned int>>::key_type *)(v4 + 48));
      v14 = std::map<IntPair const,unsigned int>::operator[](
              v13,
              (std::map<const IntPair,unsigned int>::key_type *)(v4 + 64));
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v14);
      }
      *v15 = md5;
      v9 = 1;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&seperator,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/addr_processor.cpp",
      "ParseWorldBlockAddrAndMd5",
      74);
    v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           (common::milog::MiLogStream *const)&seperator,
           (const char (*)[49])"fileName is less than 4 '_' segments. fileName :");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, fileName);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&seperator);
    v9 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 160));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 96));
  result = v9;
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};
