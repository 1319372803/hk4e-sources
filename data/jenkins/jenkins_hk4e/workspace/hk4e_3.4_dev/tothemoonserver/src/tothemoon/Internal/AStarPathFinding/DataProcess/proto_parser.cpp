// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataProcess/proto_parser.cpp

// Line 18: range 000000000CBDBDE4-000000000CBDC0A2
ToTheMoonProto::SVOBlockProto *__cdecl ProtoParser::LoadBlockProto(std::string *p_addr)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  ToTheMoonProto::SVOBlockProto *v4; // r14
  std::_Ios_Openmode v5; // eax
  ToTheMoonProto::SVOBlockProto *result; // rax
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-310h] BYREF
  char v8[752]; // [rsp+40h] [rbp-2F0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(704LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 528 8 input:24";
  *(_QWORD *)(v1 + 16) = ProtoParser::LoadBlockProto;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862738] = -202116109;
  v3[536862739] = -202116109;
  v3[536862740] = -202116109;
  v3[536862741] = -202116109;
  v4 = (ToTheMoonProto::SVOBlockProto *)operator new(0x38uLL);
  ToTheMoonProto::SVOBlockProto::SVOBlockProto(v4);
  if ( std::operator==<char>(p_addr, byte_1A4E8860) )
    std::string::operator=(p_addr, "E:\\Data\\SVOBlockData.data");
  v5 = std::operator|(_S_in, _S_bin);
  std::fstream::basic_fstream(v1 + 48, p_addr, (unsigned int)v5);
  if ( (unsigned __int8)google::protobuf::Message::ParseFromIstream(v4, (std::istream *)(v1 + 48)) != 1 )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/proto_parser.cpp",
      "LoadBlockProto",
      27);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v7,
      (const char (*)[29])"Failed to parse block proto.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v4 = 0LL;
  }
  std::fstream::~fstream(v1 + 48);
  result = v4;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 34: range 000000000CBDC0A4-000000000CBDC1DD
std::shared_ptr<SVOBlock> __cdecl ProtoParser::ParseProtoBlock(const ToTheMoonProto::SVOBlockProto *blockProto)
{
  NodePairMap *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<BlockPathFindingDataGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  std::shared_ptr<SVOBlock> result; // rax
  NodePairMap *blockProtoa; // [rsp+0h] [rbp-70h]
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  blockProtoa = v1;
  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 4 g:35";
  *(_QWORD *)(v2 + 16) = ProtoParser::ParseProtoBlock;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::make_shared<BlockPathFindingDataGenerator>();
  v5 = std::__shared_ptr_access<BlockPathFindingDataGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockPathFindingDataGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_WORD *)(((unsigned __int64)blockProto >> 3) + 0x7FFF8000) )
    __asan_report_store16(blockProto, v5);
  BlockPathFindingDataGenerator::ProcessBlockProto(
    (BlockPathFindingDataGenerator *const)blockProto,
    (const ToTheMoonProto::SVOBlockProto *)v5,
    blockProtoa);
  std::shared_ptr<BlockPathFindingDataGenerator>::~shared_ptr((std::shared_ptr<BlockPathFindingDataGenerator> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *)blockProto;
  return result;
};

