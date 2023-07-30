// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/card/gcg_card.cpp

// Line 24: range 000000000E112BEA-000000000E112FAA
std::string *__cdecl GCGCardRuntimeData::getRuntimeDesc[abi:cxx11](
        std::string *retstr,
        const GCGCardRuntimeData *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  std::map<data::GCGTokenType,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<data::GCGTokenType,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const std::map<data::GCGTokenType,unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  const std::pair<const data::GCGTokenType,unsigned int> *v14; // [rsp+28h] [rbp-78h]
  std::tuple_element<0,const std::pair<const data::GCGTokenType,unsigned int> >::type *token_type; // [rsp+30h] [rbp-70h]
  std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type *state; // [rsp+38h] [rbp-68h]
  char v17[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:25";
  *(_QWORD *)(v2 + 16) = GCGCardRuntimeData::getRuntimeDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "is_active_:");
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->is_active_);
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         ",show_state_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->show_state_);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, this->show_state_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    ",tokens_map_:[");
  __for_range = &this->tokens_map_;
  __for_begin._M_node = std::map<data::GCGTokenType,unsigned int>::begin(&this->tokens_map_)._M_node;
  __for_end._M_node = std::map<data::GCGTokenType,unsigned int>::end(&this->tokens_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator*(&__for_begin);
    token_type = std::get<0ul,data::GCGTokenType const,unsigned int>(v14);
    state = (std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type *)std::get<1ul,data::GCGTokenType const,unsigned int>(v14);
    if ( *(_BYTE *)(((unsigned __int64)token_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)token_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(token_type);
    }
    v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           *token_type);
    v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, ":");
    if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(state);
    }
    v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, *state);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, ",");
    std::_Rb_tree_const_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator++(&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v17 == (char *)v2 )
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

// Line 38: range 000000000E1131DA-000000000E11366B
int32_t __cdecl GCGCardDetailInfo::fromCard(GCGCardDetailInfo *const this, const GCGCard *card, bool is_play_card)
{
  uint32_t card_id; // ecx
  uint32_t guid; // ecx
  GCGControllerValue controller_id; // ecx
  GCGCardType card_type; // ecx
  const std::map<data::GCGTokenType,unsigned int> *TokenMap; // rax
  GCGCardShowState ShowState; // edx
  GCGCardFaceType face_type; // ecx
  GCGZoneType ZoneType; // ecx
  std::vector<unsigned int> __x; // [rsp+20h] [rbp-50h] BYREF
  std::function<ForeachPolicy(const GCGSkill&)> p_func; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&card->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&card->card_id_);
  }
  card_id = card->card_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id_);
  }
  this->card_id_ = card_id;
  if ( *(_BYTE *)(((unsigned __int64)&card->guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)card + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card->guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&card->guid_);
  }
  guid = card->guid_;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid_);
  }
  this->guid_ = guid;
  if ( *(_BYTE *)(((unsigned __int64)&card->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&card->controller_id_);
  }
  controller_id = card->controller_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&card->card_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)card + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card->card_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&card->card_type_);
  }
  card_type = card->card_type_;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_type_);
  }
  this->card_type_ = card_type;
  TokenMap = GCGCard::getTokenMap(card);
  std::map<data::GCGTokenType,unsigned int>::operator=(&this->tokens_map_, TokenMap);
  std::set<data::GCGTagType>::operator=(&this->tag_set_, &card->tag_set_);
  ShowState = GCGCard::getShowState(card);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_state_);
  }
  this->show_state_ = ShowState;
  if ( *(_BYTE *)(((unsigned __int64)&card->face_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&card->face_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&card->face_type_);
  }
  face_type = card->face_type_;
  if ( *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->face_type_);
  }
  this->face_type_ = face_type;
  GCGCard::getSkillIdVec(&__x, card);
  std::vector<unsigned int>::operator=(&this->skill_id_vec_, &__x);
  std::vector<unsigned int>::~vector(&__x);
  ZoneType = GCGCard::getZoneType(card);
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->zone_type_);
  }
  this->zone_type_ = ZoneType;
  if ( *(char *)(((unsigned __int64)&this->is_play_card_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_play_card_);
  this->is_play_card_ = is_play_card;
  if ( this->is_play_card_ || this->zone_type_ >= (unsigned int)GCG_ZONE_CHARACTER )
  {
    std::function<ForeachPolicy ()(GCGSkill const&)>::function<GCGCardDetailInfo::fromCard(GCGCard const&,bool)::{lambda(GCGSkill const&)#1},void,void>(
      &p_func,
      (GCGCardDetailInfo::fromCard::<lambda(const GCGSkill&)>)this);
    GCGCard::foreachSkill(card, &p_func);
    std::function<ForeachPolicy ()(GCGSkill const&)>::~function(&p_func);
  }
  return 0;
};

// Line 54: range 000000000E112FAC-000000000E1131D9
ForeachPolicy __cdecl GCGCardDetailInfo::fromCard(GCGCard const&,bool)::{lambda(GCGSkill const&)#1}::operator()(
        const GCGCardDetailInfo::fromCard::<lambda(const GCGSkill&)> *const __closure,
        const GCGSkill *skill)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<GCGLimitsInfo> *v5; // rax
  std::vector<GCGSkillLimitsInfo> *p_skill_limits_info_vec; // r14
  GCGSkillLimitsInfo *v7; // rax
  GCGSkillLimitsInfo *v8; // rdx
  ForeachPolicy result; // eax
  char v10[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 28 cur_skill_limits_info_vec:56 96 32 20 skill_limits_info:61";
  *(_QWORD *)(v2 + 16) = GCGCardDetailInfo::fromCard(GCGCard const&,bool)::{lambda(GCGSkill const&)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  GCGSkill::getRestSkillLimits((std::vector<GCGLimitsInfo> *)(v2 + 32), skill, 1);
  if ( !std::vector<GCGLimitsInfo>::empty((const std::vector<GCGLimitsInfo> *const)(v2 + 32)) )
  {
    GCGSkillLimitsInfo::GCGSkillLimitsInfo((GCGSkillLimitsInfo *const)(v2 + 96));
    *(_DWORD *)(v2 + 96) = GCGSkill::getSkillId(skill);
    v5 = std::move<std::vector<GCGLimitsInfo> &>((std::vector<GCGLimitsInfo> *)(v2 + 32));
    std::vector<GCGLimitsInfo>::operator=((std::vector<GCGLimitsInfo> *const)(v2 + 104), v5);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    p_skill_limits_info_vec = &__closure->__this->skill_limits_info_vec_;
    v7 = std::move<GCGSkillLimitsInfo &>((GCGSkillLimitsInfo *)(v2 + 96));
    std::vector<GCGSkillLimitsInfo>::emplace_back<GCGSkillLimitsInfo>(p_skill_limits_info_vec, v7, v8);
    GCGSkillLimitsInfo::~GCGSkillLimitsInfo((GCGSkillLimitsInfo *const)(v2 + 96));
  }
  std::vector<GCGLimitsInfo>::~vector((std::vector<GCGLimitsInfo> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
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
  return result;
};

// Line 74: range 000000000E11366C-000000000E113CCE
int32_t __cdecl GCGCardDetailInfo::toClient(
        const GCGCardDetailInfo *const this,
        GCGControllerValue controller_id,
        proto::GCGCard *proto)
{
  GCGCardShowState show_state; // eax
  const data::GCGTagType *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  bool is_show; // [rsp+27h] [rbp-89h]
  std::vector<GCGSkillLimitsInfo>::const_iterator __for_begin_0; // [rsp+28h] [rbp-88h] BYREF
  std::vector<GCGSkillLimitsInfo>::const_iterator __for_end_0; // [rsp+30h] [rbp-80h] BYREF
  std::map<data::GCGTokenType,unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-78h] BYREF
  std::map<data::GCGTokenType,unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-70h] BYREF
  const std::map<data::GCGTokenType,unsigned int> *__for_range; // [rsp+48h] [rbp-68h]
  const std::set<data::GCGTagType> *__for_range_0; // [rsp+50h] [rbp-60h]
  const std::vector<GCGSkillLimitsInfo> *__for_range_1; // [rsp+58h] [rbp-58h]
  const GCGSkillLimitsInfo *skill_limits_info; // [rsp+60h] [rbp-50h]
  proto::GCGSkillLimitsInfo *proto_skill_limits_info; // [rsp+68h] [rbp-48h]
  const std::vector<GCGLimitsInfo> *__for_range_2; // [rsp+70h] [rbp-40h]
  const GCGLimitsInfo *limits_info; // [rsp+78h] [rbp-38h]
  proto::GCGLimitsInfo *proto_limits_info; // [rsp+80h] [rbp-30h]
  const data::GCGTagType *tag; // [rsp+88h] [rbp-28h]
  const std::pair<const data::GCGTokenType,unsigned int> *v22; // [rsp+90h] [rbp-20h]
  std::tuple_element<0,const std::pair<const data::GCGTokenType,unsigned int> >::type *type; // [rsp+98h] [rbp-18h]
  std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type *value; // [rsp+A0h] [rbp-10h]
  proto::GCGToken *proto_token; // [rsp+A8h] [rbp-8h]

  is_show = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->show_state_);
  }
  show_state = this->show_state_;
  if ( show_state == SHOW_STATE_SHOW_BOTH )
  {
    is_show = 1;
  }
  else
  {
    if ( show_state > SHOW_STATE_SHOW_BOTH )
      goto LABEL_14;
    if ( show_state == SHOW_STATE_HIDDEN )
    {
      is_show = 0;
      goto LABEL_15;
    }
    if ( show_state == SHOW_STATE_SHOW_SELF )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->controller_id_);
      }
      if ( controller_id == this->controller_id_ )
        is_show = 1;
    }
    else
    {
LABEL_14:
      is_show = 0;
    }
  }
