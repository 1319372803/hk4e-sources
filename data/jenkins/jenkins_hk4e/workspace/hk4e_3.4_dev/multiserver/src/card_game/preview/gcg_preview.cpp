// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/preview/gcg_preview.cpp

// Line 21: range 000000000D7B808C-000000000D7B8102
void __cdecl GCGSkillPreviewBase::GCGSkillPreviewBase(GCGSkillPreviewBase *const this, GCGSkillPreviewInfo *info)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGSkillPreviewBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGSkillPreviewBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_info >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->preview_info);
  this->preview_info = info;
};

// Line 26: range 000000000D7B8104-000000000D7B839D
void __fastcall GCGSkillPreviewHp::recordDamage(GCGSkillPreviewHp *const this, uint32_t guid, int32_t damage)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  std::map<unsigned int,bool>::mapped_type *v7; // rax
  _BYTE *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::map<unsigned int,int>::mapped_type *v14; // rax
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 guid:25 64 4 9 damage:25";
  *(_QWORD *)(v3 + 16) = GCGSkillPreviewHp::recordDamage;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = guid;
  *(_DWORD *)(v3 + 64) = damage;
  v6 = (unsigned __int64)std::map<unsigned int,int>::operator[](
                           &this->character_damage_info_map,
                           (const std::map<unsigned int,int>::key_type *)(v3 + 48));
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load4(v6);
  *(_DWORD *)v6 -= *(_DWORD *)(v3 + 64);
  v7 = std::map<unsigned int,bool>::operator[](
         &this->damage_flag_map,
         (const std::map<unsigned int,bool>::key_type *)(v3 + 48));
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(v7);
  }
  *v8 = 1;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/preview/gcg_preview.cpp",
    "recordDamage",
    29);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v16, (const char (*)[16])"[PREVIEW] guid:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
  v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])", damage:");
  v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 64));
  v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])", final:");
  v14 = std::map<unsigned int,int>::operator[](
          &this->character_damage_info_map,
          (const std::map<unsigned int,int>::key_type *)(v3 + 48));
  common::milog::MiLogStream::operator<<<int,(int *)0>(v13, v14);
  common::milog::MiLogStream::~MiLogStream(&v16);
  if ( v17 == (char *)v3 )
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

// Line 33: range 000000000D7B839E-000000000D7B8635
void __fastcall GCGSkillPreviewHp::recordHeal(GCGSkillPreviewHp *const this, uint32_t guid, int32_t heal)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  std::map<unsigned int,bool>::mapped_type *v7; // rax
  _BYTE *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::map<unsigned int,int>::mapped_type *v14; // rax
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 guid:32 64 4 7 heal:32";
  *(_QWORD *)(v3 + 16) = GCGSkillPreviewHp::recordHeal;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = guid;
  *(_DWORD *)(v3 + 64) = heal;
  v6 = (unsigned __int64)std::map<unsigned int,int>::operator[](
                           &this->character_damage_info_map,
                           (const std::map<unsigned int,int>::key_type *)(v3 + 48));
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load4(v6);
  *(_DWORD *)v6 += *(_DWORD *)(v3 + 64);
  v7 = std::map<unsigned int,bool>::operator[](
         &this->heal_flag_map,
         (const std::map<unsigned int,bool>::key_type *)(v3 + 48));
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(v7);
  }
  *v8 = 1;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/preview/gcg_preview.cpp",
    "recordHeal",
    36);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v16, (const char (*)[16])"[PREVIEW] guid:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
  v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])", heal:");
  v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 64));
  v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])", final:");
  v14 = std::map<unsigned int,int>::operator[](
          &this->character_damage_info_map,
          (const std::map<unsigned int,int>::key_type *)(v3 + 48));
  common::milog::MiLogStream::operator<<<int,(int *)0>(v13, v14);
  common::milog::MiLogStream::~MiLogStream(&v16);
  if ( v17 == (char *)v3 )
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

// Line 40: range 000000000D7B8636-000000000D7B8988
void __cdecl GCGSkillPreviewHp::toClient(GCGSkillPreviewHp *const this, proto::GCGSkillPreviewInfo *proto_preview_info)
{
  std::map<unsigned int,bool>::mapped_type *v2; // rax
  _BYTE *v3; // rdx
  char v4; // al
  std::map<unsigned int,bool>::mapped_type *v5; // rax
  _BYTE *v6; // rdx
  char v7; // al
  bool is_damage; // [rsp+1Ah] [rbp-76h]
  std::map<unsigned int,int>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,int>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  google::protobuf::Map<unsigned int,proto::GCGSkillPreviewHpInfo> *proto_damage_map; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,int> *__for_range; // [rsp+38h] [rbp-58h]
  std::pair<unsigned int const,int> *__in; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *guid; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *damage; // [rsp+50h] [rbp-40h]
  proto::GCGSkillPreviewHpInfo *proto_hp_info; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  proto_damage_map = proto::GCGSkillPreviewInfo::mutable_hp_info_map(proto_preview_info);
  __for_range = &this->character_damage_info_map;
  __for_begin._M_node = std::map<unsigned int,int>::begin(&this->character_damage_info_map)._M_node;
  __for_end._M_node = std::map<unsigned int,int>::end(&this->character_damage_info_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,int>(__in);
    damage = std::get<1ul,unsigned int const,int>(__in);
    proto_hp_info = google::protobuf::Map<unsigned int,proto::GCGSkillPreviewHpInfo>::operator[](proto_damage_map, guid);
    if ( !std::map<unsigned int,bool>::count(&this->damage_flag_map, guid) )
      goto LABEL_8;
    v2 = std::map<unsigned int,bool>::operator[](&this->damage_flag_map, guid);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v2);
    }
    if ( *v3 )
      v4 = 1;
    else
LABEL_8:
      v4 = 0;
    is_damage = v4;
    if ( !std::map<unsigned int,bool>::count(&this->heal_flag_map, guid) )
      goto LABEL_14;
    v5 = std::map<unsigned int,bool>::operator[](&this->heal_flag_map, guid);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v5);
    }
    if ( *v6 )
      v7 = 1;
    else
LABEL_14:
      v7 = 0;
    if ( is_damage && v7 )
    {
      if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(damage);
      }
      if ( *damage <= 0 )
      {
LABEL_23:
        proto::GCGSkillPreviewHpInfo::set_change_type(proto_hp_info, GCG_SKILL_HP_CHANGE_DAMAGE);
        goto LABEL_26;
      }
    }
    else
    {
      if ( is_damage )
        goto LABEL_23;
      if ( !v7 )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/preview/gcg_preview.cpp",
          "toClient",
          75);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v17, (const char (*)[16])off_1BA1EB80);
        common::milog::MiLogStream::~MiLogStream(&v17);
        goto LABEL_29;
      }
    }
    proto::GCGSkillPreviewHpInfo::set_change_type(proto_hp_info, GCG_SKILL_HP_CHANGE_HEAL);
LABEL_26:
    if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(damage);
    }
    proto::GCGSkillPreviewHpInfo::set_hp_change_value(proto_hp_info, abs32(*damage));
LABEL_29:
    std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator++(&__for_begin);
  }
};

// Line 84: range 000000000D7B898A-000000000D7B8A9A
void __fastcall GCGSkillPreviewChangeOnstageCharacter::recordPreviewOnstageCharacterChangeInfo(
        GCGSkillPreviewChangeOnstageCharacter *const this,
        uint32_t before_guid,
        uint32_t target_guid,
        __int64 a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 14 before_guid:83 64 4 14 target_guid:83";
  *(_QWORD *)(v5 + 16) = GCGSkillPreviewChangeOnstageCharacter::recordPreviewOnstageCharacterChangeInfo;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = before_guid;
  *(_DWORD *)(v5 + 64) = target_guid;
  std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int &,unsigned int &>(
    &this->change_vec,
    (unsigned int *)(v5 + 48),
    (unsigned int *)(v5 + 64),
    (unsigned int *)&this->change_vec,
    a5);
  if ( v9 == (char *)v5 )
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
};