// Line 40: range 000000000CBDC1DE-000000000CBDC5AF
std::shared_ptr<SVOBlock> __cdecl ProtoParser::ParseProtoBlock(const std::string *addr)
{
  const std::string *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  std::shared_ptr<SVOBlock> result; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-460h] BYREF
  char v9[1088]; // [rsp+30h] [rbp-440h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 56 13 blockProto:41 128 200 16 dataGenerator:54 400 528 8 input:42";
  *(_QWORD *)(v2 + 16) = ProtoParser::ParseProtoBlock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862730] = -218959360;
  v4[536862731] = -218959118;
  v4[536862732] = 62194;
  v4[536862749] = -202116109;
  v4[536862750] = -202116109;
  v4[536862751] = -202116109;
  v4[536862752] = -202116109;
  ToTheMoonProto::SVOBlockProto::SVOBlockProto((ToTheMoonProto::SVOBlockProto *const)(v2 + 32));
  std::operator|(_S_in, _S_bin);
  std::fstream::basic_fstream(v2 + 400, v1);
  if ( (unsigned __int8)std::ios::good(v2 + 664) != 1 )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/proto_parser.cpp",
      "ParseProtoBlock",
      45);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v8, (const char (*)[18])"load file failed.");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, v1);
    common::milog::MiLogStream::~MiLogStream(&v8);
    std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)addr, 0LL);
  }
  else if ( (unsigned __int8)google::protobuf::Message::ParseFromIstream(
                               (google::protobuf::Message *)(v2 + 32),
                               (std::istream *)(v2 + 400)) != 1 )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/proto_parser.cpp",
      "ParseProtoBlock",
      50);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v8,
           (const char (*)[33])"Failed to parse block proto for ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, v1);
    common::milog::MiLogStream::~MiLogStream(&v8);
    std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)addr, 0LL);
  }
  else
  {
    BlockPathFindingDataGenerator::BlockPathFindingDataGenerator((BlockPathFindingDataGenerator *const)(v2 + 128));
    if ( *(_WORD *)(((unsigned __int64)addr >> 3) + 0x7FFF8000) )
      __asan_report_store16(addr, v2 + 400);
    BlockPathFindingDataGenerator::ProcessBlockProto(
      (BlockPathFindingDataGenerator *const)addr,
      (const ToTheMoonProto::SVOBlockProto *)(v2 + 128),
      (NodePairMap *)(v2 + 32));
    BlockPathFindingDataGenerator::~BlockPathFindingDataGenerator((BlockPathFindingDataGenerator *const)(v2 + 128));
  }
  std::fstream::~fstream(v2 + 400);
  ToTheMoonProto::SVOBlockProto::~SVOBlockProto((ToTheMoonProto::SVOBlockProto *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v9);
  }
  result._M_ptr = (std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *)addr;
  return result;
};

// Line 60: range 000000000CBDC5B0-000000000CBDC9E0
std::shared_ptr<SVOBlock> __cdecl ProtoParser::ParseProtoBlock(
        const std::string *addr,
        const IntPair *blockIndex,
        std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *blockProtoMap,
        BlockPathFindingDataGenerator *dataGenerator)
{
  BlockPathFindingDataGenerator *v4; // r8
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // rbx
  common::milog::MiLogStream *v8; // rdx
  std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::mapped_type *v11; // rax
  NodePairMap *v12; // rdi
  std::shared_ptr<SVOBlock> result; // rax
  BlockPathFindingDataGenerator *dataGeneratora; // [rsp+8h] [rbp-348h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-320h] BYREF
  char v19[768]; // [rsp+50h] [rbp-300h] BYREF

  dataGeneratora = v4;
  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(736LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 16 13 blockProto:61 80 528 8 input:62";
  *(_QWORD *)(v5 + 16) = ProtoParser::ParseProtoBlock;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = 62194;
  v7[536862739] = -202116109;
  v7[536862740] = -202116109;
  v7[536862741] = -202116109;
  v7[536862742] = -202116109;
  std::make_shared<ToTheMoonProto::SVOBlockProto>();
  std::operator|(_S_in, _S_bin);
  std::fstream::basic_fstream(v5 + 80, blockIndex);
  if ( (unsigned __int8)std::ios::good(v5 + 344) != 1 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/DataProcess/proto_parser.cpp",
      "ParseProtoBlock",
      65);
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v18, (const char (*)[18])"load file failed.");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)blockIndex);
    common::milog::MiLogStream::~MiLogStream(&v18);
    std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)addr, 0LL);
  }
  else
  {
    v9 = std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
    if ( (unsigned __int8)google::protobuf::Message::ParseFromIstream(v9, (std::istream *)(v5 + 80)) != 1 )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/proto_parser.cpp",
        "ParseProtoBlock",
        70);
      v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v18,
              (const char (*)[33])"Failed to parse block proto for ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)blockIndex);
      common::milog::MiLogStream::~MiLogStream(&v18);
      std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)addr, 0LL);
    }
    else
    {
      v11 = std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::operator[](
              (std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *const)dataGenerator,
              (const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::key_type *)blockProtoMap);
      std::shared_ptr<ToTheMoonProto::SVOBlockProto>::operator=(
        v11,
        (const std::shared_ptr<ToTheMoonProto::SVOBlockProto> *)(v5 + 48));
      v12 = (NodePairMap *)std::__shared_ptr<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2> *const)(v5 + 48));
      if ( *(_WORD *)(((unsigned __int64)addr >> 3) + 0x7FFF8000) )
      {
        v12 = (NodePairMap *)addr;
        __asan_report_store16(addr, v5 + 48);
      }
      BlockPathFindingDataGenerator::ProcessBlockProto(
        (BlockPathFindingDataGenerator *const)addr,
        (const ToTheMoonProto::SVOBlockProto *)dataGeneratora,
        v12);
    }
  }
  std::fstream::~fstream(v5 + 80);
  std::shared_ptr<ToTheMoonProto::SVOBlockProto>::~shared_ptr((std::shared_ptr<ToTheMoonProto::SVOBlockProto> *const)(v5 + 48));
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8054) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8058) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *)addr;
  return result;
};