LABEL_15:
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->guid_);
  }
  proto::GCGCard::set_guid(proto, this->guid_);
  proto::GCGCard::set_is_show(proto, is_show);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  proto::GCGCard::set_controller_id(proto, this->controller_id_);
  if ( is_show )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->card_id_);
    }
    proto::GCGCard::set_id(proto, this->card_id_);
    __for_range = &this->tokens_map_;
    __for_begin._M_node = std::map<data::GCGTokenType,unsigned int>::begin(&this->tokens_map_)._M_node;
    __for_end._M_node = std::map<data::GCGTokenType,unsigned int>::end(&this->tokens_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v22 = std::_Rb_tree_const_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator*(&__for_begin);
      type = std::get<0ul,data::GCGTokenType const,unsigned int>(v22);
      value = (std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type *)std::get<1ul,data::GCGTokenType const,unsigned int>(v22);
      proto_token = proto::GCGCard::add_token_list(proto);
      if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(type);
      }
      proto::GCGToken::set_key(proto_token, *type);
      if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(value);
      }
      proto::GCGToken::set_value(proto_token, *value);
      std::_Rb_tree_const_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = &this->tag_set_;
    __for_begin._M_node = std::set<data::GCGTagType>::begin(&this->tag_set_)._M_node;
    __for_end._M_node = std::set<data::GCGTagType>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<data::GCGTagType>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<data::GCGTagType>::_Self *)&__for_end) )
    {
      v4 = std::_Rb_tree_const_iterator<data::GCGTagType>::operator*((const std::_Rb_tree_const_iterator<data::GCGTagType> *const)&__for_begin);
      tag = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      proto::GCGCard::add_tag_list(proto, *tag);
      std::_Rb_tree_const_iterator<data::GCGTagType>::operator++((std::_Rb_tree_const_iterator<data::GCGTagType> *const)&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->face_type_);
    }
    proto::GCGCard::set_face_type(proto, this->face_type_);
    v5 = proto::GCGCard::mutable_skill_id_list(proto);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->skill_id_vec_, v5);
    __for_range_1 = &this->skill_limits_info_vec_;
    __for_begin_0._M_current = std::vector<GCGSkillLimitsInfo>::begin(&this->skill_limits_info_vec_)._M_current;
    __for_end_0._M_current = std::vector<GCGSkillLimitsInfo>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<GCGSkillLimitsInfo const*,std::vector<GCGSkillLimitsInfo>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      skill_limits_info = __gnu_cxx::__normal_iterator<GCGSkillLimitsInfo const*,std::vector<GCGSkillLimitsInfo>>::operator*(&__for_begin_0);
      proto_skill_limits_info = proto::GCGCard::add_skill_limits_list(proto);
      if ( *(_BYTE *)(((unsigned __int64)skill_limits_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)skill_limits_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(skill_limits_info);
      }
      proto::GCGSkillLimitsInfo::set_skill_id(proto_skill_limits_info, skill_limits_info->skill_id);
      __for_range_2 = &skill_limits_info->limits_info_vec;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGTokenType,unsigned int> >::_Base_ptr)std::vector<GCGLimitsInfo>::begin(&skill_limits_info->limits_info_vec)._M_current;
      __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGTokenType,unsigned int> >::_Base_ptr)std::vector<GCGLimitsInfo>::end(__for_range_2)._M_current;
      while ( __gnu_cxx::operator!=<GCGLimitsInfo const*,std::vector<GCGLimitsInfo>>(
                (const __gnu_cxx::__normal_iterator<const GCGLimitsInfo*,std::vector<GCGLimitsInfo> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<const GCGLimitsInfo*,std::vector<GCGLimitsInfo> > *)&__for_end) )
      {
        limits_info = __gnu_cxx::__normal_iterator<GCGLimitsInfo const*,std::vector<GCGLimitsInfo>>::operator*((const __gnu_cxx::__normal_iterator<const GCGLimitsInfo*,std::vector<GCGLimitsInfo> > *const)&__for_begin);
        proto_limits_info = proto::GCGSkillLimitsInfo::add_limits_list(proto_skill_limits_info);
        if ( *(_BYTE *)(((unsigned __int64)limits_info >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)limits_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)limits_info >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(limits_info);
        }
        proto::GCGLimitsInfo::set_limit_type(proto_limits_info, limits_info->limit_type);
        if ( *(_BYTE *)(((unsigned __int64)&limits_info->limit_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)limits_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limits_info->limit_value >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&limits_info->limit_value);
        }
        proto::GCGLimitsInfo::set_limit_value(proto_limits_info, limits_info->limit_value);
        __gnu_cxx::__normal_iterator<GCGLimitsInfo const*,std::vector<GCGLimitsInfo>>::operator++((__gnu_cxx::__normal_iterator<const GCGLimitsInfo*,std::vector<GCGLimitsInfo> > *const)&__for_begin);
      }
      __gnu_cxx::__normal_iterator<GCGSkillLimitsInfo const*,std::vector<GCGSkillLimitsInfo>>::operator++(&__for_begin_0);
    }
  }
  return 0;
};

// Line 133: range 000000000E113CD0-000000000E113FCC
void __cdecl GCGCard::init(GCGCard *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v4; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // r14
  int ControllerId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  GCGModifyZone *ModifyZone; // r14
  std::enable_shared_from_this<GCGCard> v14; // [rsp+10h] [rbp-A0h] BYREF
  std::string v; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 ss:134";
  *(_QWORD *)(v1 + 16) = GCGCard::init;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32));
  v4 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32),
         "[");
  GCGCard::getTypeDesc[abi:cxx11](&v);
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v4, &v);
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, "|id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->card_id_);
  }
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, this->card_id_);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, "|guid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->guid_);
  }
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, this->guid_);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, "|c:");
  ControllerId = GCGCard::getControllerId(this);
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, ControllerId);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, "]");
  std::string::~string(&v);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    &v,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32));
  std::string::operator=(&this->desc_, &v);
  std::string::~string(&v);
  ModifyZone = GCGCard::getModifyZone(this);
  std::enable_shared_from_this<GCGCard>::shared_from_this(&v14);
  GCGModifyZone::init(ModifyZone, (GCGCardPtr *)&v14);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v14);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32));
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 141: range 000000000E113FCE-000000000E114168
int32_t __cdecl GCGCard::toClient(const GCGCard *const this, GCGControllerValue controller_id, proto::GCGCard *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  int32_t result; // eax
  char v9[336]; // [rsp+20h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 192 15 detail_info:142";
  *(_QWORD *)(v3 + 16) = GCGCard::toClient;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862727] = -202116109;
  v5[536862728] = -202116109;
  GCGCardDetailInfo::GCGCardDetailInfo((GCGCardDetailInfo *const)(v3 + 32));
  GCGCardDetailInfo::fromCard((GCGCardDetailInfo *const)(v3 + 32), this, 0);
  v6 = GCGCardDetailInfo::toClient((const GCGCardDetailInfo *const)(v3 + 32), controller_id, proto);
  GCGCardDetailInfo::~GCGCardDetailInfo((GCGCardDetailInfo *const)(v3 + 32));
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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
  return result;
};

// Line 148: range 000000000E11416A-000000000E1141C5
GCGCardShowState __cdecl GCGCard::getShowState(const GCGCard *const this)
{
  const GCGCardRuntimeData *RuntimeData; // rdx
  GCGCardShowState *p_show_state; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>);
  p_show_state = &RuntimeData->show_state_;
  if ( *(_BYTE *)(((unsigned __int64)p_show_state >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_show_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_show_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_show_state);
  }
  return RuntimeData->show_state_;
};

// Line 153: range 000000000E1141C6-000000000E11422E
void __cdecl GCGCard::setShowState(GCGCard *const this, GCGCardShowState show_state)
{
  GCGCardRuntimeData *RuntimeData; // rdx
  GCGCardShowState *p_show_state; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>);
  p_show_state = &RuntimeData->show_state_;
  if ( *(_BYTE *)(((unsigned __int64)p_show_state >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_show_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_show_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_show_state);
  }
  RuntimeData->show_state_ = show_state;
};

// Line 159: range 000000000E114230-000000000E114251
std::map<data::GCGTokenType,unsigned int> *__cdecl GCGCard::getTokenMap(GCGCard *const this)
{
  return &GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>)->tokens_map_;
};

// Line 165: range 000000000E114252-000000000E114273
const std::map<data::GCGTokenType,unsigned int> *__cdecl GCGCard::getTokenMap(const GCGCard *const this)
{
  return &GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>)->tokens_map_;
};

// Line 171: range 000000000E114274-000000000E1142A3
std::map<data::GCGCostType,unsigned int> *__cdecl GCGCard::getCost(
        std::map<data::GCGCostType,unsigned int> *retstr,
        const GCGCard *const this)
{
  std::map<data::GCGCostType,unsigned int>::map(retstr, &this->cost_map_);
  return retstr;
};

// Line 176: range 000000000E1142A4-000000000E1143EE
void __cdecl GCGCard::setCost(GCGCard *const this, const std::vector<data::GCGCost> *cost_vec)
{
  uint32_t *p_count; // rax
  uint32_t count; // ebx
  std::map<data::GCGCostType,unsigned int>::mapped_type *v4; // rax
  uint32_t *v5; // rdx
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+1Ch] [rbp-34h] BYREF
  std::vector<data::GCGCost>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<data::GCGCost>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::vector<data::GCGCost> *__for_range; // [rsp+30h] [rbp-20h]
  const data::GCGCost *cost; // [rsp+38h] [rbp-18h]

  std::map<data::GCGCostType,unsigned int>::clear(&this->cost_map_);
  __for_range = cost_vec;
  __for_begin._M_current = std::vector<data::GCGCost>::begin(cost_vec)._M_current;
  __for_end._M_current = std::vector<data::GCGCost>::end(cost_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGCost const*,std::vector<data::GCGCost>>(&__for_begin, &__for_end) )
  {
    cost = __gnu_cxx::__normal_iterator<data::GCGCost const*,std::vector<data::GCGCost>>::operator*(&__for_begin);
    p_count = &cost->count;
    if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_count);
    }
    count = cost->count;
    v4 = std::map<data::GCGCostType,unsigned int>::operator[](&this->cost_map_, &cost->cost_type);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v4);
    }
    *v5 = count;
    __gnu_cxx::__normal_iterator<data::GCGCost const*,std::vector<data::GCGCost>>::operator++(&__for_begin);
  }
  __x = GCG_COST_INVALID;
  std::map<data::GCGCostType,unsigned int>::erase(&this->cost_map_, &__x);
};