// Line 89: range 000000000D7B8A9C-000000000D7B8BDC
void __cdecl GCGSkillPreviewChangeOnstageCharacter::toClient(
        GCGSkillPreviewChangeOnstageCharacter *const this,
        proto::GCGSkillPreviewInfo *proto_preview_info)
{
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+28h] [rbp-28h]
  std::pair<unsigned int,unsigned int> *__in; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *before_onstage_guid; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *target_onstage_guid; // [rsp+40h] [rbp-10h]
  proto::GCGSkillPreviewOnstageChangeInfo *proto_onstage_info; // [rsp+48h] [rbp-8h]

  __for_range = &this->change_vec;
  __for_begin._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin(&this->change_vec)._M_current;
  __for_end._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(&this->change_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
            &__for_begin,
            &__for_end) )
  {
    __in = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin);
    before_onstage_guid = std::get<0ul,unsigned int,unsigned int>(__in);
    target_onstage_guid = std::get<1ul,unsigned int,unsigned int>(__in);
    proto_onstage_info = proto::GCGSkillPreviewInfo::add_change_onstage_character_list(proto_preview_info);
    if ( *(_BYTE *)(((unsigned __int64)before_onstage_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)before_onstage_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)before_onstage_guid >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(before_onstage_guid);
    }
    proto::GCGSkillPreviewOnstageChangeInfo::set_source_onstage_card_guid(proto_onstage_info, *before_onstage_guid);
    if ( *(_BYTE *)(((unsigned __int64)target_onstage_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)target_onstage_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_onstage_guid >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(target_onstage_guid);
    }
    proto::GCGSkillPreviewOnstageChangeInfo::set_target_onstage_card_guid(proto_onstage_info, *target_onstage_guid);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
};

// Line 100: range 000000000D7B8BDE-000000000D7B8E82
void __cdecl GCGSkillPreviewReactionItem::toClient(
        GCGSkillPreviewReactionItem *const this,
        proto::GCGSkillPreviewElementReactionInfo *proto_reaction_info)
{
  __gnu_cxx::__normal_iterator<data::GCGTokenType*,std::vector<data::GCGTokenType> >::reference v2; // rax
  google::protobuf::uint32 *v3; // rdx
  __gnu_cxx::__normal_iterator<data::GCGTokenType*,std::vector<data::GCGTokenType> >::reference v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::vector<data::GCGTokenType>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<data::GCGTokenType>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  std::vector<data::GCGTokenType> *__for_range; // [rsp+28h] [rbp-38h]
  std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>> *__for_range_0; // [rsp+30h] [rbp-30h]
  std::vector<data::GCGTokenType> *__for_range_1; // [rsp+38h] [rbp-28h]
  std::pair<data::GCGTokenType,data::GCGTokenType> *__in; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,std::pair<data::GCGTokenType,data::GCGTokenType> >::type *source_token_type; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,std::pair<data::GCGTokenType,data::GCGTokenType> >::type *target_token_type; // [rsp+50h] [rbp-10h]
  proto::GCGSkillPreviewReactionInfo *proto_reaction; // [rsp+58h] [rbp-8h]

  __for_range = &this->result_source_element_attach_vec;
  __for_begin._M_current = std::vector<data::GCGTokenType>::begin(&this->result_source_element_attach_vec)._M_current;
  __for_end._M_current = std::vector<data::GCGTokenType>::end(&this->result_source_element_attach_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGTokenType *,std::vector<data::GCGTokenType>>(&__for_begin, &__for_end) )
  {
    v2 = __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator*(&__for_begin);
    v3 = (google::protobuf::uint32 *)v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::GCGSkillPreviewElementReactionInfo::add_source_list(proto_reaction_info, *v3);
    __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->reaction_element_pair_vec;
  __for_begin._M_current = (data::GCGTokenType *)std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>::begin(&this->reaction_element_pair_vec)._M_current;
  __for_end._M_current = (data::GCGTokenType *)std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<data::GCGTokenType,data::GCGTokenType> *,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>>(
            (const __gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType>*,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType>*,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>> > *)&__for_end) )
  {
    __in = __gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType> *,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType>*,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>> > *const)&__for_begin);
    source_token_type = std::get<0ul,data::GCGTokenType,data::GCGTokenType>(__in);
    target_token_type = std::get<1ul,data::GCGTokenType,data::GCGTokenType>(__in);
    proto_reaction = proto::GCGSkillPreviewElementReactionInfo::add_reaction_list(proto_reaction_info);
    if ( *(_BYTE *)(((unsigned __int64)source_token_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)source_token_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)source_token_type >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(source_token_type);
    }
    proto::GCGSkillPreviewReactionInfo::set_source_element(proto_reaction, *source_token_type);
    if ( *(_BYTE *)(((unsigned __int64)target_token_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)target_token_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_token_type >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(target_token_type);
    }
    proto::GCGSkillPreviewReactionInfo::set_target_element(proto_reaction, *target_token_type);
    __gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType> *,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType>*,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>> > *const)&__for_begin);
  }
  __for_range_1 = &this->result_fresh_element_attach_vec;
  __for_begin._M_current = std::vector<data::GCGTokenType>::begin(&this->result_fresh_element_attach_vec)._M_current;
  __for_end._M_current = std::vector<data::GCGTokenType>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGTokenType *,std::vector<data::GCGTokenType>>(&__for_begin, &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator*(&__for_begin);
    v5 = (google::protobuf::uint32 *)v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::GCGSkillPreviewElementReactionInfo::add_fresh_list(proto_reaction_info, *v5);
    __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator++(&__for_begin);
  }
};

// Line 118: range 000000000D7B8E84-000000000D7B8F51
void __cdecl GCGSkillPreviewReaction::toClient(
        GCGSkillPreviewReaction *const this,
        proto::GCGSkillPreviewInfo *proto_preview_info)
{
  std::map<unsigned int,GCGSkillPreviewReactionItem>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,GCGSkillPreviewReactionItem>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  google::protobuf::Map<unsigned int,proto::GCGSkillPreviewElementReactionInfo> *proto_reaction_map; // [rsp+20h] [rbp-30h]
  std::map<unsigned int,GCGSkillPreviewReactionItem> *__for_range; // [rsp+28h] [rbp-28h]
  std::pair<unsigned int const,GCGSkillPreviewReactionItem> *__in; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int const,GCGSkillPreviewReactionItem> >::type *guid; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int const,GCGSkillPreviewReactionItem> >::type *reaction_info; // [rsp+40h] [rbp-10h]
  proto::GCGSkillPreviewElementReactionInfo *proto_reaction_info; // [rsp+48h] [rbp-8h]

  proto_reaction_map = proto::GCGSkillPreviewInfo::mutable_reaction_info_map(proto_preview_info);
  __for_range = &this->reaction_map;
  __for_begin._M_node = std::map<unsigned int,GCGSkillPreviewReactionItem>::begin(&this->reaction_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGSkillPreviewReactionItem>::end(&this->reaction_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGSkillPreviewReactionItem>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,GCGSkillPreviewReactionItem>(__in);
    reaction_info = std::get<1ul,unsigned int const,GCGSkillPreviewReactionItem>(__in);
    proto_reaction_info = google::protobuf::Map<unsigned int,proto::GCGSkillPreviewElementReactionInfo>::operator[](
                            proto_reaction_map,
                            guid);
    GCGSkillPreviewReactionItem::toClient(reaction_info, proto_reaction_info);
    std::_Rb_tree_iterator<std::pair<unsigned int const,GCGSkillPreviewReactionItem>>::operator++(&__for_begin);
  }
};

// Line 128: range 000000000D7B8F52-000000000D7B914E
void __cdecl GCGSkillPreviewCardItem::toClient(
        GCGSkillPreviewCardItem *const this,
        proto::GCGSkillPreviewCardInfo *proto_card_info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id);
  }
  proto::GCGSkillPreviewCardInfo::set_controller_id(proto_card_info, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::GCGSkillPreviewCardInfo::set_zone_type(proto_card_info, this->zone_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->replace_card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->replace_card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->replace_card_id);
  }
  if ( this->replace_card_id )
  {
    proto::GCGSkillPreviewCardInfo::set_card_id(proto_card_info, this->replace_card_id);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->card_id);
    }
    proto::GCGSkillPreviewCardInfo::set_card_id(proto_card_info, this->card_id);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_guid);
  }
  proto::GCGSkillPreviewCardInfo::set_card_guid(proto_card_info, this->card_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->owner_card_guid);
  }
  proto::GCGSkillPreviewCardInfo::set_owner_card_guid(proto_card_info, this->owner_card_guid);
};

// Line 146: range 000000000D7B9150-000000000D7B91E6
void __cdecl GCGSkillPreviewAddCard::toClient(
        GCGSkillPreviewAddCard *const this,
        proto::GCGSkillPreviewInfo *proto_preview_info)
{
  std::vector<GCGSkillPreviewCardItem>::iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<GCGSkillPreviewCardItem>::iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  std::vector<GCGSkillPreviewCardItem> *__for_range; // [rsp+28h] [rbp-18h]
  GCGSkillPreviewCardItem *card_info; // [rsp+30h] [rbp-10h]
  proto::GCGSkillPreviewCardInfo *proto_card_info; // [rsp+38h] [rbp-8h]

  __for_range = &this->add_card_vec;
  __for_begin._M_current = std::vector<GCGSkillPreviewCardItem>::begin(&this->add_card_vec)._M_current;
  __for_end._M_current = std::vector<GCGSkillPreviewCardItem>::end(&this->add_card_vec)._M_current;
  while ( __gnu_cxx::operator!=<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>(
            &__for_begin,
            &__for_end) )
  {
    card_info = __gnu_cxx::__normal_iterator<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>::operator*(&__for_begin);
    proto_card_info = proto::GCGSkillPreviewInfo::add_add_card_list(proto_preview_info);
    GCGSkillPreviewCardItem::toClient(card_info, proto_card_info);
    __gnu_cxx::__normal_iterator<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>::operator++(&__for_begin);
  }
};