// Line 80: range 000000000CBDC9E2-000000000CBDCF9E
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<SVOWorld> __cdecl ProtoParser::ParseProtoWorld(
        const std::map<const IntPair,const std::string&> *worldDataAddrMap,
        bool hasInterBlockLink)
{
  bool v2; // dl
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int v7; // r15d
  std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::mapped_type *v10; // rax
  std::shared_ptr<SVOWorld> result; // rax
  bool hasInterBlockLinka; // [rsp+Ch] [rbp-4D4h]
  std::map<const IntPair,const std::string&>::const_iterator __for_begin; // [rsp+28h] [rbp-4B8h] BYREF
  std::map<const IntPair,const std::string&>::const_iterator __for_end; // [rsp+30h] [rbp-4B0h] BYREF
  const std::map<const IntPair,const std::string&> *__for_range; // [rsp+38h] [rbp-4A8h]
  const std::pair<const IntPair,const std::string&> *blockProtoAddrItem; // [rsp+40h] [rbp-4A0h]
  const std::string *addr; // [rsp+48h] [rbp-498h]
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-490h] BYREF
  char v19[1136]; // [rsp+70h] [rbp-470h] BYREF

  hasInterBlockLinka = v2;
  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1088LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 16 13 blockProto:83 80 48 16 blockProtoMap:81 160 200 16 dataGenerator:98 432 528 8 input:85";
  *(_QWORD *)(v3 + 16) = ProtoParser::ParseProtoWorld;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -218959118;
  v5[536862731] = -218959360;
  v5[536862732] = -218959118;
  v5[536862733] = 62194;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  v5[536862753] = -202116109;
  std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::map((std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *const)(v3 + 80));
  __for_range = (const std::map<const IntPair,const std::string&> *)hasInterBlockLink;
  __for_begin._M_node = std::map<IntPair const,std::string const&>::begin((const std::map<const IntPair,const std::string&> *const)hasInterBlockLink)._M_node;
  __for_end._M_node = std::map<IntPair const,std::string const&>::end((const std::map<const IntPair,const std::string&> *const)hasInterBlockLink)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    blockProtoAddrItem = std::_Rb_tree_const_iterator<std::pair<IntPair const,std::string const&>>::operator*(&__for_begin);
    std::make_shared<ToTheMoonProto::SVOBlockProto>();
    if ( *(_BYTE *)(((unsigned __int64)&blockProtoAddrItem->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&blockProtoAddrItem->second, &__for_end);
    addr = blockProtoAddrItem->second;
    std::operator|(_S_in, _S_bin);
    std::fstream::basic_fstream(v3 + 432, addr);
    if ( (unsigned __int8)std::ios::good(v3 + 696) != 1 )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/DataProcess/proto_parser.cpp",
        "ParseProtoWorld",
        88);
      v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v18,
             (const char (*)[21])"load file failed for");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, addr);
      common::milog::MiLogStream::~MiLogStream(&v18);
      std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)worldDataAddrMap, 0LL);
      v7 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonProto::SVOBlockProto,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      if ( (unsigned __int8)google::protobuf::Message::ParseFromIstream(v8, (std::istream *)(v3 + 432)) != 1 )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/tothemoon/Internal/AStarPathFinding/DataProcess/proto_parser.cpp",
          "ParseProtoWorld",
          93);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v18,
               (const char (*)[33])"Failed to parse block proto for ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, addr);
        common::milog::MiLogStream::~MiLogStream(&v18);
        std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)worldDataAddrMap, 0LL);
        v7 = 0;
      }
      else
      {
        v10 = std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::operator[](
                (std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *const)(v3 + 80),
                &blockProtoAddrItem->first);
        std::shared_ptr<ToTheMoonProto::SVOBlockProto>::operator=(
          v10,
          (const std::shared_ptr<ToTheMoonProto::SVOBlockProto> *)(v3 + 48));
        v7 = 1;
      }
    }
    std::fstream::~fstream(v3 + 432);
    std::shared_ptr<ToTheMoonProto::SVOBlockProto>::~shared_ptr((std::shared_ptr<ToTheMoonProto::SVOBlockProto> *const)(v3 + 48));
    if ( v7 != 1 )
      goto LABEL_23;
    std::_Rb_tree_const_iterator<std::pair<IntPair const,std::string const&>>::operator++(&__for_begin);
  }
  BlockPathFindingDataGenerator::BlockPathFindingDataGenerator((BlockPathFindingDataGenerator *const)(v3 + 160));
  if ( hasInterBlockLinka )
  {
    if ( *(_WORD *)(((unsigned __int64)worldDataAddrMap >> 3) + 0x7FFF8000) )
      __asan_report_store16(worldDataAddrMap, &__for_end);
    BlockPathFindingDataGenerator::ProcessBlockProtoMapToWorldWithInterBlockLink(
      (BlockPathFindingDataGenerator *const)worldDataAddrMap,
      (const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *)(v3 + 160));
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)worldDataAddrMap >> 3) + 0x7FFF8000) )
      __asan_report_store16(worldDataAddrMap, &__for_end);
    BlockPathFindingDataGenerator::ProcessBlockProtoMapToWorldWithoutInterBlockLink(
      (BlockPathFindingDataGenerator *const)worldDataAddrMap,
      (const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *)(v3 + 160));
  }
  BlockPathFindingDataGenerator::~BlockPathFindingDataGenerator((BlockPathFindingDataGenerator *const)(v3 + 160));
