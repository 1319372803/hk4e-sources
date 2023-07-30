// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/common/gcg_utils.cpp

// Line 55: range 000000000DED704A-000000000DED7093
GCGCardShowState __cdecl GCGUtils::getCardShowStateByZoneType(GCGZoneType zone_type)
{
  if ( zone_type <= GCG_ZONE_RULE )
  {
    if ( zone_type >= GCG_ZONE_ASSIST )
      return 2;
    if ( zone_type <= GCG_ZONE_SUMMON )
    {
      if ( zone_type < GCG_ZONE_CHARACTER )
      {
        if ( zone_type == GCG_ZONE_DECK )
          return 0;
        return zone_type == GCG_ZONE_HAND;
      }
      return 2;
    }
  }
  return 0;
};

// Line 83: range 000000000DED7094-000000000DED7733
uint32_t __cdecl GCGUtils::moveCard(GCGCardZone *src_zone, GCGCardZone *target_zone, uint32_t num, GCGReason reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  GCGZoneType ZoneType; // eax
  int v8; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GCGCard *v10; // r14
  GCGCardShowState CardShowStateByZoneType; // eax
  GCGCard *v12; // rax
  GCGZoneType v13; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  GCGZoneType *p_from; // rax
  GCGZoneType v16; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::vector<unsigned int> *v21; // r14
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  GCGGameMode *GameMode; // r14
  uint32_t result; // eax
  bool is_need_update; // [rsp+2Fh] [rbp-161h]
  GCGZoneType target_zone_type; // [rsp+30h] [rbp-160h]
  GCGCardShowState target_show_state; // [rsp+34h] [rbp-15Ch]
  size_t i; // [rsp+38h] [rbp-158h]
  std::tuple_element<0,std::tuple<int,std::shared_ptr<GCGCard> > >::type *ret; // [rsp+40h] [rbp-150h]
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+50h] [rbp-140h] BYREF
  std::tuple<int,std::shared_ptr<GCGCard> > __t; // [rsp+60h] [rbp-130h] BYREF
  char v35[272]; // [rsp+80h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 12 card_guid:96 64 16 15 message_ptr:110 96 24 20 pop_card_guid_vec:84 160 24 21 fail_card_guid_vec:85";
  *(_QWORD *)(v4 + 16) = GCGUtils::moveCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 96));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 160));
  target_zone_type = GCGCardZone::getZoneType(target_zone);
  target_show_state = GCGUtils::getCardShowStateByZoneType(target_zone_type);
  ZoneType = GCGCardZone::getZoneType(src_zone);
  is_need_update = target_show_state != GCGUtils::getCardShowStateByZoneType(ZoneType);
  for ( i = 0LL; i < num; ++i )
  {
    GCGCardZone::popCard((GCGCardZone *const)(v4 + 64), (GCGReason)src_zone, reason);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
    {
      v8 = 0;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      *(_DWORD *)(v4 + 48) = GCGCard::getGuid(v9);
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v4 + 96),
        (const std::vector<unsigned int>::value_type *)(v4 + 48));
      if ( is_need_update )
      {
        v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        CardShowStateByZoneType = GCGUtils::getCardShowStateByZoneType(target_zone_type);
        GCGCard::setShowState(v10, CardShowStateByZoneType);
        v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        GCGCard::notifyUpdate(v12, 0);
      }
      std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v4 + 64));
      GCGCardZone::addCard(&__t, target_zone, &p_card_ptr, reason, 0, 0);
      std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
      ret = std::get<0ul,int,std::shared_ptr<GCGCard>>(&__t);
      std::get<1ul,int,std::shared_ptr<GCGCard>>(&__t);
      if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(ret);
      }
      if ( *ret )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v4 + 160),
          (const std::vector<unsigned int>::value_type *)(v4 + 48));
      std::tuple<int,std::shared_ptr<GCGCard>>::~tuple(&__t);
      v8 = 1;
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
    if ( v8 != 1 )
      break;
  }
  common::tools::perf::make_shared<GCGMsgMoveCard>();
  v13 = GCGCardZone::getZoneType(src_zone);
  v14 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  p_from = &v14->from;
  if ( *(_BYTE *)(((unsigned __int64)p_from >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_from & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_from >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_from);
  }
  v14->from = v13;
  v16 = GCGCardZone::getZoneType(target_zone);
  v17 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v17->to >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->to >> 3) + 0x7FFF8000) <= 3 )
  {
    v17 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v17->to);
  }
  v17->to = v16;
  ControllerId = GCGCardZone::getControllerId(target_zone);
  v19 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v19->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v19 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v19->controller_id);
  }
  v19->controller_id = ControllerId;
  v20 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  std::vector<unsigned int>::operator=(&v20->card_guid_vec, (const std::vector<unsigned int> *)(v4 + 96));
  v21 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v4 + 160));
  v22 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  std::vector<unsigned int>::operator=(&v22->fail_guid_vec, v21);
  v23 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v23->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    v23 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v23->reason);
  }
  v23->reason = reason;
  GameMode = GCGCardZone::getGameMode(src_zone);
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgMoveCard,void>(
    (std::shared_ptr<GCGMessage> *const)&p_card_ptr,
    (const std::shared_ptr<GCGMsgMoveCard> *)(v4 + 64));
  GCGGameMode::sendMessage(GameMode, (GCGMessagePtr *)&p_card_ptr);
  std::shared_ptr<GCGMessage>::~shared_ptr((std::shared_ptr<GCGMessage> *const)&p_card_ptr);
  LODWORD(GameMode) = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 96));
  std::shared_ptr<GCGMsgMoveCard>::~shared_ptr((std::shared_ptr<GCGMsgMoveCard> *const)(v4 + 64));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 160));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 96));
  result = (unsigned int)GameMode;
  if ( v35 == (char *)v4 )
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

// Line 122: range 000000000DED787A-000000000DED8018
__int64 __fastcall GCGUtils::moveCardByTag(
        GCGCardZone *src_zone,
        GCGCardZone *target_zone,
        uint32_t num,
        GCGTagType tag,
        GCGReason reason)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  const std::shared_ptr<GCGCard> *v8; // rax
  int v9; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGCard *v11; // r14
  GCGCardShowState CardShowStateByZoneType; // eax
  GCGCard *v13; // rax
  GCGZoneType ZoneType; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  GCGZoneType *p_from; // rax
  GCGZoneType v17; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::vector<unsigned int> *v22; // r14
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  GCGGameMode *GameMode; // r14
  __int64 result; // rax
  GCGZoneType target_zone_type; // [rsp+34h] [rbp-1CCh]
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_begin; // [rsp+38h] [rbp-1C8h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_end; // [rsp+40h] [rbp-1C0h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+48h] [rbp-1B8h]
  std::tuple_element<0,std::tuple<int,std::shared_ptr<GCGCard> > >::type *ret; // [rsp+50h] [rbp-1B0h]
  std::tuple_element<0,std::tuple<std::shared_ptr<GCGCard> > >::type *_; // [rsp+58h] [rbp-1A8h]
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+60h] [rbp-1A0h] BYREF
  std::tuple<int,std::shared_ptr<GCGCard> > __t; // [rsp+70h] [rbp-190h] BYREF
  std::function<bool(GCGCard&)> p_pred; // [rsp+90h] [rbp-170h] BYREF
  char v40[336]; // [rsp+B0h] [rbp-150h] BYREF
  GCGUtils::moveCardByTag::<lambda(GCGCard&)> v41; // 0:rsi.8,8:edx.4

  v5 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 13 card_guid:141 48 4 7 num:121 64 16 15 message_ptr:152 96 24 21 pop_card_guid_vec:123 1"
                        "60 24 22 fail_card_guid_vec:124 224 24 16 card_ptr_vec:125";
  *(_QWORD *)(v5 + 16) = GCGUtils::moveCardByTag;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -219021312;
  v7[536862723] = -234881024;
  v7[536862724] = -218959118;
  v7[536862725] = -234881024;
  v7[536862726] = -218959118;
  v7[536862727] = -218103808;
  v7[536862728] = -202116109;
  *(_DWORD *)(v5 + 48) = num;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 96));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 160));
  v41.__tag = tag;
  v41.__num = (uint32_t *)(v5 + 48);
  std::function<bool ()(GCGCard &)>::function<GCGUtils::moveCardByTag(GCGCardZone &,GCGCardZone &,unsigned int,data::GCGTagType,proto::GCGReason)::{lambda(GCGCard &)#1},void,void>(
    &p_pred,
    v41);
  GCGCardZone::popCard((std::vector<std::shared_ptr<GCGCard>> *)(v5 + 224), src_zone, &p_pred, reason, 0);
  std::function<bool ()(GCGCard &)>::~function(&p_pred);
  target_zone_type = GCGCardZone::getZoneType(target_zone);
  __for_range = (std::vector<std::shared_ptr<GCGCard>> *)(v5 + 224);
  __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin((std::vector<std::shared_ptr<GCGCard>> *const)(v5 + 224))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end((std::vector<std::shared_ptr<GCGCard>> *const)(v5 + 224))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin,
            &__for_end) )
  {
    v8 = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 64), v8);
    if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v5 + 64)) )
    {
      v9 = 0;
    }
    else
    {
      v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      *(_DWORD *)(v5 + 32) = GCGCard::getGuid(v10);
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v5 + 96),
        (const std::vector<unsigned int>::value_type *)(v5 + 32));
      v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      CardShowStateByZoneType = GCGUtils::getCardShowStateByZoneType(target_zone_type);
      GCGCard::setShowState(v11, CardShowStateByZoneType);
      v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      GCGCard::notifyUpdate(v13, 0);
      std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v5 + 64));
      GCGCardZone::addCard(&__t, target_zone, &p_card_ptr, reason, 0, 0);
      std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
      ret = std::get<0ul,int,std::shared_ptr<GCGCard>>(&__t);
      _ = std::get<1ul,int,std::shared_ptr<GCGCard>>(&__t);
      if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(ret);
      }
      if ( *ret )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v5 + 160),
          (const std::vector<unsigned int>::value_type *)(v5 + 32));
      std::tuple<int,std::shared_ptr<GCGCard>>::~tuple(&__t);
      v9 = 1;
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 64));
    if ( v9 != 1 )
      break;
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  common::tools::perf::make_shared<GCGMsgMoveCard>();
  ZoneType = GCGCardZone::getZoneType(src_zone);
  v15 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  p_from = &v15->from;
  if ( *(_BYTE *)(((unsigned __int64)p_from >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_from & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_from >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_from);
  }
  v15->from = ZoneType;
  v17 = GCGCardZone::getZoneType(target_zone);
  v18 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v18->to >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->to >> 3) + 0x7FFF8000) <= 3 )
  {
    v18 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v18->to);
  }
  v18->to = v17;
  ControllerId = GCGCardZone::getControllerId(target_zone);
  v20 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v20->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v20 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v20->controller_id);
  }
  v20->controller_id = ControllerId;
  v21 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  std::vector<unsigned int>::operator=(&v21->card_guid_vec, (const std::vector<unsigned int> *)(v5 + 96));
  v22 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v5 + 160));
  v23 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  std::vector<unsigned int>::operator=(&v23->fail_guid_vec, v22);
  v24 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v24->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    v24 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v24->reason);
  }
  v24->reason = reason;
  GameMode = GCGCardZone::getGameMode(src_zone);
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgMoveCard,void>(
    (std::shared_ptr<GCGMessage> *const)&p_card_ptr,
    (const std::shared_ptr<GCGMsgMoveCard> *)(v5 + 64));
  GCGGameMode::sendMessage(GameMode, (GCGMessagePtr *)&p_card_ptr);
  std::shared_ptr<GCGMessage>::~shared_ptr((std::shared_ptr<GCGMessage> *const)&p_card_ptr);
  LODWORD(GameMode) = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 96));
  std::shared_ptr<GCGMsgMoveCard>::~shared_ptr((std::shared_ptr<GCGMsgMoveCard> *const)(v5 + 64));
  std::vector<std::shared_ptr<GCGCard>>::~vector((std::vector<std::shared_ptr<GCGCard>> *const)(v5 + 224));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 160));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 96));
  result = (unsigned int)GameMode;
  if ( v40 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 125: range 000000000DED7734-000000000DED7878
bool __cdecl GCGUtils::moveCardByTag(GCGCardZone &,GCGCardZone &,unsigned int,data::GCGTagType,proto::GCGReason)::{lambda(GCGCard &)#1}::operator()(
        const GCGUtils::moveCardByTag::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  uint32_t *num; // rdx
  char v3; // al
  uint32_t *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  num = __closure->__num;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__num >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__num);
  }
  if ( !*num )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__tag);
  }
  if ( GCGCard::isHasTag(card, __closure->__tag) )
    v3 = 1;
  else