// Line 155: range 000000000D7B91E8-000000000D7B928E
void __cdecl GCGSkillPreviewAddCardForRefresh::toClient(
        GCGSkillPreviewAddCardForRefresh *const this,
        proto::GCGSkillPreviewInfo *proto_preview_info)
{
  std::vector<GCGSkillPreviewCardItem>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<GCGSkillPreviewCardItem>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::vector<GCGSkillPreviewCardItem> *__for_range; // [rsp+20h] [rbp-20h]
  GCGSkillPreviewCardItem *card_info; // [rsp+28h] [rbp-18h]
  proto::GCGSkillPreviewExtraInfo *proto_extra_info; // [rsp+30h] [rbp-10h]
  proto::GCGSkillPreviewCardInfo *proto_card_info; // [rsp+38h] [rbp-8h]

  __for_range = &this->refresh_card_vec;
  __for_begin._M_current = std::vector<GCGSkillPreviewCardItem>::begin(&this->refresh_card_vec)._M_current;
  __for_end._M_current = std::vector<GCGSkillPreviewCardItem>::end(&this->refresh_card_vec)._M_current;
  while ( __gnu_cxx::operator!=<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>(
            &__for_begin,
            &__for_end) )
  {
    card_info = __gnu_cxx::__normal_iterator<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>::operator*(&__for_begin);
    proto_extra_info = proto::GCGSkillPreviewInfo::mutable_extra_info(proto_preview_info);
    proto_card_info = proto::GCGSkillPreviewExtraInfo::add_refresh_card_when_exist_list(proto_extra_info);
    GCGSkillPreviewCardItem::toClient(card_info, proto_card_info);
    __gnu_cxx::__normal_iterator<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>::operator++(&__for_begin);
  }
};

// Line 165: range 000000000D7B9290-000000000D7B9336
void __cdecl GCGSkillPreviewAddCardForFull::toClient(
        GCGSkillPreviewAddCardForFull *const this,
        proto::GCGSkillPreviewInfo *proto_preview_info)
{
  std::vector<GCGSkillPreviewCardItem>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<GCGSkillPreviewCardItem>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::vector<GCGSkillPreviewCardItem> *__for_range; // [rsp+20h] [rbp-20h]
  GCGSkillPreviewCardItem *card_info; // [rsp+28h] [rbp-18h]
  proto::GCGSkillPreviewExtraInfo *proto_extra_info; // [rsp+30h] [rbp-10h]
  proto::GCGSkillPreviewCardInfo *proto_card_info; // [rsp+38h] [rbp-8h]

  __for_range = &this->not_add_for_full_card_vec;
  __for_begin._M_current = std::vector<GCGSkillPreviewCardItem>::begin(&this->not_add_for_full_card_vec)._M_current;
  __for_end._M_current = std::vector<GCGSkillPreviewCardItem>::end(&this->not_add_for_full_card_vec)._M_current;
  while ( __gnu_cxx::operator!=<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>(
            &__for_begin,
            &__for_end) )
  {
    card_info = __gnu_cxx::__normal_iterator<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>::operator*(&__for_begin);
    proto_extra_info = proto::GCGSkillPreviewInfo::mutable_extra_info(proto_preview_info);
    proto_card_info = proto::GCGSkillPreviewExtraInfo::add_fail_added_when_full_list(proto_extra_info);
    GCGSkillPreviewCardItem::toClient(card_info, proto_card_info);
    __gnu_cxx::__normal_iterator<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>::operator++(&__for_begin);
  }
};

// Line 175: range 000000000D7B9338-000000000D7B93CE
void __cdecl GCGSkillPreviewRmCard::toClient(
        GCGSkillPreviewRmCard *const this,
        proto::GCGSkillPreviewInfo *proto_preview_info)
{
  std::vector<GCGSkillPreviewCardItem>::iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<GCGSkillPreviewCardItem>::iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  std::vector<GCGSkillPreviewCardItem> *__for_range; // [rsp+28h] [rbp-18h]
  GCGSkillPreviewCardItem *card_info; // [rsp+30h] [rbp-10h]
  proto::GCGSkillPreviewCardInfo *proto_card_info; // [rsp+38h] [rbp-8h]

  __for_range = &this->rm_card_vec;
  __for_begin._M_current = std::vector<GCGSkillPreviewCardItem>::begin(&this->rm_card_vec)._M_current;
  __for_end._M_current = std::vector<GCGSkillPreviewCardItem>::end(&this->rm_card_vec)._M_current;
  while ( __gnu_cxx::operator!=<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>(
            &__for_begin,
            &__for_end) )
  {
    card_info = __gnu_cxx::__normal_iterator<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>::operator*(&__for_begin);
    proto_card_info = proto::GCGSkillPreviewInfo::add_rm_card_list(proto_preview_info);
    GCGSkillPreviewCardItem::toClient(card_info, proto_card_info);
    __gnu_cxx::__normal_iterator<GCGSkillPreviewCardItem *,std::vector<GCGSkillPreviewCardItem>>::operator++(&__for_begin);
  }
};

// Line 184: range 000000000D7B93D0-000000000D7B9418
bool __cdecl GCGSkillPreviewTokenChange::checkNeedFilter(
        GCGSkillPreviewTokenChange *const this,
        GCGTokenType token_type)
{
  return token_type == GCG_TOKEN_HP
      || token_type == GCG_TOKEN_ATTACH_CRYO
      || token_type == GCG_TOKEN_ATTACH_HYDRO
      || token_type == GCG_TOKEN_ATTACH_PYRO
      || token_type == GCG_TOKEN_ATTACH_ELECTRO
      || token_type == GCG_TOKEN_ATTACH_GEO
      || token_type == GCG_TOKEN_ATTACH_DENDRO
      || token_type == GCG_TOKEN_ATTACH_ANEMO;
};