// Line 186: range 000000000E1143F0-000000000E1144B8
GCGTagType __cdecl GCGCard::getWeaponTag(const GCGCard *const this)
{
  data::GCGTagType *v1; // rax
  GCGTagType *v2; // rdx
  data::GCGTagType weapon_tag; // [rsp+14h] [rbp-1Ch]
  std::set<data::GCGTagType>::iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::set<data::GCGTagType>::iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::set<data::GCGTagType> *__for_range; // [rsp+28h] [rbp-8h]

  __for_range = GCGUtils::getAllWeaponTagSet();
  __for_begin._M_node = std::set<data::GCGTagType>::begin(__for_range)._M_node;
  __for_end._M_node = std::set<data::GCGTagType>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v1 = (data::GCGTagType *)std::_Rb_tree_const_iterator<data::GCGTagType>::operator*(&__for_begin);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    weapon_tag = *v2;
    if ( GCGCard::isHasTag(this, *v2) )
      return weapon_tag;
    std::_Rb_tree_const_iterator<data::GCGTagType>::operator++(&__for_begin);
  }
  return 0;
};

// Line 198: range 000000000E1144BA-000000000E11459C
// local variable allocation has failed, the output may be wrong!
GCGSkillPtr __cdecl GCGCard::getSkill(GCGCard *const this, uint32_t skill_id)
{
  uint32_t v2; // edx
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  GCGSkillPtr result; // rax
  uint32_t skill_ida; // [rsp+Ch] [rbp-34h]
  std::vector<std::shared_ptr<GCGSkill>>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<GCGSkill>>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  std::vector<std::shared_ptr<GCGSkill>> *__for_range; // [rsp+30h] [rbp-10h]
  std::shared_ptr<GCGSkill> *skill_ptr; // [rsp+38h] [rbp-8h]

  skill_ida = v2;
  __for_range = (std::vector<std::shared_ptr<GCGSkill>> *)(*(_QWORD *)&skill_id + 432LL);
  __for_begin._M_current = std::vector<std::shared_ptr<GCGSkill>>::begin((std::vector<std::shared_ptr<GCGSkill>> *const)(*(_QWORD *)&skill_id + 432LL))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGSkill>>::end((std::vector<std::shared_ptr<GCGSkill>> *const)(*(_QWORD *)&skill_id + 432LL))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>(
            &__for_begin,
            &__for_end) )
  {
    skill_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>::operator*(&__for_begin);
    if ( std::operator!=<GCGSkill>(skill_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
      if ( skill_ida == GCGSkill::getSkillId(v3) )
      {
        std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)this, skill_ptr);
        goto LABEL_11;
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>::operator++(&__for_begin);
  }
  std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)this, 0LL);
LABEL_11:
  result._M_ptr = (std::__shared_ptr<GCGSkill,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 210: range 000000000E11459E-000000000E114684
std::vector<unsigned int> *__cdecl GCGCard::getSkillIdVec(std::vector<unsigned int> *retstr, const GCGCard *const this)
{
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::vector<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-34h] BYREF
  std::vector<std::shared_ptr<GCGSkill>>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<std::shared_ptr<GCGSkill>>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::vector<std::shared_ptr<GCGSkill>> *__for_range; // [rsp+30h] [rbp-20h]
  const std::shared_ptr<GCGSkill> *skill_ptr; // [rsp+38h] [rbp-18h]

  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->skill_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGSkill>>::begin(&this->skill_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGSkill>>::end(&this->skill_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGSkill> const*,std::vector<std::shared_ptr<GCGSkill>>>(
            &__for_begin,
            &__for_end) )
  {
    skill_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> const*,std::vector<std::shared_ptr<GCGSkill>>>::operator*(&__for_begin);
    if ( std::operator!=<GCGSkill>(skill_ptr, 0LL) )
    {
      v2 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
      __x = GCGSkill::getSkillId(v2);
      std::vector<unsigned int>::push_back(retstr, &__x);
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> const*,std::vector<std::shared_ptr<GCGSkill>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 223: range 000000000E114686-000000000E1149F9
__int64 __fastcall GCGCard::addToken(GCGCard *const this, GCGTokenType token_type, uint32_t value, GCGReason reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::map<data::GCGTokenType,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  int v9; // r14d
  std::map<data::GCGTokenType,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  __int64 result; // rax
  unsigned int v23; // [rsp+24h] [rbp-FCh] BYREF
  std::map<data::GCGTokenType,unsigned int> *token_map; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+70h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 10 before:225 64 4 9 after:226 80 4 14 token_type:222 96 4 9 value:222";
  *(_QWORD *)(v4 + 16) = GCGCard::addToken;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202116348;
  *(_DWORD *)(v4 + 80) = token_type;
  *(_DWORD *)(v4 + 96) = value;
  token_map = GCGCard::getTokenMap(this);
  v7 = std::map<data::GCGTokenType,unsigned int>::operator[](
         token_map,
         (const std::map<data::GCGTokenType,unsigned int>::key_type *)(v4 + 80));
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  *(_DWORD *)(v4 + 48) = *v8;
  *(_DWORD *)(v4 + 64) = *(_DWORD *)(v4 + 48) + *(_DWORD *)(v4 + 96);
  v9 = *(_DWORD *)(v4 + 64);
  v10 = std::map<data::GCGTokenType,unsigned int>::operator[](
          token_map,
          (const std::map<data::GCGTokenType,unsigned int>::key_type *)(v4 + 80));
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = v9;
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/card/gcg_card.cpp",
    "addToken",
    228);
  GCGCard::getDesc[abi:cxx11](&val, this);
  v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v25, &val);
  v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v12,
          (const char (*)[23])"addToken. token_type: ");
  v23 = *(_DWORD *)(v4 + 80);
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v23);
  v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" before: ");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
  v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" after: ");
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 64));
  v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" add: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 96));
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v25);
  GCGCard::notifyTokenChange(this, *(GCGTokenType *)(v4 + 80), *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 64), reason);
  GCGCard::onTokenChange(this, *(GCGTokenType *)(v4 + 80), *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 64), reason);
  result = *(unsigned int *)(v4 + 64);
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 235: range 000000000E1149FA-000000000E114F84
void __cdecl GCGCard::onTokenChange(
        GCGCard *const this,
        GCGTokenType token_type,
        uint32_t before,
        uint32_t after,
        GCGReason reason)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  uint32_t Guid; // esi
  uint32_t v9; // esi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // esi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  char reasona; // [rsp+8h] [rbp-B8h]
  GCGSkillPreviewContext *preview_context; // [rsp+28h] [rbp-98h]
  std::shared_ptr<GCGCard> v22; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-80h] BYREF
  char v24[96]; // [rsp+60h] [rbp-60h] BYREF

  reasona = reason;
  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 12 zone_ptr:258";
  *(_QWORD *)(v5 + 16) = GCGCard::onTokenChange;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode);
  if ( GCGGameMode::isDuringSnapshot(this->game_mode) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode);
    preview_context = GCGGameMode::getSkillPreviewContext(this->game_mode);
    Guid = GCGCard::getGuid(this);
    GCGSkillPreviewContext::recordPreviewTokenChange(preview_context, Guid, token_type, before, after);
  }
  if ( !after && token_type == GCG_TOKEN_LIFE )
  {
    GCGCard::getZone((GCGCard *const)(v5 + 32));
    if ( std::operator!=<GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v5 + 32), 0LL) )
    {
      v9 = (unsigned int)std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->guid_);
      }
      GCGCardZone::popCard((GCGCardZone *const)&v22, v9, (GCGReason)this->guid_, reasona);
      std::shared_ptr<GCGCard>::~shared_ptr(&v22);
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/card/gcg_card.cpp",
        "onTokenChange",
        248);
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v23,
              (const char (*)[39])"remove card for life is zero card_id_:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->card_id_);
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" guid_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->guid_);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/card/gcg_card.cpp",
        "onTokenChange",
        252);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v23, (const char (*)[17])"zone ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v5 + 32));
  }
  if ( !after && token_type == GCG_TOKEN_ROUND_COUNT )
  {
    GCGCard::getZone((GCGCard *const)(v5 + 32));
    if ( std::operator!=<GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v5 + 32), 0LL) )
    {
      v13 = (unsigned int)std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->guid_);
      }
      GCGCardZone::popCard((GCGCardZone *const)&v22, v13, (GCGReason)this->guid_, reasona);
      std::shared_ptr<GCGCard>::~shared_ptr(&v22);
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/card/gcg_card.cpp",
        "onTokenChange",
        262);
      v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v23,
              (const char (*)[39])"remove card for life is zero card_id_:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->card_id_);
      v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" guid_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->guid_);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/card/gcg_card.cpp",
        "onTokenChange",
        266);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v23, (const char (*)[17])"zone ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v5 + 32));
  }
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 272: range 000000000E114F86-000000000E1152B9
__int64 __fastcall GCGCard::setToken(GCGCard *const this, GCGTokenType token_type, uint32_t value, GCGReason reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::map<data::GCGTokenType,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  int v9; // r14d
  std::map<data::GCGTokenType,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  __int64 result; // rax
  unsigned int v21; // [rsp+24h] [rbp-DCh] BYREF
  std::map<data::GCGTokenType,unsigned int> *token_map; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-D0h] BYREF
  std::string val; // [rsp+50h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 10 before:274 48 4 9 after:275 64 4 14 token_type:271";
  *(_QWORD *)(v4 + 16) = GCGCard::setToken;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = token_type;
  token_map = GCGCard::getTokenMap(this);
  v7 = std::map<data::GCGTokenType,unsigned int>::operator[](
         token_map,
         (const std::map<data::GCGTokenType,unsigned int>::key_type *)(v4 + 64));
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  *(_DWORD *)(v4 + 32) = *v8;
  *(_DWORD *)(v4 + 48) = value;
  v9 = *(_DWORD *)(v4 + 48);
  v10 = std::map<data::GCGTokenType,unsigned int>::operator[](
          token_map,
          (const std::map<data::GCGTokenType,unsigned int>::key_type *)(v4 + 64));
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = v9;
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/card/gcg_card.cpp",
    "setToken",
    277);
  GCGCard::getDesc[abi:cxx11](&val, this);
  v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v23, &val);
  v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v12,
          (const char (*)[23])"setToken. token_type: ");
  v21 = *(_DWORD *)(v4 + 64);
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v21);
  v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" before: ");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
  v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" after: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v23);
  GCGCard::notifyTokenChange(this, *(GCGTokenType *)(v4 + 64), *(_DWORD *)(v4 + 32), *(_DWORD *)(v4 + 48), reason);
  GCGCard::onTokenChange(this, *(GCGTokenType *)(v4 + 64), *(_DWORD *)(v4 + 32), *(_DWORD *)(v4 + 48), reason);
  result = *(unsigned int *)(v4 + 48);
  if ( v25 == (char *)v4 )
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