LABEL_10:
    v3 = 0;
  if ( !v3 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v4 = __closure->__num;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__num >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__num >> 3) + 0x7FFF8000) )
  {
    v4 = (uint32_t *)__asan_report_load4(__closure->__num);
  }
  --*v4;
  return 1;
};

// Line 164: range 000000000DED801A-000000000DED8588
std::string *__cdecl GCGUtils::getCostAndSelectDiceMap[abi:cxx11](
        std::string *retstr,
        const std::map<data::GCGCostType,unsigned int> *need_cost_map,
        const std::map<proto::GCGDiceSideType,unsigned int> *dice_side_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::pair<const proto::GCGDiceSideType,unsigned int> *v6; // rax
  std::pair<const proto::GCGDiceSideType,unsigned int> *v7; // rdx
  const char *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rax
  std::pair<const proto::GCGDiceSideType,unsigned int> *v12; // rax
  std::pair<const proto::GCGDiceSideType,unsigned int> *v13; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rax
  std::map<data::GCGCostType,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::map<data::GCGCostType,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  const std::map<data::GCGCostType,unsigned int> *__for_range; // [rsp+38h] [rbp-98h]
  const std::map<proto::GCGDiceSideType,unsigned int> *__for_range_0; // [rsp+40h] [rbp-90h]
  std::tuple_element<0,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *side_type; // [rsp+48h] [rbp-88h]
  std::tuple_element<1,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *dice_num; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,std::pair<const data::GCGCostType,unsigned int> >::type *cost_type; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,std::pair<const data::GCGCostType,unsigned int> >::type *cost_num; // [rsp+60h] [rbp-70h]
  std::pair<const proto::GCGDiceSideType,unsigned int> __in; // [rsp+68h] [rbp-68h] BYREF
  char v28[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 6 ss:165";
  *(_QWORD *)(v3 + 16) = GCGUtils::getCostAndSelectDiceMap[abi:cxx11];
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32),
    "COST[");
  __for_range = need_cost_map;
  __for_begin._M_node = std::map<data::GCGCostType,unsigned int>::begin(need_cost_map)._M_node;
  __for_end._M_node = std::map<data::GCGCostType,unsigned int>::end(need_cost_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (std::pair<const proto::GCGDiceSideType,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v6, 8LL);
    }
    __in = *v7;
    cost_type = std::get<0ul,data::GCGCostType const,unsigned int>((std::pair<const data::GCGCostType,unsigned int> *)&__in);
    cost_num = std::get<1ul,data::GCGCostType const,unsigned int>((std::pair<const data::GCGCostType,unsigned int> *)&__in);
    if ( *(_BYTE *)(((unsigned __int64)cost_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cost_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cost_type);
    }
    v8 = data::enumValToStr(*cost_type);
    v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32),
           v8);
    v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, ":");
    if ( *(_BYTE *)(((unsigned __int64)cost_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cost_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cost_num);
    }
    v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, *cost_num);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, ",");
    std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator++(&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32),
    "]CHOOSE[");
  __for_range_0 = dice_side_map;
  __for_begin._M_node = std::map<proto::GCGDiceSideType,unsigned int>::begin(dice_side_map)._M_node;
  __for_end._M_node = std::map<proto::GCGDiceSideType,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::_Self *)&__for_end) )
  {
    v12 = (std::pair<const proto::GCGDiceSideType,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> > *const)&__for_begin);
    v13 = v12;
    if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v12, 8LL);
    }
    __in = *v13;
    side_type = std::get<0ul,proto::GCGDiceSideType const,unsigned int>(&__in);
    dice_num = std::get<1ul,proto::GCGDiceSideType const,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)side_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)side_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)side_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(side_type);
    }
    v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32),
            *side_type);
    v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, ":");
    if ( *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dice_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dice_num);
    }
    v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, *dice_num);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, ",");
    std::_Rb_tree_const_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> > *const)&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32),
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
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32));
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 181: range 000000000DED858A-000000000DED9CE0
bool __cdecl GCGUtils::isDiceCostValid(
        std::map<data::GCGCostType,unsigned int> *p_need_cost_map,
        std::map<proto::GCGDiceSideType,unsigned int> *p_dice_side_map)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool result; // al
  std::map<data::GCGCostType,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  unsigned __int64 v9; // rax
  std::tuple_element<1,std::pair<const data::GCGCostType,unsigned int> >::type *v10; // rax
  std::tuple_element<1,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v15; // rax
  unsigned int *v16; // rdx
  unsigned int v17; // r14d
  std::map<data::GCGCostType,unsigned int>::mapped_type *v18; // rax
  unsigned int *v19; // rdx
  common::milog::MiLogStream *v20; // r14
  std::map<data::GCGCostType,unsigned int>::mapped_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v24; // rax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v25; // rax
  int *v26; // rdx
  int v27; // r14d
  unsigned __int64 v28; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::pointer v29; // rdx
  proto::GCGDiceSideType *p_second; // rax
  common::milog::MiLogStream *v31; // rcx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v32; // rax
  int *v33; // rdx
  int v34; // r14d
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v35; // rax
  _DWORD *v36; // rdx
  std::tuple_element<1,std::pair<const data::GCGCostType,unsigned int> >::type v37; // ecx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v44; // rax
  std::tuple_element<1,std::pair<const data::GCGCostType,unsigned int> >::type *v45; // rdx
  std::tuple_element<1,std::pair<const data::GCGCostType,unsigned int> >::type v46; // ecx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v47; // rax
  int *v48; // rdx
  int v49; // ecx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v50; // rax
  _DWORD *v51; // rdx
  unsigned __int64 v52; // rax
  int v53; // esi
  unsigned __int64 v54; // rax
  int v55; // esi
  std::map<data::GCGCostType,unsigned int>::mapped_type *v56; // rax
  _DWORD *v57; // rdx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v58; // rax
  int *v59; // rdx
  int v60; // r14d
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v61; // rax
  _DWORD *v62; // rdx
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v63; // rax
  _DWORD *v64; // rdx
  int v65; // r14d
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v66; // rax
  _DWORD *v67; // rdx
  int v68; // r14d
  unsigned __int64 v69; // rax
  std::map<proto::GCGDiceSideType,unsigned int>::mapped_type *v70; // rax
  _DWORD *v71; // rdx
  unsigned __int64 v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rdx
  std::tuple_element<1,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *v76; // rax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v77; // rax
  _DWORD *v78; // rdx
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rbx
  std::map<data::GCGCostType,unsigned int>::mapped_type *v82; // rax
  bool is_check_success; // [rsp+13h] [rbp-1ADh]
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+14h] [rbp-1ACh] BYREF
  std::map<data::GCGCostType,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-1A8h] BYREF
  std::map<data::GCGCostType,unsigned int>::iterator __for_end_0; // [rsp+20h] [rbp-1A0h] BYREF
  std::map<data::GCGCostType,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  std::map<data::GCGCostType,unsigned int> *__for_range; // [rsp+30h] [rbp-190h]
  std::map<proto::GCGDiceSideType,unsigned int> *__for_range_0; // [rsp+38h] [rbp-188h]
  std::map<data::GCGCostType,unsigned int> *__for_range_1; // [rsp+40h] [rbp-180h]
  const std::map<data::GCGCostType,proto::GCGDiceSideType> *__for_range_2; // [rsp+48h] [rbp-178h]
  const std::pair<const data::GCGCostType,proto::GCGDiceSideType> *v93; // [rsp+50h] [rbp-170h]
  std::tuple_element<0,const std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::type *_; // [rsp+58h] [rbp-168h]
  std::tuple_element<1,const std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::type *side_type_0; // [rsp+60h] [rbp-160h]
  std::map<proto::GCGDiceSideType,unsigned int> *__for_range_3; // [rsp+68h] [rbp-158h]
  std::pair<const proto::GCGDiceSideType,unsigned int> *v97; // [rsp+70h] [rbp-150h]
  std::tuple_element<0,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *side_type_1; // [rsp+78h] [rbp-148h]
  std::tuple_element<1,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *count_0; // [rsp+80h] [rbp-140h]
  std::pair<const data::GCGCostType,unsigned int> *v100; // [rsp+88h] [rbp-138h]
  std::tuple_element<0,std::pair<const data::GCGCostType,unsigned int> >::type *cost_type_0; // [rsp+90h] [rbp-130h]
  std::tuple_element<1,std::pair<const data::GCGCostType,unsigned int> >::type *cost_count_0; // [rsp+98h] [rbp-128h]
  std::pair<const proto::GCGDiceSideType,unsigned int> *v103; // [rsp+A0h] [rbp-120h]
  std::tuple_element<0,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *side_type; // [rsp+A8h] [rbp-118h]
  std::tuple_element<1,std::pair<const proto::GCGDiceSideType,unsigned int> >::type *count; // [rsp+B0h] [rbp-110h]
  std::pair<const data::GCGCostType,unsigned int> *__in; // [rsp+B8h] [rbp-108h]
  std::tuple_element<0,std::pair<const data::GCGCostType,unsigned int> >::type *cost_type; // [rsp+C0h] [rbp-100h]
  std::tuple_element<1,std::pair<const data::GCGCostType,unsigned int> >::type *cost_count; // [rsp+C8h] [rbp-F8h]
  common::milog::MiLogStream v109; // [rsp+D0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v110; // [rsp+F0h] [rbp-D0h] BYREF
  char v111[176]; // [rsp+110h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v111;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 19 need_cost_count:215 48 4 14 dice_count:220 64 4 13 need_same:279 80 4 14 last_count:30"
                        "8 96 8 8 iter:246";
  *(_QWORD *)(v2 + 16) = GCGUtils::isDiceCostValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -202116352;
  __x = GCG_COST_ENERGY;
  std::map<data::GCGCostType,unsigned int>::erase(p_need_cost_map, &__x);
  if ( std::map<data::GCGCostType,unsigned int>::empty(p_need_cost_map)
    && std::map<proto::GCGDiceSideType,unsigned int>::empty(p_dice_side_map) )
  {
    result = 1;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'GCGUtils::isDiceCostValid(std::map<data::GCGCostType,unsigned int>,std::map<proto::GCGDiceSideType,unsigned int>)::element_mapping_map
      && __cxa_guard_acquire(&`guard variable for'GCGUtils::isDiceCostValid(std::map<data::GCGCostType,unsigned int>,std::map<proto::GCGDiceSideType,unsigned int>)::element_mapping_map) )
    {
      GCGUtils::getElementCoverMap<data::GCGCostType,proto::GCGDiceSideType>((std::map<data::GCGCostType,proto::GCGDiceSideType> *)&GCGUtils::isDiceCostValid(std::map<data::GCGCostType,unsigned int>,std::map<proto::GCGDiceSideType,unsigned int>)::element_mapping_map);
      __cxa_guard_release(&`guard variable for'GCGUtils::isDiceCostValid(std::map<data::GCGCostType,unsigned int>,std::map<proto::GCGDiceSideType,unsigned int>)::element_mapping_map);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<data::GCGCostType,proto::GCGDiceSideType>::~map,
        (void *)&GCGUtils::isDiceCostValid(std::map<data::GCGCostType,unsigned int>,std::map<proto::GCGDiceSideType,unsigned int>)::element_mapping_map,
        &_dso_handle);
    }
    __for_end._M_node = std::map<data::GCGCostType,unsigned int>::end(p_need_cost_map)._M_node;
    __x = GCG_COST_INVALID;
    *(std::map<data::GCGCostType,unsigned int>::iterator *)(v2 + 96) = std::map<data::GCGCostType,unsigned int>::find(
                                                                         p_need_cost_map,
                                                                         &__x);
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<const data::GCGCostType,unsigned int> >::_Self *)(v2 + 96),
           &__for_end) )
    {
      common::milog::MiLogStream::create(
        &v110,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_utils.cpp",
        "isDiceCostValid",
        198);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v110,
        (const char (*)[35])"need_cost_map has GCG_COST_INVALID");
      common::milog::MiLogStream::~MiLogStream(&v110);
      result = 0;
    }
    else
    {
      __for_end._M_node = std::map<proto::GCGDiceSideType,unsigned int>::end(p_dice_side_map)._M_node;
      __x = GCG_COST_INVALID;
      *(std::map<proto::GCGDiceSideType,unsigned int>::iterator *)(v2 + 96) = std::map<proto::GCGDiceSideType,unsigned int>::find(
                                                                                p_dice_side_map,
                                                                                (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)&__x);
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::_Self *)(v2 + 96),
             (const std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::_Self *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          &v110,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/common/gcg_utils.cpp",
          "isDiceCostValid",
          203);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          &v110,
          (const char (*)[40])"dice_side_map has GCG_DICE_SIDE_INVALID");
        common::milog::MiLogStream::~MiLogStream(&v110);
        result = 0;
      }
      else
      {
        __x = GCG_COST_DICE_SAME;
        v7 = std::map<data::GCGCostType,unsigned int>::operator[](p_need_cost_map, &__x);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        if ( *v8 == 1 )
        {
          __x = GCG_COST_DICE_SAME;
          std::map<data::GCGCostType,unsigned int>::erase(p_need_cost_map, &__x);
          __x = GCG_COST_DICE_VOID;
          v9 = (unsigned __int64)std::map<data::GCGCostType,unsigned int>::operator[](p_need_cost_map, &__x);
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
            v9 = __asan_report_load4(v9);
          ++*(_DWORD *)v9;
        }
        *(_DWORD *)(v2 + 32) = 0;
        __for_range = p_need_cost_map;
        *(std::map<data::GCGCostType,unsigned int>::iterator *)(v2 + 96) = std::map<data::GCGCostType,unsigned int>::begin(p_need_cost_map);
        __for_end._M_node = std::map<data::GCGCostType,unsigned int>::end(__for_range)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<const data::GCGCostType,unsigned int> >::_Self *)(v2 + 96),
                  &__for_end) )
        {
          __in = std::_Rb_tree_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<const data::GCGCostType,unsigned int> > *const)(v2 + 96));
          cost_type = std::get<0ul,data::GCGCostType const,unsigned int>(__in);
          v10 = std::get<1ul,data::GCGCostType const,unsigned int>(__in);
          cost_count = v10;
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v10);
          }
          *(_DWORD *)(v2 + 32) += *cost_count;
          std::_Rb_tree_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<const data::GCGCostType,unsigned int> > *const)(v2 + 96));
        }
        *(_DWORD *)(v2 + 48) = 0;
        __for_range_0 = p_dice_side_map;
        *(std::map<proto::GCGDiceSideType,unsigned int>::iterator *)(v2 + 96) = std::map<proto::GCGDiceSideType,unsigned int>::begin(p_dice_side_map);
        __for_end._M_node = std::map<proto::GCGDiceSideType,unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::_Self *)(v2 + 96),
                  (const std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::_Self *)&__for_end) )
        {
          v103 = std::_Rb_tree_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> > *const)(v2 + 96));
          side_type = std::get<0ul,proto::GCGDiceSideType const,unsigned int>(v103);
          v11 = std::get<1ul,proto::GCGDiceSideType const,unsigned int>(v103);
          count = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          *(_DWORD *)(v2 + 48) += *count;
          std::_Rb_tree_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> > *const)(v2 + 96));
        }
        if ( *(_DWORD *)(v2 + 32) == *(_DWORD *)(v2 + 48) )
        {
          *(_DWORD *)(v2 + 80) = 8;
          v15 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                  p_dice_side_map,
                  (std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 80));
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          v17 = *v16;
          __x = GCG_COST_DICE_PAIMON;
          v18 = std::map<data::GCGCostType,unsigned int>::operator[](p_need_cost_map, &__x);
          v19 = v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          if ( v17 >= *v19 )
          {
            __x = GCG_COST_DICE_PAIMON;
            v25 = std::map<data::GCGCostType,unsigned int>::operator[](p_need_cost_map, &__x);
            v26 = (int *)v25;
            if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v25);
            }
            v27 = *v26;
            *(_DWORD *)(v2 + 80) = 8;
            v28 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                      p_dice_side_map,
                                      (std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 80));
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0
              && (char)((v28 & 7) + 3) >= *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            {
              v28 = __asan_report_load4(v28);
            }
            *(_DWORD *)v28 -= v27;
            __for_range_1 = p_need_cost_map;
            __for_begin._M_node = std::map<data::GCGCostType,unsigned int>::begin(p_need_cost_map)._M_node;
            __for_end_0._M_node = std::map<data::GCGCostType,unsigned int>::end(__for_range_1)._M_node;
            while ( std::operator!=(&__for_begin, &__for_end_0) )
            {
              v100 = std::_Rb_tree_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator*(&__for_begin);
              cost_type_0 = std::get<0ul,data::GCGCostType const,unsigned int>(v100);
              cost_count_0 = std::get<1ul,data::GCGCostType const,unsigned int>(v100);
              *(_DWORD *)(v2 + 64) = 0;
              *(std::map<data::GCGCostType,proto::GCGDiceSideType>::const_iterator *)(v2 + 96) = std::map<data::GCGCostType,proto::GCGDiceSideType>::find(
                                                                                                   &GCGUtils::isDiceCostValid(std::map<data::GCGCostType,unsigned int>,std::map<proto::GCGDiceSideType,unsigned int>)::element_mapping_map,
                                                                                                   cost_type_0);
              __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const data::GCGCostType,unsigned int> >::_Base_ptr)std::map<data::GCGCostType,proto::GCGDiceSideType>::end(&GCGUtils::isDiceCostValid(std::map<data::GCGCostType,unsigned int>,std::map<proto::GCGDiceSideType,unsigned int>)::element_mapping_map)._M_node;
              if ( !std::operator==(
                      (const std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::_Self *)(v2 + 96),
                      (const std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::_Self *)&__for_end) )
              {
                v29 = std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,proto::GCGDiceSideType>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> > *const)(v2 + 96));
                p_second = &v29->second;
                if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(p_second);
                }
                *(_DWORD *)(v2 + 64) = v29->second;
                if ( !*(_DWORD *)(v2 + 64) )
                {
                  common::milog::MiLogStream::create(
                    &v109,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/card_game/common/gcg_utils.cpp",
                    "isDiceCostValid",
                    255);
                  v31 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                          &v109,
                          (const char (*)[18])"error cost type. ");
                  if ( *(_BYTE *)(((unsigned __int64)cost_type_0 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)cost_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_type_0 >> 3)
                                                                                  + 0x7FFF8000) )
                  {
                    __asan_report_load4(cost_type_0);
                  }
                  __x = *cost_type_0;
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v31,
                    (const unsigned int *)&__x);
                  common::milog::MiLogStream::~MiLogStream(&v109);
                  result = 0;
                  goto LABEL_120;
                }
                *(_DWORD *)(v2 + 80) = 8;
                v32 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                        p_dice_side_map,
                        (std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 80));
                v33 = (int *)v32;
                if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v32);
                }
                v34 = *v33;
                v35 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                        p_dice_side_map,
                        (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 64));
                v36 = v35;
                if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v35);
                }
                v37 = v34 + *v36;
                if ( *(_BYTE *)(((unsigned __int64)cost_count_0 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)cost_count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_count_0 >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4(cost_count_0);
                }
                if ( v37 < *cost_count_0 )
                {
                  common::milog::MiLogStream::create(
                    &v110,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_game/common/gcg_utils.cpp",
                    "isDiceCostValid",
                    261);
                  v38 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                          &v110,
                          (const char (*)[34])"dice side not enough. dice side: ");
                  v39 = common::milog::MiLogStream::operator<<<proto::GCGDiceSideType,(proto::GCGDiceSideType*)0>(
                          v38,
                          (const proto::GCGDiceSideType *)(v2 + 64));
                  v40 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v39,
                          (const char (*)[14])" side count: ");
                  v41 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                          p_dice_side_map,
                          (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 64));
                  v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, v41);
                  v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v42,
                          (const char (*)[14])" cost count: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, cost_count_0);
                  common::milog::MiLogStream::~MiLogStream(&v110);
                  result = 0;
                  goto LABEL_120;
                }
                v44 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                        p_dice_side_map,
                        (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 64));
                v45 = v44;
                if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v44);
                }
                v46 = *v45;
                if ( *(_BYTE *)(((unsigned __int64)cost_count_0 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)cost_count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_count_0 >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4(cost_count_0);
                }
                if ( v46 >= *cost_count_0 )
                {
                  v54 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                            p_dice_side_map,
                                            (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 64));
                  if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) != 0
                    && (char)((v54 & 7) + 3) >= *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
                  {
                    v54 = __asan_report_load4(v54);
                  }
                  v55 = *(_DWORD *)v54;
                  if ( *(_BYTE *)(((unsigned __int64)cost_count_0 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)cost_count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_count_0 >> 3)
                                                                                   + 0x7FFF8000) )
                  {
                    v54 = __asan_report_load4(cost_count_0);
                  }
                  *(_DWORD *)v54 = v55 - *cost_count_0;
                }
                else
                {
                  v47 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                          p_dice_side_map,
                          (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 64));
                  v48 = (int *)v47;
                  if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v47);
                  }
                  v49 = *v48;
                  if ( *(_BYTE *)(((unsigned __int64)cost_count_0 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)cost_count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_count_0 >> 3)
                                                                                   + 0x7FFF8000) )
                  {
                    __asan_report_load4(cost_count_0);
                  }
                  *cost_count_0 -= v49;
                  v50 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                          p_dice_side_map,
                          (const std::map<proto::GCGDiceSideType,unsigned int>::key_type *)(v2 + 64));
                  v51 = v50;
                  if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(v50);
                  }
                  *v51 = 0;
                  __x = 8;
                  v52 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                            p_dice_side_map,
                                            (std::map<proto::GCGDiceSideType,unsigned int>::key_type *)&__x);
                  if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) != 0
                    && (char)((v52 & 7) + 3) >= *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
                  {
                    v52 = __asan_report_load4(v52);
                  }
                  v53 = *(_DWORD *)v52;
                  if ( *(_BYTE *)(((unsigned __int64)cost_count_0 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)cost_count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_count_0 >> 3)
                                                                                   + 0x7FFF8000) )
                  {
                    v52 = __asan_report_load4(cost_count_0);
                  }
                  *(_DWORD *)v52 = v53 - *cost_count_0;
                }
              }
              std::_Rb_tree_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator++(&__for_begin);
            }
            __x = GCG_COST_DICE_SAME;
            v56 = std::map<data::GCGCostType,unsigned int>::operator[](p_need_cost_map, &__x);
            v57 = v56;
            if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v56);
            }
            *(_DWORD *)(v2 + 64) = *v57;
            is_check_success = 0;
            __for_range_2 = &GCGUtils::isDiceCostValid(std::map<data::GCGCostType,unsigned int>,std::map<proto::GCGDiceSideType,unsigned int>)::element_mapping_map;
            *(std::map<data::GCGCostType,proto::GCGDiceSideType>::const_iterator *)(v2 + 96) = std::map<data::GCGCostType,proto::GCGDiceSideType>::begin(&GCGUtils::isDiceCostValid(std::map<data::GCGCostType,unsigned int>,std::map<proto::GCGDiceSideType,unsigned int>)::element_mapping_map);
            __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const data::GCGCostType,unsigned int> >::_Base_ptr)std::map<data::GCGCostType,proto::GCGDiceSideType>::end(__for_range_2)._M_node;
            while ( std::operator!=(
                      (const std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::_Self *)(v2 + 96),
                      (const std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::_Self *)&__for_end) )
            {
              v93 = std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,proto::GCGDiceSideType>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> > *const)(v2 + 96));
              _ = std::get<0ul,data::GCGCostType const,proto::GCGDiceSideType>(v93);
              side_type_0 = (std::tuple_element<1,const std::pair<const data::GCGCostType,proto::GCGDiceSideType> >::type *)std::get<1ul,data::GCGCostType const,proto::GCGDiceSideType>(v93);
              __x = 8;
              v58 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                      p_dice_side_map,
                      (std::map<proto::GCGDiceSideType,unsigned int>::key_type *)&__x);
              v59 = (int *)v58;
              if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v58 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v58);
              }
              v60 = *v59;
              v61 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](p_dice_side_map, side_type_0);
              v62 = v61;
              if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v61);
              }
              if ( (unsigned int)(v60 + *v62) >= *(_DWORD *)(v2 + 64) )
              {
                v63 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](p_dice_side_map, side_type_0);
                v64 = v63;
                if ( *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v63 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v63);
                }
                if ( *v64 >= *(_DWORD *)(v2 + 64) )
                {
                  v72 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                            p_dice_side_map,
                                            side_type_0);
                  if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) != 0
                    && (char)((v72 & 7) + 3) >= *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
                  {
                    v72 = __asan_report_load4(v72);
                  }
                  *(_DWORD *)v72 -= *(_DWORD *)(v2 + 64);
                }
                else
                {
                  v65 = *(_DWORD *)(v2 + 64);
                  v66 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](p_dice_side_map, side_type_0);
                  v67 = v66;
                  if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v66 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v66);
                  }
                  v68 = v65 - *v67;
                  __x = 8;
                  v69 = (unsigned __int64)std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                                            p_dice_side_map,
                                            (std::map<proto::GCGDiceSideType,unsigned int>::key_type *)&__x);
                  if ( *(_BYTE *)((v69 >> 3) + 0x7FFF8000) != 0
                    && (char)((v69 & 7) + 3) >= *(_BYTE *)((v69 >> 3) + 0x7FFF8000) )
                  {
                    v69 = __asan_report_load4(v69);
                  }
                  *(_DWORD *)v69 -= v68;
                  v70 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](p_dice_side_map, side_type_0);
                  v71 = v70;
                  if ( *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v70 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(v70);
                  }
                  *v71 = 0;
                }
                is_check_success = 1;
                break;
              }
              std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,proto::GCGDiceSideType>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,proto::GCGDiceSideType> > *const)(v2 + 96));
            }
            if ( !is_check_success )
            {
              common::milog::MiLogStream::create(
                &v110,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/common/gcg_utils.cpp",
                "isDiceCostValid",
                303);
              v73 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v110,
                      (const char (*)[43])"check same and diff dice fail. need_same: ");
              v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v73,
                      (const unsigned int *)(v2 + 64));
              v75 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v74, (const char (*)[8])" dice: ");
              common::milog::MiLogStream::operator<<<proto::GCGDiceSideType,unsigned int>(v75, p_dice_side_map);
              common::milog::MiLogStream::~MiLogStream(&v110);
              result = 0;
            }
            else
            {
              *(_DWORD *)(v2 + 80) = 0;
              __for_range_3 = p_dice_side_map;
              *(std::map<proto::GCGDiceSideType,unsigned int>::iterator *)(v2 + 96) = std::map<proto::GCGDiceSideType,unsigned int>::begin(p_dice_side_map);
              __for_end._M_node = std::map<proto::GCGDiceSideType,unsigned int>::end(__for_range_3)._M_node;
              while ( std::operator!=(
                        (const std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::_Self *)(v2 + 96),
                        (const std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> >::_Self *)&__for_end) )
              {
                v97 = std::_Rb_tree_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> > *const)(v2 + 96));
                side_type_1 = std::get<0ul,proto::GCGDiceSideType const,unsigned int>(v97);
                v76 = std::get<1ul,proto::GCGDiceSideType const,unsigned int>(v97);
                count_0 = v76;
                if ( *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v76 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v76);
                }
                *(_DWORD *)(v2 + 80) += *count_0;
                std::_Rb_tree_iterator<std::pair<proto::GCGDiceSideType const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<const proto::GCGDiceSideType,unsigned int> > *const)(v2 + 96));
              }
              __x = GCG_COST_DICE_VOID;
              v77 = std::map<data::GCGCostType,unsigned int>::operator[](p_need_cost_map, &__x);
              v78 = v77;
              if ( *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v77 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v77);
              }
              if ( *v78 == *(_DWORD *)(v2 + 80) )
              {
                result = 1;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/card_game/common/gcg_utils.cpp",
                  "isDiceCostValid",
                  315);
                v79 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        &v110,
                        (const char (*)[35])"void dice not enough. side count: ");
                v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v79,
                        (const unsigned int *)(v2 + 80));
                v81 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v80,
                        (const char (*)[14])" cost count: ");
                __x = GCG_COST_DICE_VOID;
                v82 = std::map<data::GCGCostType,unsigned int>::operator[](p_need_cost_map, &__x);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, v82);
                common::milog::MiLogStream::~MiLogStream(&v110);
                result = 0;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v110,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/common/gcg_utils.cpp",
              "isDiceCostValid",
              235);
            v20 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    &v110,
                    (const char (*)[53])"total need paimon count not equal dice count. need: ");
            *(_DWORD *)(v2 + 80) = 5;
            v21 = std::map<data::GCGCostType,unsigned int>::operator[](
                    p_need_cost_map,
                    (std::map<data::GCGCostType,unsigned int>::key_type *)(v2 + 80));
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, v21);
            v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" dice: ");
            __x = 8;
            v24 = std::map<proto::GCGDiceSideType,unsigned int>::operator[](
                    p_dice_side_map,
                    (std::map<proto::GCGDiceSideType,unsigned int>::key_type *)&__x);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, v24);
            common::milog::MiLogStream::~MiLogStream(&v110);
            result = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v110,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/common/gcg_utils.cpp",
            "isDiceCostValid",
            227);
          v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v110,
                  (const char (*)[51])"total need cost count not equal dice count. need: ");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 32));
          v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" dice: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v110);
          result = 0;
        }
      }
    }
  }