// Line 201: range 000000000D7B941A-000000000D7B9762
void __fastcall GCGSkillPreviewTokenChange::recordTokenChange(
        GCGSkillPreviewTokenChange *const this,
        uint32_t card_guid,
        GCGTokenType token_type,
        uint32_t before,
        uint32_t after)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  int v8; // r14d
  std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  uint32_t v11; // r14d
  std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::mapped_type *v12; // rdx
  uint32_t *p_after_value; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned int val; // [rsp+2Ch] [rbp-E4h] BYREF
  GCGSkillPreviewTokenItem *token_item; // [rsp+30h] [rbp-E0h]
  std::map<data::GCGTokenType,GCGSkillPreviewTokenValue> *token_map; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+60h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 13 card_guid:200 64 4 14 token_type:200 80 4 10 before:200 96 4 9 after:200";
  *(_QWORD *)(v5 + 16) = GCGSkillPreviewTokenChange::recordTokenChange;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -202116348;
  *(_DWORD *)(v5 + 48) = card_guid;
  *(_DWORD *)(v5 + 64) = token_type;
  *(_DWORD *)(v5 + 80) = before;
  *(_DWORD *)(v5 + 96) = after;
  if ( !GCGSkillPreviewTokenChange::checkNeedFilter(this, *(GCGTokenType *)(v5 + 64)) )
  {
    token_item = std::map<unsigned int,GCGSkillPreviewTokenItem>::operator[](
                   &this->token_change_map,
                   (const std::map<unsigned int,GCGSkillPreviewTokenItem>::key_type *)(v5 + 48));
    token_map = &token_item->token_map;
    if ( !std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::count(
            &token_item->token_map,
            (const std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::key_type *)(v5 + 64)) )
    {
      v8 = *(_DWORD *)(v5 + 80);
      v9 = std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::operator[](
             token_map,
             (const std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::key_type *)(v5 + 64));
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v9);
      }
      *v10 = v8;
    }
    v11 = *(_DWORD *)(v5 + 96);
    v12 = std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::operator[](
            token_map,
            (const std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::key_type *)(v5 + 64));
    p_after_value = &v12->after_value;
    if ( *(_BYTE *)(((unsigned __int64)p_after_value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_after_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_after_value >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(p_after_value);
    }
    v12->after_value = v11;
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/preview/gcg_preview.cpp",
      "recordTokenChange",
      213);
    v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v27,
            (const char (*)[29])"[PREVIEW] token change card:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])", token:");
    val = *(_DWORD *)(v5 + 64);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])", before:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 80));
    v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])", after:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v5 + 96));
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  if ( v28 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 218: range 000000000D7B9764-000000000D7B9B6F
void __cdecl GCGSkillPreviewTokenChange::toClient(
        GCGSkillPreviewTokenChange *const this,
        proto::GCGSkillPreviewInfo *proto_preview_info)
{
  GCGSkillPreviewInfo *preview_info; // rcx
  GCGSkillPreviewInfo *v3; // rcx
  char v4; // al
  common::milog::MiLogStream *v5; // rax
  std::map<unsigned int,GCGSkillPreviewTokenItem>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,GCGSkillPreviewTokenItem>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::iterator __for_begin_0; // [rsp+28h] [rbp-98h] BYREF
  std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::iterator __for_end_0; // [rsp+30h] [rbp-90h] BYREF
  google::protobuf::Map<unsigned int,proto::GCGSkillPreviewTokenChangeInfo> *proto_card_token_change_map; // [rsp+38h] [rbp-88h]
  std::map<unsigned int,GCGSkillPreviewTokenItem> *__for_range; // [rsp+40h] [rbp-80h]
  std::pair<unsigned int const,GCGSkillPreviewTokenItem> *__in; // [rsp+48h] [rbp-78h]
  std::tuple_element<0,std::pair<unsigned int const,GCGSkillPreviewTokenItem> >::type *card_guid; // [rsp+50h] [rbp-70h]
  std::tuple_element<1,std::pair<unsigned int const,GCGSkillPreviewTokenItem> >::type *token_info; // [rsp+58h] [rbp-68h]
  proto::GCGSkillPreviewTokenChangeInfo *proto_card_token_change_info; // [rsp+60h] [rbp-60h]
  std::map<data::GCGTokenType,GCGSkillPreviewTokenValue> *__for_range_0; // [rsp+68h] [rbp-58h]
  std::pair<const data::GCGTokenType,GCGSkillPreviewTokenValue> *v17; // [rsp+70h] [rbp-50h]
  std::tuple_element<0,std::pair<const data::GCGTokenType,GCGSkillPreviewTokenValue> >::type *token_type; // [rsp+78h] [rbp-48h]
  std::tuple_element<1,std::pair<const data::GCGTokenType,GCGSkillPreviewTokenValue> >::type *token_value; // [rsp+80h] [rbp-40h]
  proto::GCGSkillPreviewTokenInfo *proto_token_info; // [rsp+88h] [rbp-38h]
  common::milog::MiLogStream v21; // [rsp+90h] [rbp-30h] BYREF

  proto_card_token_change_map = proto::GCGSkillPreviewInfo::mutable_card_token_change_map(proto_preview_info);
  __for_range = &this->token_change_map;
  __for_begin._M_node = std::map<unsigned int,GCGSkillPreviewTokenItem>::begin(&this->token_change_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGSkillPreviewTokenItem>::end(&this->token_change_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGSkillPreviewTokenItem>>::operator*(&__for_begin);
    card_guid = std::get<0ul,unsigned int const,GCGSkillPreviewTokenItem>(__in);
    token_info = std::get<1ul,unsigned int const,GCGSkillPreviewTokenItem>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&this->preview_info >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->preview_info);
    preview_info = this->preview_info;
    if ( *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_guid);
    }
    if ( GCGSkillPreviewInfo::isAddedCard(preview_info, *card_guid) )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->preview_info >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->preview_info);
    v3 = this->preview_info;
    if ( *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_guid);
    }
    if ( GCGSkillPreviewInfo::isDeletedCard(v3, *card_guid) )
LABEL_13:
      v4 = 1;
    else
      v4 = 0;
    if ( v4 )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/preview/gcg_preview.cpp",
        "toClient",
        224);
      v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v21,
             (const char (*)[41])"[PREVIEW] token change ignore card_guid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, card_guid);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      proto_card_token_change_info = google::protobuf::Map<unsigned int,proto::GCGSkillPreviewTokenChangeInfo>::operator[](
                                       proto_card_token_change_map,
                                       card_guid);
      __for_range_0 = &token_info->token_map;
      __for_begin_0._M_node = std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::begin(&token_info->token_map)._M_node;
      __for_end_0._M_node = std::map<data::GCGTokenType,GCGSkillPreviewTokenValue>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v17 = std::_Rb_tree_iterator<std::pair<data::GCGTokenType const,GCGSkillPreviewTokenValue>>::operator*(&__for_begin_0);
        token_type = std::get<0ul,data::GCGTokenType const,GCGSkillPreviewTokenValue>(v17);
        token_value = std::get<1ul,data::GCGTokenType const,GCGSkillPreviewTokenValue>(v17);
        proto_token_info = proto::GCGSkillPreviewTokenChangeInfo::add_token_change_list(proto_card_token_change_info);
        if ( *(_BYTE *)(((unsigned __int64)token_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)token_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(token_type);
        }
        proto::GCGSkillPreviewTokenInfo::set_token_type(proto_token_info, *token_type);
        if ( *(_BYTE *)(((unsigned __int64)token_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)token_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token_value >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(token_value);
        }
        proto::GCGSkillPreviewTokenInfo::set_before_value(proto_token_info, token_value->before_value);
        if ( *(_BYTE *)(((unsigned __int64)&token_value->after_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)token_value + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&token_value->after_value >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&token_value->after_value);
        }
        proto::GCGSkillPreviewTokenInfo::set_after_value(proto_token_info, token_value->after_value);
        std::_Rb_tree_iterator<std::pair<data::GCGTokenType const,GCGSkillPreviewTokenValue>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,GCGSkillPreviewTokenItem>>::operator++(&__for_begin);
  }
};

// Line 239: range 000000000D7B9B70-000000000D7B9DA2
void __fastcall GCGSkillPreviewContext::recordCharacterHpChange(
        GCGSkillPreviewContext *const this,
        uint32_t guid,
        bool is_damage,
        int32_t value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  GCGSkillPreviewInfo *preview_hp_info; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 8 guid:238 64 4 9 value:238";
  *(_QWORD *)(v4 + 16) = GCGSkillPreviewContext::recordCharacterHpChange;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = guid;
  *(_DWORD *)(v4 + 64) = value;
  if ( *(int *)(v4 + 64) >= 0 )
  {
    preview_hp_info = &this->preview_info;
    if ( is_damage )
      GCGSkillPreviewHp::recordDamage(&preview_hp_info->hp_info, *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 64));
    else
      GCGSkillPreviewHp::recordHeal(&preview_hp_info->hp_info, *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/preview/gcg_preview.cpp",
      "recordCharacterHpChange",
      242);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v15, (const char (*)[6])"guid:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])", is_damage:");
    v10 = common::milog::MiLogStream::operator<<(v9, is_damage);
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])", value:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v4 )
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