// Line 284: range 000000000E1152BA-000000000E11576D
void __cdecl GCGCard::resetToken(GCGCard *const this, GCGReason reason)
{
  std::map<data::GCGTokenType,unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const GCGConfigMgr *Config; // rax
  uint32_t Id; // eax
  common::milog::MiLogStream *v7; // r13
  std::map<data::GCGTokenType,unsigned int> *TokenMap; // rax
  uint32_t *p_value; // rax
  uint32_t v10; // edx
  unsigned int val; // [rsp+1Ch] [rbp-114h] BYREF
  std::vector<data::GCGTokenConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<data::GCGTokenConfig>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  const GCGGameExcelConfigMgr *gcg_excel_config; // [rsp+30h] [rbp-100h]
  const data::GCGCardConfig *config_ptr; // [rsp+38h] [rbp-F8h]
  const std::vector<data::GCGTokenConfig> *__for_range; // [rsp+40h] [rbp-F0h]
  std::map<data::GCGTokenType,unsigned int> *__for_range_0; // [rsp+48h] [rbp-E8h]
  const std::pair<const data::GCGTokenType,unsigned int> *v18; // [rsp+50h] [rbp-E0h]
  std::tuple_element<0,const std::pair<const data::GCGTokenType,unsigned int> >::type *token_type; // [rsp+58h] [rbp-D8h]
  std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type *value; // [rsp+60h] [rbp-D0h]
  const data::GCGTokenConfig *token_config; // [rsp+68h] [rbp-C8h]
  common::milog::MiLogStream v22; // [rsp+70h] [rbp-C0h] BYREF
  char v23[160]; // [rsp+90h] [rbp-A0h] BYREF

  v2 = (std::map<data::GCGTokenType,unsigned int> *)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<data::GCGTokenType,unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 12 temp_map:292";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)GCGCard::resetToken;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode);
  Config = GCGGameMode::getConfig(this->game_mode);
  gcg_excel_config = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
  Id = GCGCard::getId(this);
  config_ptr = GCGGameExcelConfigMgr::findCardConfig(gcg_excel_config, Id);
  if ( config_ptr )
  {
    TokenMap = GCGCard::getTokenMap(this);
    std::map<data::GCGTokenType,unsigned int>::map(v2 + 1, TokenMap);
    __for_range = &config_ptr->token_list;
    __for_begin._M_current = std::vector<data::GCGTokenConfig>::begin(&config_ptr->token_list)._M_current;
    __for_end._M_current = std::vector<data::GCGTokenConfig>::end(&config_ptr->token_list)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGTokenConfig const*,std::vector<data::GCGTokenConfig>>(
              &__for_begin,
              &__for_end) )
    {
      token_config = __gnu_cxx::__normal_iterator<data::GCGTokenConfig const*,std::vector<data::GCGTokenConfig>>::operator*(&__for_begin);
      p_value = &token_config->value;
      if ( *(_BYTE *)(((unsigned __int64)p_value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_value);
      }
      v10 = token_config->value;
      if ( *(_BYTE *)(((unsigned __int64)&token_config->token_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&token_config->token_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&token_config->token_type);
      }
      GCGCard::setToken(this, token_config->token_type, v10, reason);
      std::map<data::GCGTokenType,unsigned int>::erase(v2 + 1, &token_config->token_type);
      __gnu_cxx::__normal_iterator<data::GCGTokenConfig const*,std::vector<data::GCGTokenConfig>>::operator++(&__for_begin);
    }
    __for_range_0 = v2 + 1;
    __for_begin._M_current = (const data::GCGTokenConfig *)std::map<data::GCGTokenType,unsigned int>::begin(v2 + 1)._M_node;
    __for_end._M_current = (const data::GCGTokenConfig *)std::map<data::GCGTokenType,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::_Self *)&__for_end) )
    {
      v18 = std::_Rb_tree_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> > *const)&__for_begin);
      token_type = std::get<0ul,data::GCGTokenType const,unsigned int>(v18);
      value = (std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type *)std::get<1ul,data::GCGTokenType const,unsigned int>(v18);
      if ( *(_BYTE *)(((unsigned __int64)token_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)token_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(token_type);
      }
      GCGCard::setToken(this, *token_type, 0, reason);
      std::_Rb_tree_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> > *const)&__for_begin);
    }
    std::map<data::GCGTokenType,unsigned int>::~map(v2 + 1);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card.cpp",
      "resetToken",
      289);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v22,
           (const char (*)[34])"find card config error. card_id: ");
    val = GCGCard::getId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 305: range 000000000E11576E-000000000E115CF5
__int64 __fastcall GCGCard::subToken(GCGCard *const this, GCGTokenType token_type, uint32_t value, GCGReason reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::pointer v10; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::pointer v12; // rdx
  unsigned int *v13; // rax
  std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::pointer v14; // rdx
  unsigned int *v15; // rax
  int v16; // r14d
  std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::pointer v17; // rdx
  unsigned int *v18; // rax
  std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::pointer v19; // rdx
  unsigned int *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned int v31; // [rsp+2Ch] [rbp-104h] BYREF
  std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::_Self __y; // [rsp+30h] [rbp-100h] BYREF
  std::map<data::GCGTokenType,unsigned int> *token_map; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-F0h] BYREF
  std::string val; // [rsp+60h] [rbp-D0h] BYREF
  char v36[176]; // [rsp+80h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 10 before:313 48 4 9 after:315 64 4 14 token_type:304 80 4 9 value:304 96 8 8 iter:307";
  *(_QWORD *)(v4 + 16) = GCGCard::subToken;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 64) = token_type;
  *(_DWORD *)(v4 + 80) = value;
  token_map = GCGCard::getTokenMap(this);
  *(std::map<data::GCGTokenType,unsigned int>::iterator *)(v4 + 96) = std::map<data::GCGTokenType,unsigned int>::find(
                                                                        token_map,
                                                                        (const std::map<data::GCGTokenType,unsigned int>::key_type *)(v4 + 64));
  __y._M_node = std::map<data::GCGTokenType,unsigned int>::end(token_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::_Self *)(v4 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card.cpp",
      "subToken",
      310);
    GCGCard::getDesc[abi:cxx11](&val, this);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v34, &val);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           v7,
           (const char (*)[28])"subToken fail. token_type: ");
    v31 = *(_DWORD *)(v4 + 64);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &v31);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0LL;
  }
  else
  {
    v10 = std::_Rb_tree_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> > *const)(v4 + 96));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    *(_DWORD *)(v4 + 32) = v10->second;
    v12 = std::_Rb_tree_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> > *const)(v4 + 96));
    v13 = &v12->second;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    if ( v12->second <= *(_DWORD *)(v4 + 80) )
    {
      v16 = 0;
    }
    else
    {
      v14 = std::_Rb_tree_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> > *const)(v4 + 96));
      v15 = &v14->second;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      v16 = v14->second - *(_DWORD *)(v4 + 80);
    }
    v17 = std::_Rb_tree_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> > *const)(v4 + 96));
    v18 = &v17->second;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v18);
    }
    v17->second = v16;
    v19 = std::_Rb_tree_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> > *const)(v4 + 96));
    v20 = &v19->second;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v20);
    }
    *(_DWORD *)(v4 + 48) = v19->second;
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/card/gcg_card.cpp",
      "subToken",
      316);
    GCGCard::getDesc[abi:cxx11](&val, this);
    v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v34, &val);
    v22 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v21,
            (const char (*)[23])"subToken. token_type: ");
    v31 = *(_DWORD *)(v4 + 64);
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &v31);
    v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" before: ");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 32));
    v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" after: ");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 48));
    v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])" sub: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 80));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    GCGCard::notifyTokenChange(this, *(GCGTokenType *)(v4 + 64), *(_DWORD *)(v4 + 32), *(_DWORD *)(v4 + 48), reason);
    GCGCard::onTokenChange(this, *(GCGTokenType *)(v4 + 64), *(_DWORD *)(v4 + 32), *(_DWORD *)(v4 + 48), reason);
    result = *(unsigned int *)(v4 + 48);
  }
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 323: range 000000000E115CF6-000000000E115F04
__int64 __fastcall GCGCard::getToken(const GCGCard *const this, GCGTokenType token_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  const std::map<data::GCGTokenType,unsigned int> *TokenMap; // rax
  unsigned int second; // r14d
  std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::pointer v7; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  char v11[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 token_type:322 48 8 8 iter:325 80 48 13 token_map:324";
  *(_QWORD *)(v2 + 16) = GCGCard::getToken;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = token_type;
  TokenMap = GCGCard::getTokenMap(this);
  std::map<data::GCGTokenType,unsigned int>::map((std::map<data::GCGTokenType,unsigned int> *const)(v2 + 80), TokenMap);
  *(std::map<data::GCGTokenType,unsigned int>::iterator *)(v2 + 48) = std::map<data::GCGTokenType,unsigned int>::find(
                                                                        (std::map<data::GCGTokenType,unsigned int> *const)(v2 + 80),
                                                                        (const std::map<data::GCGTokenType,unsigned int>::key_type *)(v2 + 32));
  __y._M_node = std::map<data::GCGTokenType,unsigned int>::end((std::map<data::GCGTokenType,unsigned int> *const)(v2 + 80))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> >::_Self *)(v2 + 48),
         &__y) )
  {
    second = 0;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::GCGTokenType,unsigned int> > *const)(v2 + 48));
    p_second = &v7->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v7->second;
  }
  std::map<data::GCGTokenType,unsigned int>::~map((std::map<data::GCGTokenType,unsigned int> *const)(v2 + 80));
  result = second;
  if ( v11 == (char *)v2 )
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