LABEL_120:
  if ( v111 == (char *)v2 )
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

// Line 323: range 000000000DED9CE2-000000000DED9D09
bool __cdecl GCGUtils::isEnergyCostValid(const GCGCard *card, uint32_t cost)
{
  return cost <= (unsigned int)GCGCard::getToken(card, GCG_TOKEN_ENERGY);
};

// Line 329: range 000000000DED9D0A-000000000DEDA6B4
__int64 __fastcall GCGUtils::placeNewCardLimitMatchingZone(
        GCGGameMode *game_mode,
        unsigned __int64 place_param,
        GCGAddCardRefreshOperator refresh_operator)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // rcx
  GCGDuel *Duel; // rcx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  GCGCardZone *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  uint32_t v23; // r15d
  uint32_t v24; // r14d
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  GCGZoneType ZoneType; // edi
  uint32_t v27; // r10d
  uint32_t v28; // ecx
  common::milog::MiLogStream *v29; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+34h] [rbp-ECh] BYREF
  data::GCGCardType card_type; // [rsp+38h] [rbp-E8h]
  int32_t ret; // [rsp+3Ch] [rbp-E4h]
  GCGField *field; // [rsp+40h] [rbp-E0h]
  GCGSkillPreviewContext *preview_context; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-D0h] BYREF
  char v38[176]; // [rsp+70h] [rbp-B0h] BYREF
  GCGAddCardRefreshOperator v39; // 0:r8.12

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 20 refresh_operator:328 64 16 12 zone_ptr:338 96 16 20 add_new_card_ptr:361";
  *(_QWORD *)(v3 + 16) = GCGUtils::placeNewCardLimitMatchingZone;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(GCGAddCardRefreshOperator *)(v3 + 32) = refresh_operator;
  if ( *(_BYTE *)((place_param >> 3) + 0x7FFF8000) != 0
    && (char)((place_param & 7) + 3) >= *(_BYTE *)((place_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(place_param);
  }
  if ( *(_DWORD *)place_param )
  {
    Config = GCGGameMode::getConfig(game_mode);
    GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
    if ( *(_BYTE *)((place_param >> 3) + 0x7FFF8000) != 0
      && (char)((place_param & 7) + 3) >= *(_BYTE *)((place_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(place_param);
    }
    card_type = GCGGameExcelConfigMgr::getCardType(GCGGameExcelConfigMgr, *(_DWORD *)place_param);
    Duel = GCGGameMode::getDuel(game_mode);
    if ( *(_BYTE *)(((place_param + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((place_param + 4) & 7) + 3) >= *(_BYTE *)(((place_param + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(place_param + 4);
    }
    field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(place_param + 4));
    if ( *(_BYTE *)(((place_param + 8) >> 3) + 0x7FFF8000) != 0
      && (char)(((place_param + 8) & 7) + 3) >= *(_BYTE *)(((place_param + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(place_param + 8);
    }
    GCGField::getZoneByCardType((GCGField *const)(v3 + 64), (GCGCardType)field, card_type);
    if ( std::operator==<GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_utils.cpp",
        "placeNewCardLimitMatchingZone",
        341);
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v37,
              (const char (*)[34])"getZoneByCardType fail. card id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)place_param);
      common::milog::MiLogStream::~MiLogStream(&v37);
      v7 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( GCGCardZone::getZoneType(v12) != GCG_ZONE_ASSIST
        && (v13 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
            GCGCardZone::getZoneType(v13) != GCG_ZONE_ONSTAGE)
        && (v14 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
            GCGCardZone::getZoneType(v14) != GCG_ZONE_SUMMON) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/common/gcg_utils.cpp",
          "placeNewCardLimitMatchingZone",
          347);
        v16 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v37,
                (const char (*)[51])"placeNewCardLimitMatchingZone not valid zone type:");
        v17 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = GCGCardZone::getZoneType(v17);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
        v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])",card_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)place_param);
        common::milog::MiLogStream::~MiLogStream(&v37);
        v7 = -1;
      }
      else
      {
        v20 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)((place_param >> 3) + 0x7FFF8000) != 0
          && (char)((place_param & 7) + 3) >= *(_BYTE *)((place_param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(place_param);
        }
        ret = GCGCardZone::checkCanAdd(v20, *(_DWORD *)place_param);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/common/gcg_utils.cpp",
            "placeNewCardLimitMatchingZone",
            353);
          v21 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v37,
                  (const char (*)[47])"placeNewCardLimitMatchingZone cannot add card:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)place_param);
          common::milog::MiLogStream::~MiLogStream(&v37);
          if ( ret == 1 && GCGGameMode::isDuringSnapshot(game_mode) )
          {
            preview_context = GCGGameMode::getSkillPreviewContext(game_mode);
            if ( *(_BYTE *)(((place_param + 20) >> 3) + 0x7FFF8000) != 0
              && (char)(((place_param + 20) & 7) + 3) >= *(_BYTE *)(((place_param + 20) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(place_param + 20);
            }
            v23 = *(_DWORD *)(place_param + 20);
            if ( *(_BYTE *)((place_param >> 3) + 0x7FFF8000) != 0
              && (char)((place_param & 7) + 3) >= *(_BYTE *)((place_param >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(place_param);
            }
            v24 = *(_DWORD *)place_param;
            v25 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            ZoneType = GCGCardZone::getZoneType(v25);
            if ( *(_BYTE *)(((place_param + 4) >> 3) + 0x7FFF8000) != 0
              && (char)(((place_param + 4) & 7) + 3) >= *(_BYTE *)(((place_param + 4) >> 3) + 0x7FFF8000) )
            {
              ZoneType = place_param + 4;
              __asan_report_load4(place_param + 4);
            }
            GCGSkillPreviewContext::recordPreviewAddCardForFull(
              preview_context,
              *(GCGControllerValue *)(place_param + 4),
              ZoneType,
              v24,
              0,
              0,
              v23);
          }
          v7 = -1;
        }
        else
        {
          v27 = (unsigned int)std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)(((place_param + 20) >> 3) + 0x7FFF8000) != 0
            && (char)(((place_param + 20) & 7) + 3) >= *(_BYTE *)(((place_param + 20) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(place_param + 20);
          }
          v39.add_show_token_num_limit = *(_DWORD *)(place_param + 20);
          if ( *(_BYTE *)(((place_param + 16) >> 3) + 0x7FFF8000) != 0
            && (char)(((place_param + 16) & 7) + 3) >= *(_BYTE *)(((place_param + 16) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(place_param + 16);
          }
          *(_QWORD *)&v39.refresh_operator_type = *(unsigned int *)(place_param + 16);
          if ( *(_BYTE *)(((place_param + 12) >> 3) + 0x7FFF8000) != 0
            && (char)(((place_param + 12) & 7) + 3) >= *(_BYTE *)(((place_param + 12) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(place_param + 12);
          }
          v28 = *(_DWORD *)(place_param + 12);
          if ( *(_BYTE *)((place_param >> 3) + 0x7FFF8000) != 0
            && (char)((place_param & 7) + 3) >= *(_BYTE *)((place_param >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(place_param);
          }
          GCGCardZone::addNewCardWithRefreshOperation(
            (GCGCardZone *const)(v3 + 96),
            v27,
            *(GCGReason *)place_param,
            v28,
            v39,
            *(_QWORD *)(v3 + 32));
          if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/common/gcg_utils.cpp",
              "placeNewCardLimitMatchingZone",
              364);
            v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v37,
                    (const char (*)[16])off_1BB5B160);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v29,
              (const unsigned int *)place_param);
            common::milog::MiLogStream::~MiLogStream(&v37);
            v7 = -1;
          }
          else
          {
            v7 = 0;
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
        }
      }
    }
    std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_utils.cpp",
      "placeNewCardLimitMatchingZone",
      332);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v37,
           (const char (*)[29])"card_id is zero. controller:");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(place_param + 4));
    common::milog::MiLogStream::~MiLogStream(&v37);
    v7 = -1;
  }
  result = v7;
  if ( v38 == (char *)v3 )
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

// Line 372: range 000000000DEDA6B6-000000000DEDAB74
__int64 __fastcall GCGUtils::destroyCardLimitMatchingZone(
        GCGGameMode *game_mode,
        uint32_t card_id,
        GCGControllerValue controller_id,
        uint32_t target_param,
        GCGReason reason)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // rax
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  GCGCardZone *v22; // rax
  common::milog::MiLogStream *v23; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+20h] [rbp-C0h] BYREF
  data::GCGCardType card_type; // [rsp+24h] [rbp-BCh]
  GCGField *field; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+50h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 11 card_id:371 48 4 17 controller_id:371 64 16 12 zone_ptr:381";
  *(_QWORD *)(v5 + 16) = GCGUtils::destroyCardLimitMatchingZone;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 32) = card_id;
  *(_DWORD *)(v5 + 48) = controller_id;
  if ( *(_DWORD *)(v5 + 32) )
  {
    Config = GCGGameMode::getConfig(game_mode);
    GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
    card_type = GCGGameExcelConfigMgr::getCardType(GCGGameExcelConfigMgr, *(_DWORD *)(v5 + 32));
    Duel = GCGGameMode::getDuel(game_mode);
    field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(v5 + 48));
    GCGField::getZoneByCardType((GCGField *const)(v5 + 64), (GCGCardType)field, card_type);
    if ( std::operator==<GCGCardZone>(0LL, (const std::shared_ptr<GCGCardZone> *)(v5 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_utils.cpp",
        "destroyCardLimitMatchingZone",
        384);
      v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v30,
              (const char (*)[34])"getZoneByCardType fail. card id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v30);
      v9 = -1;
    }
    else
    {
      v14 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( GCGCardZone::getZoneType(v14) != GCG_ZONE_ASSIST
        && (v15 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64)),
            GCGCardZone::getZoneType(v15) != GCG_ZONE_ONSTAGE)
        && (v16 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64)),
            GCGCardZone::getZoneType(v16) != GCG_ZONE_SUMMON) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/common/gcg_utils.cpp",
          "destroyCardLimitMatchingZone",
          390);
        v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v30,
                (const char (*)[50])"destroyCardLimitMatchingZone not valid zone type:");
        v19 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        val = GCGCardZone::getZoneType(v19);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])",card_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream(&v30);
        v9 = -1;
      }
      else
      {
        v22 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        if ( GCGCardZone::delCardById(v22, *(_DWORD *)(v5 + 32), reason, 1) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/common/gcg_utils.cpp",
            "destroyCardLimitMatchingZone",
            395);
          v23 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v30,
                  (const char (*)[20])"destroy card fail. ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v5 + 32));
          common::milog::MiLogStream::~MiLogStream(&v30);
          v9 = -1;
        }
        else
        {
          v9 = 0;
        }
      }
    }
    std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v5 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_utils.cpp",
      "destroyCardLimitMatchingZone",
      375);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v30,
           (const char (*)[29])"card_id is zero. controller:");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v8,
      (const proto::GCGControllerValue *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    v9 = -1;
  }
  result = v9;
  if ( v31 == (char *)v5 )
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

