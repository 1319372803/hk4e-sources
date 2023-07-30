// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/home/player_home_comp.cpp

// Line 56: range 0000000017C6E438-0000000017C6E4E8
int32_t __cdecl PlayerHomeBlock::fromBin(PlayerHomeBlock *const this, const proto::PlayerHomeBlockBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  bool is_unlocked; // cl
  char v6; // dl
  __int64 v7; // rdx
  const proto::PlayerHomeBlockBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::PlayerHomeBlockBin::block_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->block_id = v2;
  is_unlocked = proto::PlayerHomeBlockBin::is_unlocked(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_unlocked, bin, v7);
  this->is_unlocked = is_unlocked;
  return 0;
};

// Line 63: range 0000000017C6E4EA-0000000017C6E59C
int32_t __cdecl PlayerHomeBlock::toBin(const PlayerHomeBlock *const this, proto::PlayerHomeBlockBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::PlayerHomeBlockBin::set_block_id(bin, this->block_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_unlocked);
  }
  proto::PlayerHomeBlockBin::set_is_unlocked(bin, this->is_unlocked);
  return 0;
};

// Line 70: range 0000000017C6E59E-0000000017C6E8D0
int32_t __cdecl PlayerHomeScene::fromBin(PlayerHomeScene *const this, const proto::PlayerHomeSceneBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // al
  unsigned int v7; // eax
  __int64 v8; // rdx
  char v9; // al
  google::protobuf::RepeatedPtrField<proto::PlayerHomeBlockBin>::const_iterator *p_for_end; // rsi
  PlayerHomeBlock *v11; // rax
  unsigned int *v12; // rcx
  PlayerHomeBlock *v13; // r8
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // al
  uint32_t v19; // ecx
  char v20; // dl
  __int64 v21; // rdx
  int32_t result; // eax
  const proto::PlayerHomeSceneBin *bina; // [rsp+0h] [rbp-A0h]
  google::protobuf::RepeatedPtrField<proto::PlayerHomeBlockBin>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerHomeBlockBin>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const google::protobuf::RepeatedPtrField<proto::PlayerHomeBlockBin> *__for_range; // [rsp+20h] [rbp-80h]
  const proto::PlayerHomeBlockBin *block_bin; // [rsp+28h] [rbp-78h]
  char v28[112]; // [rsp+30h] [rbp-70h] BYREF

  bina = bin;
  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 block:75";
  *(_QWORD *)(v2 + 16) = PlayerHomeScene::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = proto::PlayerHomeSceneBin::scene_id(bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(this, bin, v5);
  }
  this->scene_id = v5;
  LOBYTE(v7) = proto::PlayerHomeSceneBin::is_unlocked(bina);
  v8 = v7;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(bin) = v9 != 0;
    __asan_report_store1(&this->is_unlocked, bin, v8);
  }
  this->is_unlocked = v8;
  __for_range = proto::PlayerHomeSceneBin::block_bin_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerHomeBlockBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlayerHomeBlockBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeBlockBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    block_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeBlockBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    PlayerHomeBlock::fromBin((PlayerHomeBlock *const)(v2 + 32), block_bin);
    v11 = std::move<PlayerHomeBlock &>((PlayerHomeBlock *)(v2 + 32));
    std::map<unsigned int,PlayerHomeBlock>::emplace<unsigned int &,PlayerHomeBlock>(
      &this->block_map,
      (unsigned int *)(v2 + 32),
      v11,
      v12,
      v13);
    google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeBlockBin const>::operator++(&__for_begin);
  }
  v14 = proto::PlayerHomeSceneBin::version(bina);
  v15 = *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->version, p_for_end, v16);
  this->version = v14;
  v17 = proto::PlayerHomeSceneBin::audit_state(bina);
  v18 = *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_for_end) = v18 != 0;
    __asan_report_store4(&this->audit_state, p_for_end, v17);
  }
  this->audit_state = v17;
  v19 = proto::PlayerHomeSceneBin::submit_time(bina);
  v20 = *(_BYTE *)(((unsigned __int64)&this->submit_time >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store4(&this->submit_time, p_for_end, v21);
  this->submit_time = v19;
  result = 0;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 86: range 0000000017C6E8D2-0000000017C6EB03
int32_t __cdecl PlayerHomeScene::toBin(const PlayerHomeScene *const this, proto::PlayerHomeSceneBin *bin)
{
  std::map<unsigned int,PlayerHomeBlock>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,PlayerHomeBlock>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,PlayerHomeBlock> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,PlayerHomeBlock> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeBlock> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeBlock> >::type *block; // [rsp+40h] [rbp-10h]
  proto::PlayerHomeBlockBin *block_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::PlayerHomeSceneBin::set_scene_id(bin, this->scene_id);
  if ( *(char *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_unlocked);
  proto::PlayerHomeSceneBin::set_is_unlocked(bin, this->is_unlocked);
  __for_range = &this->block_map;
  __for_begin._M_node = std::map<unsigned int,PlayerHomeBlock>::begin(&this->block_map)._M_node;
  __for_end._M_node = std::map<unsigned int,PlayerHomeBlock>::end(&this->block_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeBlock>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,PlayerHomeBlock>(v6);
    block = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeBlock> >::type *)std::get<1ul,unsigned int const,PlayerHomeBlock>(v6);
    block_bin = proto::PlayerHomeSceneBin::add_block_bin_list(bin);
    PlayerHomeBlock::toBin(block, block_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeBlock>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->version);
  }
  proto::PlayerHomeSceneBin::set_version(bin, this->version);
  if ( *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->audit_state);
  }
  proto::PlayerHomeSceneBin::set_audit_state(bin, this->audit_state);
  if ( *(_BYTE *)(((unsigned __int64)&this->submit_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->submit_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->submit_time);
  }
  proto::PlayerHomeSceneBin::set_submit_time(bin, this->submit_time);
  return 0;
};

// Line 102: range 0000000017C6EB04-0000000017C6EC22
PlayerHomeBlock *__fastcall PlayerHomeScene::getBlock(PlayerHomeScene *const this, uint32_t block_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<unsigned int,PlayerHomeBlock>::mapped_type *v5; // rax
  uint32_t v6; // ecx
  char v7; // dl
  char *v8; // rsi
  __int64 v9; // rdx
  PlayerHomeBlock *result; // rax
  PlayerHomeBlock *block; // [rsp+18h] [rbp-68h]
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 block_id:101";
  *(_QWORD *)(v2 + 16) = PlayerHomeScene::getBlock;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = block_id;
  v8 = (char *)(v2 + 32);
  v5 = std::map<unsigned int,PlayerHomeBlock>::operator[](
         &this->block_map,
         (const std::map<unsigned int,PlayerHomeBlock>::key_type *)(v2 + 32));
  block = v5;
  v6 = *(_DWORD *)(v2 + 32);
  v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v7 != 0;
  v9 = (v7 != 0) & (unsigned __int8)((char)(((unsigned __int8)v5 & 7) + 3) >= v7);
  if ( (_BYTE)v9 )
    __asan_report_store4(v5, v8, v9);
  block->block_id = v6;
  result = block;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 109: range 0000000017C6EC24-0000000017C6EE87
int32_t __cdecl PlayerHomeModule::fromBin(PlayerHomeModule *const this, const proto::PlayerHomeModuleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rdx
  char v6; // al
  PlayerHomeScene *v7; // rax
  unsigned int *v8; // rcx
  PlayerHomeScene *v9; // r8
  int32_t result; // eax
  const proto::PlayerHomeModuleBin *bina; // [rsp+0h] [rbp-100h]
  google::protobuf::RepeatedPtrField<proto::PlayerHomeSceneBin>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerHomeSceneBin>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::PlayerHomeSceneBin> *__for_range; // [rsp+20h] [rbp-E0h]
  const proto::PlayerHomeSceneBin *scene_bin; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  bina = bin;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 72 9 scene:113";
  *(_QWORD *)(v2 + 16) = PlayerHomeModule::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = proto::PlayerHomeModuleBin::module_id(bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(this, bin, v5);
  }
  this->module_id = v5;
  __for_range = proto::PlayerHomeModuleBin::scene_bin_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerHomeSceneBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlayerHomeSceneBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeSceneBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    scene_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeSceneBin const>::operator*(&__for_begin);
    PlayerHomeScene::PlayerHomeScene((PlayerHomeScene *const)(v2 + 48));
    PlayerHomeScene::fromBin((PlayerHomeScene *const)(v2 + 48), scene_bin);
    v7 = std::move<PlayerHomeScene &>((PlayerHomeScene *)(v2 + 48));
    std::map<unsigned int,PlayerHomeScene>::emplace<unsigned int &,PlayerHomeScene>(
      &this->scene_map,
      (unsigned int *)(v2 + 48),
      v7,
      v8,
      v9);
    PlayerHomeScene::~PlayerHomeScene((PlayerHomeScene *const)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeSceneBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 121: range 0000000017C6EE88-0000000017C6EF85
int32_t __cdecl PlayerHomeModule::toBin(const PlayerHomeModule *const this, proto::PlayerHomeModuleBin *bin)
{
  std::map<unsigned int,PlayerHomeScene>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,PlayerHomeScene>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,PlayerHomeScene> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,PlayerHomeScene> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeScene> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *scene; // [rsp+40h] [rbp-10h]
  proto::PlayerHomeSceneBin *scene_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::PlayerHomeModuleBin::set_module_id(bin, this->module_id);
  __for_range = &this->scene_map;
  __for_begin._M_node = std::map<unsigned int,PlayerHomeScene>::begin(&this->scene_map)._M_node;
  __for_end._M_node = std::map<unsigned int,PlayerHomeScene>::end(&this->scene_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,PlayerHomeScene>(v6);
    scene = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *)std::get<1ul,unsigned int const,PlayerHomeScene>(v6);
    scene_bin = proto::PlayerHomeModuleBin::add_scene_bin_list(bin);
    PlayerHomeScene::toBin(scene, scene_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 132: range 0000000017C6EF86-0000000017C6F09C
PlayerHomeScene *__fastcall PlayerHomeModule::getScene(PlayerHomeModule *const this, uint32_t scene_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char *v5; // rsi
  uint32_t v6; // ecx
  char v7; // al
  PlayerHomeScene *result; // rax
  std::map<unsigned int,PlayerHomeScene>::mapped_type *scene; // [rsp+18h] [rbp-68h]
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 scene_id:131";
  *(_QWORD *)(v2 + 16) = PlayerHomeModule::getScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = scene_id;
  v5 = (char *)(v2 + 32);
  scene = std::map<unsigned int,PlayerHomeScene>::operator[](
            &this->scene_map,
            (const std::map<unsigned int,PlayerHomeScene>::key_type *)(v2 + 32));
  v6 = *(_DWORD *)(v2 + 32);
  v7 = *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(scene, v5, scene);
  }
  scene->scene_id = v6;
  result = scene;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 139: range 0000000017C6F09E-0000000017C6F0F0
int32_t __cdecl PlayerHomeComp::init(PlayerHomeComp *const this)
{
  FurnitureMake *v1; // rax
  HomeResource *HomeResource; // rax

  PlayerHomeComp::initEventObservers(this);
  v1 = PlayerHomeComp::getFurnitureMake(this);
  FurnitureMake::init(v1);
  HomeResource = PlayerHomeComp::getHomeResource(this);
  HomeResource::init(HomeResource);
  PlayerHomeComp::tryInitBlueprintData(this);
  return 0;
};

// Line 148: range 0000000017C6F0F2-0000000017C6FF97
int32_t __cdecl PlayerHomeComp::fromBin(PlayerHomeComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rdx
  char v6; // al
  __int64 inited; // rdx
  char v8; // al
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  const proto::HomeSnapshotBin *v10; // rax
  const proto::HomeBasicCompSnapshotBin *v11; // rax
  proto::HomeBasicCompSnapshotBin *v12; // rax
  uint32_t Uid; // eax
  FurnitureMake *v14; // r14
  const proto::PlayerFunitureMakeBin *bin; // rax
  HomeResource *HomeResource; // r14
  const proto::PlayerHomeResourceBin *v17; // rax
  LimitedShop *LimitedShop; // r14
  const proto::PlayerHomeLimitedShopBin *v19; // rsi
  __int64 save_time; // rdx
  char v21; // al
  uint32_t v22; // ecx
  char v23; // dl
  __int64 v24; // rdx
  HomeAvatar *HomeAvatar; // r14
  uint32_t v26; // ecx
  char v27; // dl
  const proto::PlayerHomeAvatarBin *v28; // rsi
  __int64 v29; // rdx
  bool is_transfer_to_safe_point; // cl
  char v31; // dl
  __int64 v32; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v33; // rsi
  __int64 v34; // rdx
  char v35; // al
  google::protobuf::RepeatedPtrField<proto::PlayerHomeBlueprintSlotBin>::const_iterator *p_for_begin; // rsi
  unsigned int *v37; // rcx
  HomeWorldWoodExchangeData *v38; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,HomeWorldWoodExchangeData> >,bool> v39; // rax
  common::milog::MiLogStream *v40; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rcx
  __int64 v43; // rdx
  char v44; // al
  const std::string *v45; // r15
  unsigned int *v46; // rcx
  const std::string *v47; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >,bool> v48; // rax
  common::milog::MiLogStream *v49; // r14
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rcx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeWorldWoodExchangeDataBin>::const_iterator __for_begin_5; // [rsp+20h] [rbp-1A0h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerHomeBlueprintSlotBin>::const_iterator __for_begin; // [rsp+28h] [rbp-198h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-190h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+38h] [rbp-188h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_2; // [rsp+40h] [rbp-180h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_3; // [rsp+48h] [rbp-178h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_4; // [rsp+50h] [rbp-170h]
  const proto::PlayerHomeCompBin *proto_comp; // [rsp+58h] [rbp-168h]
  const google::protobuf::RepeatedPtrField<proto::PlayerHomeModuleBin> *__for_range; // [rsp+60h] [rbp-160h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+68h] [rbp-158h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+70h] [rbp-150h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+78h] [rbp-148h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+80h] [rbp-140h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_2; // [rsp+88h] [rbp-138h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+90h] [rbp-130h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_3; // [rsp+98h] [rbp-128h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_2; // [rsp+A0h] [rbp-120h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_4; // [rsp+A8h] [rbp-118h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_3; // [rsp+B0h] [rbp-110h]
  const google::protobuf::RepeatedPtrField<proto::HomeWorldWoodExchangeDataBin> *__for_range_5; // [rsp+B8h] [rbp-108h]
  const proto::PlayerHomeBlueprintBin *blueprint_bin; // [rsp+C0h] [rbp-100h]
  const google::protobuf::RepeatedPtrField<proto::PlayerHomeBlueprintSlotBin> *__for_range_6; // [rsp+C8h] [rbp-F8h]
  const proto::PlayerHomeBlueprintSlotBin *slot_bin; // [rsp+D0h] [rbp-F0h]
  const proto::HomeWorldWoodExchangeDataBin *data_bin; // [rsp+D8h] [rbp-E8h]
  const proto::PlayerHomeModuleBin *proto_module; // [rsp+E0h] [rbp-E0h]
  PlayerHomeModule *module; // [rsp+E8h] [rbp-D8h]
  common::milog::MiLogStream v79; // [rsp+F0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v80; // [rsp+110h] [rbp-B0h] BYREF
  char v81[144]; // [rsp+130h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 module_id:159 64 8 8 data:204";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  proto_comp = proto::PlayerDataBin::home_bin(player_data_bin);
  v5 = (unsigned int)proto::PlayerHomeCompBin::friend_enter_home_option(proto_comp);
  v6 = *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(player_data_bin) = v6 != 0;
    __asan_report_store4(&this->friend_enter_home_option_, player_data_bin, v5);
  }
  this->friend_enter_home_option_ = v5;
  inited = proto::PlayerHomeCompBin::init_home_modue_id(proto_comp);
  v8 = *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(player_data_bin) = v8 != 0;
    __asan_report_store4(&this->init_home_module_id_, player_data_bin, inited);
  }
  this->init_home_module_id_ = inited;
  __for_range = proto::PlayerHomeCompBin::module_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerHomeModuleBin>::begin(__for_range).it_;
  *(google::protobuf::RepeatedPtrField<proto::PlayerHomeModuleBin>::const_iterator *)(v2 + 64) = google::protobuf::RepeatedPtrField<proto::PlayerHomeModuleBin>::end(__for_range);
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeModuleBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerHomeModuleBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerHomeModuleBin>::iterator *)(v2 + 64)) )
  {
    proto_module = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeModuleBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerHomeModuleBin> *const)&__for_begin);
    *(_DWORD *)(v2 + 48) = proto::PlayerHomeModuleBin::module_id(proto_module);
    module = std::map<unsigned int,PlayerHomeModule>::operator[](
               &this->home_module_map_,
               (std::map<unsigned int,PlayerHomeModule>::key_type *)(v2 + 48));
    PlayerHomeModule::fromBin(module, proto_module);
    google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeModuleBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerHomeModuleBin> *const)&__for_begin);
  }
  __for_range_0 = proto::PlayerHomeCompBin::unlocked_module_id_list(proto_comp);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_0);
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_0;
    std::set<unsigned int>::insert(
      &this->unlocked_module_id_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_0;
  }
  std::set<unsigned int>::clear(&this->seen_module_id_set_);
  v9 = proto::PlayerHomeCompBin::seen_module_id_list(proto_comp);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->seen_module_id_set_, v9);
  __for_range_1 = proto::PlayerHomeCompBin::unlocked_formula_furniture_id_list(proto_comp);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin_1 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_1);
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_1;
    std::set<unsigned int>::insert(
      &this->unlocked_formula_furniture_id_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_1;
  }
  __for_range_2 = proto::PlayerHomeCompBin::unlocked_furniture_suite_id_list(proto_comp);
  __for_begin_2 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_2);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_2);
  while ( __for_begin_2 != __for_end_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_2);
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_2;
    std::set<unsigned int>::insert(
      &this->unlocked_furniture_suite_id_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_2;
  }
  v10 = proto::PlayerHomeCompBin::snapshot(proto_comp);
  proto::HomeSnapshotBin::CopyFrom(&this->home_snapshot_bin_, v10);
  v11 = proto::HomeSnapshotBin::basic_snapshot(&this->home_snapshot_bin_);
  if ( !proto::HomeBasicCompSnapshotBin::level(v11) )
  {
    v12 = proto::HomeSnapshotBin::mutable_basic_snapshot(&this->home_snapshot_bin_);
    proto::HomeBasicCompSnapshotBin::set_level(v12, 1u);
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/home/player_home_comp.cpp",
      "fromBin",
      177);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator()(&v80, "init home_snapshot_bin_.basic_snapshot.level to %u. uid:%u", 1LL, Uid);
    common::milog::MiLogStream::~MiLogStream(&v80);
  }
  __for_range_3 = proto::PlayerHomeCompBin::levelup_reward_got_level_list(proto_comp);
  __for_begin_3 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_3);
  __for_end_2 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_3);
  while ( __for_begin_3 != __for_end_2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_3 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_3);
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_3;
    std::set<unsigned int>::insert(
      &this->levelup_reward_got_level_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_3;
  }
  std::set<unsigned int>::clear(&this->arrangement_furniture_suite_id_set);
  __for_range_4 = proto::PlayerHomeCompBin::arrangement_furniture_suite_id_list(proto_comp);
  __for_begin_4 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_4);
  __for_end_3 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_4);
  while ( __for_begin_4 != __for_end_3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_4 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_4);
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_4;
    std::set<unsigned int>::insert(
      &this->arrangement_furniture_suite_id_set,
      (const std::set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_4;
  }
  v14 = PlayerHomeComp::getFurnitureMake(this);
  bin = proto::PlayerHomeCompBin::furniture_make_bin(proto_comp);
  FurnitureMake::fromBin(v14, bin);
  HomeResource = PlayerHomeComp::getHomeResource(this);
  v17 = proto::PlayerHomeCompBin::home_resource_bin(proto_comp);
  HomeResource::fromBin(HomeResource, v17);
  LimitedShop = PlayerHomeComp::getLimitedShop(this);
  v19 = proto::PlayerHomeCompBin::limited_shop_bin(proto_comp);
  LimitedShop::fromBin(LimitedShop, v19);
  save_time = proto::PlayerHomeCompBin::last_save_time(proto_comp);
  v21 = *(_BYTE *)(((unsigned __int64)&this->last_save_time_ >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->last_save_time_, v19, save_time);
  }
  this->last_save_time_ = save_time;
  v22 = proto::PlayerHomeCompBin::prior_check_time(proto_comp);
  v23 = *(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store4(&this->prior_check_time_, v19, v24);
  this->prior_check_time_ = v22;
  HomeAvatar = PlayerHomeComp::getHomeAvatar(this);
  v28 = proto::PlayerHomeCompBin::home_avatar_bin(proto_comp);
  HomeAvatar::fromBin(HomeAvatar, v28);
  v26 = proto::PlayerHomeCompBin::transfer_home_point(proto_comp);
  v27 = *(_BYTE *)(((unsigned __int64)&this->try_enter_home_point_ >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v27 != 0;
  v29 = (v27 != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= v27);
  if ( (_BYTE)v29 )
    __asan_report_store4(&this->try_enter_home_point_, v28, v29);
  this->try_enter_home_point_ = v26;
  is_transfer_to_safe_point = proto::PlayerHomeCompBin::is_transfer_to_safe_point(proto_comp);
  v31 = *(_BYTE *)(((unsigned __int64)&this->try_enter_home_is_transfer_to_safe_point_ >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this - 15) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->try_enter_home_is_transfer_to_safe_point_, v28, v32);
  this->try_enter_home_is_transfer_to_safe_point_ = is_transfer_to_safe_point;
  v33 = proto::PlayerHomeCompBin::unlocked_bgm_id_list(proto_comp);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->unlocked_bgm_id_set_, v33);
  v34 = proto::PlayerHomeCompBin::audit_version_index(proto_comp);
  v35 = *(_BYTE *)(((unsigned __int64)&this->audit_version_index_ >> 3) + 0x7FFF8000);
  if ( v35 != 0 && v35 <= 3 )
  {
    LOBYTE(v33) = v35 != 0;
    __asan_report_store4(&this->audit_version_index_, v33, v34);
  }
  this->audit_version_index_ = v34;
  __for_range_5 = proto::PlayerHomeCompBin::wood_exchange_data_bin_list(proto_comp);
  __for_begin_5.it_ = google::protobuf::RepeatedPtrField<proto::HomeWorldWoodExchangeDataBin>::begin(__for_range_5).it_;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeWorldWoodExchangeDataBin>::end(__for_range_5).it_;
  while ( 1 )
  {
    p_for_begin = &__for_begin;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::HomeWorldWoodExchangeDataBin const>::operator!=(
            &__for_begin_5,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeWorldWoodExchangeDataBin>::iterator *)&__for_begin) )
      break;
    data_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeWorldWoodExchangeDataBin const>::operator*(&__for_begin_5);
    *(_DWORD *)(v2 + 64) = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_DWORD *)(v2 + 64) = proto::HomeWorldWoodExchangeDataBin::exchange_count(data_bin);
    *(_DWORD *)(v2 + 68) = proto::HomeWorldWoodExchangeDataBin::last_refresh_time(data_bin);
    *(_DWORD *)(v2 + 48) = proto::HomeWorldWoodExchangeDataBin::wood_id(data_bin);
    v39 = std::map<unsigned int,HomeWorldWoodExchangeData>::emplace<unsigned int,HomeWorldWoodExchangeData&>(
            &this->wood_exchange_data_map_,
            (unsigned int *)(v2 + 48),
            (HomeWorldWoodExchangeData *)(v2 + 64),
            v37,
            v38);
    if ( !v39.second )
    {
      common::milog::MiLogStream::create(
        &v79,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/player_home_comp.cpp",
        "fromBin",
        209);
      v40 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v79,
              (const char (*)[29])"duplicate wood_id, data_bin:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v80, &data_bin->google::protobuf::Message);
      v41 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, (const std::string *)&v80);
      v42 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v41, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v42, this->player_);
      std::string::~string(&v80);
      common::milog::MiLogStream::~MiLogStream(&v79);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeWorldWoodExchangeDataBin const>::operator++(&__for_begin_5);
  }
  blueprint_bin = proto::PlayerHomeCompBin::blueprint_bin(proto_comp);
  v43 = proto::PlayerHomeBlueprintBin::blueprint_guid_idx(blueprint_bin);
  v44 = *(_BYTE *)(((unsigned __int64)&this->blueprint_guid_idx_ >> 3) + 0x7FFF8000);
  if ( v44 != 0 && v44 <= 3 )
  {
    LOBYTE(p_for_begin) = v44 != 0;
    __asan_report_store4(&this->blueprint_guid_idx_, p_for_begin, v43);
  }
  this->blueprint_guid_idx_ = v43;
  __for_range_6 = proto::PlayerHomeBlueprintBin::slot_bin_list(blueprint_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerHomeBlueprintSlotBin>::begin(__for_range_6).it_;
  *(google::protobuf::RepeatedPtrField<proto::PlayerHomeBlueprintSlotBin>::const_iterator *)(v2 + 64) = google::protobuf::RepeatedPtrField<proto::PlayerHomeBlueprintSlotBin>::end(__for_range_6);
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeBlueprintSlotBin const>::operator!=(
            &__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerHomeBlueprintSlotBin>::iterator *)(v2 + 64)) )
  {
    slot_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeBlueprintSlotBin const>::operator*(&__for_begin);
    v45 = proto::PlayerHomeBlueprintSlotBin::share_code[abi:cxx11](slot_bin);
    *(_DWORD *)(v2 + 48) = proto::PlayerHomeBlueprintSlotBin::slot_id(slot_bin);
    v48 = std::map<unsigned int,std::string>::emplace<unsigned int,std::string const&>(
            &this->blueprint_slot_share_code_map_,
            (unsigned int *)(v2 + 48),
            v45,
            v46,
            v47);
    if ( !v48.second )
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/player_home_comp.cpp",
        "fromBin",
        220);
      v49 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v80,
              (const char (*)[29])"duplicate blueprint slot_id:");
      *(_DWORD *)(v2 + 48) = proto::PlayerHomeBlueprintSlotBin::slot_id(slot_bin);
      v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)(v2 + 48));
      v51 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v50, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v51, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v80);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::PlayerHomeBlueprintSlotBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v81 == (char *)v2 )
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
  return result;
};

// Line 228: range 0000000017C6FF98-0000000017C70BF7
int32_t __cdecl PlayerHomeComp::toBin(PlayerHomeComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  unsigned int *v5; // rax
  google::protobuf::uint32 *v6; // rdx
  unsigned int *v7; // rax
  google::protobuf::uint32 *v8; // rdx
  proto::HomeSnapshotBin *v9; // rax
  unsigned int *v10; // rax
  google::protobuf::uint32 *v11; // rdx
  unsigned int *v12; // rax
  google::protobuf::uint32 *v13; // rdx
  FurnitureMake *v14; // rbx
  proto::PlayerFunitureMakeBin *bin; // rax
  HomeResource *HomeResource; // rbx
  proto::PlayerHomeResourceBin *v17; // rax
  LimitedShop *LimitedShop; // rbx
  proto::PlayerHomeLimitedShopBin *v19; // rax
  HomeAvatar *HomeAvatar; // rbx
  proto::PlayerHomeAvatarBin *v21; // rax
  google::protobuf::RepeatedField<unsigned int> *v22; // rax
  std::pair<unsigned int const,HomeWorldWoodExchangeData> *n; // rax
  std::map<unsigned int,PlayerHomeModule>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::map<unsigned int,PlayerHomeModule>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  proto::PlayerHomeCompBin *proto_comp; // [rsp+38h] [rbp-C8h]
  std::map<unsigned int,PlayerHomeModule> *__for_range; // [rsp+40h] [rbp-C0h]
  std::set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-B8h]
  std::set<unsigned int> *__for_range_1; // [rsp+50h] [rbp-B0h]
  std::set<unsigned int> *__for_range_2; // [rsp+58h] [rbp-A8h]
  std::set<unsigned int> *__for_range_3; // [rsp+60h] [rbp-A0h]
  std::set<unsigned int> *__for_range_4; // [rsp+68h] [rbp-98h]
  std::map<unsigned int,HomeWorldWoodExchangeData> *__for_range_5; // [rsp+70h] [rbp-90h]
  proto::PlayerHomeBlueprintBin *blueprint_bin; // [rsp+78h] [rbp-88h]
  std::map<unsigned int,std::string> *__for_range_6; // [rsp+80h] [rbp-80h]
  const std::pair<unsigned int const,std::string > *v37; // [rsp+88h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,std::string > >::type *slot_id; // [rsp+90h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,std::string > >::type *share_code; // [rsp+98h] [rbp-68h]
  proto::PlayerHomeBlueprintSlotBin *slot_bin; // [rsp+A0h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,HomeWorldWoodExchangeData> >::type *wood_id; // [rsp+A8h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,HomeWorldWoodExchangeData> >::type *data; // [rsp+B0h] [rbp-50h]
  proto::HomeWorldWoodExchangeDataBin *data_bin; // [rsp+B8h] [rbp-48h]
  const std::pair<unsigned int const,PlayerHomeModule> *v44; // [rsp+C0h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeModule> >::type *_; // [rsp+C8h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeModule> >::type *module; // [rsp+D0h] [rbp-30h]
  proto::PlayerHomeModuleBin *proto_module; // [rsp+D8h] [rbp-28h]
  std::pair<unsigned int const,HomeWorldWoodExchangeData> __in; // [rsp+E4h] [rbp-1Ch] BYREF

  proto_comp = proto::PlayerDataBin::mutable_home_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->friend_enter_home_option_);
  }
  proto::PlayerHomeCompBin::set_friend_enter_home_option(proto_comp, this->friend_enter_home_option_);
  if ( *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->init_home_module_id_);
  }
  proto::PlayerHomeCompBin::set_init_home_modue_id(proto_comp, this->init_home_module_id_);
  __for_range = &this->home_module_map_;
  __for_begin._M_node = std::map<unsigned int,PlayerHomeModule>::begin(&this->home_module_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,PlayerHomeModule>::end(&this->home_module_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v44 = std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,PlayerHomeModule>(v44);
    module = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeModule> >::type *)std::get<1ul,unsigned int const,PlayerHomeModule>(v44);
    proto_module = proto::PlayerHomeCompBin::add_module_list(proto_comp);
    PlayerHomeModule::toBin(module, proto_module);
    std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->unlocked_module_id_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::begin(&this->unlocked_module_id_set_)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::PlayerHomeCompBin::add_unlocked_module_id_list(proto_comp, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  v4 = proto::PlayerHomeCompBin::mutable_seen_module_id_list(proto_comp);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->seen_module_id_set_, v4);
  __for_range_1 = &this->unlocked_formula_furniture_id_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::begin(&this->unlocked_formula_furniture_id_set_)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    proto::PlayerHomeCompBin::add_unlocked_formula_furniture_id_list(proto_comp, *v6);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  __for_range_2 = &this->unlocked_furniture_suite_id_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::begin(&this->unlocked_furniture_suite_id_set_)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    proto::PlayerHomeCompBin::add_unlocked_furniture_suite_id_list(proto_comp, *v8);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  v9 = proto::PlayerHomeCompBin::mutable_snapshot(proto_comp);
  proto::HomeSnapshotBin::CopyFrom(v9, &this->home_snapshot_bin_);
  __for_range_3 = &this->levelup_reward_got_level_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::begin(&this->levelup_reward_got_level_set_)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v10 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    proto::PlayerHomeCompBin::add_levelup_reward_got_level_list(proto_comp, *v11);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  __for_range_4 = &this->arrangement_furniture_suite_id_set;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::begin(&this->arrangement_furniture_suite_id_set)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::end(__for_range_4)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v12 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    proto::PlayerHomeCompBin::add_arrangement_furniture_suite_id_list(proto_comp, *v13);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  v14 = PlayerHomeComp::getFurnitureMake(this);
  bin = proto::PlayerHomeCompBin::mutable_furniture_make_bin(proto_comp);
  FurnitureMake::toBin(v14, bin);
  HomeResource = PlayerHomeComp::getHomeResource(this);
  v17 = proto::PlayerHomeCompBin::mutable_home_resource_bin(proto_comp);
  HomeResource::toBin(HomeResource, v17);
  LimitedShop = PlayerHomeComp::getLimitedShop(this);
  v19 = proto::PlayerHomeCompBin::mutable_limited_shop_bin(proto_comp);
  LimitedShop::toBin(LimitedShop, v19);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_save_time_);
  }
  proto::PlayerHomeCompBin::set_last_save_time(proto_comp, this->last_save_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->prior_check_time_);
  }
  proto::PlayerHomeCompBin::set_prior_check_time(proto_comp, this->prior_check_time_);
  HomeAvatar = PlayerHomeComp::getHomeAvatar(this);
  v21 = proto::PlayerHomeCompBin::mutable_home_avatar_bin(proto_comp);
  HomeAvatar::toBin(HomeAvatar, v21);
  if ( *(_BYTE *)(((unsigned __int64)&this->saved_try_enter_home_point_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->saved_try_enter_home_point_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->saved_try_enter_home_point_);
  }
  proto::PlayerHomeCompBin::set_transfer_home_point(proto_comp, this->saved_try_enter_home_point_);
  if ( *(char *)(((unsigned __int64)&this->saved_try_enter_home_is_transfer_to_safe_point_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->saved_try_enter_home_is_transfer_to_safe_point_);
  proto::PlayerHomeCompBin::set_is_transfer_to_safe_point(
    proto_comp,
    this->saved_try_enter_home_is_transfer_to_safe_point_);
  v22 = proto::PlayerHomeCompBin::mutable_unlocked_bgm_id_list(proto_comp);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlocked_bgm_id_set_, v22);
  if ( *(_BYTE *)(((unsigned __int64)&this->audit_version_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->audit_version_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->audit_version_index_);
  }
  proto::PlayerHomeCompBin::set_audit_version_index(proto_comp, this->audit_version_index_);
  __for_range_5 = &this->wood_exchange_data_map_;
  __for_begin._M_node = std::map<unsigned int,HomeWorldWoodExchangeData>::begin(&this->wood_exchange_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeWorldWoodExchangeData>::end(__for_range_5)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeWorldWoodExchangeData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeWorldWoodExchangeData> >::_Self *)&__for_end) )
  {
    n = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeWorldWoodExchangeData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeWorldWoodExchangeData> > *const)&__for_begin);
    if ( ((unsigned __int8)n & 7) >= *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&n->second.last_refresh_time + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)n + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&n->second.last_refresh_time + 3) >> 3)
                                                     + 0x7FFF8000) )
    {
      n = (std::pair<unsigned int const,HomeWorldWoodExchangeData> *)__asan_report_load_n(n, 12LL);
    }
    __in = *n;
    wood_id = std::get<0ul,unsigned int const,HomeWorldWoodExchangeData>(&__in);
    data = std::get<1ul,unsigned int const,HomeWorldWoodExchangeData>(&__in);
    data_bin = proto::PlayerHomeCompBin::add_wood_exchange_data_bin_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)wood_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)wood_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)wood_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(wood_id);
    }
    proto::HomeWorldWoodExchangeDataBin::set_wood_id(data_bin, *wood_id);
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data);
    }
    proto::HomeWorldWoodExchangeDataBin::set_exchange_count(data_bin, data->exchange_count);
    if ( *(_BYTE *)(((unsigned __int64)&data->last_refresh_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->last_refresh_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data->last_refresh_time);
    }
    proto::HomeWorldWoodExchangeDataBin::set_last_refresh_time(data_bin, data->last_refresh_time);
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeWorldWoodExchangeData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,HomeWorldWoodExchangeData> > *const)&__for_begin);
  }
  blueprint_bin = proto::PlayerHomeCompBin::mutable_blueprint_bin(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->blueprint_guid_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blueprint_guid_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->blueprint_guid_idx_);
  }
  proto::PlayerHomeBlueprintBin::set_blueprint_guid_idx(blueprint_bin, this->blueprint_guid_idx_);
  __for_range_6 = &this->blueprint_slot_share_code_map_;
  __for_begin._M_node = std::map<unsigned int,std::string>::begin(&this->blueprint_slot_share_code_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::string>::end(__for_range_6)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)&__for_end) )
  {
    v37 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)&__for_begin);
    slot_id = std::get<0ul,unsigned int const,std::string>(v37);
    share_code = (std::tuple_element<1,const std::pair<unsigned int const,std::string > >::type *)std::get<1ul,unsigned int const,std::string>(v37);
    slot_bin = proto::PlayerHomeBlueprintBin::add_slot_bin_list(blueprint_bin);
    if ( *(_BYTE *)(((unsigned __int64)slot_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)slot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)slot_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(slot_id);
    }
    proto::PlayerHomeBlueprintSlotBin::set_slot_id(slot_bin, *slot_id);
    proto::PlayerHomeBlueprintSlotBin::set_share_code(slot_bin, share_code);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)&__for_begin);
  }
  return 0;
};

// Line 296: range 0000000017C70BF8-0000000017C70FDD
int32_t __cdecl PlayerHomeComp::notifyAllData(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerHomeComp *HomeComp; // rax
  FurnitureMake *v5; // rax
  LimitedShop *LimitedShop; // rax
  HomeResource *HomeResource; // rax
  HomeAvatar *HomeAvatar; // rax
  Home *v9; // rcx
  int32_t result; // eax
  std::vector<unsigned int> furniture_id_vec; // [rsp+10h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 18 home_world_ptr:314 64 16 12 home_ptr:315";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  PlayerHomeComp::sendHomeCompInfoNotify(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  if ( !PlayerHomeComp::isInHomeWorld(HomeComp) )
  {
    PlayerHomeComp::sendHomeMarkPointNotify(this);
    PlayerHomeComp::sendHomeBasicInfoNotify(this);
    PlayerHomeComp::sendHomeComfortInfoNotify(this);
  }
  PlayerHomeComp::sendFurnitureCurModuleArrangeCountNotify(this);
  memset(&furniture_id_vec, 0, sizeof(furniture_id_vec));
  std::vector<unsigned int>::vector(&furniture_id_vec);
  PlayerHomeComp::sendUnlockedFurnitureFormulaNotify(this, 1, &furniture_id_vec);
  std::vector<unsigned int>::~vector(&furniture_id_vec);
  memset(&furniture_id_vec, 0, sizeof(furniture_id_vec));
  std::vector<unsigned int>::vector(&furniture_id_vec);
  PlayerHomeComp::sendUnlockedFurnitureSuiteNotify(this, 1, &furniture_id_vec);
  std::vector<unsigned int>::~vector(&furniture_id_vec);
  PlayerHomeComp::sendHomePlantInfoNotify(this);
  v5 = PlayerHomeComp::getFurnitureMake(this);
  FurnitureMake::notifyAllData(v5);
  LimitedShop = PlayerHomeComp::getLimitedShop(this);
  LimitedShop::notifyAllData(LimitedShop);
  HomeResource = PlayerHomeComp::getHomeResource(this);
  HomeResource::notifyAllData(HomeResource);
  HomeAvatar = PlayerHomeComp::getHomeAvatar(this);
  HomeAvatar::notifyAllData(HomeAvatar);
  std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 32), 0LL);
  std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v1 + 64), 0LL);
  PlayerHomeComp::getCurHomeWorldAndHome(this, (HomeWorldPtr *)(v1 + 32), (HomePtr *)(v1 + 64));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Home::notifyAllDataToPlayer(v9, this->player_);
  }
  PlayerHomeComp::notifyPriorCheckInfo(this);
  PlayerHomeComp::sendAllUnlockedBgmIdListNotify(this);
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 32));
  result = 0;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 327: range 0000000017C70FDE-0000000017C711A8
int32_t __cdecl PlayerHomeComp::onLogin(PlayerHomeComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  FurnitureMake *v5; // rax
  HomeResource *HomeResource; // rax
  Home *v7; // rax
  HomeBasicComp *BasicComp; // rax
  Home *v10; // rcx
  int32_t result; // eax
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 home_ptr:330";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::onLogin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = PlayerHomeComp::getFurnitureMake(this);
  FurnitureMake::onLogin(v5, is_new_player);
  HomeResource = PlayerHomeComp::getHomeResource(this);
  HomeResource::onLogin(HomeResource, is_new_player);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v2 + 32));
  if ( std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 32)) )
  {
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BasicComp = Home::getBasicComp(v7);
    if ( HomeBasicComp::getIsInEditMode(BasicComp) )
    {
      v10 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Home::changeEditMode(v10, 0, this->player_);
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 32));
  result = 0;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 340: range 0000000017C711AA-0000000017C7138C
void __cdecl PlayerHomeComp::onDailyRefresh(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  FurnitureMake *v4; // rax
  Home *v5; // rcx
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 18 home_world_ptr:343 64 16 12 home_ptr:344";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::onDailyRefresh;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  v4 = PlayerHomeComp::getFurnitureMake(this);
  FurnitureMake::onDailyRefresh(v4);
  std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 32), 0LL);
  std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v1 + 64), 0LL);
  PlayerHomeComp::getCurHomeWorldAndHome(this, (HomeWorldPtr *)(v1 + 32), (HomePtr *)(v1 + 64));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Home::notifyAllDataToPlayer(v5, this->player_);
  }
  PlayerHomeComp::sendHomeBasicInfoNotify(this);
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 354: range 0000000017C7138E-0000000017C713B0
void __cdecl PlayerHomeComp::onLoginDailyRefresh(PlayerHomeComp *const this)
{
  FurnitureMake *v1; // rax

  v1 = PlayerHomeComp::getFurnitureMake(this);
  FurnitureMake::onLoginDailyRefresh(v1);
};

// Line 359: range 0000000017C713B2-0000000017C719B4
void __cdecl PlayerHomeComp::initEventObservers(PlayerHomeComp *const this)
{
  unsigned __int64 p_M_last; // r13
  __int64 v2; // rax
  _DWORD *v3; // r14
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+64h] [rbp-10Ch] BYREF
  PlayerEventComp *event_comp; // [rsp+68h] [rbp-108h]
  PlayerEventComp v7; // [rsp+70h] [rbp-100h] BYREF

  p_M_last = (unsigned __int64)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_last = v2;
  }
  *(_QWORD *)p_M_last = 1102416563LL;
  *(_QWORD *)(p_M_last + 8) = "2 32 16 12 this_ptr:362 64 16 12 this_wtr:368";
  *(_QWORD *)(p_M_last + 16) = PlayerHomeComp::initEventObservers;
  v3 = (_DWORD *)(p_M_last >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/home/player_home_comp.cpp",
    "initEventObservers",
    360);
  v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
         (common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
         (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  toThisPtr<PlayerHomeComp>((PlayerHomeComp *)(p_M_last + 32));
  if ( std::operator==<PlayerHomeComp>(0LL, (const std::shared_ptr<PlayerHomeComp> *)(p_M_last + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "initEventObservers",
      365);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const char (*)[46])"dynamic_pointer_cast to PlayerHomeComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  }
  else
  {
    std::weak_ptr<PlayerHomeComp>::weak_ptr<PlayerHomeComp,void>(
      (std::weak_ptr<PlayerHomeComp> *const)(p_M_last + 64),
      (const std::shared_ptr<PlayerHomeComp> *)(p_M_last + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerHomeComp>::weak_ptr(
      (std::weak_ptr<PlayerHomeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<PlayerHomeComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerHomeComp,OpenStateChangeEvent>(
      &v7,
      (std::weak_ptr<PlayerHomeComp> *)event_comp,
      (void (*)(PlayerHomeComp *, const OpenStateChangeEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PlayerHomeComp>::~weak_ptr((std::weak_ptr<PlayerHomeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerHomeComp>::weak_ptr(
      (std::weak_ptr<PlayerHomeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<PlayerHomeComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerHomeComp,AvatarLevelupEvent>(
      (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerHomeComp> *)event_comp,
      (void (*)(PlayerHomeComp *, const AvatarLevelupEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerHomeComp>::~weak_ptr((std::weak_ptr<PlayerHomeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerHomeComp>::weak_ptr(
      (std::weak_ptr<PlayerHomeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<PlayerHomeComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerHomeComp,FetterLevelUpdateEvent>(
      (PlayerEventComp *const)&v7.event_center_,
      (std::weak_ptr<PlayerHomeComp> *)event_comp,
      (void (*)(PlayerHomeComp *, const FetterLevelUpdateEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_);
    std::weak_ptr<PlayerHomeComp>::~weak_ptr((std::weak_ptr<PlayerHomeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerHomeComp>::weak_ptr(
      (std::weak_ptr<PlayerHomeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<PlayerHomeComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerHomeComp,AvatarCosumeChangeEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_,
      (std::weak_ptr<PlayerHomeComp> *)event_comp,
      (void (*)(PlayerHomeComp *, const AvatarCosumeChangeEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerHomeComp>::~weak_ptr((std::weak_ptr<PlayerHomeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerHomeComp>::weak_ptr(
      (std::weak_ptr<PlayerHomeComp> *const)&v7.event_center_.context_.pending_que_,
      (const std::weak_ptr<PlayerHomeComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerHomeComp,EnterMyHomeWorldEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerHomeComp> *)event_comp,
      (void (*)(PlayerHomeComp *, const EnterMyHomeWorldEvent *))&v7.event_center_.context_.pending_que_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerHomeComp>::~weak_ptr((std::weak_ptr<PlayerHomeComp> *const)&v7.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerHomeComp>::~weak_ptr((std::weak_ptr<PlayerHomeComp> *const)(p_M_last + 64));
  }
  std::shared_ptr<PlayerHomeComp>::~shared_ptr((std::shared_ptr<PlayerHomeComp> *const)(p_M_last + 32));
  if ( &v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last == (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)p_M_last )
  {
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_last = 1172321806LL;
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 380: range 0000000017C719B6-0000000017C71B03
void __cdecl PlayerHomeComp::onOpenStateChange(PlayerHomeComp *const this, const OpenStateChangeEvent *event)
{
  HomeResource *HomeResource; // rax
  HomeResource *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->key);
  }
  if ( event->key != 1500 )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->value);
  }
  if ( event->value )
  {
    HomeResource = PlayerHomeComp::getHomeResource(this);
    HomeResource::onHomeStateOpen(HomeResource);
  }
  else
  {
LABEL_8:
    if ( *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->key);
    }
    if ( event->key == 1503 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->value);
      }
      if ( event->value )
      {
        v3 = PlayerHomeComp::getHomeResource(this);
        HomeResource::onHomeAvatarStateOpen(v3);
      }
    }
  }
};

// Line 392: range 0000000017C71B04-0000000017C71B34
void __cdecl PlayerHomeComp::onAvatarLevelupEvent(PlayerHomeComp *const this, const AvatarLevelupEvent *event)
{
  HomeAvatar *HomeAvatar; // rdx

  HomeAvatar = PlayerHomeComp::getHomeAvatar(this);
  HomeAvatar::onAvatarLevelupEvent(HomeAvatar, event);
};

// Line 397: range 0000000017C71B36-0000000017C71B66
void __cdecl PlayerHomeComp::onFetterLevelUpdateEvent(PlayerHomeComp *const this, const FetterLevelUpdateEvent *event)
{
  HomeAvatar *HomeAvatar; // rdx

  HomeAvatar = PlayerHomeComp::getHomeAvatar(this);
  HomeAvatar::onFetterLevelUpdateEvent(HomeAvatar, event);
};

// Line 402: range 0000000017C71B68-0000000017C71B98
void __cdecl PlayerHomeComp::onAvatarCosumeChangeEvent(
        PlayerHomeComp *const this,
        const AvatarCosumeChangeEvent *event)
{
  HomeAvatar *HomeAvatar; // rdx

  HomeAvatar = PlayerHomeComp::getHomeAvatar(this);
  HomeAvatar::onAvatarCosumeChangeEvent(HomeAvatar, event);
};

// Line 407: range 0000000017C71B9A-0000000017C71C33
HomePtr __cdecl PlayerHomeComp::findMyHome(const PlayerHomeComp *const this)
{
  __int64 v1; // rsi
  GameserverService *v2; // rax
  uint32_t v3; // ebx
  HomePtr result; // rax

  v2 = ServiceBox::findService<GameserverService>();
  v3 = (unsigned int)GameserverService::getGameThreadLocal(v2) + 704;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getUid(*(const Player *const *)(v1 + 24));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = HomeMgr::findOnlineHome((HomeMgr *const)this, v3);
  result._M_ptr = (std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 412: range 0000000017C71C34-0000000017C71DC4
int32_t __cdecl PlayerHomeComp::getCurHomeWorldAndHome(
        const PlayerHomeComp *const this,
        HomeWorldPtr *home_world_ptr,
        HomePtr *home_ptr)
{
  common::milog::MiLogStream *v4; // rbx
  std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned int val; // [rsp+2Ch] [rbp-44h] BYREF
  std::shared_ptr<HomeWorld> __r; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<HomeWorld>((const PlayerSceneComp *const)&__r);
  std::shared_ptr<HomeWorld>::operator=(home_world_ptr, &__r);
  std::shared_ptr<HomeWorld>::~shared_ptr(&__r);
  if ( std::operator==<HomeWorld>(home_world_ptr, 0LL) )
    return 9713;
  std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)home_world_ptr);
  HomeWorld::getOwnHome((const HomeWorld *const)&__r);
  std::shared_ptr<Home>::operator=(home_ptr, (std::shared_ptr<Home> *)&__r);
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&__r);
  if ( !std::operator==<Home>(home_ptr, 0LL) )
    return 0;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/home/player_home_comp.cpp",
    "getCurHomeWorldAndHome",
    422);
  v4 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
         &v9,
         (const char (*)[57])"[HOME] home_world getOwnHome() return nullptr. home_uid:");
  v5 = std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)home_world_ptr);
  val = World::getOwnerUid(v5);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v9);
  return 9701;
};

// Line 429: range 0000000017C71DC6-0000000017C71F3E
bool __cdecl PlayerHomeComp::isInHomeWorld(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  bool v4; // r14
  bool result; // al
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 18 home_world_ptr:430 64 16 12 home_ptr:431";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::isInHomeWorld;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 32), 0LL);
  std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v1 + 64), 0LL);
  PlayerHomeComp::getCurHomeWorldAndHome(this, (HomeWorldPtr *)(v1 + 32), (HomePtr *)(v1 + 64));
  v4 = std::operator!=<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL);
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 32));
  result = v4;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 437: range 0000000017C71F40-0000000017C72150
bool __cdecl PlayerHomeComp::isInMyHome(const PlayerHomeComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerHomeComp *HomeComp; // rax
  bool v5; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t HomeUid; // r14d
  bool result; // al
  char v9[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 home_ptr:438 64 16 18 home_world_ptr:439";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::isInMyHome;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v1 + 32), 0LL);
  std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 64), 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  PlayerHomeComp::getCurHomeWorldAndHome(HomeComp, (HomeWorldPtr *)(v1 + 64), (HomePtr *)(v1 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    v5 = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    HomeUid = Home::getHomeUid(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = HomeUid == Player::getUid(this->player_);
  }
  std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 64));
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  result = v5;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 449: range 0000000017C72152-0000000017C7255A
int32_t __cdecl PlayerHomeComp::fillHomeBriefData(
        PlayerHomeComp *const this,
        proto::PlayerHomeBriefData *home_brief_data)
{
  PlayerBasicComp *BasicComp; // rax
  bool isStateOpen; // dl
  uint32_t version; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeScene> >::type *v5; // rsi
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  char v8; // cl
  google::protobuf::RepeatedPtrField<proto::PlayerHomeAuditModuleData> *v9; // rax
  std::map<unsigned int,PlayerHomeModule>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::map<unsigned int,PlayerHomeModule>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,PlayerHomeScene>::const_iterator __for_begin_0; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,PlayerHomeScene>::const_iterator __for_end_0; // [rsp+28h] [rbp-68h] BYREF
  std::map<unsigned int,PlayerHomeModule> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,PlayerHomeModule> *v17; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeModule> >::type *module_id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeModule> >::type *home_module; // [rsp+48h] [rbp-48h]
  proto::PlayerHomeAuditModuleData *audit_module_data; // [rsp+50h] [rbp-40h]
  google::protobuf::Map<unsigned int,unsigned int> *audit_scene_version_map; // [rsp+58h] [rbp-38h]
  const std::map<unsigned int,PlayerHomeScene> *__for_range_0; // [rsp+60h] [rbp-30h]
  const std::pair<unsigned int const,PlayerHomeScene> *v23; // [rsp+68h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeScene> >::type *scene_id; // [rsp+70h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *home_scene; // [rsp+78h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->friend_enter_home_option_);
  }
  proto::PlayerHomeBriefData::set_friend_enter_home_option(home_brief_data, this->friend_enter_home_option_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  isStateOpen = PlayerBasicComp::isStateOpen(BasicComp, 0x5DCu);
  proto::PlayerHomeBriefData::set_is_home_available(home_brief_data, isStateOpen);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_save_time_);
  }
  proto::PlayerHomeBriefData::set_last_save_time(home_brief_data, this->last_save_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->prior_check_time_);
  }
  proto::PlayerHomeBriefData::set_prior_check_time(home_brief_data, this->prior_check_time_);
  __for_range = &this->home_module_map_;
  __for_begin._M_node = std::map<unsigned int,PlayerHomeModule>::begin(&this->home_module_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,PlayerHomeModule>::end(&this->home_module_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule>>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,PlayerHomeModule>(v17);
    home_module = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeModule> >::type *)std::get<1ul,unsigned int const,PlayerHomeModule>(v17);
    audit_module_data = proto::PlayerHomeBriefData::add_audit_module_list(home_brief_data);
    if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(module_id);
    }
    proto::PlayerHomeAuditModuleData::set_module_id(audit_module_data, *module_id);
    audit_scene_version_map = proto::PlayerHomeAuditModuleData::mutable_audit_scene_version_map(audit_module_data);
    __for_range_0 = &home_module->scene_map;
    __for_begin_0._M_node = std::map<unsigned int,PlayerHomeScene>::begin(&home_module->scene_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,PlayerHomeScene>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator*(&__for_begin_0);
      scene_id = std::get<0ul,unsigned int const,PlayerHomeScene>(v23);
      home_scene = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *)std::get<1ul,unsigned int const,PlayerHomeScene>(v23);
      if ( *(_BYTE *)(((unsigned __int64)&home_scene->audit_state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&home_scene->audit_state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&home_scene->audit_state);
      }
      if ( home_scene->audit_state == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&home_scene->version >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)home_scene + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_scene->version >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&home_scene->version);
        }
        version = home_scene->version;
        v5 = scene_id;
        v6 = google::protobuf::Map<unsigned int,unsigned int>::operator[](audit_scene_version_map, scene_id);
        v7 = v6;
        v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
        if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
        {
          LOBYTE(v5) = v8 != 0;
          __asan_report_store4(v6, v5, v6);
        }
        *v7 = version;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator++(&__for_begin_0);
    }
    if ( google::protobuf::Map<unsigned int,unsigned int>::empty(audit_scene_version_map) )
    {
      v9 = proto::PlayerHomeBriefData::mutable_audit_module_list(home_brief_data);
      google::protobuf::RepeatedPtrField<proto::PlayerHomeAuditModuleData>::RemoveLast(v9);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 477: range 0000000017C7255C-0000000017C72B30
__int64 __fastcall PlayerHomeComp::handleTryEnterHomeReq(
        PlayerHomeComp *const this,
        uint32_t target_uid,
        uint32_t target_point,
        bool is_transfer_to_safe_point)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int FriendEnterHomeOptionReq; // r14d
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  bool isHomeMpClosed; // r14
  PlayerSocialComp *SocialComp; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<ManualTransportEvent> __r; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 target_uid:476 64 16 18 home_world_ptr:478";
  *(_QWORD *)(v4 + 16) = PlayerHomeComp::handleTryEnterHomeReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = target_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<HomeWorld>((const PlayerSceneComp *const)(v4 + 64));
  if ( std::operator!=<HomeWorld>((const std::shared_ptr<HomeWorld> *)(v4 + 64), 0LL)
    && (v7 = std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64)),
        World::getOwnerUid(v7) == *(_DWORD *)(v4 + 48)) )
  {
    FriendEnterHomeOptionReq = 9707;
  }
  else
  {
    ret = PlayerHomeComp::checkEnterHome(this, *(_DWORD *)(v4 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "handleTryEnterHomeReq",
        488);
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v25, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              v11,
              (const char (*)[32])" checkEnterHome target_home_ui:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v25);
      FriendEnterHomeOptionReq = ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      common::tools::perf::make_shared<ManualTransportEvent>();
      std::shared_ptr<BaseEvent>::shared_ptr<ManualTransportEvent,void>(&p_event_ptr, &__r);
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<ManualTransportEvent>::~shared_ptr(&__r);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Player::getUid(this->player_) == *(_DWORD *)(v4 + 48) )
      {
        FriendEnterHomeOptionReq = PlayerHomeComp::tryEnterHome(
                                     this,
                                     *(_DWORD *)(v4 + 48),
                                     target_point,
                                     is_transfer_to_safe_point);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&p_event_ptr);
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_event_ptr);
        isHomeMpClosed = FeatureSwitchMgr::isHomeMpClosed(&v15->feature_switch_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_event_ptr);
        if ( isHomeMpClosed )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/home/player_home_comp.cpp",
            "handleTryEnterHomeReq",
            504);
          common::milog::MiLogStream::operator()(&v25, "[FEATURE_SWITCH] FEATURE_SWITCH_HOME_MP is closed");
          common::milog::MiLogStream::~MiLogStream(&v25);
          FriendEnterHomeOptionReq = 142;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SocialComp = Player::getSocialComp(this->player_);
          if ( !PlayerSocialComp::isPlayerFriend(SocialComp, *(_DWORD *)(v4 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/home/player_home_comp.cpp",
              "handleTryEnterHomeReq",
              510);
            common::milog::MiLogStream::operator()(
              &v25,
              "[HOME] target_uid:%u is not player's friend",
              *(unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v25);
            FriendEnterHomeOptionReq = 7008;
          }
          else
          {
            FriendEnterHomeOptionReq = PlayerHomeComp::sendServerGetFriendEnterHomeOptionReq(this, *(_DWORD *)(v4 + 48));
          }
        }
      }
    }
  }
  std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v4 + 64));
  result = FriendEnterHomeOptionReq;
  if ( v26 == (char *)v4 )
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
  return result;
};

// Line 519: range 0000000017C72B32-0000000017C72C08
int32_t __cdecl PlayerHomeComp::checkEnterHome(const PlayerHomeComp *const this, uint32_t target_uid)
{
  PlayerSceneComp *SceneComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  PlayerSceneComp::isInMyPlayerWorld(SceneComp);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( target_uid != Player::getUid(this->player_) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->init_home_module_id_);
  }
  if ( this->init_home_module_id_ )
    return 0;
  else
    return 9726;
};

// Line 547: range 0000000017C72C0A-0000000017C7393C
std::pair<int,std::vector<unsigned int> > *__cdecl PlayerHomeComp::checkEnterHomeAvailability(
        std::pair<int,std::vector<unsigned int> > *retstr,
        PlayerHomeComp *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool isEnterHomeWorldClosed; // r14
  PlayerMatchComp *MatchComp; // rax
  common::milog::MiLogStream *v8; // r14
  int v9; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r12
  std::vector<unsigned int> *v16; // rsi
  int v17; // r12d
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r12
  std::vector<unsigned int> *v22; // rsi
  int v23; // r12d
  proto::Retcode __x; // [rsp+1Ch] [rbp-F4h] BYREF
  std::tuple_element<0,std::pair<int,std::vector<unsigned int> > >::type *retcode; // [rsp+20h] [rbp-F0h]
  std::tuple_element<1,std::pair<int,std::vector<unsigned int> > >::type *param_vec; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,std::pair<int,std::vector<unsigned int> > >::type *retcode_0; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,std::pair<int,std::vector<unsigned int> > >::type *param_vec_0; // [rsp+38h] [rbp-D8h]
  std::vector<unsigned int> __y; // [rsp+40h] [rbp-D0h] BYREF
  std::pair<int,std::vector<unsigned int> > __in; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-90h] BYREF
  char v34[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:559";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::checkEnterHomeAvailability;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  isEnterHomeWorldClosed = FeatureSwitchMgr::isEnterHomeWorldClosed(&v5->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  if ( isEnterHomeWorldClosed )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/player_home_comp.cpp",
      "checkEnterHomeAvailability",
      550);
    common::milog::MiLogStream::operator()(&v33, "[FEATURE_SWITCH] FEATURE_SWITCH_ENTER_HOME_WORLD is closed");
    common::milog::MiLogStream::~MiLogStream(&v33);
    memset(&__y, 0, sizeof(__y));
    std::vector<unsigned int>::vector(&__y);
    __x = RET_MP_PLAYER_NOT_ENTERABLE;
    std::make_pair<proto::Retcode,std::vector<unsigned int>>(
      (std::pair<proto::Retcode,std::vector<unsigned int> > *)&v33,
      &__x,
      &__y);
    std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(
      retstr,
      (std::pair<proto::Retcode,std::vector<unsigned int> > *)&v33);
    std::pair<proto::Retcode,std::vector<unsigned int>>::~pair((std::pair<proto::Retcode,std::vector<unsigned int> > *const)&v33);
    std::vector<unsigned int>::~vector(&__y);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    if ( PlayerMatchComp::isInMatch(MatchComp) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "checkEnterHomeAvailability",
        555);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v33, (const char (*)[10])"isInMatch");
      common::milog::MiLogStream::~MiLogStream(&v33);
      memset(&__y, 0, sizeof(__y));
      std::vector<unsigned int>::vector(&__y);
      __x = RET_HOME_IN_MATCH;
      std::make_pair<proto::Retcode,std::vector<unsigned int>>(
        (std::pair<proto::Retcode,std::vector<unsigned int> > *)&v33,
        &__x,
        &__y);
      std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(
        retstr,
        (std::pair<proto::Retcode,std::vector<unsigned int> > *)&v33);
      std::pair<proto::Retcode,std::vector<unsigned int>>::~pair((std::pair<proto::Retcode,std::vector<unsigned int> > *const)&v33);
      std::vector<unsigned int>::~vector(&__y);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/player_home_comp.cpp",
          "checkEnterHomeAvailability",
          562);
        v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v33,
               (const char (*)[27])"getCurScene is null. uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __x = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)&__x);
        common::milog::MiLogStream::~MiLogStream(&v33);
        memset(&__y, 0, sizeof(__y));
        std::vector<unsigned int>::vector(&__y);
        __x = RET_CUR_SCENE_IS_NULL;
        std::make_pair<proto::Retcode,std::vector<unsigned int>>(
          (std::pair<proto::Retcode,std::vector<unsigned int> > *)&__in,
          &__x,
          &__y);
        std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(
          retstr,
          (std::pair<proto::Retcode,std::vector<unsigned int> > *)&__in);
        std::pair<proto::Retcode,std::vector<unsigned int>>::~pair((std::pair<proto::Retcode,std::vector<unsigned int> > *const)&__in);
        std::vector<unsigned int>::~vector(&__y);
        v9 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( Scene::getSceneType(v10) == SCENE_DUNGEON )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/home/player_home_comp.cpp",
            "checkEnterHomeAvailability",
            567);
          v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v33,
                  (const char (*)[18])"in dungeon. uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          __x = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)&__x);
          common::milog::MiLogStream::~MiLogStream(&v33);
          memset(&__y, 0, sizeof(__y));
          std::vector<unsigned int>::vector(&__y);
          __x = RET_HOME_IN_DUNGEON;
          std::make_pair<proto::Retcode,std::vector<unsigned int>>(
            (std::pair<proto::Retcode,std::vector<unsigned int> > *)&v33,
            &__x,
            &__y);
          std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(
            retstr,
            (std::pair<proto::Retcode,std::vector<unsigned int> > *)&v33);
          std::pair<proto::Retcode,std::vector<unsigned int>>::~pair((std::pair<proto::Retcode,std::vector<unsigned int> > *const)&v33);
          std::vector<unsigned int>::~vector(&__y);
          v9 = 0;
        }
        else
        {
          v9 = 1;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
      if ( v9 == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        PlayerSceneComp::checkHomeAvailability(&__in, SceneComp);
        retcode = std::get<0ul,int,std::vector<unsigned int>>(&__in);
        param_vec = std::get<1ul,int,std::vector<unsigned int>>(&__in);
        if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(retcode);
        }
        if ( *retcode )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/home/player_home_comp.cpp",
            "checkEnterHomeAvailability",
            575);
          v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v33,
                  (const char (*)[30])"checkMpModeAvailability ret: ");
          v14 = common::milog::MiLogStream::operator<<<int,(int *)0>(v13, retcode);
          v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          __x = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)&__x);
          common::milog::MiLogStream::~MiLogStream(&v33);
          v16 = std::move<std::vector<unsigned int> &>(param_vec);
          if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&retstr->second._M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second._M_impl._M_end_of_storage
                                                                  + 7) >> 3)
                                                                + 0x7FFF8000) )
          {
            v16 = (std::vector<unsigned int> *)32;
            __asan_report_store_n(retstr, 32LL);
          }
          std::make_pair<int &,std::vector<unsigned int>>(retstr, retcode, v16);
          v17 = 0;
        }
        else
        {
          v17 = 1;
        }
        std::pair<int,std::vector<unsigned int>>::~pair(&__in);
        if ( v17 == 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          QuestComp = Player::getQuestComp(this->player_);
          PlayerQuestComp::checkHomeAvailability(&__in, QuestComp);
          retcode_0 = std::get<0ul,int,std::vector<unsigned int>>(&__in);
          param_vec_0 = std::get<1ul,int,std::vector<unsigned int>>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)retcode_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)retcode_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(retcode_0);
          }
          if ( *retcode_0 )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/home/player_home_comp.cpp",
              "checkEnterHomeAvailability",
              583);
            v19 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v33,
                    (const char (*)[30])"checkMpModeAvailability ret: ");
            v20 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, retcode_0);
            v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            __x = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)&__x);
            common::milog::MiLogStream::~MiLogStream(&v33);
            v22 = std::move<std::vector<unsigned int> &>(param_vec_0);
            if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&retstr->second._M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second._M_impl._M_end_of_storage
                                                                    + 7) >> 3)
                                                                  + 0x7FFF8000) )
            {
              v22 = (std::vector<unsigned int> *)32;
              __asan_report_store_n(retstr, 32LL);
            }
            std::make_pair<int &,std::vector<unsigned int>>(retstr, retcode_0, v22);
            v23 = 0;
          }
          else
          {
            v23 = 1;
          }
          std::pair<int,std::vector<unsigned int>>::~pair(&__in);
          if ( v23 == 1 )
          {
            memset(&__y, 0, sizeof(__y));
            std::vector<unsigned int>::vector(&__y);
            __x = RET_SUCC;
            std::make_pair<proto::Retcode,std::vector<unsigned int>>(
              (std::pair<proto::Retcode,std::vector<unsigned int> > *)&v33,
              &__x,
              &__y);
            std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(
              retstr,
              (std::pair<proto::Retcode,std::vector<unsigned int> > *)&v33);
            std::pair<proto::Retcode,std::vector<unsigned int>>::~pair((std::pair<proto::Retcode,std::vector<unsigned int> > *const)&v33);
            std::vector<unsigned int>::~vector(&__y);
          }
        }
      }
    }
  }
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 591: range 0000000017C7393E-0000000017C73FF3
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerHomeComp::tryEnterHome(
        PlayerHomeComp *const this,
        uint32_t target_uid,
        uint32_t target_point,
        bool is_transfer_to_safe_point)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::minet::Packet *v15; // r14
  uint32_t Uid; // eax
  GameserverService *v17; // r14
  const std::_Placeholder<2> *v18; // r9
  const std::_Placeholder<2> *v19; // r8
  int32_t result; // eax
  AsyncTaskFunc v21; // [rsp+0h] [rbp-180h]
  bool is_transfer_to_safe_pointa; // [rsp+Ch] [rbp-174h]
  uint32_t target_pointa; // [rsp+10h] [rbp-170h]
  uint32_t target_uida; // [rsp+14h] [rbp-16Ch]
  PlayerHomeComp *const thisa; // [rsp+18h] [rbp-168h]
  AsyncTaskCallbackFunc v26; // [rsp+20h] [rbp-160h] OVERLAPPED BYREF
  std::_Bind<int (*(std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>))(std::shared_ptr<common::minet::Packet>,std::any,int)> p___f; // [rsp+40h] [rbp-140h] BYREF
  std::shared_ptr<common::minet::Packet> v28; // [rsp+50h] [rbp-130h] BYREF
  proto::TryEnterHomeReq proto; // [rsp+60h] [rbp-120h] BYREF
  char v30[240]; // [rsp+90h] [rbp-F0h] BYREF

  v21._M_invoker = (std::function<int(std::shared_ptr<common::minet::Packet>,std::any)>::_Invoker_type)this;
  HIDWORD(v21._M_manager) = target_uid;
  LODWORD(v21._M_manager) = target_point;
  v21._M_functor._M_pod_data[12] = is_transfer_to_safe_point;
  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 16 18 home_world_ptr:592 64 16 19 status_data_ptr:606 96 16 14 packet_ptr:613 128 32 7 req:616";
  *(_QWORD *)(v4 + 16) = PlayerHomeComp::tryEnterHome;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<HomeWorld>((const PlayerSceneComp *const)(v4 + 32));
  if ( std::operator!=<HomeWorld>((const std::shared_ptr<HomeWorld> *)(v4 + 32), 0LL)
    && (v7 = std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32)),
        target_uid == World::getOwnerUid(v7)) )
  {
    v9 = 9707;
  }
  else
  {
    *(_QWORD *)&v26._M_functor._M_pod_data[8] = common::tools::TimeUtils::getNow();
    PlayerHomeComp::checkTryEnterInfo(this, *(time_t *)&v26._M_functor._M_pod_data[8]);
    if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->try_enter_home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->try_enter_home_uid_);
    }
    if ( this->try_enter_home_uid_ )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "tryEnterHome",
        602);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v4 + 128),
              (const char (*)[21])"try_enter_home_uid_:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->try_enter_home_uid_);
      v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v11,
              (const char (*)[23])" try_enter_home_time_:");
      common::milog::MiLogStream::operator<<<long,(long *)0>(v12, &this->try_enter_home_time_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
      v9 = 9722;
    }
    else
    {
      common::tools::perf::make_shared<proto::HomeStatusRedisData>();
      if ( std::operator==<proto::HomeStatusRedisData>(
             (const std::shared_ptr<proto::HomeStatusRedisData> *)(v4 + 64),
             0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/home/player_home_comp.cpp",
          "tryEnterHome",
          609);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          (common::milog::MiLogStream *const)(v4 + 128),
          (const char (*)[24])"status_data_ptr is null");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
        v9 = -1;
      }
      else
      {
        CoroutineHelper::getContextPacketPtr();
        if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 96), 0LL)
          || (v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96)),
              common::minet::Packet::getCmdId(v13) != 4482) )
        {
          proto::TryEnterHomeReq::TryEnterHomeReq((proto::TryEnterHomeReq *const)(v4 + 128));
          proto::TryEnterHomeReq::set_target_uid((proto::TryEnterHomeReq *const)(v4 + 128), target_uid);
          common::minet::PacketUtils::createPacket<proto::TryEnterHomeReq>(&proto);
          std::shared_ptr<common::minet::Packet>::operator=(
            (std::shared_ptr<common::minet::Packet> *const)(v4 + 96),
            (std::shared_ptr<common::minet::Packet> *)&proto);
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&proto);
          v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          common::minet::Packet::setUserId(v15, Uid);
          proto::TryEnterHomeReq::~TryEnterHomeReq((proto::TryEnterHomeReq *const)(v4 + 128));
        }
        v17 = ServiceBox::findService<GameserverService>();
        std::any::any<std::shared_ptr<proto::HomeStatusRedisData> &,std::shared_ptr<proto::HomeStatusRedisData>,std::any::_Manager_external<std::shared_ptr<proto::HomeStatusRedisData>>,true,true>(
          (std::any *const)&proto,
          (std::shared_ptr<proto::HomeStatusRedisData> *)(v4 + 64));
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &v28,
          (const std::shared_ptr<common::minet::Packet> *)(v4 + 96));
        std::bind<int (&)(std::shared_ptr<common::minet::Packet>,std::any,int),std::_Placeholder<1> const&,std::_Placeholder const&<2>,std::_Placeholder const&<3>>(
          (int (*)(std::shared_ptr<common::minet::Packet>, std::any, int))&p___f,
          (const std::_Placeholder<1> *)HomeMgr::asyncQueryHomeStatusCallback,
          (const std::_Placeholder<2> *)&std::placeholders::_1,
          (const std::_Placeholder<3> *)&std::placeholders::_2,
          (const std::_Placeholder<1> *)&std::placeholders::_3,
          v18,
          (const std::_Placeholder<3> *)v21._M_functor._M_unused._M_object);
        std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::function<std::_Bind<int (*)(std::shared_ptr<common::minet::Packet>,std::any,int) ()(std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>,void,void>(
          (std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)(v4 + 128),
          &p___f);
        std::bind<int (&)(std::shared_ptr<common::minet::Packet>,std::any),std::_Placeholder<1> const&,std::_Placeholder const&<2>>(
          (int (*)(std::shared_ptr<common::minet::Packet>, std::any))&v26._M_manager,
          (const std::_Placeholder<1> *)HomeMgr::asyncQueryHomeStatus,
          (const std::_Placeholder<2> *)&std::placeholders::_1,
          (const std::_Placeholder<1> *)&std::placeholders::_2,
          v19);
        std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function<std::_Bind<int (*)(std::shared_ptr<common::minet::Packet>,std::any) ()(std::_Placeholder<1>,std::_Placeholder<2>)>,void,void>(
          (std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> *const)&proto.is_transfer_to_safe_point_,
          (std::_Bind<int (*(std::_Placeholder<1>,std::_Placeholder<2>))(std::shared_ptr<common::minet::Packet>,std::any)> *)&v26._M_manager);
        *(_DWORD *)&v26._M_functor._M_pod_data[4] = ServiceBase::pushAsyncTask(
                                                      v17,
                                                      v21,
                                                      v26,
                                                      (common::minet::PacketPtr)__PAIR128__(
                                                                                  v4 + 128,
                                                                                  (proto::TryEnterHomeReq *)&proto.is_transfer_to_safe_point_),
                                                      (std::any)__PAIR128__(&proto, &v28));
        std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::~function((std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> *const)&proto.is_transfer_to_safe_point_);
        std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::~function((std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)(v4 + 128));
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v28);
        std::any::~any((std::any *const)&proto);
        PlayerHomeComp::setTryEnterInfo(
          thisa,
          target_uida,
          *(time_t *)&v26._M_functor._M_pod_data[8],
          target_pointa,
          is_transfer_to_safe_pointa);
        v9 = *(_DWORD *)&v26._M_functor._M_pod_data[4];
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 96));
      }
      std::shared_ptr<proto::HomeStatusRedisData>::~shared_ptr((std::shared_ptr<proto::HomeStatusRedisData> *const)(v4 + 64));
    }
  }
  std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v4 + 32));
  result = v9;
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 635: range 0000000017C73FF4-0000000017C7424A
int32_t __cdecl PlayerHomeComp::onAsyncQueryHomeStatusOffline(
        PlayerHomeComp *const this,
        uint32_t target_uid,
        const proto::HomeStatusRedisData *status_data)
{
  uint32_t Uid; // eax
  unsigned __int64 v5; // rax
  int32_t *v6; // rdx
  int32_t v7; // r13d
  uint64_t rand; // r12
  GameserverApp *v9; // rax
  uint32_t AppId; // ebx
  uint32_t v11; // eax
  uint32_t owner_init_home_module_id; // [rsp+2Ch] [rbp-44h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-40h] BYREF

  owner_init_home_module_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( target_uid == Player::getUid(this->player_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->init_home_module_id_);
    }
    if ( !this->init_home_module_id_ )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "onAsyncQueryHomeStatusOffline",
        641);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator()(&v14, "uid:%u init_home_module_id is 0", Uid);
      common::milog::MiLogStream::~MiLogStream(&v14);
      return 9726;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->init_home_module_id_);
    }
    owner_init_home_module_id = this->init_home_module_id_;
  }
  v5 = ZTWN11ThreadLocal17work_thread_indexE();
  v6 = (int32_t *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v5);
  v7 = *v6;
  rand = proto::HomeStatusRedisData::load_rand(status_data);
  v9 = Singleton<GameserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v11 = Player::getUid(this->player_);
  return HomeHandler::sendServerTryEnterHomeReq(v11, target_uid, AppId, rand, owner_init_home_module_id, v7, 0);
};

// Line 652: range 0000000017C7424C-0000000017C7445C
int32_t __cdecl PlayerHomeComp::onAsyncQueryHomeStatusOnline(
        PlayerHomeComp *const this,
        uint32_t target_uid,
        const proto::HomeStatusRedisData *status_data)
{
  uint32_t Uid; // eax
  uint64_t rand; // r12
  uint32_t v6; // ebx
  uint32_t v7; // eax
  uint32_t owner_init_home_module_id; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  owner_init_home_module_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( target_uid == Player::getUid(this->player_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->init_home_module_id_);
    }
    if ( !this->init_home_module_id_ )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "onAsyncQueryHomeStatusOnline",
        658);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator()(&v10, "uid:%u init_home_module_id is 0", Uid);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return 9726;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->init_home_module_id_);
    }
    owner_init_home_module_id = this->init_home_module_id_;
  }
  rand = proto::HomeStatusRedisData::load_rand(status_data);
  v6 = proto::HomeStatusRedisData::gameserver_id(status_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = Player::getUid(this->player_);
  return HomeHandler::sendServerTryEnterHomeReq(v7, target_uid, v6, rand, owner_init_home_module_id, -1, 0);
};

// Line 668: range 0000000017C7445E-0000000017C745DA
int32_t __cdecl PlayerHomeComp::sendServerGetFriendEnterHomeOptionReq(PlayerHomeComp *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 7 req:669";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::sendServerGetFriendEnterHomeOptionReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::ServerGetFriendEnterHomeOptionReq::ServerGetFriendEnterHomeOptionReq((proto::ServerGetFriendEnterHomeOptionReq *const)(v2 + 32));
  proto::ServerGetFriendEnterHomeOptionReq::set_target_uid(
    (proto::ServerGetFriendEnterHomeOptionReq *const)(v2 + 32),
    target_uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  sendProtoToSocialService<proto::ServerGetFriendEnterHomeOptionReq>(
    this->player_,
    (proto::ServerGetFriendEnterHomeOptionReq *)(v2 + 32));
  proto::ServerGetFriendEnterHomeOptionReq::~ServerGetFriendEnterHomeOptionReq((proto::ServerGetFriendEnterHomeOptionReq *const)(v2 + 32));
  result = 0;
  if ( v6 == (char *)v2 )
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
  return result;
};

// Line 676: range 0000000017C745DC-0000000017C755C3
int32_t __cdecl PlayerHomeComp::onServerTryEnterHomeRsp(
        PlayerHomeComp *const this,
        const proto::ServerTryEnterHomeRsp *rsp_0)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  PlayerSceneComp *SceneComp; // r14
  PlayerSceneComp *v10; // rax
  uint32_t MyCurPlayerSceneId; // eax
  PlayerHomeComp *HomeComp; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  GameserverService *v23; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  GameserverApp *v30; // rax
  uint32_t AppId; // eax
  google::protobuf::uint32 v32; // r14d
  unsigned __int64 v33; // rax
  _DWORD *v34; // rdx
  char v35; // al
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  common::milog::MiLogStream *v39; // r14
  common::minet::Packet *v40; // r14
  uint32_t Uid; // eax
  GameserverService *v42; // r14
  common::minet::PacketPtr v43; // rdi
  __int64 v44; // rsi
  PlayerSceneComp *v45; // rax
  common::milog::MiLogStream *v46; // r14
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  int32_t result; // eax
  bool is_transfer_to_safe_point; // [rsp+13h] [rbp-17Dh]
  unsigned int val; // [rsp+14h] [rbp-17Ch] BYREF
  uint32_t target_app_id; // [rsp+18h] [rbp-178h]
  uint32_t enter_home_point; // [rsp+1Ch] [rbp-174h]
  std::tuple_element<0,std::pair<int,std::vector<unsigned int> > >::type *ret; // [rsp+20h] [rbp-170h]
  std::tuple_element<1,std::pair<int,std::vector<unsigned int> > >::type *param_vec; // [rsp+28h] [rbp-168h]
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+30h] [rbp-160h] BYREF
  std::pair<int,std::vector<unsigned int> > __in; // [rsp+40h] [rbp-150h] BYREF
  common::milog::MiLogStream v61; // [rsp+60h] [rbp-130h] BYREF
  char v62[272]; // [rsp+80h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 19 target_home_uid:677 64 4 11 retcode:695 80 4 7 ret:744 96 16 19 target_home_ptr:714 12"
                        "8 16 21 logout_packet_ptr:728 160 24 14 logout_req:726";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::onServerTryEnterHomeRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = proto::ServerTryEnterHomeRsp::target_home_uid(rsp_0);
  target_app_id = proto::ServerTryEnterHomeRsp::target_app_id(rsp_0);
  if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_enter_home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->try_enter_home_uid_);
  }
  if ( this->try_enter_home_uid_ == *(_DWORD *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_point_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_enter_home_point_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->try_enter_home_point_);
    }
    enter_home_point = this->try_enter_home_point_;
    if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_is_transfer_to_safe_point_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 15) & 7) >= *(_BYTE *)(((unsigned __int64)&this->try_enter_home_is_transfer_to_safe_point_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->try_enter_home_is_transfer_to_safe_point_);
    }
    is_transfer_to_safe_point = this->try_enter_home_is_transfer_to_safe_point_;
    PlayerHomeComp::resetTryEnterInfo(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Player::getUid(this->player_) == *(_DWORD *)(v2 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = Player::getSceneComp(this->player_);
      MyCurPlayerSceneId = PlayerSceneComp::getMyCurPlayerSceneId(v10);
      PlayerSceneComp::setMyCurSceneId(SceneComp, MyCurPlayerSceneId);
    }
    *(_DWORD *)(v2 + 64) = proto::ServerTryEnterHomeRsp::retcode(rsp_0);
    if ( !*(_DWORD *)(v2 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      HomeComp = Player::getHomeComp(this->player_);
      PlayerHomeComp::checkEnterHomeAvailability(&__in, HomeComp);
      ret = std::get<0ul,int,std::vector<unsigned int>>(&__in);
      param_vec = std::get<1ul,int,std::vector<unsigned int>>(&__in);
      if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(ret);
      }
      if ( *ret )
      {
        *(_DWORD *)(v2 + 64) = *ret;
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/player_home_comp.cpp",
          "onServerTryEnterHomeRsp",
          703);
        v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v61, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v14,
                (const char (*)[33])" checkEnterHomeAvailability ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v15, ret);
        common::milog::MiLogStream::~MiLogStream(&v61);
      }
      std::pair<int,std::vector<unsigned int>>::~pair(&__in);
    }
    if ( *(_DWORD *)(v2 + 64) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__in,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "onServerTryEnterHomeRsp",
        708);
      v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)&__in,
              (const char (*)[39])"ServerTryEnterHomeRsp failed. retcode:");
      v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v2 + 64));
      v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v19,
              (const char (*)[18])" target_home_uid:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])" target_app_id:");
      common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v61, target_app_id);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)&v61);
      std::string::~string(&v61);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in);
      PlayerHomeComp::sendTryEnterHomeRsp(this, *(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 48));
      v8 = 0;
    }
    else
    {
      v23 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v23);
      HomeMgr::findOnlineHome((HomeMgr *const)(v2 + 96), GameThreadLocal + 704);
      if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__in,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/player_home_comp.cpp",
          "onServerTryEnterHomeRsp",
          717);
        v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                (common::milog::MiLogStream *const)&__in,
                (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
        v27 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v26,
                (const char (*)[18])" target_home_uid:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v2 + 48));
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v28,
                (const char (*)[16])" target_app_id:");
        common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v61, target_app_id);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, (const std::string *)&v61);
        std::string::~string(&v61);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in);
        v30 = Singleton<GameserverApp>::instance();
        AppId = AppBase::getAppId((AppBase *const)v30);
        if ( target_app_id != AppId )
          goto LABEL_42;
        v32 = proto::ServerTryEnterHomeRsp::target_thread_index(rsp_0);
        v33 = ZTWN11ThreadLocal17work_thread_indexE();
        v34 = (_DWORD *)v33;
        if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) != 0 && (char)((v33 & 7) + 3) >= *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
          __asan_report_load4(v33);
        if ( v32 == *v34 )
          v35 = 1;
        else
LABEL_42:
          v35 = 0;
        if ( v35 )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/home/player_home_comp.cpp",
            "onServerTryEnterHomeRsp",
            720);
          v36 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v61, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v2 + 80) = Player::getUid(this->player_);
          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v36,
                  (const unsigned int *)(v2 + 80));
          v38 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  v37,
                  (const char (*)[31])" same app_id and thread_index:");
          val = proto::ServerTryEnterHomeRsp::target_thread_index(rsp_0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
          common::milog::MiLogStream::~MiLogStream(&v61);
        }
        PlayerHomeComp::sendTryEnterHomeRsp(this, 0, *(_DWORD *)(v2 + 48));
        proto::PlayerLogoutReq::PlayerLogoutReq((proto::PlayerLogoutReq *const)(v2 + 160));
        proto::PlayerLogoutReq::set_reason(
          (proto::PlayerLogoutReq *const)(v2 + 160),
          PlayerLogoutReq_Reason_PLAYER_TRANSFER);
        common::minet::PacketUtils::createPacket<proto::PlayerLogoutReq>((const proto::PlayerLogoutReq *)(v2 + 128));
        if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/home/player_home_comp.cpp",
            "onServerTryEnterHomeRsp",
            731);
          v39 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v61,
                  (const char (*)[26])"createPacket failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &val);
          common::milog::MiLogStream::~MiLogStream(&v61);
          v8 = 0;
        }
        else
        {
          v40 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          common::minet::Packet::setUserId(v40, Uid);
          v42 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &p_packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v2 + 128));
          GameserverService::setPacketGameThreadIndex(v42, &p_packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
          v43._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v2 + 128);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &p_packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v2 + 128));
          v43._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&p_packet_ptr;
          ServiceBox::pushPacketToService(v43);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v44 = *(unsigned int *)(v2 + 48);
          Player::setTransferTargetHome(this->player_, v44, target_app_id);
          if ( *(_BYTE *)(((unsigned __int64)&this->saved_try_enter_home_point_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->saved_try_enter_home_point_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->saved_try_enter_home_point_, v44, &this->saved_try_enter_home_point_);
          }
          this->saved_try_enter_home_point_ = enter_home_point;
          if ( *(char *)(((unsigned __int64)&this->saved_try_enter_home_is_transfer_to_safe_point_ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(
              &this->saved_try_enter_home_is_transfer_to_safe_point_,
              v44,
              &this->saved_try_enter_home_is_transfer_to_safe_point_);
          this->saved_try_enter_home_is_transfer_to_safe_point_ = is_transfer_to_safe_point;
          v8 = 509;
        }
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
        proto::PlayerLogoutReq::~PlayerLogoutReq((proto::PlayerLogoutReq *const)(v2 + 160));
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v45 = Player::getSceneComp(this->player_);
        *(_DWORD *)(v2 + 80) = PlayerSceneComp::joinHomeScene(
                                 v45,
                                 *(_DWORD *)(v2 + 48),
                                 0,
                                 enter_home_point,
                                 is_transfer_to_safe_point);
        if ( *(_DWORD *)(v2 + 80) )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/home/player_home_comp.cpp",
            "onServerTryEnterHomeRsp",
            747);
          v46 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v61,
                  (const char (*)[27])"joinHomeScene failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &val);
          v48 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v47,
                  (const char (*)[18])" target_home_uid:");
          v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v48,
                  (const unsigned int *)(v2 + 48));
          v50 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v49, (const char (*)[6])" ret:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v50, (const int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v61);
        }
        PlayerHomeComp::sendTryEnterHomeRsp(this, *(_DWORD *)(v2 + 80), *(_DWORD *)(v2 + 48));
        v8 = *(_DWORD *)(v2 + 80);
      }
      std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/player_home_comp.cpp",
      "onServerTryEnterHomeRsp",
      682);
    v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v61,
           (const char (*)[53])"different target_home_uid. self try_enter_home_uid_:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->try_enter_home_uid_);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           v6,
           (const char (*)[24])"!= rsp target_home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v61);
    v8 = -1;
  }
  result = v8;
  if ( v62 == (char *)v2 )
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

// Line 756: range 0000000017C755C4-0000000017C75769
int32_t __cdecl PlayerHomeComp::sendTryEnterHomeRsp(PlayerHomeComp *const this, int32_t retcode, uint32_t target_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  char v8[176]; // [rsp+10h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 10 notify:757";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::sendTryEnterHomeRsp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  proto::TryEnterHomeRsp::TryEnterHomeRsp((proto::TryEnterHomeRsp *const)(v3 + 48));
  proto::TryEnterHomeRsp::set_retcode((proto::TryEnterHomeRsp *const)(v3 + 48), retcode);
  proto::TryEnterHomeRsp::set_target_uid((proto::TryEnterHomeRsp *const)(v3 + 48), target_uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 48));
  proto::TryEnterHomeRsp::~TryEnterHomeRsp((proto::TryEnterHomeRsp *const)(v3 + 48));
  result = 0;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 765: range 0000000017C7576A-0000000017C759E6
int32_t __cdecl PlayerHomeComp::sendTryEnterHomeRsp(
        PlayerHomeComp *const this,
        int32_t retcode,
        uint32_t target_uid,
        const std::vector<unsigned int> *param_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int *v7; // rax
  google::protobuf::uint32 *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 48 10 notify:766";
  *(_QWORD *)(v4 + 16) = PlayerHomeComp::sendTryEnterHomeRsp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -202116109;
  proto::TryEnterHomeRsp::TryEnterHomeRsp((proto::TryEnterHomeRsp *const)(v4 + 48));
  proto::TryEnterHomeRsp::set_retcode((proto::TryEnterHomeRsp *const)(v4 + 48), retcode);
  proto::TryEnterHomeRsp::set_target_uid((proto::TryEnterHomeRsp *const)(v4 + 48), target_uid);
  __for_range = param_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(param_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(param_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    proto::TryEnterHomeRsp::add_param_list((proto::TryEnterHomeRsp *const)(v4 + 48), *v8);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v4 + 48));
  proto::TryEnterHomeRsp::~TryEnterHomeRsp((proto::TryEnterHomeRsp *const)(v4 + 48));
  result = 0;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 778: range 0000000017C759E8-0000000017C75B72
int32_t __cdecl PlayerHomeComp::sendJoinHomeWorldFailNotify(
        PlayerHomeComp *const this,
        int32_t retcode,
        uint32_t target_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 10 notify:779";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::sendJoinHomeWorldFailNotify;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  proto::JoinHomeWorldFailNotify::JoinHomeWorldFailNotify((proto::JoinHomeWorldFailNotify *const)(v3 + 32));
  proto::JoinHomeWorldFailNotify::set_retcode((proto::JoinHomeWorldFailNotify *const)(v3 + 32), retcode);
  proto::JoinHomeWorldFailNotify::set_target_uid((proto::JoinHomeWorldFailNotify *const)(v3 + 32), target_uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 32));
  proto::JoinHomeWorldFailNotify::~JoinHomeWorldFailNotify((proto::JoinHomeWorldFailNotify *const)(v3 + 32));
  result = 0;
  if ( v8 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 787: range 0000000017C75B74-0000000017C75F0E
int32_t __cdecl PlayerHomeComp::sendHomeCompInfoNotify(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  google::protobuf::RepeatedField<unsigned int> *v8; // rax
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  proto::PlayerHomeCompInfo *comp_proto; // [rsp+28h] [rbp-A8h]
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-98h]
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:788";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::sendHomeCompInfoNotify;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::PlayerHomeCompInfoNotify::PlayerHomeCompInfoNotify((proto::PlayerHomeCompInfoNotify *const)(v1 + 32));
  comp_proto = proto::PlayerHomeCompInfoNotify::mutable_comp_info((proto::PlayerHomeCompInfoNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->friend_enter_home_option_);
  }
  proto::PlayerHomeCompInfo::set_friend_enter_home_option(comp_proto, this->friend_enter_home_option_);
  __for_range = &this->unlocked_module_id_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->unlocked_module_id_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->unlocked_module_id_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::PlayerHomeCompInfo::add_unlocked_module_id_list(comp_proto, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->levelup_reward_got_level_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->levelup_reward_got_level_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    proto::PlayerHomeCompInfo::add_levelup_reward_got_level_list(comp_proto, *v7);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  v8 = proto::PlayerHomeCompInfo::mutable_seen_module_id_list(comp_proto);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->seen_module_id_set_, v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::PlayerHomeCompInfoNotify::~PlayerHomeCompInfoNotify((proto::PlayerHomeCompInfoNotify *const)(v1 + 32));
  result = 0;
  if ( v15 == (char *)v1 )
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

// Line 805: range 0000000017C75FB6-0000000017C76CEC
int32_t __cdecl PlayerHomeComp::sendHomeMarkPointNotify(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerHomeComp *HomeComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  google::protobuf::uint32 v6; // eax
  google::protobuf::uint32 v7; // eax
  const proto::VectorBin *v8; // rax
  google::protobuf::uint32 v9; // eax
  const proto::VectorBin *v10; // rax
  proto::HomeMarkPointFurnitureData *v11; // rax
  const proto::VectorBin *v12; // rax
  proto::HomeMarkPointFurnitureData *v13; // rax
  const proto::VectorBin *v14; // rax
  proto::HomeMarkPointFurnitureData *v15; // rax
  const proto::VectorBin *v16; // rax
  google::protobuf::uint32 v17; // eax
  const proto::VectorBin *v18; // rax
  proto::Vector *v19; // rax
  LuaConfigMgr *p_lua_config_mgr; // r14
  uint32_t v21; // eax
  common::milog::MiLogStream *v22; // r14
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  bool v24; // r14
  Vector3 *p_born_pos; // r14
  proto::Vector *v26; // rax
  const proto::VectorBin *v27; // rax
  proto::HomeMarkPointFurnitureData *v28; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-254h] BYREF
  uint32_t cur_module_id; // [rsp+20h] [rbp-250h]
  uint32_t suite_furnitue_id; // [rsp+24h] [rbp-24Ch]
  uint32_t furniture_id_0; // [rsp+28h] [rbp-248h]
  uint32_t guid_0; // [rsp+2Ch] [rbp-244h]
  uint32_t guid_4; // [rsp+30h] [rbp-240h]
  uint32_t furniture_id_3; // [rsp+34h] [rbp-23Ch]
  uint32_t guid_3; // [rsp+38h] [rbp-238h]
  uint32_t guid_2; // [rsp+3Ch] [rbp-234h]
  uint32_t furniture_id_2; // [rsp+40h] [rbp-230h]
  uint32_t guid_1; // [rsp+44h] [rbp-22Ch]
  uint32_t furniture_id_1; // [rsp+48h] [rbp-228h]
  uint32_t avatar_id; // [rsp+4Ch] [rbp-224h]
  uint32_t guid; // [rsp+50h] [rbp-220h]
  uint32_t furniture_id; // [rsp+54h] [rbp-21Ch]
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_begin; // [rsp+58h] [rbp-218h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_end; // [rsp+60h] [rbp-210h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::const_iterator __for_begin_0; // [rsp+68h] [rbp-208h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::const_iterator __for_end_0; // [rsp+70h] [rbp-200h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeNpcBin>::const_iterator __for_begin_1; // [rsp+78h] [rbp-1F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeNpcBin>::const_iterator __for_end_1; // [rsp+80h] [rbp-1F0h] BYREF
  const proto::HomeSceneCompSnapshotBin *scene_comp_bin; // [rsp+88h] [rbp-1E8h]
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+90h] [rbp-1E0h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *__for_range; // [rsp+98h] [rbp-1D8h]
  const proto::HomeModuleSnapshotBin *module_bin; // [rsp+A0h] [rbp-1D0h]
  const google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin> *__for_range_0; // [rsp+A8h] [rbp-1C8h]
  const proto::HomeSceneSnapshotBin *scene_bin; // [rsp+B0h] [rbp-1C0h]
  proto::HomeMarkPointSceneData *mark_point_data; // [rsp+B8h] [rbp-1B8h]
  const google::protobuf::RepeatedPtrField<proto::HomeNpcBin> *__for_range_1; // [rsp+C0h] [rbp-1B0h]
  const proto::HomeFurnitureBin *main_house_bin; // [rsp+C8h] [rbp-1A8h]
  const google::protobuf::RepeatedPtrField<proto::HomeTransferSnapShotBin> *__for_range_2; // [rsp+D0h] [rbp-1A0h]
  const google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin> *__for_range_3; // [rsp+D8h] [rbp-198h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin> *__for_range_4; // [rsp+E0h] [rbp-190h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+E8h] [rbp-188h]
  const google::protobuf::RepeatedPtrField<proto::HomeMarkPointFurnitureDataBin> *__for_range_5; // [rsp+F0h] [rbp-180h]
  const proto::HomeMarkPointFurnitureDataBin *normal_mark_point_data; // [rsp+F8h] [rbp-178h]
  const proto::HomeFurnitureSuiteBin *suit_bin; // [rsp+100h] [rbp-170h]
  proto::HomeMarkPointFurnitureData *mark_furniture_proto_0; // [rsp+108h] [rbp-168h]
  proto::HomeMarkPointSuiteData *suite_data; // [rsp+110h] [rbp-160h]
  const proto::HomeFieldSnapShotBin *field_bin; // [rsp+118h] [rbp-158h]
  const proto::HomeTransferSnapShotBin *transfer_bin; // [rsp+120h] [rbp-150h]
  const proto::HomeNpcBin *npc_bin; // [rsp+128h] [rbp-148h]
  proto::HomeMarkPointFurnitureData *mark_furniture_proto; // [rsp+130h] [rbp-140h]
  proto::HomeMarkPointNPCData *npc_data; // [rsp+138h] [rbp-138h]
  std::shared_ptr<Config> v74; // [rsp+140h] [rbp-130h] BYREF
  std::shared_ptr<Config> v75; // [rsp+150h] [rbp-120h] BYREF
  common::milog::MiLogStream v76; // [rsp+160h] [rbp-110h] BYREF
  char v77[240]; // [rsp+180h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v77;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 8 28 set_mark_furniture_proto:815 80 12 7 pos:899 112 48 10 notify:810";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::sendHomeMarkPointNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862722] = 0x4000000;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  if ( !PlayerHomeComp::isInHomeWorld(HomeComp) )
  {
    proto::HomeMarkPointNotify::HomeMarkPointNotify((proto::HomeMarkPointNotify *const)(v1 + 112));
    scene_comp_bin = proto::HomeSnapshotBin::scene_snapshot(&this->home_snapshot_bin_);
    cur_module_id = proto::HomeSceneCompSnapshotBin::cur_module_id(scene_comp_bin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v74);
    home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v74)->design_config.txt_config_mgr.home_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v74);
    *(_QWORD *)(v1 + 48) = home_config_mgr;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v75);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75);
    suite_furnitue_id = ConstValueExcelConfigMgr::getHomeSuiteFurnitureID(&v5->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v75);
    __for_range = proto::HomeSceneCompSnapshotBin::module_bin_list(scene_comp_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      module_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator*(&__for_begin);
      v6 = proto::HomeModuleSnapshotBin::module_id(module_bin);
      if ( cur_module_id == v6 )
      {
        __for_range_0 = proto::HomeModuleSnapshotBin::scene_bin_list(module_bin);
        __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::begin(__for_range_0).it_;
        __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::end(__for_range_0).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator!=(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          scene_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator*(&__for_begin_0);
          mark_point_data = proto::HomeMarkPointNotify::add_mark_point_data_list((proto::HomeMarkPointNotify *const)(v1 + 112));
          proto::HomeMarkPointSceneData::set_module_id(mark_point_data, cur_module_id);
          v7 = proto::HomeSceneSnapshotBin::scene_id(scene_bin);
          proto::HomeMarkPointSceneData::set_scene_id(mark_point_data, v7);
          __for_range_1 = proto::HomeSceneSnapshotBin::deploy_npc_list(scene_bin);
          __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeNpcBin>::begin(__for_range_1).it_;
          __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeNpcBin>::end(__for_range_1).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeNpcBin const>::operator!=(
                    &__for_begin_1,
                    &__for_end_1) )
          {
            npc_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeNpcBin const>::operator*(&__for_begin_1);
            avatar_id = proto::HomeNpcBin::avatar_id(npc_bin);
            guid = 0;
            furniture_id = HomeWorldExcelConfigMgr::getFurnitureIdByAvatarId(home_config_mgr, avatar_id);
            v8 = proto::HomeNpcBin::spawn_pos(npc_bin);
            Vector3::Vector3((Vector3 *const)(v1 + 80), v8);
            mark_furniture_proto = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
            PlayerHomeComp::sendHomeMarkPointNotify(void)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
              (const PlayerHomeComp::sendHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v1 + 48),
              mark_furniture_proto,
              guid,
              furniture_id,
              (const Vector3 *)(v1 + 80));
            npc_data = proto::HomeMarkPointFurnitureData::mutable_npc_data(mark_furniture_proto);
            proto::HomeMarkPointNPCData::set_avatar_id(npc_data, avatar_id);
            v9 = proto::HomeNpcBin::costume_id(npc_bin);
            proto::HomeMarkPointNPCData::set_costume_id(npc_data, v9);
            google::protobuf::internal::RepeatedPtrIterator<proto::HomeNpcBin const>::operator++(&__for_begin_1);
          }
          if ( proto::HomeSceneSnapshotBin::has_main_house(scene_bin) )
          {
            main_house_bin = proto::HomeSceneSnapshotBin::main_house(scene_bin);
            furniture_id_0 = proto::HomeFurnitureBin::furniture_id(main_house_bin);
            v10 = proto::HomeFurnitureBin::spawn_pos(main_house_bin);
            Vector3::Vector3((Vector3 *const)(v1 + 80), v10);
            guid_0 = proto::HomeFurnitureBin::guid(main_house_bin);
            v11 = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
            PlayerHomeComp::sendHomeMarkPointNotify(void)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
              (const PlayerHomeComp::sendHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v1 + 48),
              v11,
              guid_0,
              furniture_id_0,
              (const Vector3 *)(v1 + 80));
          }
          __for_range_2 = proto::HomeSceneSnapshotBin::transfer_bin_list(scene_bin);
          __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeTransferSnapShotBin>::begin(__for_range_2).it_;
          __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeTransferSnapShotBin>::end(__for_range_2).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeTransferSnapShotBin const>::operator!=(
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeTransferSnapShotBin> *const)&__for_begin_1,
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeTransferSnapShotBin>::iterator *)&__for_end_1) )
          {
            transfer_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeTransferSnapShotBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeTransferSnapShotBin> *const)&__for_begin_1);
            guid_1 = proto::HomeTransferSnapShotBin::furniture_guid(transfer_bin);
            furniture_id_1 = proto::HomeTransferSnapShotBin::furniture_id(transfer_bin);
            v12 = proto::HomeTransferSnapShotBin::spawn_pos(transfer_bin);
            Vector3::Vector3((Vector3 *const)(v1 + 80), v12);
            v13 = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
            PlayerHomeComp::sendHomeMarkPointNotify(void)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
              (const PlayerHomeComp::sendHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v1 + 48),
              v13,
              guid_1,
              furniture_id_1,
              (const Vector3 *)(v1 + 80));
            google::protobuf::internal::RepeatedPtrIterator<proto::HomeTransferSnapShotBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeTransferSnapShotBin> *const)&__for_begin_1);
          }
          __for_range_3 = proto::HomeSceneSnapshotBin::field_bin_list(scene_bin);
          __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin>::begin(__for_range_3).it_;
          __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin>::end(__for_range_3).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFieldSnapShotBin const>::operator!=(
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFieldSnapShotBin> *const)&__for_begin_1,
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFieldSnapShotBin>::iterator *)&__for_end_1) )
          {
            field_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFieldSnapShotBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFieldSnapShotBin> *const)&__for_begin_1);
            guid_2 = proto::HomeFieldSnapShotBin::field_guid(field_bin);
            furniture_id_2 = proto::HomeFieldSnapShotBin::furniture_id(field_bin);
            v14 = proto::HomeFieldSnapShotBin::spawn_pos(field_bin);
            Vector3::Vector3((Vector3 *const)(v1 + 80), v14);
            v15 = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
            PlayerHomeComp::sendHomeMarkPointNotify(void)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
              (const PlayerHomeComp::sendHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v1 + 48),
              v15,
              guid_2,
              furniture_id_2,
              (const Vector3 *)(v1 + 80));
            google::protobuf::internal::RepeatedPtrIterator<proto::HomeFieldSnapShotBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFieldSnapShotBin> *const)&__for_begin_1);
          }
          __for_range_4 = proto::HomeSceneSnapshotBin::furniture_suite_list(scene_bin);
          __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::begin(__for_range_4).it_;
          __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::end(__for_range_4).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator!=(
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteBin> *const)&__for_begin_1,
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteBin>::iterator *)&__for_end_1) )
          {
            suit_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteBin> *const)&__for_begin_1);
            guid_3 = proto::HomeFurnitureSuiteBin::guid(suit_bin);
            v16 = proto::HomeFurnitureSuiteBin::spawn_pos(suit_bin);
            Vector3::Vector3((Vector3 *const)(v1 + 80), v16);
            mark_furniture_proto_0 = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
            PlayerHomeComp::sendHomeMarkPointNotify(void)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
              (const PlayerHomeComp::sendHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v1 + 48),
              mark_furniture_proto_0,
              guid_3,
              suite_furnitue_id,
              (const Vector3 *)(v1 + 80));
            suite_data = proto::HomeMarkPointFurnitureData::mutable_suite_data(mark_furniture_proto_0);
            v17 = proto::HomeFurnitureSuiteBin::suite_id(suit_bin);
            proto::HomeMarkPointSuiteData::set_suite_id(suite_data, v17);
            google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteBin> *const)&__for_begin_1);
          }
          v18 = proto::HomeSceneSnapshotBin::djinn_pos(scene_bin);
          Vector3::Vector3((Vector3 *const)(v1 + 80), v18);
          v19 = proto::HomeMarkPointSceneData::mutable_teapot_spirit_pos(mark_point_data);
          Vector3::toClient((const Vector3 *const)(v1 + 80), v19);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v75);
          p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75)->design_config.lua_config_mgr;
          v21 = proto::HomeSceneSnapshotBin::scene_id(scene_bin);
          scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, v21);
          std::shared_ptr<Config>::~shared_ptr(&v75);
          if ( scene_config_ptr )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v75);
            p_scene_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75)->design_config.txt_config_mgr.scene_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&scene_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&scene_config_ptr->scene_id);
            }
            v24 = SceneExcelConfigMgr::getSceneTypeBySceneId(p_scene_config_mgr, scene_config_ptr->scene_id) == SCENE_HOME_WORLD;
            std::shared_ptr<Config>::~shared_ptr(&v75);
            if ( v24 )
            {
              p_born_pos = &scene_config_ptr->born_pos;
              v26 = proto::HomeMarkPointSceneData::mutable_safe_point_pos(mark_point_data);
              Vector3::toClient(p_born_pos, v26);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v76,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/home/player_home_comp.cpp",
              "sendHomeMarkPointNotify",
              887);
            v22 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v76,
                    (const char (*)[40])"home_scene config not found, scene_id: ");
            val = proto::HomeSceneSnapshotBin::scene_id(scene_bin);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
            common::milog::MiLogStream::~MiLogStream(&v76);
          }
          __for_range_5 = proto::HomeSceneSnapshotBin::normal_mark_point_list(scene_bin);
          __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeMarkPointFurnitureDataBin>::begin(__for_range_5).it_;
          __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeMarkPointFurnitureDataBin>::end(__for_range_5).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeMarkPointFurnitureDataBin const>::operator!=(
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeMarkPointFurnitureDataBin> *const)&__for_begin_1,
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeMarkPointFurnitureDataBin>::iterator *)&__for_end_1) )
          {
            normal_mark_point_data = google::protobuf::internal::RepeatedPtrIterator<proto::HomeMarkPointFurnitureDataBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeMarkPointFurnitureDataBin> *const)&__for_begin_1);
            guid_4 = proto::HomeMarkPointFurnitureDataBin::guid(normal_mark_point_data);
            furniture_id_3 = proto::HomeMarkPointFurnitureDataBin::furniture_id(normal_mark_point_data);
            v27 = proto::HomeMarkPointFurnitureDataBin::pos(normal_mark_point_data);
            Vector3::Vector3((Vector3 *const)(v1 + 80), v27);
            v28 = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
            PlayerHomeComp::sendHomeMarkPointNotify(void)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
              (const PlayerHomeComp::sendHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v1 + 48),
              v28,
              guid_4,
              furniture_id_3,
              (const Vector3 *)(v1 + 80));
            google::protobuf::internal::RepeatedPtrIterator<proto::HomeMarkPointFurnitureDataBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeMarkPointFurnitureDataBin> *const)&__for_begin_1);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator++(&__for_begin_0);
        }
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 112));
    proto::HomeMarkPointNotify::~HomeMarkPointNotify((proto::HomeMarkPointNotify *const)(v1 + 112));
  }
  result = 0;
  if ( v77 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 815: range 0000000017C75F10-0000000017C75FB5
void __cdecl PlayerHomeComp::sendHomeMarkPointNotify(void)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
        const PlayerHomeComp::sendHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const __closure,
        proto::HomeMarkPointFurnitureData *proto,
        uint32_t guid,
        uint32_t furniture_id,
        const Vector3 *pos)
{
  google::protobuf::uint32 FurnitureSpeicalType; // edx
  proto::Vector *v6; // rdx

  proto::HomeMarkPointFurnitureData::set_guid(proto, guid);
  proto::HomeMarkPointFurnitureData::set_furniture_id(proto, furniture_id);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  FurnitureSpeicalType = HomeWorldExcelConfigMgr::getFurnitureSpeicalType(__closure->__home_config_mgr, furniture_id);
  proto::HomeMarkPointFurnitureData::set_furniture_type(proto, FurnitureSpeicalType);
  v6 = proto::HomeMarkPointFurnitureData::mutable_pos(proto);
  Vector3::toClient(pos, v6);
};

// Line 909: range 0000000017C76CEE-0000000017C77121
int32_t __cdecl PlayerHomeComp::sendHomeBasicInfoNotify(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerHomeComp *HomeComp; // rax
  uint32_t Uid; // eax
  PlayerBasicComp *BasicComp; // rax
  const std::string *v7; // rax
  google::protobuf::uint64 v8; // rax
  google::protobuf::uint32 v9; // eax
  LimitedShop *LimitedShop; // r14
  proto::HomeLimitedShopInfo *v11; // rax
  int32_t result; // eax
  uint32_t cur_room_scene_id; // [rsp+10h] [rbp-D0h]
  uint32_t cur_module_id; // [rsp+14h] [rbp-CCh]
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const proto::HomeSceneCompSnapshotBin *scene_comp_bin; // [rsp+28h] [rbp-B8h]
  const proto::HomeBasicCompSnapshotBin *basic_snapshot_bin; // [rsp+30h] [rbp-B0h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *__for_range; // [rsp+38h] [rbp-A8h]
  const proto::HomeModuleSnapshotBin *module_bin; // [rsp+40h] [rbp-A0h]
  proto::HomeBasicInfo *basic_info; // [rsp+48h] [rbp-98h]
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:926";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::sendHomeBasicInfoNotify;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  if ( !PlayerHomeComp::isInHomeWorld(HomeComp) )
  {
    scene_comp_bin = proto::HomeSnapshotBin::scene_snapshot(&this->home_snapshot_bin_);
    basic_snapshot_bin = proto::HomeSnapshotBin::basic_snapshot(&this->home_snapshot_bin_);
    cur_module_id = proto::HomeSceneCompSnapshotBin::cur_module_id(scene_comp_bin);
    cur_room_scene_id = 0;
    __for_range = proto::HomeSceneCompSnapshotBin::module_bin_list(scene_comp_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      module_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator*(&__for_begin);
      if ( cur_module_id == proto::HomeModuleSnapshotBin::module_id(module_bin) )
      {
        cur_room_scene_id = proto::HomeModuleSnapshotBin::cur_room_scene_id(module_bin);
        break;
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator++(&__for_begin);
    }
    proto::HomeBasicInfoNotify::HomeBasicInfoNotify((proto::HomeBasicInfoNotify *const)(v1 + 32));
    basic_info = proto::HomeBasicInfoNotify::mutable_basic_info((proto::HomeBasicInfoNotify *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    proto::HomeBasicInfo::set_home_owner_uid(basic_info, Uid);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    v7 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
    proto::HomeBasicInfo::set_owner_nick_name(basic_info, v7);
    proto::HomeBasicInfo::set_cur_module_id(basic_info, cur_module_id);
    proto::HomeBasicInfo::set_cur_room_scene_id(basic_info, cur_room_scene_id);
    proto::HomeBasicInfo::set_is_in_edit_mode(basic_info, 0);
    v8 = proto::HomeBasicCompSnapshotBin::exp(basic_snapshot_bin);
    proto::HomeBasicInfo::set_exp(basic_info, v8);
    v9 = proto::HomeBasicCompSnapshotBin::level(basic_snapshot_bin);
    proto::HomeBasicInfo::set_level(basic_info, v9);
    LimitedShop = PlayerHomeComp::getLimitedShop(this);
    v11 = proto::HomeBasicInfo::mutable_limited_shop_info(basic_info);
    LimitedShop::fillShopInfo(LimitedShop, cur_module_id, v11);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
    proto::HomeBasicInfoNotify::~HomeBasicInfoNotify((proto::HomeBasicInfoNotify *const)(v1 + 32));
  }
  result = 0;
  if ( v22 == (char *)v1 )
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

// Line 941: range 0000000017C77122-0000000017C774D0
int32_t __cdecl PlayerHomeComp::sendHomeComfortInfoNotify(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerHomeComp *HomeComp; // rax
  int32_t result; // eax
  google::protobuf::uint32 v6; // eax
  google::protobuf::uint32 v7; // eax
  uint32_t cur_module_id; // [rsp+10h] [rbp-F0h]
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-D8h]
  const proto::HomeSceneCompSnapshotBin *scene_comp_bin; // [rsp+30h] [rbp-D0h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *__for_range; // [rsp+38h] [rbp-C8h]
  const proto::HomeModuleSnapshotBin *module_bin; // [rsp+40h] [rbp-C0h]
  proto::HomeModuleComfortInfo *module_proto; // [rsp+48h] [rbp-B8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+50h] [rbp-B0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-A8h]
  char v18[160]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:954";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::sendHomeComfortInfoNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  if ( PlayerHomeComp::isInHomeWorld(HomeComp) )
  {
    result = 0;
  }
  else
  {
    scene_comp_bin = proto::HomeSnapshotBin::scene_snapshot(&this->home_snapshot_bin_);
    cur_module_id = proto::HomeSceneCompSnapshotBin::cur_module_id(scene_comp_bin);
    __for_range = proto::HomeSceneCompSnapshotBin::module_bin_list(scene_comp_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      module_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator*(&__for_begin);
      if ( cur_module_id == proto::HomeModuleSnapshotBin::module_id(module_bin) )
      {
        proto::HomeComfortInfoNotify::HomeComfortInfoNotify((proto::HomeComfortInfoNotify *const)(v1 + 48));
        module_proto = proto::HomeComfortInfoNotify::add_module_info_list((proto::HomeComfortInfoNotify *const)(v1 + 48));
        v6 = proto::HomeModuleSnapshotBin::module_id(module_bin);
        proto::HomeModuleComfortInfo::set_module_id(module_proto, v6);
        __for_range_0 = proto::HomeModuleSnapshotBin::world_scene_block_comfort_value_list(module_bin);
        __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
        __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
        while ( __for_begin_0 != __for_end_0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(__for_begin_0);
          }
          proto::HomeModuleComfortInfo::add_world_scene_block_comfort_value_list(module_proto, *__for_begin_0++);
        }
        v7 = proto::HomeModuleSnapshotBin::room_scene_comfort_value(module_bin);
        proto::HomeModuleComfortInfo::set_room_scene_comfort_value(module_proto, v7);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
        proto::HomeComfortInfoNotify::~HomeComfortInfoNotify((proto::HomeComfortInfoNotify *const)(v1 + 48));
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator++(&__for_begin);
    }
    result = 0;
  }
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 968: range 0000000017C774D2-0000000017C77BD6
int32_t __cdecl PlayerHomeComp::sendFurnitureCurModuleArrangeCountNotify(PlayerHomeComp *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Home *v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int v8; // r15d
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  google::protobuf::uint32 v10; // eax
  google::protobuf::uint32 v11; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-1D0h] BYREF
  uint32_t cur_module_id; // [rsp+14h] [rbp-1CCh]
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_begin_0; // [rsp+18h] [rbp-1C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_end_0; // [rsp+20h] [rbp-1C0h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-1B8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-1B0h] BYREF
  const proto::HomeSceneCompSnapshotBin *scene_comp_bin; // [rsp+38h] [rbp-1A8h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *__for_range_0; // [rsp+40h] [rbp-1A0h]
  const proto::HomeModuleSnapshotBin *module_bin; // [rsp+48h] [rbp-198h]
  const google::protobuf::RepeatedPtrField<proto::Uint32PairBin> *__for_range_1; // [rsp+50h] [rbp-190h]
  const proto::Uint32PairBin *count_pair_bin; // [rsp+58h] [rbp-188h]
  proto::Uint32Pair *count_pair_0; // [rsp+60h] [rbp-180h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+68h] [rbp-178h]
  const std::pair<unsigned int const,unsigned int> *v26; // [rsp+70h] [rbp-170h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+78h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *arrange_count; // [rsp+80h] [rbp-160h]
  proto::Uint32Pair *count_pair; // [rsp+88h] [rbp-158h]
  common::milog::MiLogStream v30; // [rsp+90h] [rbp-150h] BYREF
  char v31[304]; // [rsp+B0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 15 my_home_ptr:971 64 16 23 cur_module_data_ptr:974 96 48 10 notify:969 176 48 31 furnit"
                        "ure_arrange_count_map:981";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::sendFurnitureCurModuleArrangeCountNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  proto::FurnitureCurModuleArrangeCountNotify::FurnitureCurModuleArrangeCountNotify((proto::FurnitureCurModuleArrangeCountNotify *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v2 + 32));
  if ( !std::operator!=<Home>((const std::shared_ptr<Home> *)(v2 + 32), 0LL) )
  {
    scene_comp_bin = proto::HomeSnapshotBin::mutable_scene_snapshot(&this->home_snapshot_bin_);
    cur_module_id = proto::HomeSceneCompSnapshotBin::cur_module_id(scene_comp_bin);
    __for_range_0 = proto::HomeSceneCompSnapshotBin::module_bin_list(scene_comp_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      module_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator*(&__for_begin_0);
      if ( cur_module_id == proto::HomeModuleSnapshotBin::module_id(module_bin) )
      {
        __for_range_1 = proto::HomeModuleSnapshotBin::furniture_arrange_count_list(module_bin);
        __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::begin(__for_range_1).it_;
        __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::end(__for_range_1).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator!=(
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin,
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin>::iterator *)&__for_end) )
        {
          count_pair_bin = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin);
          count_pair_0 = proto::FurnitureCurModuleArrangeCountNotify::add_furniture_arrange_count_list((proto::FurnitureCurModuleArrangeCountNotify *const)(v2 + 96));
          v10 = proto::Uint32PairBin::key(count_pair_bin);
          proto::Uint32Pair::set_key(count_pair_0, v10);
          v11 = proto::Uint32PairBin::value(count_pair_bin);
          proto::Uint32Pair::set_value(count_pair_0, v11);
          google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin);
        }
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator++(&__for_begin_0);
    }
    goto LABEL_26;
  }
  v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Home::getSceneComp(v5);
  HomeSceneComp::getCurHomeModuleData((HomeSceneComp *const)(v2 + 64));
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/player_home_comp.cpp",
      "sendFurnitureCurModuleArrangeCountNotify",
      977);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v30,
           (const char (*)[39])"cur_module_data_ptr is null. home_uid:");
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    val = Home::getHomeUid(v7);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v1 = -1;
    v8 = 0;
  }
  else
  {
    v9 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    HomeModuleData::getFurnitureArrangeCountMap((std::map<unsigned int,unsigned int> *)(v2 + 176), v9);
    __for_range = (std::map<unsigned int,unsigned int> *)(v2 + 176);
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v2 + 176))._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v2 + 176))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      furniture_id = std::get<0ul,unsigned int const,unsigned int>(v26);
      arrange_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v26);
      count_pair = proto::FurnitureCurModuleArrangeCountNotify::add_furniture_arrange_count_list((proto::FurnitureCurModuleArrangeCountNotify *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(furniture_id);
      }
      proto::Uint32Pair::set_key(count_pair, *furniture_id);
      if ( *(_BYTE *)(((unsigned __int64)arrange_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)arrange_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)arrange_count >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(arrange_count);
      }
      proto::Uint32Pair::set_value(count_pair, *arrange_count);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 176));
    v8 = 1;
  }
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v2 + 64));
  if ( v8 == 1 )
  {
LABEL_26:
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
    v1 = 0;
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 32));
  proto::FurnitureCurModuleArrangeCountNotify::~FurnitureCurModuleArrangeCountNotify((proto::FurnitureCurModuleArrangeCountNotify *const)(v2 + 96));
  result = v1;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1014: range 0000000017C77BD8-0000000017C77F12
int32_t __cdecl PlayerHomeComp::sendAllUnlockedBgmIdListNotify(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool *p_is_default_unlock; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,data::HomeWorldBgmExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,data::HomeWorldBgmExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  const std::unordered_map<unsigned int,data::HomeWorldBgmExcelConfig> *__for_range; // [rsp+20h] [rbp-E0h]
  const std::pair<unsigned int const,data::HomeWorldBgmExcelConfig> *v10; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::HomeWorldBgmExcelConfig> >::type *bgm_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldBgmExcelConfig> >::type *bgm_config; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v13; // [rsp+40h] [rbp-C0h] BYREF
  char v14[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 11 notify:1015";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::sendAllUnlockedBgmIdListNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::HomeAllUnlockedBgmIdListNotify::HomeAllUnlockedBgmIdListNotify((proto::HomeAllUnlockedBgmIdListNotify *const)(v1 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.home_config_mgr.home_world_bgm_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::HomeWorldBgmExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::HomeWorldBgmExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldBgmExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldBgmExcelConfig>,false,false>::operator*(&__for_begin);
    bgm_id = std::get<0ul,unsigned int const,data::HomeWorldBgmExcelConfig>(v10);
    bgm_config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldBgmExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldBgmExcelConfig>(v10);
    p_is_default_unlock = &bgm_config->is_default_unlock;
    if ( *(_BYTE *)(((unsigned __int64)p_is_default_unlock >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_default_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_default_unlock >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_default_unlock);
    }
    if ( bgm_config->is_default_unlock
      || common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->unlocked_bgm_id_set_, bgm_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)bgm_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bgm_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bgm_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(bgm_id);
      }
      proto::HomeAllUnlockedBgmIdListNotify::add_all_unlocked_bgm_id_list(
        (proto::HomeAllUnlockedBgmIdListNotify *const)(v1 + 48),
        *bgm_id);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldBgmExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::HomeAllUnlockedBgmIdListNotify::~HomeAllUnlockedBgmIdListNotify((proto::HomeAllUnlockedBgmIdListNotify *const)(v1 + 48));
  result = 0;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1028: range 0000000017C77F14-0000000017C7821C
void __fastcall PlayerHomeComp::onApplyEnterHomeBegin(PlayerHomeComp *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 target_uid:1027";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::onApplyEnterHomeBegin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = target_uid;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/home/player_home_comp.cpp",
    "onApplyEnterHomeBegin",
    1029);
  v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v10,
         (const char (*)[36])"[HOME] onApplyEnterHomeBegin, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])" target_uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v10);
  PlayerHomeComp::setIsApplyingEnterHome(this, 1);
  if ( common::tools::MiTimer::isActive(&this->home_apply_timer_) )
    common::tools::MiTimer::cancel(&this->home_apply_timer_);
  if ( PlayerUnixTimer::startS(
         &this->home_apply_timer_,
         0xAu,
         0,
         "./src/player/home/player_home_comp.cpp",
         "onApplyEnterHomeBegin",
         1035) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "onApplyEnterHomeBegin",
      1037);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v10,
           (const char (*)[40])"home_apply_timer_->startS failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1042: range 0000000017C7821E-0000000017C7830B
void __cdecl PlayerHomeComp::onApplyEnterHomeEnd(PlayerHomeComp *const this, uint64_t now_ms)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/home/player_home_comp.cpp",
    "onApplyEnterHomeEnd",
    1043);
  v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v4,
         (const char (*)[34])"[HOME] onApplyEnterHomeEnd, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v4);
  PlayerHomeComp::setIsApplyingEnterHome(this, 0);
  common::tools::MiTimer::cancel(&this->home_apply_timer_);
};

// Line 1049: range 0000000017C7830C-0000000017C786A0
int32_t __cdecl PlayerHomeComp::applyEnterOtherHome(PlayerHomeComp *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerMpComp *MpComp; // rax
  GameserverApp *v6; // rax
  uint32_t AppId; // eax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  common::minet::Packet *v10; // rax
  common::minet::Packet *v11; // r14
  GameserverApp *v12; // rax
  uint32_t v13; // eax
  NetworkMgrBase *v14; // r14
  uint32_t v15; // r8d
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  proto::OnlinePlayerInfo *online_player_info; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 packet_ptr:1054 64 32 17 apply_notify:1050";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::applyEnterOtherHome;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  proto::PlayerApplyEnterHomeNotify::PlayerApplyEnterHomeNotify((proto::PlayerApplyEnterHomeNotify *const)(v2 + 64));
  online_player_info = proto::PlayerApplyEnterHomeNotify::mutable_src_player_info((proto::PlayerApplyEnterHomeNotify *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  PlayerMpComp::fillOnlinePlayerInfo(MpComp, online_player_info);
  v6 = Singleton<GameserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v6);
  proto::PlayerApplyEnterHomeNotify::set_src_app_id((proto::PlayerApplyEnterHomeNotify *const)(v2 + 64), AppId);
  common::minet::PacketUtils::createPacket<proto::PlayerApplyEnterHomeNotify>((const proto::PlayerApplyEnterHomeNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "applyEnterOtherHome",
      1057);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v20,
           (const char (*)[26])"createPacket failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setUserId(v10, target_uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v12 = Singleton<GameserverApp>::instance();
    v13 = AppBase::getAppId((AppBase *const)v12);
    common::minet::Packet::setSource(v11, 3u, v13);
    v14 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    NetworkMgrBase::sendPacketToTargetService(v14, (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr), 0, v15);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    PlayerHomeComp::onApplyEnterHomeBegin(this, target_uid);
    v9 = 0;
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  proto::PlayerApplyEnterHomeNotify::~PlayerApplyEnterHomeNotify((proto::PlayerApplyEnterHomeNotify *const)(v2 + 64));
  result = v9;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1070: range 0000000017C786A2-0000000017C788C0
__int64 __fastcall PlayerHomeComp::getApplyPlayerAppId(PlayerHomeComp *const this, uint32_t apply_player_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::pointer v8; // rdx
  std::pair<unsigned int,unsigned int> *v9; // rax
  uint32_t now; // [rsp+14h] [rbp-8Ch]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 21 apply_player_uid:1069 64 8 9 iter:1072";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::getApplyPlayerAppId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = apply_player_uid;
  now = common::tools::TimeUtils::getNow();
  *(std::map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::find(
                                                                                          &this->apply_uid_app_id_map_,
                                                                                          (const std::map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::end(&this->apply_uid_app_id_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > *const)(v2 + 64));
    p_second = &v6->second.second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    if ( now <= v6->second.second + 10 )
    {
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > *const)(v2 + 64));
      v9 = &v8->second;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      result = v8->second.first;
    }
    else
    {
      std::map<unsigned int,std::pair<unsigned int,unsigned int>>::erase[abi:cxx11](
        &this->apply_uid_app_id_map_,
        *(std::map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 64));
      result = 0LL;
    }
  }
  if ( v12 == (char *)v2 )
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
  return result;
};

// Line 1089: range 0000000017C788C2-0000000017C78A28
void __fastcall PlayerHomeComp::onBeApplied(PlayerHomeComp *const this, uint32_t uid, uint32_t app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::pair<unsigned int,long int> v6; // rax
  std::pair<unsigned int,unsigned int> *v7; // rax
  __int64 __y; // [rsp+18h] [rbp-98h] BYREF
  std::pair<unsigned int,long int> __p; // [rsp+20h] [rbp-90h] BYREF
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 uid:1088 64 4 11 app_id:1088";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::onBeApplied;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = uid;
  *(_DWORD *)(v3 + 64) = app_id;
  __y = common::tools::TimeUtils::getNow();
  v6 = std::make_pair<unsigned int &,long>((unsigned int *)(v3 + 64), &__y);
  __p.first = v6.first;
  __p.second = v6.second;
  v7 = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
         &this->apply_uid_app_id_map_,
         (const std::map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
  std::pair<unsigned int,unsigned int>::operator=<unsigned int,long>(v7, &__p);
  if ( v11 == (char *)v3 )
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

// Line 1095: range 0000000017C78A2A-0000000017C78AFC
void __fastcall PlayerHomeComp::removeApplyPlayer(PlayerHomeComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 uid:1094";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::removeApplyPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::erase(
    &this->apply_uid_app_id_map_,
    (const std::map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1100: range 0000000017C78AFE-0000000017C78B5E
void __cdecl PlayerHomeComp::checkTryEnterInfo(PlayerHomeComp *const this, time_t now)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( now - this->try_enter_home_time_ > 10 )
    PlayerHomeComp::resetTryEnterInfo(this);
};

// Line 1109: range 0000000017C78B60-0000000017C78C88
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerHomeComp::setTryEnterInfo(
        PlayerHomeComp *const this,
        uint32_t uid,
        time_t time,
        uint32_t point,
        bool is_transfer_to_safe_point)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_enter_home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->try_enter_home_uid_, *(_QWORD *)&uid, &this->try_enter_home_uid_);
  }
  this->try_enter_home_uid_ = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->try_enter_home_time_, *(_QWORD *)&uid);
  this->try_enter_home_time_ = time;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->try_enter_home_point_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_enter_home_point_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->try_enter_home_point_, (((_BYTE)this - 20) & 7u) + 3, v5);
  this->try_enter_home_point_ = point;
  v6 = ((_BYTE)this - 15) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->try_enter_home_is_transfer_to_safe_point_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->try_enter_home_is_transfer_to_safe_point_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->try_enter_home_is_transfer_to_safe_point_, v6, v7);
  this->try_enter_home_is_transfer_to_safe_point_ = is_transfer_to_safe_point;
};

// Line 1117: range 0000000017C78C8A-0000000017C78DA1
void __cdecl PlayerHomeComp::resetTryEnterInfo(PlayerHomeComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_enter_home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->try_enter_home_uid_, v1, &this->try_enter_home_uid_);
  }
  this->try_enter_home_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->try_enter_home_time_, v1);
  this->try_enter_home_time_ = 0LL;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->try_enter_home_point_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_enter_home_point_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->try_enter_home_point_, (((_BYTE)this - 20) & 7u) + 3, v2);
  this->try_enter_home_point_ = 0;
  v3 = ((_BYTE)this - 15) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->try_enter_home_is_transfer_to_safe_point_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->try_enter_home_is_transfer_to_safe_point_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->try_enter_home_is_transfer_to_safe_point_, v3, v4);
  this->try_enter_home_is_transfer_to_safe_point_ = 0;
};

// Line 1125: range 0000000017C78DA2-0000000017C798C8
void __cdecl PlayerHomeComp::onEnterSelfHomeScene(PlayerHomeComp *const this, Home *home, Scene *scene)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  char *v6; // rsi
  uint32_t v7; // ecx
  char v8; // al
  char *v9; // rsi
  uint32_t v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  HomeModuleData *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  __int64 v19; // rsi
  uint32_t v20; // ecx
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  const HomeFurnitureData *v25; // rax
  const HomeFurnitureData *v26; // rax
  unsigned int val; // [rsp+2Ch] [rbp-134h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  PlayerHomeModule *player_module; // [rsp+40h] [rbp-120h]
  PlayerHomeScene *player_scene; // [rsp+48h] [rbp-118h]
  HomeSceneData *home_scene_ptr; // [rsp+50h] [rbp-110h]
  HomeSceneArrangementData *home_scene_arrangement_data; // [rsp+58h] [rbp-108h]
  std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+60h] [rbp-100h]
  std::vector<HomeFurnitureData> *__for_range_0; // [rsp+68h] [rbp-F8h]
  std::vector<HomeFurnitureData> *__for_range_1; // [rsp+70h] [rbp-F0h]
  const HomeFurnitureData *furniture_0; // [rsp+78h] [rbp-E8h]
  const HomeFurnitureData *furniture; // [rsp+80h] [rbp-E0h]
  const std::pair<unsigned int const,HomeBlockData> *v41; // [rsp+88h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+90h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+98h] [rbp-C8h]
  PlayerHomeBlock *player_block; // [rsp+A0h] [rbp-C0h]
  HomeBlockData *home_block; // [rsp+A8h] [rbp-B8h]
  common::milog::MiLogStream v46; // [rsp+B0h] [rbp-B0h] BYREF
  char v47[144]; // [rsp+D0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 18 cur_module_id:1126 48 4 13 scene_id:1127 64 16 20 home_module_ptr:1141";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::onEnterSelfHomeScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = Home::getCurModuleId(home);
  *(_DWORD *)(v3 + 48) = Scene::getSceneId(scene);
  v6 = (char *)(v3 + 32);
  player_module = std::map<unsigned int,PlayerHomeModule>::operator[](
                    &this->home_module_map_,
                    (const std::map<unsigned int,PlayerHomeModule>::key_type *)(v3 + 32));
  v7 = *(_DWORD *)(v3 + 32);
  v8 = *(_BYTE *)(((unsigned __int64)player_module >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(player_module, v6, player_module);
  }
  player_module->module_id = v7;
  v9 = (char *)(v3 + 48);
  player_scene = std::map<unsigned int,PlayerHomeScene>::operator[](
                   &player_module->scene_map,
                   (const std::map<unsigned int,PlayerHomeScene>::key_type *)(v3 + 48));
  v10 = *(_DWORD *)(v3 + 48);
  v11 = *(_BYTE *)(((unsigned __int64)player_scene >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(player_scene, v9, player_scene);
  }
  player_scene->scene_id = v10;
  if ( *(char *)(((unsigned __int64)&player_scene->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&player_scene->is_unlocked);
  if ( !player_scene->is_unlocked )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/player_home_comp.cpp",
      "onEnterSelfHomeScene",
      1139);
    v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v46,
            (const char (*)[58])"[HOME] player first enter self home scene. cur_module_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v46);
    Home::getSceneComp(home);
    HomeSceneComp::getCurHomeModuleData((HomeSceneComp *const)(v3 + 64));
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/player_home_comp.cpp",
        "onEnterSelfHomeScene",
        1144);
      v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v46,
              (const char (*)[48])"[HOME] getCurHomeModuleData() return null. uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v16 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      home_scene_ptr = HomeModuleData::findHomeSceneData(v16, *(_DWORD *)(v3 + 48));
      if ( home_scene_ptr )
      {
        home_scene_arrangement_data = &home_scene_ptr->arrangement_data;
        __for_range = &home_scene_ptr->arrangement_data.block_data_map;
        __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&home_scene_ptr->arrangement_data.block_data_map)._M_node;
        __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&home_scene_ptr->arrangement_data.block_data_map)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v41 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
          block_id = std::get<0ul,unsigned int const,HomeBlockData>(v41);
          block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v41);
          player_block = std::map<unsigned int,PlayerHomeBlock>::operator[](&player_scene->block_map, block_id);
          v19 = ((unsigned __int8)block_id & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(block_id);
          }
          v20 = *block_id;
          v21 = *(_BYTE *)(((unsigned __int64)player_block >> 3) + 0x7FFF8000);
          LOBYTE(v19) = v21 != 0;
          v22 = (v21 != 0) & (unsigned __int8)((char)(((unsigned __int8)player_block & 7) + 3) >= v21);
          if ( (_BYTE)v22 )
            __asan_report_store4(player_block, v19, v22);
          player_block->block_id = v20;
          if ( *(_BYTE *)(((unsigned __int64)&player_block->is_unlocked >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)player_block + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&player_block->is_unlocked >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load1(&player_block->is_unlocked);
          }
          if ( player_block->is_unlocked )
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/home/player_home_comp.cpp",
              "onEnterSelfHomeScene",
              1161);
            common::milog::MiLogStream::operator()(
              &v46,
              "[HOME] player_block is unlocked, this should not happen.. module_id:%u scene_id:%u block_id:%u",
              *(unsigned int *)(v3 + 32),
              *(unsigned int *)(v3 + 48),
              *block_id);
            common::milog::MiLogStream::~MiLogStream(&v46);
          }
          else
          {
            home_block = std::map<unsigned int,HomeBlockData>::operator[](
                           &home_scene_arrangement_data->block_data_map,
                           block_id);
            if ( *(char *)(((unsigned __int64)&home_block->is_unlocked >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&home_block->is_unlocked);
            if ( home_block->is_unlocked )
            {
              v23 = ((_BYTE)player_block + 4) & 7;
              v24 = (*(_BYTE *)(((unsigned __int64)&player_block->is_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&player_block->is_unlocked >> 3) + 0x7FFF8000));
              if ( (_BYTE)v24 )
                __asan_report_store1(&player_block->is_unlocked, v23, v24);
              player_block->is_unlocked = 1;
              PlayerHomeComp::addHomeBlockDefaultFurniture(this, home_block);
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/home/player_home_comp.cpp",
                "onEnterSelfHomeScene",
                1173);
              if ( *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(block_id);
              }
              common::milog::MiLogStream::operator()(
                &v46,
                "addHomeBlockDefaultFurniture. module_id:%u scene_id:%u block_id:%u",
                *(unsigned int *)(v3 + 32),
                *(unsigned int *)(v3 + 48),
                *block_id);
              common::milog::MiLogStream::~MiLogStream(&v46);
            }
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
        }
        if ( *(char *)(((unsigned __int64)&player_scene->is_unlocked >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&player_scene->is_unlocked, &__for_end, &player_scene->is_unlocked);
        player_scene->is_unlocked = 1;
        __for_range_0 = &home_scene_arrangement_data->door_vec;
        __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::_Base_ptr)std::vector<HomeFurnitureData>::begin(&home_scene_arrangement_data->door_vec)._M_current;
        __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::_Base_ptr)std::vector<HomeFurnitureData>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(
                  (const __gnu_cxx::__normal_iterator<HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_end) )
        {
          v25 = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*((const __gnu_cxx::__normal_iterator<HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
          furniture = v25;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          PlayerHomeComp::addDefaultFurniture(this, furniture->furniture_id);
          __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++((__gnu_cxx::__normal_iterator<HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
        }
        __for_range_1 = &home_scene_arrangement_data->stair_vec;
        __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::_Base_ptr)std::vector<HomeFurnitureData>::begin(&home_scene_arrangement_data->stair_vec)._M_current;
        __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::_Base_ptr)std::vector<HomeFurnitureData>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(
                  (const __gnu_cxx::__normal_iterator<HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_end) )
        {
          v26 = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*((const __gnu_cxx::__normal_iterator<HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
          furniture_0 = v26;
          if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v26);
          }
          PlayerHomeComp::addDefaultFurniture(this, furniture_0->furniture_id);
          __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++((__gnu_cxx::__normal_iterator<HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Home::changeEditMode(home, 0, this->player_);
        goto LABEL_53;
      }
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/player_home_comp.cpp",
        "onEnterSelfHomeScene",
        1150);
      v17 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v46,
              (const char (*)[41])"[HOME] home_scene_ptr is null. scene_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v46);
LABEL_53:
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 64));
  }
  if ( v47 == (char *)v3 )
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

// Line 1190: range 0000000017C798CA-0000000017C7991E
void __cdecl PlayerHomeComp::onLeaveSelfHomeScene(PlayerHomeComp *const this, Home *home, Scene *scene)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::changeEditMode(home, 0, this->player_);
};

// Line 1195: range 0000000017C79920-0000000017C79A53
bool __cdecl PlayerHomeComp::isInEditMode(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool v4; // r14
  Home *v5; // rax
  HomeBasicComp *BasicComp; // rax
  bool result; // al
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 home_ptr:1198";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::isInEditMode;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v1 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    v4 = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BasicComp = Home::getBasicComp(v5);
    v4 = HomeBasicComp::getIsInEditMode(BasicComp);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  result = v4;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1209: range 0000000017C79A54-0000000017C79BEF
void __cdecl PlayerHomeComp::addDefaultFurniture(PlayerHomeComp *const this, uint32_t furniture_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerItemComp *ItemComp; // rax
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 item_param:1210 64 24 18 action_reason:1213";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::addDefaultFurniture;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 32) = furniture_id;
  *(_DWORD *)(v2 + 36) = 1;
  ActionReason::ActionReason((ActionReason *const)(v2 + 64), ACTION_REASON_HOME_DEFAULT_FURNITURE, ITEM_LIMIT_UNLIMITED);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  PlayerItemComp::addItem(ItemComp, (const ItemParam *)(v2 + 32), (const ActionReason *)(v2 + 64), 0LL);
  if ( v6 == (char *)v2 )
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
};

// Line 1218: range 0000000017C79BF0-0000000017C79DFE
void __cdecl PlayerHomeComp::addHomeBlockDefaultFurniture(
        PlayerHomeComp *const this,
        const HomeBlockData *home_block_data)
{
  const HomeFurnitureData *v2; // rax
  const HomeFurnitureData *v3; // rax
  std::vector<HomeFurnitureData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::vector<HomeFurnitureData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::vector<HomeFurnitureData> *__for_range; // [rsp+20h] [rbp-30h]
  const std::vector<HomeFurnitureData> *__for_range_0; // [rsp+28h] [rbp-28h]
  const std::vector<HomeFurnitureSuiteData> *__for_range_1; // [rsp+30h] [rbp-20h]
  const HomeFurnitureSuiteData *furniture_suite; // [rsp+38h] [rbp-18h]
  const HomeFurnitureData *furniture_0; // [rsp+40h] [rbp-10h]
  const HomeFurnitureData *furniture; // [rsp+48h] [rbp-8h]

  __for_range = &home_block_data->persistent_furniture_vec;
  __for_begin._M_current = std::vector<HomeFurnitureData>::begin(&home_block_data->persistent_furniture_vec)._M_current;
  __for_end._M_current = std::vector<HomeFurnitureData>::end(&home_block_data->persistent_furniture_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(&__for_begin, &__for_end) )
  {
    v2 = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*(&__for_begin);
    furniture = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    PlayerHomeComp::addDefaultFurniture(this, furniture->furniture_id);
    __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++(&__for_begin);
  }
  __for_range_0 = &home_block_data->deploy_furniure_vec;
  __for_begin._M_current = std::vector<HomeFurnitureData>::begin(&home_block_data->deploy_furniure_vec)._M_current;
  __for_end._M_current = std::vector<HomeFurnitureData>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(&__for_begin, &__for_end) )
  {
    v3 = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*(&__for_begin);
    furniture_0 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    PlayerHomeComp::addDefaultFurniture(this, furniture_0->furniture_id);
    __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++(&__for_begin);
  }
  __for_range_1 = &home_block_data->furniure_suite_vec;
  __for_begin._M_current = (const HomeFurnitureData *)std::vector<HomeFurnitureSuiteData>::begin(&home_block_data->furniure_suite_vec)._M_current;
  __for_end._M_current = (const HomeFurnitureData *)std::vector<HomeFurnitureSuiteData>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>(
            (const __gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *)&__for_end) )
  {
    furniture_suite = __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)furniture_suite >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)furniture_suite >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(furniture_suite);
    }
    PlayerHomeComp::unlockFurnitureSuite(this, furniture_suite->suite_id);
    __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator++((__gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *const)&__for_begin);
  }
};

// Line 1234: range 0000000017C79E00-0000000017C7A576
__int64 __fastcall PlayerHomeComp::getHomeLevelUpReward(PlayerHomeComp *const this, __int32 level)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerItemComp *p_reward_id; // rdi
  __int64 result; // rax
  std::string v18; // [rsp+0h] [rbp-120h]
  PlayerHomeComp *thisa; // [rsp+8h] [rbp-118h]
  int32_t ret; // [rsp+14h] [rbp-10Ch]
  const data::HomeworldLevelExcelConfig *home_level_config; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Config> v22; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+50h] [rbp-D0h] BYREF

  v18._M_string_length = (std::string::size_type)this;
  HIDWORD(v18._M_dataplus._M_p) = level;
  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 11 holder:1255 64 4 15 home_level:1241 80 4 10 level:1233 96 24 11 reason:1257";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::getHomeLevelUpReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 80) = level;
  if ( std::set<unsigned int>::count(
         &this->levelup_reward_got_level_set_,
         (const std::set<unsigned int>::key_type *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/player_home_comp.cpp",
      "getHomeLevelUpReward",
      1237);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v23,
           (const char (*)[35])"levelup reward already got. level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v23);
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(v2 + 64) = PlayerHomeComp::getHomeLevel(this);
    if ( *(_DWORD *)(v2 + 80) <= *(_DWORD *)(v2 + 64) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      *(&v18._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::HomeWorldExcelConfigMgrBase::findHomeworldLevelExcelConfig(
                                                                            &v10->design_config.txt_config_mgr.home_config_mgr,
                                                                            *(_DWORD *)(v2 + 80));
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( *(&v18._anon_0._M_allocated_capacity + 1) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v23, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xCE4u, v18);
        std::string::~string(&v23);
        ActionReason::ActionReason(
          (ActionReason *const)(v2 + 96),
          ACTION_REASON_GET_HOME_LEVELUP_REWARD,
          ITEM_LIMIT_HOME_LEVELUP_REWARD);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(thisa->player_);
        if ( *(_BYTE *)(((unsigned __int64)&home_level_config->reward_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)home_level_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_level_config->reward_id >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&home_level_config->reward_id);
        }
        ret = PlayerItemComp::checkGrantReward(ItemComp, home_level_config->reward_id, (const ActionReason *)(v2 + 96));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/home/player_home_comp.cpp",
            "getHomeLevelUpReward",
            1261);
          v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v23,
                  (const char (*)[39])"[HOME] checkGrantReward failed, level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v23);
          v6 = ret;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/home/player_home_comp.cpp",
            "getHomeLevelUpReward",
            1265);
          v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v23, (const char (*)[32])off_2637F4E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v23);
          std::set<unsigned int>::insert(
            &thisa->levelup_reward_got_level_set_,
            (const std::set<unsigned int>::value_type *)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          p_reward_id = Player::getItemComp(thisa->player_);
          if ( *(_BYTE *)(((unsigned __int64)&home_level_config->reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)home_level_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_level_config->reward_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            p_reward_id = (PlayerItemComp *)&home_level_config->reward_id;
            __asan_report_load4(&home_level_config->reward_id);
          }
          PlayerItemComp::grantReward(p_reward_id, home_level_config->reward_id, (const ActionReason *)(v2 + 96), 0LL);
          PlayerHomeComp::sendHomeCompInfoNotify(thisa);
          if ( *(_BYTE *)(((unsigned __int64)&home_level_config->reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)home_level_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_level_config->reward_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&home_level_config->reward_id);
          }
          PlayerHomeComp::logTakeHomeLevelReward(thisa, *(_DWORD *)(v2 + 80), home_level_config->reward_id);
          v6 = 0;
        }
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/home/player_home_comp.cpp",
          "getHomeLevelUpReward",
          1251);
        v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v23,
                (const char (*)[34])"home_level_config is null. level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v23);
        v6 = 5;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "getHomeLevelUpReward",
        1244);
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v23, (const char (*)[12])"home_level:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
      v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             v8,
             (const char (*)[25])" less than target_level:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v23);
      v6 = -1;
    }
  }
  result = v6;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1277: range 0000000017C7A578-0000000017C7A760
void __cdecl PlayerHomeComp::logTakeHomeLevelReward(PlayerHomeComp *const this, uint32_t level, uint32_t reward_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeHomeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeHomeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *player; // r14
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+10h] [rbp-90h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-80h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 log_ptr:1278";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::logTakeHomeLevelReward;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyTakeHomeLevelReward>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeHomeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeHomeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::PlayerLogBodyTakeHomeLevelReward::set_home_level(v6, level);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeHomeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeHomeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::PlayerLogBodyTakeHomeLevelReward::set_reward_id(v7, reward_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTakeHomeLevelReward,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyTakeHomeLevelReward> *)(v3 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyTakeHomeLevelReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTakeHomeLevelReward> *const)(v3 + 32));
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1286: range 0000000017C7A762-0000000017C7A865
bool __fastcall PlayerHomeComp::isFurnitureFormulaUnlocked(const PlayerHomeComp *const this, uint32_t furniture_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 furniture_id:1285";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::isFurnitureFormulaUnlocked;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = furniture_id;
  __y._M_node = std::set<unsigned int>::end(&this->unlocked_formula_furniture_id_set_)._M_node;
  __x._M_node = std::set<unsigned int>::find(
                  &this->unlocked_formula_furniture_id_set_,
                  (const std::set<unsigned int>::key_type *)(v2 + 32))._M_node;
  result = std::operator!=(&__x, &__y);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1291: range 0000000017C7A866-0000000017C7AA92
__int64 __fastcall PlayerHomeComp::unlockFurnitureFormula(PlayerHomeComp *const this, uint32_t furniture_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 result; // rax
  PlayerWatcherComp *WatcherComp; // rax
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-95h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+2Ch] [rbp-94h] BYREF
  char v9[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 furniture_id:1290";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::unlockFurnitureFormula;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = furniture_id;
  if ( PlayerHomeComp::isFurnitureFormulaUnlocked(this, *(_DWORD *)(v2 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    std::set<unsigned int>::insert(
      &this->unlocked_formula_furniture_id_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 32));
    LODWORD(__l._M_array) = *(_DWORD *)(v2 + 32);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)((char *)&__l._M_array + 4),
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
      &__a);
    PlayerHomeComp::sendUnlockedFurnitureFormulaNotify(
      this,
      0,
      (const std::vector<unsigned int> *)((char *)&__l._M_array + 4));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)((char *)&__l._M_array + 4));
    std::allocator<unsigned int>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(this->player_);
    PlayerWatcherComp::triggerUnlockFurniture(WatcherComp, *(_DWORD *)(v2 + 32));
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1303: range 0000000017C7AA94-0000000017C7AAB3
uint32_t __cdecl PlayerHomeComp::getUnlockFurnitureFormulaCount(const PlayerHomeComp *const this)
{
  return std::set<unsigned int>::size(&this->unlocked_formula_furniture_id_set_);
};

// Line 1308: range 0000000017C7AAB4-0000000017C7ABB7
bool __fastcall PlayerHomeComp::isFurnitureSuiteUnlocked(const PlayerHomeComp *const this, uint32_t furniture_suite_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 23 furniture_suite_id:1307";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::isFurnitureSuiteUnlocked;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = furniture_suite_id;
  __y._M_node = std::set<unsigned int>::end(&this->unlocked_furniture_suite_id_set_)._M_node;
  __x._M_node = std::set<unsigned int>::find(
                  &this->unlocked_furniture_suite_id_set_,
                  (const std::set<unsigned int>::key_type *)(v2 + 32))._M_node;
  result = std::operator!=(&__x, &__y);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1313: range 0000000017C7ABB8-0000000017C7AD97
__int64 __fastcall PlayerHomeComp::unlockFurnitureSuite(PlayerHomeComp *const this, uint32_t furniture_suite_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-95h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+2Ch] [rbp-94h] BYREF
  char v8[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 23 furniture_suite_id:1312";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::unlockFurnitureSuite;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = furniture_suite_id;
  if ( !PlayerHomeComp::isFurnitureSuiteUnlocked(this, *(_DWORD *)(v2 + 32)) )
  {
    std::set<unsigned int>::insert(
      &this->unlocked_furniture_suite_id_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 32));
    LODWORD(__l._M_array) = *(_DWORD *)(v2 + 32);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)((char *)&__l._M_array + 4),
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
      &__a);
    PlayerHomeComp::sendUnlockedFurnitureSuiteNotify(
      this,
      0,
      (const std::vector<unsigned int> *)((char *)&__l._M_array + 4));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)((char *)&__l._M_array + 4));
    std::allocator<unsigned int>::~allocator(&__a);
  }
  result = 0LL;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1324: range 0000000017C7AD98-0000000017C7AEB0
int32_t __cdecl PlayerHomeComp::unlockAllFurnitureSuiteByGm(PlayerHomeComp *const this)
{
  std::unordered_map<unsigned int,data::FurnitureSuiteExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,data::FurnitureSuiteExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::unordered_map<unsigned int,data::FurnitureSuiteExcelConfig> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,data::FurnitureSuiteExcelConfig> *v5; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::FurnitureSuiteExcelConfig> >::type *suite_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FurnitureSuiteExcelConfig> >::type *_; // [rsp+38h] [rbp-18h]
  std::shared_ptr<Config> v8; // [rsp+40h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.home_config_mgr.furniture_suite_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v8);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::FurnitureSuiteExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::FurnitureSuiteExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FurnitureSuiteExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FurnitureSuiteExcelConfig>,false,false>::operator*(&__for_begin);
    suite_id = std::get<0ul,unsigned int const,data::FurnitureSuiteExcelConfig>(v5);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::FurnitureSuiteExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FurnitureSuiteExcelConfig>(v5);
    if ( *(_BYTE *)(((unsigned __int64)suite_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)suite_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)suite_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(suite_id);
    }
    PlayerHomeComp::unlockFurnitureSuite(this, *suite_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FurnitureSuiteExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1333: range 0000000017C7AEB2-0000000017C7B1FE
int32_t __cdecl PlayerHomeComp::sendUnlockedFurnitureFormulaNotify(
        PlayerHomeComp *const this,
        bool is_all,
        const std::vector<unsigned int> *furniture_id_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  unsigned int *v8; // rax
  google::protobuf::uint32 *v9; // rdx
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-C0h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-B8h]
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 11 notify:1334";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::sendUnlockedFurnitureFormulaNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  proto::UnlockedFurnitureFormulaDataNotify::UnlockedFurnitureFormulaDataNotify((proto::UnlockedFurnitureFormulaDataNotify *const)(v3 + 48));
  proto::UnlockedFurnitureFormulaDataNotify::set_is_all(
    (proto::UnlockedFurnitureFormulaDataNotify *const)(v3 + 48),
    is_all);
  if ( is_all )
  {
    __for_range = &this->unlocked_formula_furniture_id_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->unlocked_formula_furniture_id_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&this->unlocked_formula_furniture_id_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      proto::UnlockedFurnitureFormulaDataNotify::add_furniture_id_list(
        (proto::UnlockedFurnitureFormulaDataNotify *const)(v3 + 48),
        *v7);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  else
  {
    __for_range_0 = furniture_id_vec;
    __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin(furniture_id_vec)._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(furniture_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      proto::UnlockedFurnitureFormulaDataNotify::add_furniture_id_list(
        (proto::UnlockedFurnitureFormulaDataNotify *const)(v3 + 48),
        *v9);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 48));
  proto::UnlockedFurnitureFormulaDataNotify::~UnlockedFurnitureFormulaDataNotify((proto::UnlockedFurnitureFormulaDataNotify *const)(v3 + 48));
  result = 0;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1355: range 0000000017C7B200-0000000017C7B54C
int32_t __cdecl PlayerHomeComp::sendUnlockedFurnitureSuiteNotify(
        PlayerHomeComp *const this,
        bool is_all,
        const std::vector<unsigned int> *furniture_suite_id_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  unsigned int *v8; // rax
  google::protobuf::uint32 *v9; // rdx
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-C0h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-B8h]
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 11 notify:1356";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::sendUnlockedFurnitureSuiteNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  proto::UnlockedFurnitureSuiteDataNotify::UnlockedFurnitureSuiteDataNotify((proto::UnlockedFurnitureSuiteDataNotify *const)(v3 + 48));
  proto::UnlockedFurnitureSuiteDataNotify::set_is_all((proto::UnlockedFurnitureSuiteDataNotify *const)(v3 + 48), is_all);
  if ( is_all )
  {
    __for_range = &this->unlocked_furniture_suite_id_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->unlocked_furniture_suite_id_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&this->unlocked_furniture_suite_id_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      proto::UnlockedFurnitureSuiteDataNotify::add_furniture_suite_id_list(
        (proto::UnlockedFurnitureSuiteDataNotify *const)(v3 + 48),
        *v7);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  else
  {
    __for_range_0 = furniture_suite_id_vec;
    __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin(furniture_suite_id_vec)._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(furniture_suite_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      proto::UnlockedFurnitureSuiteDataNotify::add_furniture_suite_id_list(
        (proto::UnlockedFurnitureSuiteDataNotify *const)(v3 + 48),
        *v9);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 48));
  proto::UnlockedFurnitureSuiteDataNotify::~UnlockedFurnitureSuiteDataNotify((proto::UnlockedFurnitureSuiteDataNotify *const)(v3 + 48));
  result = 0;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1377: range 0000000017C7B54E-0000000017C7BB24
void __cdecl PlayerHomeComp::sendHomePlantInfoNotify(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  PlayerHomeComp *HomeComp; // rax
  PlayerHomeComp *v5; // rax
  const proto::HomeSceneCompSnapshotBin *v6; // rax
  const proto::HomeSceneCompSnapshotBin *v7; // rax
  google::protobuf::uint32 v8; // eax
  google::protobuf::uint32 v9; // eax
  const proto::VectorBin *v10; // rax
  proto::Vector *v11; // rax
  google::protobuf::uint32 v12; // eax
  google::protobuf::uint32 v13; // eax
  google::protobuf::uint32 v14; // eax
  uint32_t cur_module_id; // [rsp+10h] [rbp-160h]
  uint32_t scene_id; // [rsp+14h] [rbp-15Ch]
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_begin; // [rsp+18h] [rbp-158h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_end; // [rsp+20h] [rbp-150h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::const_iterator __for_begin_0; // [rsp+28h] [rbp-148h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::const_iterator __for_end_0; // [rsp+30h] [rbp-140h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin>::const_iterator __for_begin_1; // [rsp+38h] [rbp-138h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin>::const_iterator __for_end_1; // [rsp+40h] [rbp-130h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSubFieldSnapShotBin>::const_iterator __for_begin_2; // [rsp+48h] [rbp-128h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSubFieldSnapShotBin>::const_iterator __for_end_2; // [rsp+50h] [rbp-120h] BYREF
  proto::HomeSnapshotBin *snapshot_bin; // [rsp+58h] [rbp-118h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *__for_range; // [rsp+60h] [rbp-110h]
  const proto::HomeModuleSnapshotBin *module_bin; // [rsp+68h] [rbp-108h]
  const google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin> *__for_range_0; // [rsp+70h] [rbp-100h]
  const proto::HomeSceneSnapshotBin *scene_bin; // [rsp+78h] [rbp-F8h]
  const google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin> *__for_range_1; // [rsp+80h] [rbp-F0h]
  const proto::HomeFieldSnapShotBin *field_bin; // [rsp+88h] [rbp-E8h]
  proto::HomePlantFieldData *field_proto; // [rsp+90h] [rbp-E0h]
  const google::protobuf::RepeatedPtrField<proto::HomeSubFieldSnapShotBin> *__for_range_2; // [rsp+98h] [rbp-D8h]
  const proto::HomeSubFieldSnapShotBin *sub_field_bin; // [rsp+A0h] [rbp-D0h]
  proto::HomePlantSubFieldData *sub_field_proto; // [rsp+A8h] [rbp-C8h]
  char v36[192]; // [rsp+B0h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 12 14 spawn_pos:1399 80 48 11 notify:1383";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::sendHomePlantInfoNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862721] = 0x4000000;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  if ( !PlayerHomeComp::isInHomeWorld(HomeComp) )
  {
    proto::HomePlantInfoNotify::HomePlantInfoNotify((proto::HomePlantInfoNotify *const)(v1 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getHomeComp(this->player_);
    snapshot_bin = PlayerHomeComp::getHomeSnapshot(v5);
    v6 = proto::HomeSnapshotBin::scene_snapshot(snapshot_bin);
    cur_module_id = proto::HomeSceneCompSnapshotBin::cur_module_id(v6);
    v7 = proto::HomeSnapshotBin::scene_snapshot(snapshot_bin);
    __for_range = proto::HomeSceneCompSnapshotBin::module_bin_list(v7);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      module_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator*(&__for_begin);
      if ( cur_module_id == proto::HomeModuleSnapshotBin::module_id(module_bin) )
      {
        __for_range_0 = proto::HomeModuleSnapshotBin::scene_bin_list(module_bin);
        __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::begin(__for_range_0).it_;
        __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::end(__for_range_0).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator!=(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          scene_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator*(&__for_begin_0);
          scene_id = proto::HomeSceneSnapshotBin::scene_id(scene_bin);
          __for_range_1 = proto::HomeSceneSnapshotBin::field_bin_list(scene_bin);
          __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin>::begin(__for_range_1).it_;
          __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin>::end(__for_range_1).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFieldSnapShotBin const>::operator!=(
                    &__for_begin_1,
                    &__for_end_1) )
          {
            field_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFieldSnapShotBin const>::operator*(&__for_begin_1);
            field_proto = proto::HomePlantInfoNotify::add_field_list((proto::HomePlantInfoNotify *const)(v1 + 80));
            proto::HomePlantFieldData::set_scene_id(field_proto, scene_id);
            v8 = proto::HomeFieldSnapShotBin::field_guid(field_bin);
            proto::HomePlantFieldData::set_field_guid(field_proto, v8);
            v9 = proto::HomeFieldSnapShotBin::furniture_id(field_bin);
            proto::HomePlantFieldData::set_furniture_id(field_proto, v9);
            v10 = proto::HomeFieldSnapShotBin::spawn_pos(field_bin);
            Vector3::Vector3((Vector3 *const)(v1 + 48), v10);
            v11 = proto::HomePlantFieldData::mutable_spawn_pos(field_proto);
            Vector3::toClient((const Vector3 *const)(v1 + 48), v11);
            __for_range_2 = proto::HomeFieldSnapShotBin::sub_field_list(field_bin);
            __for_begin_2.it_ = google::protobuf::RepeatedPtrField<proto::HomeSubFieldSnapShotBin>::begin(__for_range_2).it_;
            __for_end_2.it_ = google::protobuf::RepeatedPtrField<proto::HomeSubFieldSnapShotBin>::end(__for_range_2).it_;
            while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSubFieldSnapShotBin const>::operator!=(
                      &__for_begin_2,
                      &__for_end_2) )
            {
              sub_field_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSubFieldSnapShotBin const>::operator*(&__for_begin_2);
              sub_field_proto = proto::HomePlantFieldData::add_sub_field_list(field_proto);
              v12 = proto::HomeSubFieldSnapShotBin::seed_id(sub_field_bin);
              proto::HomePlantSubFieldData::set_seed_id(sub_field_proto, v12);
              v13 = proto::HomeSubFieldSnapShotBin::end_time(sub_field_bin);
              proto::HomePlantSubFieldData::set_end_time(sub_field_proto, v13);
              v14 = proto::HomeSubFieldSnapShotBin::home_gather_id(sub_field_bin);
              proto::HomePlantSubFieldData::set_home_gather_id(sub_field_proto, v14);
              google::protobuf::internal::RepeatedPtrIterator<proto::HomeSubFieldSnapShotBin const>::operator++(&__for_begin_2);
            }
            google::protobuf::internal::RepeatedPtrIterator<proto::HomeFieldSnapShotBin const>::operator++(&__for_begin_1);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator++(&__for_begin_0);
        }
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 80));
    proto::HomePlantInfoNotify::~HomePlantInfoNotify((proto::HomePlantInfoNotify *const)(v1 + 80));
  }
  if ( v36 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1416: range 0000000017C7BB26-0000000017C7C147
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PlayerHomeComp::unlockModule(PlayerHomeComp *const this, uint32_t module_id, bool is_notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockHomeModule,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  uint32_t HomeLevel; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockHomeModule,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // r14
  __int64 result; // rax
  std::string is_notifya; // [rsp+0h] [rbp-130h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+60h] [rbp-D0h] BYREF

  is_notifya._M_string_length = (std::string::size_type)this;
  HIDWORD(is_notifya._M_dataplus._M_p) = module_id;
  LOBYTE(is_notifya._M_dataplus._M_p) = is_notify;
  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 11 holder:1432 48 4 14 module_id:1415 64 16 12 log_ptr:1433 96 24 11 notify:1428";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::unlockModule;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = HIDWORD(is_notifya._M_dataplus._M_p);
  std::set<unsigned int>::insert(
    (std::set<unsigned int> *const)(is_notifya._M_string_length + 96),
    (const std::set<unsigned int>::value_type *)(v3 + 48));
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/home/player_home_comp.cpp",
    "unlockModule",
    1418);
  v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v21, (const char (*)[18])"unlock module_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((is_notifya._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *((_DWORD *)&is_notifya._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(is_notifya._M_string_length + 24));
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v8,
    (const unsigned int *)&is_notifya._anon_0._M_allocated_capacity + 3);
  common::milog::MiLogStream::~MiLogStream(&v21);
  if ( *(_BYTE *)(((is_notifya._M_string_length + 88) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((is_notifya._M_string_length + 88) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(is_notifya._M_string_length + 88);
  }
  if ( !*(_DWORD *)(is_notifya._M_string_length + 88) )
  {
    *(_DWORD *)(is_notifya._M_string_length + 88) = *(_DWORD *)(v3 + 48);
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/home/player_home_comp.cpp",
      "unlockModule",
      1423);
    v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v21,
           (const char (*)[29])"choose init_home_module_id_:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v9,
            (const unsigned int *)(is_notifya._M_string_length + 88));
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((is_notifya._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *((_DWORD *)&is_notifya._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(is_notifya._M_string_length + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v11,
      (const unsigned int *)&is_notifya._anon_0._M_allocated_capacity + 3);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  PlayerHomeComp::sendHomeCompInfoNotify((PlayerHomeComp *const)is_notifya._M_string_length);
  if ( LOBYTE(is_notifya._M_dataplus._M_p) )
  {
    proto::HomeModuleUnlockNotify::HomeModuleUnlockNotify((proto::HomeModuleUnlockNotify *const)(v3 + 96));
    proto::HomeModuleUnlockNotify::set_module_id((proto::HomeModuleUnlockNotify *const)(v3 + 96), *(_DWORD *)(v3 + 48));
    if ( *(_BYTE *)(((is_notifya._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(
      *(Player *const *)(is_notifya._M_string_length + 24),
      (const google::protobuf::Message *)(v3 + 96));
    proto::HomeModuleUnlockNotify::~HomeModuleUnlockNotify((proto::HomeModuleUnlockNotify *const)(v3 + 96));
  }
  if ( *(_BYTE *)(((is_notifya._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(is_notifya._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xCE7u, is_notifya);
  std::string::~string(&v21);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyUnlockHomeModule>();
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockHomeModule,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockHomeModule,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  HomeLevel = PlayerHomeComp::getHomeLevel((const PlayerHomeComp *const)is_notifya._M_string_length);
  proto_log::PlayerLogBodyUnlockHomeModule::set_home_level(v13, HomeLevel);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockHomeModule,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockHomeModule,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyUnlockHomeModule::set_module_id(v15, *(_DWORD *)(v3 + 48));
  if ( *(_BYTE *)(((is_notifya._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v16 = *(Player **)(is_notifya._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyUnlockHomeModule,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyUnlockHomeModule> *)(v3 + 64));
  Player::printStatLog(v16, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyUnlockHomeModule>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyUnlockHomeModule> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  result = 0LL;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1441: range 0000000017C7C148-0000000017C7CA14
__int64 __fastcall PlayerHomeComp::chooseModuleByClient(PlayerHomeComp *const this, uint32_t module_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t HomeLevel; // eax
  unsigned int *v13; // rax
  uint32_t *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  __int64 v20; // rsi
  uint32_t v21; // ecx
  char v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+28h] [rbp-E8h]
  const data::HomeworldModuleExcelConfig *module_txt_config; // [rsp+30h] [rbp-E0h]
  const data::HomeworldLevelExcelConfig *home_level_config; // [rsp+38h] [rbp-D8h]
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-D0h]
  const data::HomeworldModuleExcelConfig *module_config_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v33; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 29 free_unlock_module_count:1468 48 4 33 cur_free_unlock_module_count:1474 64 4 14 module_id:1440";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::chooseModuleByClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = module_id;
  if ( std::set<unsigned int>::count(
         &this->unlocked_module_id_set_,
         (const std::set<unsigned int>::key_type *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/player_home_comp.cpp",
      "chooseModuleByClient",
      1444);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v34, (const char (*)[11])"module_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])" already unlocked");
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x5DEu) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "chooseModuleByClient",
        1450);
      v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v34,
             (const char (*)[32])"OPEN_STATE_HOME is locked. uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v34);
      result = 141LL;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v33);
      home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.home_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v33);
      module_txt_config = data::HomeWorldExcelConfigMgrBase::findHomeworldModuleExcelConfig(
                            home_config_mgr,
                            *(_DWORD *)(v2 + 64));
      if ( module_txt_config )
      {
        if ( *(_BYTE *)(((unsigned __int64)&module_txt_config->is_free >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)module_txt_config + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&module_txt_config->is_free >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load1(&module_txt_config->is_free);
        }
        if ( !module_txt_config->is_free )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/home/player_home_comp.cpp",
            "chooseModuleByClient",
            1462);
          v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v34,
                  (const char (*)[31])"module is not free. module_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v34);
          result = 0xFFFFFFFFLL;
        }
        else
        {
          if ( std::set<unsigned int>::empty(&this->unlocked_module_id_set_) )
            goto LABEL_35;
          *(_DWORD *)(v2 + 32) = 1;
          HomeLevel = PlayerHomeComp::getHomeLevel(this);
          home_level_config = data::HomeWorldExcelConfigMgrBase::findHomeworldLevelExcelConfig(
                                home_config_mgr,
                                HomeLevel);
          if ( home_level_config )
          {
            if ( *(_BYTE *)(((unsigned __int64)&home_level_config->free_unlock_module_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&home_level_config->free_unlock_module_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&home_level_config->free_unlock_module_count);
            }
            *(_DWORD *)(v2 + 32) = home_level_config->free_unlock_module_count;
          }
          *(_DWORD *)(v2 + 48) = 0;
          __for_range = &this->unlocked_module_id_set_;
          __for_begin._M_node = std::set<unsigned int>::begin(&this->unlocked_module_id_set_)._M_node;
          __for_end._M_node = std::set<unsigned int>::end(&this->unlocked_module_id_set_)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v13 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
            v14 = v13;
            if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v13);
            }
            module_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeworldModuleExcelConfig(home_config_mgr, *v14);
            if ( module_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&module_config_ptr->is_free >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)module_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&module_config_ptr->is_free >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load1(&module_config_ptr->is_free);
              }
              if ( module_config_ptr->is_free )
                ++*(_DWORD *)(v2 + 48);
            }
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
          }
          if ( *(_DWORD *)(v2 + 32) <= *(_DWORD *)(v2 + 48) )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/home/player_home_comp.cpp",
              "chooseModuleByClient",
              1485);
            v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v34,
                    (const char (*)[26])"free_unlock_module_count:");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v2 + 32));
            v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v16, (const char (*)[34])off_2637F9A0);
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v2 + 48));
            v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v18,
                    (const char (*)[14])" unlock set: ");
            common::milog::MiLogStream::operator<<<unsigned int>(v19, &this->unlocked_module_id_set_);
            common::milog::MiLogStream::~MiLogStream(&v34);
            result = 0xFFFFFFFFLL;
          }
          else
          {
LABEL_35:
            v20 = *(unsigned int *)(v2 + 64);
            PlayerHomeComp::unlockModule(this, v20, 0);
            v21 = *(_DWORD *)(v2 + 64);
            v22 = *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000);
            if ( v22 != 0 && v22 <= 3 )
            {
              LOBYTE(v20) = v22 != 0;
              __asan_report_store4(&this->init_home_module_id_, v20, &this->init_home_module_id_);
            }
            this->init_home_module_id_ = v21;
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/player/home/player_home_comp.cpp",
              "chooseModuleByClient",
              1494);
            v23 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v34,
                    (const char (*)[29])"choose init_home_module_id_:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    &this->init_home_module_id_);
            v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v34);
            result = 0LL;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/player_home_comp.cpp",
          "chooseModuleByClient",
          1457);
        v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v34, (const char (*)[39])off_2637F8C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v34);
        result = 0xFFFFFFFFLL;
      }
    }
  }
  if ( v35 == (char *)v2 )
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
  return result;
};

// Line 1499: range 0000000017C7CA16-0000000017C7CC28
__int64 __fastcall PlayerHomeComp::setSeenModuleId(PlayerHomeComp *const this, uint32_t module_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 module_id:1498";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::setSeenModuleId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = module_id;
  if ( !PlayerHomeComp::isHomeModuleUnlocked(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "setSeenModuleId",
      1502);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v9,
           (const char (*)[31])"module not unlock. module_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v7 = std::set<unsigned int>::insert(
           &this->seen_module_id_set_,
           (const std::set<unsigned int>::value_type *)(v2 + 32));
    if ( !v7.second )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "setSeenModuleId",
        1507);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v9,
             (const char (*)[33])"module already seen. module_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v9);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1514: range 0000000017C7CC2A-0000000017C7CD40
PlayerHomeModule *__fastcall PlayerHomeComp::getHomeModule(PlayerHomeComp *const this, uint32_t module_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char *v5; // rsi
  uint32_t v6; // ecx
  char v7; // al
  PlayerHomeModule *result; // rax
  std::map<unsigned int,PlayerHomeModule>::mapped_type *module; // [rsp+18h] [rbp-68h]
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 module_id:1513";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::getHomeModule;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = module_id;
  v5 = (char *)(v2 + 32);
  module = std::map<unsigned int,PlayerHomeModule>::operator[](
             &this->home_module_map_,
             (const std::map<unsigned int,PlayerHomeModule>::key_type *)(v2 + 32));
  v6 = *(_DWORD *)(v2 + 32);
  v7 = *(_BYTE *)(((unsigned __int64)module >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(module, v5, module);
  }
  module->module_id = v6;
  result = module;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1521: range 0000000017C7CD42-0000000017C7CE8C
uint32_t __cdecl PlayerHomeComp::getHomeLevel(const PlayerHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Home *v4; // rax
  HomeBasicComp *BasicComp; // rax
  uint32_t Level; // r14d
  const proto::HomeBasicCompSnapshotBin *v7; // rax
  uint32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 home_ptr:1522";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::getHomeLevel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v1 + 32));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BasicComp = Home::getBasicComp(v4);
    Level = HomeBasicComp::getLevel(BasicComp);
  }
  else
  {
    v7 = proto::HomeSnapshotBin::basic_snapshot(&this->home_snapshot_bin_);
    Level = proto::HomeBasicCompSnapshotBin::level(v7);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  result = Level;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1532: range 0000000017C7CE8E-0000000017C7D1AF
uint32_t __cdecl PlayerHomeComp::getMaxModuleComfortValue(const PlayerHomeComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  Home *v4; // rax
  HomeSceneComp *SceneComp; // rax
  uint32_t MaxModuleComfortValue; // r14d
  const proto::HomeSceneCompSnapshotBin *v7; // rax
  const unsigned int *v8; // rax
  _DWORD *v9; // rdx
  uint32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-B8h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *__for_range; // [rsp+30h] [rbp-B0h]
  const proto::HomeModuleSnapshotBin *module_data; // [rsp+38h] [rbp-A8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+40h] [rbp-A0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-98h]
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 11 result:1538 48 4 18 comfort_value:1541 64 16 13 home_ptr:1533";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::getMaxModuleComfortValue;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v1 + 64));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    v4 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    SceneComp = Home::getSceneComp(v4);
    MaxModuleComfortValue = HomeSceneComp::getMaxModuleComfortValue(SceneComp);
  }
  else
  {
    *(_DWORD *)(v1 + 32) = 0;
    v7 = proto::HomeSnapshotBin::scene_snapshot(&this->home_snapshot_bin_);
    __for_range = proto::HomeSceneCompSnapshotBin::module_bin_list(v7);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      module_data = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator*(&__for_begin);
      *(_DWORD *)(v1 + 48) = proto::HomeModuleSnapshotBin::room_scene_comfort_value(module_data);
      __for_range_0 = proto::HomeModuleSnapshotBin::world_scene_block_comfort_value_list(module_data);
      __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
      __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
      while ( __for_begin_0 != __for_end_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(__for_begin_0);
        }
        *(_DWORD *)(v1 + 48) += *__for_begin_0++;
      }
      v8 = std::max<unsigned int>((const unsigned int *)(v1 + 32), (const unsigned int *)(v1 + 48));
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v1 + 32) = *v9;
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator++(&__for_begin);
    }
    MaxModuleComfortValue = *(_DWORD *)(v1 + 32);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  result = MaxModuleComfortValue;
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 1552: range 0000000017C7D1B0-0000000017C7D23E
uint32_t __cdecl PlayerHomeComp::getHomeComfortLevel(const PlayerHomeComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t ComfortLevelByValue; // ebx
  uint32_t comfort_value; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  comfort_value = PlayerHomeComp::getMaxModuleComfortValue(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  ComfortLevelByValue = HomeWorldExcelConfigMgr::getComfortLevelByValue(
                          &v1->design_config.txt_config_mgr.home_config_mgr,
                          comfort_value);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return ComfortLevelByValue;
};

// Line 1559: range 0000000017C7D240-0000000017C7D35A
const data::HomeworldLevelExcelConfig *__cdecl PlayerHomeComp::getHomeLevelConfig(const PlayerHomeComp *const this)
{
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rbx
  uint32_t HomeLevel; // eax
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  const data::HomeworldLevelExcelConfig *config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.home_config_mgr;
  HomeLevel = PlayerHomeComp::getHomeLevel(this);
  config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeworldLevelExcelConfig(p_home_config_mgr, HomeLevel);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/player_home_comp.cpp",
      "getHomeLevelConfig",
      1563);
    v3 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v8,
           (const char (*)[49])"findHomeworldLevelExcelConfig fail. home level: ");
    val = PlayerHomeComp::getHomeLevel(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  return config_ptr;
};

// Line 1569: range 0000000017C7D35C-0000000017C7D49A
void __cdecl PlayerHomeComp::updateArrangementFurnitureSuite(
        PlayerHomeComp *const this,
        const HomeSceneArrangementData *arrangement_data)
{
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::vector<HomeFurnitureSuiteData>::const_iterator __for_begin_0; // [rsp+20h] [rbp-40h] BYREF
  std::vector<HomeFurnitureSuiteData>::const_iterator __for_end_0; // [rsp+28h] [rbp-38h] BYREF
  const std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,HomeBlockData> *v7; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *home_block_data; // [rsp+48h] [rbp-18h]
  const std::vector<HomeFurnitureSuiteData> *__for_range_0; // [rsp+50h] [rbp-10h]
  const HomeFurnitureSuiteData *furniture_suite_data; // [rsp+58h] [rbp-8h]

  __for_range = &arrangement_data->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&arrangement_data->block_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&arrangement_data->block_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v7);
    home_block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v7);
    __for_range_0 = &home_block_data->furniure_suite_vec;
    __for_begin_0._M_current = std::vector<HomeFurnitureSuiteData>::begin(&home_block_data->furniure_suite_vec)._M_current;
    __for_end_0._M_current = std::vector<HomeFurnitureSuiteData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      furniture_suite_data = __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)furniture_suite_data >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)furniture_suite_data >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(furniture_suite_data);
      }
      PlayerHomeComp::updateArrangementFurnitureSuite(this, furniture_suite_data->suite_id);
      __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
};

// Line 1580: range 0000000017C7D49C-0000000017C7D692
std::map<unsigned int,std::set<unsigned int>> *__cdecl PlayerHomeComp::getUnlockBlockID(
        std::map<unsigned int,std::set<unsigned int>> *retstr,
        PlayerHomeComp *const this,
        uint32_t module_id)
{
  bool *p_is_unlocked; // rax
  std::set<unsigned int> *v4; // rax
  std::map<unsigned int,PlayerHomeScene>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::map<unsigned int,PlayerHomeScene>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  std::map<unsigned int,PlayerHomeBlock>::const_iterator __for_begin_0; // [rsp+38h] [rbp-68h] BYREF
  std::map<unsigned int,PlayerHomeBlock>::const_iterator __for_end_0; // [rsp+40h] [rbp-60h] BYREF
  const PlayerHomeModule *module_data; // [rsp+48h] [rbp-58h]
  const std::map<unsigned int,PlayerHomeScene> *__for_range; // [rsp+50h] [rbp-50h]
  const std::pair<unsigned int const,PlayerHomeScene> *v12; // [rsp+58h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeScene> >::type *scene_id; // [rsp+60h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *scene_data; // [rsp+68h] [rbp-38h]
  const std::map<unsigned int,PlayerHomeBlock> *__for_range_0; // [rsp+70h] [rbp-30h]
  const std::pair<unsigned int const,PlayerHomeBlock> *v16; // [rsp+78h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeBlock> >::type *block_id; // [rsp+80h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeBlock> >::type *block_data; // [rsp+88h] [rbp-18h]

  module_data = PlayerHomeComp::getHomeModule(this, module_id);
  std::map<unsigned int,std::set<unsigned int>>::map(retstr);
  __for_range = &module_data->scene_map;
  __for_begin._M_node = std::map<unsigned int,PlayerHomeScene>::begin(&module_data->scene_map)._M_node;
  __for_end._M_node = std::map<unsigned int,PlayerHomeScene>::end(&module_data->scene_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,PlayerHomeScene>(v12);
    scene_data = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *)std::get<1ul,unsigned int const,PlayerHomeScene>(v12);
    __for_range_0 = &scene_data->block_map;
    __for_begin_0._M_node = std::map<unsigned int,PlayerHomeBlock>::begin(&scene_data->block_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,PlayerHomeBlock>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeBlock>>::operator*(&__for_begin_0);
      block_id = std::get<0ul,unsigned int const,PlayerHomeBlock>(v16);
      block_data = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeBlock> >::type *)std::get<1ul,unsigned int const,PlayerHomeBlock>(v16);
      p_is_unlocked = &block_data->is_unlocked;
      if ( *(_BYTE *)(((unsigned __int64)p_is_unlocked >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_unlocked & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlocked >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_unlocked);
      }
      if ( block_data->is_unlocked )
      {
        v4 = std::map<unsigned int,std::set<unsigned int>>::operator[](retstr, scene_id);
        std::set<unsigned int>::insert(v4, block_id);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeBlock>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 1597: range 0000000017C7D694-0000000017C7D6B6
void __cdecl PlayerHomeComp::syncWeekendDjinnInfo(PlayerHomeComp *const this)
{
  LimitedShop *LimitedShop; // rax

  LimitedShop = PlayerHomeComp::getLimitedShop(this);
  LimitedShop::syncWeekendDjinnInfo(LimitedShop);
};

// Line 1602: range 0000000017C7D6B8-0000000017C7D810
void __cdecl PlayerHomeComp::updateLastSaveTime(PlayerHomeComp *const this)
{
  __int64 Now; // rsi
  uint32_t *p_last_save_time; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t v4; // ecx
  char v5; // dl
  GameserverService *v6; // rsi
  __int64 v7; // rdx
  PlayerBasicComp *BasicComp; // rbx
  uint64_t NowMs; // rax
  std::shared_ptr<Config> v10[2]; // [rsp+10h] [rbp-20h] BYREF

  Now = (unsigned int)common::tools::TimeUtils::getNow();
  p_last_save_time = &this->last_save_time_;
  if ( *(_BYTE *)(((unsigned __int64)p_last_save_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_last_save_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_save_time_, Now, p_last_save_time);
  }
  this->last_save_time_ = Now;
  v6 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v10);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10);
  v4 = ConstValueExcelConfigMgr::getHomePriorCheckTime(&v3->design_config.txt_config_mgr.const_value_config_mgr);
  v5 = *(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v5 != 0;
  v7 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v5);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->prior_check_time_, v6, v7);
  this->prior_check_time_ = v4;
  std::shared_ptr<Config>::~shared_ptr(v10);
  PlayerHomeComp::notifyPriorCheckInfo(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  NowMs = common::tools::TimeUtils::getNowMs();
  PlayerBasicComp::notifyPlayerBriefData(BasicComp, NowMs);
};

// Line 1610: range 0000000017C7D812-0000000017C7D984
void __cdecl PlayerHomeComp::notifyPriorCheckInfo(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t v4; // eax
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 11 notify:1611";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::notifyPriorCheckInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::HomePriorCheckNotify::HomePriorCheckNotify((proto::HomePriorCheckNotify *const)(v1 + 32));
  v4 = PlayerHomeComp::getPriorCheckEndTime(this);
  proto::HomePriorCheckNotify::set_end_time((proto::HomePriorCheckNotify *const)(v1 + 32), v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::HomePriorCheckNotify::~HomePriorCheckNotify((proto::HomePriorCheckNotify *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1617: range 0000000017C7D986-0000000017C7E1AF
void __fastcall PlayerHomeComp::asyncHomeVerifyRequest(
        PlayerHomeComp *const this,
        uint32_t module_id,
        uint32_t scene_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool isHomeAuditBeforeReleaseEnabled; // r14
  common::milog::MiLogStream *v14; // rcx
  Home *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::shared_ptr<Config> v26; // [rsp+10h] [rbp-180h] BYREF
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-170h] BYREF
  char v28[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 14 module_id:1616 64 4 13 scene_id:1616 80 16 13 home_ptr:1618 112 16 18 request_timer:16"
                        "24 144 16 15 config_ptr:1625 176 72 17 verify_proto:1639";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::asyncHomeVerifyRequest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = module_id;
  *(_DWORD *)(v3 + 64) = scene_id;
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 80));
  if ( !std::operator==<Home>(0LL, (const std::shared_ptr<Home> *)(v3 + 80)) )
  {
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 112));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 144));
    if ( std::operator==<Config>((const std::shared_ptr<Config> *)(v3 + 144), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/player_home_comp.cpp",
        "asyncHomeVerifyRequest",
        1628);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v27, (const char (*)[17])"getConfig error.");
      common::milog::MiLogStream::~MiLogStream(&v27);
LABEL_27:
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 144));
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 112));
      goto LABEL_28;
    }
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    if ( *(char *)(((unsigned __int64)&v11->home_verify_is_enable_ >> 3) + 0x7FFF8000) < 0 )
      v11 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v11->home_verify_is_enable_);
    if ( !v11->home_verify_is_enable_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
      isHomeAuditBeforeReleaseEnabled = FeatureSwitchMgr::isHomeAuditBeforeReleaseEnabled(&v12->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( isHomeAuditBeforeReleaseEnabled )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/home/player_home_comp.cpp",
          "asyncHomeVerifyRequest",
          1635);
        v14 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v27,
                (const char (*)[58])"home verify disabled but audit before release is opened! ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v14, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      goto LABEL_27;
    }
    proto::HomeVerifyData::HomeVerifyData((proto::HomeVerifyData *const)(v3 + 176));
    v15 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    if ( PlayerHomeComp::packHomeVerifyData(
           this,
           (proto::HomeVerifyData *)(v3 + 176),
           *(_DWORD *)(v3 + 48),
           *(_DWORD *)(v3 + 64),
           v15) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/player_home_comp.cpp",
        "asyncHomeVerifyRequest",
        1642);
      v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v27, (const char (*)[8])"module:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])", scene:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
      v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v19,
              (const char (*)[25])"packHomeVerifyData fail.");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
      proto::HomeVerifyData::set_token((proto::HomeVerifyData *const)(v3 + 176), &v21->home_verify_token_);
      if ( !PlayerHomeComp::asyncAuditHttpRequest((const proto::HomeVerifyData *)(v3 + 176)) )
      {
LABEL_26:
        proto::HomeVerifyData::~HomeVerifyData((proto::HomeVerifyData *const)(v3 + 176));
        goto LABEL_27;
      }
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "asyncHomeVerifyRequest",
        1648);
      v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v27,
              (const char (*)[38])"asyncAuditHttpRequest failed. module:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
      v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" scene:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    operator<<(v20, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    goto LABEL_26;
  }
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/home/player_home_comp.cpp",
    "asyncHomeVerifyRequest",
    1621);
  v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v27, (const char (*)[8])"module:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])", scene:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
  v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])" home NOT exist. ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v10, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v27);
LABEL_28:
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 80));
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
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
};

// Line 1653: range 0000000017C7E1B0-0000000017C7EA6D
__int64 __fastcall PlayerHomeComp::packHomeVerifyData(
        PlayerHomeComp *const this,
        proto::HomeVerifyData *verify_proto,
        uint32_t module_id,
        uint32_t scene_id,
        Home *home)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  HomeSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int v19; // eax
  const std::string *v20; // rax
  uint32_t Uid; // eax
  google::protobuf::uint32 Now; // eax
  PlayerBasicComp *BasicComp; // rax
  proto::LanguageType LanguageType; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  data::SceneType SceneTypeBySceneId; // eax
  bool is_room; // [rsp+23h] [rbp-12Dh]
  unsigned int furniture_count; // [rsp+24h] [rbp-12Ch]
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  std::vector<HomeFurnitureGroupData>::const_iterator __for_begin_0; // [rsp+38h] [rbp-118h] BYREF
  std::vector<HomeFurnitureGroupData>::const_iterator __for_end_0; // [rsp+40h] [rbp-110h] BYREF
  const HomeSceneArrangementData *scene_arrengement_data_ptr; // [rsp+48h] [rbp-108h]
  PlayerHomeScene *player_home_scene_ptr; // [rsp+50h] [rbp-100h]
  proto::HomeVerifySceneData *verify_home_info; // [rsp+58h] [rbp-F8h]
  const std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+60h] [rbp-F0h]
  proto::HomeSceneArrangementMuipData *arrangement_aduit_data; // [rsp+68h] [rbp-E8h]
  const std::pair<unsigned int const,HomeBlockData> *v42; // [rsp+70h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+78h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+80h] [rbp-D0h]
  const std::vector<HomeFurnitureGroupData> *__for_range_0; // [rsp+88h] [rbp-C8h]
  proto::HomeVerifyBlockData *verify_block_info; // [rsp+90h] [rbp-C0h]
  const HomeFurnitureGroupData *furniture_group_data; // [rsp+98h] [rbp-B8h]
  std::shared_ptr<Config> v48; // [rsp+A0h] [rbp-B0h] BYREF
  common::milog::MiLogStream v49; // [rsp+B0h] [rbp-A0h] BYREF
  char v50[128]; // [rsp+D0h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 14 module_id:1652 64 4 13 scene_id:1652";
  *(_QWORD *)(v5 + 16) = PlayerHomeComp::packHomeVerifyData;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = module_id;
  *(_DWORD *)(v5 + 64) = scene_id;
  SceneComp = Home::getSceneComp(home);
  scene_arrengement_data_ptr = HomeSceneComp::findSceneArrangementData(
                                 SceneComp,
                                 *(_DWORD *)(v5 + 48),
                                 *(_DWORD *)(v5 + 64));
  if ( !scene_arrengement_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/player_home_comp.cpp",
      "packHomeVerifyData",
      1657);
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v49, (const char (*)[11])"module_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" scene_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            v12,
            (const char (*)[35])" findSceneArrangementData failed! ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    operator<<(v13, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v49);
    result = 0xFFFFFFFFLL;
    goto LABEL_34;
  }
  player_home_scene_ptr = PlayerHomeComp::findMutablePlayerHomeScene(this, *(_DWORD *)(v5 + 48), *(_DWORD *)(v5 + 64));
  if ( !player_home_scene_ptr )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/player_home_comp.cpp",
      "packHomeVerifyData",
      1663);
    v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v49, (const char (*)[11])"module_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 48));
    v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" scene_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" not found! ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  verify_home_info = proto::HomeVerifyData::mutable_home_info(verify_proto);
  __for_range = &scene_arrengement_data_ptr->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&scene_arrengement_data_ptr->block_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&scene_arrengement_data_ptr->block_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v42 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v42);
    block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v42);
    if ( *(char *)(((unsigned __int64)&block_data->is_unlocked >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&block_data->is_unlocked);
    if ( block_data->is_unlocked )
    {
      furniture_count = std::vector<HomeFurnitureData>::size(&block_data->deploy_furniure_vec);
      __for_range_0 = &block_data->deploy_furniture_group_vec;
      __for_begin_0._M_current = std::vector<HomeFurnitureGroupData>::begin(&block_data->deploy_furniture_group_vec)._M_current;
      __for_end_0._M_current = std::vector<HomeFurnitureGroupData>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>(
                &__for_begin_0,
                &__for_end_0) )
      {
        furniture_group_data = __gnu_cxx::__normal_iterator<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>::operator*(&__for_begin_0);
        v19 = std::vector<HomeFurnitureData>::size(&furniture_group_data->virtual_furniure_vec);
        furniture_count = SAFE_ADD<unsigned int,unsigned int>(furniture_count, v19);
        __gnu_cxx::__normal_iterator<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>::operator++(&__for_begin_0);
      }
      if ( furniture_count )
      {
        verify_block_info = proto::HomeVerifySceneData::add_blocks(verify_home_info);
        if ( *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(block_id);
        }
        proto::HomeVerifyBlockData::set_block_id(verify_block_info, *block_id);
        proto::HomeVerifyBlockData::set_furniture_count(verify_block_info, furniture_count);
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v20 = Player::getAccountUid[abi:cxx11](this->player_);
  proto::HomeVerifyData::set_aid(verify_proto, v20);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  proto::HomeVerifyData::set_uid(verify_proto, Uid);
  Now = common::tools::TimeUtils::getNow();
  proto::HomeVerifyData::set_timestamp(verify_proto, Now);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  LanguageType = PlayerBasicComp::getLanguageType(BasicComp);
  proto::HomeVerifyData::set_lang(verify_proto, LanguageType);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v48);
  v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
  proto::HomeVerifyData::set_region(verify_proto, &v25->region_name);
  std::shared_ptr<Config>::~shared_ptr(&v48);
  proto::HomeVerifySceneData::set_scene_id(verify_home_info, *(_DWORD *)(v5 + 64));
  proto::HomeVerifySceneData::set_module_id(verify_home_info, *(_DWORD *)(v5 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v48);
  v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
  SceneTypeBySceneId = SceneExcelConfigMgr::getSceneTypeBySceneId(
                         &v26->design_config.txt_config_mgr.scene_config_mgr,
                         *(_DWORD *)(v5 + 64));
  is_room = SceneExcelConfigMgr::isRoomScene(SceneTypeBySceneId);
  std::shared_ptr<Config>::~shared_ptr(&v48);
  proto::HomeVerifySceneData::set_is_room(verify_home_info, is_room);
  if ( *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)player_home_scene_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->version >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&player_home_scene_ptr->version);
  }
  proto::HomeVerifySceneData::set_version(verify_home_info, player_home_scene_ptr->version);
  arrangement_aduit_data = proto::HomeVerifyData::mutable_arrangement_data(verify_proto);
  proto::HomeSceneArrangementMuipData::set_module_id(arrangement_aduit_data, *(_DWORD *)(v5 + 48));
  HomeSceneArrangementData::toAuditData(scene_arrengement_data_ptr, arrangement_aduit_data);
  result = 0LL;
LABEL_34:
  if ( v50 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1703: range 0000000017C7EA6E-0000000017C7EBFD
void __cdecl PlayerHomeComp::modifySnapShotAvatarCostume(
        PlayerHomeComp *const this,
        uint32_t avatar_id,
        uint32_t costume_id)
{
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::iterator __for_begin_0; // [rsp+28h] [rbp-58h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::iterator __for_end_0; // [rsp+30h] [rbp-50h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeNpcBin>::iterator __for_begin_1; // [rsp+38h] [rbp-48h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeNpcBin>::iterator __for_end_1; // [rsp+40h] [rbp-40h] BYREF
  proto::HomeSceneCompSnapshotBin *scene_comp_bin; // [rsp+48h] [rbp-38h]
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *__for_range; // [rsp+50h] [rbp-30h]
  proto::HomeModuleSnapshotBin *module_bin; // [rsp+58h] [rbp-28h]
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin> *__for_range_0; // [rsp+60h] [rbp-20h]
  proto::HomeSceneSnapshotBin *scene_bin; // [rsp+68h] [rbp-18h]
  google::protobuf::RepeatedPtrField<proto::HomeNpcBin> *__for_range_1; // [rsp+70h] [rbp-10h]
  proto::HomeNpcBin *npc_bin; // [rsp+78h] [rbp-8h]

  scene_comp_bin = proto::HomeSnapshotBin::mutable_scene_snapshot(&this->home_snapshot_bin_);
  __for_range = proto::HomeSceneCompSnapshotBin::mutable_module_bin_list(scene_comp_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    module_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin>::operator*(&__for_begin);
    __for_range_0 = proto::HomeModuleSnapshotBin::mutable_scene_bin_list(module_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      scene_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin>::operator*(&__for_begin_0);
      __for_range_1 = proto::HomeSceneSnapshotBin::mutable_deploy_npc_list(scene_bin);
      __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeNpcBin>::begin(__for_range_1).it_;
      __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeNpcBin>::end(__for_range_1).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeNpcBin>::operator!=(
                &__for_begin_1,
                &__for_end_1) )
      {
        npc_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeNpcBin>::operator*(&__for_begin_1);
        if ( avatar_id == proto::HomeNpcBin::avatar_id(npc_bin) )
        {
          proto::HomeNpcBin::set_costume_id(npc_bin, costume_id);
          return;
        }
        google::protobuf::internal::RepeatedPtrIterator<proto::HomeNpcBin>::operator++(&__for_begin_1);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin>::operator++(&__for_begin_0);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin>::operator++(&__for_begin);
  }
};

// Line 1722: range 0000000017C7EBFE-0000000017C7F271
void __cdecl PlayerHomeComp::checkAndModifyHomePlantSnapshotGatherId(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerHomeComp *HomeComp; // rax
  proto::HomeSceneCompSnapshotBin *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  const HomeWorldExcelConfigMgr *v8; // r14
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // r14
  const data::ConfigHomeGather *v11; // rax
  unsigned int val; // [rsp+10h] [rbp-180h] BYREF
  uint32_t home_gather_id; // [rsp+14h] [rbp-17Ch]
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::iterator __for_begin; // [rsp+18h] [rbp-178h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::iterator __for_end; // [rsp+20h] [rbp-170h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::iterator __for_begin_0; // [rsp+28h] [rbp-168h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::iterator __for_end_0; // [rsp+30h] [rbp-160h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin>::iterator __for_begin_1; // [rsp+38h] [rbp-158h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin>::iterator __for_end_1; // [rsp+40h] [rbp-150h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSubFieldSnapShotBin>::iterator __for_begin_2; // [rsp+48h] [rbp-148h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSubFieldSnapShotBin>::iterator __for_end_2; // [rsp+50h] [rbp-140h] BYREF
  proto::HomeSnapshotBin *snapshot_bin; // [rsp+58h] [rbp-138h]
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *bin_list_ptr; // [rsp+60h] [rbp-130h]
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+68h] [rbp-128h]
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *__for_range; // [rsp+70h] [rbp-120h]
  proto::HomeModuleSnapshotBin *module_bin; // [rsp+78h] [rbp-118h]
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin> *scene_bin_list_ptr; // [rsp+80h] [rbp-110h]
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin> *__for_range_0; // [rsp+88h] [rbp-108h]
  proto::HomeSceneSnapshotBin *scene_bin; // [rsp+90h] [rbp-100h]
  google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin> *field_bin_list_ptr; // [rsp+98h] [rbp-F8h]
  google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin> *__for_range_1; // [rsp+A0h] [rbp-F0h]
  proto::HomeFieldSnapShotBin *field_bin; // [rsp+A8h] [rbp-E8h]
  google::protobuf::RepeatedPtrField<proto::HomeSubFieldSnapShotBin> *sub_field_list_ptr; // [rsp+B0h] [rbp-E0h]
  google::protobuf::RepeatedPtrField<proto::HomeSubFieldSnapShotBin> *__for_range_2; // [rsp+B8h] [rbp-D8h]
  proto::HomeSubFieldSnapShotBin *sub_field_bin; // [rsp+C0h] [rbp-D0h]
  const data::HomeWorldPlantExcelConfig *plant_config_ptr; // [rsp+C8h] [rbp-C8h]
  std::shared_ptr<Config> v37; // [rsp+D0h] [rbp-C0h] BYREF
  common::milog::MiLogStream v38; // [rsp+E0h] [rbp-B0h] BYREF
  char v39[144]; // [rsp+100h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 23 home_gather_config:1769";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::checkAndModifyHomePlantSnapshotGatherId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  snapshot_bin = PlayerHomeComp::getHomeSnapshot(HomeComp);
  v5 = proto::HomeSnapshotBin::mutable_scene_snapshot(snapshot_bin);
  bin_list_ptr = proto::HomeSceneCompSnapshotBin::mutable_module_bin_list(v5);
  if ( bin_list_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.home_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v37);
    __for_range = bin_list_ptr;
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::begin(bin_list_ptr).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::end(bin_list_ptr).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      module_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin>::operator*(&__for_begin);
      scene_bin_list_ptr = proto::HomeModuleSnapshotBin::mutable_scene_bin_list(module_bin);
      if ( scene_bin_list_ptr )
      {
        __for_range_0 = scene_bin_list_ptr;
        __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::begin(scene_bin_list_ptr).it_;
        __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::end(__for_range_0).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin>::operator!=(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          scene_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin>::operator*(&__for_begin_0);
          field_bin_list_ptr = proto::HomeSceneSnapshotBin::mutable_field_bin_list(scene_bin);
          if ( field_bin_list_ptr )
          {
            __for_range_1 = field_bin_list_ptr;
            __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin>::begin(field_bin_list_ptr).it_;
            __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFieldSnapShotBin>::end(__for_range_1).it_;
            while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFieldSnapShotBin>::operator!=(
                      &__for_begin_1,
                      &__for_end_1) )
            {
              field_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFieldSnapShotBin>::operator*(&__for_begin_1);
              sub_field_list_ptr = proto::HomeFieldSnapShotBin::mutable_sub_field_list(field_bin);
              if ( sub_field_list_ptr )
              {
                __for_range_2 = sub_field_list_ptr;
                __for_begin_2.it_ = google::protobuf::RepeatedPtrField<proto::HomeSubFieldSnapShotBin>::begin(sub_field_list_ptr).it_;
                __for_end_2.it_ = google::protobuf::RepeatedPtrField<proto::HomeSubFieldSnapShotBin>::end(__for_range_2).it_;
                while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSubFieldSnapShotBin>::operator!=(
                          &__for_begin_2,
                          &__for_end_2) )
                {
                  sub_field_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSubFieldSnapShotBin>::operator*(&__for_begin_2);
                  if ( proto::HomeSubFieldSnapShotBin::seed_id(sub_field_bin)
                    && !proto::HomeSubFieldSnapShotBin::home_gather_id(sub_field_bin) )
                  {
                    home_gather_id = 0;
                    v8 = home_config_mgr;
                    v9 = proto::HomeSubFieldSnapShotBin::seed_id(sub_field_bin);
                    plant_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldPlantExcelConfig(v8, v9);
                    if ( plant_config_ptr )
                    {
                      if ( std::vector<data::ConfigHomeGather>::size(&plant_config_ptr->config_home_gather) )
                      {
                        v11 = std::vector<data::ConfigHomeGather>::operator[](
                                &plant_config_ptr->config_home_gather,
                                0LL);
                        data::ConfigHomeGather::ConfigHomeGather((data::ConfigHomeGather *const)(v1 + 32), v11);
                        home_gather_id = *(_DWORD *)(v1 + 40);
                        proto::HomeSubFieldSnapShotBin::set_home_gather_id(sub_field_bin, home_gather_id);
                        data::ConfigHomeGather::~ConfigHomeGather((data::ConfigHomeGather *const)(v1 + 32));
                      }
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v38,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/player/home/player_home_comp.cpp",
                        "checkAndModifyHomePlantSnapshotGatherId",
                        1761);
                      v10 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                              &v38,
                              (const char (*)[58])"[HOME_PLANT]findHomeWorldPlantExcelConfig fail. seed id: ");
                      val = proto::HomeSubFieldSnapShotBin::seed_id(sub_field_bin);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
                      common::milog::MiLogStream::~MiLogStream(&v38);
                    }
                  }
                  google::protobuf::internal::RepeatedPtrIterator<proto::HomeSubFieldSnapShotBin>::operator++(&__for_begin_2);
                }
              }
              google::protobuf::internal::RepeatedPtrIterator<proto::HomeFieldSnapShotBin>::operator++(&__for_begin_1);
            }
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin>::operator++(&__for_begin_0);
        }
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/player_home_comp.cpp",
      "checkAndModifyHomePlantSnapshotGatherId",
      1727);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v38,
           (const char (*)[30])"mutable_module_bin_list null.");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v38);
  }
  if ( v39 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1780: range 0000000017C7F272-0000000017C7FCA2
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerHomeComp::unlockHomeBgm(
        PlayerHomeComp *const this,
        const std::vector<unsigned int> *home_bgm_id_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  PlayerBasicComp *BasicComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockHomeBgm,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  Player *v22; // r14
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  std::string home_bgm_id_veca; // [rsp+0h] [rbp-1F0h] OVERLAPPED BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-1D0h]
  const data::HomeWorldBgmExcelConfig *bgm_config_ptr; // [rsp+28h] [rbp-1C8h]
  std::shared_ptr<google::protobuf::Message> v28; // [rsp+30h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-190h] BYREF
  common::milog::MiLogStream v31; // [rsp+80h] [rbp-170h] BYREF
  char v32[336]; // [rsp+A0h] [rbp-150h] BYREF

  home_bgm_id_veca._M_string_length = (std::string::size_type)this;
  home_bgm_id_veca._M_dataplus._M_p = (std::string::pointer)home_bgm_id_vec;
  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 11 holder:1786 64 4 11 bgm_id:1789 80 16 12 log_ptr:1807 112 16 14 event_ptr:1818 144 24 "
                        "24 unlocked_bgm_id_vec:1788 208 40 11 notify:1787";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::unlockHomeBgm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)home_bgm_id_veca._M_dataplus._M_p) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "unlockHomeBgm",
      1783);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v31,
           (const char (*)[34])"home_bgm_id_vec is empty, player:");
    if ( *(_BYTE *)(((home_bgm_id_veca._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, *(const Player **)(home_bgm_id_veca._M_string_length + 24));
    common::milog::MiLogStream::~MiLogStream(&v31);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((home_bgm_id_veca._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(*(Player *const *)(home_bgm_id_veca._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v31, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xCF3u, home_bgm_id_veca);
    std::string::~string(&v31);
    proto::HomeNewUnlockedBgmIdListNotify::HomeNewUnlockedBgmIdListNotify((proto::HomeNewUnlockedBgmIdListNotify *const)(v2 + 208));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
    __for_range = (const std::vector<unsigned int> *)home_bgm_id_veca._M_dataplus._M_p;
    *(std::vector<unsigned int>::const_iterator *)home_bgm_id_veca._anon_0._M_local_buf = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)home_bgm_id_veca._M_dataplus._M_p);
    *((std::vector<unsigned int>::const_iterator *)&home_bgm_id_veca._anon_0._M_allocated_capacity + 1) = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)home_bgm_id_veca._M_dataplus._M_p);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&home_bgm_id_veca._anon_0,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&home_bgm_id_veca._anon_0._M_allocated_capacity
            + 1) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&home_bgm_id_veca._anon_0);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v2 + 64) = *v9;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
      bgm_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldBgmExcelConfig(
                         &v10->design_config.txt_config_mgr.home_config_mgr,
                         *(_DWORD *)(v2 + 64));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
      if ( bgm_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&bgm_config_ptr->is_default_unlock >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)bgm_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&bgm_config_ptr->is_default_unlock >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load1(&bgm_config_ptr->is_default_unlock);
        }
        if ( bgm_config_ptr->is_default_unlock )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/home/player_home_comp.cpp",
            "unlockHomeBgm",
            1799);
          v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v30, (const char (*)[33])off_26380360);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 64));
          v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((home_bgm_id_veca._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v16, *(const Player **)(home_bgm_id_veca._M_string_length + 24));
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        else
        {
          v17 = std::set<unsigned int>::insert(
                  (std::set<unsigned int> *const)(home_bgm_id_veca._M_string_length + 424),
                  (const std::set<unsigned int>::value_type *)(v2 + 64));
          if ( !v17.second )
          {
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/home/player_home_comp.cpp",
              "unlockHomeBgm",
              1804);
            v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v31,
                    (const char (*)[25])"duplicate unlock bgm_id:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v2 + 64));
            v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((home_bgm_id_veca._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v20, *(const Player **)(home_bgm_id_veca._M_string_length + 24));
            common::milog::MiLogStream::~MiLogStream(&v31);
          }
          else
          {
            common::tools::perf::make_shared<proto_log::PlayerLogBodyUnlockHomeBgm>();
            v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockHomeBgm,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockHomeBgm,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            proto_log::PlayerLogBodyUnlockHomeBgm::set_bgm_id(v21, *(_DWORD *)(v2 + 64));
            if ( *(_BYTE *)(((home_bgm_id_veca._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v22 = *(Player **)(home_bgm_id_veca._M_string_length + 24);
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v28, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyUnlockHomeBgm,void>(
              (std::shared_ptr<google::protobuf::Message> *const)(v2 + 112),
              (const std::shared_ptr<proto_log::PlayerLogBodyUnlockHomeBgm> *)(v2 + 80));
            Player::printStatLog(v22, (MessagePtr *)(v2 + 112), &v28, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 112));
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v28);
            proto::HomeNewUnlockedBgmIdListNotify::add_new_unlocked_bgm_id_list(
              (proto::HomeNewUnlockedBgmIdListNotify *const)(v2 + 208),
              *(_DWORD *)(v2 + 64));
            std::vector<unsigned int>::emplace_back<unsigned int &>(
              (std::vector<unsigned int> *const)(v2 + 144),
              (unsigned int *)(v2 + 64),
              (unsigned int *)(v2 + 64));
            std::shared_ptr<proto_log::PlayerLogBodyUnlockHomeBgm>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyUnlockHomeBgm> *const)(v2 + 80));
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/home/player_home_comp.cpp",
          "unlockHomeBgm",
          1794);
        v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v29,
                (const char (*)[42])"findHomeWorldBgmExcelConfig fail, bgm_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 64));
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((home_bgm_id_veca._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v13, *(const Player **)(home_bgm_id_veca._M_string_length + 24));
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&home_bgm_id_veca._anon_0);
    }
    if ( *(_BYTE *)(((home_bgm_id_veca._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(
      *(Player *const *)(home_bgm_id_veca._M_string_length + 24),
      (const google::protobuf::Message *)(v2 + 208));
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 144)) )
    {
      common::tools::perf::make_shared<HomeBgmUnlockEvent,std::vector<unsigned int> &>(
        (std::vector<unsigned int> *)(v2 + 112),
        (std::vector<unsigned int> *)(v2 + 144));
      if ( *(_BYTE *)(((home_bgm_id_veca._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(*(Player *const *)(home_bgm_id_veca._M_string_length + 24));
      std::shared_ptr<BaseEvent>::shared_ptr<HomeBgmUnlockEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v28,
        (const std::shared_ptr<HomeBgmUnlockEvent> *)(v2 + 112));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v28);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v28);
      std::shared_ptr<HomeBgmUnlockEvent>::~shared_ptr((std::shared_ptr<HomeBgmUnlockEvent> *const)(v2 + 112));
    }
    v6 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
    proto::HomeNewUnlockedBgmIdListNotify::~HomeNewUnlockedBgmIdListNotify((proto::HomeNewUnlockedBgmIdListNotify *const)(v2 + 208));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  result = v6;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1825: range 0000000017C7FCA4-0000000017C7FE4B
bool __fastcall PlayerHomeComp::isHomeBgmUnlocked(const PlayerHomeComp *const this, uint32_t bgm_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool result; // al
  const data::HomeWorldBgmExcelConfig *bgm_config_ptr; // [rsp+18h] [rbp-78h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-70h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 bgm_id:1824";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::isHomeBgmUnlocked;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = bgm_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  bgm_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldBgmExcelConfig(
                     &v5->design_config.txt_config_mgr.home_config_mgr,
                     *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( bgm_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&bgm_config_ptr->is_default_unlock >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)bgm_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&bgm_config_ptr->is_default_unlock >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(&bgm_config_ptr->is_default_unlock);
    }
    result = bgm_config_ptr->is_default_unlock
          || common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
               &this->unlocked_bgm_id_set_,
               (const unsigned int *)(v2 + 32));
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1839: range 0000000017C7FE4C-0000000017C7FE6B
uint32_t __cdecl PlayerHomeComp::getUnlockedHomeBgmCount(const PlayerHomeComp *const this)
{
  return std::set<unsigned int>::size(&this->unlocked_bgm_id_set_);
};

// Line 1844: range 0000000017C7FE6C-0000000017C801C1
PlayerHomeScene *__fastcall PlayerHomeComp::findMutablePlayerHomeScene(
        PlayerHomeComp *const this,
        uint32_t module_id,
        uint32_t scene_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  PlayerHomeScene *result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerHomeModule *player_home_module_ptr; // [rsp+10h] [rbp-B0h]
  common::tools::transcribe_cv_t_31 *player_home_scene_ptr; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 module_id:1843 64 4 13 scene_id:1843";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::findMutablePlayerHomeScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = module_id;
  *(_DWORD *)(v3 + 64) = scene_id;
  player_home_module_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,PlayerHomeModule>>(
                             &this->home_module_map_,
                             (const std::map<unsigned int,PlayerHomeModule>::key_type *)(v3 + 48));
  if ( !player_home_module_ptr )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/player_home_comp.cpp",
      "findMutablePlayerHomeScene",
      1848);
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v18, (const char (*)[11])"module_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           v7,
           (const char (*)[22])" not exist! scene_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0LL;
    goto LABEL_13;
  }
  player_home_scene_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,PlayerHomeScene>>(
                            &player_home_module_ptr->scene_map,
                            (const std::map<unsigned int,PlayerHomeScene>::key_type *)(v3 + 64));
  if ( !player_home_scene_ptr )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/player_home_comp.cpp",
      "findMutablePlayerHomeScene",
      1854);
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v18, (const char (*)[11])"module_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" scene_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" not exist!");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  result = player_home_scene_ptr;
LABEL_13:
  if ( v19 == (char *)v3 )
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
  return result;
};

// Line 1861: range 0000000017C801C2-0000000017C8090C
void __fastcall PlayerHomeComp::onPostUpdateSceneArrangement(
        PlayerHomeComp *const this,
        uint32_t module_id,
        unsigned __int64 scene_arrangement_data,
        bool is_room_scene_change)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::map<unsigned int,PlayerHomeScene>::iterator *p_for_end; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  __int64 v14; // rsi
  data::SceneType SceneTypeBySceneId; // eax
  bool isRoomScene; // r14
  uint32_t v17; // ecx
  char v18; // dl
  __int64 v19; // rdx
  GameserverService *v20; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  bool isHomeAuditBeforeReleaseEnabled; // r14
  uint32_t Now; // edi
  __int64 v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  std::map<unsigned int,PlayerHomeScene>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,PlayerHomeScene>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  PlayerHomeScene *player_home_scene_ptr; // [rsp+30h] [rbp-F0h]
  PlayerHomeModule *module_data; // [rsp+38h] [rbp-E8h]
  std::map<unsigned int,PlayerHomeScene> *__for_range; // [rsp+40h] [rbp-E0h]
  std::pair<unsigned int const,PlayerHomeScene> *__in; // [rsp+48h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,PlayerHomeScene> >::type *scene_id; // [rsp+50h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,PlayerHomeScene> >::type *scene_data; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v44; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v45; // [rsp+70h] [rbp-B0h] BYREF
  char v46[144]; // [rsp+90h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 scene_id:1862 64 4 14 module_id:1860";
  *(_QWORD *)(v4 + 16) = PlayerHomeComp::onPostUpdateSceneArrangement;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = module_id;
  if ( *(_BYTE *)((scene_arrangement_data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((scene_arrangement_data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(scene_arrangement_data);
  }
  *(_DWORD *)(v4 + 48) = *(_DWORD *)scene_arrangement_data;
  p_for_end = (std::map<unsigned int,PlayerHomeScene>::iterator *)*(unsigned int *)(v4 + 64);
  player_home_scene_ptr = PlayerHomeComp::findMutablePlayerHomeScene(this, (uint32_t)p_for_end, *(_DWORD *)(v4 + 48));
  if ( player_home_scene_ptr )
  {
    if ( is_room_scene_change )
    {
      module_data = PlayerHomeComp::getHomeModule(this, *(_DWORD *)(v4 + 64));
      __for_range = &module_data->scene_map;
      __for_begin._M_node = std::map<unsigned int,PlayerHomeScene>::begin(&module_data->scene_map)._M_node;
      __for_end._M_node = std::map<unsigned int,PlayerHomeScene>::end(&module_data->scene_map)._M_node;
      while ( 1 )
      {
        p_for_end = &__for_end;
        if ( !std::operator!=(&__for_begin, &__for_end) )
          break;
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator*(&__for_begin);
        scene_id = std::get<0ul,unsigned int const,PlayerHomeScene>(__in);
        scene_data = std::get<1ul,unsigned int const,PlayerHomeScene>(__in);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v44);
        p_scene_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.scene_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(scene_id);
        }
        v14 = *scene_id;
        SceneTypeBySceneId = SceneExcelConfigMgr::getSceneTypeBySceneId(p_scene_config_mgr, v14);
        isRoomScene = SceneExcelConfigMgr::isRoomScene(SceneTypeBySceneId);
        std::shared_ptr<Config>::~shared_ptr(&v44);
        if ( isRoomScene )
        {
          if ( *(_BYTE *)(((unsigned __int64)&scene_data->audit_state >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&scene_data->audit_state >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&scene_data->audit_state, v14, &scene_data->audit_state);
          }
          scene_data->audit_state = 0;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator++(&__for_begin);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->audit_version_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->audit_version_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->audit_version_index_);
    }
    v17 = ++this->audit_version_index_;
    v18 = *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->version >> 3) + 0x7FFF8000);
    LOBYTE(p_for_end) = v18 != 0;
    v19 = (v18 != 0) & (unsigned __int8)((char)((((_BYTE)player_home_scene_ptr + 60) & 7) + 3) >= v18);
    if ( (_BYTE)v19 )
      __asan_report_store4(&player_home_scene_ptr->version, p_for_end, v19);
    player_home_scene_ptr->version = v17;
    v20 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v44);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44);
    isHomeAuditBeforeReleaseEnabled = FeatureSwitchMgr::isHomeAuditBeforeReleaseEnabled(&v21->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v44);
    if ( isHomeAuditBeforeReleaseEnabled )
    {
      if ( *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->audit_state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->audit_state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&player_home_scene_ptr->audit_state, v20, &player_home_scene_ptr->audit_state);
      }
      player_home_scene_ptr->audit_state = 1;
      Now = common::tools::TimeUtils::getNow();
      v24 = (*(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->submit_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)player_home_scene_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->submit_time >> 3) + 0x7FFF8000));
      if ( (_BYTE)v24 )
      {
        Now = (_DWORD)player_home_scene_ptr + 68;
        __asan_report_store4(&player_home_scene_ptr->submit_time, (((_BYTE)player_home_scene_ptr + 68) & 7u) + 3, v24);
      }
      player_home_scene_ptr->submit_time = Now;
    }
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/player_home_comp.cpp",
      "onPostUpdateSceneArrangement",
      1887);
    v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v45, (const char (*)[11])"module_id:");
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v4 + 64));
    v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])" scene_id:");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 48));
    v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" version:");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &player_home_scene_ptr->version);
    v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v30, (const char (*)[15])" audit state: ");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v31,
            &player_home_scene_ptr->audit_state);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v32, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v45);
    PlayerHomeComp::checkResendAuditAndUpdateTimer(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "onPostUpdateSceneArrangement",
      1866);
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v45, (const char (*)[11])"module_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" scene_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" not found! ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v12, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v45);
  }
  if ( v46 == (char *)v4 )
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

// Line 1892: range 0000000017C8090E-0000000017C80B92
bool __cdecl PlayerHomeComp::isHomeBlockedByAudit(const PlayerHomeComp *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  std::map<unsigned int,PlayerHomeModule>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<unsigned int,PlayerHomeModule>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  std::map<unsigned int,PlayerHomeScene>::const_iterator __for_begin_0; // [rsp+20h] [rbp-80h] BYREF
  std::map<unsigned int,PlayerHomeScene>::const_iterator __for_end_0; // [rsp+28h] [rbp-78h] BYREF
  const std::map<unsigned int,PlayerHomeModule> *__for_range; // [rsp+30h] [rbp-70h]
  const std::pair<unsigned int const,PlayerHomeModule> *v12; // [rsp+38h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeModule> >::type *module_id; // [rsp+40h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeModule> >::type *home_module; // [rsp+48h] [rbp-58h]
  const std::map<unsigned int,PlayerHomeScene> *__for_range_0; // [rsp+50h] [rbp-50h]
  const std::pair<unsigned int const,PlayerHomeScene> *v16; // [rsp+58h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeScene> >::type *scene_id; // [rsp+60h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *home_scene; // [rsp+68h] [rbp-38h]
  common::milog::MiLogStream v19; // [rsp+70h] [rbp-30h] BYREF

  __for_range = &this->home_module_map_;
  __for_begin._M_node = std::map<unsigned int,PlayerHomeModule>::begin(&this->home_module_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,PlayerHomeModule>::end(&this->home_module_map_)._M_node;
LABEL_2:
  if ( !std::operator!=(&__for_begin, &__for_end) )
    return 0;
  v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeModule>>::operator*(&__for_begin);
  module_id = std::get<0ul,unsigned int const,PlayerHomeModule>(v12);
  home_module = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeModule> >::type *)std::get<1ul,unsigned int const,PlayerHomeModule>(v12);
  __for_range_0 = &home_module->scene_map;
  __for_begin_0._M_node = std::map<unsigned int,PlayerHomeScene>::begin(&home_module->scene_map)._M_node;
  __for_end_0._M_node = std::map<unsigned int,PlayerHomeScene>::end(__for_range_0)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeModule>>::operator++(&__for_begin);
      goto LABEL_2;
    }
    v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator*(&__for_begin_0);
    scene_id = std::get<0ul,unsigned int const,PlayerHomeScene>(v16);
    home_scene = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *)std::get<1ul,unsigned int const,PlayerHomeScene>(v16);
    if ( *(_BYTE *)(((unsigned __int64)&home_scene->audit_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&home_scene->audit_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&home_scene->audit_state);
    }
    if ( home_scene->audit_state == 1 )
      break;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/home/player_home_comp.cpp",
    "isHomeBlockedByAudit",
    1899);
  v1 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v19, (const char (*)[8])"module:");
  v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, module_id);
  v3 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v2, (const char (*)[8])" scene:");
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, scene_id);
  v5 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v4, (const char (*)[20])off_26380660);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v5, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v19);
  return 1;
};

// Line 1908: range 0000000017C80B94-0000000017C8130C
void __fastcall PlayerHomeComp::procHomeSceneArrangementAuditByMuip(
        PlayerHomeComp *const this,
        uint32_t module_id,
        uint32_t scene_id,
        uint32_t version,
        bool is_pass,
        bool is_update_timer)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  PlayerBasicComp *BasicComp; // r14
  uint64_t NowMs; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rcx
  PlayerHomeScene *player_home_scene_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v47; // [rsp+30h] [rbp-B0h] BYREF
  char v48[144]; // [rsp+50h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 4 14 module_id:1907 48 4 13 scene_id:1907 64 4 12 version:1907";
  *(_QWORD *)(v6 + 16) = PlayerHomeComp::procHomeSceneArrangementAuditByMuip;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -202116348;
  *(_DWORD *)(v6 + 32) = module_id;
  *(_DWORD *)(v6 + 48) = scene_id;
  *(_DWORD *)(v6 + 64) = version;
  v9 = *(unsigned int *)(v6 + 32);
  player_home_scene_ptr = PlayerHomeComp::findMutablePlayerHomeScene(this, v9, *(_DWORD *)(v6 + 48));
  if ( !player_home_scene_ptr )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "procHomeSceneArrangementAuditByMuip",
      1912);
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v47, (const char (*)[11])"module_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" scene_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v6 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v13,
            (const char (*)[21])" not found! is_pass:");
    v15 = common::milog::MiLogStream::operator<<(v14, is_pass);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_20:
    operator<<(v15, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v47);
    goto LABEL_30;
  }
  if ( *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->audit_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->audit_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&player_home_scene_ptr->audit_state);
  }
  if ( player_home_scene_ptr->audit_state != 1 )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/player_home_comp.cpp",
      "procHomeSceneArrangementAuditByMuip",
      1917);
    v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v47, (const char (*)[11])"module_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v6 + 32));
    v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" scene_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v6 + 48));
    v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" version:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v6 + 64));
    v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v21,
            (const char (*)[29])" not waiting audit! is_pass:");
    v15 = common::milog::MiLogStream::operator<<(v22, is_pass);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_20;
  }
  if ( is_pass )
  {
    v9 = (((_BYTE)player_home_scene_ptr + 60) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->version >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)player_home_scene_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->version >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&player_home_scene_ptr->version);
    }
    if ( player_home_scene_ptr->version != *(_DWORD *)(v6 + 64) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "procHomeSceneArrangementAuditByMuip",
        1922);
      v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v47, (const char (*)[11])"module_id:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v6 + 32));
      v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])" scene_id:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v6 + 48));
      v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])" version:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v6 + 64));
      v29 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v28, (const char (*)[5])off_263807E0);
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &player_home_scene_ptr->version);
      v31 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v30,
              (const char (*)[21])" not match! is_pass:");
      v15 = common::milog::MiLogStream::operator<<(v31, is_pass);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_20;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->audit_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&player_home_scene_ptr->audit_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&player_home_scene_ptr->audit_state, v9, &player_home_scene_ptr->audit_state);
  }
  player_home_scene_ptr->audit_state = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  NowMs = common::tools::TimeUtils::getNowMs();
  PlayerBasicComp::notifyPlayerBriefData(BasicComp, NowMs);
  common::milog::MiLogStream::create(
    &v47,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/home/player_home_comp.cpp",
    "procHomeSceneArrangementAuditByMuip",
    1927);
  v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v47, (const char (*)[11])"module_id:");
  v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v6 + 32));
  v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v35, (const char (*)[11])" scene_id:");
  v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v6 + 48));
  v38 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v37, (const char (*)[10])" version:");
  v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v6 + 64));
  v40 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v39,
          (const char (*)[22])" proc audit. is_pass:");
  v41 = common::milog::MiLogStream::operator<<(v40, is_pass);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v41, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v47);
  if ( is_update_timer )
    PlayerHomeComp::checkResendAuditAndUpdateTimer(this);
  PlayerHomeComp::notifyPriorCheckInfo(this);
LABEL_30:
  if ( v48 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1936: range 0000000017C8130E-0000000017C818EB
void __cdecl PlayerHomeComp::failHomeModulesArrangementAuditByMuip(
        PlayerHomeComp *const this,
        bool is_all_module,
        const std::set<unsigned int> *module_id_set,
        uint32_t version)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t v7; // edi
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::map<unsigned int,PlayerHomeModule>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::map<unsigned int,PlayerHomeModule>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::map<unsigned int,PlayerHomeScene>::const_iterator __for_begin_0; // [rsp+30h] [rbp-100h] BYREF
  std::map<unsigned int,PlayerHomeScene>::const_iterator __for_end_0; // [rsp+38h] [rbp-F8h] BYREF
  const std::set<unsigned int> *__for_range_1; // [rsp+40h] [rbp-F0h]
  PlayerHomeModule *player_home_module_ptr; // [rsp+48h] [rbp-E8h]
  std::map<unsigned int,PlayerHomeScene> *__for_range_2; // [rsp+50h] [rbp-E0h]
  const std::pair<unsigned int const,PlayerHomeScene> *v23; // [rsp+58h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeScene> >::type *scene_id_0; // [rsp+60h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *__0; // [rsp+68h] [rbp-C8h]
  std::map<unsigned int,PlayerHomeModule> *__for_range; // [rsp+70h] [rbp-C0h]
  const std::pair<unsigned int const,PlayerHomeModule> *v27; // [rsp+78h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeModule> >::type *module_id; // [rsp+80h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeModule> >::type *home_module; // [rsp+88h] [rbp-A8h]
  const std::map<unsigned int,PlayerHomeScene> *__for_range_0; // [rsp+90h] [rbp-A0h]
  const std::pair<unsigned int const,PlayerHomeScene> *v31; // [rsp+98h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,PlayerHomeScene> >::type *scene_id; // [rsp+A0h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *_; // [rsp+A8h] [rbp-88h]
  common::milog::MiLogStream v34; // [rsp+B0h] [rbp-80h] BYREF
  char v35[96]; // [rsp+D0h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 14 module_id:1949";
  *(_QWORD *)(v4 + 16) = PlayerHomeComp::failHomeModulesArrangementAuditByMuip;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( is_all_module )
  {
    __for_range = &this->home_module_map_;
    __for_begin._M_node = std::map<unsigned int,PlayerHomeModule>::begin(&this->home_module_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,PlayerHomeModule>::end(&this->home_module_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule>>::operator*(&__for_begin);
      module_id = std::get<0ul,unsigned int const,PlayerHomeModule>(v27);
      home_module = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeModule> >::type *)std::get<1ul,unsigned int const,PlayerHomeModule>(v27);
      __for_range_0 = &home_module->scene_map;
      __for_begin_0._M_node = std::map<unsigned int,PlayerHomeScene>::begin(&home_module->scene_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,PlayerHomeScene>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v31 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator*(&__for_begin_0);
        scene_id = std::get<0ul,unsigned int const,PlayerHomeScene>(v31);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *)std::get<1ul,unsigned int const,PlayerHomeScene>(v31);
        if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(scene_id);
        }
        v7 = *scene_id;
        if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
        {
          v7 = (unsigned int)module_id;
          __asan_report_load4(module_id);
        }
        PlayerHomeComp::procHomeSceneArrangementAuditByMuip(this, *module_id, v7, version, 0, 0);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator++(&__for_begin_0);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule>>::operator++(&__for_begin);
    }
  }
  else
  {
    __for_range_1 = module_id_set;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::begin(module_id_set)._M_node;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule> >::_Base_ptr)std::set<unsigned int>::end(module_id_set)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
    {
      v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v4 + 32) = *v9;
      player_home_module_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,PlayerHomeModule>>(
                                 &this->home_module_map_,
                                 (const std::map<unsigned int,PlayerHomeModule>::key_type *)(v4 + 32));
      if ( player_home_module_ptr )
      {
        __for_range_2 = &player_home_module_ptr->scene_map;
        __for_begin_0._M_node = std::map<unsigned int,PlayerHomeScene>::begin(&player_home_module_ptr->scene_map)._M_node;
        __for_end_0._M_node = std::map<unsigned int,PlayerHomeScene>::end(__for_range_2)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeScene> >::_Self *)&__for_begin_0,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeScene> >::_Self *)&__for_end_0) )
        {
          v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeScene> > *const)&__for_begin_0);
          scene_id_0 = std::get<0ul,unsigned int const,PlayerHomeScene>(v23);
          __0 = (std::tuple_element<1,const std::pair<unsigned int const,PlayerHomeScene> >::type *)std::get<1ul,unsigned int const,PlayerHomeScene>(v23);
          if ( *(_BYTE *)(((unsigned __int64)scene_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)scene_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id_0 >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(scene_id_0);
          }
          PlayerHomeComp::procHomeSceneArrangementAuditByMuip(this, *(_DWORD *)(v4 + 32), *scene_id_0, version, 0, 0);
          std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeScene> > *const)&__for_begin_0);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/player_home_comp.cpp",
          "failHomeModulesArrangementAuditByMuip",
          1954);
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v34, (const char (*)[11])"module_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v4 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" not exist! ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    }
  }
  PlayerHomeComp::checkResendAuditAndUpdateTimer(this);
  if ( v35 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1967: range 0000000017C818EC-0000000017C8236F
void __cdecl PlayerHomeComp::checkResendAuditAndUpdateTimer(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool v5; // r14
  common::milog::MiLogStream *v6; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int v8; // eax
  Home *v9; // rax
  const HomeSceneComp *SceneComp; // rdi
  uint32_t v11; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::tuple_element<0,std::pair<unsigned int const,PlayerHomeScene> >::type *v15; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  uint32_t v21; // esi
  __int64 v22; // rdx
  const unsigned int *v23; // rax
  unsigned int v24; // eax
  common::milog::MiLogStream *v25; // rcx
  unsigned int __u; // [rsp+14h] [rbp-17Ch] BYREF
  unsigned int __a; // [rsp+18h] [rbp-178h] BYREF
  uint32_t expire_time; // [rsp+1Ch] [rbp-174h]
  uint32_t now; // [rsp+20h] [rbp-170h]
  uint32_t check_in_seconds; // [rsp+24h] [rbp-16Ch]
  std::map<unsigned int,PlayerHomeModule>::iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::map<unsigned int,PlayerHomeModule>::iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  std::map<unsigned int,PlayerHomeScene>::iterator __for_begin_0; // [rsp+38h] [rbp-158h] BYREF
  std::map<unsigned int,PlayerHomeScene>::iterator __for_end_0; // [rsp+40h] [rbp-150h] BYREF
  std::map<unsigned int,PlayerHomeModule> *__for_range; // [rsp+48h] [rbp-148h]
  std::pair<unsigned int const,PlayerHomeModule> *__in; // [rsp+50h] [rbp-140h]
  std::tuple_element<0,std::pair<unsigned int const,PlayerHomeModule> >::type *module_id; // [rsp+58h] [rbp-138h]
  std::tuple_element<1,std::pair<unsigned int const,PlayerHomeModule> >::type *home_module; // [rsp+60h] [rbp-130h]
  std::map<unsigned int,PlayerHomeScene> *__for_range_0; // [rsp+68h] [rbp-128h]
  std::pair<unsigned int const,PlayerHomeScene> *v41; // [rsp+70h] [rbp-120h]
  std::tuple_element<0,std::pair<unsigned int const,PlayerHomeScene> >::type *scene_id; // [rsp+78h] [rbp-118h]
  std::tuple_element<1,std::pair<unsigned int const,PlayerHomeScene> >::type *home_scene; // [rsp+80h] [rbp-110h]
  std::optional<unsigned int> v44; // [rsp+88h] [rbp-108h] BYREF
  std::shared_ptr<Config> v45; // [rsp+90h] [rbp-100h] BYREF
  common::milog::MiLogStream v46; // [rsp+A0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v47; // [rsp+C0h] [rbp-D0h] BYREF
  char v48[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 18 delta_seconds:2009 64 8 18 min_delta_opt:1985 96 16 13 home_ptr:1972";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::checkResendAuditAndUpdateTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45);
  v5 = !FeatureSwitchMgr::isHomeAuditBeforeReleaseEnabled(&v4->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v45);
  if ( !v5 )
  {
    PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v1 + 96));
    if ( std::operator==<Home>(0LL, (const std::shared_ptr<Home> *)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "checkResendAuditAndUpdateTimer",
        1975);
      v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v47,
             (const char (*)[19])"my home NOT exist.");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    else
    {
      if ( common::tools::MiTimer::isActive(&this->check_audit_timer_) )
        common::tools::MiTimer::cancel(&this->check_audit_timer_);
      now = common::tools::TimeUtils::getNow();
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v45);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45);
      v8 = FeatureSwitchMgr::getHomeAuditBeforeReleaseCheckHours(&v7->feature_switch_mgr);
      check_in_seconds = SAFE_MULTIPLY<int,unsigned int>(3600, v8);
      std::shared_ptr<Config>::~shared_ptr(&v45);
      *(_QWORD *)(v1 + 64) = 0LL;
      __for_range = &this->home_module_map_;
      __for_begin._M_node = std::map<unsigned int,PlayerHomeModule>::begin(&this->home_module_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,PlayerHomeModule>::end(&this->home_module_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule>>::operator*(&__for_begin);
        module_id = std::get<0ul,unsigned int const,PlayerHomeModule>(__in);
        home_module = std::get<1ul,unsigned int const,PlayerHomeModule>(__in);
        __for_range_0 = &home_module->scene_map;
        __for_begin_0._M_node = std::map<unsigned int,PlayerHomeScene>::begin(&home_module->scene_map)._M_node;
        __for_end_0._M_node = std::map<unsigned int,PlayerHomeScene>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v41 = std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator*(&__for_begin_0);
          scene_id = std::get<0ul,unsigned int const,PlayerHomeScene>(v41);
          home_scene = std::get<1ul,unsigned int const,PlayerHomeScene>(v41);
          if ( *(_BYTE *)(((unsigned __int64)&home_scene->audit_state >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&home_scene->audit_state >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&home_scene->audit_state);
          }
          if ( home_scene->audit_state == 1 )
          {
            v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            SceneComp = Home::getSceneComp(v9);
            if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
            {
              SceneComp = (const HomeSceneComp *)scene_id;
              __asan_report_load4(scene_id);
            }
            v11 = *scene_id;
            if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3)
                                                                          + 0x7FFF8000) )
            {
              SceneComp = (const HomeSceneComp *)module_id;
              __asan_report_load4(module_id);
            }
            if ( HomeSceneComp::findSceneArrangementData(SceneComp, *module_id, v11) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&home_scene->submit_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)home_scene + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_scene->submit_time >> 3)
                                                                          + 0x7FFF8000) )
              {
                __asan_report_load4(&home_scene->submit_time);
              }
              expire_time = SAFE_ADD<unsigned int,unsigned int>(home_scene->submit_time, check_in_seconds);
              if ( now >= expire_time )
              {
                common::milog::MiLogStream::create(
                  &v47,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/home/player_home_comp.cpp",
                  "checkResendAuditAndUpdateTimer",
                  2004);
                v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v47, (const char (*)[8])"module:");
                v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, module_id);
                v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" scene:");
                v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, scene_id);
                v20 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        v19,
                        (const char (*)[31])" timeout audit. Resend audit. ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                operator<<(v20, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v47);
                if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(scene_id);
                }
                v21 = *scene_id;
                if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(module_id);
                }
                PlayerHomeComp::asyncHomeVerifyRequest(this, *module_id, v21);
                v22 = (*(_BYTE *)(((unsigned __int64)&home_scene->submit_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)home_scene + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_scene->submit_time >> 3) + 0x7FFF8000));
                if ( (_BYTE)v22 )
                  __asan_report_store4(&home_scene->submit_time, (((_BYTE)home_scene + 68) & 7u) + 3, v22);
                home_scene->submit_time = now;
                expire_time = SAFE_ADD<unsigned int,unsigned int>(now, check_in_seconds);
              }
              *(_DWORD *)(v1 + 48) = expire_time - now;
              __u = std::numeric_limits<unsigned int>::max();
              __a = std::optional<unsigned int>::value_or<unsigned int>(
                      (const std::optional<unsigned int> *const)(v1 + 64),
                      &__u);
              v23 = std::min<unsigned int>(&__a, (const unsigned int *)(v1 + 48));
              std::optional<unsigned int>::optional<unsigned int const&,true>(&v44, v23);
              *(std::optional<unsigned int> *)(v1 + 64) = v44;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/home/player_home_comp.cpp",
                "checkResendAuditAndUpdateTimer",
                1997);
              v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v46,
                      (const char (*)[41])off_26380A40);
              v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, module_id);
              v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v13,
                      (const char (*)[12])" scene_id: ");
              v15 = scene_id;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, scene_id);
              common::milog::MiLogStream::~MiLogStream(&v46);
              if ( *(_BYTE *)(((unsigned __int64)&home_scene->audit_state >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&home_scene->audit_state >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&home_scene->audit_state, v15, &home_scene->audit_state);
              }
              home_scene->audit_state = 0;
            }
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeScene>>::operator++(&__for_begin_0);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,PlayerHomeModule>>::operator++(&__for_begin);
      }
      if ( std::optional<unsigned int>::has_value((const std::optional<unsigned int> *const)(v1 + 64)) )
      {
        __a = 1;
        v24 = std::optional<unsigned int>::value_or<int>(
                (const std::optional<unsigned int> *const)(v1 + 64),
                (int *)&__a);
        if ( PlayerUnixTimer::startS(
               &this->check_audit_timer_,
               v24,
               0,
               "./src/player/home/player_home_comp.cpp",
               "checkResendAuditAndUpdateTimer",
               2015) )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/home/player_home_comp.cpp",
            "checkResendAuditAndUpdateTimer",
            2017);
          v25 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v47,
                  (const char (*)[36])"check_audit_timer_->startS failed. ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v25, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v47);
        }
      }
    }
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 96));
  }
  if ( v48 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2023: range 0000000017C82370-0000000017C8238E
void __cdecl PlayerHomeComp::onAuditCheckTimer(PlayerHomeComp *const this, uint64_t now_ms)
{
  PlayerHomeComp::checkResendAuditAndUpdateTimer(this);
};

// Line 2028: range 0000000017C82390-0000000017C824D1
uint32_t __cdecl PlayerHomeComp::getPriorCheckEndTime(PlayerHomeComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  bool v2; // r12
  uint32_t last_save_time; // ecx
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  v2 = FeatureSwitchMgr::isHomeAuditBeforeReleaseEnabled(&v1->feature_switch_mgr)
    && PlayerHomeComp::isHomeBlockedByAudit(this);
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( v2 )
    return std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_save_time_);
  }
  last_save_time = this->last_save_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->prior_check_time_);
  }
  return last_save_time + this->prior_check_time_;
};

// Line 2038: range 0000000017C824D2-0000000017C825A3
HomeWorldWoodExchangeData *__fastcall PlayerHomeComp::findHomeWorldWoodExchangeData(
        PlayerHomeComp *const this,
        uint32_t wood_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  HomeWorldWoodExchangeData *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 wood_id:2037";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::findHomeWorldWoodExchangeData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = wood_id;
  result = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,HomeWorldWoodExchangeData>>(
             &this->wood_exchange_data_map_,
             (const std::map<unsigned int,HomeWorldWoodExchangeData>::key_type *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2043: range 0000000017C825A4-0000000017C828BE
HomeWorldWoodExchangeData *__fastcall PlayerHomeComp::getHomeWorldWoodExchangeData(
        PlayerHomeComp *const this,
        uint32_t wood_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  HomeWorldWoodExchangeData *result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  std::map<unsigned int,HomeWorldWoodExchangeData>::mapped_type *v10; // rax
  __int64 v11; // rdx
  uint32_t Now; // edi
  __int64 v13; // rdx
  HomeWorldWoodExchangeData *data_ptr; // [rsp+18h] [rbp-A8h]
  const data::HomeWorldWoodExcelConfig *wood_config_ptr; // [rsp+20h] [rbp-A0h]
  HomeWorldWoodExchangeData *data; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-80h] BYREF
  char v19[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 wood_id:2042";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::getHomeWorldWoodExchangeData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = wood_id;
  data_ptr = PlayerHomeComp::findHomeWorldWoodExchangeData(this, *(_DWORD *)(v2 + 32));
  if ( data_ptr )
  {
    result = data_ptr;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    wood_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldWoodExcelConfig(
                        &v6->design_config.txt_config_mgr.home_config_mgr,
                        *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( wood_config_ptr )
    {
      v10 = std::map<unsigned int,HomeWorldWoodExchangeData>::operator[](
              &this->wood_exchange_data_map_,
              (const std::map<unsigned int,HomeWorldWoodExchangeData>::key_type *)(v2 + 32));
      data = v10;
      v11 = (*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)v10 & 7)
                                                                                                  + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000));
      if ( (_BYTE)v11 )
        __asan_report_store4(v10, ((unsigned __int8)v10 & 7u) + 3, v11);
      data->exchange_count = 0;
      Now = common::tools::TimeUtils::getNow();
      v13 = (*(_BYTE *)(((unsigned __int64)&data->last_refresh_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->last_refresh_time >> 3) + 0x7FFF8000));
      if ( (_BYTE)v13 )
      {
        Now = (_DWORD)data + 4;
        __asan_report_store4(&data->last_refresh_time, (((_BYTE)data + 4) & 7u) + 3, v13);
      }
      data->last_refresh_time = Now;
      result = data;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "getHomeWorldWoodExchangeData",
        2052);
      v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v18,
             (const char (*)[44])"findHomeWorldWoodExcelConfig fail, wood_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0LL;
    }
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2062: range 0000000017C828C0-0000000017C82B52
int32_t __cdecl PlayerHomeComp::refreshWoodExchangeData(
        PlayerHomeComp *const this,
        const data::HomeWorldWoodExcelConfig *wood_config,
        uint32_t now,
        uint32_t time_offset,
        HomeWorldWoodExchangeData *data)
{
  time_t v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned int val; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&wood_config->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&wood_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&wood_config->refresh_type);
  }
  if ( wood_config->refresh_type == HOME_WORLD_WOOD_REFRESH_WEEKLY )
  {
    v5 = now;
    if ( *(_BYTE *)(((unsigned __int64)&data->last_refresh_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->last_refresh_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data->last_refresh_time);
    }
    if ( !common::tools::TimeUtils::isSameWeek(data->last_refresh_time, v5, time_offset) )
    {
      v12 = (*(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000));
      if ( (_BYTE)v12 )
        __asan_report_store4(data, ((unsigned __int8)data & 7u) + 3, v12);
      data->exchange_count = 0;
      v13 = (*(_BYTE *)(((unsigned __int64)&data->last_refresh_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->last_refresh_time >> 3) + 0x7FFF8000));
      if ( (_BYTE)v13 )
        __asan_report_store4(&data->last_refresh_time, (((_BYTE)data + 4) & 7u) + 3, v13);
      data->last_refresh_time = now;
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/player_home_comp.cpp",
      "refreshWoodExchangeData",
      2070);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v18,
           (const char (*)[22])"invalid refresh_type:");
    if ( *(_BYTE *)(((unsigned __int64)&wood_config->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&wood_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&wood_config->refresh_type);
    }
    val = wood_config->refresh_type;
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" wood_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &wood_config->wood_id);
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return -1;
  }
};

// Line 2082: range 0000000017C82EBC-0000000017C83ED8
int32_t __cdecl PlayerHomeComp::asyncAuditHttpRequest(const proto::HomeVerifyData *verify_proto)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r15
  common::milog::MiLogStream *v6; // r14
  int v7; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  bool *p_home_verify_is_detail_log; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // r14
  __int64 v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  bool *p_home_verify_is_ssl; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::map<std::string,std::string>::mapped_type *v19; // rax
  std::remove_reference<std::string&>::type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rdx
  bool *v39; // rax
  GameserverService *v40; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  bool v42; // r14
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  int32_t result; // eax
  char *v46; // [rsp+0h] [rbp-380h]
  proto::HomeVerifyData *verify_protoa; // [rsp+8h] [rbp-378h]
  int v48; // [rsp+10h] [rbp-370h]
  int val; // [rsp+18h] [rbp-368h] BYREF
  uint32_t uid; // [rsp+1Ch] [rbp-364h]
  char *v51; // [rsp+20h] [rbp-360h]
  const std::exception *e; // [rsp+28h] [rbp-358h]
  std::string v53; // [rsp+30h] [rbp-350h] BYREF
  common::milog::MiLogStream v54; // [rsp+50h] [rbp-330h] BYREF
  char v55[784]; // [rsp+70h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v55;
  v46 = v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 22 response_callback:2158 48 4 12 options:2091 64 16 15 config_ptr:2083 96 16 18 request"
                        "_timer:2089 128 16 19 compress_timer:2113 160 32 16 json_string:2095 224 32 12 zip_str:2110 288 "
                        "32 12 msg_str:2139 352 40 15 status_ret:2098 432 240 17 http_request:2122";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::asyncAuditHttpRequest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959360;
  v4[536862733] = 62194;
  v4[536862741] = -202116109;
  v4[536862742] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  if ( std::operator==<Config>((const std::shared_ptr<Config> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/player_home_comp.cpp",
      "asyncAuditHttpRequest",
      2086);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v54, (const char (*)[17])"getConfig error.");
    common::milog::MiLogStream::~MiLogStream(&v54);
    v1 = -1;
  }
  else
  {
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
    proto::HomeVerifyData::uid(verify_proto);
    google::protobuf::util::JsonPrintOptions::JsonPrintOptions((google::protobuf::util::JsonPrintOptions *const)(v2 + 48));
    *(_BYTE *)(v2 + 49) = 1;
    *(_BYTE *)(v2 + 51) = 1;
    *(_BYTE *)(v2 + 50) = 1;
    std::string::basic_string(v2 + 160);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 128));
    google::protobuf::util::MessageToJsonString(
      (google::protobuf::util::Status *)(v2 + 352),
      &verify_proto->google::protobuf::Message,
      (int)v55,
      (void *)verify_proto,
      v48,
      val,
      (int)v51,
      e);
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/player_home_comp.cpp",
      "asyncAuditHttpRequest",
      2099);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v54,
           (const char (*)[27])"MessageToJsonString cost: ");
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 128));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v54);
    if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v2 + 352)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/player_home_comp.cpp",
        "asyncAuditHttpRequest",
        2102);
      v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[34])"MessageToJsonString fails, proto:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v54, verify_protoa);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v54);
      std::string::~string(&v54);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      v1 = -1;
      v7 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      p_home_verify_is_detail_log = &v8->home_verify_is_detail_log_;
      if ( *(_BYTE *)(((unsigned __int64)p_home_verify_is_detail_log >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_home_verify_is_detail_log & 7) >= *(_BYTE *)(((unsigned __int64)p_home_verify_is_detail_log >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(p_home_verify_is_detail_log);
      }
      if ( v8->home_verify_is_detail_log_ )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/player_home_comp.cpp",
          "asyncAuditHttpRequest",
          2107);
        v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v54, (const char (*)[7])"json: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v2 + 160));
        common::milog::MiLogStream::~MiLogStream(&v54);
      }
      v7 = 1;
    }
    google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 352));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 128));
    if ( v7 == 1 )
    {
      std::string::basic_string(v2 + 224);
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 128));
      common::tools::ZlibUtil::compress(&v53, (const std::string *)(v2 + 160), -1);
      std::string::operator=(v2 + 224, &v53);
      std::string::~string(&v53);
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "asyncAuditHttpRequest",
        2115);
      v11 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 128));
      v12 = std::string::length(v2 + 224);
      v13 = std::string::size(v2 + 160);
      common::milog::MiLogStream::operator()(
        &v54,
        "uid=%u compress before=%lu after=%lu,time_cost=%u.",
        uid,
        v13,
        v12,
        v11);
      common::milog::MiLogStream::~MiLogStream(&v54);
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 128));
      common::minet::http_client::HttpRequest::HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 432));
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      std::string::operator=(v2 + 432, &v14->home_verify_host_);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      std::string::operator=(v2 + 464, &v15->home_verify_port_);
      *(_DWORD *)(v2 + 656) = 1;
      *(_DWORD *)(v2 + 660) = 1;
      v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      p_home_verify_is_ssl = &v16->home_verify_is_ssl_;
      if ( *(_BYTE *)(((unsigned __int64)p_home_verify_is_ssl >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_home_verify_is_ssl & 7) >= *(_BYTE *)(((unsigned __int64)p_home_verify_is_ssl >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load1(p_home_verify_is_ssl);
      }
      *(_BYTE *)(v2 + 664) = v16->home_verify_is_ssl_;
      v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      std::string::operator=(v2 + 496, &v18->home_verify_uri_);
      std::allocator<char>::allocator(v2 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v54,
        "Content-Type",
        (const std::allocator<char> *)(v2 + 32));
      v19 = std::map<std::string,std::string>::operator[](
              (std::map<std::string,std::string> *const)(v2 + 528),
              (std::map<std::string,std::string>::key_type *)&v54);
      std::string::operator=(v19, "multipart/form-data; boundary=c8e177fdad615e7e98a9d255eb736f12");
      std::string::~string(&v54);
      std::allocator<char>::~allocator(v2 + 32);
      std::string::operator=(v2 + 624, "--c8e177fdad615e7e98a9d255eb736f12\r\n");
      std::string::append(v2 + 624, "Content-Disposition: form-data; name=\"file\"; filename=\"file\"\r\n\r\n");
      v20 = std::move<std::string &>((std::string *)(v2 + 224));
      std::string::append(v2 + 624, v20);
      std::string::append(v2 + 624, &off_26381360);
      std::string::basic_string(v2 + 288);
      if ( common::minet::http_client::HttpUtils::serializeHttpRequest(
             (const common::minet::http_client::HttpRequest *)(v2 + 432),
             (std::string *)(v2 + 288)) )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/home/player_home_comp.cpp",
          "asyncAuditHttpRequest",
          2142);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v54,
          (const char (*)[26])"serializeHttpRequest fail");
      }
      else
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/player_home_comp.cpp",
          "asyncAuditHttpRequest",
          2146);
        v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v54,
                (const char (*)[19])"http_request host:");
        v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, (const std::string *)(v2 + 432));
        v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])" port:");
        v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v2 + 464));
        v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uri:");
        v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, (const std::string *)(v2 + 496));
        v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" method:");
        v28 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpMethod,(common::minet::http_client::HttpMethod*)0>(
                v27,
                (const common::minet::http_client::HttpMethod *)(v2 + 656));
        v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" version:");
        v30 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpVersion,(common::minet::http_client::HttpVersion*)0>(
                v29,
                (const common::minet::http_client::HttpVersion *)(v2 + 660));
        v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" is_ssl:");
        v32 = common::milog::MiLogStream::operator<<(v31, *(_BYTE *)(v2 + 664));
        v33 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])" body:");
        v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, (const std::string *)(v2 + 624));
        v35 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v34, (const char (*)[11])" head_map:");
        v36 = common::milog::MiLogStream::operator<<<std::string,std::string>(
                v35,
                (const std::map<std::string,std::string> *)(v2 + 528));
        v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v36, (const char (*)[10])" msg_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, (const std::string *)(v2 + 288));
      }
      common::milog::MiLogStream::~MiLogStream(&v54);
      v38 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v39 = &v38->home_verify_is_detail_log_;
      if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v39 & 7) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v39);
      }
      *(_BYTE *)(v2 + 32) = v38->home_verify_is_detail_log_;
      v40 = ServiceBox::findService<GameserverService>();
      std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<PlayerHomeComp::asyncAuditHttpRequest(proto::HomeVerifyData const&)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
        (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v54,
        *(PlayerHomeComp::asyncAuditHttpRequest::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *)(v2 + 32));
      v41 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v41->home_verify_timeout_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v41->home_verify_timeout_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v41->home_verify_timeout_);
      }
      v42 = GameserverService::asyncHttpRequest(
              v40,
              (const common::minet::http_client::HttpRequest *)(v2 + 432),
              v41->home_verify_timeout_,
              3u,
              (common::minet::http_client::ResponseCallBackFunc *)&v54) != 0;
      std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v54);
      if ( v42 )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/home/player_home_comp.cpp",
          "asyncAuditHttpRequest",
          2174);
        v43 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v54,
                (const char (*)[34])"asyncHttpRequest fail, http body:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, (const std::string *)(v2 + 624));
        common::milog::MiLogStream::~MiLogStream(&v54);
      }
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "asyncAuditHttpRequest",
        2176);
      v44 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v54,
              (const char (*)[30])"asyncHomeVerifyRequest cost: ");
      val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 96));
      common::milog::MiLogStream::operator<<<int,(int *)0>(v44, &val);
      common::milog::MiLogStream::~MiLogStream(&v54);
      v1 = 0;
      std::string::~string((void *)(v2 + 288));
      common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 432));
      std::string::~string((void *)(v2 + 224));
    }
    std::string::~string((void *)(v2 + 160));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  result = v1;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 2158: range 0000000017C82B54-0000000017C82EBA
void __fastcall PlayerHomeComp::asyncAuditHttpRequest(proto::HomeVerifyData const&)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        unsigned __int64 __closure,
        common::minet::http_client::HttpRetcode http_retcode,
        common::minet::http_client::HttpRequest *http_request,
        unsigned __int64 http_response)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 val; // [rsp+28h] [rbp-88h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-80h] BYREF
  char v25[96]; // [rsp+50h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 17 http_retcode:2158";
  *(_QWORD *)(v4 + 16) = PlayerHomeComp::asyncAuditHttpRequest(proto::HomeVerifyData const&)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = http_retcode;
  if ( *(_DWORD *)(v4 + 32) )
    goto LABEL_8;
  if ( *(_BYTE *)((http_response >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((http_response >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(http_response);
  if ( *(_DWORD *)http_response != 200 )
  {
LABEL_8:
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "operator()",
      2162);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v24,
           (const char (*)[43])"asyncHomeVerifyRequest fail. http_retcode:");
    v8 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpRetcode,(common::minet::http_client::HttpRetcode*)0>(
           v7,
           (const common::minet::http_client::HttpRetcode *)(v4 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           v8,
           (const char (*)[23])" \n http_response.body:");
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
            v9,
            (const std::string *)(http_response + 56));
    v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v10,
            (const char (*)[24])" \nhttp_response.status:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)http_response);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) != 0
    && (char)(__closure & 7) >= *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__closure);
  }
  if ( *(_BYTE *)__closure )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/player_home_comp.cpp",
      "operator()",
      2167);
    v12 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v24,
            (const char (*)[56])"asyncHomeVerifyRequest response_callback: http_retcode:");
    v13 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpRetcode,(common::minet::http_client::HttpRetcode*)0>(
            v12,
            (const common::minet::http_client::HttpRetcode *)(v4 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v13,
            (const char (*)[27])" \n http_request.body size:");
    val = std::string::size(&http_request->body);
    v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, &val);
    v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v15,
            (const char (*)[24])" \nhttp_response.status:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v16,
            (const unsigned int *)http_response);
    v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v17,
            (const char (*)[26])" \nhttp_response.head_map:");
    v19 = common::milog::MiLogStream::operator<<<std::string,std::string>(
            v18,
            (const std::map<std::string,std::string> *)(http_response + 8));
    v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v19,
            (const char (*)[22])" \nhttp_response.body:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(http_response + 56));
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2181: range 0000000017C83EDA-0000000017C83EF8
void __cdecl PlayerHomeComp::onEnterMyHomeWorld(PlayerHomeComp *const this, const EnterMyHomeWorldEvent *event)
{
  PlayerHomeComp::checkResendAuditAndUpdateTimer(this);
};

// Line 2186: range 0000000017C83EFA-0000000017C84098
void __cdecl HomeBlueprintBriefData::toClient(
        const HomeBlueprintBriefData *const this,
        proto::HomeBlueprintSlotInfo *proto)
{
  proto::HomeBlueprintSlotInfo::set_share_code(proto, &this->share_code);
  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->module_id);
  }
  proto::HomeBlueprintSlotInfo::set_module_id(proto, this->module_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->scene_id);
  }
  proto::HomeBlueprintSlotInfo::set_scene_id(proto, this->scene_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->block_id);
  }
  proto::HomeBlueprintSlotInfo::set_block_id(proto, this->block_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_allow_copy >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_allow_copy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_allow_copy);
  }
  proto::HomeBlueprintSlotInfo::set_is_allow_copy(proto, this->is_allow_copy);
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->create_time);
  }
  proto::HomeBlueprintSlotInfo::set_create_time(proto, this->create_time);
};

// Line 2196: range 0000000017C8409A-0000000017C84244
void __cdecl HomeBlueprintBriefData::fromRedis(
        HomeBlueprintBriefData *const this,
        const proto::HomeBlueprintBriefRedisData *proto)
{
  const std::string *v2; // rsi
  __int64 v3; // rdx
  char v4; // al
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rdx
  char v9; // al
  bool is_allow_copy; // cl
  char v11; // dl
  __int64 v12; // rdx
  __int64 time; // rdx
  char v14; // al

  v2 = proto::HomeBlueprintBriefRedisData::share_code[abi:cxx11](proto);
  std::string::operator=(this, v2);
  v3 = proto::HomeBlueprintBriefRedisData::module_id(proto);
  v4 = *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(v2) = v4 != 0;
    __asan_report_store4(&this->module_id, v2, v3);
  }
  this->module_id = v3;
  v5 = proto::HomeBlueprintBriefRedisData::scene_id(proto);
  v6 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->scene_id, v2, v7);
  this->scene_id = v5;
  v8 = proto::HomeBlueprintBriefRedisData::block_id(proto);
  v9 = *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v2) = v9 != 0;
    __asan_report_store4(&this->block_id, v2, v8);
  }
  this->block_id = v8;
  is_allow_copy = proto::HomeBlueprintBriefRedisData::is_allow_copy(proto);
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_allow_copy >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_allow_copy, v2, v12);
  this->is_allow_copy = is_allow_copy;
  time = proto::HomeBlueprintBriefRedisData::create_time(proto);
  v14 = *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v2) = v14 != 0;
    __asan_report_store4(&this->create_time, v2, time);
  }
  this->create_time = time;
};

// Line 2206: range 0000000017C84246-0000000017C843E4
void __cdecl HomeBlueprintBriefData::toRedis(
        const HomeBlueprintBriefData *const this,
        proto::HomeBlueprintBriefRedisData *proto)
{
  proto::HomeBlueprintBriefRedisData::set_share_code(proto, &this->share_code);
  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->module_id);
  }
  proto::HomeBlueprintBriefRedisData::set_module_id(proto, this->module_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->scene_id);
  }
  proto::HomeBlueprintBriefRedisData::set_scene_id(proto, this->scene_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->block_id);
  }
  proto::HomeBlueprintBriefRedisData::set_block_id(proto, this->block_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_allow_copy >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_allow_copy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_allow_copy);
  }
  proto::HomeBlueprintBriefRedisData::set_is_allow_copy(proto, this->is_allow_copy);
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->create_time);
  }
  proto::HomeBlueprintBriefRedisData::set_create_time(proto, this->create_time);
};

// Line 2216: range 0000000017C843E6-0000000017C84629
void __cdecl PlayerHomeComp::tryInitBlueprintData(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::map<unsigned int,std::string>::mapped_type *v4; // rax
  std::unordered_map<unsigned int,data::HomeWorldBlueprintSlotExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,data::HomeWorldBlueprintSlotExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self __y; // [rsp+20h] [rbp-A0h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+28h] [rbp-98h]
  const std::unordered_map<unsigned int,data::HomeWorldBlueprintSlotExcelConfig> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<unsigned int const,data::HomeWorldBlueprintSlotExcelConfig> *v10; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,data::HomeWorldBlueprintSlotExcelConfig> >::type *slot_id; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldBlueprintSlotExcelConfig> >::type *_; // [rsp+48h] [rbp-78h]
  std::shared_ptr<Config> v13; // [rsp+50h] [rbp-70h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 9 iter:2221";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::tryInitBlueprintData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.home_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  __for_range = &home_config_mgr->home_world_blueprint_slot_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::HomeWorldBlueprintSlotExcelConfig>::begin(&home_config_mgr->home_world_blueprint_slot_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::HomeWorldBlueprintSlotExcelConfig>::end(&home_config_mgr->home_world_blueprint_slot_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldBlueprintSlotExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldBlueprintSlotExcelConfig>,false,false>::operator*(&__for_begin);
    slot_id = std::get<0ul,unsigned int const,data::HomeWorldBlueprintSlotExcelConfig>(v10);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldBlueprintSlotExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldBlueprintSlotExcelConfig>(v10);
    *(std::map<unsigned int,std::string>::iterator *)(v1 + 32) = std::map<unsigned int,std::string>::find(
                                                                   &this->blueprint_slot_share_code_map_,
                                                                   slot_id);
    __y._M_node = std::map<unsigned int,std::string>::end(&this->blueprint_slot_share_code_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v1 + 32),
           &__y) )
    {
      v4 = std::map<unsigned int,std::string>::operator[](&this->blueprint_slot_share_code_map_, slot_id);
      std::string::operator=(v4, byte_262D4440);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldBlueprintSlotExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2230: range 0000000017C8462A-0000000017C846D6
uint64_t __cdecl PlayerHomeComp::getNextBlueprintGuid(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->blueprint_guid_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blueprint_guid_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->blueprint_guid_idx_);
  }
  v1 = (unsigned __int64)++this->blueprint_guid_idx_ << 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v1 | Player::getUid(this->player_);
};

// Line 2235: range 0000000017C846D8-0000000017C84787
bool __cdecl PlayerHomeComp::isInBlueprintCreateCD(const PlayerHomeComp *const this)
{
  time_t Now; // rbx
  uint32_t last_create_blueprint_time; // r12d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool v4; // bl
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_create_blueprint_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_create_blueprint_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_create_blueprint_time_);
  }
  last_create_blueprint_time = this->last_create_blueprint_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  v4 = Now < last_create_blueprint_time
           + ConstValueExcelConfigMgr::getHomeBlueprintCreateCD(&v3->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return v4;
};

// Line 2240: range 0000000017C84788-0000000017C8483F
bool __cdecl PlayerHomeComp::isInBlueprintSetOptionCD(const PlayerHomeComp *const this)
{
  time_t Now; // rbx
  uint32_t last_set_blueprint_option_time; // r12d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool v4; // bl
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_set_blueprint_option_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_set_blueprint_option_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_set_blueprint_option_time_);
  }
  last_set_blueprint_option_time = this->last_set_blueprint_option_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  v4 = Now < last_set_blueprint_option_time
           + ConstValueExcelConfigMgr::getHomeBlueprintSetOptionCD(&v3->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return v4;
};

// Line 2245: range 0000000017C84840-0000000017C84931
std::unordered_set<std::string> *__cdecl PlayerHomeComp::getBlueprintShareCodeSet[abi:cxx11](
        std::unordered_set<std::string> *retstr,
        const PlayerHomeComp *const this)
{
  std::map<unsigned int,std::string>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,std::string>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::map<unsigned int,std::string> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,std::string > *v6; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,std::string > >::type *_; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,std::string > >::type *share_code; // [rsp+38h] [rbp-18h]

  std::unordered_set<std::string>::unordered_set(retstr);
  __for_range = &this->blueprint_slot_share_code_map_;
  __for_begin._M_node = std::map<unsigned int,std::string>::begin(&this->blueprint_slot_share_code_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::string>::end(&this->blueprint_slot_share_code_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::string>(v6);
    share_code = (std::tuple_element<1,const std::pair<unsigned int const,std::string > >::type *)std::get<1ul,unsigned int const,std::string>(v6);
    if ( (unsigned __int8)std::string::empty(share_code) != 1 )
      std::unordered_set<std::string>::insert(retstr, share_code);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 2258: range 0000000017C84932-0000000017C84CAC
void __cdecl PlayerHomeComp::fillBlueprintSlotInfo(
        const PlayerHomeComp *const this,
        proto::HomeGetBlueprintSlotInfoRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__detail::_Node_const_iterator<std::pair<const std::string,HomeBlueprintBriefData>,false,true>::pointer v8; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  std::map<unsigned int,std::string>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::map<unsigned int,std::string>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,HomeBlueprintBriefData>,true> __y; // [rsp+30h] [rbp-C0h] BYREF
  const std::map<unsigned int,std::string> *__for_range; // [rsp+38h] [rbp-B8h]
  const std::pair<unsigned int const,std::string > *v14; // [rsp+40h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::string > >::type *slot_id; // [rsp+48h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::string > >::type *share_code; // [rsp+50h] [rbp-A0h]
  proto::HomeBlueprintSlotInfo *slot_info; // [rsp+58h] [rbp-98h]
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-90h] BYREF
  char v19[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:2267";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::fillBlueprintSlotInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  __for_range = &this->blueprint_slot_share_code_map_;
  __for_begin._M_node = std::map<unsigned int,std::string>::begin(&this->blueprint_slot_share_code_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::string>::end(&this->blueprint_slot_share_code_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string>>::operator*(&__for_begin);
    slot_id = std::get<0ul,unsigned int const,std::string>(v14);
    share_code = (std::tuple_element<1,const std::pair<unsigned int const,std::string > >::type *)std::get<1ul,unsigned int const,std::string>(v14);
    slot_info = proto::HomeGetBlueprintSlotInfoRsp::add_slot_info_list(rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)slot_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)slot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)slot_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(slot_id);
    }
    proto::HomeBlueprintSlotInfo::set_slot_id(slot_info, *slot_id);
    if ( !(unsigned __int8)std::string::empty(share_code) )
    {
      *(std::unordered_map<std::string,HomeBlueprintBriefData>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,HomeBlueprintBriefData>::find(
                                                                                               &this->blueprint_share_code_brief_data_map_,
                                                                                               share_code);
      __y._M_cur = std::unordered_map<std::string,HomeBlueprintBriefData>::end(&this->blueprint_share_code_brief_data_map_)._M_cur;
      if ( std::__detail::operator==<std::pair<std::string const,HomeBlueprintBriefData>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,HomeBlueprintBriefData>,true> *)(v2 + 32),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/home/player_home_comp.cpp",
          "fillBlueprintSlotInfo",
          2270);
        v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v18,
               (const char (*)[51])"[HOME_BLUEPRINT] not found brief data, share_code:");
        v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, share_code);
        v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        v8 = std::__detail::_Node_const_iterator<std::pair<std::string const,HomeBlueprintBriefData>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,HomeBlueprintBriefData>,false,true> *const)(v2 + 32));
        HomeBlueprintBriefData::toClient(&v8->second, slot_info);
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string>>::operator++(&__for_begin);
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2278: range 0000000017C84CAE-0000000017C851B7
int32_t __cdecl PlayerHomeComp::handleGetBlueprintSlotInfoReq(PlayerHomeComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  int32_t v5; // r14d
  int32_t result; // eax
  bool is_need_fetch; // [rsp+1Bh] [rbp-1C5h]
  unsigned int val; // [rsp+1Ch] [rbp-1C4h] BYREF
  std::unordered_set<std::string>::iterator __for_begin; // [rsp+20h] [rbp-1C0h] BYREF
  std::unordered_set<std::string>::iterator __for_end; // [rsp+28h] [rbp-1B8h] BYREF
  std::unordered_set<std::string> *__for_range; // [rsp+30h] [rbp-1B0h]
  const std::string *share_code; // [rsp+38h] [rbp-1A8h]
  std::unordered_set<std::string> *__for_range_0; // [rsp+40h] [rbp-1A0h]
  const std::string *share_code_0; // [rsp+48h] [rbp-198h]
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-190h] BYREF
  char v16[368]; // [rsp+70h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 48 15 server_req:2293 112 56 19 share_code_set:2280 208 72 8 rsp:2309";
  *(_QWORD *)(v1 + 16) = PlayerHomeComp::handleGetBlueprintSlotInfoReq;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862725] = -218959360;
  v3[536862726] = 62194;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  is_need_fetch = 0;
  PlayerHomeComp::getBlueprintShareCodeSet[abi:cxx11]((std::unordered_set<std::string> *)(v1 + 112), this);
  __for_range = (std::unordered_set<std::string> *)(v1 + 112);
  __for_begin._M_cur = std::unordered_set<std::string>::begin((std::unordered_set<std::string> *const)(v1 + 112))._M_cur;
  __for_end._M_cur = std::unordered_set<std::string>::end((std::unordered_set<std::string> *const)(v1 + 112))._M_cur;
  while ( std::__detail::operator!=<std::string,true>(&__for_begin, &__for_end) )
  {
    share_code = std::__detail::_Node_iterator<std::string,true,true>::operator*(&__for_begin);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,HomeBlueprintBriefData>,std::string>(
            &this->blueprint_share_code_brief_data_map_,
            share_code) )
    {
      is_need_fetch = 1;
      break;
    }
    std::__detail::_Node_iterator<std::string,true,true>::operator++(&__for_begin);
  }
  if ( is_need_fetch )
  {
    proto::ServerHomeGetBlueprintBriefDataReq::ServerHomeGetBlueprintBriefDataReq((proto::ServerHomeGetBlueprintBriefDataReq *const)(v1 + 32));
    proto::ServerHomeGetBlueprintBriefDataReq::set_reason(
      (proto::ServerHomeGetBlueprintBriefDataReq *const)(v1 + 32),
      HOME_GET_BLUEPRINT_BRIEF_REASON_FETCH);
    __for_range_0 = (std::unordered_set<std::string> *)(v1 + 112);
    __for_begin._M_cur = std::unordered_set<std::string>::begin((std::unordered_set<std::string> *const)(v1 + 112))._M_cur;
    __for_end._M_cur = std::unordered_set<std::string>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::string,true>(&__for_begin, &__for_end) )
    {
      share_code_0 = std::__detail::_Node_iterator<std::string,true,true>::operator*(&__for_begin);
      proto::ServerHomeGetBlueprintBriefDataReq::add_share_code_list(
        (proto::ServerHomeGetBlueprintBriefDataReq *const)(v1 + 32),
        share_code_0);
      std::__detail::_Node_iterator<std::string,true,true>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( sendProtoToActivityService<proto::ServerHomeGetBlueprintBriefDataReq>(
           this->player_,
           (proto::ServerHomeGetBlueprintBriefDataReq *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "handleGetBlueprintSlotInfoReq",
        2302);
      v4 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             &v15,
             (const char (*)[57])"[HOME_BLUEPRINT] sendProtoToActivityService failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    proto::ServerHomeGetBlueprintBriefDataReq::~ServerHomeGetBlueprintBriefDataReq((proto::ServerHomeGetBlueprintBriefDataReq *const)(v1 + 32));
  }
  else
  {
    proto::HomeGetBlueprintSlotInfoRsp::HomeGetBlueprintSlotInfoRsp((proto::HomeGetBlueprintSlotInfoRsp *const)(v1 + 208));
    proto::HomeGetBlueprintSlotInfoRsp::set_retcode((proto::HomeGetBlueprintSlotInfoRsp *const)(v1 + 208), 0);
    PlayerHomeComp::fillBlueprintSlotInfo(this, (proto::HomeGetBlueprintSlotInfoRsp *)(v1 + 208));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 208));
    v5 = 0;
    proto::HomeGetBlueprintSlotInfoRsp::~HomeGetBlueprintSlotInfoRsp((proto::HomeGetBlueprintSlotInfoRsp *const)(v1 + 208));
  }
  std::unordered_set<std::string>::~unordered_set((std::unordered_set<std::string> *const)(v1 + 112));
  result = v5;
  if ( v16 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2318: range 0000000017C851B8-0000000017C85AEC
int32_t __cdecl PlayerHomeComp::onServerHomeGetBlueprintBriefDataRsp(
        PlayerHomeComp *const this,
        const proto::ServerHomeGetBlueprintBriefDataRsp *server_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  int32_t v8; // r14d
  HomeBlueprintBriefData *v9; // r14
  HomeBlueprintBriefData *v10; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-20Ch] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_begin; // [rsp+18h] [rbp-208h] BYREF
  google::protobuf::RepeatedPtrField<std::string >::const_iterator __for_end; // [rsp+20h] [rbp-200h] BYREF
  const google::protobuf::RepeatedPtrField<std::string > *__for_range; // [rsp+28h] [rbp-1F8h]
  const google::protobuf::RepeatedPtrField<proto::HomeBlueprintBriefRedisData> *__for_range_0; // [rsp+30h] [rbp-1F0h]
  std::map<unsigned int,std::string> *__for_range_1; // [rsp+38h] [rbp-1E8h]
  std::pair<unsigned int const,std::string > *__in; // [rsp+40h] [rbp-1E0h]
  std::tuple_element<0,std::pair<unsigned int const,std::string > >::type *slot_id; // [rsp+48h] [rbp-1D8h]
  std::tuple_element<1,std::pair<unsigned int const,std::string > >::type *share_code_1; // [rsp+50h] [rbp-1D0h]
  const proto::HomeBlueprintBriefRedisData *server_data; // [rsp+58h] [rbp-1C8h]
  const std::string *share_code_0; // [rsp+60h] [rbp-1C0h]
  const std::string *share_code; // [rsp+68h] [rbp-1B8h]
  common::milog::MiLogStream v31; // [rsp+70h] [rbp-1B0h] BYREF
  char v32[400]; // [rsp+90h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 retcode:2325 48 56 27 invalid_share_code_set:2329 144 56 15 brief_data:2340 240 72 8 rsp:2326";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::onServerHomeGetBlueprintBriefDataRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  if ( proto::ServerHomeGetBlueprintBriefDataRsp::reason(server_rsp) == HOME_GET_BLUEPRINT_BRIEF_REASON_FETCH )
  {
    *(_DWORD *)(v2 + 32) = proto::ServerHomeGetBlueprintBriefDataRsp::retcode(server_rsp);
    proto::HomeGetBlueprintSlotInfoRsp::HomeGetBlueprintSlotInfoRsp((proto::HomeGetBlueprintSlotInfoRsp *const)(v2 + 240));
    if ( *(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "onServerHomeGetBlueprintBriefDataRsp",
        2360);
      v15 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v31,
              (const char (*)[59])"[HOME_BLUEPRINT] get blueprint brief data failed, retcode:");
      v16 = common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v2 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    else
    {
      std::unordered_set<std::string>::unordered_set((std::unordered_set<std::string> *const)(v2 + 48));
      __for_range = proto::ServerHomeGetBlueprintBriefDataRsp::share_code_list[abi:cxx11](server_rsp);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<std::string>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<std::string>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator!=(&__for_begin, &__for_end) )
      {
        share_code = google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator*(&__for_begin);
        std::unordered_set<std::string>::insert((std::unordered_set<std::string> *const)(v2 + 48), share_code);
        google::protobuf::internal::RepeatedPtrIterator<std::string const>::operator++(&__for_begin);
      }
      std::unordered_map<std::string,HomeBlueprintBriefData>::clear(&this->blueprint_share_code_brief_data_map_);
      __for_range_0 = proto::ServerHomeGetBlueprintBriefDataRsp::brief_data_list(server_rsp);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlueprintBriefRedisData>::begin(__for_range_0).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlueprintBriefRedisData>::end(__for_range_0).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlueprintBriefRedisData const>::operator!=(
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlueprintBriefRedisData> *const)&__for_begin,
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlueprintBriefRedisData>::iterator *)&__for_end) )
      {
        server_data = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlueprintBriefRedisData const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlueprintBriefRedisData> *const)&__for_begin);
        share_code_0 = proto::HomeBlueprintBriefRedisData::share_code[abi:cxx11](server_data);
        std::unordered_set<std::string>::erase((std::unordered_set<std::string> *const)(v2 + 48), share_code_0);
        HomeBlueprintBriefData::HomeBlueprintBriefData((HomeBlueprintBriefData *const)(v2 + 144));
        HomeBlueprintBriefData::fromRedis((HomeBlueprintBriefData *const)(v2 + 144), server_data);
        v9 = std::move<HomeBlueprintBriefData &>((HomeBlueprintBriefData *)(v2 + 144));
        v10 = std::unordered_map<std::string,HomeBlueprintBriefData>::operator[](
                &this->blueprint_share_code_brief_data_map_,
                share_code_0);
        HomeBlueprintBriefData::operator=(v10, v9);
        HomeBlueprintBriefData::~HomeBlueprintBriefData((HomeBlueprintBriefData *const)(v2 + 144));
        google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlueprintBriefRedisData const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeBlueprintBriefRedisData> *const)&__for_begin);
      }
      __for_range_1 = &this->blueprint_slot_share_code_map_;
      __for_begin.it_ = (void *const *)std::map<unsigned int,std::string>::begin(&this->blueprint_slot_share_code_map_)._M_node;
      __for_end.it_ = (void *const *)std::map<unsigned int,std::string>::end(__for_range_1)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)&__for_begin,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)&__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)&__for_begin);
        slot_id = std::get<0ul,unsigned int const,std::string>(__in);
        share_code_1 = std::get<1ul,unsigned int const,std::string>(__in);
        if ( (unsigned __int8)std::string::empty(share_code_1) != 1
          && common::tools::MiscUtils::isContains<std::unordered_set<std::string>,std::string>(
               (std::unordered_set<std::string> *)(v2 + 48),
               share_code_1) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/home/player_home_comp.cpp",
            "onServerHomeGetBlueprintBriefDataRsp",
            2350);
          v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v31,
                  (const char (*)[44])"[HOME_BLUEPRINT] delete invalid share code:");
          v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, share_code_1);
          v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v31);
          if ( *(_BYTE *)(((unsigned __int64)slot_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)slot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)slot_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(slot_id);
          }
          PlayerHomeComp::logHomeDeleteBlueprint(this, *slot_id, share_code_1, 2u);
          std::string::operator=(share_code_1, byte_262D4440);
          if ( *(_BYTE *)(((unsigned __int64)slot_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)slot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)slot_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(slot_id);
          }
          proto::HomeGetBlueprintSlotInfoRsp::add_delete_slot_id_list(
            (proto::HomeGetBlueprintSlotInfoRsp *const)(v2 + 240),
            *slot_id);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)&__for_begin);
      }
      PlayerHomeComp::fillBlueprintSlotInfo(this, (proto::HomeGetBlueprintSlotInfoRsp *)(v2 + 240));
      std::unordered_set<std::string>::~unordered_set((std::unordered_set<std::string> *const)(v2 + 48));
    }
    proto::HomeGetBlueprintSlotInfoRsp::set_retcode(
      (proto::HomeGetBlueprintSlotInfoRsp *const)(v2 + 240),
      *(_DWORD *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 240));
    v8 = *(_DWORD *)(v2 + 32);
    proto::HomeGetBlueprintSlotInfoRsp::~HomeGetBlueprintSlotInfoRsp((proto::HomeGetBlueprintSlotInfoRsp *const)(v2 + 240));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "onServerHomeGetBlueprintBriefDataRsp",
      2321);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v31,
           (const char (*)[31])"[HOME_BLUEPRINT] error reason:");
    *(_DWORD *)(v2 + 32) = proto::ServerHomeGetBlueprintBriefDataRsp::reason(server_rsp);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v8 = -1;
  }
  result = v8;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 2368: range 0000000017C85AEE-0000000017C86133
__int64 __fastcall PlayerHomeComp::handleSetBlueprintSlotOptionReq(
        PlayerHomeComp *const this,
        uint32_t slot_id,
        bool is_allow_copy)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int v9; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,HomeBlueprintBriefData>,false,true>::pointer v13; // rax
  uint32_t Uid; // eax
  common::milog::MiLogStream *v15; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-12Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self __y; // [rsp+18h] [rbp-128h] BYREF
  const std::string *share_code; // [rsp+20h] [rbp-120h]
  proto::HomeBlueprintBriefRedisData *brief_data; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-110h] BYREF
  char v23[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 slot_id:2367 64 8 14 slot_iter:2369 96 8 15 brief_iter:2382 128 32 15 server_req:2390";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::handleSetBlueprintSlotOptionReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = slot_id;
  *(std::map<unsigned int,std::string>::iterator *)(v3 + 64) = std::map<unsigned int,std::string>::find(
                                                                 &this->blueprint_slot_share_code_map_,
                                                                 (const std::map<unsigned int,std::string>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::string>::end(&this->blueprint_slot_share_code_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "handleSetBlueprintSlotOptionReq",
      2372);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v22,
           (const char (*)[34])"[HOME_BLUEPRINT] invalid slot_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v9 = -1;
    goto LABEL_24;
  }
  v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)(v3 + 64));
  if ( (unsigned __int8)std::string::empty(&v10->second) )
  {
    v9 = 9805;
  }
  else
  {
    share_code = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)(v3 + 64))->second;
    *(std::unordered_map<std::string,HomeBlueprintBriefData>::iterator *)(v3 + 96) = std::unordered_map<std::string,HomeBlueprintBriefData>::find(
                                                                                       &this->blueprint_share_code_brief_data_map_,
                                                                                       share_code);
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Base_ptr)std::unordered_map<std::string,HomeBlueprintBriefData>::end(&this->blueprint_share_code_brief_data_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<std::string const,HomeBlueprintBriefData>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,HomeBlueprintBriefData>,true> *)(v3 + 96),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,HomeBlueprintBriefData>,true> *)&__y) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "handleSetBlueprintSlotOptionReq",
        2385);
      v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v22,
              (const char (*)[51])"[HOME_BLUEPRINT] not found brief data, share_code:");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, share_code);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_7;
    }
    proto::ServerHomeUpdateBlueprintBriefDataReq::ServerHomeUpdateBlueprintBriefDataReq((proto::ServerHomeUpdateBlueprintBriefDataReq *const)(v3 + 128));
    proto::ServerHomeUpdateBlueprintBriefDataReq::set_slot_id(
      (proto::ServerHomeUpdateBlueprintBriefDataReq *const)(v3 + 128),
      *(_DWORD *)(v3 + 48));
    brief_data = proto::ServerHomeUpdateBlueprintBriefDataReq::mutable_brief_data((proto::ServerHomeUpdateBlueprintBriefDataReq *const)(v3 + 128));
    v13 = std::__detail::_Node_iterator<std::pair<std::string const,HomeBlueprintBriefData>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,HomeBlueprintBriefData>,false,true> *const)(v3 + 96));
    HomeBlueprintBriefData::toRedis(&v13->second, brief_data);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    proto::HomeBlueprintBriefRedisData::set_owner_uid(brief_data, Uid);
    proto::HomeBlueprintBriefRedisData::set_is_allow_copy(brief_data, is_allow_copy);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( sendProtoToActivityService<proto::ServerHomeUpdateBlueprintBriefDataReq>(
           this->player_,
           (proto::ServerHomeUpdateBlueprintBriefDataReq *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "handleSetBlueprintSlotOptionReq",
        2398);
      v15 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v22,
              (const char (*)[57])"[HOME_BLUEPRINT] sendProtoToActivityService failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v9 = -1;
    }
    else
    {
      PlayerHomeComp::updateBlueprintSetOptionCD(this);
      v9 = 0;
    }
    proto::ServerHomeUpdateBlueprintBriefDataReq::~ServerHomeUpdateBlueprintBriefDataReq((proto::ServerHomeUpdateBlueprintBriefDataReq *const)(v3 + 128));
  }
LABEL_24:
  result = v9;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2409: range 0000000017C86134-0000000017C868EA
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerHomeComp::onServerHomeUpdateBlueprintBriefDataRsp(
        PlayerHomeComp *const this,
        const proto::ServerHomeUpdateBlueprintBriefDataRsp *server_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::uint32 v5; // eax
  std::__detail::_Node_iterator<std::pair<const std::string,HomeBlueprintBriefData>,false,true>::pointer v6; // rax
  bool is_allow_copy; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  google::protobuf::uint32 v13; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  bool v16; // al
  Player *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t v23; // r14d
  int32_t result; // eax
  std::string server_rspa; // [rsp+0h] [rbp-160h] OVERLAPPED BYREF
  const proto::HomeBlueprintBriefRedisData *brief_data; // [rsp+20h] [rbp-140h]
  const std::string *share_code; // [rsp+28h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-110h] BYREF
  char v31[240]; // [rsp+70h] [rbp-F0h] BYREF

  server_rspa._M_string_length = (std::string::size_type)this;
  server_rspa._M_dataplus._M_p = (std::string::pointer)server_rsp;
  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 23 log_context_holder:2431 48 4 12 retcode:2410 64 8 9 iter:2418 96 16 12 log_ptr:2432 128 32 8 rsp:2411";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::onServerHomeUpdateBlueprintBriefDataRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = proto::ServerHomeUpdateBlueprintBriefDataRsp::retcode((const proto::ServerHomeUpdateBlueprintBriefDataRsp *const)server_rspa._M_dataplus._M_p);
  proto::HomeSetBlueprintSlotOptionRsp::HomeSetBlueprintSlotOptionRsp((proto::HomeSetBlueprintSlotOptionRsp *const)(v2 + 128));
  v5 = proto::ServerHomeUpdateBlueprintBriefDataRsp::slot_id((const proto::ServerHomeUpdateBlueprintBriefDataRsp *const)server_rspa._M_dataplus._M_p);
  proto::HomeSetBlueprintSlotOptionRsp::set_slot_id((proto::HomeSetBlueprintSlotOptionRsp *const)(v2 + 128), v5);
  brief_data = proto::ServerHomeUpdateBlueprintBriefDataRsp::brief_data((const proto::ServerHomeUpdateBlueprintBriefDataRsp *const)server_rspa._M_dataplus._M_p);
  share_code = proto::HomeBlueprintBriefRedisData::share_code[abi:cxx11](brief_data);
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( *(_DWORD *)(v2 + 48) == 9803 )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "onServerHomeUpdateBlueprintBriefDataRsp",
        2440);
      v18 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
              &v30,
              (const char (*)[68])"[HOME_BLUEPRINT] update blueprint brief data not exist, share_code:");
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, share_code);
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((server_rspa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "onServerHomeUpdateBlueprintBriefDataRsp",
        2444);
      v21 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              &v30,
              (const char (*)[62])"[HOME_BLUEPRINT] update blueprint brief data failed, retcode:");
      v22 = common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v2 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((server_rspa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    HIDWORD(server_rspa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(server_rspa._M_string_length
                                                                                               + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v20,
      (const unsigned int *)&server_rspa._anon_0._M_allocated_capacity + 1);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    *(std::unordered_map<std::string,HomeBlueprintBriefData>::iterator *)(v2 + 64) = std::unordered_map<std::string,HomeBlueprintBriefData>::find(
                                                                                       (std::unordered_map<std::string,HomeBlueprintBriefData> *const)(server_rspa._M_string_length + 944),
                                                                                       share_code);
    *((std::unordered_map<std::string,HomeBlueprintBriefData>::iterator *)&server_rspa._anon_0._M_allocated_capacity + 1) = std::unordered_map<std::string,HomeBlueprintBriefData>::end((std::unordered_map<std::string,HomeBlueprintBriefData> *const)(server_rspa._M_string_length + 944));
    if ( std::__detail::operator!=<std::pair<std::string const,HomeBlueprintBriefData>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,HomeBlueprintBriefData>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,HomeBlueprintBriefData>,true> *)&server_rspa._anon_0._M_allocated_capacity
         + 1) )
    {
      v6 = std::__detail::_Node_iterator<std::pair<std::string const,HomeBlueprintBriefData>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,HomeBlueprintBriefData>,false,true> *const)(v2 + 64));
      HomeBlueprintBriefData::fromRedis(&v6->second, brief_data);
      is_allow_copy = proto::HomeBlueprintBriefRedisData::is_allow_copy(brief_data);
      proto::HomeSetBlueprintSlotOptionRsp::set_is_allow_copy(
        (proto::HomeSetBlueprintSlotOptionRsp *const)(v2 + 128),
        is_allow_copy);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "onServerHomeUpdateBlueprintBriefDataRsp",
        2427);
      v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v30,
             (const char (*)[51])"[HOME_BLUEPRINT] not found brief data, share_code:");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, share_code);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((server_rspa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      HIDWORD(server_rspa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(server_rspa._M_string_length
                                                                                                 + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v10,
        (const unsigned int *)&server_rspa._anon_0._M_allocated_capacity + 1);
      common::milog::MiLogStream::~MiLogStream(&v30);
      *(_DWORD *)(v2 + 48) = -1;
    }
    if ( *(_BYTE *)(((server_rspa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(*(Player *const *)(server_rspa._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v30, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xE91u, server_rspa);
    std::string::~string(&v30);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy>();
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v13 = proto::ServerHomeUpdateBlueprintBriefDataRsp::slot_id((const proto::ServerHomeUpdateBlueprintBriefDataRsp *const)server_rspa._M_dataplus._M_p);
    proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy::set_slot_id(v12, v13);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy::set_share_code(v14, share_code);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v16 = proto::HomeBlueprintBriefRedisData::is_allow_copy(brief_data);
    proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy::set_is_allow_copy(v15, v16);
    if ( *(_BYTE *)(((server_rspa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = *(Player **)(server_rspa._M_string_length + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy> *)(v2 + 96));
    Player::printStatLog(v17, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeBlueprintSetAllowCopy> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  proto::HomeSetBlueprintSlotOptionRsp::set_retcode(
    (proto::HomeSetBlueprintSlotOptionRsp *const)(v2 + 128),
    *(_DWORD *)(v2 + 48));
  if ( *(_BYTE *)(((server_rspa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(
    *(Player *const *)(server_rspa._M_string_length + 24),
    (const google::protobuf::Message *)(v2 + 128));
  v23 = *(_DWORD *)(v2 + 48);
  proto::HomeSetBlueprintSlotOptionRsp::~HomeSetBlueprintSlotOptionRsp((proto::HomeSetBlueprintSlotOptionRsp *const)(v2 + 128));
  result = v23;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2452: range 0000000017C868EC-0000000017C86A05
const HomeBlueprintBriefData *__cdecl PlayerHomeComp::getHomeBlueprintBriefData(
        const PlayerHomeComp *const this,
        const std::string *share_code)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const HomeBlueprintBriefData *result; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,HomeBlueprintBriefData>,true> __y; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:2453";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::getHomeBlueprintBriefData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,HomeBlueprintBriefData>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,HomeBlueprintBriefData>::find(
                                                                                           &this->blueprint_share_code_brief_data_map_,
                                                                                           share_code);
  __y._M_cur = std::unordered_map<std::string,HomeBlueprintBriefData>::end(&this->blueprint_share_code_brief_data_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<std::string const,HomeBlueprintBriefData>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,HomeBlueprintBriefData>,true> *)(v2 + 32),
         &__y) )
  {
    result = &std::__detail::_Node_const_iterator<std::pair<std::string const,HomeBlueprintBriefData>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,HomeBlueprintBriefData>,false,true> *const)(v2 + 32))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2462: range 0000000017C8704E-0000000017C88A74
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerHomeComp::handleCreateBlueprintReq(
        PlayerHomeComp *const this,
        common::minet::PacketPtr *p_packet_ptr,
        proto::HomeCreateBlueprintReq *req)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::pointer v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::pointer v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  Home *v18; // rax
  Home *v19; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  HomeModuleData *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v39; // rsi
  common::minet::Packet *v40; // rax
  unsigned __int64 NextBlueprintGuid; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  bool is_word_filter_use_remote; // r14
  Player *player; // r14
  const std::string *v45; // rax
  GameserverService *v46; // r14
  const std::shared_ptr<common::minet::Packet> *v47; // rsi
  __suseconds_t v48; // rdx
  common::minet::PacketPtr v49; // rdi
  common::minet::Packet *v50; // rax
  common::minet::Packet *v51; // rax
  common::minet::PacketPtr v52; // rdi
  common::minet::Packet *v53; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v54; // rsi
  common::minet::Packet *v55; // rax
  common::milog::MiLogStream *v56; // r14
  const std::string *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  bool v63; // r14
  common::milog::MiLogStream *v64; // r14
  const std::string *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  unsigned __int64 v69; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rax
  bool v71; // r14
  Player *v72; // r14
  const std::string *v73; // rax
  GameserverService *v74; // r14
  const std::shared_ptr<common::minet::Packet> *v75; // rsi
  __suseconds_t v76; // rdx
  common::minet::PacketPtr v77; // rdi
  common::minet::Packet *v78; // rax
  common::minet::Packet *v79; // rax
  common::minet::PacketPtr v80; // rdi
  common::minet::Packet *v81; // rax
  uint32_t Uid; // eax
  google::protobuf::uint32 Now; // eax
  const proto::HomeSceneArrangementInfo *v84; // rax
  common::milog::MiLogStream *v85; // r14
  uint32_t v86; // r14d
  Home *v87; // rsi
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-368h] BYREF
  uint32_t block_id; // [rsp+2Ch] [rbp-364h]
  unsigned int word_filter_action_type; // [rsp+30h] [rbp-360h]
  uint32_t gen_share_code_count; // [rsp+34h] [rbp-35Ch]
  uint32_t async_http_type_0; // [rsp+38h] [rbp-358h]
  int32_t ret_0; // [rsp+3Ch] [rbp-354h]
  uint32_t async_http_type; // [rsp+40h] [rbp-350h]
  int32_t ret; // [rsp+44h] [rbp-34Ch]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self __y; // [rsp+48h] [rbp-348h] BYREF
  const proto::HomeSceneArrangementInfo *scene_arrangement_info; // [rsp+50h] [rbp-340h]
  HomeSceneData *scene_data_ptr; // [rsp+58h] [rbp-338h]
  const proto::HomeBlockArrangementInfo *block_info; // [rsp+60h] [rbp-330h]
  const std::string *share_code; // [rsp+68h] [rbp-328h]
  proto::HomeBlueprintBriefRedisData *brief_data; // [rsp+70h] [rbp-320h]
  proto::HomeBlueprintDetailRedisData *detail_data; // [rsp+78h] [rbp-318h]
  std::shared_ptr<Config> v105; // [rsp+80h] [rbp-310h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+90h] [rbp-300h] BYREF
  PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> v107; // [rsp+A0h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v108; // [rsp+C0h] [rbp-2D0h] BYREF
  char v109[688]; // [rsp+E0h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v109;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 4 12 slot_id:2472 48 4 14 module_id:2486 64 4 13 scene_id:2493 80 4 15 block_size:2506 96 "
                        "8 9 iter:2473 128 16 19 home_world_ptr:2463 160 16 13 home_ptr:2464 192 16 20 module_data_ptr:24"
                        "87 224 16 10 timer:2548 256 40 15 server_req:2562 336 240 13 http_req:2548";
  *(_QWORD *)(v3 + 16) = PlayerHomeComp::handleCreateBlueprintReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862729] = -218959360;
  v5[536862730] = 62194;
  v5[536862738] = -202116109;
  v5[536862739] = -202116109;
  std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)(v3 + 128), 0LL);
  std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v3 + 160), 0LL);
  PlayerHomeComp::getCurHomeWorldAndHome(this, (HomeWorldPtr *)(v3 + 128), (HomePtr *)(v3 + 160));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v108,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "handleCreateBlueprintReq",
      2468);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v108,
           (const char (*)[53])"[HOME_BLUEPRINT] getCurHomeWorldAndHome failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v108);
    v7 = -1;
    goto LABEL_75;
  }
  *(_DWORD *)(v3 + 32) = proto::HomeCreateBlueprintReq::slot_id(req);
  *(std::map<unsigned int,std::string>::iterator *)(v3 + 96) = std::map<unsigned int,std::string>::find(
                                                                 &this->blueprint_slot_share_code_map_,
                                                                 (const std::map<unsigned int,std::string>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,std::string>::end(&this->blueprint_slot_share_code_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v108,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "handleCreateBlueprintReq",
      2476);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v108,
           (const char (*)[34])"[HOME_BLUEPRINT] invalid slot_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v108);
    v7 = -1;
    goto LABEL_75;
  }
  v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)(v3 + 96));
  if ( (unsigned __int8)std::string::empty(&v11->second) == 1 )
  {
    scene_arrangement_info = proto::HomeCreateBlueprintReq::scene_arrangement_info(req);
    v18 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    *(_DWORD *)(v3 + 48) = Home::getCurModuleId(v18);
    v19 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    SceneComp = (unsigned int)Home::getSceneComp(v19);
    HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v3 + 192), SceneComp);
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 192), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v108,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "handleCreateBlueprintReq",
        2490);
      v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v108,
              (const char (*)[52])"[HOME_BLUEPRINT] getHomeModuleData fail, module_id:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
      v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" home_uid:");
      v24 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      *(_DWORD *)(v3 + 80) = Home::getHomeUid(v24);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 80));
      v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      *(_DWORD *)(v3 + 64) = proto::HomeSceneArrangementInfo::scene_id(scene_arrangement_info);
      v27 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      scene_data_ptr = HomeModuleData::findHomeSceneData(v27, *(_DWORD *)(v3 + 64));
      if ( scene_data_ptr )
      {
        block_id = 0;
        if ( HomeSceneData::getSceneType(scene_data_ptr) == SCENE_HOME_WORLD )
        {
          *(_DWORD *)(v3 + 80) = proto::HomeSceneArrangementInfo::block_arrangement_info_list_size(scene_arrangement_info);
          if ( *(_DWORD *)(v3 + 80) != 1 )
          {
            common::milog::MiLogStream::create(
              &v108,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/home/player_home_comp.cpp",
              "handleCreateBlueprintReq",
              2509);
            v35 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v108,
                    (const char (*)[29])"[HOME_BLUEPRINT] block size:");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    (const unsigned int *)(v3 + 80));
            v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v36, (const char (*)[11])" scene_id:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v3 + 64));
            v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v38, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_63;
          }
          block_info = proto::HomeSceneArrangementInfo::block_arrangement_info_list(scene_arrangement_info, 0);
          block_id = proto::HomeBlockArrangementInfo::block_id(block_info);
        }
        v40 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v39);
        if ( !common::minet::Packet::getExt(v40, 2u) )
        {
          NextBlueprintGuid = PlayerHomeComp::getNextBlueprintGuid(this);
          std::to_string((std::string *)&v108, NextBlueprintGuid);
          proto::HomeCreateBlueprintReq::set_server_share_code(req, (std::string *)&v108);
          std::string::~string(&v108);
          proto::HomeCreateBlueprintReq::set_gen_share_code_count(req, 1u);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v105);
          v42 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v105);
          if ( *(char *)(((unsigned __int64)&v42->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
            v42 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v42->is_word_filter_use_remote);
          is_word_filter_use_remote = v42->is_word_filter_use_remote;
          std::shared_ptr<Config>::~shared_ptr(&v105);
          if ( is_word_filter_use_remote )
          {
            common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 224));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            player = this->player_;
            v45 = proto::HomeCreateBlueprintReq::server_share_code[abi:cxx11](req);
            RemoteWordFilter::buildQueryHttpReq(
              (common::minet::http_client::HttpRequest *)(v3 + 336),
              v45,
              player,
              0x11u);
            async_http_type = RemoteWordFilter::getHttpTypeByCmdId(0x120Bu);
            v46 = ServiceBox::findService<GameserverService>();
            std::shared_ptr<common::minet::Packet>::shared_ptr(&v107.__packet_ptr, v47);
            v48 = *(_QWORD *)(v3 + 232);
            v107.__timer.start_tv_.tv_sec = *(_QWORD *)(v3 + 224);
            v107.__timer.start_tv_.tv_usec = v48;
            std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
              (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v108,
              &v107);
            ret = GameserverService::asyncHttpRequest(
                    v46,
                    (const common::minet::http_client::HttpRequest *)(v3 + 336),
                    5LL,
                    async_http_type,
                    (common::minet::http_client::ResponseCallBackFunc *)&v108);
            std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v108);
            PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(&v107);
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v108,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/home/player_home_comp.cpp",
                "handleCreateBlueprintReq",
                2522);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v108,
                (const char (*)[23])"asyncHttpRequest fails");
              common::milog::MiLogStream::~MiLogStream(&v108);
              v50 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v49._M_refcount._M_pi);
              common::minet::Packet::setExt(v50, 2u, 1u);
              v51 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v49._M_refcount._M_pi);
              common::minet::Packet::setExt(v51, 3u, 4u);
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                &packet_ptr,
                (const std::shared_ptr<common::minet::Packet> *)v49._M_refcount._M_pi);
              v49._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
              ServiceBox::pushPacketToService(v49);
              std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
            }
            common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v3 + 336));
            common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 224));
          }
          else
          {
            v53 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v52._M_refcount._M_pi);
            common::minet::Packet::setExt(v53, 2u, 1u);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              &packet_ptr,
              (const std::shared_ptr<common::minet::Packet> *)v52._M_refcount._M_pi);
            v52._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
            ServiceBox::pushPacketToService(v52);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
          }
          v7 = 0;
          goto LABEL_74;
        }
        v55 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v54);
        word_filter_action_type = common::minet::Packet::getExt(v55, 3u);
        if ( word_filter_action_type == 4 )
        {
          common::milog::MiLogStream::create(
            &v108,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/home/player_home_comp.cpp",
            "handleCreateBlueprintReq",
            2531);
          v56 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v108,
                  (const char (*)[56])"[HOME_BLUEPRINT] gen share_code failed, cur share_code:");
          v57 = proto::HomeCreateBlueprintReq::server_share_code[abi:cxx11](req);
          v58 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, v57);
          v59 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v58,
                  (const char (*)[21])" blueprint_guid_idx:");
          v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &this->blueprint_guid_idx_);
          v61 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v60, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
          if ( !word_filter_action_type )
          {
            share_code = proto::HomeCreateBlueprintReq::server_share_code[abi:cxx11](req);
            if ( !(unsigned __int8)std::string::empty(share_code) )
            {
              proto::ServerHomeSaveBlueprintDataReq::ServerHomeSaveBlueprintDataReq((proto::ServerHomeSaveBlueprintDataReq *const)(v3 + 256));
              proto::ServerHomeSaveBlueprintDataReq::set_slot_id(
                (proto::ServerHomeSaveBlueprintDataReq *const)(v3 + 256),
                *(_DWORD *)(v3 + 32));
              brief_data = proto::ServerHomeSaveBlueprintDataReq::mutable_brief_data((proto::ServerHomeSaveBlueprintDataReq *const)(v3 + 256));
              proto::HomeBlueprintBriefRedisData::set_share_code(brief_data, share_code);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(this->player_);
              proto::HomeBlueprintBriefRedisData::set_owner_uid(brief_data, Uid);
              proto::HomeBlueprintBriefRedisData::set_module_id(brief_data, *(_DWORD *)(v3 + 48));
              proto::HomeBlueprintBriefRedisData::set_scene_id(brief_data, *(_DWORD *)(v3 + 64));
              proto::HomeBlueprintBriefRedisData::set_block_id(brief_data, block_id);
              proto::HomeBlueprintBriefRedisData::set_is_allow_copy(brief_data, 1);
              Now = common::tools::TimeUtils::getNow();
              proto::HomeBlueprintBriefRedisData::set_create_time(brief_data, Now);
              detail_data = proto::ServerHomeSaveBlueprintDataReq::mutable_detail_data((proto::ServerHomeSaveBlueprintDataReq *const)(v3 + 256));
              proto::HomeBlueprintDetailRedisData::set_share_code(detail_data, share_code);
              v84 = proto::HomeCreateBlueprintReq::scene_arrangement_info(req);
              HomeBlueprintComp::convertDetailClientToRedisData(v84, detail_data);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( sendProtoToActivityService<proto::ServerHomeSaveBlueprintDataReq>(
                     this->player_,
                     (proto::ServerHomeSaveBlueprintDataReq *)(v3 + 256)) )
              {
                common::milog::MiLogStream::create(
                  &v108,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/home/player_home_comp.cpp",
                  "handleCreateBlueprintReq",
                  2579);
                v85 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                        &v108,
                        (const char (*)[57])"[HOME_BLUEPRINT] sendProtoToActivityService failed, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v85, &val);
                common::milog::MiLogStream::~MiLogStream(&v108);
                v7 = -1;
              }
              else
              {
                PlayerHomeComp::updateBlueprintCreateCD(this);
                v86 = *(_DWORD *)(v3 + 32);
                v87 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                PlayerHomeComp::logHomeCreateBlueprint(this, v87, v86, brief_data, scene_arrangement_info);
                v7 = 0;
              }
              proto::ServerHomeSaveBlueprintDataReq::~ServerHomeSaveBlueprintDataReq((proto::ServerHomeSaveBlueprintDataReq *const)(v3 + 256));
              goto LABEL_74;
            }
            common::milog::MiLogStream::create(
              &v108,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/home/player_home_comp.cpp",
              "handleCreateBlueprintReq",
              2557);
            v26 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v108,
                    (const char (*)[43])"[HOME_BLUEPRINT] share_code is empty, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_63;
          }
          gen_share_code_count = proto::HomeCreateBlueprintReq::gen_share_code_count(req);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 224));
          v62 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
          v63 = gen_share_code_count > ConstValueExcelConfigMgr::getHomeBlueprintGenShareCodeRetryTimes(&v62->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 224));
          if ( !v63 )
          {
            v69 = PlayerHomeComp::getNextBlueprintGuid(this);
            std::to_string((std::string *)&v108, v69);
            proto::HomeCreateBlueprintReq::set_server_share_code(req, (std::string *)&v108);
            std::string::~string(&v108);
            proto::HomeCreateBlueprintReq::set_gen_share_code_count(req, gen_share_code_count + 1);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&packet_ptr);
            v70 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&packet_ptr);
            if ( *(char *)(((unsigned __int64)&v70->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
              v70 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v70->is_word_filter_use_remote);
            v71 = v70->is_word_filter_use_remote;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&packet_ptr);
            if ( v71 )
            {
              common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 224));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v72 = this->player_;
              v73 = proto::HomeCreateBlueprintReq::server_share_code[abi:cxx11](req);
              RemoteWordFilter::buildQueryHttpReq(
                (common::minet::http_client::HttpRequest *)(v3 + 336),
                v73,
                v72,
                0x11u);
              async_http_type_0 = RemoteWordFilter::getHttpTypeByCmdId(0x120Bu);
              v74 = ServiceBox::findService<GameserverService>();
              std::shared_ptr<common::minet::Packet>::shared_ptr(&v107.__packet_ptr, v75);
              v76 = *(_QWORD *)(v3 + 232);
              v107.__timer.start_tv_.tv_sec = *(_QWORD *)(v3 + 224);
              v107.__timer.start_tv_.tv_usec = v76;
              std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#2},void,void>(
                (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v108,
                &v107);
              ret_0 = GameserverService::asyncHttpRequest(
                        v74,
                        (const common::minet::http_client::HttpRequest *)(v3 + 336),
                        5LL,
                        async_http_type_0,
                        (common::minet::http_client::ResponseCallBackFunc *)&v108);
              std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v108);
              PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::~HttpResponse(&v107);
              if ( ret_0 )
              {
                common::milog::MiLogStream::create(
                  &v108,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/home/player_home_comp.cpp",
                  "handleCreateBlueprintReq",
                  2548);
                common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  &v108,
                  (const char (*)[23])"asyncHttpRequest fails");
                common::milog::MiLogStream::~MiLogStream(&v108);
                v78 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v77._M_refcount._M_pi);
                common::minet::Packet::setExt(v78, 2u, 1u);
                v79 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v77._M_refcount._M_pi);
                common::minet::Packet::setExt(v79, 3u, 4u);
                std::shared_ptr<common::minet::Packet>::shared_ptr(
                  &packet_ptr,
                  (const std::shared_ptr<common::minet::Packet> *)v77._M_refcount._M_pi);
                v77._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
                ServiceBox::pushPacketToService(v77);
                std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
              }
              common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v3 + 336));
              common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 224));
            }
            else
            {
              v81 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v80._M_refcount._M_pi);
              common::minet::Packet::setExt(v81, 2u, 1u);
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                &packet_ptr,
                (const std::shared_ptr<common::minet::Packet> *)v80._M_refcount._M_pi);
              v80._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
              ServiceBox::pushPacketToService(v80);
              std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
            }
            v7 = 0;
            goto LABEL_74;
          }
          common::milog::MiLogStream::create(
            &v108,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/home/player_home_comp.cpp",
            "handleCreateBlueprintReq",
            2542);
          v64 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v108,
                  (const char (*)[56])"[HOME_BLUEPRINT] gen share_code failed, cur share_code:");
          v65 = proto::HomeCreateBlueprintReq::server_share_code[abi:cxx11](req);
          v66 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v64, v65);
          v67 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v66,
                  (const char (*)[21])" blueprint_guid_idx:");
          v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, &this->blueprint_guid_idx_);
          v61 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v68, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &val);
        common::milog::MiLogStream::~MiLogStream(&v108);
        v7 = 9812;
LABEL_74:
        std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 192));
        goto LABEL_75;
      }
      common::milog::MiLogStream::create(
        &v108,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "handleCreateBlueprintReq",
        2497);
      v28 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v108,
              (const char (*)[52])"[HOME_BLUEPRINT] findHomeSceneData fail, module_id:");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 48));
      v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])" scene_id:");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 64));
      v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v31, (const char (*)[11])" home_uid:");
      v33 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      *(_DWORD *)(v3 + 80) = Home::getHomeUid(v33);
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 80));
      v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
LABEL_63:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
    common::milog::MiLogStream::~MiLogStream(&v108);
    v7 = -1;
    goto LABEL_74;
  }
  common::milog::MiLogStream::create(
    &v108,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/home/player_home_comp.cpp",
    "handleCreateBlueprintReq",
    2481);
  v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v108,
          (const char (*)[26])"[HOME_BLUEPRINT] slot_id:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
  v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v13,
          (const char (*)[23])" has exist share code:");
  v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)(v3 + 96));
  v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &v15->second);
  v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
  common::milog::MiLogStream::~MiLogStream(&v108);
  v7 = 9804;
LABEL_75:
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 160));
  std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v3 + 128));
  result = v7;
  if ( v109 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2522: range 0000000017D4EBF4-0000000017D4EC7D
void __cdecl PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
{
  __suseconds_t tv_usec; // rdx

  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
  if ( *(_WORD *)(((unsigned __int64)&this->__timer >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->__timer);
  if ( *(_WORD *)(((unsigned __int64)&a2->__timer >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->__timer);
  tv_usec = a2->__timer.start_tv_.tv_usec;
  this->__timer.start_tv_.tv_sec = a2->__timer.start_tv_.tv_sec;
  this->__timer.start_tv_.tv_usec = tv_usec;
};

// Line 2522: range 0000000017D4ED48-0000000017D4EDD1
void __cdecl PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::HttpResponse(
        PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
{
  __suseconds_t tv_usec; // rdx

  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
  if ( *(_WORD *)(((unsigned __int64)&this->__timer >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->__timer);
  if ( *(_WORD *)(((unsigned __int64)&a2->__timer >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->__timer);
  tv_usec = a2->__timer.start_tv_.tv_usec;
  this->__timer.start_tv_.tv_sec = a2->__timer.start_tv_.tv_sec;
  this->__timer.start_tv_.tv_usec = tv_usec;
};

// Line 2522: range 0000000017C86A06-0000000017C86CFC
void __cdecl PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
        common::minet::http_client::HttpRetcode retcode,
        common::minet::http_client::HttpRequest *req,
        common::minet::http_client::HttpResponse *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  MonitorReport *v7; // r14
  int v8; // eax
  common::minet::Packet *v9; // rax
  common::minet::Packet *v10; // rcx
  std::__shared_ptr_access<proto::HomeCreateBlueprintReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::string *v12; // rdx
  common::minet::PacketPtr v13; // rdi
  std::tuple_element<0,std::pair<RemoteWordFilter::ActionType,std::string > >::type *action_type; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,std::pair<RemoteWordFilter::ActionType,std::string > >::type *replace_str; // [rsp+28h] [rbp-A8h]
  std::pair<RemoteWordFilter::ActionType,std::string > __in; // [rsp+30h] [rbp-A0h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 msg_ptr:2522";
  *(_QWORD *)(v4 + 16) = PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  v7 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v8 = common::tools::TimeUtils::Timer::time(&__closure->__timer);
  MonitorReport::addValue(v7, MONITOR_WORD_FILTER_HTTP_COST, v8);
  RemoteWordFilter::processQueryRsp[abi:cxx11](&__in, rsp_0);
  action_type = std::get<0ul,RemoteWordFilter::ActionType,std::string>(&__in);
  replace_str = std::get<1ul,RemoteWordFilter::ActionType,std::string>(&__in);
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  common::minet::Packet::setExt(v9, 2u, 1u);
  v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  if ( *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)action_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(action_type);
  }
  common::minet::Packet::setExt(v10, 3u, *action_type);
  if ( *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)action_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(action_type);
  }
  if ( *action_type == WORD_FILTER_REPLACE )
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
    common::minet::Packet::getProto<proto::HomeCreateBlueprintReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::HomeCreateBlueprintReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HomeCreateBlueprintReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::HomeCreateBlueprintReq::mutable_server_share_code[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::HomeCreateBlueprintReq>::~shared_ptr((std::shared_ptr<proto::HomeCreateBlueprintReq> *const)(v4 + 32));
  }
  v13._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__closure;
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)(v4 + 32),
    &__closure->__packet_ptr);
  v13._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 32);
  ServiceBox::pushPacketToService(v13);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 32));
  std::pair<RemoteWordFilter::ActionType,std::string>::~pair(&__in);
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2522: range 0000000017C86CFE-0000000017C86D28
void __cdecl PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::~HttpResponse(
        PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 2548: range 0000000017D4EEC4-0000000017D4EF4D
void __cdecl PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::HttpResponse(
        PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
{
  __suseconds_t tv_usec; // rdx

  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
  if ( *(_WORD *)(((unsigned __int64)&this->__timer >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->__timer);
  if ( *(_WORD *)(((unsigned __int64)&a2->__timer >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->__timer);
  tv_usec = a2->__timer.start_tv_.tv_usec;
  this->__timer.start_tv_.tv_sec = a2->__timer.start_tv_.tv_sec;
  this->__timer.start_tv_.tv_usec = tv_usec;
};

// Line 2548: range 0000000017D4F018-0000000017D4F0A1
void __cdecl PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::HttpResponse(
        PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
{
  __suseconds_t tv_usec; // rdx

  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
  if ( *(_WORD *)(((unsigned __int64)&this->__timer >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->__timer);
  if ( *(_WORD *)(((unsigned __int64)&a2->__timer >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->__timer);
  tv_usec = a2->__timer.start_tv_.tv_usec;
  this->__timer.start_tv_.tv_sec = a2->__timer.start_tv_.tv_sec;
  this->__timer.start_tv_.tv_usec = tv_usec;
};

// Line 2548: range 0000000017C86D2A-0000000017C87020
void __cdecl PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::operator()(
        const PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
        common::minet::http_client::HttpRetcode retcode,
        common::minet::http_client::HttpRequest *req,
        common::minet::http_client::HttpResponse *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  MonitorReport *v7; // r14
  int v8; // eax
  common::minet::Packet *v9; // rax
  common::minet::Packet *v10; // rcx
  std::__shared_ptr_access<proto::HomeCreateBlueprintReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::string *v12; // rdx
  common::minet::PacketPtr v13; // rdi
  std::tuple_element<0,std::pair<RemoteWordFilter::ActionType,std::string > >::type *action_type; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,std::pair<RemoteWordFilter::ActionType,std::string > >::type *replace_str; // [rsp+28h] [rbp-A8h]
  std::pair<RemoteWordFilter::ActionType,std::string > __in; // [rsp+30h] [rbp-A0h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 msg_ptr:2548";
  *(_QWORD *)(v4 + 16) = PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  v7 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  v8 = common::tools::TimeUtils::Timer::time(&__closure->__timer);
  MonitorReport::addValue(v7, MONITOR_WORD_FILTER_HTTP_COST, v8);
  RemoteWordFilter::processQueryRsp[abi:cxx11](&__in, rsp_0);
  action_type = std::get<0ul,RemoteWordFilter::ActionType,std::string>(&__in);
  replace_str = std::get<1ul,RemoteWordFilter::ActionType,std::string>(&__in);
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  common::minet::Packet::setExt(v9, 2u, 1u);
  v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  if ( *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)action_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(action_type);
  }
  common::minet::Packet::setExt(v10, 3u, *action_type);
  if ( *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)action_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)action_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(action_type);
  }
  if ( *action_type == WORD_FILTER_REPLACE )
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
    common::minet::Packet::getProto<proto::HomeCreateBlueprintReq>((common::minet::Packet *const)(v4 + 32));
    v11 = std::__shared_ptr_access<proto::HomeCreateBlueprintReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HomeCreateBlueprintReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v12 = proto::HomeCreateBlueprintReq::mutable_server_share_code[abi:cxx11](v11);
    std::string::operator=(v12, replace_str);
    std::shared_ptr<proto::HomeCreateBlueprintReq>::~shared_ptr((std::shared_ptr<proto::HomeCreateBlueprintReq> *const)(v4 + 32));
  }
  v13._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__closure;
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)(v4 + 32),
    &__closure->__packet_ptr);
  v13._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 32);
  ServiceBox::pushPacketToService(v13);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 32));
  std::pair<RemoteWordFilter::ActionType,std::string>::~pair(&__in);
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2548: range 0000000017C87022-0000000017C8704C
void __cdecl PlayerHomeComp::handleCreateBlueprintReq(std::shared_ptr<common::minet::Packet>,proto::HomeCreateBlueprintReq &)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::~HttpResponse(
        PlayerHomeComp::handleCreateBlueprintReq::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 2593: range 0000000017C88A76-0000000017C890AD
int32_t __cdecl PlayerHomeComp::onServerHomeSaveBlueprintDataRsp(
        PlayerHomeComp *const this,
        const proto::ServerHomeSaveBlueprintDataRsp *server_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::pointer v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::pointer v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  int32_t v21; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self __y; // [rsp+18h] [rbp-118h] BYREF
  const proto::HomeBlueprintBriefRedisData *brief_redis_data; // [rsp+20h] [rbp-110h]
  const std::string *share_code; // [rsp+28h] [rbp-108h]
  HomeBlueprintBriefData *brief_data; // [rsp+30h] [rbp-100h]
  proto::HomeBlueprintSlotInfo *slot_info; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 retcode:2594 48 4 12 slot_id:2595 64 8 14 slot_iter:2601 96 32 8 rsp:2596";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::onServerHomeSaveBlueprintDataRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = proto::ServerHomeSaveBlueprintDataRsp::retcode(server_rsp);
  *(_DWORD *)(v2 + 48) = proto::ServerHomeSaveBlueprintDataRsp::slot_id(server_rsp);
  proto::HomeCreateBlueprintRsp::HomeCreateBlueprintRsp((proto::HomeCreateBlueprintRsp *const)(v2 + 96));
  if ( *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "onServerHomeSaveBlueprintDataRsp",
      2633);
    v16 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v29,
            (const char (*)[54])"[HOME_BLUEPRINT] save blueprint data failed, retcode:");
    v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v2 + 32));
    v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" slot_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
    v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    *(std::map<unsigned int,std::string>::iterator *)(v2 + 64) = std::map<unsigned int,std::string>::find(
                                                                   &this->blueprint_slot_share_code_map_,
                                                                   (const std::map<unsigned int,std::string>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,std::string>::end(&this->blueprint_slot_share_code_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "onServerHomeSaveBlueprintDataRsp",
        2604);
      v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v29,
             (const char (*)[34])"[HOME_BLUEPRINT] invalid slot_id:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      *(_DWORD *)(v2 + 32) = -1;
    }
    else
    {
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)(v2 + 64));
      if ( (unsigned __int8)std::string::empty(&v8->second) != 1 )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/player_home_comp.cpp",
          "onServerHomeSaveBlueprintDataRsp",
          2610);
        v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v29,
               (const char (*)[26])"[HOME_BLUEPRINT] slot_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v10,
                (const char (*)[23])" has exist share code:");
        v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)(v2 + 64));
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &v12->second);
        v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream(&v29);
        *(_DWORD *)(v2 + 32) = 9804;
      }
      else
      {
        brief_redis_data = proto::ServerHomeSaveBlueprintDataRsp::brief_data(server_rsp);
        share_code = proto::HomeBlueprintBriefRedisData::share_code[abi:cxx11](brief_redis_data);
        v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)(v2 + 64));
        std::string::operator=(&v15->second, share_code);
        brief_data = std::unordered_map<std::string,HomeBlueprintBriefData>::operator[](
                       &this->blueprint_share_code_brief_data_map_,
                       share_code);
        HomeBlueprintBriefData::fromRedis(brief_data, brief_redis_data);
        slot_info = proto::HomeCreateBlueprintRsp::mutable_slot_info((proto::HomeCreateBlueprintRsp *const)(v2 + 96));
        proto::HomeBlueprintSlotInfo::set_slot_id(slot_info, *(_DWORD *)(v2 + 48));
        HomeBlueprintBriefData::toClient(brief_data, slot_info);
      }
    }
  }
  proto::HomeCreateBlueprintRsp::set_retcode((proto::HomeCreateBlueprintRsp *const)(v2 + 96), *(_DWORD *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
  v21 = *(_DWORD *)(v2 + 32);
  proto::HomeCreateBlueprintRsp::~HomeCreateBlueprintRsp((proto::HomeCreateBlueprintRsp *const)(v2 + 96));
  result = v21;
  if ( v30 == (char *)v2 )
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
  return result;
};

// Line 2641: range 0000000017C890AE-0000000017C895C8
__int64 __fastcall PlayerHomeComp::handleDeleteBlueprintReq(PlayerHomeComp *const this, uint32_t slot_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self __y; // [rsp+20h] [rbp-100h] BYREF
  const std::string *share_code; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 slot_id:2640 64 8 9 iter:2642 96 32 15 server_req:2656";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::handleDeleteBlueprintReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = slot_id;
  *(std::map<unsigned int,std::string>::iterator *)(v2 + 64) = std::map<unsigned int,std::string>::find(
                                                                 &this->blueprint_slot_share_code_map_,
                                                                 (const std::map<unsigned int,std::string>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::string>::end(&this->blueprint_slot_share_code_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "handleDeleteBlueprintReq",
      2645);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v17,
           (const char (*)[34])"[HOME_BLUEPRINT] invalid slot_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v8 = -1;
  }
  else
  {
    share_code = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)(v2 + 64))->second;
    if ( (unsigned __int8)std::string::empty(share_code) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "handleDeleteBlueprintReq",
        2652);
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v17,
             (const char (*)[47])"[HOME_BLUEPRINT] share_code is empty, slot_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v8 = 9805;
    }
    else
    {
      proto::ServerHomeDeleteBlueprintDataReq::ServerHomeDeleteBlueprintDataReq((proto::ServerHomeDeleteBlueprintDataReq *const)(v2 + 96));
      proto::ServerHomeDeleteBlueprintDataReq::set_slot_id(
        (proto::ServerHomeDeleteBlueprintDataReq *const)(v2 + 96),
        *(_DWORD *)(v2 + 48));
      proto::ServerHomeDeleteBlueprintDataReq::set_share_code(
        (proto::ServerHomeDeleteBlueprintDataReq *const)(v2 + 96),
        share_code);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( sendProtoToActivityService<proto::ServerHomeDeleteBlueprintDataReq>(
             this->player_,
             (proto::ServerHomeDeleteBlueprintDataReq *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/home/player_home_comp.cpp",
          "handleDeleteBlueprintReq",
          2661);
        v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v17,
                (const char (*)[57])"[HOME_BLUEPRINT] sendProtoToActivityService failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v17);
        v8 = -1;
      }
      else
      {
        v8 = 0;
      }
      proto::ServerHomeDeleteBlueprintDataReq::~ServerHomeDeleteBlueprintDataReq((proto::ServerHomeDeleteBlueprintDataReq *const)(v2 + 96));
    }
  }
  result = v8;
  if ( v18 == (char *)v2 )
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
  return result;
};

// Line 2669: range 0000000017C895CA-0000000017C89D22
int32_t __cdecl PlayerHomeComp::onServerHomeDeleteBlueprintDataRsp(
        PlayerHomeComp *const this,
        const proto::ServerHomeDeleteBlueprintDataRsp *server_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const std::string *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  const std::string *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  int32_t v27; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self __y; // [rsp+20h] [rbp-100h] BYREF
  std::string *share_code; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 retcode:2670 48 4 12 slot_id:2671 64 8 14 slot_iter:2678 96 32 8 rsp:2672";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::onServerHomeDeleteBlueprintDataRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = proto::ServerHomeDeleteBlueprintDataRsp::retcode(server_rsp);
  *(_DWORD *)(v2 + 48) = proto::ServerHomeDeleteBlueprintDataRsp::slot_id(server_rsp);
  proto::HomeDeleteBlueprintRsp::HomeDeleteBlueprintRsp((proto::HomeDeleteBlueprintRsp *const)(v2 + 96));
  proto::HomeDeleteBlueprintRsp::set_slot_id((proto::HomeDeleteBlueprintRsp *const)(v2 + 96), *(_DWORD *)(v2 + 48));
  if ( *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "onServerHomeDeleteBlueprintDataRsp",
      2709);
    v19 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v32,
            (const char (*)[56])"[HOME_BLUEPRINT] delete blueprint data failed, retcode:");
    v20 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v2 + 32));
    v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])" slot_id:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 48));
    v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" share_code:");
    v24 = proto::ServerHomeDeleteBlueprintDataRsp::share_code[abi:cxx11](server_rsp);
    v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, v24);
    v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  else
  {
    *(std::map<unsigned int,std::string>::iterator *)(v2 + 64) = std::map<unsigned int,std::string>::find(
                                                                   &this->blueprint_slot_share_code_map_,
                                                                   (const std::map<unsigned int,std::string>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,std::string>::end(&this->blueprint_slot_share_code_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/player_home_comp.cpp",
        "onServerHomeDeleteBlueprintDataRsp",
        2681);
      v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v32,
             (const char (*)[34])"[HOME_BLUEPRINT] invalid slot_id:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_8:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
      *(_DWORD *)(v2 + 32) = -1;
      goto LABEL_21;
    }
    share_code = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > > *const)(v2 + 64))->second;
    if ( (unsigned __int8)std::string::empty(share_code) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/player_home_comp.cpp",
        "onServerHomeDeleteBlueprintDataRsp",
        2688);
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v32,
             (const char (*)[26])"[HOME_BLUEPRINT] slot_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              v9,
              (const char (*)[28])" not exist share code, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
      *(_DWORD *)(v2 + 32) = 9805;
    }
    else
    {
      v11 = proto::ServerHomeDeleteBlueprintDataRsp::share_code[abi:cxx11](server_rsp);
      if ( std::operator!=<char>(share_code, v11) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/home/player_home_comp.cpp",
          "onServerHomeDeleteBlueprintDataRsp",
          2694);
        v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v32,
                (const char (*)[26])"[HOME_BLUEPRINT] slot_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" share_code:");
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, share_code);
        v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                v15,
                (const char (*)[34])" not match server_rsp_share_code:");
        v17 = proto::ServerHomeDeleteBlueprintDataRsp::share_code[abi:cxx11](server_rsp);
        v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, v17);
        v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_8;
      }
      PlayerHomeComp::invalidHomeBlueprintCache(this, share_code);
      PlayerHomeComp::logHomeDeleteBlueprint(this, *(_DWORD *)(v2 + 48), share_code, 1u);
      std::unordered_map<std::string,HomeBlueprintBriefData>::erase(
        &this->blueprint_share_code_brief_data_map_,
        share_code);
      std::string::operator=(share_code, byte_262D4440);
    }
  }
LABEL_21:
  proto::HomeDeleteBlueprintRsp::set_retcode((proto::HomeDeleteBlueprintRsp *const)(v2 + 96), *(_DWORD *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
  v27 = *(_DWORD *)(v2 + 32);
  proto::HomeDeleteBlueprintRsp::~HomeDeleteBlueprintRsp((proto::HomeDeleteBlueprintRsp *const)(v2 + 96));
  result = v27;
  if ( v33 == (char *)v2 )
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
  return result;
};

// Line 2718: range 0000000017C89D24-0000000017C8A0D5
void __cdecl PlayerHomeComp::invalidHomeBlueprintCache(PlayerHomeComp *const this, const std::string *share_code)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::minet::Packet *v6; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v8; // r14
  GameserverApp *v9; // rax
  uint32_t AppId; // eax
  GameserverService *v11; // r14
  NetworkMgrBase *v12; // r14
  uint32_t v13; // r8d
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 packet_ptr:2722 64 32 11 notify:2720";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::invalidHomeBlueprintCache;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  proto::ServerHomeBlueprintCacheInvalidNotify::ServerHomeBlueprintCacheInvalidNotify((proto::ServerHomeBlueprintCacheInvalidNotify *const)(v2 + 64));
  proto::ServerHomeBlueprintCacheInvalidNotify::set_share_code(
    (proto::ServerHomeBlueprintCacheInvalidNotify *const)(v2 + 64),
    share_code);
  common::minet::PacketUtils::createPacket<proto::ServerHomeBlueprintCacheInvalidNotify>((const proto::ServerHomeBlueprintCacheInvalidNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/player_home_comp.cpp",
      "invalidHomeBlueprintCache",
      2725);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v16,
           (const char (*)[27])"create packet failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v6, Uid);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v9 = Singleton<GameserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v9);
    common::minet::Packet::setSource(v8, 3u, AppId);
    v11 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &p_packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v11, &p_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &p_packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    NetworkMgrBase::sendPacketToTargetService(
      v12,
      (common::minet::PacketPtr)__PAIR128__(13LL, &p_packet_ptr),
      0xFFFFFFFF,
      v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  proto::ServerHomeBlueprintCacheInvalidNotify::~ServerHomeBlueprintCacheInvalidNotify((proto::ServerHomeBlueprintCacheInvalidNotify *const)(v2 + 64));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2735: range 0000000017C8A0D6-0000000017C8A3DA
void __cdecl PlayerHomeComp::logHomeDeleteBlueprint(
        PlayerHomeComp *const this,
        uint32_t slot_id,
        const std::string *share_code,
        uint32_t reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeDeleteBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeDeleteBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeDeleteBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *player; // r14
  std::string v12; // [rsp+0h] [rbp-F0h]
  const std::string *share_codea; // [rsp+8h] [rbp-E8h]
  google::protobuf::uint32 reasona; // [rsp+10h] [rbp-E0h]
  google::protobuf::uint32 slot_ida; // [rsp+14h] [rbp-DCh]
  PlayerHomeComp *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = slot_id;
  v12._M_string_length = (std::string::size_type)share_code;
  *(_DWORD *)v12._anon_0._M_local_buf = reason;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 23 log_context_holder:2736 64 16 12 log_ptr:2737";
  *(_QWORD *)(v4 + 16) = PlayerHomeComp::logHomeDeleteBlueprint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xE8Fu, v12);
  std::string::~string(&v19);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeDeleteBlueprint>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeDeleteBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeDeleteBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyHomeDeleteBlueprint::set_slot_id(v8, slot_ida);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeDeleteBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeDeleteBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyHomeDeleteBlueprint::set_share_code(v9, share_codea);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeDeleteBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeDeleteBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyHomeDeleteBlueprint::set_delete_reason(v10, reasona);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeDeleteBlueprint,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyHomeDeleteBlueprint> *)(v4 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyHomeDeleteBlueprint>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeDeleteBlueprint> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v20 == (char *)v4 )
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

// Line 2745: range 0000000017C8A3DC-0000000017C8B50D
void __cdecl PlayerHomeComp::logHomeCreateBlueprint(
        PlayerHomeComp *const this,
        Home *home,
        uint32_t slot_id,
        const proto::HomeBlueprintBriefRedisData *brief_data,
        const proto::HomeSceneArrangementInfo *arrange_info)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  const std::string *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  google::protobuf::uint32 v13; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  google::protobuf::uint32 v15; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  google::protobuf::uint32 v17; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  uint32_t HomeUid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  HomeBlueprintComp *BlueprintComp; // rax
  bool IsAllowFriendCopy; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  google::protobuf::uint32 v24; // eax
  std::map<unsigned int,unsigned int>::mapped_type *v25; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v26; // rax
  google::protobuf::uint32 v27; // eax
  std::map<unsigned int,unsigned int>::mapped_type *v28; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v29; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v30; // rax
  int v31; // eax
  google::protobuf::uint32 v33; // eax
  Player *player; // r14
  std::string v35; // [rsp+0h] [rbp-330h]
  const proto::HomeSceneArrangementInfo *arrange_infoa; // [rsp+8h] [rbp-328h]
  const proto::HomeBlueprintBriefRedisData *const brief_dataa; // [rsp+10h] [rbp-320h]
  google::protobuf::uint32 slot_ida; // [rsp+1Ch] [rbp-314h]
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+30h] [rbp-300h] BYREF
  int32_t furniture_index; // [rsp+34h] [rbp-2FCh]
  google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::const_iterator __for_begin_0; // [rsp+38h] [rbp-2F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::const_iterator __for_end_0; // [rsp+40h] [rbp-2F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::const_iterator __for_begin; // [rsp+48h] [rbp-2E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::const_iterator __for_end; // [rsp+50h] [rbp-2E0h] BYREF
  google::protobuf::RepeatedField<int>::const_iterator __for_begin_1; // [rsp+58h] [rbp-2D8h]
  proto_log::FurnitureArrangementLog *arrangement_log; // [rsp+60h] [rbp-2D0h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *__for_range; // [rsp+68h] [rbp-2C8h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *__for_range_0; // [rsp+70h] [rbp-2C0h]
  proto_log::FurnitureArrangementBlockLog *block_log; // [rsp+78h] [rbp-2B8h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+80h] [rbp-2B0h]
  const std::pair<unsigned int const,unsigned int> *v51; // [rsp+88h] [rbp-2A8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+90h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *furniture_count; // [rsp+98h] [rbp-298h]
  proto_log::FurnitureArrangementFurnitureLog *furniture_log; // [rsp+A0h] [rbp-290h]
  const google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo> *__for_range_2; // [rsp+A8h] [rbp-288h]
  const proto::HomeBlockArrangementInfo *block_info; // [rsp+B0h] [rbp-280h]
  proto_log::FurnitureArrangementBlockLog *block_log_0; // [rsp+B8h] [rbp-278h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *__for_range_3; // [rsp+C0h] [rbp-270h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *__for_range_4; // [rsp+C8h] [rbp-268h]
  std::map<unsigned int,unsigned int> *__for_range_5; // [rsp+D0h] [rbp-260h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteData> *__for_range_6; // [rsp+D8h] [rbp-258h]
  std::map<unsigned int,unsigned int> *__for_range_7; // [rsp+E0h] [rbp-250h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteData> *__for_range_8; // [rsp+E8h] [rbp-248h]
  const proto::HomeFurnitureCustomSuiteData *custom_suite; // [rsp+F0h] [rbp-240h]
  proto_log::FurnitureArrangementCustomSuiteLog *custom_suite_log; // [rsp+F8h] [rbp-238h]
  const google::protobuf::RepeatedField<int> *__for_range_9; // [rsp+100h] [rbp-230h]
  google::protobuf::RepeatedField<int>::const_iterator __for_end_1; // [rsp+108h] [rbp-228h]
  const proto::HomeFurnitureData *furniture_3; // [rsp+110h] [rbp-220h]
  const std::pair<unsigned int const,unsigned int> *v69; // [rsp+118h] [rbp-218h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *suite_id; // [rsp+120h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *suite_count; // [rsp+128h] [rbp-208h]
  proto_log::FurnitureArrangementFurnitureSuiteLog *suite_log; // [rsp+130h] [rbp-200h]
  const proto::HomeFurnitureSuiteData *suite; // [rsp+138h] [rbp-1F8h]
  const std::pair<unsigned int const,unsigned int> *v74; // [rsp+140h] [rbp-1F0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id_0; // [rsp+148h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *furniture_count_0; // [rsp+150h] [rbp-1E0h]
  proto_log::FurnitureArrangementFurnitureLog *furniture_log_0; // [rsp+158h] [rbp-1D8h]
  const proto::HomeFurnitureData *furniture_2; // [rsp+160h] [rbp-1D0h]
  const proto::HomeFurnitureData *furniture_1; // [rsp+168h] [rbp-1C8h]
  const proto::HomeFurnitureData *furniture_0; // [rsp+170h] [rbp-1C0h]
  const proto::HomeFurnitureData *furniture; // [rsp+178h] [rbp-1B8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+180h] [rbp-1B0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+190h] [rbp-1A0h] BYREF
  std::string v84; // [rsp+1A0h] [rbp-190h] BYREF
  char v85[368]; // [rsp+1C0h] [rbp-170h] BYREF

  *((_DWORD *)&v35._anon_0._M_allocated_capacity + 3) = slot_id;
  v35._anon_0._M_allocated_capacity = (std::string::size_type)brief_data;
  v35._M_string_length = (std::string::size_type)arrange_info;
  v5 = (unsigned __int64)v85;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(320LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 1 23 log_context_holder:2746 48 16 12 log_ptr:2747 80 48 34 block0_furniture_id_count_map:2"
                        "757 160 48 33 block_furniture_id_count_map:2782 240 48 39 block_furniture_suite_id_count_map:2797";
  *(_QWORD *)(v5 + 16) = PlayerHomeComp::logHomeCreateBlueprint;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61953;
  v7[536862722] = 62194;
  v7[536862724] = -218959118;
  v7[536862726] = -219021312;
  v7[536862727] = 62194;
  v7[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v84, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32), 0xE8Du, v35);
  std::string::~string(&v84);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeCreateBlueprint>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
  proto_log::PlayerLogBodyHomeCreateBlueprint::set_slot_id(v9, slot_ida);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
  v11 = proto::HomeBlueprintBriefRedisData::share_code[abi:cxx11](brief_dataa);
  proto_log::PlayerLogBodyHomeCreateBlueprint::set_share_code(v10, v11);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
  v13 = proto::HomeBlueprintBriefRedisData::module_id(brief_dataa);
  proto_log::PlayerLogBodyHomeCreateBlueprint::set_module_id(v12, v13);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
  v15 = proto::HomeBlueprintBriefRedisData::scene_id(brief_dataa);
  proto_log::PlayerLogBodyHomeCreateBlueprint::set_scene_id(v14, v15);
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
  v17 = proto::HomeBlueprintBriefRedisData::block_id(brief_dataa);
  proto_log::PlayerLogBodyHomeCreateBlueprint::set_block_id(v16, v17);
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
  HomeUid = Home::getHomeUid(home);
  proto_log::PlayerLogBodyHomeCreateBlueprint::set_home_owner_uid(v18, HomeUid);
  v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
  BlueprintComp = Home::getBlueprintComp(home);
  IsAllowFriendCopy = HomeBlueprintComp::getIsAllowFriendCopy(BlueprintComp);
  proto_log::PlayerLogBodyHomeCreateBlueprint::set_is_home_allow_copy(v20, IsAllowFriendCopy);
  v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCreateBlueprint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
  arrangement_log = proto_log::PlayerLogBodyHomeCreateBlueprint::mutable_furniture_arrangement_log(v23);
  v24 = proto::HomeSceneArrangementInfo::scene_id(arrange_infoa);
  proto_log::FurnitureArrangementLog::set_scene_id(arrangement_log, v24);
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 80));
  __for_range = proto::HomeSceneArrangementInfo::door_list(arrange_infoa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    furniture = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator*(&__for_begin);
    __k = proto::HomeFurnitureData::furniture_id(furniture);
    v25 = std::map<unsigned int,unsigned int>::operator[]((std::map<unsigned int,unsigned int> *const)(v5 + 80), &__k);
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v25);
    }
    ++*v25;
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::HomeSceneArrangementInfo::stair_list(arrange_infoa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    furniture_0 = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator*(&__for_begin);
    __k = proto::HomeFurnitureData::furniture_id(furniture_0);
    v26 = std::map<unsigned int,unsigned int>::operator[]((std::map<unsigned int,unsigned int> *const)(v5 + 80), &__k);
    if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v26);
    }
    ++*v26;
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator++(&__for_begin);
  }
  if ( !std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v5 + 80)) )
  {
    block_log = proto_log::FurnitureArrangementLog::add_block_log(arrangement_log);
    proto_log::FurnitureArrangementBlockLog::set_block_id(block_log, 0);
    __for_range_1 = (std::map<unsigned int,unsigned int> *)(v5 + 80);
    __for_begin.it_ = (void *const *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v5 + 80))._M_node;
    __for_end.it_ = (void *const *)std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v51 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      furniture_id = std::get<0ul,unsigned int const,unsigned int>(v51);
      furniture_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v51);
      furniture_log = proto_log::FurnitureArrangementBlockLog::add_furniture_log(block_log);
      if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(furniture_id);
      }
      proto_log::FurnitureArrangementFurnitureLog::set_furniture_id(furniture_log, *furniture_id);
      if ( *(_BYTE *)(((unsigned __int64)furniture_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_count >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(furniture_count);
      }
      proto_log::FurnitureArrangementFurnitureLog::set_furniture_count(furniture_log, *furniture_count);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    }
  }
  __for_range_2 = proto::HomeSceneArrangementInfo::block_arrangement_info_list(arrange_infoa);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::begin(__for_range_2).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::end(__for_range_2).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockArrangementInfo const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    block_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockArrangementInfo const>::operator*(&__for_begin_0);
    block_log_0 = proto_log::FurnitureArrangementLog::add_block_log(arrangement_log);
    v27 = proto::HomeBlockArrangementInfo::block_id(block_info);
    proto_log::FurnitureArrangementBlockLog::set_block_id(block_log_0, v27);
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 160));
    __for_range_3 = proto::HomeBlockArrangementInfo::persistent_furniture_list(block_info);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::begin(__for_range_3).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::end(__for_range_3).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      furniture_1 = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator*(&__for_begin);
      __k = proto::HomeFurnitureData::furniture_id(furniture_1);
      v28 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v5 + 160),
              &__k);
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v28);
      }
      ++*v28;
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator++(&__for_begin);
    }
    __for_range_4 = proto::HomeBlockArrangementInfo::deploy_furniure_list(block_info);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::begin(__for_range_4).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureData>::end(__for_range_4).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      furniture_2 = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator*(&__for_begin);
      __k = proto::HomeFurnitureData::furniture_id(furniture_2);
      v29 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v5 + 160),
              &__k);
      if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v29);
      }
      ++*v29;
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureData const>::operator++(&__for_begin);
    }
    __for_range_5 = (std::map<unsigned int,unsigned int> *)(v5 + 160);
    __for_begin.it_ = (void *const *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v5 + 160))._M_node;
    __for_end.it_ = (void *const *)std::map<unsigned int,unsigned int>::end(__for_range_5)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v74 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      furniture_id_0 = std::get<0ul,unsigned int const,unsigned int>(v74);
      furniture_count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v74);
      furniture_log_0 = proto_log::FurnitureArrangementBlockLog::add_furniture_log(block_log_0);
      if ( *(_BYTE *)(((unsigned __int64)furniture_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id_0 >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(furniture_id_0);
      }
      proto_log::FurnitureArrangementFurnitureLog::set_furniture_id(furniture_log_0, *furniture_id_0);
      if ( *(_BYTE *)(((unsigned __int64)furniture_count_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture_count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_count_0 >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(furniture_count_0);
      }
      proto_log::FurnitureArrangementFurnitureLog::set_furniture_count(furniture_log_0, *furniture_count_0);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    }
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 240));
    __for_range_6 = proto::HomeBlockArrangementInfo::furniture_suite_list(block_info);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteData>::begin(__for_range_6).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteData>::end(__for_range_6).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteData const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteData> *const)&__for_begin,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteData>::iterator *)&__for_end) )
    {
      suite = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteData const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteData> *const)&__for_begin);
      __k = proto::HomeFurnitureSuiteData::suite_id(suite);
      v30 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v5 + 240),
              &__k);
      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v30);
      }
      ++*v30;
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteData const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureSuiteData> *const)&__for_begin);
    }
    __for_range_7 = (std::map<unsigned int,unsigned int> *)(v5 + 240);
    __for_begin.it_ = (void *const *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v5 + 240))._M_node;
    __for_end.it_ = (void *const *)std::map<unsigned int,unsigned int>::end(__for_range_7)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v69 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      suite_id = std::get<0ul,unsigned int const,unsigned int>(v69);
      suite_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v69);
      suite_log = proto_log::FurnitureArrangementBlockLog::add_furniture_suite_log(block_log_0);
      if ( *(_BYTE *)(((unsigned __int64)suite_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)suite_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)suite_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(suite_id);
      }
      proto_log::FurnitureArrangementFurnitureSuiteLog::set_suite_id(suite_log, *suite_id);
      if ( *(_BYTE *)(((unsigned __int64)suite_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)suite_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)suite_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(suite_count);
      }
      proto_log::FurnitureArrangementFurnitureSuiteLog::set_suite_count(suite_log, *suite_count);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    }
    __for_range_8 = proto::HomeBlockArrangementInfo::furniture_custom_suite_list(block_info);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteData>::begin(__for_range_8).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteData>::end(__for_range_8).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureCustomSuiteData const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteData> *const)&__for_begin,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteData>::iterator *)&__for_end) )
    {
      custom_suite = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureCustomSuiteData const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteData> *const)&__for_begin);
      custom_suite_log = proto_log::FurnitureArrangementLog::add_custom_suite_log(arrangement_log);
      __for_range_9 = proto::HomeFurnitureCustomSuiteData::included_furniture_index_list(custom_suite);
      __for_begin_1 = google::protobuf::RepeatedField<int>::begin(__for_range_9);
      __for_end_1 = google::protobuf::RepeatedField<int>::end(__for_range_9);
      while ( __for_begin_1 != __for_end_1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(__for_begin_1);
        }
        furniture_index = *__for_begin_1;
        if ( furniture_index >= 0 )
        {
          v31 = proto::HomeBlockArrangementInfo::deploy_furniure_list_size(block_info);
          if ( furniture_index < v31 )
          {
            furniture_3 = proto::HomeBlockArrangementInfo::deploy_furniure_list(block_info, furniture_index);
            v33 = proto::HomeFurnitureData::furniture_id(furniture_3);
            proto_log::FurnitureArrangementCustomSuiteLog::add_furniture_id_list(custom_suite_log, v33);
          }
        }
        ++__for_begin_1;
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureCustomSuiteData const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFurnitureCustomSuiteData> *const)&__for_begin);
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 240));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 160));
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockArrangementInfo const>::operator++(&__for_begin_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeCreateBlueprint,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyHomeCreateBlueprint> *)(v5 + 48));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 80));
  std::shared_ptr<proto_log::PlayerLogBodyHomeCreateBlueprint>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeCreateBlueprint> *const)(v5 + 48));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32));
  if ( v85 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