// Line 334: range 000000000E115F06-000000000E116211
void __cdecl GCGCard::notifyTokenChange(
        GCGCard *const this,
        GCGTokenType token_type,
        uint32_t before,
        uint32_t after,
        GCGReason reason)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  uint32_t Guid; // r14d
  std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  GCGTokenType *p_token_type; // rax
  std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  uint32_t *p_after; // rax
  std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+20h] [rbp-80h] BYREF
  char v21[112]; // [rsp+30h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 15 message_ptr:335";
  *(_QWORD *)(v5 + 16) = GCGCard::notifyTokenChange;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  common::tools::perf::make_shared<GCGMsgTokenChange>();
  Guid = GCGCard::getGuid(this);
  v9 = std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v9->card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    v9 = (std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v9->card_guid);
  }
  v9->card_guid = Guid;
  v10 = std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  p_token_type = &v10->token_type;
  if ( *(_BYTE *)(((unsigned __int64)p_token_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_token_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_token_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_token_type);
  }
  v10->token_type = token_type;
  v12 = std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v12->before >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->before >> 3) + 0x7FFF8000) <= 3 )
  {
    v12 = (std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v12->before);
  }
  v12->before = before;
  v13 = std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  p_after = &v13->after;
  if ( *(_BYTE *)(((unsigned __int64)p_after >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_after & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_after >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_after);
  }
  v13->after = after;
  v15 = std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v15->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    v15 = (std::__shared_ptr_access<GCGMsgTokenChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v15->reason);
  }
  v15->reason = reason;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode);
  game_mode = this->game_mode;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgTokenChange,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgTokenChange> *)(v5 + 32));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgTokenChange>::~shared_ptr((std::shared_ptr<GCGMsgTokenChange> *const)(v5 + 32));
  if ( v21 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 345: range 000000000E116212-000000000E11654C
int32_t __cdecl GCGCard::getHurtNum(const GCGCard *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r13
  int32_t v5; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int result; // [rsp+1Ch] [rbp-C4h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-C0h] BYREF
  std::string val; // [rsp+40h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+60h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 10 max_hp:356 64 4 10 cur_hp:357";
  *(_QWORD *)(v1 + 16) = GCGCard::getHurtNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_type_);
  }
  if ( this->card_type_ == GCG_CARD_CHARACTER )
  {
    if ( !GCGCard::isAlive(this) )
    {
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(v1 + 48) = GCGCard::getToken(this, GCG_TOKEN_MAX_HP);
      *(_DWORD *)(v1 + 64) = GCGCard::getToken(this, GCG_TOKEN_HP);
      result = *(_DWORD *)(v1 + 48) - *(_DWORD *)(v1 + 64);
      if ( result < 0 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/card/gcg_card.cpp",
          "getHurtNum",
          362);
        v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               (common::milog::MiLogStream *const)&val,
               (const char (*)[19])"getHurtNum cur_hp:");
        v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 64));
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])",max_hp:");
        v9 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v1 + 48));
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])off_1BC73980);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        result = 0;
      }
      v5 = result;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/card/gcg_card.cpp",
      "getHurtNum",
      348);
    v4 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v11, (const char (*)[33])off_1BC738A0);
    GCGCard::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = 0;
  }
  if ( v13 == (char *)v1 )
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
  return v5;
};

// Line 372: range 000000000E11654E-000000000E11666F
void __cdecl GCGCard::onAfterBeingHeal(
        GCGCard *const this,
        uint32_t heal_hp,
        GCGCardPtr *p_source_card_ptr,
        GCGReason reason)
{
  uint32_t Guid; // esi
  GCGStatistics *Statistics; // rbx
  GCGControllerValue ControllerId; // eax
  GCGSkillPreviewContext *preview_ctx; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode);
  if ( GCGGameMode::isDuringSnapshot(this->game_mode) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode);
    preview_ctx = GCGGameMode::getSkillPreviewContext(this->game_mode);
    Guid = GCGCard::getGuid(this);
    GCGSkillPreviewContext::recordCharacterHpChange(preview_ctx, Guid, 0, heal_hp);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode);
  Statistics = GCGGameMode::getStatistics(this->game_mode);
  ControllerId = GCGCard::getControllerId(this);
  GCGStatistics::reportStatisticSpecifyDataUint(Statistics, ControllerId, BEING_HEAL_SUM, heal_hp, 1);
};

// Line 382: range 000000000E116670-000000000E116C7F
int32_t __cdecl GCGCard::reviveCharacter(
        GCGCard *const this,
        uint32_t revive_hp,
        GCGCardPtr *p_source_card_ptr,
        GCGReason reason)
{
  std::shared_ptr<GCGCard> *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  common::milog::MiLogStream *v7; // r12
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // r12
  common::milog::MiLogStream *v10; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // r14
  int32_t result; // eax
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-B0h] BYREF
  std::string val; // [rsp+40h] [rbp-90h] BYREF
  char v21[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (std::shared_ptr<GCGCard> *)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = (std::shared_ptr<GCGCard> *)v5;
  }
  v4->_M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v4->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 6 ss:401";
  v4[1]._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)GCGCard::reviveCharacter;
  v6 = (unsigned __int64)v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( GCGCard::getCardType(this) == GCG_CARD_CHARACTER )
  {
    if ( GCGCard::isAlive(this) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/card/gcg_card.cpp",
        "reviveCharacter",
        390);
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v19, (const char (*)[24])off_1BC73A60);
      GCGCard::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v8 = -1;
    }
    else if ( revive_hp )
    {
      GCGCard::setActive(this, 1);
      GCGCard::setToken(this, GCG_TOKEN_HP, revive_hp, reason);
      std::shared_ptr<GCGCard>::shared_ptr(v4 + 2, p_source_card_ptr);
      GCGCard::onAfterBeingHeal(this, revive_hp, v4 + 2, reason);
      std::shared_ptr<GCGCard>::~shared_ptr(v4 + 2);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)&v4[2]);
      if ( std::operator!=<GCGCard>(p_source_card_ptr, 0LL) )
      {
        v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)&v4[2],
                "source:");
        v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_source_card_ptr);
        GCGCard::getDesc[abi:cxx11](&val, v12);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, &val);
        std::string::~string(&val);
      }
      v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)&v4[2],
              " revive hp ");
      v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, revive_hp);
      v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, off_1BC73B60);
      GCGCard::getDesc[abi:cxx11](&val, this);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/card/gcg_card.cpp",
        "reviveCharacter",
        407);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
        &val,
        (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)&v4[2]);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v19, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v8 = 0;
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)&v4[2]);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/card/gcg_card.cpp",
        "reviveCharacter",
        395);
      v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v19,
              (const char (*)[19])"revive_hp is zero ");
      GCGCard::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card.cpp",
      "reviveCharacter",
      385);
    v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v19,
           (const char (*)[27])"revive card not character ");
    GCGCard::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v8 = -1;
  }
  result = v8;
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v4->_M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 412: range 000000000E116C80-000000000E116F53
void __cdecl GCGCard::setCharacterDie(GCGCard *const this, GCGReason reason)
{
  common::milog::MiLogStream *v2; // rbx
  GCGModifyZone *ModifyZone; // rax
  data::GCGTokenType *v4; // rax
  data::GCGTokenType *v5; // rdx
  data::GCGTokenType token_type; // [rsp+14h] [rbp-BCh]
  std::set<data::GCGTokenType>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<data::GCGTokenType>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::set<data::GCGTokenType> *__for_range; // [rsp+28h] [rbp-A8h]
  std::vector<std::shared_ptr<GCGCard>> v10; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-80h] BYREF
  std::string val; // [rsp+70h] [rbp-60h] BYREF
  std::set<data::GCGTokenType> v13; // [rsp+90h] [rbp-40h] BYREF

  if ( GCGCard::getCardType(this) == GCG_CARD_CHARACTER )
  {
    GCGCard::setActive(this, 0);
    if ( (unsigned int)GCGCard::getToken(this, GCG_TOKEN_HP) )
      GCGCard::setToken(this, GCG_TOKEN_HP, 0, reason);
    GCGCard::setToken(this, GCG_TOKEN_ENERGY, 0, reason);
    ModifyZone = GCGCard::getModifyZone(this);
    GCGCardZone::popAllCard(&v10, ModifyZone, reason, 1);
    std::vector<std::shared_ptr<GCGCard>>::~vector(&v10);
    GCGUtils::getElementSet<data::GCGTokenType>(&v13);
    __for_range = &v13;
    __for_begin._M_node = std::set<data::GCGTokenType>::begin(&v13)._M_node;
    __for_end._M_node = std::set<data::GCGTokenType>::end(&v13)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v4 = (data::GCGTokenType *)std::_Rb_tree_const_iterator<data::GCGTokenType>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      token_type = *v5;
      if ( (unsigned int)GCGCard::getToken(this, *v5) )
        GCGCard::setToken(this, token_type, 0, reason);
      std::_Rb_tree_const_iterator<data::GCGTokenType>::operator++(&__for_begin);
    }
    std::set<data::GCGTokenType>::~set(&v13);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card.cpp",
      "setCharacterDie",
      415);
    v2 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v11, (const char (*)[18])"card type error. ");
    GCGCard::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 439: range 000000000E116F54-000000000E117011