LABEL_23:
  std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::~map((std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *const)(v3 + 80));
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1088LL, v19);
  }
  result._M_ptr = (std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)worldDataAddrMap;
  return result;
};

// Line 106: range 000000000CBDCFA0-000000000CBDD059
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<SVOWorld> __cdecl ProtoParser::ParseProtoWorld(
        const std::map<const IntPair,const std::string&> *worldDataAddrMap,
        const std::map<const IntPair,unsigned int> *md5Map,
        bool hasInterBlockLink)
{
  std::shared_ptr<SVOWorld> result; // rax
  const std::map<const IntPair,unsigned int> *md5Mapa; // [rsp+8h] [rbp-38h]
  std::shared_ptr<SVOWorld> v5; // [rsp+20h] [rbp-20h] BYREF

  md5Mapa = (const std::map<const IntPair,unsigned int> *)hasInterBlockLink;
  if ( *(_WORD *)(((unsigned __int64)worldDataAddrMap >> 3) + 0x7FFF8000) )
    __asan_report_store16(worldDataAddrMap, md5Map);
  ProtoParser::ParseProtoWorld(worldDataAddrMap, (bool)md5Map);
  std::shared_ptr<SVOWorld>::shared_ptr(&v5, (const std::shared_ptr<SVOWorld> *)worldDataAddrMap);
  SVODataProcessor::SetWorldBlocksMd5(&v5, md5Mapa);
  std::shared_ptr<SVOWorld>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)worldDataAddrMap;
  return result;
};