// Line 402: range 000000000DEDAB76-000000000DEDAFF7
__int64 __fastcall GCGUtils::placeNewCard(
        GCGGameMode *game_mode,
        uint32_t card_id,
        GCGControllerValue controller_id,
        uint32_t target_param,
        uint32_t reason,
        uint32_t parent_card_guid)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // rax
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v14; // rax
  GCGCardZone *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // eax
  bool v18; // r14
  common::milog::MiLogStream *v19; // rax
  __int64 result; // rax
  uint32_t card_type; // [rsp+24h] [rbp-CCh]
  signed int field; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<GCGCard> __a; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 4 11 card_id:401 48 4 17 controller_id:401 64 16 12 zone_ptr:411";
  *(_QWORD *)(v6 + 16) = GCGUtils::placeNewCard;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -202178560;
  *(_DWORD *)(v6 + 32) = card_id;
  *(_DWORD *)(v6 + 48) = controller_id;
  if ( *(_DWORD *)(v6 + 32) )
  {
    Config = GCGGameMode::getConfig(game_mode);
    GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
    card_type = GCGGameExcelConfigMgr::getCardType(GCGGameExcelConfigMgr, *(_DWORD *)(v6 + 32));
    Duel = GCGGameMode::getDuel(game_mode);
    field = (unsigned int)GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(v6 + 48));
    GCGField::getZoneByCardType((GCGField *const)(v6 + 64), (GCGCardType)field, card_type);
    if ( std::operator==<GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v6 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_utils.cpp",
        "placeNewCard",
        414);
      v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v27,
              (const char (*)[34])"getZoneByCardType fail. card id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v6 + 32));
      common::milog::MiLogStream::~MiLogStream(&v27);
      v10 = -1;
    }
    else
    {
      v15 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( GCGCardZone::checkCanAdd(v15, *(_DWORD *)(v6 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/common/gcg_utils.cpp",
          "placeNewCard",
          419);
        v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v27,
                (const char (*)[17])"cannot add card:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v6 + 32));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v10 = -1;
      }
      else
      {
        v17 = (unsigned int)std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
        GCGCardZone::addNewCard((GCGCardZone *const)&__a, v17, *(GCGReason *)(v6 + 32), reason, parent_card_guid);
        v18 = std::operator==<GCGCard>(0LL, &__a);
        std::shared_ptr<GCGCard>::~shared_ptr(&__a);
        if ( v18 )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/common/gcg_utils.cpp",
            "placeNewCard",
            424);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v27, (const char (*)[16])off_1BB5B160);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v6 + 32));
          common::milog::MiLogStream::~MiLogStream(&v27);
          v10 = -1;
        }
        else
        {
          v10 = 0;
        }
      }
    }
    std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v6 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_utils.cpp",
      "placeNewCard",
      405);
    v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v27,
           (const char (*)[29])"card_id is zero. controller:");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v9,
      (const proto::GCGControllerValue *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v10 = -1;
  }
  result = v10;
  if ( v28 == (char *)v6 )
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
  return result;
};