// Line 257: range 000000000D7B9DA4-000000000D7BA168
void __fastcall GCGSkillPreviewContext::refreshPreviewInitReactionState(
        GCGSkillPreviewContext *const this,
        uint32_t guid,
        const std::map<data::GCGTokenType,unsigned int> *token_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<data::GCGTokenType>::reference v6; // rax
  _DWORD *v7; // rdx
  const std::map<data::GCGTokenType,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  common::milog::MiLogStream *v10; // r14
  std::set<data::GCGTokenType>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::set<data::GCGTokenType>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  GCGSkillPreviewReaction *reaction_info; // [rsp+38h] [rbp-108h]
  GCGSkillPreviewReactionItem *card_reaction_info; // [rsp+40h] [rbp-100h]
  std::set<data::GCGTokenType> *__for_range; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 token_type:266 64 4 8 guid:256 80 48 13 token_set:265";
  *(_QWORD *)(v3 + 16) = GCGSkillPreviewContext::refreshPreviewInitReactionState;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 64) = guid;
  reaction_info = &this->preview_info.reaction_info;
  if ( !std::map<unsigned int,GCGSkillPreviewReactionItem>::count(
          &this->preview_info.reaction_info.reaction_map,
          (const std::map<unsigned int,GCGSkillPreviewReactionItem>::key_type *)(v3 + 64)) )
  {
    card_reaction_info = std::map<unsigned int,GCGSkillPreviewReactionItem>::operator[](
                           &reaction_info->reaction_map,
                           (const std::map<unsigned int,GCGSkillPreviewReactionItem>::key_type *)(v3 + 64));
    GCGUtils::getElementSet<data::GCGTokenType>((std::set<data::GCGTokenType> *)(v3 + 80));
    __for_range = (std::set<data::GCGTokenType> *)(v3 + 80);
    __for_begin._M_node = std::set<data::GCGTokenType>::begin((const std::set<data::GCGTokenType> *const)(v3 + 80))._M_node;
    __for_end._M_node = std::set<data::GCGTokenType>::end((const std::set<data::GCGTokenType> *const)(v3 + 80))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = std::_Rb_tree_const_iterator<data::GCGTokenType>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v3 + 48) = *v7;
      if ( std::map<data::GCGTokenType,unsigned int>::count(
             token_map,
             (const std::map<data::GCGTokenType,unsigned int>::key_type *)(v3 + 48)) )
      {
        v8 = std::map<data::GCGTokenType,unsigned int>::at(
               token_map,
               (const std::map<data::GCGTokenType,unsigned int>::key_type *)(v3 + 48));
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        if ( *v9 )
          std::vector<data::GCGTokenType>::push_back(
            &card_reaction_info->source_element_attach_vec,
            (const std::vector<data::GCGTokenType>::value_type *)(v3 + 48));
      }
      std::_Rb_tree_const_iterator<data::GCGTokenType>::operator++(&__for_begin);
    }
    std::vector<data::GCGTokenType>::operator=(
      &card_reaction_info->change_element_attach_vec,
      &card_reaction_info->source_element_attach_vec);
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/preview/gcg_preview.cpp",
      "refreshPreviewInitReactionState",
      279);
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v17,
            (const char (*)[20])"reaction copy size:");
    __for_end._M_node = (std::_Rb_tree_const_iterator<data::GCGTokenType>::_Base_ptr)std::vector<data::GCGTokenType>::size(&card_reaction_info->source_element_attach_vec);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream(&v17);
    std::set<data::GCGTokenType>::~set((std::set<data::GCGTokenType> *const)(v3 + 80));
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 283: range 000000000D7BA1E2-000000000D7BA5C7
void __fastcall GCGSkillPreviewContext::recordPreviewReaction(
        GCGSkillPreviewContext *const this,
        uint32_t guid,
        GCGTokenType source_type,
        GCGTokenType target_type,
        bool is_reaction)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  data::GCGTokenType *M_current; // r14
  std::vector<data::GCGTokenType>::iterator v11; // rax
  std::vector<data::GCGTokenType> *p_change_element_attach_vec; // r14
  data::GCGTokenType *v13; // r8
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  unsigned int v25; // [rsp+24h] [rbp-ECh] BYREF
  __gnu_cxx::__normal_iterator<const data::GCGTokenType*,std::vector<data::GCGTokenType> > __position; // [rsp+28h] [rbp-E8h] BYREF
  GCGSkillPreviewReaction *reaction_info; // [rsp+30h] [rbp-E0h]
  GCGSkillPreviewReactionItem *card_reaction_info; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+60h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 8 guid:282 64 4 15 source_type:282 80 4 15 target_type:282 96 8 14 erase_iter:295";
  *(_QWORD *)(v5 + 16) = GCGSkillPreviewContext::recordPreviewReaction;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -202116352;
  *(_DWORD *)(v5 + 48) = guid;
  *(_DWORD *)(v5 + 64) = source_type;
  *(_DWORD *)(v5 + 80) = target_type;
  reaction_info = &this->preview_info.reaction_info;
  if ( !std::map<unsigned int,GCGSkillPreviewReactionItem>::count(
          &this->preview_info.reaction_info.reaction_map,
          (const std::map<unsigned int,GCGSkillPreviewReactionItem>::key_type *)(v5 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/preview/gcg_preview.cpp",
      "recordPreviewReaction",
      287);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v29,
           (const char (*)[28])"recordPreviewReaction guid:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" not init");
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  card_reaction_info = std::map<unsigned int,GCGSkillPreviewReactionItem>::operator[](
                         &reaction_info->reaction_map,
                         (const std::map<unsigned int,GCGSkillPreviewReactionItem>::key_type *)(v5 + 48));
  if ( is_reaction )
  {
    M_current = std::vector<data::GCGTokenType>::end(&card_reaction_info->change_element_attach_vec)._M_current;
    v11._M_current = std::vector<data::GCGTokenType>::begin(&card_reaction_info->change_element_attach_vec)._M_current;
    *(__gnu_cxx::__normal_iterator<data::GCGTokenType*,std::vector<data::GCGTokenType> > *)(v5 + 96) = std::remove_if<__gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>,GCGSkillPreviewContext::recordPreviewReaction(unsigned int,data::GCGTokenType,data::GCGTokenType,bool)::{lambda(data::GCGTokenType)#1}>(v11, (__gnu_cxx::__normal_iterator<data::GCGTokenType*,std::vector<data::GCGTokenType> >)M_current, (GCGSkillPreviewContext::recordPreviewReaction::<lambda(GCGTokenType)>)(v5 + 64));
    p_change_element_attach_vec = &card_reaction_info->change_element_attach_vec;
    __gnu_cxx::__normal_iterator<data::GCGTokenType const*,std::vector<data::GCGTokenType>>::__normal_iterator<data::GCGTokenType*>(
      &__position,
      (const __gnu_cxx::__normal_iterator<data::GCGTokenType*,std::vector<data::GCGTokenType> > *)(v5 + 96));
    std::vector<data::GCGTokenType>::erase(p_change_element_attach_vec, __position);
    std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>::emplace_back<data::GCGTokenType&,data::GCGTokenType&>(
      &card_reaction_info->reaction_element_pair_vec,
      (data::GCGTokenType *)(v5 + 64),
      (data::GCGTokenType *)(v5 + 80),
      (data::GCGTokenType *)&card_reaction_info->reaction_element_pair_vec,
      v13);
  }
  else
  {
    std::vector<data::GCGTokenType>::push_back(
      &card_reaction_info->change_element_attach_vec,
      (const std::vector<data::GCGTokenType>::value_type *)(v5 + 80));
  }
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/preview/gcg_preview.cpp",
    "recordPreviewReaction",
    305);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v29, (const char (*)[16])"[PREVIEW] guid:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
  v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])", source:");
  val = *(_DWORD *)(v5 + 64);
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
  v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])", target:");
  v25 = *(_DWORD *)(v5 + 80);
  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &v25);
  v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])", reaction:");
  common::milog::MiLogStream::operator<<(v20, is_reaction);
  common::milog::MiLogStream::~MiLogStream(&v29);
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 296: range 000000000D7BA16A-000000000D7BA1E1
bool __cdecl GCGSkillPreviewContext::recordPreviewReaction(unsigned int,data::GCGTokenType,data::GCGTokenType,bool)::{lambda(data::GCGTokenType)#1}::operator()(
        const GCGSkillPreviewContext::recordPreviewReaction::<lambda(GCGTokenType)> *const __closure,
        GCGTokenType token_type)
{
  GCGTokenType *source_type; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  source_type = __closure->__source_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__source_type >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__source_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__source_type >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__source_type);
  }
  return token_type == *source_type;
};

// Line 310: range 000000000D7BA5C8-000000000D7BA79E
void __fastcall GCGSkillPreviewContext::recordPreviewOnstageCharacterChangeInfo(
        GCGSkillPreviewContext *const this,
        uint32_t before_guid,
        uint32_t target_guid,
        __int64 a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 15 before_guid:309 64 4 15 target_guid:309";
  *(_QWORD *)(v5 + 16) = GCGSkillPreviewContext::recordPreviewOnstageCharacterChangeInfo;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = before_guid;
  *(_DWORD *)(v5 + 64) = target_guid;
  GCGSkillPreviewChangeOnstageCharacter::recordPreviewOnstageCharacterChangeInfo(
    &this->preview_info.onstage_character_change_info,
    *(_DWORD *)(v5 + 48),
    *(_DWORD *)(v5 + 64),
    *(unsigned int *)(v5 + 48),
    a5);
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/preview/gcg_preview.cpp",
    "recordPreviewOnstageCharacterChangeInfo",
    313);
  v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
         &v12,
         (const char (*)[23])"[PREVIEW] before_guid:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])", target_guid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 64));
  common::milog::MiLogStream::~MiLogStream(&v12);
  if ( v13 == (char *)v5 )
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
};

// Line 317: range 000000000D7BA7A0-000000000D7BA7BA
void __cdecl GCGSkillPreviewContext::genPreviewResult(GCGSkillPreviewContext *const this)
{
  GCGSkillPreviewContext::genPreviewReaction(this);
};

