// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/gallery/player_gallery_comp.cpp

// Line 18: range 0000000016635060-00000000166351E4
int32_t __cdecl PlayerGalleryComp::fromBin(PlayerGalleryComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-80h]
  const proto::PlayerGalleryCompBin *proto_comp; // [rsp+18h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 gallery_id:21";
  *(_QWORD *)(v2 + 16) = PlayerGalleryComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_comp = proto::PlayerDataBin::gallery_bin(player_data_bin);
  std::set<unsigned int>::clear(&this->valid_gallery_set_);
  __for_range = proto::PlayerGalleryCompBin::valid_gallery_id_list(proto_comp);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::set<unsigned int>::insert(&this->valid_gallery_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  result = 0;
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

// Line 29: range 00000000166351E6-00000000166352BC
int32_t __cdecl PlayerGalleryComp::toBin(PlayerGalleryComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  proto::PlayerGalleryCompBin *proto_comp; // [rsp+30h] [rbp-10h]
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_gallery_bin(player_data_bin);
  __for_range = &this->valid_gallery_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->valid_gallery_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->valid_gallery_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::PlayerGalleryCompBin::add_valid_gallery_id_list(proto_comp, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  return 0;
};

// Line 39: range 00000000166352BE-0000000016635392
__int64 __fastcall PlayerGalleryComp::addValidGallery(PlayerGalleryComp *const this, uint32_t gallery_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 gallery_id:38";
  *(_QWORD *)(v2 + 16) = PlayerGalleryComp::addValidGallery;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gallery_id;
  std::set<unsigned int>::insert(&this->valid_gallery_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
  result = 0LL;
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

// Line 45: range 0000000016635394-0000000016635468
__int64 __fastcall PlayerGalleryComp::delValidGallery(PlayerGalleryComp *const this, uint32_t gallery_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 gallery_id:44";
  *(_QWORD *)(v2 + 16) = PlayerGalleryComp::delValidGallery;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gallery_id;
  std::set<unsigned int>::erase(&this->valid_gallery_set_, (const std::set<unsigned int>::key_type *)(v2 + 32));
  result = 0LL;
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