// Line 432: range 000000000DEDAFF8-000000000DEDB24D
bool __cdecl GCGUtils::isDamageElementMatch(
        const GCGCard *card,
        data::GCGEffectDamageElementType damage_element_type,
        GCGEffectElementType effect_damage_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  data::GCGEffectElementType *v9; // rax
  _DWORD *v10; // rdx
  unsigned int val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 24 effect_elem_type_opt:457";
  *(_QWORD *)(v3 + 16) = GCGUtils::isDamageElementMatch;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( damage_element_type )
  {
    switch ( damage_element_type )
    {
      case DAMAGE_ELEMENT_PHYSIC:
        result = effect_damage_type == GCG_ELEMENT_PHYSIC;
        break;
      case DAMAGE_ELEMENT_EXCEPT_PHYSIC:
        result = effect_damage_type != GCG_ELEMENT_PHYSIC;
        break;
      case DAMAGE_ELEMENT_SET_DAMAGE:
        result = (unsigned int)GCGCard::getToken(card, GCG_TOKEN_SET_DAMAGE_ELEMENT) == effect_damage_type;
        break;
      default:
        *(std::optional<data::GCGEffectElementType> *)(v3 + 32) = GCGUtils::elementCover<data::GCGEffectElementType,data::GCGEffectDamageElementType>(damage_element_type);
        if ( !std::optional<data::GCGEffectElementType>::has_value((const std::optional<data::GCGEffectElementType> *const)(v3 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/common/gcg_utils.cpp",
            "isDamageElementMatch",
            460);
          v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                 &v13,
                 (const char (*)[39])"tryUsePayCardCost damage_element_type:");
          val = damage_element_type;
          v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            v8,
            (const char (*)[33])" not find valid effect elem type");
          common::milog::MiLogStream::~MiLogStream(&v13);
          result = 0;
        }
        else
        {
          v9 = std::optional<data::GCGEffectElementType>::value((std::optional<data::GCGEffectElementType> *const)(v3 + 32));
          v10 = v9;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v9);
          }
          result = effect_damage_type == *v10;
        }
        break;
    }
  }
  else
  {
    result = 1;
  }
  if ( v14 == (char *)v3 )
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

// Line 469: range 000000000DEDB24E-000000000DEDBE61
__int64 __fastcall GCGUtils::isTargetValid(
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const std::vector<data::GCGChooseExcelConfig> *config_vec,
        const std::vector<unsigned int> *p_target_guid_vec)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::vector<data::GCGChooseExcelConfig>::size_type v8; // r14
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  GCGDuel *Duel; // rax
  std::vector<unsigned int>::const_reference v14; // rax
  _DWORD *v15; // rdx
  GCGCardMgr *CardMgr; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // r14d
  data::GCGCardType card_type; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  data::GCGTagType *v30; // rax
  data::GCGTagType *v31; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  data::GCGChooseTargetCamp *p_target_camp; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rcx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  __int64 result; // rax
  bool is_find; // [rsp+3Fh] [rbp-131h]
  unsigned int val; // [rsp+40h] [rbp-130h] BYREF
  data::GCGTagType tag; // [rsp+44h] [rbp-12Ch]
  std::vector<data::GCGTagType>::const_iterator __for_begin; // [rsp+48h] [rbp-128h] BYREF
  std::vector<data::GCGTagType>::const_iterator __for_end; // [rsp+50h] [rbp-120h] BYREF
  GCGField *field; // [rsp+58h] [rbp-118h]
  const data::GCGChooseExcelConfig *config; // [rsp+60h] [rbp-110h]
  const std::vector<data::GCGTagType> *__for_range; // [rsp+68h] [rbp-108h]
  const std::vector<data::GCGChooseTargetCond> *__for_range_0; // [rsp+70h] [rbp-100h]
  const data::GCGChooseTargetCond *cond; // [rsp+78h] [rbp-F8h]
  common::milog::MiLogStream v67; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v68; // [rsp+A0h] [rbp-D0h] BYREF
  char v69[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 13 card_guid:480 48 4 17 controller_id:468 64 8 5 i:477 96 16 12 card_ptr:481";
  *(_QWORD *)(v5 + 16) = GCGUtils::isTargetValid;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -202178560;
  *(_DWORD *)(v5 + 48) = controller_id;
  v8 = std::vector<data::GCGChooseExcelConfig>::size(config_vec);
  if ( v8 == std::vector<unsigned int>::size(p_target_guid_vec) )
  {
    Duel = GCGGameMode::getDuel(game_mode);
    field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(v5 + 48));
    for ( *(_QWORD *)(v5 + 64) = 0LL;
          std::vector<data::GCGChooseExcelConfig>::size(config_vec) > *(_QWORD *)(v5 + 64)
       && std::vector<unsigned int>::size(p_target_guid_vec) > *(_QWORD *)(v5 + 64);
          ++*(_QWORD *)(v5 + 64) )
    {
      config = std::vector<data::GCGChooseExcelConfig>::operator[](config_vec, *(_QWORD *)(v5 + 64));
      v14 = std::vector<unsigned int>::operator[](p_target_guid_vec, *(_QWORD *)(v5 + 64));
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      *(_DWORD *)(v5 + 32) = *v15;
      CardMgr = GCGGameMode::getCardMgr(game_mode);
      GCGCardMgr::findCard((GCGCardMgr *const)(v5 + 96), CardMgr, *(_DWORD *)(v5 + 32));
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v5 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/common/gcg_utils.cpp",
          "isTargetValid",
          484);
        v17 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v68,
                (const char (*)[30])"find card fail. param index: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v17,
                (const unsigned __int64 *)(v5 + 64));
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" card guid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream(&v68);
        v4 = 0;
        v20 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->card_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->card_type >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->card_type);
        }
        if ( config->card_type
          && (card_type = config->card_type,
              v22 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96)),
              card_type != GCGCard::getCardType(v22)) )
        {
          common::milog::MiLogStream::create(
            &v67,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/common/gcg_utils.cpp",
            "isTargetValid",
            489);
          v24 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v67,
                  (const char (*)[35])"card type not match. param index: ");
          v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v24,
                  (const unsigned __int64 *)(v5 + 64));
          v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v25,
                  (const char (*)[15])" config type: ");
          if ( *(_BYTE *)(((unsigned __int64)&config->card_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->card_type >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->card_type);
          }
          val = config->card_type;
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
          v28 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v27, (const char (*)[8])" card: ");
          v29 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          GCGCard::getDesc[abi:cxx11]((std::string *)&v68, v29);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)&v68);
          std::string::~string(&v68);
          common::milog::MiLogStream::~MiLogStream(&v67);
          v4 = 0;
          v20 = 0;
        }
        else
        {
          if ( !std::vector<data::GCGTagType>::size(&config->tag_list) )
            goto LABEL_36;
          is_find = 0;
          __for_range = &config->tag_list;
          __for_begin._M_current = std::vector<data::GCGTagType>::begin(&config->tag_list)._M_current;
          __for_end._M_current = std::vector<data::GCGTagType>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<data::GCGTagType const*,std::vector<data::GCGTagType>>(&__for_begin, &__for_end) )
          {
            v30 = (data::GCGTagType *)__gnu_cxx::__normal_iterator<data::GCGTagType const*,std::vector<data::GCGTagType>>::operator*(&__for_begin);
            v31 = v30;
            if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v30);
            }
            tag = *v31;
            v32 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            if ( GCGCard::isHasTag(v32, tag) )
            {
              is_find = 1;
              break;
            }
            __gnu_cxx::__normal_iterator<data::GCGTagType const*,std::vector<data::GCGTagType>>::operator++(&__for_begin);
          }
          if ( !is_find )
          {
            common::milog::MiLogStream::create(
              &v67,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/common/gcg_utils.cpp",
              "isTargetValid",
              506);
            v33 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v67,
                    (const char (*)[34])"card tag not match. param index: ");
            v34 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v33,
                    (const unsigned __int64 *)(v5 + 64));
            v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v34,
                    (const char (*)[13])" config id: ");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &config->id);
            v37 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v36, (const char (*)[8])" card: ");
            v38 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            GCGCard::getDesc[abi:cxx11]((std::string *)&v68, v38);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, (const std::string *)&v68);
            std::string::~string(&v68);
            common::milog::MiLogStream::~MiLogStream(&v67);
            v4 = 0;
            v20 = 0;
          }
          else
          {
LABEL_36:
            p_target_camp = &config->target_camp;
            v40 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            if ( !GCGUtils::isTargetCardCampValid(*(GCGControllerValue *)(v5 + 48), v40, p_target_camp) )
            {
              common::milog::MiLogStream::create(
                &v67,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/common/gcg_utils.cpp",
                "isTargetValid",
                512);
              v41 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      &v67,
                      (const char (*)[40])"check target camp fail. controller_id: ");
              v42 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                      v41,
                      (const proto::GCGControllerValue *)(v5 + 48));
              v43 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v42, (const char (*)[7])" card:");
              v44 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
              GCGCard::getDesc[abi:cxx11]((std::string *)&v68, v44);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, (const std::string *)&v68);
              std::string::~string(&v68);
              common::milog::MiLogStream::~MiLogStream(&v67);
              v4 = 0;
              v20 = 0;
            }
            else
            {
              if ( !std::vector<data::GCGChooseTargetCond>::empty(&config->cond_list) )
              {
                __for_range_0 = &config->cond_list;
                __for_begin._M_current = (const data::GCGTagType *)std::vector<data::GCGChooseTargetCond>::begin(&config->cond_list)._M_current;
                __for_end._M_current = (const data::GCGTagType *)std::vector<data::GCGChooseTargetCond>::end(__for_range_0)._M_current;
                while ( __gnu_cxx::operator!=<data::GCGChooseTargetCond const*,std::vector<data::GCGChooseTargetCond>>(
                          (const __gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *)&__for_begin,
                          (const __gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *)&__for_end) )
                {
                  cond = __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond const*,std::vector<data::GCGChooseTargetCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *const)&__for_begin);
                  v45 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                  if ( !GCGUtils::isTargetCardCondValid(p_target_guid_vec, v45, cond) )
                  {
                    common::milog::MiLogStream::create(
                      &v67,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/card_game/common/gcg_utils.cpp",
                      "isTargetValid",
                      521);
                    v46 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            &v67,
                            (const char (*)[33])"check cond fail. controller_id: ");
                    v47 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                            v46,
                            (const proto::GCGControllerValue *)(v5 + 48));
                    v48 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v47,
                            (const char (*)[13])" cond_type: ");
                    if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&cond->type);
                    }
                    val = cond->type;
                    v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &val);
                    v50 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                            v49,
                            (const char (*)[9])" value: ");
                    v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &cond->value);
                    v52 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v51,
                            (const char (*)[7])" card:");
                    v53 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                    GCGCard::getDesc[abi:cxx11]((std::string *)&v68, v53);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v52, (const std::string *)&v68);
                    std::string::~string(&v68);
                    common::milog::MiLogStream::~MiLogStream(&v67);
                    v4 = 0;
                    v20 = 0;
                    goto LABEL_47;
                  }
                  __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond const*,std::vector<data::GCGChooseTargetCond>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *const)&__for_begin);
                }
              }
              v20 = 1;
            }
          }
        }
      }