// Line 324: range 000000000D7BA7BC-000000000D7BB171
void __cdecl GCGSkillPreviewContext::genPreviewReaction(GCGSkillPreviewContext *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  data::GCGTokenType *M_current; // r14
  std::vector<data::GCGTokenType>::iterator v5; // rax
  data::GCGTokenType *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  data::GCGTokenType *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  data::GCGTokenType *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rax
  data::GCGTokenType *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::map<unsigned int,GCGSkillPreviewReactionItem>::iterator __for_begin; // [rsp+18h] [rbp-1D8h] BYREF
  std::map<unsigned int,GCGSkillPreviewReactionItem>::iterator __for_end; // [rsp+20h] [rbp-1D0h] BYREF
  std::vector<data::GCGTokenType>::iterator __for_begin_0; // [rsp+28h] [rbp-1C8h] BYREF
  std::vector<data::GCGTokenType>::iterator __for_end_0; // [rsp+30h] [rbp-1C0h] BYREF
  std::vector<data::GCGTokenType>::iterator __for_begin_1; // [rsp+38h] [rbp-1B8h] BYREF
  std::vector<data::GCGTokenType>::iterator __for_end_1; // [rsp+40h] [rbp-1B0h] BYREF
  GCGSkillPreviewReaction *reaction_info; // [rsp+48h] [rbp-1A8h]
  std::map<unsigned int,GCGSkillPreviewReactionItem> *__for_range; // [rsp+50h] [rbp-1A0h]
  std::pair<unsigned int const,GCGSkillPreviewReactionItem> *__in; // [rsp+58h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,GCGSkillPreviewReactionItem> >::type *guid; // [rsp+60h] [rbp-190h]
  std::tuple_element<1,std::pair<unsigned int const,GCGSkillPreviewReactionItem> >::type *reaction_info_0; // [rsp+68h] [rbp-188h]
  std::vector<data::GCGTokenType> *__for_range_0; // [rsp+70h] [rbp-180h]
  std::vector<data::GCGTokenType> *__for_range_1; // [rsp+78h] [rbp-178h]
  std::vector<data::GCGTokenType> *__for_range_2; // [rsp+80h] [rbp-170h]
  std::vector<data::GCGTokenType> *__for_range_3; // [rsp+88h] [rbp-168h]
  std::vector<data::GCGTokenType> *__for_range_4; // [rsp+90h] [rbp-160h]
  std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>> *__for_range_5; // [rsp+98h] [rbp-158h]
  std::pair<data::GCGTokenType,data::GCGTokenType> *v35; // [rsp+A0h] [rbp-150h]
  std::tuple_element<0,std::pair<data::GCGTokenType,data::GCGTokenType> >::type *source_token; // [rsp+A8h] [rbp-148h]
  std::tuple_element<1,std::pair<data::GCGTokenType,data::GCGTokenType> >::type *target_token; // [rsp+B0h] [rbp-140h]
  data::GCGTokenType *token_2; // [rsp+B8h] [rbp-138h]
  data::GCGTokenType *token_1; // [rsp+C0h] [rbp-130h]
  data::GCGTokenType *token_0; // [rsp+C8h] [rbp-128h]
  data::GCGTokenType *token; // [rsp+D0h] [rbp-120h]
  data::GCGTokenType *change_token_type; // [rsp+D8h] [rbp-118h]
  common::milog::MiLogStream v43; // [rsp+E0h] [rbp-110h] BYREF
  std::string val; // [rsp+100h] [rbp-F0h] BYREF
  char v45[208]; // [rsp+120h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 6 ss:346 80 48 26 source_exist_token_set:331";
  *(_QWORD *)(v1 + 16) = GCGSkillPreviewContext::genPreviewReaction;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  reaction_info = &this->preview_info.reaction_info;
  __for_range = &this->preview_info.reaction_info.reaction_map;
  __for_begin._M_node = std::map<unsigned int,GCGSkillPreviewReactionItem>::begin(&this->preview_info.reaction_info.reaction_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGSkillPreviewReactionItem>::end(&this->preview_info.reaction_info.reaction_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGSkillPreviewReactionItem>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,GCGSkillPreviewReactionItem>(__in);
    reaction_info_0 = std::get<1ul,unsigned int const,GCGSkillPreviewReactionItem>(__in);
    M_current = std::vector<data::GCGTokenType>::end(&reaction_info_0->source_element_attach_vec)._M_current;
    v5._M_current = std::vector<data::GCGTokenType>::begin(&reaction_info_0->source_element_attach_vec)._M_current;
    std::set<data::GCGTokenType>::set<__gnu_cxx::__normal_iterator<data::GCGTokenType*,std::vector<data::GCGTokenType>>>(
      (std::set<data::GCGTokenType> *const)(v1 + 80),
      v5,
      (__gnu_cxx::__normal_iterator<data::GCGTokenType*,std::vector<data::GCGTokenType> >)M_current);
    __for_range_0 = &reaction_info_0->change_element_attach_vec;
    __for_begin_0._M_current = std::vector<data::GCGTokenType>::begin(&reaction_info_0->change_element_attach_vec)._M_current;
    __for_end_0._M_current = std::vector<data::GCGTokenType>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGTokenType *,std::vector<data::GCGTokenType>>(&__for_begin_0, &__for_end_0) )
    {
      change_token_type = __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator*(&__for_begin_0);
      __for_end_1._M_current = (data::GCGTokenType *)std::set<data::GCGTokenType>::end((const std::set<data::GCGTokenType> *const)(v1 + 80))._M_node;
      __for_begin_1._M_current = (data::GCGTokenType *)std::set<data::GCGTokenType>::find(
                                                         (std::set<data::GCGTokenType> *const)(v1 + 80),
                                                         change_token_type)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_const_iterator<data::GCGTokenType>::_Self *)&__for_begin_1,
             (const std::_Rb_tree_const_iterator<data::GCGTokenType>::_Self *)&__for_end_1) )
      {
        std::vector<data::GCGTokenType>::push_back(&reaction_info_0->result_fresh_element_attach_vec, change_token_type);
      }
      else
      {
        std::vector<data::GCGTokenType>::push_back(
          &reaction_info_0->result_source_element_attach_vec,
          change_token_type);
      }
      __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator++(&__for_begin_0);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48));
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
      "[source:");
    __for_range_1 = &reaction_info_0->source_element_attach_vec;
    __for_begin_1._M_current = std::vector<data::GCGTokenType>::begin(&reaction_info_0->source_element_attach_vec)._M_current;
    __for_end_1._M_current = std::vector<data::GCGTokenType>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGTokenType *,std::vector<data::GCGTokenType>>(&__for_begin_1, &__for_end_1) )
    {
      v6 = __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator*(&__for_begin_1);
      token = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
             (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
             *token);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, " ");
      __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator++(&__for_begin_1);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
      "] [change:");
    __for_range_2 = &reaction_info_0->change_element_attach_vec;
    __for_begin_1._M_current = std::vector<data::GCGTokenType>::begin(&reaction_info_0->change_element_attach_vec)._M_current;
    __for_end_1._M_current = std::vector<data::GCGTokenType>::end(__for_range_2)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGTokenType *,std::vector<data::GCGTokenType>>(&__for_begin_1, &__for_end_1) )
    {
      v8 = __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator*(&__for_begin_1);
      token_0 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
             (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
             *token_0);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, " ");
      __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator++(&__for_begin_1);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
      "] [result source:");
    __for_range_3 = &reaction_info_0->result_source_element_attach_vec;
    __for_begin_1._M_current = std::vector<data::GCGTokenType>::begin(&reaction_info_0->result_source_element_attach_vec)._M_current;
    __for_end_1._M_current = std::vector<data::GCGTokenType>::end(__for_range_3)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGTokenType *,std::vector<data::GCGTokenType>>(&__for_begin_1, &__for_end_1) )
    {
      v10 = __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator*(&__for_begin_1);
      token_1 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
              *token_1);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, " ");
      __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator++(&__for_begin_1);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
      "] [result fresh:");
    __for_range_4 = &reaction_info_0->result_fresh_element_attach_vec;
    __for_begin_1._M_current = std::vector<data::GCGTokenType>::begin(&reaction_info_0->result_fresh_element_attach_vec)._M_current;
    __for_end_1._M_current = std::vector<data::GCGTokenType>::end(__for_range_4)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGTokenType *,std::vector<data::GCGTokenType>>(&__for_begin_1, &__for_end_1) )
    {
      v12 = __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator*(&__for_begin_1);
      token_2 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
              *token_2);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, " ");
      __gnu_cxx::__normal_iterator<data::GCGTokenType *,std::vector<data::GCGTokenType>>::operator++(&__for_begin_1);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
      "] [result reaction:");
    __for_range_5 = &reaction_info_0->reaction_element_pair_vec;
    __for_begin_1._M_current = (data::GCGTokenType *)std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>::begin(&reaction_info_0->reaction_element_pair_vec)._M_current;
    __for_end_1._M_current = (data::GCGTokenType *)std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>::end(__for_range_5)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<data::GCGTokenType,data::GCGTokenType> *,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>>(
              (const __gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType>*,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>> > *)&__for_begin_1,
              (const __gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType>*,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>> > *)&__for_end_1) )
    {
      v35 = __gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType> *,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType>*,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>> > *const)&__for_begin_1);
      source_token = std::get<0ul,data::GCGTokenType,data::GCGTokenType>(v35);
      target_token = std::get<1ul,data::GCGTokenType,data::GCGTokenType>(v35);
      if ( *(_BYTE *)(((unsigned __int64)source_token >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)source_token & 7) + 3) >= *(_BYTE *)(((unsigned __int64)source_token >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(source_token);
      }
      v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
              *source_token);
      v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, "-");
      if ( *(_BYTE *)(((unsigned __int64)target_token >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)target_token & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_token >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(target_token);
      }
      v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, *target_token);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, " ");
      __gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType> *,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<data::GCGTokenType,data::GCGTokenType>*,std::vector<std::pair<data::GCGTokenType,data::GCGTokenType>> > *const)&__for_begin_1);
    }
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/preview/gcg_preview.cpp",
      "genPreviewReaction",
      372);
    v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v43, (const char (*)[10])"[PREVIEW]");
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      &val,
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v43);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48));
    std::set<data::GCGTokenType>::~set((std::set<data::GCGTokenType> *const)(v1 + 80));
    std::_Rb_tree_iterator<std::pair<unsigned int const,GCGSkillPreviewReactionItem>>::operator++(&__for_begin);
  }
  if ( v45 == (char *)v1 )
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