bool __cdecl GCGCard::isOnStage(const GCGCard *const this)
{
  GCGDuel *Duel; // rcx
  GCGField *Field; // rax
  GCGCharacterZone *CharacterZone; // rax
  uint32_t v4; // ebx

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode);
  Duel = GCGGameMode::getDuel(this->game_mode);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  Field = GCGDuel::getField(Duel, this->controller_id_);
  CharacterZone = GCGField::getCharacterZone(Field);
  v4 = GCGCharacterZone::getOnStageCardGuid(CharacterZone);
  return v4 == GCGCard::getGuid(this);
};

// Line 446: range 000000000E117012-000000000E1171AB
void __cdecl GCGCard::notifyUpdate(GCGCard *const this, bool is_play_card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  GCGCardDetailInfo *p_card_info; // rcx
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-80h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 message_ptr:447";
  *(_QWORD *)(v2 + 16) = GCGCard::notifyUpdate;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<GCGMsgCardUpdate>();
  p_card_info = &std::__shared_ptr_access<GCGMsgCardUpdate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgCardUpdate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->card_info;
  GCGCardDetailInfo::fromCard(p_card_info, this, is_play_card);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode);
  game_mode = this->game_mode;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgCardUpdate,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgCardUpdate> *)(v2 + 32));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgCardUpdate>::~shared_ptr((std::shared_ptr<GCGMsgCardUpdate> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 453: range 000000000E1171AC-000000000E1173BD
int32_t __cdecl GCGCard::setOwner(GCGCard *const this, GCGCardPtr *p_card_ptr)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t Guid; // ebx
  common::milog::MiLogStream *v4; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  std::weak_ptr<GCGCard> *p_owner_card_wtr; // rdx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  if ( !std::operator!=<GCGCard>(p_card_ptr, 0LL) )
    goto LABEL_6;
  v2 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
  Guid = GCGCard::getGuid(v2);
  if ( Guid == GCGCard::getGuid(this) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card.cpp",
      "setOwner",
      458);
    v4 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v9,
           (const char (*)[26])"owner card can't be self.");
    GCGCard::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
  if ( GCGCard::getCardType(v6) == GCG_CARD_CHARACTER )
  {
LABEL_6:
    p_owner_card_wtr = &GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>)->owner_card_wtr_;
    std::weak_ptr<GCGCard>::operator=<GCGCard>(p_owner_card_wtr, p_card_ptr);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card.cpp",
      "setOwner",
      463);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v9,
           (const char (*)[30])"owner card must be character.");
    GCGCard::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
};

// Line 472: range 000000000E1173BE-000000000E117418
GCGCardPtr __cdecl GCGCard::getOwnerCard(GCGCard *const this)
{
  __int64 v1; // rsi
  GCGCardPtr result; // rax

  GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData((GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode> *const)(v1 + 16));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<GCGCard>::lock(&this->_M_weak_this);
  result._M_ptr = this;
  return result;
};

// Line 477: range 000000000E11741A-000000000E117474
GCGCardPtr __cdecl GCGCard::getOwnerCard(const GCGCard *const this)
{
  __int64 v1; // rsi
  GCGCardPtr result; // rax

  GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData((const GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode> *const)(v1 + 16));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<GCGCard>::lock(&this->_M_weak_this);
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 483: range 000000000E117476-000000000E117673
void __cdecl GCGCard::onAddSkill(GCGCard *const this, const GCGSkillPtr *skill_ptr)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__detail::_Node_iterator_base<GCGEffectCategoryType,false>::__node_type *M_cur; // r12
  std::unordered_multiset<GCGEffectCategoryType>::const_iterator v6; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__detail::_Node_iterator_base<data::GCGTriggerType,false>::__node_type *v8; // r12
  std::unordered_set<data::GCGTriggerType>::const_iterator v9; // rax
  const std::unordered_multiset<GCGEffectCategoryType> *cur_skill_category_set; // [rsp+10h] [rbp-A0h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  std::string val; // [rsp+40h] [rbp-70h] BYREF
  std::unordered_set<data::GCGTriggerType> v13; // [rsp+60h] [rbp-50h] BYREF

  if ( std::operator==<GCGSkill>(skill_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/card/gcg_card.cpp",
      "onAddSkill",
      486);
    v2 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v11, (const char (*)[6])"card:");
    GCGCard::getDesc[abi:cxx11](&val, this);
    v3 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v3, (const char (*)[26])" add skill_ptr is nullptr");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    v4 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
    cur_skill_category_set = GCGSkill::getEffectCategorySet(v4);
    M_cur = std::unordered_multiset<GCGEffectCategoryType>::end(cur_skill_category_set)._M_cur;
    v6._M_cur = std::unordered_multiset<GCGEffectCategoryType>::begin(cur_skill_category_set)._M_cur;
    std::unordered_multiset<GCGEffectCategoryType>::insert<std::__detail::_Node_const_iterator<GCGEffectCategoryType,true,false>>(
      &this->card_skill_category_set_,
      v6,
      (std::__detail::_Node_const_iterator<GCGEffectCategoryType,true,false>)M_cur);
    v7 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
    GCGSkill::getTriggerSet(&v13, v7);
    v8 = std::unordered_set<data::GCGTriggerType>::end(&v13)._M_cur;
    v9._M_cur = std::unordered_set<data::GCGTriggerType>::begin(&v13)._M_cur;
    std::unordered_set<data::GCGTriggerType>::insert<std::__detail::_Node_const_iterator<data::GCGTriggerType,true,false>>(
      &this->card_skill_trigger_set_,
      v9,
      (std::__detail::_Node_const_iterator<data::GCGTriggerType,true,false>)v8);
    std::unordered_set<data::GCGTriggerType>::~unordered_set(&v13);
  }
};

// Line 496: range 000000000E117674-000000000E11770D
void __cdecl GCGCard::addSkill(GCGCard *const this, GCGSkillPtr *p_skill_ptr)
{
  GCGSkill *v2; // rbx
  std::enable_shared_from_this<GCGCard> v3; // [rsp+10h] [rbp-20h] BYREF

  if ( !std::operator==<GCGSkill>(p_skill_ptr, 0LL) )
  {
    std::vector<std::shared_ptr<GCGSkill>>::push_back(&this->skill_vec_, p_skill_ptr);
    v2 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_skill_ptr);
    std::enable_shared_from_this<GCGCard>::weak_from_this(&v3);
    GCGSkill::setOwnerCard(v2, &v3._M_weak_this);
    std::weak_ptr<GCGCard>::~weak_ptr(&v3._M_weak_this);
    GCGCard::onAddSkill(this, p_skill_ptr);
  }
};