LABEL_47:
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 96));
      if ( v20 != 1 )
        goto LABEL_50;
    }
    v4 = 1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/common/gcg_utils.cpp",
      "isTargetValid",
      472);
    v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v68, (const char (*)[29])off_1BB5B5A0);
    __for_begin._M_current = (const data::GCGTagType *)std::vector<data::GCGChooseExcelConfig>::size(config_vec);
    v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v9,
            (const unsigned __int64 *)&__for_begin);
    v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" select: ");
    __for_end._M_current = (const data::GCGTagType *)std::vector<unsigned int>::size(p_target_guid_vec);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream(&v68);
    v4 = 0;
  }
LABEL_50:
  result = v4;
  if ( v69 == (char *)v5 )
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
  return result;
};

// Line 531: range 000000000DEDBE62-000000000DEDC2CC
std::shared_ptr<GCGSkill> *__fastcall GCGUtils::createSkill(
        std::shared_ptr<GCGSkill> *game_mode,
        GCGGameMode *skill_id,
        int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const GCGConfigMgr *Config; // rax
  common::milog::MiLogStream *v7; // rax
  const GCGConfigMgr *v8; // rax
  unsigned int *v9; // r9
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  GCGSkill *v15; // rax
  GCGSkill *v16; // rax
  const data::ConfigGCGSkill *v18; // [rsp+0h] [rbp-E0h]
  const std::string *v19; // [rsp+8h] [rbp-D8h]
  bool is_reaction_skill; // [rsp+27h] [rbp-B9h]
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+28h] [rbp-B8h]
  const data::GCGSkillExcelConfig *skill_excel_config_ptr; // [rsp+30h] [rbp-B0h]
  const data::ConfigGCGSkill *skill_json_config_ptr; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-A0h] BYREF
  char v25[128]; // [rsp+60h] [rbp-80h] BYREF

  HIDWORD(v19) = a3;
  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 skill_id:530 64 16 13 skill_ptr:552";
  *(_QWORD *)(v3 + 16) = GCGUtils::createSkill;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = HIDWORD(v19);
  Config = GCGGameMode::getConfig(skill_id);
  gcg_game_config_mgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
  skill_excel_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGSkillExcelConfig(
                             gcg_game_config_mgr,
                             *(_DWORD *)(v3 + 48));
  if ( skill_excel_config_ptr )
  {
    is_reaction_skill = data::GCGGameExcelConfigMgrBase::findGCGElementReactionExcelConfig(
                          gcg_game_config_mgr,
                          *(_DWORD *)(v3 + 48)) != 0LL;
    v8 = GCGGameMode::getConfig(skill_id);
    skill_json_config_ptr = GCGConfigMgr::findGCGSkillConfig(v8, &skill_excel_config_ptr->skill_json);
    if ( skill_json_config_ptr )
    {
      common::tools::perf::make_shared<GCGSkill,GCGGameMode &,unsigned int &,data::ConfigGCGSkill const&,std::string const&>(
        (GCGGameMode *)(v3 + 64),
        (unsigned int *)skill_id,
        (const data::ConfigGCGSkill *)(v3 + 48),
        &skill_json_config_ptr->name,
        (GCGGameMode *)&skill_excel_config_ptr->skill_json,
        v9,
        v18,
        v19);
      if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/common/gcg_utils.cpp",
          "createSkill",
          555);
        v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v24,
                (const char (*)[37])"skill_id create GCGSkill ptr failed:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::shared_ptr<GCGSkill>::shared_ptr(game_mode, 0LL);
      }
      else
      {
        v15 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        GCGSkill::initAllEffects(v15);
        v16 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        GCGSkill::setConfig(v16, skill_excel_config_ptr, is_reaction_skill);
        std::shared_ptr<GCGSkill>::shared_ptr(game_mode, (std::shared_ptr<GCGSkill> *)(v3 + 64));
      }
      std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/common/gcg_utils.cpp",
        "createSkill",
        548);
      v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v24, (const char (*)[10])"skill_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" json name:");
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v12,
              &skill_excel_config_ptr->skill_json);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" not find");
      common::milog::MiLogStream::~MiLogStream(&v24);
      std::shared_ptr<GCGSkill>::shared_ptr(game_mode, 0LL);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/common/gcg_utils.cpp",
      "createSkill",
      536);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v24,
           (const char (*)[32])"skill_id excel config not find:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
    std::shared_ptr<GCGSkill>::shared_ptr(game_mode, 0LL);
  }
  if ( v25 == (char *)v3 )
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
  return game_mode;
};

// Line 564: range 000000000DEDC474-000000000DEDC76C
bool __cdecl GCGUtils::checkSkillIntentionNeedBlock(
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGSkill *skill)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::unordered_set<unsigned int> *ConfigAIBlockSet; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  bool result; // al
  GCGUtils::checkSkillIntentionNeedBlock::<lambda(const GCGCard&)> v12; // [rsp-20h] [rbp-130h]
  bool is_need_block; // [rsp+27h] [rbp-E9h]
  GCGCardMgr *card_mgr; // [rsp+28h] [rbp-E8h]
  __int64 __f; // [rsp+30h] [rbp-E0h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-C0h] BYREF
  std::function<ForeachPolicy(const GCGCard&)> p_func; // [rsp+70h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+90h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 total_count:566 64 4 15 max_sum_num:590";
  *(_QWORD *)(v3 + 16) = GCGUtils::checkSkillIntentionNeedBlock;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  card_mgr = GCGGameMode::getCardMgr(game_mode);
  *(_DWORD *)(v3 + 48) = 0;
  is_need_block = 0;
  ConfigAIBlockSet = GCGSkill::getConfigAIBlockSet(skill);
  if ( !std::unordered_set<unsigned int>::empty(ConfigAIBlockSet) )
  {
    LODWORD(__f) = controller_id;
    v12.__total_count = (uint32_t *)(v3 + 48);
    v12.__skill = skill;
    *(_QWORD *)&v12.__controller_id = __f;
    std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGUtils::checkSkillIntentionNeedBlock(GCGGameMode &,proto::GCGControllerValue,GCGSkill const&)::{lambda(GCGCard const&)#1},void,void>(
      &p_func,
      v12);
    GCGCardMgr::foreachFieldStageCard(card_mgr, controller_id, &p_func);
    std::function<ForeachPolicy ()(GCGCard const&)>::~function(&p_func);
    *(_DWORD *)(v3 + 64) = GCGSkill::getMaxBlockCardSumNum(skill);
    if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 64) )
    {
      is_need_block = 1;
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/common/gcg_utils.cpp",
        "checkSkillIntentionNeedBlock",
        596);
      v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v17, (const char (*)[13])"total_count:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])", max_sum_num:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
      GCGSkill::getName[abi:cxx11]((std::string *)&p_func, skill);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&p_func);
      std::string::~string(&p_func);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
  }
  result = is_need_block;
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