// Line 113: range 000000000CBDD05A-000000000CBDDD8A
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<SVOWorld> __cdecl ProtoParser::UpdateProtoWorld(
        const std::map<const IntPair,const std::string&> *worldDataAddrMap,
        const std::map<const IntPair,unsigned int> *md5Map,
        std::shared_ptr<SVOWorld> *p_originWorld,
        bool hasInterBlockLink)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::shared_ptr<SVOWorld> result; // rax
  std::map<const IntPair,unsigned int>::size_type v8; // r14
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v12; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v14; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v16; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>>::mapped_type *v17; // rax
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  unsigned int *p_md5; // rax
  unsigned int md5; // ecx
  char v21; // al
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v23; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v25; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v27; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>>::mapped_type *v28; // rax
  std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  unsigned int *v30; // rax
  unsigned int v31; // ecx
  char v32; // al
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v35; // rax
  std::shared_ptr<SVOBlock> *v36; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v37; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>>::mapped_type *v38; // r14
  std::shared_ptr<SVOBlock> *v39; // rax
  std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v41; // rax
  std::map<IntPair,std::shared_ptr<SVOBlock>>::mapped_type *v42; // r14
  std::map<IntPair,std::shared_ptr<SVOBlock>> *v43; // rax
  std::shared_ptr<SVOBlock> *v44; // rax
  std::pair<const IntPair,std::shared_ptr<SVOBlock> > *v45; // rax
  common::milog::MiLogStream *v46; // r14
  common::milog::MiLogStream *v47; // rax
  std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::mapped_type *v48; // rax
  float *p_blockSize; // rdx
  _BOOL8 p_originWorlda; // [rsp+10h] [rbp-340h]
  bool sameMd5ForAll; // [rsp+37h] [rbp-319h]
  std::map<IntPair,std::shared_ptr<SVOBlock>>::iterator __for_begin_0; // [rsp+38h] [rbp-318h] BYREF
  std::map<IntPair,std::shared_ptr<SVOBlock>>::iterator __for_end_0; // [rsp+40h] [rbp-310h] BYREF
  std::map<const IntPair,unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-308h] BYREF
  std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self __x; // [rsp+50h] [rbp-300h] BYREF
  const std::map<const IntPair,unsigned int> *__for_range; // [rsp+58h] [rbp-2F8h]
  const std::pair<const IntPair,unsigned int> *md5Iter; // [rsp+60h] [rbp-2F0h]
  const std::map<const IntPair,unsigned int> *__for_range_0; // [rsp+68h] [rbp-2E8h]
  std::map<IntPair,std::shared_ptr<SVOBlock>> *__for_range_1; // [rsp+70h] [rbp-2E0h]
  std::pair<const IntPair,std::shared_ptr<SVOBlock> > *updatedBlockItem; // [rsp+78h] [rbp-2D8h]
  const std::pair<const IntPair,unsigned int> *md5Iter_0; // [rsp+80h] [rbp-2D0h]
  const std::string *dataAddr; // [rsp+88h] [rbp-2C8h]
  std::shared_ptr<SVOBlock> p_updatedBlock; // [rsp+90h] [rbp-2C0h] BYREF
  std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > p_blockMap; // [rsp+A0h] [rbp-2B0h] BYREF
  std::string addr; // [rsp+B0h] [rbp-2A0h] BYREF
  std::string val; // [rsp+E0h] [rbp-270h] BYREF
  char v68[592]; // [rsp+100h] [rbp-250h] BYREF

  p_originWorlda = hasInterBlockLink;
  v4 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(544LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 8 14 blockIndex:159 80 16 12 worldMap:135 112 48 19 updatedBlockMap:134 192 48 17 blockProt"
                        "oMap:137 272 200 18 blockGenerator:136";
  *(_QWORD *)(v4 + 16) = ProtoParser::UpdateProtoWorld;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862725] = -218959118;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862734] = -218103808;
  v6[536862735] = -202116109;
  v6[536862736] = -202116109;
  if ( std::operator==<SVOWorld>((const std::shared_ptr<SVOWorld> *)p_originWorlda, 0LL) )
  {
    std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)worldDataAddrMap, 0LL);
  }
  else
  {
    sameMd5ForAll = 1;
    v8 = std::map<IntPair const,unsigned int>::size((const std::map<const IntPair,unsigned int> *const)p_originWorld);
    v9 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_originWorlda);
    v10 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9);
    if ( v8 == std::map<IntPair,std::shared_ptr<SVOBlock>>::size(v10) )
    {
      __for_range = (const std::map<const IntPair,unsigned int> *)p_originWorld;
      __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Base_ptr)std::map<IntPair const,unsigned int>::begin((const std::map<const IntPair,unsigned int> *const)p_originWorld)._M_node;
      __for_end._M_node = std::map<IntPair const,unsigned int>::end((const std::map<const IntPair,unsigned int> *const)p_originWorld)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<const IntPair,unsigned int> >::_Self *)&__for_end_0,
                &__for_end) )
      {
        md5Iter = std::_Rb_tree_const_iterator<std::pair<IntPair const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const IntPair,unsigned int> > *const)&__for_end_0);
        v11 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_originWorlda);
        v12 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11);
        *(std::map<IntPair,std::shared_ptr<SVOBlock>>::iterator *)(v4 + 48) = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(v12);
        v13 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_originWorlda);
        v14 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13);
        __x._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::find(v14, &md5Iter->first)._M_node;
        if ( std::operator==(
               &__x,
               (const std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self *)(v4 + 48)) )
        {
          goto LABEL_15;
        }
        v15 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_originWorlda);
        v16 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15);
        v17 = std::map<IntPair,std::shared_ptr<SVOBlock>>::at(v16, &md5Iter->first);
        v18 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)v17);
        p_md5 = &v18->md5;
        if ( *(_BYTE *)(((unsigned __int64)p_md5 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_md5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_md5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_md5);
        }
        md5 = v18->md5;
        if ( *(_BYTE *)(((unsigned __int64)&md5Iter->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)md5Iter + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&md5Iter->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&md5Iter->second);
        }
        if ( md5 == md5Iter->second )
          v21 = 0;
        else
LABEL_15:
          v21 = 1;
        if ( v21 )
        {
          sameMd5ForAll = 0;
          break;
        }
        std::_Rb_tree_const_iterator<std::pair<IntPair const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const IntPair,unsigned int> > *const)&__for_end_0);
      }
    }
    if ( sameMd5ForAll )
    {
      std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)worldDataAddrMap, 0LL);
    }
    else
    {
      std::map<IntPair,std::shared_ptr<SVOBlock>>::map((std::map<IntPair,std::shared_ptr<SVOBlock>> *const)(v4 + 112));
      std::make_shared<std::map<IntPair,std::shared_ptr<SVOBlock>>>();
      BlockPathFindingDataGenerator::BlockPathFindingDataGenerator((BlockPathFindingDataGenerator *const)(v4 + 272));
      std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::map((std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *const)(v4 + 192));
      __for_range_0 = (const std::map<const IntPair,unsigned int> *)p_originWorld;
      __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Base_ptr)std::map<IntPair const,unsigned int>::begin((const std::map<const IntPair,unsigned int> *const)p_originWorld)._M_node;
      __for_end._M_node = std::map<IntPair const,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<const IntPair,unsigned int> >::_Self *)&__for_end_0,
                &__for_end) )
      {
        md5Iter_0 = std::_Rb_tree_const_iterator<std::pair<IntPair const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const IntPair,unsigned int> > *const)&__for_end_0);
        v22 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_originWorlda);
        v23 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v22);
        *(std::map<IntPair,std::shared_ptr<SVOBlock>>::iterator *)(v4 + 48) = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(v23);
        v24 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_originWorlda);
        v25 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v24);
        __x._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::find(v25, &md5Iter_0->first)._M_node;
        if ( std::operator==(
               &__x,
               (const std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Self *)(v4 + 48)) )
        {
          goto LABEL_30;
        }
        v26 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_originWorlda);
        v27 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26);
        v28 = std::map<IntPair,std::shared_ptr<SVOBlock>>::at(v27, &md5Iter_0->first);
        v29 = std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)v28);
        v30 = &v29->md5;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        v31 = v29->md5;
        if ( *(_BYTE *)(((unsigned __int64)&md5Iter_0->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)md5Iter_0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&md5Iter_0->second >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&md5Iter_0->second);
        }
        if ( v31 == md5Iter_0->second )
          v32 = 0;
        else