// Line 507: range 000000000E11770E-000000000E1177C4
void __cdecl GCGCard::foreachSkill(const GCGCard *const this, std::function<ForeachPolicy(const GCGSkill&)> *p_func)
{
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx
  std::vector<std::shared_ptr<GCGSkill>>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<GCGSkill>>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const std::vector<std::shared_ptr<GCGSkill>> *__for_range; // [rsp+20h] [rbp-10h]
  const std::shared_ptr<GCGSkill> *skill_ptr; // [rsp+28h] [rbp-8h]

  __for_range = &this->skill_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGSkill>>::begin(&this->skill_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGSkill>>::end(&this->skill_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGSkill> const*,std::vector<std::shared_ptr<GCGSkill>>>(
            &__for_begin,
            &__for_end) )
  {
    skill_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> const*,std::vector<std::shared_ptr<GCGSkill>>>::operator*(&__for_begin);
    if ( !std::operator==<GCGSkill>(skill_ptr, 0LL) )
    {
      v2 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
      if ( std::function<ForeachPolicy ()(GCGSkill const&)>::operator()(p_func, v2) == FOREACH_BREAK )
        break;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> const*,std::vector<std::shared_ptr<GCGSkill>>>::operator++(&__for_begin);
  }
};

// Line 522: range 000000000E1177C6-000000000E117AA2
void __cdecl GCGCard::foreachSkill(GCGCard *const this, std::function<ForeachPolicy(GCGSkill&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v7; // r14
  GCGSkill *v8; // rdx
  std::vector<std::shared_ptr<GCGSkill>>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::vector<std::shared_ptr<GCGSkill>>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<std::shared_ptr<GCGSkill>> *__for_range; // [rsp+20h] [rbp-C0h]
  std::shared_ptr<GCGSkill> *skill_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v15[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 dummy_card_ptr:523";
  *(_QWORD *)(v2 + 16) = GCGCard::foreachSkill;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::enable_shared_from_this<GCGCard>::shared_from_this((std::enable_shared_from_this<GCGCard> *const)(v2 + 32));
  __for_range = &this->skill_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGSkill>>::begin(&this->skill_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGSkill>>::end(&this->skill_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>(
            &__for_begin,
            &__for_end) )
  {
    skill_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>::operator*(&__for_begin);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL)
      || (v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32)),
          !GCGCard::isActivated(v5)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/card/gcg_card.cpp",
        "foreachSkill",
        528);
      v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v13,
             (const char (*)[38])"doAllSkills exit for card being moved");
      GCGCard::getDesc[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v13);
      break;
    }
    if ( !std::operator==<GCGSkill>(skill_ptr, 0LL) )
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
      if ( std::function<ForeachPolicy ()(GCGSkill &)>::operator()(p_func, v8) == FOREACH_BREAK )
        break;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>::operator++(&__for_begin);
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 543: range 000000000E117AA4-000000000E117F51
void __cdecl GCGCard::doAllSkills(GCGCard *const this, const GCGSkillUseParam *param, GCGSkillResult *result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  GCGSkill *v7; // rcx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  char v10; // al
  std::vector<std::shared_ptr<GCGSkill>>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<GCGSkill>>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::vector<std::shared_ptr<GCGSkill>> *__for_range; // [rsp+30h] [rbp-90h]
  GCGSkillPtr *skill_ptr; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-80h] BYREF
  char v17[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 dummy_card_ptr:556";
  *(_QWORD *)(v3 + 16) = GCGCard::doAllSkills;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&result->is_ignore_after_effect >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&result->is_ignore_after_effect >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load1(&result->is_ignore_after_effect);
  }
  if ( !result->is_ignore_after_effect )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->effect_category_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->effect_category_type >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&param->effect_category_type);
    }
    if ( param->effect_category_type )
    {
      std::enable_shared_from_this<GCGCard>::shared_from_this((std::enable_shared_from_this<GCGCard> *const)(v3 + 32));
      __for_range = &this->skill_vec_;
      __for_begin._M_current = std::vector<std::shared_ptr<GCGSkill>>::begin(&this->skill_vec_)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<GCGSkill>>::end(&this->skill_vec_)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>(
                &__for_begin,
                &__for_end) )
      {
        skill_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>::operator*(&__for_begin);
        if ( !std::operator==<GCGSkill>(skill_ptr, 0LL) )
        {
          v6 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
          if ( GCGSkill::checkSkillCondition(v6, param) )
          {
            v7 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
            GCGSkill::doAllEffects(v7, param, result);
            if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 32), 0LL)
              || (v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
                  !GCGCard::isActivated(v8)) )
            {
              common::milog::MiLogStream::create(
                &v16,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/card/gcg_card.cpp",
                "doAllSkills",
                570);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v16,
                (const char (*)[38])"doAllSkills exit for card being moved");
              common::milog::MiLogStream::~MiLogStream(&v16);
              break;
            }
            if ( *(_BYTE *)(((unsigned __int64)&result->is_ignore_after_effect >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)result + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&result->is_ignore_after_effect >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load1(&result->is_ignore_after_effect);
            }
            if ( result->is_ignore_after_effect )
              break;
            if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->game_mode);
            if ( !GCGGameMode::isDuringSnapshot(this->game_mode) )
              goto LABEL_31;
            if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->game_mode);
            if ( GCGGameMode::isNeedBreakForSpecialAsk(this->game_mode) )
              v10 = 1;
            else
LABEL_31:
              v10 = 0;
            if ( v10 )
              break;
          }
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>::operator++(&__for_begin);
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/card/gcg_card.cpp",
        "doAllSkills",
        552);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v16,
        (const char (*)[33])"can't do ACTIVE_CATEGORY effect.");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 587: range 000000000E117F52-000000000E1183B6