// Line 575: range 000000000DEDC2CE-000000000DEDC473
ForeachPolicy __cdecl GCGUtils::checkSkillIntentionNeedBlock(GCGGameMode &,proto::GCGControllerValue,GCGSkill const&)::{lambda(GCGCard const&)#1}::operator()(
        const GCGUtils::checkSkillIntentionNeedBlock::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy result; // eax
  const std::unordered_set<unsigned int> *ConfigAIBlockSet; // rax
  unsigned __int64 total_count; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 card_id:581";
  *(_QWORD *)(v2 + 16) = GCGUtils::checkSkillIntentionNeedBlock(GCGGameMode &,proto::GCGControllerValue,GCGSkill const&)::{lambda(GCGCard const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( !GCGCard::isActivated(card) )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
    *(_DWORD *)(v2 + 32) = GCGCard::getId(card);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__skill >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__skill);
    ConfigAIBlockSet = GCGSkill::getConfigAIBlockSet(__closure->__skill);
    if ( std::unordered_set<unsigned int>::count(
           ConfigAIBlockSet,
           (const std::unordered_set<unsigned int>::key_type *)(v2 + 32)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__total_count >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__total_count);
      total_count = (unsigned __int64)__closure->__total_count;
      if ( *(_BYTE *)((total_count >> 3) + 0x7FFF8000) != 0
        && (char)((total_count & 7) + 3) >= *(_BYTE *)((total_count >> 3) + 0x7FFF8000) )
      {
        total_count = __asan_report_load4(__closure->__total_count);
      }
      ++*(_DWORD *)total_count;
    }
    result = FOREACH_CONTINUE;
  }
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

// Line 604: range 000000000DEDC85A-000000000DEDCB88
__int64 __fastcall GCGUtils::checkPlayCardIntentionNeedBlock(
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        uint32_t block_card_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  GCGCardMgr *card_mgr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF
  GCGUtils::checkPlayCardIntentionNeedBlock::<lambda(const GCGCard&)> v18; // 0:rsi.8,8:edx.4

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 17 is_need_block:612 64 4 17 block_card_id:603";
  *(_QWORD *)(v3 + 16) = GCGUtils::checkPlayCardIntentionNeedBlock;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = block_card_id;
  Config = GCGGameMode::getConfig(game_mode);
  GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
  if ( GCGGameExcelConfigMgr::findCardConfig(GCGGameExcelConfigMgr, *(_DWORD *)(v3 + 64)) )
  {
    card_mgr = GCGGameMode::getCardMgr(game_mode);
    *(_BYTE *)(v3 + 48) = 0;
    v18.__block_card_id = *(_DWORD *)(v3 + 64);
    v18.__is_need_block = (bool *)(v3 + 48);
    std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGUtils::checkPlayCardIntentionNeedBlock(GCGGameMode &,proto::GCGControllerValue,unsigned int)::{lambda(GCGCard const&)#1},void,void>(
      (std::function<ForeachPolicy(const GCGCard&)> *const)&v16,
      v18);
    GCGCardMgr::foreachFieldStageCard(card_mgr, controller_id, (std::function<ForeachPolicy(const GCGCard&)> *)&v16);
    std::function<ForeachPolicy ()(GCGCard const&)>::~function((std::function<ForeachPolicy(const GCGCard&)> *const)&v16);
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/common/gcg_utils.cpp",
      "checkPlayCardIntentionNeedBlock",
      626);
    v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v16, (const char (*)[15])"block_card_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v11, (const char (*)[17])", is_need_block:");
    common::milog::MiLogStream::operator<<(v12, *(_BYTE *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = *(unsigned __int8 *)(v3 + 48);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_utils.cpp",
      "checkPlayCardIntentionNeedBlock",
      608);
    v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v16,
           (const char (*)[49])"block_card_config_ptr is nullptr, block_card_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0LL;
  }
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
  return result;
};

// Line 613: range 000000000DEDC76E-000000000DEDC859
ForeachPolicy __cdecl GCGUtils::checkPlayCardIntentionNeedBlock(GCGGameMode &,proto::GCGControllerValue,unsigned int)::{lambda(GCGCard const&)#1}::operator()(
        const GCGUtils::checkPlayCardIntentionNeedBlock::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *card)
{
  uint32_t Id; // ecx
  bool *is_need_block; // rdx

  if ( !GCGCard::isActivated(card) )
    return 0;
  Id = GCGCard::getId(card);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__block_card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__block_card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__block_card_id);
  }
  if ( Id != __closure->__block_card_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  is_need_block = __closure->__is_need_block;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__is_need_block >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_need_block & 7) >= *(_BYTE *)(((unsigned __int64)__closure->__is_need_block >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_need_block);
  }
  *is_need_block = 1;
  return 1;
};

// Line 631: range 000000000DEDCC22-000000000DEDCF12
bool __cdecl GCGUtils::checkAICanUseSkill(
        const GCGSkill *skill,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool result; // al
  GCGCardZone *SummonZone; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r12
  GCGDuel *duel; // [rsp+20h] [rbp-E0h]
  GCGField *field; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+50h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 27 max_block_ai_summon_num:637 64 4 18 cur_summon_num:642";
  *(_QWORD *)(v3 + 16) = GCGUtils::checkAICanUseSkill;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( !GCGSkill::isActivelyUse(skill) )
  {
    result = 0;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = GCGSkill::getBlockAIMaxSummonNum(skill);
    if ( *(_DWORD *)(v3 + 48)
      && (duel = GCGGameMode::getDuel(game_mode),
          field = GCGDuel::getField(duel, controller_id),
          *(_DWORD *)(v3 + 64) = 0,
          SummonZone = GCGField::getSummonZone(field),
          std::function<ForeachPolicy ()(GCGCard &)>::function<GCGUtils::checkAICanUseSkill(GCGSkill const&,GCGGameMode &,proto::GCGControllerValue)::{lambda(GCGCard &)#1},void,void>(
            &p_func,
            (GCGUtils::checkAICanUseSkill::<lambda(GCGCard&)>)(v3 + 64)),
          GCGCardZone::foreachCard(SummonZone, &p_func),
          std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func),
          *(_DWORD *)(v3 + 64) >= *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/common/gcg_utils.cpp",
        "checkAICanUseSkill",
        654);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"cur_summon_num:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v9,
              (const char (*)[27])", max_block_ai_summon_num:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      GCGSkill::getName[abi:cxx11]((std::string *)&p_func, skill);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)&p_func);
      std::string::~string(&p_func);
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0;
    }
    else
    {
      result = 1;
    }
  }
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
  return result;
};

// Line 643: range 000000000DEDCB8A-000000000DEDCC20
ForeachPolicy __cdecl GCGUtils::checkAICanUseSkill(GCGSkill const&,GCGGameMode &,proto::GCGControllerValue)::{lambda(GCGCard &)#1}::operator()(
        const GCGUtils::checkAICanUseSkill::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  uint32_t *cur_summon_num; // rax

  if ( !GCGCard::isActivated(card) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  cur_summon_num = __closure->__cur_summon_num;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__cur_summon_num >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__cur_summon_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__cur_summon_num >> 3)
                                                                          + 0x7FFF8000) )
  {
    cur_summon_num = (uint32_t *)__asan_report_load4(__closure->__cur_summon_num);
  }
  ++*cur_summon_num;
  return 0;
};

// Line 663: range 000000000DEDCF14-000000000DEDCF42
bool __cdecl GCGUtils::isCardBlockAttack(const GCGCard *card)
{
  return GCGCard::isHasTag(card, GCG_TAG_FORBIDDEN_ATTACK);
};

// Line 672: range 000000000DEDD086-000000000DEDD225
bool __cdecl GCGUtils::isCanAttack(const GCGCard *card)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  const GCGModifyZone *ModifyZone; // r14
  std::function<ForeachPolicy(const GCGCard&)> p_func; // [rsp+20h] [rbp-90h] BYREF
  char v7[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 7 ret:673";
  *(_QWORD *)(v1 + 16) = GCGUtils::isCanAttack;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  *(_BYTE *)(v1 + 32) = 1;
  if ( !GCGCard::isActivated(card) )
  {
    result = 0;
  }
  else if ( !GCGCard::isAlive(card) )
  {
    result = 0;
  }
  else if ( GCGCard::getCardType(card) == GCG_CARD_CHARACTER )
  {
    ModifyZone = GCGCard::getModifyZone(card);
    std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGUtils::isCanAttack(GCGCard const&)::{lambda(GCGCard const&)#1},void,void>(
      &p_func,
      (GCGUtils::isCanAttack::<lambda(const GCGCard&)>)(v1 + 32));
    GCGCardZone::foreachCard(ModifyZone, &p_func);
    std::function<ForeachPolicy ()(GCGCard const&)>::~function(&p_func);
    result = *(_BYTE *)(v1 + 32);
  }
  else
  {
    result = 0;
  }
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

// Line 687: range 000000000DEDCF44-000000000DEDD085
ForeachPolicy __cdecl GCGUtils::isCanAttack(GCGCard const&)::{lambda(GCGCard const&)#1}::operator()(
        const GCGUtils::isCanAttack::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *card)
{
  common::milog::MiLogStream *v2; // rbx
  bool *ret; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  if ( !GCGUtils::isCardBlockAttack(card) )
    return 0;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/common/gcg_utils.cpp",
    "operator()",
    691);
  v2 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v5, (const char (*)[21])"forbidden attack by ");
  GCGCard::getDesc[abi:cxx11](&val, card);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  ret = __closure->__ret;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__ret & 7) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__ret);
  }
  *ret = 0;
  return 1;
};

// Line 701: range 000000000DEDD546-000000000DEDD936
int32_t __cdecl GCGUtils::getPlayCardValidTargetParamVec(GCGCard *card, std::vector<unsigned int> *result_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGDuel *Duel; // r14
  GCGControllerValue ControllerId; // eax
  GCGField *Field; // rax
  GCGCharacterZone *CharacterZone; // rax
  int32_t v9; // r14d
  std::vector<unsigned int>::size_type v10; // rdx
  common::milog::MiLogStream *v11; // r14
  int32_t result; // eax
  unsigned __int64 val; // [rsp+18h] [rbp-138h] BYREF
  GCGGameMode *game_mode; // [rsp+20h] [rbp-130h]
  const std::vector<data::GCGChooseExcelConfig> *choose_config_vec; // [rsp+28h] [rbp-128h]
  GCGUtils::getPlayCardValidTargetParamVec::<lambda(uint32_t)> __f; // [rsp+30h] [rbp-120h] BYREF
  char v17[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 controller_id:704 64 24 19 target_guid_vec:705 128 32 13 recursion:722";
  *(_QWORD *)(v2 + 16) = GCGUtils::getPlayCardValidTargetParamVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::vector<unsigned int>::clear(result_vec);
  if ( *(_BYTE *)(((unsigned __int64)&card->game_mode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&card->game_mode);
  game_mode = card->game_mode;
  *(_DWORD *)(v2 + 48) = GCGCard::getControllerId(card);
  Duel = GCGGameMode::getDuel(game_mode);
  ControllerId = GCGCard::getControllerId(card);
  Field = GCGDuel::getField(Duel, ControllerId);
  CharacterZone = GCGField::getCharacterZone(Field);
  GCGCardZone::getCardGuidVec((std::vector<unsigned int> *)(v2 + 64), CharacterZone);
  choose_config_vec = GCGCard::getChooseConfig(card);
  if ( std::vector<data::GCGChooseExcelConfig>::empty(choose_config_vec) )
  {
    v9 = 0;
  }
  else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 64)) )
  {
    v9 = -1;
  }
  else
  {
    v10 = std::vector<data::GCGChooseExcelConfig>::size(choose_config_vec);
    std::vector<unsigned int>::resize(result_vec, v10);
    if ( std::vector<unsigned int>::size(result_vec) <= 4 )
    {
      std::function<bool ()(unsigned int)>::function((std::function<bool(unsigned int)> *const)(v2 + 128));
      __f.__result_vec = result_vec;
      __f.__game_mode = game_mode;
      __f.__controller_id = (GCGControllerValue *)(v2 + 48);
      __f.__choose_config_vec = choose_config_vec;
      __f.__target_guid_vec = (const std::vector<unsigned int> *)(v2 + 64);
      __f.__recursion = (std::function<bool(unsigned int)> *)(v2 + 128);
      std::function<bool ()(unsigned int)>::operator=<GCGUtils::getPlayCardValidTargetParamVec(GCGCard &,std::vector<unsigned int> &)::{lambda(unsigned int)#1}>(
        (std::function<bool(unsigned int)> *const)(v2 + 128),
        &__f);
      if ( !std::function<bool ()(unsigned int)>::operator()(
              (const std::function<bool(unsigned int)> *const)(v2 + 128),
              0) )
      {
        std::vector<unsigned int>::clear(result_vec);
        v9 = -1;
      }
      else
      {
        v9 = 0;
      }
      std::function<bool ()(unsigned int)>::~function((std::function<bool(unsigned int)> *const)(v2 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_utils.cpp",
        "getPlayCardValidTargetParamVec",
        719);
      v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              (common::milog::MiLogStream *const)(v2 + 128),
              (const char (*)[24])"depth too deep. depth: ");
      val = std::vector<unsigned int>::size(result_vec);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      v9 = -1;
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  result = v9;
  if ( v17 == (char *)v2 )
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

// Line 723: range 000000000DEDD226-000000000DEDD545
bool __cdecl GCGUtils::getPlayCardValidTargetParamVec(GCGCard &,std::vector<unsigned int> &)::{lambda(unsigned int)#1}::operator()(
        const GCGUtils::getPlayCardValidTargetParamVec::<lambda(uint32_t)> *const __closure,
        uint32_t i)
{
  const std::vector<data::GCGChooseExcelConfig> *choose_config_vec; // rdi
  GCGControllerValue *controller_id; // rdx
  GCGControllerValue v4; // esi
  char isTargetValid; // bl
  unsigned int *v6; // rax
  int *v7; // rdx
  int v8; // ebx
  std::vector<unsigned int>::reference v9; // rax
  _DWORD *v10; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-38h]
  std::vector<unsigned int> p_target_guid_vec; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( i < std::vector<unsigned int>::size(__closure->__result_vec) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__target_guid_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__target_guid_vec);
    __for_range = __closure->__target_guid_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v7 = (int *)v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      v8 = *v7;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v9 = std::vector<unsigned int>::operator[](__closure->__result_vec, i);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v9);
      }
      *v10 = v8;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__recursion >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__recursion);
      if ( std::function<bool ()(unsigned int)>::operator()(__closure->__recursion, i + 1) )
        return 1;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    std::vector<unsigned int>::vector(&p_target_guid_vec, __closure->__result_vec);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__choose_config_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__choose_config_vec);
    choose_config_vec = __closure->__choose_config_vec;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) )
    {
      choose_config_vec = (const std::vector<data::GCGChooseExcelConfig> *)&__closure->__controller_id;
      __asan_report_load8(&__closure->__controller_id);
    }
    controller_id = __closure->__controller_id;
    if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      choose_config_vec = (const std::vector<data::GCGChooseExcelConfig> *)__closure->__controller_id;
      __asan_report_load4(choose_config_vec);
    }
    v4 = *controller_id;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__game_mode >> 3) + 0x7FFF8000) )
    {
      choose_config_vec = (const std::vector<data::GCGChooseExcelConfig> *)&__closure->__game_mode;
      __asan_report_load8(&__closure->__game_mode);
    }
    isTargetValid = GCGUtils::isTargetValid(__closure->__game_mode, v4, choose_config_vec, &p_target_guid_vec);
    std::vector<unsigned int>::~vector(&p_target_guid_vec);
  }
  return isTargetValid;
};