LABEL_30:
          v32 = 1;
        if ( v32 )
        {
          *(std::map<const IntPair,const std::string&>::const_iterator *)(v4 + 48) = std::map<IntPair const,std::string const&>::end((const std::map<const IntPair,const std::string&> *const)md5Map);
          __x._M_node = (std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<SVOBlock> > >::_Base_ptr)std::map<IntPair const,std::string const&>::find((const std::map<const IntPair,const std::string&> *const)md5Map, (std::map<const IntPair,const std::string&>::key_type *)&md5Iter_0->first)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_const_iterator<std::pair<const IntPair,const std::string&> >::_Self *)&__x,
                 (const std::_Rb_tree_const_iterator<std::pair<const IntPair,const std::string&> >::_Self *)(v4 + 48)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&addr._anon_0,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/tothemoon/Internal/AStarPathFinding/DataProcess/proto_parser.cpp",
              "UpdateProtoWorld",
              145);
            v33 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    (common::milog::MiLogStream *const)&addr._anon_0,
                    (const char (*)[32])"[UpdateProtoWorld] Block index ");
            IntPair::ToString[abi:cxx11](&val, &md5Iter_0->first);
            v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, &val);
            common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v34, (const char (*)[12])" not found.");
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&addr._anon_0);
          }
          else
          {
            dataAddr = std::map<IntPair const,std::string const&>::at(
                         (const std::map<const IntPair,const std::string&> *const)md5Map,
                         (std::map<const IntPair,const std::string&>::key_type *)&md5Iter_0->first);
            ProtoParser::ParseProtoBlock(
              &addr,
              (const IntPair *)dataAddr,
              (std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *)md5Iter_0,
              (BlockPathFindingDataGenerator *)(v4 + 192));
            v35 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
            v36 = std::map<IntPair,std::shared_ptr<SVOBlock>>::operator[](v35, &md5Iter_0->first);
            std::shared_ptr<SVOBlock>::operator=(v36, (std::shared_ptr<SVOBlock> *)&addr);
            std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)&addr);
            v37 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
            v38 = std::map<IntPair,std::shared_ptr<SVOBlock>>::operator[](v37, &md5Iter_0->first);
            v39 = std::map<IntPair,std::shared_ptr<SVOBlock>>::operator[](
                    (std::map<IntPair,std::shared_ptr<SVOBlock>> *const)(v4 + 112),
                    &md5Iter_0->first);
            std::shared_ptr<SVOBlock>::operator=(v39, v38);
          }
        }
        else
        {
          v40 = std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_originWorlda);
          v41 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)v40);
          v42 = std::map<IntPair,std::shared_ptr<SVOBlock>>::at(v41, &md5Iter_0->first);
          v43 = std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<IntPair,std::shared_ptr<SVOBlock>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          v44 = std::map<IntPair,std::shared_ptr<SVOBlock>>::operator[](v43, &md5Iter_0->first);
          std::shared_ptr<SVOBlock>::operator=(v44, v42);
        }
        std::_Rb_tree_const_iterator<std::pair<IntPair const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const IntPair,unsigned int> > *const)&__for_end_0);
      }
      __for_range_1 = (std::map<IntPair,std::shared_ptr<SVOBlock>> *)(v4 + 112);
      __for_begin_0._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::begin((std::map<IntPair,std::shared_ptr<SVOBlock>> *const)(v4 + 112))._M_node;
      __for_end_0._M_node = std::map<IntPair,std::shared_ptr<SVOBlock>>::end(__for_range_1)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v45 = std::_Rb_tree_iterator<std::pair<IntPair const,std::shared_ptr<SVOBlock>>>::operator*(&__for_begin_0);
        updatedBlockItem = v45;
        if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v45, &__for_end_0);
        *(IntPair *)(v4 + 48) = updatedBlockItem->first;
        __x._M_node = std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::end((std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *const)(v4 + 192))._M_node;
        __for_end._M_node = std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::find(
                              (std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *const)(v4 + 192),
                              (const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::key_type *)(v4 + 48))._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto> > >::_Self *)&__for_end,
               (const std::_Rb_tree_iterator<std::pair<const IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto> > >::_Self *)&__x) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&addr._anon_0,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/tothemoon/Internal/AStarPathFinding/DataProcess/proto_parser.cpp",
            "UpdateProtoWorld",
            161);
          v46 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  (common::milog::MiLogStream *const)&addr._anon_0,
                  (const char (*)[32])"[UpdateProtoWorld] Block index ");
          IntPair::ToString[abi:cxx11](&val, (const IntPair *const)(v4 + 48));
          v47 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, &val);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v47,
            (const char (*)[29])" not found in blockProtoMap.");
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&addr._anon_0);
        }
        else
        {
          std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(
            &p_blockMap,
            (const std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *)(v4 + 80));
          v48 = std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::at(
                  (std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *const)(v4 + 192),
                  (const std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::key_type *)(v4 + 48));
          std::shared_ptr<ToTheMoonProto::SVOBlockProto>::shared_ptr(
            (std::shared_ptr<ToTheMoonProto::SVOBlockProto> *const)&addr,
            v48);
          std::shared_ptr<SVOBlock>::shared_ptr(&p_updatedBlock, &updatedBlockItem->second);
          BlockPathFindingDataGenerator::UpdateWorldBlockNeighbors(
            (BlockPathFindingDataGenerator *const)(v4 + 272),
            &p_updatedBlock,
            (const IntPair *)(v4 + 48),
            (BlockPathFindingDataGenerator *)(v4 + 272),
            (std::shared_ptr<ToTheMoonProto::SVOBlockProto> *)&addr,
            &p_blockMap);
          std::shared_ptr<SVOBlock>::~shared_ptr(&p_updatedBlock);
          std::shared_ptr<ToTheMoonProto::SVOBlockProto>::~shared_ptr((std::shared_ptr<ToTheMoonProto::SVOBlockProto> *const)&addr);
          std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr(&p_blockMap);
          std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::shared_ptr(
            (std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *const)&addr,
            (const std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *)(v4 + 80));
          BlockPathFindingDataGenerator::UpdateWorldNeighborBlocks(
            (BlockPathFindingDataGenerator *const)(v4 + 272),
            (const IntPair *)(v4 + 48),
            (BlockPathFindingDataGenerator *)(v4 + 272),
            (std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *)&addr);
          std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr((std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *const)&addr);
        }
        std::_Rb_tree_iterator<std::pair<IntPair const,std::shared_ptr<SVOBlock>>>::operator++(&__for_begin_0);
      }
      p_blockSize = &std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_originWorlda)->blockSize;
      if ( *(_WORD *)(((unsigned __int64)worldDataAddrMap >> 3) + 0x7FFF8000) )
        __asan_report_store16(worldDataAddrMap, &__for_end_0);
      std::make_shared<SVOWorld,std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>> &,float &>(
        (std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *)worldDataAddrMap,
        (float *)(v4 + 80),
        (std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *)p_blockSize,
        (float *)(v4 + 80));
      std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>>::~map((std::map<IntPair,std::shared_ptr<ToTheMoonProto::SVOBlockProto>> *const)(v4 + 192));
      BlockPathFindingDataGenerator::~BlockPathFindingDataGenerator((BlockPathFindingDataGenerator *const)(v4 + 272));
      std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>>>::~shared_ptr((std::shared_ptr<std::map<IntPair,std::shared_ptr<SVOBlock>> > *const)(v4 + 80));
      std::map<IntPair,std::shared_ptr<SVOBlock>>::~map((std::map<IntPair,std::shared_ptr<SVOBlock>> *const)(v4 + 112));
    }
  }
  if ( v68 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<SVOWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)worldDataAddrMap;
  return result;
};