// Line 378: range 000000000D7BB172-000000000D7BB198
void __cdecl GCGSkillPreviewContext::markDeleteCard(GCGSkillPreviewContext *const this, uint32_t guid)
{
  GCGSkillPreviewInfo::markDeleteCard(&this->preview_info, guid);
};

// Line 383: range 000000000D7BB19A-000000000D7BB1C0
void __cdecl GCGSkillPreviewContext::markAddCard(GCGSkillPreviewContext *const this, uint32_t guid)
{
  GCGSkillPreviewInfo::markAddCard(&this->preview_info, guid);
};

// Line 388: range 000000000D7BB1C2-000000000D7BB4D7
void __fastcall GCGSkillPreviewContext::recordPreviewAddCard(
        GCGSkillPreviewContext *const this,
        unsigned int controller_id,
        unsigned int zone_type,
        uint32_t card_id,
        uint32_t card_guid,
        uint32_t owner_card_guid,
        uint32_t preview_replace_card_id)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-ECh] BYREF
  GCGSkillPreviewAddCard *add_card_info; // [rsp+28h] [rbp-E8h]
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-E0h] BYREF
  char v27[192]; // [rsp+50h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 4 11 card_id:387 64 4 13 card_guid:387 80 4 19 owner_card_guid:387 96 24 8 item:390";
  *(_QWORD *)(v7 + 16) = GCGSkillPreviewContext::recordPreviewAddCard;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862723] = -218103808;
  v9[536862724] = -202116109;
  *(_DWORD *)(v7 + 48) = card_id;
  *(_DWORD *)(v7 + 64) = card_guid;
  *(_DWORD *)(v7 + 80) = owner_card_guid;
  add_card_info = &this->preview_info.add_card_info;
  *(_DWORD *)(v7 + 96) = 0;
  *(_DWORD *)(v7 + 100) = 0;
  *(_DWORD *)(v7 + 104) = 0;
  *(_DWORD *)(v7 + 108) = 0;
  *(_DWORD *)(v7 + 112) = 0;
  *(_DWORD *)(v7 + 116) = 0;
  *(_DWORD *)(v7 + 108) = *(_DWORD *)(v7 + 64);
  *(_DWORD *)(v7 + 104) = *(_DWORD *)(v7 + 48);
  *(_DWORD *)(v7 + 100) = controller_id;
  *(_DWORD *)(v7 + 96) = zone_type;
  *(_DWORD *)(v7 + 112) = *(_DWORD *)(v7 + 80);
  *(_DWORD *)(v7 + 116) = preview_replace_card_id;
  GCGSkillPreviewAddCard::addCard(add_card_info, (const GCGSkillPreviewCardItem *)(v7 + 96));
  GCGSkillPreviewContext::markAddCard(this, *(_DWORD *)(v7 + 64));
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/preview/gcg_preview.cpp",
    "recordPreviewAddCard",
    399);
  v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v26,
          (const char (*)[22])"[PREVIEW] add card c:");
  val = controller_id;
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
  v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" zone:");
  v24 = zone_type;
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v24);
  v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])",card id:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v7 + 48));
  v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])", card_guid:");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v7 + 64));
  v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v17, (const char (*)[19])", owner_card_guid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v7 + 80));
  common::milog::MiLogStream::~MiLogStream(&v26);
  if ( v27 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 405: range 000000000D7BB4D8-000000000D7BB7E7
void __fastcall GCGSkillPreviewContext::recordPreviewRmCard(
        GCGSkillPreviewContext *const this,
        unsigned int controller_id,
        unsigned int zone_type,
        uint32_t card_id,
        uint32_t card_guid,
        uint32_t owner_card_guid)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  unsigned int v23; // [rsp+24h] [rbp-ECh] BYREF
  GCGSkillPreviewRmCard *rm_card_info; // [rsp+28h] [rbp-E8h]
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-E0h] BYREF
  char v26[192]; // [rsp+50h] [rbp-C0h] BYREF

  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 4 11 card_id:404 64 4 13 card_guid:404 80 4 19 owner_card_guid:404 96 24 8 item:407";
  *(_QWORD *)(v6 + 16) = GCGSkillPreviewContext::recordPreviewRmCard;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = -218103808;
  v8[536862724] = -202116109;
  *(_DWORD *)(v6 + 48) = card_id;
  *(_DWORD *)(v6 + 64) = card_guid;
  *(_DWORD *)(v6 + 80) = owner_card_guid;
  rm_card_info = &this->preview_info.rm_card_info;
  *(_DWORD *)(v6 + 96) = 0;
  *(_DWORD *)(v6 + 100) = 0;
  *(_DWORD *)(v6 + 104) = 0;
  *(_DWORD *)(v6 + 108) = 0;
  *(_DWORD *)(v6 + 112) = 0;
  *(_DWORD *)(v6 + 116) = 0;
  *(_DWORD *)(v6 + 108) = *(_DWORD *)(v6 + 64);
  *(_DWORD *)(v6 + 104) = *(_DWORD *)(v6 + 48);
  *(_DWORD *)(v6 + 100) = controller_id;
  *(_DWORD *)(v6 + 96) = zone_type;
  *(_DWORD *)(v6 + 112) = *(_DWORD *)(v6 + 80);
  GCGSkillPreviewRmCard::addCard(rm_card_info, (const GCGSkillPreviewCardItem *)(v6 + 96));
  GCGSkillPreviewContext::markDeleteCard(this, *(_DWORD *)(v6 + 64));
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/preview/gcg_preview.cpp",
    "recordPreviewRmCard",
    415);
  v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v25, (const char (*)[21])"[PREVIEW] rm card c:");
  val = controller_id;
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" zone:");
  v23 = zone_type;
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v23);
  v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])",card id:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v6 + 48));
  v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])", card_guid:");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v6 + 64));
  v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v16, (const char (*)[19])", owner_card_guid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v6 + 80));
  common::milog::MiLogStream::~MiLogStream(&v25);
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 421: range 000000000D7BB7E8-000000000D7BB82C
void __cdecl GCGSkillPreviewContext::recordPreviewTokenChange(
        GCGSkillPreviewContext *const this,
        uint32_t card_guid,
        GCGTokenType token_type,
        uint32_t before,
        uint32_t after)
{
  GCGSkillPreviewTokenChange::recordTokenChange(
    &this->preview_info.token_change_info,
    card_guid,
    token_type,
    before,
    after);
};