// Line 748: range 000000000DEDD938-000000000DEDDD64
__int64 __fastcall GCGUtils::isTargetCardCampValid(
        GCGControllerValue controller_id,
        const GCGCard *target_card,
        const data::GCGChooseTargetCamp *target_camp)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  common::milog::MiLogStream *v13; // rcx
  unsigned int v15; // [rsp+2Ch] [rbp-A4h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-A0h] BYREF
  std::string val; // [rsp+50h] [rbp-80h] BYREF
  char v18[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 controller_id:747";
  *(_QWORD *)(v3 + 16) = GCGUtils::isTargetCardCampValid;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)target_camp >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_camp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(target_camp);
  }
  if ( *target_camp )
  {
    if ( *target_camp == FRIENDLY )
    {
      if ( GCGCard::getControllerId(target_card) == *(_DWORD *)(v3 + 32) )
      {
        result = 1LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/common/gcg_utils.cpp",
          "isTargetCardCampValid",
          757);
        v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v16,
               (const char (*)[44])"controller id not FRIENDLY. controller_id: ");
        v7 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
               v6,
               (const proto::GCGControllerValue *)(v3 + 32));
        v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" card:");
        GCGCard::getDesc[abi:cxx11](&val, target_card);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v16);
        result = 0LL;
      }
    }
    else if ( *target_camp == ENEMY )
    {
      if ( GCGCard::getControllerId(target_card) == *(_DWORD *)(v3 + 32) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/common/gcg_utils.cpp",
          "isTargetCardCampValid",
          766);
        v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v16,
                (const char (*)[41])"controller id not ENEMY. controller_id: ");
        v11 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v10,
                (const proto::GCGControllerValue *)(v3 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" card:");
        GCGCard::getDesc[abi:cxx11](&val, target_card);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v16);
        result = 0LL;
      }
      else
      {
        result = 1LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_utils.cpp",
        "isTargetCardCampValid",
        772);
      v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[26])off_1BB5C180);
      if ( *(_BYTE *)(((unsigned __int64)target_camp >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)target_camp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_camp >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(target_camp);
      }
      v15 = *target_camp;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v15);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      result = 0LL;
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v18 == (char *)v3 )
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

// Line 780: range 000000000DEDDE5C-000000000DEDE7F0
bool __cdecl GCGUtils::isTargetCardCondValid(
        const std::vector<unsigned int> *target_guid_vec,
        const GCGCard *target_card,
        const data::GCGChooseTargetCond *cond)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r14
  GCGControllerValue ControllerId; // edx
  uint32_t value; // ebx
  bool HasCardById; // r12
  const GCGCardZone *ModifyZone; // rdi
  const GCGCardZone *p_value; // rdi
  const GCGModifyZone *v11; // rax
  const GCGModifyZone *v12; // rax
  std::vector<unsigned int>::size_type v13; // r12
  char v14; // al
  GCGCardMgr *CardMgr; // r12
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v16; // rax
  int *v17; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  GCGCharacterZone *CharacterZone; // r12
  GCGCharacterZone *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  bool result; // al
  uint32_t cur_alive_character_num; // [rsp+30h] [rbp-D0h]
  data::GCGTagType tag_type_1; // [rsp+34h] [rbp-CCh]
  signed int tag_type_0; // [rsp+38h] [rbp-C8h]
  signed int tag_type; // [rsp+3Ch] [rbp-C4h]
  GCGDuel *duel; // [rsp+40h] [rbp-C0h]
  GCGField *field; // [rsp+48h] [rbp-B8h]
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+50h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 19 character_count:829 48 4 12 tag_type:830 64 16 12 card_ptr:823";
  *(_QWORD *)(v3 + 16) = GCGUtils::isTargetCardCondValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&target_card->game_mode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&target_card->game_mode);
  duel = GCGGameMode::getDuel(target_card->game_mode);
  ControllerId = GCGCard::getControllerId(target_card);
  field = GCGDuel::getField(duel, ControllerId);
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  switch ( cond->type )
  {
    case CARD:
      if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->value);
      }
      value = cond->value;
      HasCardById = value == GCGCard::getId(target_card);
      break;
    case ONSTAGE:
      if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->value);
      }
      if ( cond->value == 1 )
        HasCardById = GCGCard::isOnStage(target_card);
      else
        HasCardById = !GCGCard::isOnStage(target_card);
      break;
    case HAS_MODIFY_STATE:
      ModifyZone = GCGCard::getModifyZone(target_card);
      if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
      {
        ModifyZone = (const GCGCardZone *)&cond->value;
        __asan_report_load4(&cond->value);
      }
      HasCardById = GCGCardZone::isHasCardById(ModifyZone, cond->value);
      break;
    case NOT_HAS_MODIFY_STATE:
      p_value = GCGCard::getModifyZone(target_card);
      if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
      {
        p_value = (const GCGCardZone *)&cond->value;
        __asan_report_load4(&cond->value);
      }
      HasCardById = !GCGCardZone::isHasCardById(p_value, cond->value);
      break;
    case HAS_MODIFY_STATE_WITH_TAG:
      if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->value);
      }
      tag_type = cond->value;
      v11 = GCGCard::getModifyZone(target_card);
      HasCardById = GCGCardZone::isHasCardByTag(v11, (GCGTagType)tag_type);
      break;
    case NOT_HAS_MODIFY_STATE_WITH_TAG:
      if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->value);
      }
      tag_type_0 = cond->value;
      v12 = GCGCard::getModifyZone(target_card);
      HasCardById = !GCGCardZone::isHasCardByTag(v12, (GCGTagType)tag_type_0);
      break;
    case SAME_WEAPON_TYPE_WITH:
      if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->value);
      }
      v13 = cond->value;
      if ( v13 >= std::vector<unsigned int>::size(target_guid_vec) )
        goto LABEL_35;
      if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->value);
      }
      if ( cond->value )
        v14 = 0;
      else
LABEL_35:
        v14 = 1;
      if ( v14 )
      {
        HasCardById = 0;
      }
      else
      {
        tag_type_1 = GCGCard::getWeaponTag(target_card);
        if ( *(_BYTE *)(((unsigned __int64)&target_card->game_mode >> 3) + 0x7FFF8000) )
          __asan_report_load8(&target_card->game_mode);
        CardMgr = GCGGameMode::getCardMgr(target_card->game_mode);
        if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&cond->value);
        }
        v16 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    target_guid_vec,
                                                                                                    cond->value - 1);
        v17 = (int *)v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        GCGCardMgr::findCard((GCGCardMgr *const)(v3 + 64), CardMgr, *v17);
        HasCardById = 0;
        if ( std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 64)) )
        {
          v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( GCGCard::isAlive(v18) )
          {
            v19 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            if ( GCGCard::isHasTag(v19, tag_type_1) )
              HasCardById = 1;
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 64));
      }
      break;
    case SAME_WEAPON_TYPE_CHAR_COUNT:
      *(_DWORD *)(v3 + 32) = 0;
      *(_DWORD *)(v3 + 48) = GCGCard::getWeaponTag(target_card);
      CharacterZone = GCGField::getCharacterZone(field);
      std::function<ForeachPolicy ()(GCGCard &)>::function<GCGUtils::isTargetCardCondValid(std::vector<unsigned int> const&,GCGCard const&,data::GCGChooseTargetCond const&)::{lambda(GCGCard &)#1},void,void>(
        &p_func,
        (GCGUtils::isTargetCardCondValid::<lambda(GCGCard&)>)__PAIR128__(v3 + 48, v3 + 32));
      GCGCharacterZone::foreachAliveCharacter(CharacterZone, &p_func);
      std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
      if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->value);
      }
      HasCardById = cond->value < *(_DWORD *)(v3 + 32);
      break;
    case ALIVE_CHAR_COUNT:
      v21 = GCGField::getCharacterZone(field);
      cur_alive_character_num = GCGCharacterZone::getAliveCharacterNum(v21);
      if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->value);
      }
      HasCardById = cur_alive_character_num >= cond->value;
      break;
    case IS_ALIVE_CHARACTER:
      if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->value);
      }
      if ( cond->value == 1 )
        HasCardById = GCGCard::isAlive(target_card);
      else
        HasCardById = !GCGCard::isAlive(target_card);
      break;
    default:
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_utils.cpp",
        "isTargetCardCondValid",
        853);
      v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[30])off_1BB5C260);
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      *(_DWORD *)(v3 + 48) = cond->type;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      HasCardById = 0;
      break;
  }
  result = HasCardById;
  if ( v32 == (char *)v3 )
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

// Line 831: range 000000000DEDDD66-000000000DEDDE5A
ForeachPolicy __cdecl GCGUtils::isTargetCardCondValid(std::vector<unsigned int> const&,GCGCard const&,data::GCGChooseTargetCond const&)::{lambda(GCGCard&)#1}::operator()(
        const GCGUtils::isTargetCardCondValid::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  data::GCGTagType *tag_type; // rdx
  uint32_t *character_count; // rax

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__tag_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__tag_type);
  tag_type = __closure->__tag_type;
  if ( *(_BYTE *)(((unsigned __int64)tag_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)tag_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__tag_type);
  }
  if ( GCGCard::isHasTag(card, *tag_type) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    character_count = __closure->__character_count;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__character_count >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__character_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__character_count >> 3)
                                                                             + 0x7FFF8000) )
    {
      character_count = (uint32_t *)__asan_report_load4(__closure->__character_count);
    }
    ++*character_count;
  }
  return 0;
};

// Line 860: range 000000000DEDE7F2-000000000DEDE91A
const std::set<data::GCGTagType> *__cdecl GCGUtils::getAllWeaponTagSet()
{
  std::less<data::GCGTagType> __comp; // [rsp+Eh] [rbp-42h] BYREF
  std::allocator<data::GCGTagType> __a; // [rsp+Fh] [rbp-41h] BYREF
  std::initializer_list<data::GCGTagType> __l; // [rsp+10h] [rbp-40h] BYREF
  int v4; // [rsp+20h] [rbp-30h]
  int v5; // [rsp+24h] [rbp-2Ch]

  if ( !(_BYTE)`guard variable for'GCGUtils::getAllWeaponTagSet(void)::weapon_tag_set
    && __cxa_guard_acquire(&`guard variable for'GCGUtils::getAllWeaponTagSet(void)::weapon_tag_set) )
  {
    __l._M_array = (std::initializer_list<data::GCGTagType>::iterator)0xC9000000C8LL;
    __l._M_len = 0xCB000000CALL;
    v4 = 204;
    v5 = 205;
    std::allocator<data::GCGTagType>::allocator(&__a);
    std::set<data::GCGTagType>::set(
      &GCGUtils::getAllWeaponTagSet(void)::weapon_tag_set,
      (std::initializer_list<data::GCGTagType>)__PAIR128__(6LL, &__l),
      &__comp,
      &__a);
    __cxa_guard_release(&`guard variable for'GCGUtils::getAllWeaponTagSet(void)::weapon_tag_set);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<data::GCGTagType>::~set,
      &GCGUtils::getAllWeaponTagSet(void)::weapon_tag_set,
      &_dso_handle);
    std::allocator<data::GCGTagType>::~allocator(&__a);
  }
  return &GCGUtils::getAllWeaponTagSet(void)::weapon_tag_set;
};