void __cdecl GCGCard::assignElementTypeByTagset(GCGCard *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<data::GCGTagType>::reference v4; // rax
  _DWORD *v5; // rdx
  std::__detail::_Node_iterator<std::pair<const data::GCGTagType,data::GCGEffectElementType>,false,false>::pointer v6; // rdx
  data::GCGEffectElementType *p_second; // rax
  GCGEffectElementType second; // ecx
  std::unordered_map<data::GCGTagType,data::GCGEffectElementType>::hasher __hf; // [rsp+2Dh] [rbp-F3h] BYREF
  std::unordered_map<data::GCGTagType,data::GCGEffectElementType>::key_equal __eql; // [rsp+2Eh] [rbp-F2h] BYREF
  std::allocator<std::pair<const data::GCGTagType,data::GCGEffectElementType> > __a; // [rsp+2Fh] [rbp-F1h] BYREF
  std::set<data::GCGTagType>::iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  std::set<data::GCGTagType>::iterator __for_end; // [rsp+38h] [rbp-E8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const data::GCGTagType,data::GCGEffectElementType>,false> __y; // [rsp+40h] [rbp-E0h] BYREF
  std::set<data::GCGTagType> *__for_range; // [rsp+48h] [rbp-D8h]
  std::initializer_list<std::pair<const data::GCGTagType,data::GCGEffectElementType> > __l; // [rsp+50h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-C0h]
  __int64 v18; // [rsp+68h] [rbp-B8h]
  __int64 v19; // [rsp+70h] [rbp-B0h]
  __int64 v20; // [rsp+78h] [rbp-A8h]
  __int64 v21; // [rsp+80h] [rbp-A0h]
  char v22[144]; // [rsp+90h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 7 tag:598 64 8 8 iter:600";
  *(_QWORD *)(v1 + 16) = GCGCard::assignElementTypeByTagset;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  if ( !(_BYTE)`guard variable for'GCGCard::assignElementTypeByTagset(void)::tag_to_element_map
    && __cxa_guard_acquire(&`guard variable for'GCGCard::assignElementTypeByTagset(void)::tag_to_element_map) )
  {
    __l._M_array = (std::initializer_list<std::pair<const data::GCGTagType,data::GCGEffectElementType> >::iterator)0x10000012DLL;
    __l._M_len = 0x20000012ELL;
    v17 = 0x30000012FLL;
    v18 = 0x400000130LL;
    v19 = 0x500000131LL;
    v20 = 0x600000132LL;
    v21 = 0x700000133LL;
    std::allocator<std::pair<data::GCGTagType const,data::GCGEffectElementType>>::allocator(&__a);
    std::unordered_map<data::GCGTagType,data::GCGEffectElementType>::unordered_map(
      &GCGCard::assignElementTypeByTagset(void)::tag_to_element_map,
      (std::initializer_list<std::pair<const data::GCGTagType,data::GCGEffectElementType> >)__PAIR128__(7LL, &__l),
      0LL,
      &__hf,
      &__eql,
      &__a);
    __cxa_guard_release(&`guard variable for'GCGCard::assignElementTypeByTagset(void)::tag_to_element_map);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<data::GCGTagType,data::GCGEffectElementType>::~unordered_map,
      &GCGCard::assignElementTypeByTagset(void)::tag_to_element_map,
      &_dso_handle);
    std::allocator<std::pair<data::GCGTagType const,data::GCGEffectElementType>>::~allocator(&__a);
  }
  __for_range = &this->tag_set_;
  __for_begin._M_node = std::set<data::GCGTagType>::begin(&this->tag_set_)._M_node;
  __for_end._M_node = std::set<data::GCGTagType>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<data::GCGTagType>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 48) = *v5;
    *(std::unordered_map<data::GCGTagType,data::GCGEffectElementType>::iterator *)(v1 + 64) = std::unordered_map<data::GCGTagType,data::GCGEffectElementType>::find(
                                                                                                &GCGCard::assignElementTypeByTagset(void)::tag_to_element_map,
                                                                                                (const std::unordered_map<data::GCGTagType,data::GCGEffectElementType>::key_type *)(v1 + 48));
    __y._M_cur = std::unordered_map<data::GCGTagType,data::GCGEffectElementType>::end(&GCGCard::assignElementTypeByTagset(void)::tag_to_element_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<data::GCGTagType const,data::GCGEffectElementType>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<const data::GCGTagType,data::GCGEffectElementType>,false> *)(v1 + 64),
           &__y) )
    {
      v6 = std::__detail::_Node_iterator<std::pair<data::GCGTagType const,data::GCGEffectElementType>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::GCGTagType,data::GCGEffectElementType>,false,false> *const)(v1 + 64));
      p_second = &v6->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      second = v6->second;
      if ( *(_BYTE *)(((unsigned __int64)&this->element_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->element_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->element_type_);
      }
      this->element_type_ = second;
      break;
    }
    std::_Rb_tree_const_iterator<data::GCGTagType>::operator++(&__for_begin);
  }
  if ( v22 == (char *)v1 )
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

// Line 610: range 000000000E1183B8-000000000E118588
void __fastcall GCGCard::setEnergy(GCGCard *const this, uint32_t value, GCGReason reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 before_energy:611 64 4 9 value:609";
  *(_QWORD *)(v3 + 16) = GCGCard::setEnergy;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = value;
  *(_DWORD *)(v3 + 48) = GCGCard::getCurEnergy(this);
  GCGCard::setToken(this, GCG_TOKEN_ENERGY, *(_DWORD *)(v3 + 64), reason);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/card/gcg_card.cpp",
    "setEnergy",
    613);
  v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v10,
         (const char (*)[25])"setEnergy before_energy:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" set value:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
  common::milog::MiLogStream::~MiLogStream(&v10);
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

// Line 617: range 000000000E11858A-000000000E1185A8
uint32_t __cdecl GCGCard::getMaxEnergy(const GCGCard *const this)
{
  return GCGCard::getToken(this, GCG_TOKEN_MAX_ENERGY);
};

// Line 622: range 000000000E1185AA-000000000E1185C8
uint32_t __cdecl GCGCard::getCurEnergy(const GCGCard *const this)
{
  return GCGCard::getToken(this, GCG_TOKEN_ENERGY);
};

// Line 628: range 000000000E1185CA-000000000E11889D
__int64 __fastcall GCGCard::addEnergy(GCGCard *const this, uint32_t value, GCGReason reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t max_energy; // [rsp+1Ch] [rbp-A4h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 cur_energy:630 48 4 19 final_add_value:636 64 4 9 value:627";
  *(_QWORD *)(v3 + 16) = GCGCard::addEnergy;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = value;
  max_energy = GCGCard::getToken(this, GCG_TOKEN_MAX_ENERGY);
  *(_DWORD *)(v3 + 32) = GCGCard::getToken(this, GCG_TOKEN_ENERGY);
  if ( max_energy == *(_DWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/card/gcg_card.cpp",
      "addEnergy",
      633);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v15,
           (const char (*)[28])"energy is full, cur_energy:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" value:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0LL;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = *(_DWORD *)(v3 + 64);
    if ( max_energy < *(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 64) )
      *(_DWORD *)(v3 + 48) = max_energy - *(_DWORD *)(v3 + 32);
    GCGCard::addToken(this, GCG_TOKEN_ENERGY, *(_DWORD *)(v3 + 48), reason);
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/card/gcg_card.cpp",
      "addEnergy",
      642);
    v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v15, (const char (*)[17])"addEnergy value:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])" final_add_value:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0LL;
  }
  if ( v16 == (char *)v3 )
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

// Line 647: range 000000000E11889E-000000000E118A89
__int64 __fastcall GCGCard::subEnergy(GCGCard *const this, uint32_t value, GCGReason reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 cur_energy:648 64 4 9 value:646";
  *(_QWORD *)(v3 + 16) = GCGCard::subEnergy;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = value;
  *(_DWORD *)(v3 + 48) = GCGCard::getToken(this, GCG_TOKEN_ENERGY);
  if ( *(_DWORD *)(v3 + 48) < *(_DWORD *)(v3 + 64) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/card/gcg_card.cpp",
      "subEnergy",
      651);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v11, (const char (*)[15])"subEnergy cur:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" cost:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = GCGCard::subToken(this, GCG_TOKEN_ENERGY, *(_DWORD *)(v3 + 64), reason);
  }
  if ( v12 == (char *)v3 )
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

// Line 658: range 000000000E118A8A-000000000E118AD4
uint32_t __cdecl GCGCard::getEnergyNoCharged(const GCGCard *const this)
{
  uint32_t max_energy; // [rsp+18h] [rbp-8h]
  uint32_t cur_energy; // [rsp+1Ch] [rbp-4h]

  max_energy = GCGCard::getToken(this, GCG_TOKEN_MAX_ENERGY);
  cur_energy = GCGCard::getToken(this, GCG_TOKEN_ENERGY);
  if ( max_energy <= cur_energy )
    return 0;
  else
    return max_energy - cur_energy;
};

// Line 669: range 000000000E118AD6-000000000E118B1F
bool __cdecl GCGCard::isEnergyFull(GCGCard *const this)
{
  uint32_t max_energy; // [rsp+18h] [rbp-8h]

  max_energy = GCGCard::getToken(this, GCG_TOKEN_MAX_ENERGY);
  return (unsigned int)GCGCard::getToken(this, GCG_TOKEN_ENERGY) >= max_energy;
};

// Line 680: range 000000000E118B20-000000000E118B3E
uint32_t __cdecl GCGCard::getCurHp(const GCGCard *const this)
{
  return GCGCard::getToken(this, GCG_TOKEN_HP);
};

// Line 685: range 000000000E118B40-000000000E118B5E
uint32_t __cdecl GCGCard::getMaxHp(const GCGCard *const this)
{
  return GCGCard::getToken(this, GCG_TOKEN_MAX_HP);
};

// Line 691: range 000000000E118B60-000000000E118C2A
bool __cdecl GCGCard::isActivated(const GCGCard *const this)
{
  const GCGCardRuntimeData *RuntimeData; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_type_);
  }
  if ( this->card_type_ == GCG_CARD_EVENT )
    return 1;
  RuntimeData = GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>);
  if ( std::__weak_ptr<GCGCardZone,(__gnu_cxx::_Lock_policy)2>::expired(&RuntimeData->zone_wtr_) )
    return 0;
  v3 = (unsigned __int64)GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>);
  if ( *(char *)((v3 >> 3) + 0x7FFF8000) < 0 )
    v3 = __asan_report_load1(v3);
  return *(_BYTE *)v3;
};

// Line 707: range 000000000E118C2C-000000000E118D46
void __cdecl GCGCard::setActive(GCGCard *const this, bool is_active)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  unsigned __int64 RuntimeData; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/card/gcg_card.cpp",
    "setActive",
    708);
  v2 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v5, (const char (*)[12])"is_active: ");
  v3 = common::milog::MiLogStream::operator<<(v2, is_active);
  GCGCard::getDesc[abi:cxx11](&val, this);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  RuntimeData = (unsigned __int64)GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>);
  if ( *(char *)((RuntimeData >> 3) + 0x7FFF8000) < 0 )
    RuntimeData = __asan_report_store1(RuntimeData);
  *(_BYTE *)RuntimeData = is_active;
};

// Line 713: range 000000000E118D48-000000000E118D7D
void __cdecl GCGCard::setZone(GCGCard *const this, GCGCardZonePtr *p_zone_ptr)
{
  GCGCardZoneWtr *p_zone_wtr; // rdx

  p_zone_wtr = &GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>)->zone_wtr_;
  std::weak_ptr<GCGCardZone>::operator=<GCGCardZone>(p_zone_wtr, p_zone_ptr);
};

// Line 718: range 000000000E118D7E-000000000E118E9B
GCGZoneType __cdecl GCGCard::getZoneType(const GCGCard *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  GCGZoneType ZoneType; // r14d
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  GCGZoneType result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 zone_ptr:719";
  *(_QWORD *)(v1 + 16) = GCGCard::getZoneType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>);
  std::weak_ptr<GCGCardZone>::lock((const std::weak_ptr<GCGCardZone> *const)(v1 + 32));
  if ( std::operator==<GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v1 + 32), 0LL) )
  {
    ZoneType = GCG_ZONE_INVALID;
  }
  else
  {
    v5 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    ZoneType = GCGCardZone::getZoneType(v5);
  }
  std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v1 + 32));
  result = ZoneType;
  if ( v7 == (char *)v1 )
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

// Line 728: range 000000000E118E9C-000000000E118EFD
void __cdecl GCGCard::resetZone(GCGCard *const this)
{
  std::shared_ptr<GCGCardZone> p_zone_ptr; // [rsp+10h] [rbp-20h] BYREF

  std::shared_ptr<GCGCardZone>::shared_ptr(&p_zone_ptr, 0LL);
  GCGCard::setZone(this, &p_zone_ptr);
  std::shared_ptr<GCGCardZone>::~shared_ptr(&p_zone_ptr);
};

// Line 733: range 000000000E118EFE-000000000E118F58
GCGCardZonePtr __cdecl GCGCard::getZone(GCGCard *const this)
{
  __int64 v1; // rsi
  GCGCardZonePtr result; // rax

  GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData((GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode> *const)(v1 + 16));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<GCGCardZone>::lock((const std::weak_ptr<GCGCardZone> *const)this);
  result._M_ptr = (std::__shared_ptr<GCGCardZone,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 739: range 000000000E118F5A-000000000E119086
void __fastcall GCGCard::absordUbusedDice(GCGCard *const this, GCGDiceSideType dice_side_type, uint32_t dice_num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  GCGCardRuntimeData *RuntimeData; // rax
  unsigned __int64 v7; // rax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 18 dice_side_type:738";
  *(_QWORD *)(v3 + 16) = GCGCard::absordUbusedDice;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = dice_side_type;
  if ( *(_DWORD *)(v3 + 32) )
  {
    RuntimeData = GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>);
    v7 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                             &RuntimeData->absorb_unused_dice_map_,
                             (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v3 + 32));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load4(v7);
    *(_DWORD *)v7 += dice_num;
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 748: range 000000000E119088-000000000E11922D
__int64 __fastcall GCGCard::getAbsorbUnusedDiceNumByType(GCGCard *const this, GCGDiceSideType dice_side_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGCardRuntimeData *RuntimeData; // rax
  GCGCardRuntimeData *v6; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::pointer v7; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 dice_side_type:747 64 8 8 iter:749";
  *(_QWORD *)(v2 + 16) = GCGCard::getAbsorbUnusedDiceNumByType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = dice_side_type;
  RuntimeData = GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>);
  *(std::map<proto::GCGDiceSideType,unsigned int>::iterator *)(v2 + 64) = std::map<proto::GCGDiceSideType,unsigned int>::find(
                                                                            &RuntimeData->absorb_unused_dice_map_,
                                                                            (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 48));
  v6 = GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>);
  __y._M_node = std::map<proto::GCGDiceSideType,unsigned int>::end(&v6->absorb_unused_dice_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> > *const)(v2 + 64));
    p_second = &v7->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v7->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v11 == (char *)v2 )
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

// Line 759: range 000000000E11922E-000000000E11935A
uint32_t __cdecl GCGCard::getAbsorbUnusedDiceNum(const GCGCard *const this)
{
  uint32_t dice_num_total; // [rsp+1Ch] [rbp-34h]
  std::map<proto::GCGDiceSideType,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<proto::GCGDiceSideType,unsigned int> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<const proto::GCGDiceSideType,unsigned int> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_side_type; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_num; // [rsp+48h] [rbp-8h]

  dice_num_total = 0;
  __for_range = &GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>)->absorb_unused_dice_map_;
  __for_begin._M_node = std::map<proto::GCGDiceSideType,unsigned int>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<proto::GCGDiceSideType,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator*(&__for_begin);
    dice_side_type = std::get<0ul,proto::GCGDiceSideType const,unsigned int>(v6);
    dice_num = (std::tuple_element<1,const std::pair<const proto::GCGDiceSideType,unsigned int> >::type *)std::get<1ul,proto::GCGDiceSideType const,unsigned int>(v6);
    if ( *(_BYTE *)(((unsigned __int64)dice_side_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dice_side_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_side_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(dice_side_type);
    }
    if ( *dice_side_type )
    {
      if ( *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(dice_num);
      }
      dice_num_total += *dice_num;
    }
    std::_Rb_tree_const_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator++(&__for_begin);
  }
  return dice_num_total;
};