// Line 172: range 000000000CBDDD8C-000000000CBDDFD5
void __cdecl ProtoParser::ParseAllProtoToWorld(
        const std::vector<std::string> *addrList,
        std::map<int,std::shared_ptr<SVOWorld>> *worldDataMap)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::shared_ptr<SVOWorld> *v5; // rax
  std::map<int,std::map<const IntPair,const std::string&>>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::map<int,std::map<const IntPair,const std::string&>>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::map<int,std::map<const IntPair,const std::string&>> *__for_range; // [rsp+20h] [rbp-D0h]
  std::pair<int const,std::map<const IntPair,const std::string&> > *worldDataAddrItem; // [rsp+28h] [rbp-C8h]
  char v10[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 9 world:177 80 48 20 worldDataAddrMap:173";
  *(_QWORD *)(v2 + 16) = ProtoParser::ParseAllProtoToWorld;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::map<int,std::map<IntPair const,std::string const&>>::map((std::map<int,std::map<const IntPair,const std::string&>> *const)(v2 + 80));
  AddrProcessor::BlockAddrListToBlockAddrMap(
    addrList,
    (std::map<int,std::map<const IntPair,const std::string&>> *)(v2 + 80));
  __for_range = (std::map<int,std::map<const IntPair,const std::string&>> *)(v2 + 80);
  __for_begin._M_node = std::map<int,std::map<IntPair const,std::string const&>>::begin((std::map<int,std::map<const IntPair,const std::string&>> *const)(v2 + 80))._M_node;
  __for_end._M_node = std::map<int,std::map<IntPair const,std::string const&>>::end((std::map<int,std::map<const IntPair,const std::string&>> *const)(v2 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    worldDataAddrItem = std::_Rb_tree_iterator<std::pair<int const,std::map<IntPair const,std::string const&>>>::operator*(&__for_begin);
    ProtoParser::ParseProtoWorld(
      (const std::map<const IntPair,const std::string&> *)(v2 + 48),
      (_BYTE)worldDataAddrItem + 8);
    v5 = std::map<int,std::shared_ptr<SVOWorld>>::operator[](worldDataMap, &worldDataAddrItem->first);
    std::shared_ptr<SVOWorld>::operator=(v5, (const std::shared_ptr<SVOWorld> *)(v2 + 48));
    std::shared_ptr<SVOWorld>::~shared_ptr((std::shared_ptr<SVOWorld> *const)(v2 + 48));
    std::_Rb_tree_iterator<std::pair<int const,std::map<IntPair const,std::string const&>>>::operator++(&__for_begin);
  }
  std::map<int,std::map<IntPair const,std::string const&>>::~map((std::map<int,std::map<const IntPair,const std::string&>> *const)(v2 + 80));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};