// Line 428: range 000000000D7BB82E-000000000D7BBB56
void __fastcall GCGSkillPreviewContext::recordPreviewAddCardRefresh(
        GCGSkillPreviewContext *const this,
        unsigned int controller_id,
        GCGZoneType zone_type,
        uint32_t card_id,
        uint32_t card_guid,
        uint32_t owner_card_guid,
        uint32_t preview_replace_card_id)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-ECh] BYREF
  GCGSkillPreviewAddCardForRefresh *refresh_add_card_info; // [rsp+28h] [rbp-E8h]
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-E0h] BYREF
  char v27[192]; // [rsp+50h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 4 11 card_id:427 64 4 13 card_guid:427 80 4 19 owner_card_guid:427 96 24 8 item:434";
  *(_QWORD *)(v7 + 16) = GCGSkillPreviewContext::recordPreviewAddCardRefresh;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862723] = -218103808;
  v9[536862724] = -202116109;
  *(_DWORD *)(v7 + 48) = card_id;
  *(_DWORD *)(v7 + 64) = card_guid;
  *(_DWORD *)(v7 + 80) = owner_card_guid;
  if ( zone_type == GCG_ZONE_SUMMON )
  {
    refresh_add_card_info = &this->preview_info.refresh_add_card_info;
    *(_DWORD *)(v7 + 96) = 0;
    *(_DWORD *)(v7 + 100) = 0;
    *(_DWORD *)(v7 + 104) = 0;
    *(_DWORD *)(v7 + 108) = 0;
    *(_DWORD *)(v7 + 112) = 0;
    *(_DWORD *)(v7 + 116) = 0;
    *(_DWORD *)(v7 + 108) = *(_DWORD *)(v7 + 64);
    *(_DWORD *)(v7 + 104) = *(_DWORD *)(v7 + 48);
    *(_DWORD *)(v7 + 100) = controller_id;
    *(_DWORD *)(v7 + 96) = 5;
    *(_DWORD *)(v7 + 112) = *(_DWORD *)(v7 + 80);
    *(_DWORD *)(v7 + 116) = preview_replace_card_id;
    GCGSkillPreviewAddCardForRefresh::addCard(refresh_add_card_info, (const GCGSkillPreviewCardItem *)(v7 + 96));
    if ( preview_replace_card_id )
      GCGSkillPreviewContext::markAddCard(this, *(_DWORD *)(v7 + 64));
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/preview/gcg_preview.cpp",
      "recordPreviewAddCardRefresh",
      447);
    v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v26,
            (const char (*)[30])"[PREVIEW] refresh add card c:");
    val = controller_id;
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" zone:");
    v24 = 5;
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v24);
    v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])",card id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v7 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])", card_guid:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v7 + 64));
    v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v17, (const char (*)[19])", owner_card_guid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v7 + 80));
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  if ( v27 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 455: range 000000000D7BBB58-000000000D7BBE81
void __fastcall GCGSkillPreviewContext::recordPreviewAddCardForFull(
        GCGSkillPreviewContext *const this,
        unsigned int controller_id,
        GCGZoneType zone_type,
        uint32_t card_id,
        uint32_t card_guid,
        uint32_t owner_card_guid,
        uint32_t preview_replace_card_id)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-ECh] BYREF
  GCGSkillPreviewAddCardForFull *not_add_for_full_card_info; // [rsp+28h] [rbp-E8h]
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-E0h] BYREF
  char v27[192]; // [rsp+50h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 4 11 card_id:454 64 4 13 card_guid:454 80 4 19 owner_card_guid:454 96 24 8 item:461";
  *(_QWORD *)(v7 + 16) = GCGSkillPreviewContext::recordPreviewAddCardForFull;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862723] = -218103808;
  v9[536862724] = -202116109;
  *(_DWORD *)(v7 + 48) = card_id;
  *(_DWORD *)(v7 + 64) = card_guid;
  *(_DWORD *)(v7 + 80) = owner_card_guid;
  if ( zone_type == GCG_ZONE_SUMMON )
  {
    not_add_for_full_card_info = &this->preview_info.not_add_for_full_card_info;
    *(_DWORD *)(v7 + 96) = 0;
    *(_DWORD *)(v7 + 100) = 0;
    *(_DWORD *)(v7 + 104) = 0;
    *(_DWORD *)(v7 + 108) = 0;
    *(_DWORD *)(v7 + 112) = 0;
    *(_DWORD *)(v7 + 116) = 0;
    *(_DWORD *)(v7 + 108) = 0;
    *(_DWORD *)(v7 + 104) = *(_DWORD *)(v7 + 48);
    *(_DWORD *)(v7 + 100) = controller_id;
    *(_DWORD *)(v7 + 96) = 5;
    *(_DWORD *)(v7 + 112) = *(_DWORD *)(v7 + 80);
    *(_DWORD *)(v7 + 116) = preview_replace_card_id;
    GCGSkillPreviewAddCardForFull::addCard(not_add_for_full_card_info, (const GCGSkillPreviewCardItem *)(v7 + 96));
    if ( preview_replace_card_id )
      GCGSkillPreviewContext::markAddCard(this, *(_DWORD *)(v7 + 64));
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/preview/gcg_preview.cpp",
      "recordPreviewAddCardForFull",
      479);
    v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v26,
            (const char (*)[34])"[PREVIEW] full failed add card c:");
    val = controller_id;
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" zone:");
    v24 = 5;
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v24);
    v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])",card id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v7 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])", card_guid:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v7 + 64));
    v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v17, (const char (*)[19])", owner_card_guid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v7 + 80));
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  if ( v27 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 484: range 000000000D7BBE82-000000000D7BC051
void __cdecl GCGSkillPreviewInfo::GCGSkillPreviewInfo(GCGSkillPreviewInfo *const this)
{
  GCGSkillPreviewHp::GCGSkillPreviewHp(&this->hp_info, this);
  GCGSkillPreviewReaction::GCGSkillPreviewReaction(&this->reaction_info, this);
  GCGSkillPreviewAddCard::GCGSkillPreviewAddCard(&this->add_card_info, this);
  GCGSkillPreviewRmCard::GCGSkillPreviewRmCard(&this->rm_card_info, this);
  GCGSkillPreviewTokenChange::GCGSkillPreviewTokenChange(&this->token_change_info, this);
  GCGSkillPreviewChangeOnstageCharacter::GCGSkillPreviewChangeOnstageCharacter(
    &this->onstage_character_change_info,
    this);
  std::set<unsigned int>::set(&this->preview_add_card_guid_set);
  std::set<unsigned int>::set(&this->preview_del_card_guid_set);
  GCGSkillPreviewAddCardForRefresh::GCGSkillPreviewAddCardForRefresh(&this->refresh_add_card_info, this);
  GCGSkillPreviewAddCardForFull::GCGSkillPreviewAddCardForFull(&this->not_add_for_full_card_info, this);
};

// Line 497: range 000000000D7BC052-000000000D7BC1B1
void __fastcall GCGSkillPreviewInfo::markAddCard(GCGSkillPreviewInfo *const this, uint32_t guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 guid:496";
  *(_QWORD *)(v2 + 16) = GCGSkillPreviewInfo::markAddCard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = guid;
  std::set<unsigned int>::insert(
    &this->preview_add_card_guid_set,
    (const std::set<unsigned int>::value_type *)(v2 + 32));
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/preview/gcg_preview.cpp",
    "markAddCard",
    499);
  v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v6,
         (const char (*)[31])"[PREVIEW] mark add card, guid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v6);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 503: range 000000000D7BC1B2-000000000D7BC311
void __fastcall GCGSkillPreviewInfo::markDeleteCard(GCGSkillPreviewInfo *const this, uint32_t guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 guid:502";
  *(_QWORD *)(v2 + 16) = GCGSkillPreviewInfo::markDeleteCard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = guid;
  std::set<unsigned int>::insert(
    &this->preview_del_card_guid_set,
    (const std::set<unsigned int>::value_type *)(v2 + 32));
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/preview/gcg_preview.cpp",
    "markDeleteCard",
    505);
  v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v6,
         (const char (*)[34])"[PREVIEW] mark delete card, guid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v6);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 509: range 000000000D7BC312-000000000D7BC3ED
void __cdecl GCGSkillPreviewInfo::toClient(
        GCGSkillPreviewInfo *const this,
        proto::GCGSkillPreviewInfo *proto_preview_info)
{
  GCGSkillPreviewHp::toClient(&this->hp_info, proto_preview_info);
  GCGSkillPreviewReaction::toClient(&this->reaction_info, proto_preview_info);
  GCGSkillPreviewAddCard::toClient(&this->add_card_info, proto_preview_info);
  GCGSkillPreviewRmCard::toClient(&this->rm_card_info, proto_preview_info);
  GCGSkillPreviewTokenChange::toClient(&this->token_change_info, proto_preview_info);
  GCGSkillPreviewChangeOnstageCharacter::toClient(&this->onstage_character_change_info, proto_preview_info);
  GCGSkillPreviewAddCardForRefresh::toClient(&this->refresh_add_card_info, proto_preview_info);
  GCGSkillPreviewAddCardForFull::toClient(&this->not_add_for_full_card_info, proto_preview_info);
};
