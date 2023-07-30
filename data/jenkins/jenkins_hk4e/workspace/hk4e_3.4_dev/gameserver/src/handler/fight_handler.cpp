// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/fight_handler.cpp

// Line 48: range 00000000131164F0-00000000131165BA
int32_t __cdecl FightHandler::forwardSendPacket(
        Scene *scene,
        Player *player,
        CreaturePtr *p_creature_ptr,
        proto::ForwardType type,
        common::minet::ConstMessagePtr *p_msg_ptr,
        bool should_be_authority,
        const std::set<unsigned int> *peer_id_set)
{
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t v8; // ebx
  uint32_t entity_id; // [rsp+3Ch] [rbp-24h]
  std::shared_ptr<const google::protobuf::Message> v15; // [rsp+40h] [rbp-20h] BYREF

  entity_id = 0;
  if ( std::operator!=<Creature>(0LL, p_creature_ptr) )
  {
    v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_creature_ptr);
    entity_id = Entity::getEntityId((const Entity *const)v7);
  }
  std::shared_ptr<google::protobuf::Message const>::shared_ptr(&v15, p_msg_ptr);
  v8 = FightHandler::forwardSendPacket(scene, player, entity_id, type, &v15, should_be_authority, peer_id_set);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v15);
  return v8;
};

// Line 58: range 00000000131165BC-0000000013116796
int32_t __cdecl FightHandler::forwardSendPacket(
        Scene *scene,
        Player *player,
        uint32_t entity_id,
        proto::ForwardType type,
        common::minet::ConstMessagePtr *p_msg_ptr,
        bool should_be_authority,
        const std::set<unsigned int> *peer_id_set)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  GameserverService *v10; // rax
  PlayerMgr *p_player_mgr; // r14
  int32_t result; // eax
  std::shared_ptr<const google::protobuf::Message> v17; // [rsp+30h] [rbp-A0h] BYREF
  char v18[144]; // [rsp+40h] [rbp-90h] BYREF

  v7 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 24 10 uid_vec:59";
  *(_QWORD *)(v7 + 16) = FightHandler::forwardSendPacket;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -218103808;
  v9[536862722] = -202116109;
  FightHandler::getForwardSendPlayerUidVec(
    (std::vector<unsigned int> *)(v7 + 32),
    scene,
    player,
    entity_id,
    type,
    should_be_authority,
    peer_id_set);
  v10 = ServiceBox::findService<GameserverService>();
  p_player_mgr = &GameserverService::getGameThreadLocal(v10)->player_mgr;
  std::shared_ptr<google::protobuf::Message const>::shared_ptr(&v17, p_msg_ptr);
  LODWORD(p_player_mgr) = PlayerMgr::sendToPlayerList<google::protobuf::Message>(
                            p_player_mgr,
                            (const std::vector<unsigned int> *)(v7 + 32),
                            &v17);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v17);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v7 + 32));
  result = (int)p_player_mgr;
  if ( v18 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 64: range 0000000013116DD4-00000000131192D3
int32_t __cdecl FightHandler::addPacketFuncToMap(FightHandler *const this, PacketFuncMap *process_packet_func_map)
{
  FightHandler **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  FightHandler **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  FightHandler **v9; // r8
  const std::_Placeholder<1> *v10; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  FightHandler **v12; // r8
  const std::_Placeholder<1> *v13; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  FightHandler **v15; // r8
  const std::_Placeholder<1> *v16; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v17; // rax
  FightHandler **v18; // r8
  const std::_Placeholder<1> *v19; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v20; // rax
  FightHandler **v21; // r8
  const std::_Placeholder<1> *v22; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v23; // rax
  FightHandler **v24; // r8
  const std::_Placeholder<1> *v25; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v26; // rax
  FightHandler **v27; // r8
  const std::_Placeholder<1> *v28; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v29; // rax
  FightHandler **v30; // r8
  const std::_Placeholder<1> *v31; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v32; // rax
  FightHandler **v33; // r8
  const std::_Placeholder<1> *v34; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v35; // rax
  FightHandler **v36; // r8
  const std::_Placeholder<1> *v37; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v38; // rax
  FightHandler **v39; // r8
  const std::_Placeholder<1> *v40; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v41; // rax
  FightHandler **v42; // r8
  const std::_Placeholder<1> *v43; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v44; // rax
  FightHandler **v45; // r8
  const std::_Placeholder<1> *v46; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v47; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v48; // rax
  FightHandler **v49; // r8
  const std::_Placeholder<1> *v50; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v51; // rax
  FightHandler **v52; // r8
  const std::_Placeholder<1> *v53; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v54; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v55; // rax
  FightHandler **v56; // r8
  const std::_Placeholder<1> *v57; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v58; // rax
  FightHandler **v59; // r8
  const std::_Placeholder<1> *v60; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v61; // rax
  FightHandler **v62; // r8
  const std::_Placeholder<1> *v63; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v64; // rax
  FightHandler **v65; // r8
  const std::_Placeholder<1> *v66; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v67; // rax
  FightHandler **v68; // r8
  const std::_Placeholder<1> *v69; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v70; // rax
  FightHandler **v71; // r8
  const std::_Placeholder<1> *v72; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v73; // rax
  FightHandler **v74; // r8
  const std::_Placeholder<1> *v75; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v76; // rax
  __m128i v77; // [rsp+0h] [rbp-210h] BYREF
  __m128i v78; // [rsp+10h] [rbp-200h] BYREF
  __m128i v79; // [rsp+20h] [rbp-1F0h] BYREF
  __m128i v80; // [rsp+30h] [rbp-1E0h] BYREF
  __m128i v81; // [rsp+40h] [rbp-1D0h] BYREF
  __m128i v82; // [rsp+50h] [rbp-1C0h] BYREF
  __m128i v83; // [rsp+60h] [rbp-1B0h] BYREF
  __m128i v84; // [rsp+70h] [rbp-1A0h] BYREF
  __m128i v85; // [rsp+80h] [rbp-190h] BYREF
  __m128i v86; // [rsp+90h] [rbp-180h] BYREF
  __m128i v87; // [rsp+A0h] [rbp-170h] BYREF
  __m128i v88; // [rsp+B0h] [rbp-160h] BYREF
  __m128i v89; // [rsp+C0h] [rbp-150h] BYREF
  __m128i v90; // [rsp+D0h] [rbp-140h] BYREF
  __m128i v91; // [rsp+E0h] [rbp-130h] BYREF
  __m128i v92; // [rsp+F0h] [rbp-120h] BYREF
  __m128i v93; // [rsp+100h] [rbp-110h] BYREF
  __m128i v94; // [rsp+110h] [rbp-100h] BYREF
  __m128i v95; // [rsp+120h] [rbp-F0h] BYREF
  __m128i v96; // [rsp+130h] [rbp-E0h] BYREF
  __m128i v97; // [rsp+140h] [rbp-D0h] BYREF
  __m128i v98; // [rsp+150h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+160h] [rbp-B0h]
  FightHandler *thisa; // [rsp+168h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+17Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v102; // [rsp+180h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+188h] [rbp-88h] BYREF
  int (*__f[2])(FightHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+190h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,const std::_Placeholder<1>&>::type v105; // [rsp+1A0h] [rbp-70h] BYREF
  common::milog::MiLogStream v106; // [rsp+1C0h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 335;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v102, &__y) )
  {
    common::milog::MiLogStream::create(
      &v106,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/fight_handler.cpp",
      "addPacketFuncToMap",
      68);
    common::milog::MiLogStream::operator()(&v106, format, 335LL);
    common::milog::MiLogStream::~MiLogStream(&v106);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __f[0] = (int (*)(FightHandler *, std::shared_ptr<common::minet::Packet>))FightHandler::onEvtDoSkillSuccNotify;
    __f[1] = 0LL;
    std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
      &v105,
      __f,
      (FightHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v2,
      v3);
    __x = 335;
    v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
      v5,
      &v105);
    __x = 307;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v102, &__y) )
    {
      common::milog::MiLogStream::create(
        &v106,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/fight_handler.cpp",
        "addPacketFuncToMap",
        69);
      common::milog::MiLogStream::operator()(&v106, format, 307LL);
      common::milog::MiLogStream::~MiLogStream(&v106);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(FightHandler *, std::shared_ptr<common::minet::Packet>))FightHandler::onEvtCreateGadgetNotify;
      __f[1] = 0LL;
      std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
        &v105,
        __f,
        (FightHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v6,
        v7);
      __x = 307;
      v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
        v8,
        &v105);
      __x = 321;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v102, &__y) )
      {
        common::milog::MiLogStream::create(
          &v106,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/fight_handler.cpp",
          "addPacketFuncToMap",
          70);
        common::milog::MiLogStream::operator()(&v106, format, 321LL);
        common::milog::MiLogStream::~MiLogStream(&v106);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v77.m128i_i64[0] = (__int64)FightHandler::onEvtDestroyGadgetNotify;
        v77.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v77);
        std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
          &v105,
          __f,
          (FightHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v9,
          v10);
        __x = 321;
        v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
          v11,
          &v105);
        __x = 387;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v102, &__y) )
        {
          common::milog::MiLogStream::create(
            &v106,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/fight_handler.cpp",
            "addPacketFuncToMap",
            71);
          common::milog::MiLogStream::operator()(&v106, format, 387LL);
          common::milog::MiLogStream::~MiLogStream(&v106);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v78.m128i_i64[0] = (__int64)FightHandler::onEvtDestroyServerGadgetNotify;
          v78.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v78);
          std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
            &v105,
            __f,
            (FightHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v12,
            v13);
          __x = 387;
          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
            v14,
            &v105);
          __x = 348;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v102, &__y) )
          {
            common::milog::MiLogStream::create(
              &v106,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/fight_handler.cpp",
              "addPacketFuncToMap",
              78);
            common::milog::MiLogStream::operator()(&v106, format, 348LL);
            common::milog::MiLogStream::~MiLogStream(&v106);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v79.m128i_i64[0] = (__int64)FightHandler::onEvtBulletHitNotify;
            v79.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v79);
            std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
              &v105,
              __f,
              (FightHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v15,
              v16);
            __x = 348;
            v17 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
              v17,
              &v105);
            __x = 397;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v102, &__y) )
            {
              common::milog::MiLogStream::create(
                &v106,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/fight_handler.cpp",
                "addPacketFuncToMap",
                79);
              common::milog::MiLogStream::operator()(&v106, format, 397LL);
              common::milog::MiLogStream::~MiLogStream(&v106);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v80.m128i_i64[0] = (__int64)FightHandler::onEvtBulletDeactiveNotify;
              v80.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v80);
              std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                &v105,
                __f,
                (FightHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v18,
                v19);
              __x = 397;
              v20 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                v20,
                &v105);
              __x = 381;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v102, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v106,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/fight_handler.cpp",
                  "addPacketFuncToMap",
                  80);
                common::milog::MiLogStream::operator()(&v106, format, 381LL);
                common::milog::MiLogStream::~MiLogStream(&v106);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                v81.m128i_i64[0] = (__int64)FightHandler::onEvtEntityStartDieEndNotify;
                v81.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v81);
                std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                  &v105,
                  __f,
                  (FightHandler **)&__y,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  v21,
                  v22);
                __x = 381;
                v23 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                  v23,
                  &v105);
                __x = 365;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v102, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v106,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/fight_handler.cpp",
                    "addPacketFuncToMap",
                    81);
                  common::milog::MiLogStream::operator()(&v106, format, 365LL);
                  common::milog::MiLogStream::~MiLogStream(&v106);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v82.m128i_i64[0] = (__int64)FightHandler::onEvtBulletMoveNotify;
                  v82.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v82);
                  std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                    &v105,
                    __f,
                    (FightHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v24,
                    v25);
                  __x = 365;
                  v26 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                    v26,
                    &v105);
                  __x = 304;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v102, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v106,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/fight_handler.cpp",
                      "addPacketFuncToMap",
                      82);
                    common::milog::MiLogStream::operator()(&v106, format, 304LL);
                    common::milog::MiLogStream::~MiLogStream(&v106);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    v83.m128i_i64[0] = (__int64)FightHandler::onEvtAvatarEnterFocusNotify;
                    v83.m128i_i64[1] = 0LL;
                    *(__m128i *)__f = _mm_load_si128(&v83);
                    std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                      &v105,
                      __f,
                      (FightHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v27,
                      v28);
                    __x = 304;
                    v29 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                      v29,
                      &v105);
                    __x = 393;
                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                    process_packet_func_mapa,
                                    &__x)._M_node;
                    v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                    if ( std::operator!=(&v102, &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v106,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/handler/fight_handler.cpp",
                        "addPacketFuncToMap",
                        83);
                      common::milog::MiLogStream::operator()(&v106, format, 393LL);
                      common::milog::MiLogStream::~MiLogStream(&v106);
                      return -1;
                    }
                    else
                    {
                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                      v84.m128i_i64[0] = (__int64)FightHandler::onEvtAvatarExitFocusNotify;
                      v84.m128i_i64[1] = 0LL;
                      *(__m128i *)__f = _mm_load_si128(&v84);
                      std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                        &v105,
                        __f,
                        (FightHandler **)&__y,
                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                        v30,
                        v31);
                      __x = 393;
                      v32 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                              process_packet_func_mapa,
                              &__x);
                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                        v32,
                        &v105);
                      __x = 327;
                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                      process_packet_func_mapa,
                                      &__x)._M_node;
                      v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                      if ( std::operator!=(&v102, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          &v106,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/handler/fight_handler.cpp",
                          "addPacketFuncToMap",
                          84);
                        common::milog::MiLogStream::operator()(&v106, format, 327LL);
                        common::milog::MiLogStream::~MiLogStream(&v106);
                        return -1;
                      }
                      else
                      {
                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                        v85.m128i_i64[0] = (__int64)FightHandler::onEvtAvatarUpdateFocusNotify;
                        v85.m128i_i64[1] = 0LL;
                        *(__m128i *)__f = _mm_load_si128(&v85);
                        std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                          &v105,
                          __f,
                          (FightHandler **)&__y,
                          (const std::_Placeholder<1> *)&std::placeholders::_1,
                          v33,
                          v34);
                        __x = 327;
                        v35 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                process_packet_func_mapa,
                                &__x);
                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                          v35,
                          &v105);
                        __x = 343;
                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                        process_packet_func_mapa,
                                        &__x)._M_node;
                        v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                        if ( std::operator!=(&v102, &__y) )
                        {
                          common::milog::MiLogStream::create(
                            &v106,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/handler/fight_handler.cpp",
                            "addPacketFuncToMap",
                            86);
                          common::milog::MiLogStream::operator()(&v106, format, 343LL);
                          common::milog::MiLogStream::~MiLogStream(&v106);
                          return -1;
                        }
                        else
                        {
                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                          v86.m128i_i64[0] = (__int64)FightHandler::onEvtEntityRenderersChangedNotify;
                          v86.m128i_i64[1] = 0LL;
                          *(__m128i *)__f = _mm_load_si128(&v86);
                          std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                            &v105,
                            __f,
                            (FightHandler **)&__y,
                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                            v36,
                            v37);
                          __x = 343;
                          v38 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                  process_packet_func_mapa,
                                  &__x);
                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                            v38,
                            &v105);
                          __x = 334;
                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                          process_packet_func_mapa,
                                          &__x)._M_node;
                          v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                          if ( std::operator!=(&v102, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              &v106,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/handler/fight_handler.cpp",
                              "addPacketFuncToMap",
                              87);
                            common::milog::MiLogStream::operator()(&v106, format, 334LL);
                            common::milog::MiLogStream::~MiLogStream(&v106);
                            return -1;
                          }
                          else
                          {
                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                            v87.m128i_i64[0] = (__int64)FightHandler::onAvatarEnterElementViewNotify;
                            v87.m128i_i64[1] = 0LL;
                            *(__m128i *)__f = _mm_load_si128(&v87);
                            std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                              &v105,
                              __f,
                              (FightHandler **)&__y,
                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                              v39,
                              v40);
                            __x = 334;
                            v41 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                    process_packet_func_mapa,
                                    &__x);
                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                              v41,
                              &v105);
                            __x = 374;
                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                            process_packet_func_mapa,
                                            &__x)._M_node;
                            v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                            if ( std::operator!=(&v102, &__y) )
                            {
                              common::milog::MiLogStream::create(
                                &v106,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/handler/fight_handler.cpp",
                                "addPacketFuncToMap",
                                88);
                              common::milog::MiLogStream::operator()(&v106, format, 374LL);
                              common::milog::MiLogStream::~MiLogStream(&v106);
                              return -1;
                            }
                            else
                            {
                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                              v88.m128i_i64[0] = (__int64)FightHandler::onAnimatorForceSetAirMoveNotify;
                              v88.m128i_i64[1] = 0LL;
                              *(__m128i *)__f = _mm_load_si128(&v88);
                              std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                                &v105,
                                __f,
                                (FightHandler **)&__y,
                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                v42,
                                v43);
                              __x = 374;
                              v44 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                      process_packet_func_mapa,
                                      &__x);
                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                                v44,
                                &v105);
                              __x = 376;
                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                              process_packet_func_mapa,
                                              &__x)._M_node;
                              v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                              if ( std::operator!=(&v102, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  &v106,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/handler/fight_handler.cpp",
                                  "addPacketFuncToMap",
                                  89);
                                common::milog::MiLogStream::operator()(&v106, format, 376LL);
                                common::milog::MiLogStream::~MiLogStream(&v106);
                                return -1;
                              }
                              else
                              {
                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                v89.m128i_i64[0] = (__int64)FightHandler::onEvtAiSyncSkillCdNotify;
                                v89.m128i_i64[1] = 0LL;
                                *(__m128i *)__f = _mm_load_si128(&v89);
                                std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                                  &v105,
                                  __f,
                                  (FightHandler **)&__y,
                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                  v45,
                                  v46);
                                __x = 376;
                                v47 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                        process_packet_func_mapa,
                                        &__x);
                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                                  v47,
                                  &v105);
                                __x = 318;
                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                process_packet_func_mapa,
                                                &__x)._M_node;
                                v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                if ( std::operator!=(&v102, &__y) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v106,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/handler/fight_handler.cpp",
                                    "addPacketFuncToMap",
                                    90);
                                  common::milog::MiLogStream::operator()(&v106, format, 318LL);
                                  common::milog::MiLogStream::~MiLogStream(&v106);
                                  return -1;
                                }
                                else
                                {
                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                  __x = 318;
                                  v48 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                          process_packet_func_mapa,
                                          &__x);
                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<FightHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
                                    v48,
                                    (FightHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                  __x = 324;
                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                  process_packet_func_mapa,
                                                  &__x)._M_node;
                                  v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                  if ( std::operator!=(&v102, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      &v106,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/handler/fight_handler.cpp",
                                      "addPacketFuncToMap",
                                      91);
                                    common::milog::MiLogStream::operator()(&v106, format, 324LL);
                                    common::milog::MiLogStream::~MiLogStream(&v106);
                                    return -1;
                                  }
                                  else
                                  {
                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                    v90.m128i_i64[0] = (__int64)FightHandler::onEvtAvatarSitDownNotify;
                                    v90.m128i_i64[1] = 0LL;
                                    *(__m128i *)__f = _mm_load_si128(&v90);
                                    std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                                      &v105,
                                      __f,
                                      (FightHandler **)&__y,
                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                      v49,
                                      v50);
                                    __x = 324;
                                    v51 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                            process_packet_func_mapa,
                                            &__x);
                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                                      v51,
                                      &v105);
                                    __x = 356;
                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                    process_packet_func_mapa,
                                                    &__x)._M_node;
                                    v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                    if ( std::operator!=(&v102, &__y) )
                                    {
                                      common::milog::MiLogStream::create(
                                        &v106,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/handler/fight_handler.cpp",
                                        "addPacketFuncToMap",
                                        92);
                                      common::milog::MiLogStream::operator()(&v106, format, 356LL);
                                      common::milog::MiLogStream::~MiLogStream(&v106);
                                      return -1;
                                    }
                                    else
                                    {
                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                      v91.m128i_i64[0] = (__int64)FightHandler::onEvtAvatarStandUpNotify;
                                      v91.m128i_i64[1] = 0LL;
                                      *(__m128i *)__f = _mm_load_si128(&v91);
                                      std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                                        &v105,
                                        __f,
                                        (FightHandler **)&__y,
                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                        v52,
                                        v53);
                                      __x = 356;
                                      v54 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                              process_packet_func_mapa,
                                              &__x);
                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                                        v54,
                                        &v105);
                                      __x = 342;
                                      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                      process_packet_func_mapa,
                                                      &__x)._M_node;
                                      v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                      if ( std::operator!=(&v102, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          &v106,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/handler/fight_handler.cpp",
                                          "addPacketFuncToMap",
                                          93);
                                        common::milog::MiLogStream::operator()(&v106, format, 342LL);
                                        common::milog::MiLogStream::~MiLogStream(&v106);
                                        return -1;
                                      }
                                      else
                                      {
                                        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                        __x = 342;
                                        v55 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                process_packet_func_mapa,
                                                &__x);
                                        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<FightHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
                                          v55,
                                          (FightHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                                        __x = 358;
                                        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                        process_packet_func_mapa,
                                                        &__x)._M_node;
                                        v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                        if ( std::operator!=(&v102, &__y) )
                                        {
                                          common::milog::MiLogStream::create(
                                            &v106,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/handler/fight_handler.cpp",
                                            "addPacketFuncToMap",
                                            94);
                                          common::milog::MiLogStream::operator()(&v106, format, 358LL);
                                          common::milog::MiLogStream::~MiLogStream(&v106);
                                          return -1;
                                        }
                                        else
                                        {
                                          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                          v92.m128i_i64[0] = (__int64)FightHandler::onDestroyMassiveEntityNotify;
                                          v92.m128i_i64[1] = 0LL;
                                          *(__m128i *)__f = _mm_load_si128(&v92);
                                          std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                                            &v105,
                                            __f,
                                            (FightHandler **)&__y,
                                            (const std::_Placeholder<1> *)&std::placeholders::_1,
                                            v56,
                                            v57);
                                          __x = 358;
                                          v58 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                  process_packet_func_mapa,
                                                  &__x);
                                          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                                            v58,
                                            &v105);
                                          __x = 370;
                                          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                          process_packet_func_mapa,
                                                          &__x)._M_node;
                                          v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                          if ( std::operator!=(&v102, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              &v106,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/handler/fight_handler.cpp",
                                              "addPacketFuncToMap",
                                              95);
                                            common::milog::MiLogStream::operator()(&v106, format, 370LL);
                                            common::milog::MiLogStream::~MiLogStream(&v106);
                                            return -1;
                                          }
                                          else
                                          {
                                            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                            v93.m128i_i64[0] = (__int64)FightHandler::onMassiveEntityStateChangedNotify;
                                            v93.m128i_i64[1] = 0LL;
                                            *(__m128i *)__f = _mm_load_si128(&v93);
                                            std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                                              &v105,
                                              __f,
                                              (FightHandler **)&__y,
                                              (const std::_Placeholder<1> *)&std::placeholders::_1,
                                              v59,
                                              v60);
                                            __x = 370;
                                            v61 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                    process_packet_func_mapa,
                                                    &__x);
                                            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                                              v61,
                                              &v105);
                                            __x = 329;
                                            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                            process_packet_func_mapa,
                                                            &__x)._M_node;
                                            v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                            if ( std::operator!=(&v102, &__y) )
                                            {
                                              common::milog::MiLogStream::create(
                                                &v106,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/handler/fight_handler.cpp",
                                                "addPacketFuncToMap",
                                                96);
                                              common::milog::MiLogStream::operator()(&v106, format, 329LL);
                                              common::milog::MiLogStream::~MiLogStream(&v106);
                                              return -1;
                                            }
                                            else
                                            {
                                              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                              v94.m128i_i64[0] = (__int64)FightHandler::onEvtAiSyncCombatThreatInfoNotify;
                                              v94.m128i_i64[1] = 0LL;
                                              *(__m128i *)__f = _mm_load_si128(&v94);
                                              std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                                                &v105,
                                                __f,
                                                (FightHandler **)&__y,
                                                (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                v62,
                                                v63);
                                              __x = 329;
                                              v64 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                      process_packet_func_mapa,
                                                      &__x);
                                              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                                                v64,
                                                &v105);
                                              __x = 357;
                                              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                              process_packet_func_mapa,
                                                              &__x)._M_node;
                                              v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                              if ( std::operator!=(&v102, &__y) )
                                              {
                                                common::milog::MiLogStream::create(
                                                  &v106,
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/handler/fight_handler.cpp",
                                                  "addPacketFuncToMap",
                                                  97);
                                                common::milog::MiLogStream::operator()(&v106, format, 357LL);
                                                common::milog::MiLogStream::~MiLogStream(&v106);
                                                return -1;
                                              }
                                              else
                                              {
                                                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                v95.m128i_i64[0] = (__int64)FightHandler::onMassiveEntityElementOpBatchNotify;
                                                v95.m128i_i64[1] = 0LL;
                                                *(__m128i *)__f = _mm_load_si128(&v95);
                                                std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                                                  &v105,
                                                  __f,
                                                  (FightHandler **)&__y,
                                                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                  v65,
                                                  v66);
                                                __x = 357;
                                                v67 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                        process_packet_func_mapa,
                                                        &__x);
                                                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                                                  v67,
                                                  &v105);
                                                __x = 400;
                                                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                process_packet_func_mapa,
                                                                &__x)._M_node;
                                                v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                if ( std::operator!=(&v102, &__y) )
                                                {
                                                  common::milog::MiLogStream::create(
                                                    &v106,
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/handler/fight_handler.cpp",
                                                    "addPacketFuncToMap",
                                                    98);
                                                  common::milog::MiLogStream::operator()(&v106, format, 400LL);
                                                  common::milog::MiLogStream::~MiLogStream(&v106);
                                                  return -1;
                                                }
                                                else
                                                {
                                                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                  v96.m128i_i64[0] = (__int64)FightHandler::onEntityAiSyncNotify;
                                                  v96.m128i_i64[1] = 0LL;
                                                  *(__m128i *)__f = _mm_load_si128(&v96);
                                                  std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                                                    &v105,
                                                    __f,
                                                    (FightHandler **)&__y,
                                                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                    v68,
                                                    v69);
                                                  __x = 400;
                                                  v70 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                          process_packet_func_mapa,
                                                          &__x);
                                                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                                                    v70,
                                                    &v105);
                                                  __x = 340;
                                                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                  process_packet_func_mapa,
                                                                  &__x)._M_node;
                                                  v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                  if ( std::operator!=(&v102, &__y) )
                                                  {
                                                    common::milog::MiLogStream::create(
                                                      &v106,
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/handler/fight_handler.cpp",
                                                      "addPacketFuncToMap",
                                                      99);
                                                    common::milog::MiLogStream::operator()(&v106, format, 340LL);
                                                    common::milog::MiLogStream::~MiLogStream(&v106);
                                                    return -1;
                                                  }
                                                  else
                                                  {
                                                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                    v97.m128i_i64[0] = (__int64)FightHandler::onEntityAiKillSelfNotify;
                                                    v97.m128i_i64[1] = 0LL;
                                                    *(__m128i *)__f = _mm_load_si128(&v97);
                                                    std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                                                      &v105,
                                                      __f,
                                                      (FightHandler **)&__y,
                                                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                      v71,
                                                      v72);
                                                    __x = 340;
                                                    v73 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                            process_packet_func_mapa,
                                                            &__x);
                                                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                                                      v73,
                                                      &v105);
                                                    __x = 368;
                                                    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                                                    process_packet_func_mapa,
                                                                    &__x)._M_node;
                                                    v102._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                                                    if ( std::operator!=(&v102, &__y) )
                                                    {
                                                      common::milog::MiLogStream::create(
                                                        &v106,
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/handler/fight_handler.cpp",
                                                        "addPacketFuncToMap",
                                                        100);
                                                      common::milog::MiLogStream::operator()(&v106, format, 368LL);
                                                      common::milog::MiLogStream::~MiLogStream(&v106);
                                                      return -1;
                                                    }
                                                    else
                                                    {
                                                      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                                                      v98.m128i_i64[0] = (__int64)FightHandler::onReportFightAntiCheatNotify;
                                                      v98.m128i_i64[1] = 0LL;
                                                      *(__m128i *)__f = _mm_load_si128(&v98);
                                                      std::bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>),FightHandler*,std::_Placeholder<1> const&>(
                                                        &v105,
                                                        __f,
                                                        (FightHandler **)&__y,
                                                        (const std::_Placeholder<1> *)&std::placeholders::_1,
                                                        v74,
                                                        v75);
                                                      __x = 368;
                                                      v76 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                                                              process_packet_func_mapa,
                                                              &__x);
                                                      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (FightHandler::*)(std::shared_ptr<common::minet::Packet>) ()(FightHandler*,std::_Placeholder<1>)>>(
                                                        v76,
                                                        &v105);
                                                      return 0;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
};

// Line 90: range 0000000013116798-0000000013116AB4
int __cdecl FightHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const FightHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  FightHandler *this; // r14
  std::__shared_ptr_access<const proto::EvtAvatarLockChairReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::EvtAvatarLockChairRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::EvtAvatarLockChairRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:90 64 16 10 rsp_ptr:90";
  *(_QWORD *)(v2 + 16) = FightHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtAvatarLockChairReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtAvatarLockChairReq const>(
         (const std::shared_ptr<const proto::EvtAvatarLockChairReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "operator()",
      90);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::EvtAvatarLockChairReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtAvatarLockChairReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::EvtAvatarLockChairRsp>();
    rsp_0 = std::__shared_ptr_access<proto::EvtAvatarLockChairRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EvtAvatarLockChairRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::EvtAvatarLockChairRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::EvtAvatarLockChairReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtAvatarLockChairReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = FightHandler::onEvtAvatarLockChairReq(this, v8, rsp_0);
    proto::EvtAvatarLockChairRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::EvtAvatarLockChairRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::EvtAvatarLockChairRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::EvtAvatarLockChairRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::EvtAvatarLockChairRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::EvtAvatarLockChairRsp>::~shared_ptr((std::shared_ptr<proto::EvtAvatarLockChairRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtAvatarLockChairReq const>::~shared_ptr((std::shared_ptr<const proto::EvtAvatarLockChairReq> *const)(v2 + 32));
  result = v5;
  if ( v16 == (char *)v2 )
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

// Line 93: range 0000000013116AB6-0000000013116DD2
int __cdecl FightHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const FightHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  FightHandler *this; // r14
  std::__shared_ptr_access<const proto::CreateMassiveEntityReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::CreateMassiveEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::CreateMassiveEntityRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:93 64 16 10 rsp_ptr:93";
  *(_QWORD *)(v2 + 16) = FightHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CreateMassiveEntityReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::CreateMassiveEntityReq const>(
         (const std::shared_ptr<const proto::CreateMassiveEntityReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "operator()",
      93);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::CreateMassiveEntityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CreateMassiveEntityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::CreateMassiveEntityRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CreateMassiveEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CreateMassiveEntityRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::CreateMassiveEntityRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::CreateMassiveEntityReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CreateMassiveEntityReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = FightHandler::onCreateMassiveEntityReq(this, v8, rsp_0);
    proto::CreateMassiveEntityRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::CreateMassiveEntityRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::CreateMassiveEntityRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::CreateMassiveEntityRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::CreateMassiveEntityRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::CreateMassiveEntityRsp>::~shared_ptr((std::shared_ptr<proto::CreateMassiveEntityRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::CreateMassiveEntityReq const>::~shared_ptr((std::shared_ptr<const proto::CreateMassiveEntityReq> *const)(v2 + 32));
  result = v5;
  if ( v16 == (char *)v2 )
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

// Line 105: range 00000000131194D8-00000000131195F7
int32_t __cdecl FightHandler::addBytesFuncToMap(FightHandler *const this, BytesFuncMap *process_bytes_func_map)
{
  std::function<int(const std::string&)> *v3; // rax
  std::unordered_map<unsigned int,std::function<int(const std::string&)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<int(const std::string&)> >,false> v5; // [rsp+20h] [rbp-40h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<int(const std::string&)> >,false> __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  __x = 319;
  __y._M_cur = std::unordered_map<unsigned int,std::function<int ()(std::string const&)>>::find(
                 process_bytes_func_map,
                 &__x)._M_cur;
  v5._M_cur = std::unordered_map<unsigned int,std::function<int ()(std::string const&)>>::end(process_bytes_func_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::function<int ()(std::string const&)>>,false>(
         &v5,
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/fight_handler.cpp",
      "addBytesFuncToMap",
      106);
    common::milog::MiLogStream::operator()(&v7, format, 319LL);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<int(const std::string&)> >,false>::__node_type *)this;
    __x = 319;
    v3 = std::unordered_map<unsigned int,std::function<int ()(std::string const&)>>::operator[](
           process_bytes_func_map,
           &__x);
    std::function<int ()(std::string const&)>::operator=<FightHandler::addBytesFuncToMap(std::unordered_map<unsigned int,std::function<int ()(std::string const&)>> &)::{lambda(std::string const&)#1}>(
      v3,
      (FightHandler::addBytesFuncToMap::<lambda(const string&)> *)&__y);
    return 0;
  }
};

// Line 106: range 00000000131192D4-00000000131194D7
int __cdecl FightHandler::addBytesFuncToMap(std::unordered_map<unsigned int,std::function<int ()(std::string const&)>> &)::{lambda(std::string const&)#1}::operator()(
        const FightHandler::addBytesFuncToMap::<lambda(const string&)> *const __closure,
        const std::string *bs)
{
  proto::CombatInvocationsNotify *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // r14d
  int result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-D0h] BYREF
  char v8[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (proto::CombatInvocationsNotify *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (proto::CombatInvocationsNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 48 48 10 notify:106";
  v2->invoke_list_.arena_ = (google::protobuf::Arena *)FightHandler::addBytesFuncToMap(std::unordered_map<unsigned int,std::function<int ()(std::string const&)>> &)::{lambda(std::string const&)#1}::operator();
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::CombatInvocationsNotify::CombatInvocationsNotify(v2 + 1);
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(&v2[1], bs) != 1 )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "operator()",
      106);
    common::milog::MiLogStream::operator()(&v7, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = FightHandler::onCombatInvocationsNotify(__closure->__this, v2 + 1);
  }
  proto::CombatInvocationsNotify::~CombatInvocationsNotify(v2 + 1);
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 111: range 000000001311965C-0000000013119DB2
std::vector<unsigned int> *__cdecl FightHandler::getCreatureNotifyPlayerUid(
        std::vector<unsigned int> *retstr,
        Scene *scene,
        Player *player,
        CreaturePtr *p_input_creature_ptr,
        bool should_be_authority)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  Creature *v13; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  char v21; // al
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  std::__shared_ptr_access<WeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<WeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  Entity *v29; // rax
  std::shared_ptr<Avatar> __r; // [rsp+30h] [rbp-120h] BYREF
  std::vector<unsigned int> __x; // [rsp+40h] [rbp-110h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+60h] [rbp-F0h] BYREF
  char v37[208]; // [rsp+80h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 19 owner_entity_id:144 64 16 23 anchor_creature_ptr:113 96 16 21 weapon_gadget_ptr:141 12"
                        "8 16 22 owner_creature_ptr:145";
  *(_QWORD *)(v5 + 16) = FightHandler::getCreatureNotifyPlayerUid;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  std::vector<unsigned int>::vector(retstr);
  std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v5 + 64), p_input_creature_ptr);
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v5 + 64), 0LL) )
    goto LABEL_15;
  v8 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  v9 = *(_QWORD *)v8 + 24LL;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v9)(v8) == 10 )
    goto LABEL_15;
  v10 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8();
  v11 = *(_QWORD *)v10 + 24LL;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10) == 1 )
LABEL_15:
    v12 = 1;
  else
    v12 = 0;
  if ( v12 )
  {
    Player::getCurAvatar((Player *const)(v5 + 128));
    std::shared_ptr<Creature>::operator=<Avatar>(
      (std::shared_ptr<Creature> *const)(v5 + 64),
      (std::shared_ptr<Avatar> *)(v5 + 128));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 128));
  }
  if ( !std::operator==<Creature>((const std::shared_ptr<Creature> *)(v5 + 64), 0LL) )
  {
    if ( !should_be_authority
      || !std::operator!=<Creature>(p_input_creature_ptr, 0LL)
      || (v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_input_creature_ptr),
          Player::isAuthorityOf(player, v13)) )
    {
      v15 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      v16 = *(_QWORD *)v15 + 24LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v16)(v15) == 9 )
        goto LABEL_41;
      v17 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_load8();
      v18 = *(_QWORD *)v17 + 24LL;
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v18)(v17) == 11 )
        goto LABEL_41;
      v19 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8();
      v20 = *(_QWORD *)v19 + 24LL;
      if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v20)(v19) == 12 )
LABEL_41:
        v21 = 1;
      else
        v21 = 0;
      if ( v21 )
      {
        std::function<ForeachPolicy ()(Player &)>::function<FightHandler::getCreatureNotifyPlayerUid(Scene &,Player &,std::shared_ptr<Creature>,bool)::{lambda(Player &)#1},void,void>(
          &p_func,
          (FightHandler::getCreatureNotifyPlayerUid::<lambda(Player&)>)retstr);
        Scene::foreachPlayer(scene, &p_func);
        std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
      }
      else
      {
        v22 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8();
        v23 = *(_QWORD *)v22 + 24LL;
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64))v23)(v22) == 6 )
        {
          std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          toPtr<WeaponGadget,Creature>((Creature *)(v5 + 96));
          if ( std::operator!=<WeaponGadget>((const std::shared_ptr<WeaponGadget> *)(v5 + 96), 0LL) )
          {
            v24 = std::__shared_ptr_access<WeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            *(_DWORD *)(v5 + 48) = Creature::getOwnerEntityId(v24);
            Scene::findEntity<Creature>((const Scene *const)(v5 + 128), (uint32_t)scene);
            if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v5 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&p_func,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/fight_handler.cpp",
                "getCreatureNotifyPlayerUid",
                148);
              v25 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      (common::milog::MiLogStream *const)&p_func,
                      (const char (*)[34])off_24F39760);
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v25,
                      (const unsigned int *)(v5 + 48));
              v27 = std::__shared_ptr_access<WeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<WeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
              common::milog::MiLogStream::operator<<<WeaponGadget,(WeaponGadget*)0>(v26, v27);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
              Player::getCurAvatar((Player *const)&__r);
              std::shared_ptr<Creature>::operator=<Avatar>((std::shared_ptr<Creature> *const)(v5 + 64), &__r);
              std::shared_ptr<Avatar>::~shared_ptr(&__r);
            }
            else
            {
              std::shared_ptr<Creature>::operator=(
                (std::shared_ptr<Creature> *const)(v5 + 64),
                (const std::shared_ptr<Creature> *)(v5 + 128));
            }
            std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 128));
          }
          std::shared_ptr<WeaponGadget>::~shared_ptr((std::shared_ptr<WeaponGadget> *const)(v5 + 96));
        }
        v28 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        if ( Entity::isOnScene((const Entity *const)v28) )
        {
          v29 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          Scene::getViewingPlayers(&__x, scene, v29, 0, 1);
          std::vector<unsigned int>::operator=(retstr, &__x);
          std::vector<unsigned int>::~vector(&__x);
        }
      }
    }
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 64));
  if ( v37 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 132: range 00000000131195F8-000000001311965A
ForeachPolicy __cdecl FightHandler::getCreatureNotifyPlayerUid(Scene &,Player &,std::shared_ptr<Creature>,bool)::{lambda(Player &)#1}::operator()(
        const FightHandler::getCreatureNotifyPlayerUid::<lambda(Player&)> *const __closure,
        Player *scene_player)
{
  std::vector<unsigned int> *uid_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  uid_vec = __closure->__uid_vec;
  __x[0] = Player::getUid(scene_player);
  std::vector<unsigned int>::push_back(uid_vec, __x);
  return 0;
};

// Line 166: range 0000000013119DB4-0000000013119FDB
std::vector<unsigned int> *__fastcall FightHandler::getForwardSendPlayerUidVec(
        std::vector<unsigned int> *retstr,
        Scene *scene,
        Player *player,
        uint32_t entity_id,
        proto::ForwardType type,
        bool should_be_authority,
        const std::set<unsigned int> *peer_id_set)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // r8
  char v16[192]; // [rsp+30h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 4 13 entity_id:165 64 56 17 entity_id_set:167";
  *(_QWORD *)(v7 + 16) = FightHandler::getForwardSendPlayerUidVec;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862723] = -218103808;
  v9[536862724] = -202116109;
  *(_DWORD *)(v7 + 48) = entity_id;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v7 + 64));
  std::unordered_set<unsigned int>::insert(
    (std::unordered_set<unsigned int> *const)(v7 + 64),
    (const std::unordered_set<unsigned int>::value_type *)(v7 + 48));
  v10 = should_be_authority;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  FightHandler::getForwardSendPlayerUidVec(
    retstr,
    scene,
    player,
    (const std::unordered_set<unsigned int> *)(v7 + 64),
    type,
    v10,
    peer_id_set);
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v7 + 64));
  if ( v16 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 173: range 0000000013119FDC-000000001311A977
std::vector<unsigned int> *__cdecl FightHandler::getForwardSendPlayerUidVec(
        std::vector<unsigned int> *retstr,
        Scene *scene,
        Player *player,
        const std::unordered_set<unsigned int> *entity_id_set,
        proto::ForwardType type,
        bool should_be_authority,
        const std::set<unsigned int> *peer_id_set)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned int *v13; // rdx
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v15; // rax
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r14
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *v17; // rsi
  unsigned int *v18; // rdx
  unsigned int *v19; // r14
  std::vector<unsigned int>::iterator v20; // rax
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-1A5h] BYREF
  std::vector<unsigned int>::value_type __x; // [rsp+3Ch] [rbp-1A4h] BYREF
  unsigned int entity_id_0; // [rsp+40h] [rbp-1A0h]
  unsigned int entity_id; // [rsp+44h] [rbp-19Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-198h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-190h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+58h] [rbp-188h]
  const std::unordered_set<unsigned int> *__for_range_1; // [rsp+60h] [rbp-180h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-178h]
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-170h] BYREF
  char v36[336]; // [rsp+90h] [rbp-150h] BYREF

  v7 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(288LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "5 48 4 11 peer_id:182 64 16 16 creature_ptr:210 96 16 14 player_ptr:184 128 24 5 v:211 192 56 11 uid_set:207";
  *(_QWORD *)(v7 + 16) = FightHandler::getForwardSendPlayerUidVec;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -219021312;
  v9[536862723] = -219021312;
  v9[536862724] = -234881024;
  v9[536862725] = -218959118;
  v9[536862727] = -218103808;
  v9[536862728] = -202116109;
  switch ( type )
  {
    case FORWARD_TO_ALL:
      std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v7 + 192));
      __for_range_0 = entity_id_set;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::begin(entity_id_set)._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::end(entity_id_set)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
      {
        v13 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        entity_id = *v13;
        Scene::findEntity<Creature>((const Scene *const)(v7 + 64), (uint32_t)scene);
        std::shared_ptr<Creature>::shared_ptr(
          (std::shared_ptr<Creature> *const)(v7 + 96),
          (const std::shared_ptr<Creature> *)(v7 + 64));
        FightHandler::getCreatureNotifyPlayerUid(
          (std::vector<unsigned int> *)(v7 + 128),
          scene,
          player,
          (CreaturePtr *)(v7 + 96),
          should_be_authority);
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v7 + 96));
        M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v7 + 128))._M_current;
        v15._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v7 + 128))._M_current;
        std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
          (std::unordered_set<unsigned int> *const)(v7 + 192),
          v15,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v7 + 128));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v7 + 64));
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
      }
      goto LABEL_19;
    case FORWARD_TO_ALL_EXCEPT_CUR:
      std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v7 + 192));
      __for_range_1 = entity_id_set;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::begin(entity_id_set)._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::end(entity_id_set)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
      {
        v18 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        entity_id_0 = *v18;
        Scene::findEntity<Creature>((const Scene *const)(v7 + 64), (uint32_t)scene);
        std::shared_ptr<Creature>::shared_ptr(
          (std::shared_ptr<Creature> *const)(v7 + 96),
          (const std::shared_ptr<Creature> *)(v7 + 64));
        FightHandler::getCreatureNotifyPlayerUid(
          (std::vector<unsigned int> *)(v7 + 128),
          scene,
          player,
          (CreaturePtr *)(v7 + 96),
          should_be_authority);
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v7 + 96));
        v19 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v7 + 128))._M_current;
        v20._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v7 + 128))._M_current;
        std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
          (std::unordered_set<unsigned int> *const)(v7 + 192),
          v20,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v19);
        __x = Player::getUid(player);
        std::unordered_set<unsigned int>::erase((std::unordered_set<unsigned int> *const)(v7 + 192), &__x);
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v7 + 128));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v7 + 64));
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
      }
LABEL_19:
      std::allocator<unsigned int>::allocator(&__a);
      M_cur = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v7 + 192))._M_cur;
      v17 = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v7 + 192))._M_cur;
      std::vector<unsigned int>::vector<std::__detail::_Node_iterator<unsigned int,true,false>,void>(
        retstr,
        (std::__detail::_Node_iterator<unsigned int,true,false>)v17,
        (std::__detail::_Node_iterator<unsigned int,true,false>)M_cur,
        &__a);
      std::allocator<unsigned int>::~allocator(&__a);
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v7 + 192));
      break;
    case FORWARD_TO_PEER:
    case FORWARD_TO_PEERS:
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v7 + 128));
      __for_range = peer_id_set;
      __for_begin._M_node = std::set<unsigned int>::begin(peer_id_set)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(peer_id_set)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v7 + 48) = *v10;
        Scene::findPeerPlayer((const Scene *const)(v7 + 96), (uint32_t)scene);
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/fight_handler.cpp",
            "getForwardSendPlayerUidVec",
            187);
          v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v35,
                  (const char (*)[50])"forwardSendPacket findPeerPlayer failed, peer_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v7 + 48));
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
        else
        {
          v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
          __x = Player::getUid(v12);
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v7 + 128), &__x);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 96));
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      std::vector<unsigned int>::vector(retstr, (std::vector<unsigned int> *)(v7 + 128));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v7 + 128));
      break;
    default:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      retstr->_M_impl._M_start = 0LL;
      retstr->_M_impl._M_finish = 0LL;
      retstr->_M_impl._M_end_of_storage = 0LL;
      std::vector<unsigned int>::vector(retstr);
      break;
  }
  if ( v36 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8020) = -168430091;
  }
  return retstr;
};

// Line 228: range 000000001311A978-000000001311B3F9
void __cdecl FightHandler::reportAvatarAttackAvatarAntiCheatLog(
        FightHandler *const this,
        HurtContext *hurt_ctx,
        CreaturePtr *attacker_ptr,
        CreaturePtr *defenser_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerMpComp *MpComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  char v15; // al
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  proto_log::AttackEntityLog *v23; // r14
  Entity *v24; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  proto_log::AttackEntityLog *v26; // r14
  Entity *v27; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  ActorAbility *v29; // rax
  data::ConfigAbility *ConfigRef; // rax
  ActorModifier *v31; // rax
  data::ConfigAbilityModifier *v32; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rcx
  Player *player; // r14
  std::allocator<char> __a; // [rsp+2Fh] [rbp-131h] BYREF
  const AttackDamageReportConfig *attack_damage_report_config; // [rsp+30h] [rbp-130h]
  AttackResult *attack_result; // [rsp+38h] [rbp-128h]
  std::shared_ptr<google::protobuf::Message> v46; // [rsp+40h] [rbp-120h] BYREF
  char v47[272]; // [rsp+50h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 32 anti_cheat_min_report_damage:244 48 4 14 cur_damage:257 64 16 11 log_ptr:269 96 32 15 "
                        "ability_str:273 160 32 16 modifier_str:274";
  *(_QWORD *)(v4 + 16) = FightHandler::reportAvatarAttackAvatarAntiCheatLog;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  if ( !std::operator==<Creature>(attacker_ptr, 0LL) && !std::operator==<Creature>(defenser_ptr, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    if ( PlayerMpComp::isInMpMode(MpComp) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v46);
      attack_damage_report_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46)->security_config.attack_damage_report_config;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
      if ( *(char *)(((unsigned __int64)&attack_damage_report_config->is_enable >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&attack_damage_report_config->is_enable);
      if ( attack_damage_report_config->is_enable )
      {
        if ( *(_BYTE *)(((unsigned __int64)&attack_damage_report_config->min_report_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_damage_report_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_damage_report_config->min_report_damage >> 3)
                                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(float *)(v4 + 32) = attack_damage_report_config->min_report_damage;
        attack_result = &hurt_ctx->attack_result;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v46);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
        v10 = JsonConfigMgr::checkAttackTagInWhiteList(
                &v9->design_config.json_config_mgr,
                &hurt_ctx->attack_result.attack_tag);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
        if ( !v10 )
        {
          v11 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)attacker_ptr);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8();
          v12 = *(_QWORD *)v11 + 24LL;
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64))v12)(v11) != 1 )
            goto LABEL_28;
          v13 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          v14 = *(_QWORD *)v13 + 24LL;
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64))v14)(v13) == 1 )
            v15 = 0;
          else
LABEL_28:
            v15 = 1;
          if ( !v15 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&hurt_ctx->final_damage >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)hurt_ctx + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hurt_ctx->final_damage >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(float *)(v4 + 48) = hurt_ctx->final_damage;
            if ( *(float *)(v4 + 48) > *(float *)(v4 + 32) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              AvatarComp = Player::getAvatarComp(this->player_);
              if ( PlayerAvatarComp::checkAttackDamageAntiCheatReportFreqValid(AvatarComp) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v4 + 160),
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/fight_handler.cpp",
                  "reportAvatarAttackAvatarAntiCheatLog",
                  266);
                v17 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        (common::milog::MiLogStream *const)(v4 + 160),
                        (const char (*)[33])"avatar damage report cur_damage:");
                v18 = common::milog::MiLogStream::operator<<<float,(float *)0>(v17, (const float *)(v4 + 48));
                v19 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        v18,
                        (const char (*)[32])", anti_cheat_min_report_damage:");
                v20 = common::milog::MiLogStream::operator<<<float,(float *)0>(v19, (const float *)(v4 + 32));
                v21 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        v20,
                        (const char (*)[27])",attack_result.attack_tag:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &attack_result->attack_tag);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
                common::tools::perf::make_shared<proto_log::AntiCheatBodyAvatarAttackAvatarDamage>();
                v22 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                v23 = proto_log::AntiCheatBodyAvatarAttackAvatarDamage::mutable_attack_entity(v22);
                v24 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)attacker_ptr);
                Creature::getAttackEntityLog(v24, v23);
                v25 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                v26 = proto_log::AntiCheatBodyAvatarAttackAvatarDamage::mutable_defense_entity(v25);
                v27 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
                Creature::getAttackEntityLog(v27, v26);
                v28 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_attack_tag(v28, &attack_result->attack_tag);
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 96), _s, &__a);
                std::allocator<char>::~allocator(&__a);
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 160), _s, &__a);
                std::allocator<char>::~allocator(&__a);
                if ( std::operator!=<ActorAbility>(&attack_result->ability_ptr, 0LL) )
                {
                  v29 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&attack_result->ability_ptr);
                  ConfigRef = ActorAbility::getConfigRef(v29);
                  std::string::operator=(v4 + 96, &ConfigRef->ability_name);
                }
                if ( std::operator!=<ActorModifier>(&attack_result->modifier_ptr, 0LL) )
                {
                  v31 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&attack_result->modifier_ptr);
                  v32 = ActorModifier::getConfigRef(v31);
                  std::string::operator=(v4 + 160, &v32->modifier_name);
                }
                v33 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_ability_name(v33, (const std::string *)(v4 + 96));
                v34 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_modifier_name(
                  v34,
                  (const std::string *)(v4 + 160));
                v35 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&attack_result->target_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&attack_result->target_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_target_type(v35, attack_result->target_type);
                v36 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_anim_event_id(v36, &attack_result->anim_event_id);
                v37 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                if ( *(_BYTE *)(((unsigned __int64)attack_result >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)attack_result >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_client_damage(v37, attack_result->client_damage);
                v38 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_ori_server_damage(
                  v38,
                  attack_result->ori_server_damage);
                v39 = std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&hurt_ctx->final_damage >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)hurt_ctx + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hurt_ctx->final_damage >> 3)
                                                                          + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_final_server_damage(v39, hurt_ctx->final_damage);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                player = this->player_;
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyAvatarAttackAvatarDamage,void>(
                  &v46,
                  (const std::shared_ptr<proto_log::AntiCheatBodyAvatarAttackAvatarDamage> *)(v4 + 64));
                Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_AVATAR_ATTACK_AVATAR_DAMAGE, &v46);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v46);
                std::string::~string((void *)(v4 + 160));
                std::string::~string((void *)(v4 + 96));
                std::shared_ptr<proto_log::AntiCheatBodyAvatarAttackAvatarDamage>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyAvatarAttackAvatarDamage> *const)(v4 + 64));
              }
            }
          }
        }
      }
    }
  }
  if ( v47 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
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
};

// Line 296: range 000000001311B3FA-000000001311C479
int32_t __cdecl FightHandler::processEvtBeingHitInfo(
        FightHandler *const this,
        proto::EvtBeingHitInfo *info,
        Scene *scene,
        std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *hurt_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  float v7; // xmm0_4
  const proto::HitCollision *v8; // rax
  const proto::Vector *v9; // rax
  const proto::HitCollision *v10; // rax
  const proto::Vector *v11; // rax
  const proto::Vector *v12; // rax
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  const proto::HitCollision *v16; // rax
  float v17; // xmm0_4
  const proto::HitCollision *v18; // rax
  float v19; // xmm0_4
  char v20; // al
  int32_t v21; // r14d
  std::shared_ptr<Creature> *v22; // r14
  std::shared_ptr<Creature> *v23; // r15
  std::shared_ptr<Creature> *v24; // r8
  HurtContext *v25; // r9
  unsigned int v26; // eax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  Player *v32; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v35; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  bool v39; // r14
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  uint32_t Uid; // edx
  uint32_t v45; // edx
  Creature *v46; // rax
  proto::ChangHpReason v47; // edx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v48; // r14
  unsigned __int64 v49; // rax
  void (__fastcall **v50)(common::milog::MiLogStream *, unsigned __int64); // rdx
  Player *player; // r14
  common::milog::MiLogStream *v52; // r14
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  Creature *v59; // r14
  Creature *v60; // rax
  common::milog::MiLogStream *v61; // r14
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r15
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  int32_t result; // eax
  HurtContext *v67; // [rsp+0h] [rbp-8B0h]
  uint32_t scenea; // [rsp+18h] [rbp-898h]
  unsigned int val; // [rsp+38h] [rbp-878h] BYREF
  uint32_t attacker_entity_id; // [rsp+3Ch] [rbp-874h]
  proto::AttackResult *proto_attack_result; // [rsp+40h] [rbp-870h]
  std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *__t; // [rsp+48h] [rbp-868h]
  std::tuple_element<0,std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> >::type *attacker_ptr; // [rsp+50h] [rbp-860h]
  std::tuple_element<0,std::tuple<std::shared_ptr<Creature>,HurtContext> >::type *defenser_ptr; // [rsp+58h] [rbp-858h]
  std::tuple_element<0,std::tuple<HurtContext> >::type *hurt_ctx; // [rsp+60h] [rbp-850h]
  Vector3 v77; // [rsp+6Ch] [rbp-844h] BYREF
  Vector3 v78; // [rsp+78h] [rbp-838h] BYREF
  Vector3 v79; // [rsp+84h] [rbp-82Ch] BYREF
  std::shared_ptr<Creature> p_attacker_ptr; // [rsp+90h] [rbp-820h] BYREF
  common::milog::MiLogStream v81; // [rsp+A0h] [rbp-810h] BYREF
  common::milog::MiLogStream v82; // [rsp+C0h] [rbp-7F0h] BYREF
  HurtContext v83; // [rsp+E0h] [rbp-7D0h] BYREF
  std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> __args_0; // [rsp+440h] [rbp-470h] BYREF
  char v85[240]; // [rsp+7C0h] [rbp-F0h] BYREF

  scenea = (unsigned int)scene;
  v4 = (unsigned __int64)v85;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 22 defenser_entity_id:311 64 16 22 proto_attacker_ptr:312 96 16 22 proto_defenser_ptr:313"
                        " 128 16 22 defense_player_ptr:324 160 16 7 oss:346";
  *(_QWORD *)(v4 + 16) = FightHandler::processEvtBeingHitInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  proto_attack_result = proto::EvtBeingHitInfo::mutable_attack_result(info);
  v7 = proto::AttackResult::damage(proto_attack_result);
  if ( !std::isfinite(v7) )
    goto LABEL_13;
  v8 = proto::AttackResult::hit_collision(proto_attack_result);
  v9 = proto::HitCollision::hit_point(v8);
  Vector3::Vector3(&v77, v9);
  if ( !Vector3::isValid(&v77) )
    goto LABEL_13;
  v10 = proto::AttackResult::hit_collision(proto_attack_result);
  v11 = proto::HitCollision::hit_dir(v10);
  Vector3::Vector3(&v78, v11);
  if ( !Vector3::isValid(&v78) )
    goto LABEL_13;
  v12 = proto::AttackResult::resolved_dir(proto_attack_result);
  Vector3::Vector3(&v79, v12);
  if ( !Vector3::isValid(&v79)
    || (v13 = proto::AttackResult::element_amplify_rate(proto_attack_result), !std::isfinite(v13))
    || (v14 = proto::AttackResult::damage_shield(proto_attack_result), !std::isfinite(v14))
    || (v15 = proto::AttackResult::endure_delta(proto_attack_result), !std::isfinite(v15))
    || (v16 = proto::AttackResult::hit_collision(proto_attack_result),
        v17 = proto::HitCollision::attackee_hit_force_angle(v16),
        !std::isfinite(v17))
    || (v18 = proto::AttackResult::hit_collision(proto_attack_result),
        v19 = proto::HitCollision::attackee_hit_entity_angle(v18),
        !std::isfinite(v19)) )
  {
LABEL_13:
    v20 = 1;
  }
  else
  {
    v20 = 0;
  }
  if ( v20 )
  {
    v21 = 201;
  }
  else
  {
    attacker_entity_id = proto::AttackResult::attacker_id(proto_attack_result);
    *(_DWORD *)(v4 + 48) = proto::AttackResult::defense_id(proto_attack_result);
    Scene::findEntityWithDead<Creature>((const Scene *const)(v4 + 64), scenea);
    Scene::findEntity<Creature>((const Scene *const)(v4 + 96), scenea);
    v22 = std::move<std::shared_ptr<Creature> &>((std::shared_ptr<Creature> *)(v4 + 64));
    v23 = std::move<std::shared_ptr<Creature> &>((std::shared_ptr<Creature> *)(v4 + 96));
    memset(&v83, 0, 0x348uLL);
    AttackResult::AttackResult(&v83.attack_result);
    v83.reason = CHANGE_HP_NONE;
    v83.final_damage = 0.0;
    v83.frame_num = 0;
    std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext,true>(
      &__args_0,
      v22,
      v23,
      (std::shared_ptr<Creature> *)&v83,
      v24,
      v25,
      v67);
    std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::emplace_back<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>(
      hurt_vec,
      &__args_0,
      &__args_0);
    std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>::~tuple(&__args_0);
    HurtContext::~HurtContext(&v83);
    __t = std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::back(hurt_vec);
    attacker_ptr = std::get<0ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
    defenser_ptr = std::get<1ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
    hurt_ctx = std::get<2ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
    if ( std::operator==<Creature>(defenser_ptr, 0LL) )
    {
      v26 = std::numeric_limits<unsigned int>::max();
      proto::AttackResult::set_critical_rand(proto_attack_result, v26);
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "processEvtBeingHitInfo",
        320);
      v27 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v82, (const char (*)[33])off_24F39C00);
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 48));
      v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" uid=");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
      common::milog::MiLogStream::~MiLogStream(&v82);
      v21 = 0;
    }
    else
    {
      v30 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
      if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
        v30 = __asan_report_load8();
      v31 = *(_QWORD *)v30 + 152LL;
      if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
        v30 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v31)(v4 + 128, v30);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 128), 0LL)
        && (v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128)),
            SceneComp = Player::getSceneComp(v32),
            PlayerSceneComp::isInTransfer(SceneComp)) )
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "processEvtBeingHitInfo",
          327);
        v35 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v82,
                (const char (*)[37])"player is in transfer, ignore damage");
        v36 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
        v37 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v35, v36);
        v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        operator<<(v37, v38);
        common::milog::MiLogStream::~MiLogStream(&v82);
        proto::AttackResult::clear_damage(proto_attack_result);
        v21 = 0;
      }
      else
      {
        std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v4 + 160), defenser_ptr);
        std::shared_ptr<Creature>::shared_ptr(&p_attacker_ptr, attacker_ptr);
        v39 = AttackResult::fromClient(
                &hurt_ctx->attack_result,
                &p_attacker_ptr,
                (CreaturePtr *)(v4 + 160),
                proto_attack_result) != 0;
        std::shared_ptr<Creature>::~shared_ptr(&p_attacker_ptr);
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 160));
        if ( v39 )
        {
          common::milog::MiLogStream::create(
            &v82,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/fight_handler.cpp",
            "processEvtBeingHitInfo",
            334);
          v40 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  &v82,
                  (const char (*)[17])"fromClient fails");
          v41 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
          v42 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v40, v41);
          v43 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v42, (const char (*)[7])", uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
          common::milog::MiLogStream::~MiLogStream(&v82);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&hurt_ctx->attack_result.from_player_uid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&hurt_ctx->attack_result.from_player_uid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&hurt_ctx->attack_result.from_player_uid);
        }
        hurt_ctx->attack_result.from_player_uid = Uid;
        v45 = proto::EvtBeingHitInfo::frame_num(info);
        if ( *(_BYTE *)(((unsigned __int64)&hurt_ctx->frame_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&hurt_ctx->frame_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&hurt_ctx->frame_num);
        }
        hurt_ctx->frame_num = v45;
        if ( std::operator!=<Creature>(attacker_ptr, 0LL) )
        {
          v46 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)attacker_ptr);
          v47 = Creature::getAttackerChangeHpReason(v46);
          if ( *(_BYTE *)(((unsigned __int64)&hurt_ctx->reason >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&hurt_ctx->reason >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&hurt_ctx->reason);
          }
          hurt_ctx->reason = v47;
          common::milog::MiLogStream::create(
            &v81,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/handler/fight_handler.cpp",
            "processEvtBeingHitInfo",
            356);
          v52 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  &v81,
                  (const char (*)[17])"EvtBeingHitInfo:");
          google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v82, info);
          v53 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v52, (const std::string *)&v82);
          v54 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v53, (const char (*)[11])" attacker:");
          v55 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)attacker_ptr);
          v56 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v54, v55);
          v57 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v56, (const char (*)[11])" defenser:");
          v58 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
          common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v57, v58);
          std::string::~string(&v82);
          common::milog::MiLogStream::~MiLogStream(&v81);
          v59 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
          v60 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)attacker_ptr);
          if ( Creature::onBeingHit(v59, v60, hurt_ctx) )
          {
            common::milog::MiLogStream::create(
              &v81,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/fight_handler.cpp",
              "processEvtBeingHitInfo",
              360);
            v61 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    &v81,
                    (const char (*)[15])"[DAMAGE_PROTO]");
            google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v82, proto_attack_result);
            v62 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v61, (const std::string *)&v82);
            v63 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v62,
                    (const char (*)[14])" level_diff::");
            v64 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)attacker_ptr);
            LODWORD(v61) = Creature::getLevel(v64);
            v65 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
            val = (_DWORD)v61 - Creature::getLevel(v65);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, &val);
            std::string::~string(&v82);
            common::milog::MiLogStream::~MiLogStream(&v81);
          }
          FightHandler::reportAvatarAttackAvatarAntiCheatLog(this, hurt_ctx, attacker_ptr, defenser_ptr);
          if ( *(_BYTE *)(((unsigned __int64)&hurt_ctx->final_damage >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)hurt_ctx + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hurt_ctx->final_damage >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( hurt_ctx->final_damage == 0.0 )
          {
            proto::AttackResult::clear_damage(proto_attack_result);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&hurt_ctx->final_damage >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)hurt_ctx + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hurt_ctx->final_damage >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto::AttackResult::set_damage(proto_attack_result, hurt_ctx->final_damage);
            if ( *(char *)(((unsigned __int64)&hurt_ctx->attack_result.is_critical >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&hurt_ctx->attack_result.is_critical);
            proto::AttackResult::set_is_crit(proto_attack_result, hurt_ctx->attack_result.is_critical);
          }
          v21 = 0;
        }
        else
        {
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 160));
          v48 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                  (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 160),
                  asc_24F39D80);
          v49 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
          if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
            v49 = __asan_report_load8();
          v50 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v49;
          if ( *(_BYTE *)((*(_QWORD *)v49 >> 3) + 0x7FFF8000LL) )
            v49 = __asan_report_load8();
          (*v50)(&v82, v49);
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v48, (const std::string *)&v82);
          std::string::~string(&v82);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          player = this->player_;
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
            (std::string *)&v82,
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 160));
          Player::notifyGMServerLog(player, SERVER_LOG_NONE, LOG_LEVEL_INFO_0, (const std::string *)&v82);
          std::string::~string(&v82);
          common::milog::MiLogStream::create(
            &v81,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/fight_handler.cpp",
            "processEvtBeingHitInfo",
            349);
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
            (std::string *)&v82,
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 160));
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v81, (const std::string *)&v82);
          std::string::~string(&v82);
          common::milog::MiLogStream::~MiLogStream(&v81);
          proto::AttackResult::clear_damage(proto_attack_result);
          v21 = 0;
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 160));
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 96));
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 64));
  }
  result = v21;
  if ( v85 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 378: range 000000001311C47A-000000001311CB1F
int32_t __cdecl FightHandler::onEvtBeingHitNotify(FightHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  Scene *v6; // r14
  proto::EvtBeingHitInfo *v7; // rax
  proto::ForwardType v8; // r15d
  Player *player; // r14
  Scene *v10; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::tuple_element<0,std::tuple<HurtContext> >::type *); // r15
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rsi
  int32_t result; // eax
  std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::iterator __for_end; // [rsp+28h] [rbp-178h] BYREF
  proto::EvtBeingHitNotify *notify; // [rsp+30h] [rbp-170h]
  std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *__for_range; // [rsp+38h] [rbp-168h]
  std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *__t; // [rsp+40h] [rbp-160h]
  std::tuple_element<0,std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> >::type *attacker_ptr; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,std::tuple<std::shared_ptr<Creature>,HurtContext> >::type *defenser_ptr; // [rsp+50h] [rbp-150h]
  std::tuple_element<0,std::tuple<HurtContext> >::type *hurt_ctx; // [rsp+58h] [rbp-148h]
  std::shared_ptr<Creature> p_creature_ptr; // [rsp+60h] [rbp-140h] BYREF
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+70h] [rbp-130h] BYREF
  common::milog::MiLogStream v27; // [rsp+80h] [rbp-120h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+A0h] [rbp-100h] BYREF
  char v29[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 notify_ptr:379 64 16 13 scene_ptr:381 96 24 12 hurt_vec:387";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtBeingHitNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::EvtBeingHitNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtBeingHitNotify>((const std::shared_ptr<proto::EvtBeingHitNotify> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtBeingHitNotify",
      379);
    common::milog::MiLogStream::operator()(&v27, off_24F39FC0);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtBeingHitNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EvtBeingHitNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtBeingHitNotify",
        384);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v27, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v27);
      v5 = -1;
    }
    else
    {
      std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::vector((std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *const)(v2 + 96));
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v7 = proto::EvtBeingHitNotify::mutable_being_hit_info(notify);
      FightHandler::processEvtBeingHitInfo(
        this,
        v7,
        v6,
        (std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *)(v2 + 96));
      memset(&peer_id_set, 0, sizeof(peer_id_set));
      std::set<unsigned int>::set(&peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtBeingHitNotify,void>(
        &p_msg_ptr,
        (const std::shared_ptr<proto::EvtBeingHitNotify> *)(v2 + 32));
      v8 = proto::EvtBeingHitNotify::forward_type(notify);
      std::shared_ptr<Creature>::shared_ptr(&p_creature_ptr, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FightHandler::forwardSendPacket(v10, player, &p_creature_ptr, v8, &p_msg_ptr, 0, &peer_id_set);
      std::shared_ptr<Creature>::~shared_ptr(&p_creature_ptr);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
      std::set<unsigned int>::~set(&peer_id_set);
      __for_range = (std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *)(v2 + 96);
      __for_begin._M_current = std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::begin((std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *const)(v2 + 96))._M_current;
      __for_end._M_current = std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::end((std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *const)(v2 + 96))._M_current;
      while ( __gnu_cxx::operator!=<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>>(
                &__for_begin,
                &__for_end) )
      {
        __t = __gnu_cxx::__normal_iterator<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>>::operator*(&__for_begin);
        attacker_ptr = std::get<0ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
        defenser_ptr = std::get<1ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
        hurt_ctx = std::get<2ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
        if ( std::operator!=<Creature>(defenser_ptr, 0LL) && std::operator!=<Creature>(attacker_ptr, 0LL) )
        {
          v12 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v13 = *(_QWORD *)v12->baseclass_0 + 336LL;
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          v14 = *(void (__fastcall **)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::tuple_element<0,std::tuple<HurtContext> >::type *))v13;
          v15 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)attacker_ptr);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v14(v12, this->player_, v15, hurt_ctx);
        }
        __gnu_cxx::__normal_iterator<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>>::operator++(&__for_begin);
      }
      v5 = 0;
      std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::~vector((std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtBeingHitNotify>::~shared_ptr((std::shared_ptr<proto::EvtBeingHitNotify> *const)(v2 + 32));
  result = v5;
  if ( v29 == (char *)v2 )
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

// Line 402: range 000000001311CB20-000000001311D2D5
int32_t __cdecl FightHandler::onEvtBeingHitsCombineNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rcx
  Scene *v8; // r14
  proto::EvtBeingHitInfo *v9; // rax
  Player *player; // r14
  Scene *v11; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  void (__fastcall *v15)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::tuple_element<0,std::tuple<HurtContext> >::type *); // r15
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rsi
  int32_t result; // eax
  int val; // [rsp+28h] [rbp-188h] BYREF
  int32_t idx; // [rsp+2Ch] [rbp-184h]
  std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::iterator __for_begin; // [rsp+30h] [rbp-180h] BYREF
  std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::iterator __for_end; // [rsp+38h] [rbp-178h] BYREF
  proto::EvtBeingHitsCombineNotify *notify; // [rsp+40h] [rbp-170h]
  std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *__for_range; // [rsp+48h] [rbp-168h]
  std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *__t; // [rsp+50h] [rbp-160h]
  std::tuple_element<0,std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> >::type *attacker_ptr; // [rsp+58h] [rbp-158h]
  std::tuple_element<0,std::tuple<std::shared_ptr<Creature>,HurtContext> >::type *defenser_ptr; // [rsp+60h] [rbp-150h]
  std::tuple_element<0,std::tuple<HurtContext> >::type *hurt_ctx; // [rsp+68h] [rbp-148h]
  std::shared_ptr<Creature> p_creature_ptr; // [rsp+70h] [rbp-140h] BYREF
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+80h] [rbp-130h] BYREF
  common::milog::MiLogStream v30; // [rsp+90h] [rbp-120h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+B0h] [rbp-100h] BYREF
  char v32[208]; // [rsp+E0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 notify_ptr:403 64 16 13 scene_ptr:405 96 24 12 hurt_vec:411";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtBeingHitsCombineNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::EvtBeingHitsCombineNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtBeingHitsCombineNotify>(
         (const std::shared_ptr<proto::EvtBeingHitsCombineNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtBeingHitsCombineNotify",
      403);
    common::milog::MiLogStream::operator()(&v30, off_24F3A0A0);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtBeingHitsCombineNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EvtBeingHitsCombineNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fight_handler.cpp",
        "onEvtBeingHitsCombineNotify",
        408);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v30, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v30);
      v5 = -1;
    }
    else
    {
      std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::vector((std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *const)(v2 + 96));
      for ( idx = 0; idx < proto::EvtBeingHitsCombineNotify::evt_being_hit_info_list_size(notify); ++idx )
      {
        if ( idx > 49 )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/fight_handler.cpp",
            "onEvtBeingHitsCombineNotify",
            416);
          v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                 &v30,
                 (const char (*)[35])"evt_being_hit_info_list too large:");
          val = proto::EvtBeingHitsCombineNotify::evt_being_hit_info_list_size(notify);
          v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v7, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v30);
          break;
        }
        v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v9 = proto::EvtBeingHitsCombineNotify::mutable_evt_being_hit_info_list(notify, idx);
        FightHandler::processEvtBeingHitInfo(
          this,
          v9,
          v8,
          (std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *)(v2 + 96));
      }
      memset(&peer_id_set, 0, sizeof(peer_id_set));
      std::set<unsigned int>::set(&peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtBeingHitsCombineNotify,void>(
        &p_msg_ptr,
        (const std::shared_ptr<proto::EvtBeingHitsCombineNotify> *)(v2 + 32));
      std::shared_ptr<Creature>::shared_ptr(&p_creature_ptr, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FightHandler::forwardSendPacket(v11, player, &p_creature_ptr, FORWARD_TO_ALL, &p_msg_ptr, 0, &peer_id_set);
      std::shared_ptr<Creature>::~shared_ptr(&p_creature_ptr);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
      std::set<unsigned int>::~set(&peer_id_set);
      __for_range = (std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *)(v2 + 96);
      __for_begin._M_current = std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::begin((std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *const)(v2 + 96))._M_current;
      __for_end._M_current = std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>>(
                &__for_begin,
                &__for_end) )
      {
        __t = __gnu_cxx::__normal_iterator<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>>::operator*(&__for_begin);
        attacker_ptr = std::get<0ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
        defenser_ptr = std::get<1ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
        hurt_ctx = std::get<2ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
        if ( std::operator!=<Creature>(defenser_ptr, 0LL) && std::operator!=<Creature>(attacker_ptr, 0LL) )
        {
          v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v14 = *(_QWORD *)v13->baseclass_0 + 336LL;
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8();
          v15 = *(void (__fastcall **)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::tuple_element<0,std::tuple<HurtContext> >::type *))v14;
          v16 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)attacker_ptr);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v15(v13, this->player_, v16, hurt_ctx);
        }
        __gnu_cxx::__normal_iterator<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>>::operator++(&__for_begin);
      }
      v5 = 0;
      std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::~vector((std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtBeingHitsCombineNotify>::~shared_ptr((std::shared_ptr<proto::EvtBeingHitsCombineNotify> *const)(v2 + 32));
  result = v5;
  if ( v32 == (char *)v2 )
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

// Line 435: range 000000001311D2D6-000000001311D81B
int32_t __cdecl FightHandler::onEvtAnimatorParameterNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const proto::EvtAnimatorParameterInfo *v6; // rax
  const proto::EvtAnimatorParameterInfo *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  Entity *v10; // rax
  EntityAnimatorComp *AnimatorComp; // r14
  const proto::EvtAnimatorParameterInfo *v12; // rax
  const proto::AnimatorParameterValueInfo *v13; // r15
  const proto::EvtAnimatorParameterInfo *v14; // rax
  int32_t v15; // eax
  proto::ForwardType v16; // r15d
  Player *player; // r14
  Scene *v18; // rax
  int32_t result; // eax
  google::protobuf::uint32 entity_id; // [rsp+24h] [rbp-10Ch]
  std::__shared_ptr_access<const proto::EvtAnimatorParameterNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-108h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-100h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+50h] [rbp-E0h] BYREF
  char v24[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 notify_ptr:436 64 16 13 scene_ptr:437 96 16 14 entity_ptr:446";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtAnimatorParameterNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtAnimatorParameterNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtAnimatorParameterNotify const>(
         (const std::shared_ptr<const proto::EvtAnimatorParameterNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtAnimatorParameterNotify",
      436);
    common::milog::MiLogStream::operator()(&v22, off_24F3A200);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtAnimatorParameterNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtAnimatorParameterNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtAnimatorParameterNotify",
        440);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v22, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v5 = -1;
    }
    else
    {
      v6 = proto::EvtAnimatorParameterNotify::animator_param_info(notify);
      entity_id = proto::EvtAnimatorParameterInfo::entity_id(v6);
      v7 = proto::EvtAnimatorParameterNotify::animator_param_info(notify);
      if ( proto::EvtAnimatorParameterInfo::is_server_cache(v7) )
      {
        v8 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        v9 = *(_QWORD *)v8 + 120LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v9)(v2 + 96, v8, entity_id);
        if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 96), 0LL) )
        {
          v10 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          AnimatorComp = Entity::getAnimatorComp(v10);
          v12 = proto::EvtAnimatorParameterNotify::animator_param_info(notify);
          v13 = proto::EvtAnimatorParameterInfo::value(v12);
          v14 = proto::EvtAnimatorParameterNotify::animator_param_info(notify);
          v15 = proto::EvtAnimatorParameterInfo::name_id(v14);
          EntityAnimatorComp::cacheAnimatorParam(AnimatorComp, v15, v13);
        }
        std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 96));
      }
      memset(&peer_id_set, 0, sizeof(peer_id_set));
      std::set<unsigned int>::set(&peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtAnimatorParameterNotify const,void>(
        (std::shared_ptr<const google::protobuf::Message> *const)(v2 + 96),
        (const std::shared_ptr<const proto::EvtAnimatorParameterNotify> *)(v2 + 32));
      v16 = proto::EvtAnimatorParameterNotify::forward_type(notify);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FightHandler::forwardSendPacket(
        v18,
        player,
        entity_id,
        v16,
        (common::minet::ConstMessagePtr *)(v2 + 96),
        0,
        &peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v2 + 96));
      std::set<unsigned int>::~set(&peer_id_set);
      v5 = 0;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtAnimatorParameterNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtAnimatorParameterNotify> *const)(v2 + 32));
  result = v5;
  if ( v24 == (char *)v2 )
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

// Line 457: range 000000001311D81C-000000001311DFA9
int32_t __cdecl FightHandler::onEvtDoSkillSuccNotify(FightHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const proto::Vector *v6; // rax
  uint32_t v7; // r14d
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v9; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 *v13; // r8
  unsigned int *v14; // r9
  PlayerEventComp *EventComp; // r14
  proto::ForwardType v16; // r15d
  Player *player; // r14
  Scene *v18; // rax
  int32_t result; // eax
  char v20[12]; // [rsp+2Ch] [rbp-174h] BYREF
  const proto::EvtDoSkillSuccNotify *notify; // [rsp+38h] [rbp-168h]
  Vector3 v22; // [rsp+44h] [rbp-15Ch] BYREF
  std::shared_ptr<SkillEvent> __r; // [rsp+50h] [rbp-150h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-140h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+80h] [rbp-120h] BYREF
  char v26[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 skill_id:469 64 16 14 notify_ptr:458 96 16 13 scene_ptr:463 128 16 14 caster_ptr:470 1"
                        "60 16 13 event_ptr:480";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtDoSkillSuccNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtDoSkillSuccNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::EvtDoSkillSuccNotify const>(
         (const std::shared_ptr<const proto::EvtDoSkillSuccNotify> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtDoSkillSuccNotify",
      458);
    common::milog::MiLogStream::operator()(&v24, off_24F3A320);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtDoSkillSuccNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtDoSkillSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v6 = proto::EvtDoSkillSuccNotify::forward(notify);
    Vector3::Vector3(&v22, v6);
    if ( !Vector3::isValid(&v22) )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtDoSkillSuccNotify",
          466);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v24);
        v5 = -1;
      }
      else
      {
        *(_DWORD *)(v2 + 48) = proto::EvtDoSkillSuccNotify::skill_id(notify);
        v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        proto::EvtDoSkillSuccNotify::caster_id(notify);
        Scene::findEntity<Avatar>((const Scene *const)(v2 + 128), v7);
        if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 128), 0LL) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          AvatarComp = Player::getAvatarComp(this->player_);
          if ( !PlayerAvatarComp::getIsAllowUseSkill(AvatarComp) )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              0x13u,
              "./src/handler/fight_handler.cpp",
              "onEvtDoSkillSuccNotify",
              475);
            v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                   &v24,
                   (const char (*)[34])"IsAllowUseSkill is false, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v9, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v24);
          }
          v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( Avatar::getFirstSkillId(v10) != *(_DWORD *)(v2 + 48) )
          {
            v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            *(_QWORD *)&v20[4] = Avatar::getGuid(v11);
            v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            *(_DWORD *)v20 = Entity::getEntityId((const Entity *const)v12);
            common::tools::perf::make_shared<SkillEvent,unsigned int,unsigned long,unsigned int &>(
              (unsigned int *)&__r,
              (unsigned __int64 *)v20,
              (unsigned int *)&v20[4],
              (unsigned int *)(v2 + 48),
              v13,
              v14);
            std::shared_ptr<BaseEvent>::shared_ptr<SkillEvent,void>((std::shared_ptr<BaseEvent> *const)(v2 + 160), &__r);
            std::shared_ptr<SkillEvent>::~shared_ptr(&__r);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EventComp = Player::getEventComp(this->player_);
            std::shared_ptr<BaseEvent>::shared_ptr(
              (std::shared_ptr<BaseEvent> *const)&__r,
              (const std::shared_ptr<BaseEvent> *)(v2 + 160));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 160));
          }
        }
        memset(&peer_id_set, 0, sizeof(peer_id_set));
        std::set<unsigned int>::set(&peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtDoSkillSuccNotify const,void>(
          (std::shared_ptr<const google::protobuf::Message> *const)&__r,
          (const std::shared_ptr<const proto::EvtDoSkillSuccNotify> *)(v2 + 64));
        v16 = proto::EvtDoSkillSuccNotify::forward_type(notify);
        std::shared_ptr<Creature>::shared_ptr<Avatar,void>(
          (std::shared_ptr<Creature> *const)(v2 + 160),
          (const std::shared_ptr<Avatar> *)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        FightHandler::forwardSendPacket(
          v18,
          player,
          (CreaturePtr *)(v2 + 160),
          v16,
          (common::minet::ConstMessagePtr *)&__r,
          0,
          &peer_id_set);
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 160));
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
        std::set<unsigned int>::~set(&peer_id_set);
        v5 = 0;
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
    }
  }
  std::shared_ptr<proto::EvtDoSkillSuccNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtDoSkillSuccNotify> *const)(v2 + 64));
  result = v5;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 489: range 000000001311DFAA-000000001311F510
int32_t __cdecl FightHandler::onEvtCreateGadgetNotify(FightHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const proto::Vector *inited; // rax
  const proto::Vector *v7; // rax
  char v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // r15
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  const proto::Vector *v17; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  const proto::Vector *v23; // rax
  const proto::Vector *v24; // rax
  uint32_t v25; // eax
  Creature *v26; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  Scene *v29; // rax
  PlayerSceneComp *SceneComp; // rax
  uint32_t v31; // r14d
  Scene *v32; // rax
  uint32_t v33; // r14d
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rdx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  int level_option; // eax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // r14
  unsigned __int64 v43; // rax
  void (__fastcall *v44)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64); // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  PlayerSceneComp *v46; // r14
  Entity *v47; // rax
  PlayerSceneComp *v48; // r14
  Entity *v49; // rax
  proto::ForwardType v50; // r15d
  Player *player; // r14
  Scene *v52; // rax
  int32_t result; // eax
  uint32_t modify_level; // [rsp+20h] [rbp-310h]
  uint32_t owner_entity_id; // [rsp+24h] [rbp-30Ch]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-308h]
  std::__shared_ptr_access<const proto::EvtCreateGadgetNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+30h] [rbp-300h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+38h] [rbp-2F8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-2F0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-2E8h]
  std::shared_ptr<Creature> __r; // [rsp+50h] [rbp-2E0h] BYREF
  std::shared_ptr<Entity> __a; // [rsp+60h] [rbp-2D0h] BYREF
  common::milog::MiLogStream v63; // [rsp+70h] [rbp-2C0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+90h] [rbp-2A0h] BYREF
  char v65[624]; // [rsp+C0h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 4 13 entity_id:502 48 4 20 target_entity_id:565 64 12 7 pos:515 96 12 11 context:622 128 1"
                        "6 14 notify_ptr:490 160 16 13 scene_ptr:496 192 16 21 config_gadget_ptr:577 224 16 21 client_gad"
                        "get_ptr:616 256 16 13 scene_ptr:587 288 24 10 notify:554 352 152 23 client_gadget_param:528";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtCreateGadgetNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtCreateGadgetNotify>((common::minet::Packet *const)(v2 + 128));
  if ( std::operator==<proto::EvtCreateGadgetNotify const>(
         (const std::shared_ptr<const proto::EvtCreateGadgetNotify> *)(v2 + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtCreateGadgetNotify",
      490);
    common::milog::MiLogStream::operator()(&v63, off_24F3A520);
    common::milog::MiLogStream::~MiLogStream(&v63);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtCreateGadgetNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtCreateGadgetNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    inited = proto::EvtCreateGadgetNotify::init_pos(notify);
    Vector3::Vector3((Vector3 *const)(v2 + 64), inited);
    if ( !Vector3::isValid((const Vector3 *const)(v2 + 64))
      || (v7 = proto::EvtCreateGadgetNotify::init_euler_angles(notify),
          Vector3::Vector3((Vector3 *const)(v2 + 96), v7),
          !Vector3::isValid((const Vector3 *const)(v2 + 96))) )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 160));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtCreateGadgetNotify",
          499);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v63, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v63);
        v5 = -1;
      }
      else
      {
        *(_DWORD *)(v2 + 32) = proto::EvtCreateGadgetNotify::entity_id(notify);
        v9 = 0;
        if ( !*(_DWORD *)(v2 + 32) )
          goto LABEL_23;
        v10 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v11 = *(_QWORD *)v10 + 120LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        (*(void (__fastcall **)(std::shared_ptr<Entity> *, unsigned __int64, _QWORD))v11)(
          &__a,
          v10,
          *(unsigned int *)(v2 + 32));
        v9 = 1;
        if ( std::operator!=<Entity>(&__a, 0LL) )
          v12 = 1;
        else
LABEL_23:
          v12 = 0;
        if ( v9 )
          std::shared_ptr<Entity>::~shared_ptr(&__a);
        if ( v12 )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/fight_handler.cpp",
            "onEvtCreateGadgetNotify",
            505);
          v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v63, (const char (*)[12])"entity_id: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])off_24F3A5C0);
          common::milog::MiLogStream::~MiLogStream(&v63);
          v5 = -1;
        }
        else if ( *(_DWORD *)(v2 + 32) >> 29 )
        {
          v17 = proto::EvtCreateGadgetNotify::init_pos(notify);
          Vector3::Vector3((Vector3 *const)(v2 + 64), v17);
          v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          scene_script_config_ptr = Scene::getScriptConfig(v18);
          if ( scene_script_config_ptr )
          {
            if ( !SceneScriptConfig::isPosValid(scene_script_config_ptr, (const Vector3 *)(v2 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/fight_handler.cpp",
                "onEvtCreateGadgetNotify",
                524);
              v21 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v63, (const char (*)[5])"pos:");
              v22 = operator<<(v21, (const Vector3 *)(v2 + 64));
              common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" invalid!");
              common::milog::MiLogStream::~MiLogStream(&v63);
              v5 = -1;
            }
            else
            {
              ClientGadgetParam::ClientGadgetParam((ClientGadgetParam *const)(v2 + 352));
              *(_DWORD *)(v2 + 356) = *(_DWORD *)(v2 + 32);
              *(_DWORD *)(v2 + 352) = proto::EvtCreateGadgetNotify::config_id(notify);
              v23 = proto::EvtCreateGadgetNotify::init_pos(notify);
              Vector3::Vector3((Vector3 *const)(v2 + 96), v23);
              *(_QWORD *)(v2 + 360) = *(_QWORD *)(v2 + 96);
              *(_DWORD *)(v2 + 368) = *(_DWORD *)(v2 + 104);
              v24 = proto::EvtCreateGadgetNotify::init_euler_angles(notify);
              Vector3::Vector3((Vector3 *const)(v2 + 96), v24);
              *(_QWORD *)(v2 + 372) = *(_QWORD *)(v2 + 96);
              *(_DWORD *)(v2 + 380) = *(_DWORD *)(v2 + 104);
              *(_DWORD *)(v2 + 384) = proto::EvtCreateGadgetNotify::camp_id(notify);
              *(_DWORD *)(v2 + 388) = proto::EvtCreateGadgetNotify::camp_type(notify);
              owner_entity_id = proto::EvtCreateGadgetNotify::owner_entity_id(notify);
              if ( owner_entity_id )
              {
                v25 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                Scene::findEntityWithDead<Creature>((const Scene *const)&__r, v25);
                std::shared_ptr<Creature>::operator=((std::shared_ptr<Creature> *const)(v2 + 392), &__r);
                std::shared_ptr<Creature>::~shared_ptr(&__r);
                if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 392), 0LL) )
                {
                  if ( proto::EvtCreateGadgetNotify::is_true_life_time_by_owner(notify) )
                  {
                    v26 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 392));
                    Creature::setIsLocalGadgetOwner(v26, 1);
                  }
                  if ( proto::EvtCreateGadgetNotify::sight_group_with_owner(notify) )
                  {
                    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 392));
                    Entity::getOrCreateSightGroup((Entity *const)(v2 + 256));
                    std::shared_ptr<EntitySightGroup>::operator=(
                      (std::shared_ptr<EntitySightGroup> *const)(v2 + 448),
                      (std::shared_ptr<EntitySightGroup> *)(v2 + 256));
                    std::shared_ptr<EntitySightGroup>::~shared_ptr((std::shared_ptr<EntitySightGroup> *const)(v2 + 256));
                  }
                }
                if ( proto::EvtCreateGadgetNotify::is_true_life_time_by_owner(notify) )
                {
                  if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 392))
                    || (v27 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 392)),
                        Creature::getLifeState(v27) != LIFE_ALIVE) )
                  {
                    proto::EvtLocalGadgetOwnerLeaveSceneNotify::EvtLocalGadgetOwnerLeaveSceneNotify((proto::EvtLocalGadgetOwnerLeaveSceneNotify *const)(v2 + 288));
                    proto::EvtLocalGadgetOwnerLeaveSceneNotify::set_entity_id(
                      (proto::EvtLocalGadgetOwnerLeaveSceneNotify *const)(v2 + 288),
                      owner_entity_id);
                    v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                    Scene::notifyAllPlayer<proto::EvtLocalGadgetOwnerLeaveSceneNotify>(
                      v29,
                      (proto::EvtLocalGadgetOwnerLeaveSceneNotify *)(v2 + 288),
                      0);
                    proto::EvtLocalGadgetOwnerLeaveSceneNotify::~EvtLocalGadgetOwnerLeaveSceneNotify((proto::EvtLocalGadgetOwnerLeaveSceneNotify *const)(v2 + 288));
                  }
                }
              }
              *(_DWORD *)(v2 + 408) = proto::EvtCreateGadgetNotify::target_entity_id(notify);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              SceneComp = Player::getSceneComp(this->player_);
              *(_DWORD *)(v2 + 412) = PlayerSceneComp::getPeerId(SceneComp);
              *(_BYTE *)(v2 + 416) = proto::EvtCreateGadgetNotify::is_async_load(notify);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              *(_DWORD *)(v2 + 420) = Player::getUid(this->player_);
              *(_DWORD *)(v2 + 424) = proto::EvtCreateGadgetNotify::room_id(notify);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              *(_DWORD *)(v2 + 428) = Player::getUid(this->player_);
              __for_range = proto::EvtCreateGadgetNotify::target_entity_id_list(notify);
              __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
              __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
              while ( __for_begin != __for_end )
              {
                if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v2 + 48) = *__for_begin;
                std::vector<unsigned int>::emplace_back<unsigned int &>(
                  (std::vector<unsigned int> *const)(v2 + 472),
                  (unsigned int *)(v2 + 48),
                  (unsigned int *)(v2 + 472));
                ++__for_begin;
              }
              if ( proto::EvtCreateGadgetNotify::prop_owner_entity_id(notify) )
              {
                v31 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                proto::EvtCreateGadgetNotify::prop_owner_entity_id(notify);
                Scene::findEntity<Creature>((const Scene *const)&__a, v31);
                std::shared_ptr<Creature>::operator=(
                  (std::shared_ptr<Creature> *const)(v2 + 432),
                  (std::shared_ptr<Creature> *)&__a);
                std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&__a);
              }
              if ( !*(_DWORD *)(v2 + 356) )
              {
                v32 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                *(_DWORD *)(v2 + 356) = Scene::genNewEntityId(v32, PROT_ENTITY_GADGET);
              }
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&__a);
              v33 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__a)
                  + 93080;
              proto::EvtCreateGadgetNotify::config_id(notify);
              JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)(v2 + 192), v33);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__a);
              if ( std::operator!=<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v2 + 192), 0LL) )
              {
                v34 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                if ( *(_BYTE *)(((unsigned __int64)&v34->combat.property.is_json_loaded >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v34 - 46) & 7) >= *(_BYTE *)(((unsigned __int64)&v34->combat.property.is_json_loaded >> 3)
                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load1(&v34->combat.property.is_json_loaded);
                }
                if ( v34->combat.property.is_json_loaded )
                {
                  v35 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                  if ( *(_BYTE *)(((unsigned __int64)&v35->combat.property.level >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v35->combat.property.level >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  modify_level = v35->combat.property.level;
                  v36 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                  if ( *(_BYTE *)(((unsigned __int64)&v36->combat.property.level_option >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)v36 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v36->combat.property.level_option >> 3)
                                                                       + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  level_option = v36->combat.property.level_option;
                  if ( level_option == 3 )
                  {
                    if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 392), 0LL) )
                    {
                      v39 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 392));
                      modify_level = Creature::getLevel(v39);
                    }
                  }
                  else if ( level_option <= 3 )
                  {
                    if ( level_option == 1 )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      Player::getDungeonComp(this->player_);
                      PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 256));
                      if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 256)) )
                      {
                        std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                        toThisPtr<Scene>((Scene *)&__a);
                        modify_level = AbilityComp::getDungeonReviseLevel((ScenePtr *)&__a);
                        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&__a);
                      }
                      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 256));
                    }
                    else if ( level_option == 2 )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      BasicComp = Player::getBasicComp(this->player_);
                      modify_level = PlayerBasicComp::getWorldLevel(BasicComp);
                    }
                  }
                  *(_DWORD *)(v2 + 464) = modify_level;
                }
                v40 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                if ( *(_BYTE *)(((unsigned __int64)&v40->correct_owner >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v40 - 117) & 7) >= *(_BYTE *)(((unsigned __int64)&v40->correct_owner >> 3)
                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load1(&v40->correct_owner);
                }
                *(_BYTE *)(v2 + 496) = v40->correct_owner;
              }
              *(_BYTE *)(v2 + 468) = proto::EvtCreateGadgetNotify::is_peer_id_from_player(notify);
              EntityMgr::createClientGadget((const ClientGadgetParam *)(v2 + 224));
              if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 224), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v63,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/handler/fight_handler.cpp",
                  "onEvtCreateGadgetNotify",
                  619);
                v41 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        &v63,
                        (const char (*)[38])"createClientGadget fails, monster_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  (const unsigned int *)(v2 + 352));
                common::milog::MiLogStream::~MiLogStream(&v63);
                v5 = -1;
              }
              else
              {
                VisionContext::VisionContext((VisionContext *const)(v2 + 96), VISION_MEET);
                *(_DWORD *)(v2 + 104) = *(_DWORD *)(v2 + 420);
                v42 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v43 = *(_QWORD *)v42->baseclass_0 + 56LL;
                if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
                  v43 = __asan_report_load8();
                v44 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v43;
                v45 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                v44(v42, v45, v2 + 96);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v46 = Player::getSceneComp(this->player_);
                v47 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                PlayerSceneComp::addDisconnectDestroyEntity(v46, v47);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v48 = Player::getSceneComp(this->player_);
                v49 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                PlayerSceneComp::addLeaveSceneDestroyEntity(v48, v49);
                memset(&peer_id_set, 0, sizeof(peer_id_set));
                std::set<unsigned int>::set(&peer_id_set);
                std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtCreateGadgetNotify const,void>(
                  (std::shared_ptr<const google::protobuf::Message> *const)&__a,
                  (const std::shared_ptr<const proto::EvtCreateGadgetNotify> *)(v2 + 128));
                v50 = proto::EvtCreateGadgetNotify::forward_type(notify);
                std::shared_ptr<Creature>::shared_ptr<Gadget,void>(
                  (std::shared_ptr<Creature> *const)(v2 + 256),
                  (const std::shared_ptr<Gadget> *)(v2 + 224));
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                player = this->player_;
                v52 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                FightHandler::forwardSendPacket(
                  v52,
                  player,
                  (CreaturePtr *)(v2 + 256),
                  v50,
                  (common::minet::ConstMessagePtr *)&__a,
                  0,
                  &peer_id_set);
                std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 256));
                std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__a);
                std::set<unsigned int>::~set(&peer_id_set);
                v5 = 0;
              }
              std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 224));
              std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 192));
              ClientGadgetParam::~ClientGadgetParam((ClientGadgetParam *const)(v2 + 352));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/fight_handler.cpp",
              "onEvtCreateGadgetNotify",
              519);
            v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    &v63,
                    (const char (*)[22])"getScriptConfig fails");
            v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v19, v20);
            common::milog::MiLogStream::~MiLogStream(&v63);
            v5 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/fight_handler.cpp",
            "onEvtCreateGadgetNotify",
            510);
          v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v63, (const char (*)[12])"entity_id: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v16, (const char (*)[18])off_24F3A600);
          common::milog::MiLogStream::~MiLogStream(&v63);
          v5 = -1;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 160));
    }
  }
  std::shared_ptr<proto::EvtCreateGadgetNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtCreateGadgetNotify> *const)(v2 + 128));
  result = v5;
  if ( v65 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
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
  }
  return result;
};

// Line 632: range 000000001311F512-000000001311FBE2
int32_t __cdecl FightHandler::onEvtDestroyGadgetNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  PlayerSceneComp *SceneComp; // r14
  Entity *v9; // rax
  PlayerSceneComp *v10; // r14
  Entity *v11; // rax
  Scene *v12; // r14
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  uint32_t v15; // r15d
  Player *player; // r14
  Scene *v17; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-174h]
  std::__shared_ptr_access<const proto::EvtDestroyGadgetNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-158h]
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+30h] [rbp-150h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-140h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+60h] [rbp-120h] BYREF
  char v24[240]; // [rsp+90h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 13 entity_id:643 64 12 11 context:640 96 16 14 notify_ptr:633 128 16 13 scene_ptr:634 160"
                        " 16 14 entity_ptr:644";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtDestroyGadgetNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtDestroyGadgetNotify>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::EvtDestroyGadgetNotify const>(
         (const std::shared_ptr<const proto::EvtDestroyGadgetNotify> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtDestroyGadgetNotify",
      633);
    common::milog::MiLogStream::operator()(&v22, off_24F3A7E0);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtDestroyGadgetNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtDestroyGadgetNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 128));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtDestroyGadgetNotify",
        637);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v22, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v5 = -1;
    }
    else
    {
      VisionContext::VisionContext((VisionContext *const)(v2 + 64), VISION_MISS);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 72) = Player::getUid(this->player_);
      *(_DWORD *)(v2 + 48) = proto::EvtDestroyGadgetNotify::entity_id(notify);
      v6 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      v7 = *(_QWORD *)v6 + 120LL;
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v7)(v2 + 160, v6, *(unsigned int *)(v2 + 48));
      if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 160), 0LL) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        v9 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        PlayerSceneComp::removeDisconnectDestroyEntity(SceneComp, v9);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v10 = Player::getSceneComp(this->player_);
        v11 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        PlayerSceneComp::removeLeaveSceneDestroyEntity(v10, v11);
        v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v13 = proto::EvtDestroyGadgetNotify::entity_id(notify);
        Scene::delEntity(v12, v13, (const VisionContext *)(v2 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtDestroyGadgetNotify",
          653);
        v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v22, (const char (*)[39])off_24F3A840);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      memset(&peer_id_set, 0, sizeof(peer_id_set));
      std::set<unsigned int>::set(&peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtDestroyGadgetNotify const,void>(
        &p_msg_ptr,
        (const std::shared_ptr<const proto::EvtDestroyGadgetNotify> *)(v2 + 96));
      type = proto::EvtDestroyGadgetNotify::forward_type(notify);
      v15 = proto::EvtDestroyGadgetNotify::entity_id(notify);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      FightHandler::forwardSendPacket(v17, player, v15, type, &p_msg_ptr, 0, &peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
      std::set<unsigned int>::~set(&peer_id_set);
      v5 = 0;
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 160));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
  }
  std::shared_ptr<proto::EvtDestroyGadgetNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtDestroyGadgetNotify> *const)(v2 + 96));
  result = v5;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 661: range 000000001311FBE4-00000000131203F9
int32_t __cdecl FightHandler::onEvtDestroyServerGadgetNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  bool *p_can_remove_by_client; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  unsigned __int64 v22; // rax
  void (__fastcall *v23)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  int32_t result; // eax
  std::__shared_ptr_access<const proto::EvtDestroyServerGadgetNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-148h]
  VisionContext v26; // [rsp+34h] [rbp-13Ch] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-130h] BYREF
  char v28[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 13 entity_id:669 64 16 14 notify_ptr:662 96 16 13 scene_ptr:663 128 16 14 entity_ptr:670 "
                        "160 16 14 gadget_ptr:676 192 16 21 config_gadget_ptr:682";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtDestroyServerGadgetNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtDestroyServerGadgetNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::EvtDestroyServerGadgetNotify const>(
         (const std::shared_ptr<const proto::EvtDestroyServerGadgetNotify> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtDestroyServerGadgetNotify",
      662);
    common::milog::MiLogStream::operator()(&v27, off_24F3A980);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtDestroyServerGadgetNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtDestroyServerGadgetNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtDestroyServerGadgetNotify",
        666);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v27, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v27);
      v5 = -1;
    }
    else
    {
      *(_DWORD *)(v2 + 48) = proto::EvtDestroyServerGadgetNotify::entity_id(notify);
      v6 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      v7 = *(_QWORD *)v6 + 120LL;
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v7)(v2 + 128, v6, *(unsigned int *)(v2 + 48));
      if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v2 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtDestroyServerGadgetNotify",
          673);
        v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v27, (const char (*)[32])off_24F3A9E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v5 = -1;
      }
      else
      {
        std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v2 + 160));
        if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/fight_handler.cpp",
            "onEvtDestroyServerGadgetNotify",
            679);
          v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v27, (const char (*)[8])"entity ");
          v10 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          v11 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v9, v10);
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])off_24F3AA60);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v5 = -1;
        }
        else
        {
          std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          Gadget::getJsonConfig((const Gadget *const)(v2 + 192));
          if ( std::operator==<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v2 + 192), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/fight_handler.cpp",
              "onEvtDestroyServerGadgetNotify",
              685);
            v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v27,
                    (const char (*)[29])"getJsonConfig fails. gadget ");
            v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v12, v13);
            common::milog::MiLogStream::~MiLogStream(&v27);
            v5 = -1;
          }
          else
          {
            v14 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            p_can_remove_by_client = &v14->can_remove_by_client;
            if ( *(_BYTE *)(((unsigned __int64)p_can_remove_by_client >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_can_remove_by_client & 7) >= *(_BYTE *)(((unsigned __int64)p_can_remove_by_client >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load1(p_can_remove_by_client);
            }
            if ( !v14->can_remove_by_client )
            {
              common::milog::MiLogStream::create(
                &v27,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/fight_handler.cpp",
                "onEvtDestroyServerGadgetNotify",
                690);
              v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v27, (const char (*)[8])"gadget ");
              v17 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              v18 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v16, v17);
              common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v18,
                (const char (*)[26])" can not remove by client");
              common::milog::MiLogStream::~MiLogStream(&v27);
              v5 = -1;
            }
            else
            {
              v19 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              if ( Creature::getLifeState(v19) == LIFE_ALIVE )
              {
                v20 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                Creature::subCurHpToZero(v20, CHANGE_HP_SUB_KILL_SERVER_GADGET, 1);
              }
              v21 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v22 = *(_QWORD *)v21->baseclass_0 + 128LL;
              if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                v22 = __asan_report_load8();
              v23 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v22;
              VisionContext::VisionContext(&v26, VISION_DIE);
              v23(v21, &v26);
              v5 = 0;
            }
          }
          std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 192));
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 160));
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 128));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  }
  std::shared_ptr<proto::EvtDestroyServerGadgetNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtDestroyServerGadgetNotify> *const)(v2 + 64));
  result = v5;
  if ( v28 == (char *)v2 )
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

// Line 702: range 00000000131203FA-000000001312081A
int32_t __cdecl FightHandler::onEvtFaceToEntityNotify(FightHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  uint32_t v6; // r15d
  Player *player; // r14
  Scene *v8; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-114h]
  std::__shared_ptr_access<const proto::EvtFaceToEntityNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-E0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+60h] [rbp-C0h] BYREF
  char v15[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:703 64 16 13 scene_ptr:704";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtFaceToEntityNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtFaceToEntityNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtFaceToEntityNotify const>(
         (const std::shared_ptr<const proto::EvtFaceToEntityNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtFaceToEntityNotify",
      703);
    common::milog::MiLogStream::operator()(&v13, off_24F3ABE0);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtFaceToEntityNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtFaceToEntityNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtFaceToEntityNotify",
        707);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v5 = -1;
    }
    else
    {
      memset(&peer_id_set, 0, sizeof(peer_id_set));
      std::set<unsigned int>::set(&peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtFaceToEntityNotify const,void>(
        &p_msg_ptr,
        (const std::shared_ptr<const proto::EvtFaceToEntityNotify> *)(v2 + 32));
      type = proto::EvtFaceToEntityNotify::forward_type(notify);
      v6 = proto::EvtFaceToEntityNotify::entity_id(notify);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FightHandler::forwardSendPacket(v8, player, v6, type, &p_msg_ptr, 0, &peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
      std::set<unsigned int>::~set(&peer_id_set);
      v5 = 0;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtFaceToEntityNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtFaceToEntityNotify> *const)(v2 + 32));
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 715: range 000000001312081C-0000000013120C91
int32_t __cdecl FightHandler::onEvtFaceToDirNotify(FightHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const proto::EvtFaceToDirInfo *v6; // rax
  const proto::Vector *v7; // rax
  const proto::EvtFaceToDirInfo *v8; // rax
  uint32_t v9; // r15d
  Player *player; // r14
  Scene *v11; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-124h]
  std::__shared_ptr_access<const proto::EvtFaceToDirNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-108h]
  Vector3 v15; // [rsp+34h] [rbp-FCh] BYREF
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-E0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+70h] [rbp-C0h] BYREF
  char v19[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:716 64 16 13 scene_ptr:721";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtFaceToDirNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtFaceToDirNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtFaceToDirNotify const>(
         (const std::shared_ptr<const proto::EvtFaceToDirNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtFaceToDirNotify",
      716);
    common::milog::MiLogStream::operator()(&v17, off_24F3ACC0);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtFaceToDirNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtFaceToDirNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::EvtFaceToDirNotify::evt_face_to_dir_info(notify);
    v7 = proto::EvtFaceToDirInfo::face_dir(v6);
    Vector3::Vector3(&v15, v7);
    if ( !Vector3::isValid(&v15) )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtFaceToDirNotify",
          724);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v17, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v17);
        v5 = -1;
      }
      else
      {
        memset(&peer_id_set, 0, sizeof(peer_id_set));
        std::set<unsigned int>::set(&peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtFaceToDirNotify const,void>(
          &p_msg_ptr,
          (const std::shared_ptr<const proto::EvtFaceToDirNotify> *)(v2 + 32));
        type = proto::EvtFaceToDirNotify::forward_type(notify);
        v8 = proto::EvtFaceToDirNotify::evt_face_to_dir_info(notify);
        v9 = proto::EvtFaceToDirInfo::entity_id(v8);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        FightHandler::forwardSendPacket(v11, player, v9, type, &p_msg_ptr, 0, &peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
        std::set<unsigned int>::~set(&peer_id_set);
        v5 = 0;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::EvtFaceToDirNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtFaceToDirNotify> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 732: range 0000000013120C92-000000001312108C
int32_t __cdecl FightHandler::onEvtCostStaminaNotify(FightHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::EvtCostStaminaNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 cost_stamina:740 64 16 14 notify_ptr:733 96 16 14 avatar_ptr:734";
  *(_QWORD *)(v3 + 16) = FightHandler::onEvtCostStaminaNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtCostStaminaNotify>((common::minet::Packet *const)(v3 + 64));
  if ( std::operator==<proto::EvtCostStaminaNotify const>(
         (const std::shared_ptr<const proto::EvtCostStaminaNotify> *)(v3 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtCostStaminaNotify",
      733);
    common::milog::MiLogStream::operator()(&v13, off_24F3ADA0);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtCostStaminaNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtCostStaminaNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getCurAvatar((Player *const)(v3 + 96));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtCostStaminaNotify",
        737);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v13,
             (const char (*)[25])"getCurAvatar fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
      v6 = 0;
    }
    else
    {
      *(float *)v2.m128i_i32 = proto::EvtCostStaminaNotify::cost_stamina(notify);
      *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(v2);
      if ( *(float *)(v3 + 48) < 0.0 )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/fight_handler.cpp",
          "onEvtCostStaminaNotify",
          743);
        v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               &v13,
               (const char (*)[22])"invalid cost_stamina:");
        v9 = common::milog::MiLogStream::operator<<<float,(float *)0>(v8, (const float *)(v3 + 48));
        v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream(&v13);
      }
      v6 = 0;
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
  }
  std::shared_ptr<proto::EvtCostStaminaNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtCostStaminaNotify> *const)(v3 + 64));
  result = v6;
  if ( v14 == (char *)v3 )
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

// Line 752: range 000000001312108E-000000001312155F
int32_t __cdecl FightHandler::onEvtSetAttackTargetNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  uint32_t v6; // r14d
  const proto::EvtSetAttackTargetInfo *v7; // rax
  Monster *v8; // r14
  const proto::EvtSetAttackTargetInfo *v9; // rax
  const proto::EvtSetAttackTargetInfo *v10; // rax
  uint32_t v11; // r15d
  Player *player; // r14
  Scene *v13; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-134h]
  std::__shared_ptr_access<const proto::EvtSetAttackTargetNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-118h]
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+30h] [rbp-110h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-100h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+60h] [rbp-E0h] BYREF
  char v20[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 notify_ptr:753 64 16 13 scene_ptr:754 96 16 15 monster_ptr:760";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtSetAttackTargetNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtSetAttackTargetNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtSetAttackTargetNotify const>(
         (const std::shared_ptr<const proto::EvtSetAttackTargetNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtSetAttackTargetNotify",
      753);
    common::milog::MiLogStream::operator()(&v18, off_24F3AEC0);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtSetAttackTargetNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtSetAttackTargetNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtSetAttackTargetNotify",
        757);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v18, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v18);
      v5 = -1;
    }
    else
    {
      v6 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v7 = proto::EvtSetAttackTargetNotify::evt_set_attack_target_info(notify);
      proto::EvtSetAttackTargetInfo::entity_id(v7);
      Scene::findEntity<Monster>((const Scene *const)(v2 + 96), v6);
      if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v2 + 96), 0LL) )
      {
        v8 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v9 = proto::EvtSetAttackTargetNotify::evt_set_attack_target_info(notify);
        Monster::cacheAttackTargetInfo(v8, v9);
      }
      memset(&peer_id_set, 0, sizeof(peer_id_set));
      std::set<unsigned int>::set(&peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtSetAttackTargetNotify const,void>(
        &p_msg_ptr,
        (const std::shared_ptr<const proto::EvtSetAttackTargetNotify> *)(v2 + 32));
      type = proto::EvtSetAttackTargetNotify::forward_type(notify);
      v10 = proto::EvtSetAttackTargetNotify::evt_set_attack_target_info(notify);
      v11 = proto::EvtSetAttackTargetInfo::entity_id(v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FightHandler::forwardSendPacket(v13, player, v11, type, &p_msg_ptr, 0, &peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
      std::set<unsigned int>::~set(&peer_id_set);
      v5 = 0;
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtSetAttackTargetNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtSetAttackTargetNotify> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
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

// Line 770: range 0000000013121560-00000000131219D5
int32_t __cdecl FightHandler::onEvtAnimatorStateChangedNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const proto::EvtAnimatorStateChangedInfo *v6; // rax
  const proto::Vector *v7; // rax
  const proto::EvtAnimatorStateChangedInfo *v8; // rax
  uint32_t v9; // r15d
  Player *player; // r14
  Scene *v11; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-124h]
  std::__shared_ptr_access<const proto::EvtAnimatorStateChangedNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-108h]
  Vector3 v15; // [rsp+34h] [rbp-FCh] BYREF
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-E0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+70h] [rbp-C0h] BYREF
  char v19[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:771 64 16 13 scene_ptr:776";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtAnimatorStateChangedNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtAnimatorStateChangedNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtAnimatorStateChangedNotify const>(
         (const std::shared_ptr<const proto::EvtAnimatorStateChangedNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtAnimatorStateChangedNotify",
      771);
    common::milog::MiLogStream::operator()(&v17, off_24F3AFA0);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtAnimatorStateChangedNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtAnimatorStateChangedNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::EvtAnimatorStateChangedNotify::evt_animator_state_changed_info(notify);
    v7 = proto::EvtAnimatorStateChangedInfo::pos(v6);
    Vector3::Vector3(&v15, v7);
    if ( !Vector3::isValid(&v15) )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtAnimatorStateChangedNotify",
          779);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v17, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v17);
        v5 = -1;
      }
      else
      {
        memset(&peer_id_set, 0, sizeof(peer_id_set));
        std::set<unsigned int>::set(&peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtAnimatorStateChangedNotify const,void>(
          &p_msg_ptr,
          (const std::shared_ptr<const proto::EvtAnimatorStateChangedNotify> *)(v2 + 32));
        type = proto::EvtAnimatorStateChangedNotify::forward_type(notify);
        v8 = proto::EvtAnimatorStateChangedNotify::evt_animator_state_changed_info(notify);
        v9 = proto::EvtAnimatorStateChangedInfo::entity_id(v8);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        FightHandler::forwardSendPacket(v11, player, v9, type, &p_msg_ptr, 0, &peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
        std::set<unsigned int>::~set(&peer_id_set);
        v5 = 0;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::EvtAnimatorStateChangedNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtAnimatorStateChangedNotify> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 787: range 00000000131219D6-0000000013121F31
int32_t __cdecl FightHandler::onEvtRushMoveNotify(FightHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const proto::EvtRushMoveInfo *v6; // rax
  const proto::Vector *v7; // rax
  const proto::EvtRushMoveInfo *v8; // rax
  const proto::Vector *v9; // rax
  const proto::EvtRushMoveInfo *v10; // rax
  const proto::Vector *v11; // rax
  const proto::EvtRushMoveInfo *v12; // rax
  const proto::Vector *v13; // rax
  char v14; // al
  const proto::EvtRushMoveInfo *v15; // rax
  uint32_t v16; // r15d
  Player *player; // r14
  Scene *v18; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-144h]
  std::__shared_ptr_access<const proto::EvtRushMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-128h]
  Vector3 v22; // [rsp+30h] [rbp-120h] BYREF
  Vector3 v23; // [rsp+3Ch] [rbp-114h] BYREF
  Vector3 v24; // [rsp+48h] [rbp-108h] BYREF
  Vector3 v25; // [rsp+54h] [rbp-FCh] BYREF
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-E0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+90h] [rbp-C0h] BYREF
  char v29[144]; // [rsp+C0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:788 64 16 13 scene_ptr:796";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtRushMoveNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtRushMoveNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtRushMoveNotify const>(
         (const std::shared_ptr<const proto::EvtRushMoveNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtRushMoveNotify",
      788);
    common::milog::MiLogStream::operator()(&v27, off_24F3B080);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtRushMoveNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtRushMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::EvtRushMoveNotify::evt_rush_move_info(notify);
    v7 = proto::EvtRushMoveInfo::velocity(v6);
    Vector3::Vector3(&v22, v7);
    if ( !Vector3::isValid(&v22) )
      goto LABEL_10;
    v8 = proto::EvtRushMoveNotify::evt_rush_move_info(notify);
    v9 = proto::EvtRushMoveInfo::pos(v8);
    Vector3::Vector3(&v23, v9);
    if ( !Vector3::isValid(&v23)
      || (v10 = proto::EvtRushMoveNotify::evt_rush_move_info(notify),
          v11 = proto::EvtRushMoveInfo::rush_attack_target_pos(v10),
          Vector3::Vector3(&v24, v11),
          !Vector3::isValid(&v24))
      || (v12 = proto::EvtRushMoveNotify::evt_rush_move_info(notify),
          v13 = proto::EvtRushMoveInfo::rush_to_pos(v12),
          Vector3::Vector3(&v25, v13),
          !Vector3::isValid(&v25)) )
    {
LABEL_10:
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    if ( v14 )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtRushMoveNotify",
          799);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v27, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v27);
        v5 = -1;
      }
      else
      {
        memset(&peer_id_set, 0, sizeof(peer_id_set));
        std::set<unsigned int>::set(&peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtRushMoveNotify const,void>(
          &p_msg_ptr,
          (const std::shared_ptr<const proto::EvtRushMoveNotify> *)(v2 + 32));
        type = proto::EvtRushMoveNotify::forward_type(notify);
        v15 = proto::EvtRushMoveNotify::evt_rush_move_info(notify);
        v16 = proto::EvtRushMoveInfo::entity_id(v15);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        FightHandler::forwardSendPacket(v18, player, v16, type, &p_msg_ptr, 0, &peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
        std::set<unsigned int>::~set(&peer_id_set);
        v5 = 0;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::EvtRushMoveNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtRushMoveNotify> *const)(v2 + 32));
  result = v5;
  if ( v29 == (char *)v2 )
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

// Line 807: range 0000000013121F32-0000000013122438
int32_t __cdecl FightHandler::onEvtBulletHitNotify(FightHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const proto::Vector *v6; // rax
  const proto::Vector *v7; // rax
  uint32_t v9; // r15d
  Player *player; // r14
  Scene *v11; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-164h]
  std::set<unsigned int>::value_type __x; // [rsp+2Ch] [rbp-144h] BYREF
  const proto::EvtBulletHitNotify *notify; // [rsp+30h] [rbp-140h]
  Vector3 v16; // [rsp+38h] [rbp-138h] BYREF
  Vector3 v17; // [rsp+44h] [rbp-12Ch] BYREF
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-110h] BYREF
  char v20[240]; // [rsp+80h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 14 notify_ptr:808 80 16 13 scene_ptr:814 112 48 15 peer_id_set:820";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtBulletHitNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtBulletHitNotify>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::EvtBulletHitNotify const>(
         (const std::shared_ptr<const proto::EvtBulletHitNotify> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtBulletHitNotify",
      808);
    common::milog::MiLogStream::operator()(&v19, off_24F3B160);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtBulletHitNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtBulletHitNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    v6 = proto::EvtBulletHitNotify::hit_point(notify);
    Vector3::Vector3(&v16, v6);
    if ( !Vector3::isValid(&v16)
      || (v7 = proto::EvtBulletHitNotify::hit_normal(notify), Vector3::Vector3(&v17, v7), !Vector3::isValid(&v17)) )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtBulletHitNotify",
          817);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v19, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v5 = -1;
      }
      else
      {
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 112));
        if ( proto::EvtBulletHitNotify::forward_peer(notify) )
        {
          __x = proto::EvtBulletHitNotify::forward_peer(notify);
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 112), &__x);
        }
        std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtBulletHitNotify const,void>(
          &p_msg_ptr,
          (const std::shared_ptr<const proto::EvtBulletHitNotify> *)(v2 + 48));
        type = proto::EvtBulletHitNotify::forward_type(notify);
        v9 = proto::EvtBulletHitNotify::entity_id(notify);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        FightHandler::forwardSendPacket(
          v11,
          player,
          v9,
          type,
          &p_msg_ptr,
          0,
          (const std::set<unsigned int> *)(v2 + 112));
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
        v5 = 0;
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
    }
  }
  std::shared_ptr<proto::EvtBulletHitNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtBulletHitNotify> *const)(v2 + 48));
  result = v5;
  if ( v20 == (char *)v2 )
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

// Line 831: range 000000001312243A-000000001312289F
int32_t __cdecl FightHandler::onEvtBulletDeactiveNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const proto::Vector *v6; // rax
  uint32_t v7; // r15d
  Player *player; // r14
  Scene *v9; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-124h]
  std::__shared_ptr_access<const proto::EvtBulletDeactiveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-108h]
  Vector3 v13; // [rsp+34h] [rbp-FCh] BYREF
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-E0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+70h] [rbp-C0h] BYREF
  char v17[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:832 64 16 13 scene_ptr:837";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtBulletDeactiveNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtBulletDeactiveNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtBulletDeactiveNotify const>(
         (const std::shared_ptr<const proto::EvtBulletDeactiveNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtBulletDeactiveNotify",
      832);
    common::milog::MiLogStream::operator()(&v15, off_24F3B220);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtBulletDeactiveNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtBulletDeactiveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::EvtBulletDeactiveNotify::disappear_pos(notify);
    Vector3::Vector3(&v13, v6);
    if ( !Vector3::isValid(&v13) )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtBulletDeactiveNotify",
          840);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v15);
        v5 = -1;
      }
      else
      {
        memset(&peer_id_set, 0, sizeof(peer_id_set));
        std::set<unsigned int>::set(&peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtBulletDeactiveNotify const,void>(
          &p_msg_ptr,
          (const std::shared_ptr<const proto::EvtBulletDeactiveNotify> *)(v2 + 32));
        type = proto::EvtBulletDeactiveNotify::forward_type(notify);
        v7 = proto::EvtBulletDeactiveNotify::entity_id(notify);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        FightHandler::forwardSendPacket(v9, player, v7, type, &p_msg_ptr, 0, &peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
        std::set<unsigned int>::~set(&peer_id_set);
        v5 = 0;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::EvtBulletDeactiveNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtBulletDeactiveNotify> *const)(v2 + 32));
  result = v5;
  if ( v17 == (char *)v2 )
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

// Line 849: range 00000000131228A0-0000000013122CC0
int32_t __cdecl FightHandler::onEvtEntityStartDieEndNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  uint32_t v6; // r15d
  Player *player; // r14
  Scene *v8; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-114h]
  std::__shared_ptr_access<const proto::EvtEntityStartDieEndNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-E0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+60h] [rbp-C0h] BYREF
  char v15[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:850 64 16 13 scene_ptr:851";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtEntityStartDieEndNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtEntityStartDieEndNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtEntityStartDieEndNotify const>(
         (const std::shared_ptr<const proto::EvtEntityStartDieEndNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtEntityStartDieEndNotify",
      850);
    common::milog::MiLogStream::operator()(&v13, off_24F3B300);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtEntityStartDieEndNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtEntityStartDieEndNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtEntityStartDieEndNotify",
        854);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v5 = -1;
    }
    else
    {
      memset(&peer_id_set, 0, sizeof(peer_id_set));
      std::set<unsigned int>::set(&peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtEntityStartDieEndNotify const,void>(
        &p_msg_ptr,
        (const std::shared_ptr<const proto::EvtEntityStartDieEndNotify> *)(v2 + 32));
      type = proto::EvtEntityStartDieEndNotify::forward_type(notify);
      v6 = proto::EvtEntityStartDieEndNotify::entity_id(notify);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FightHandler::forwardSendPacket(v8, player, v6, type, &p_msg_ptr, 0, &peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
      std::set<unsigned int>::~set(&peer_id_set);
      v5 = 0;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtEntityStartDieEndNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtEntityStartDieEndNotify> *const)(v2 + 32));
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 863: range 0000000013122CC2-00000000131230E2
int32_t __cdecl FightHandler::onEvtBulletMoveNotify(FightHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  uint32_t v6; // r15d
  Player *player; // r14
  Scene *v8; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-114h]
  std::__shared_ptr_access<const proto::EvtBulletMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-E0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+60h] [rbp-C0h] BYREF
  char v15[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:864 64 16 13 scene_ptr:865";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtBulletMoveNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtBulletMoveNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtBulletMoveNotify const>(
         (const std::shared_ptr<const proto::EvtBulletMoveNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtBulletMoveNotify",
      864);
    common::milog::MiLogStream::operator()(&v13, off_24F3B3E0);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtBulletMoveNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtBulletMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtBulletMoveNotify",
        868);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v5 = -1;
    }
    else
    {
      memset(&peer_id_set, 0, sizeof(peer_id_set));
      std::set<unsigned int>::set(&peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtBulletMoveNotify const,void>(
        &p_msg_ptr,
        (const std::shared_ptr<const proto::EvtBulletMoveNotify> *)(v2 + 32));
      type = proto::EvtBulletMoveNotify::forward_type(notify);
      v6 = proto::EvtBulletMoveNotify::entity_id(notify);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FightHandler::forwardSendPacket(v8, player, v6, type, &p_msg_ptr, 0, &peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
      std::set<unsigned int>::~set(&peer_id_set);
      v5 = 0;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtBulletMoveNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtBulletMoveNotify> *const)(v2 + 32));
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 877: range 00000000131230E4-0000000013123549
int32_t __cdecl FightHandler::onEvtAvatarEnterFocusNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const proto::Vector *v6; // rax
  uint32_t v7; // r15d
  Player *player; // r14
  Scene *v9; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-124h]
  std::__shared_ptr_access<const proto::EvtAvatarEnterFocusNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-108h]
  Vector3 v13; // [rsp+34h] [rbp-FCh] BYREF
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-E0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+70h] [rbp-C0h] BYREF
  char v17[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:878 64 16 13 scene_ptr:883";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtAvatarEnterFocusNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtAvatarEnterFocusNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtAvatarEnterFocusNotify const>(
         (const std::shared_ptr<const proto::EvtAvatarEnterFocusNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtAvatarEnterFocusNotify",
      878);
    common::milog::MiLogStream::operator()(&v15, off_24F3B4A0);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtAvatarEnterFocusNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtAvatarEnterFocusNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::EvtAvatarEnterFocusNotify::focus_forward(notify);
    Vector3::Vector3(&v13, v6);
    if ( !Vector3::isValid(&v13) )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtAvatarEnterFocusNotify",
          886);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v15);
        v5 = -1;
      }
      else
      {
        memset(&peer_id_set, 0, sizeof(peer_id_set));
        std::set<unsigned int>::set(&peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtAvatarEnterFocusNotify const,void>(
          &p_msg_ptr,
          (const std::shared_ptr<const proto::EvtAvatarEnterFocusNotify> *)(v2 + 32));
        type = proto::EvtAvatarEnterFocusNotify::forward_type(notify);
        v7 = proto::EvtAvatarEnterFocusNotify::entity_id(notify);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        FightHandler::forwardSendPacket(v9, player, v7, type, &p_msg_ptr, 0, &peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
        std::set<unsigned int>::~set(&peer_id_set);
        v5 = 0;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::EvtAvatarEnterFocusNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtAvatarEnterFocusNotify> *const)(v2 + 32));
  result = v5;
  if ( v17 == (char *)v2 )
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

// Line 895: range 000000001312354A-00000000131239AF
int32_t __cdecl FightHandler::onEvtAvatarExitFocusNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const proto::Vector *v6; // rax
  uint32_t v7; // r15d
  Player *player; // r14
  Scene *v9; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-124h]
  std::__shared_ptr_access<const proto::EvtAvatarExitFocusNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-108h]
  Vector3 v13; // [rsp+34h] [rbp-FCh] BYREF
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-E0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+70h] [rbp-C0h] BYREF
  char v17[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:896 64 16 13 scene_ptr:901";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtAvatarExitFocusNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtAvatarExitFocusNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtAvatarExitFocusNotify const>(
         (const std::shared_ptr<const proto::EvtAvatarExitFocusNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtAvatarExitFocusNotify",
      896);
    common::milog::MiLogStream::operator()(&v15, off_24F3B580);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtAvatarExitFocusNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtAvatarExitFocusNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::EvtAvatarExitFocusNotify::finish_forward(notify);
    Vector3::Vector3(&v13, v6);
    if ( !Vector3::isValid(&v13) )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtAvatarExitFocusNotify",
          904);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v15);
        v5 = -1;
      }
      else
      {
        memset(&peer_id_set, 0, sizeof(peer_id_set));
        std::set<unsigned int>::set(&peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtAvatarExitFocusNotify const,void>(
          &p_msg_ptr,
          (const std::shared_ptr<const proto::EvtAvatarExitFocusNotify> *)(v2 + 32));
        type = proto::EvtAvatarExitFocusNotify::forward_type(notify);
        v7 = proto::EvtAvatarExitFocusNotify::entity_id(notify);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        FightHandler::forwardSendPacket(v9, player, v7, type, &p_msg_ptr, 0, &peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
        std::set<unsigned int>::~set(&peer_id_set);
        v5 = 0;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::EvtAvatarExitFocusNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtAvatarExitFocusNotify> *const)(v2 + 32));
  result = v5;
  if ( v17 == (char *)v2 )
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

// Line 913: range 00000000131239B0-0000000013123E15
int32_t __cdecl FightHandler::onEvtAvatarUpdateFocusNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const proto::Vector *v6; // rax
  uint32_t v7; // r15d
  Player *player; // r14
  Scene *v9; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-124h]
  std::__shared_ptr_access<const proto::EvtAvatarUpdateFocusNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-108h]
  Vector3 v13; // [rsp+34h] [rbp-FCh] BYREF
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-E0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+70h] [rbp-C0h] BYREF
  char v17[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:914 64 16 13 scene_ptr:919";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtAvatarUpdateFocusNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtAvatarUpdateFocusNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtAvatarUpdateFocusNotify const>(
         (const std::shared_ptr<const proto::EvtAvatarUpdateFocusNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtAvatarUpdateFocusNotify",
      914);
    common::milog::MiLogStream::operator()(&v15, off_24F3B660);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtAvatarUpdateFocusNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtAvatarUpdateFocusNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::EvtAvatarUpdateFocusNotify::focus_forward(notify);
    Vector3::Vector3(&v13, v6);
    if ( !Vector3::isValid(&v13) )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEvtAvatarUpdateFocusNotify",
          922);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v15);
        v5 = -1;
      }
      else
      {
        memset(&peer_id_set, 0, sizeof(peer_id_set));
        std::set<unsigned int>::set(&peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtAvatarUpdateFocusNotify const,void>(
          &p_msg_ptr,
          (const std::shared_ptr<const proto::EvtAvatarUpdateFocusNotify> *)(v2 + 32));
        type = proto::EvtAvatarUpdateFocusNotify::forward_type(notify);
        v7 = proto::EvtAvatarUpdateFocusNotify::entity_id(notify);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        FightHandler::forwardSendPacket(v9, player, v7, type, &p_msg_ptr, 0, &peer_id_set);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
        std::set<unsigned int>::~set(&peer_id_set);
        v5 = 0;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::EvtAvatarUpdateFocusNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtAvatarUpdateFocusNotify> *const)(v2 + 32));
  result = v5;
  if ( v17 == (char *)v2 )
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

// Line 931: range 0000000013123E16-0000000013124927
int32_t __cdecl FightHandler::onMonsterAlertChangeNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  Player *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  Player *v20; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  Monster *v24; // rax
  Monster *v25; // rax
  Player *v26; // rax
  PlayerAvatarComp *AvatarComp; // rax
  Player *v28; // rax
  PlayerAvatarComp *v29; // r15
  uint32_t v30; // r14d
  int32_t result; // eax
  std::string v32; // [rsp+0h] [rbp-1B0h]
  bool is_alert; // [rsp+27h] [rbp-189h]
  uint32_t combat_end_reason; // [rsp+28h] [rbp-188h]
  google::protobuf::uint32 avatar_entity_id; // [rsp+2Ch] [rbp-184h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-180h]
  std::__shared_ptr_access<const proto::MonsterAlertChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+38h] [rbp-178h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-170h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-168h]
  std::shared_ptr<Monster> p_monster_ptr; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v41; // [rsp+60h] [rbp-150h] BYREF
  char v42[304]; // [rsp+80h] [rbp-130h] BYREF

  *(&v32._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v32._anon_0._M_allocated_capacity = (std::string::size_type)p_packet_ptr;
  v2 = (unsigned __int64)v42;
  v32._M_string_length = (std::string::size_type)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 1 10 holder:954 48 4 21 monster_entity_id:955 64 16 14 notify_ptr:932 96 16 13 scene_ptr:93"
                        "3 128 16 14 avatar_ptr:941 160 16 13 owner_ptr:947 192 16 14 entity_ptr:957 224 16 15 monster_ptr:963";
  *(_QWORD *)(v2 + 16) = FightHandler::onMonsterAlertChangeNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MonsterAlertChangeNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::MonsterAlertChangeNotify const>(
         (const std::shared_ptr<const proto::MonsterAlertChangeNotify> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onMonsterAlertChangeNotify",
      932);
    common::milog::MiLogStream::operator()(&v41, off_24F3B7E0);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MonsterAlertChangeNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MonsterAlertChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onMonsterAlertChangeNotify",
        936);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v41, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v41);
      v5 = -1;
    }
    else
    {
      avatar_entity_id = proto::MonsterAlertChangeNotify::avatar_entity_id(notify);
      v6 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Scene::findEntity<Avatar>((const Scene *const)(v2 + 128), v6);
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onMonsterAlertChangeNotify",
          944);
        v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v41, (const char (*)[8])"avatar ");
        *(_DWORD *)(v2 + 48) = proto::MonsterAlertChangeNotify::avatar_entity_id(notify);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" not found");
        common::milog::MiLogStream::~MiLogStream(&v41);
        v5 = -1;
      }
      else
      {
        v9 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
        v10 = *(_QWORD *)v9 + 152LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v10)(v2 + 160, v9);
        if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/fight_handler.cpp",
            "onMonsterAlertChangeNotify",
            950);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v41, (const char (*)[18])"owner_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v41);
          v5 = -1;
        }
        else
        {
          v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          BasicComp = Player::getBasicComp(v11);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v41, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x51Fu, v32);
          std::string::~string(&v41);
          __for_range = proto::MonsterAlertChangeNotify::monster_entity_list(notify);
          __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
          __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
          while ( __for_begin != __for_end )
          {
            if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 48) = *__for_begin;
            v13 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
              v13 = __asan_report_load8();
            v14 = *(_QWORD *)v13 + 120LL;
            if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
              v13 = __asan_report_load8();
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v14)(
              v2 + 192,
              v13,
              *(unsigned int *)(v2 + 48));
            if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v2 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/handler/fight_handler.cpp",
                "onMonsterAlertChangeNotify",
                960);
              v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v41, (const char (*)[8])"entity ");
              v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v15,
                      (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" not found");
              common::milog::MiLogStream::~MiLogStream(&v41);
            }
            else
            {
              std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v2 + 224));
              if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 224)) )
              {
                common::milog::MiLogStream::create(
                  &v41,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/fight_handler.cpp",
                  "onMonsterAlertChangeNotify",
                  966);
                v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v41, (const char (*)[8])"entity ");
                v18 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                v19 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v17, v18);
                common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v19, (const char (*)[16])off_24F3B8C0);
                common::milog::MiLogStream::~MiLogStream(&v41);
              }
              else
              {
                if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v20 = *(Player **)(*(&v32._anon_0._M_allocated_capacity + 1) + 8);
                v21 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                if ( !Player::isAuthorityOf(v20, v21) )
                {
                  common::milog::MiLogStream::create(
                    &v41,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/handler/fight_handler.cpp",
                    "onMonsterAlertChangeNotify",
                    971);
                  v22 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                          &v41,
                          (const char (*)[26])"player not isAuthorityOf ");
                  v23 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                  common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v22, v23);
                  common::milog::MiLogStream::~MiLogStream(&v41);
                }
                else
                {
                  v24 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                  if ( !Monster::isLogIgnored(v24) )
                  {
                    is_alert = proto::MonsterAlertChangeNotify::is_alert(notify) != 0;
                    v25 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                    Monster::onMonsterAlertChange(v25, avatar_entity_id, is_alert);
                    combat_end_reason = 2;
                    v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                    AvatarComp = Player::getAvatarComp(v26);
                    if ( PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
                      combat_end_reason = 4;
                    v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                    v29 = Player::getAvatarComp(v28);
                    v30 = *(_DWORD *)(v2 + 48);
                    std::shared_ptr<Monster>::shared_ptr(&p_monster_ptr, (const std::shared_ptr<Monster> *)(v2 + 224));
                    PlayerAvatarComp::onMonsterAlertChange(v29, is_alert, &p_monster_ptr, v30, combat_end_reason, 0LL);
                    std::shared_ptr<Monster>::~shared_ptr(&p_monster_ptr);
                  }
                }
              }
              std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 224));
            }
            std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 192));
            ++__for_begin;
          }
          v5 = 0;
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  }
  std::shared_ptr<proto::MonsterAlertChangeNotify const>::~shared_ptr((std::shared_ptr<const proto::MonsterAlertChangeNotify> *const)(v2 + 64));
  result = v5;
  if ( v32._M_string_length == v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 991: range 0000000013124928-0000000013124E52
int32_t __cdecl FightHandler::onEvtEntityRenderersChangedNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r15
  google::protobuf::uint32 v9; // eax
  Entity *v10; // rax
  const proto::EntityRendererChangedInfo *v11; // rax
  uint32_t v12; // r15d
  Player *player; // r14
  Scene *v14; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-124h]
  std::__shared_ptr_access<const proto::EvtEntityRenderersChangedNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+20h] [rbp-110h]
  EntityAnimatorComp *animator_comp; // [rsp+28h] [rbp-108h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-100h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+50h] [rbp-E0h] BYREF
  char v21[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 notify_ptr:992 64 16 13 scene_ptr:993 96 16 15 entity_ptr:1001";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtEntityRenderersChangedNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtEntityRenderersChangedNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtEntityRenderersChangedNotify const>(
         (const std::shared_ptr<const proto::EvtEntityRenderersChangedNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtEntityRenderersChangedNotify",
      992);
    common::milog::MiLogStream::operator()(&v19, off_24F3BA00);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtEntityRenderersChangedNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtEntityRenderersChangedNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtEntityRenderersChangedNotify",
        996);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v19, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = -1;
    }
    else
    {
      if ( proto::EvtEntityRenderersChangedNotify::is_server_cache(notify) )
      {
        v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v7 = (unsigned __int64)(v6->_vptr_DescribalBase + 15);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        v8 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v7;
        v9 = proto::EvtEntityRenderersChangedNotify::entity_id(notify);
        v8(v2 + 96, v6, v9);
        if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 96), 0LL) )
        {
          v10 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          animator_comp = Entity::getAnimatorComp(v10);
          v11 = proto::EvtEntityRenderersChangedNotify::renderer_changed_info(notify);
          EntityAnimatorComp::cacheRendererChangedInfo(animator_comp, v11);
        }
        std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 96));
      }
      memset(&peer_id_set, 0, sizeof(peer_id_set));
      std::set<unsigned int>::set(&peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::EvtEntityRenderersChangedNotify const,void>(
        (std::shared_ptr<const google::protobuf::Message> *const)(v2 + 96),
        (const std::shared_ptr<const proto::EvtEntityRenderersChangedNotify> *)(v2 + 32));
      type = proto::EvtEntityRenderersChangedNotify::forward_type(notify);
      v12 = proto::EvtEntityRenderersChangedNotify::entity_id(notify);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FightHandler::forwardSendPacket(
        v14,
        player,
        v12,
        type,
        (common::minet::ConstMessagePtr *)(v2 + 96),
        0,
        &peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v2 + 96));
      std::set<unsigned int>::~set(&peer_id_set);
      v5 = 0;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtEntityRenderersChangedNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtEntityRenderersChangedNotify> *const)(v2 + 32));
  result = v5;
  if ( v21 == (char *)v2 )
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

// Line 1013: range 0000000013124E54-00000000131254D4
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl FightHandler::onAvatarEnterElementViewNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterElementView,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterElementView,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  _BOOL4 is_triggerd; // eax
  Player *v16; // r14
  int32_t result; // eax
  std::string p_packet_ptra; // [rsp+0h] [rbp-150h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-110h] BYREF
  char v22[240]; // [rsp+60h] [rbp-F0h] BYREF

  p_packet_ptra._M_string_length = (std::string::size_type)this;
  p_packet_ptra._M_dataplus._M_p = (std::string::pointer)p_packet_ptr;
  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 11 holder:1029 48 4 14 entity_id:1022 64 16 14 scene_ptr:1014 96 16 15 notify_ptr:1021 12"
                        "8 16 15 avatar_ptr:1023 160 16 25 element_view_log_ptr:1030";
  *(_QWORD *)(v2 + 16) = FightHandler::onAvatarEnterElementViewNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(*(Player *const *)(p_packet_ptra._M_string_length + 8));
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/fight_handler.cpp",
      "onAvatarEnterElementViewNotify",
      1017);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v21, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra._M_dataplus._M_p);
    common::minet::Packet::getConstProto<proto::AvatarEnterElementViewNotify>((common::minet::Packet *const)(v2 + 96));
    if ( std::operator==<proto::AvatarEnterElementViewNotify const>(
           (const std::shared_ptr<const proto::AvatarEnterElementViewNotify> *)(v2 + 96),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fight_handler.cpp",
        "onAvatarEnterElementViewNotify",
        1021);
      common::milog::MiLogStream::operator()(&v21, off_24F3BB40);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v5 = -1;
    }
    else
    {
      *(&p_packet_ptra._anon_0._M_allocated_capacity + 1) = (std::string::size_type)std::__shared_ptr_access<proto::AvatarEnterElementViewNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AvatarEnterElementViewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      *(_DWORD *)(v2 + 48) = proto::AvatarEnterElementViewNotify::avatar_entity_id(*((const proto::AvatarEnterElementViewNotify *const *)&p_packet_ptra._anon_0._M_allocated_capacity
                                                                                   + 1));
      v6 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Scene::findEntity<Avatar>((const Scene *const)(v2 + 128), v6);
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onAvatarEnterElementViewNotify",
          1026);
        v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               &v21,
               (const char (*)[29])"findEntity fails, entity_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        HIDWORD(p_packet_ptra._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(p_packet_ptra._M_string_length + 8));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v9,
          (const unsigned int *)&p_packet_ptra._anon_0._M_allocated_capacity + 1);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v5 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(*(Player *const *)(p_packet_ptra._M_string_length + 8));
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x5ECu, p_packet_ptra);
        std::string::~string(&v21);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyEnterElementView>();
        v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterElementView,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterElementView,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        AvatarId = Avatar::getAvatarId(v12);
        proto_log::PlayerLogBodyEnterElementView::set_avatar_id(v11, AvatarId);
        v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterElementView,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterElementView,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        is_triggerd = proto::AvatarEnterElementViewNotify::is_triggerd(*((const proto::AvatarEnterElementViewNotify *const *)&p_packet_ptra._anon_0._M_allocated_capacity
                                                                       + 1));
        proto_log::PlayerLogBodyEnterElementView::set_is_triggerd(v14, is_triggerd);
        if ( *(_BYTE *)(((p_packet_ptra._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v16 = *(Player **)(p_packet_ptra._M_string_length + 8);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEnterElementView,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyEnterElementView> *)(v2 + 160));
        Player::printStatLog(v16, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        v5 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyEnterElementView>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEnterElementView> *const)(v2 + 160));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
    }
    std::shared_ptr<proto::AvatarEnterElementViewNotify const>::~shared_ptr((std::shared_ptr<const proto::AvatarEnterElementViewNotify> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  result = v5;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 1038: range 00000000131254D6-00000000131258F6
int32_t __cdecl FightHandler::onAnimatorForceSetAirMoveNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  uint32_t v6; // r15d
  Player *player; // r14
  Scene *v8; // rax
  int32_t result; // eax
  proto::ForwardType type; // [rsp+Ch] [rbp-114h]
  std::__shared_ptr_access<const proto::AnimatorForceSetAirMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-E0h] BYREF
  std::set<unsigned int> peer_id_set; // [rsp+60h] [rbp-C0h] BYREF
  char v15[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 notify_ptr:1039 64 16 14 scene_ptr:1040";
  *(_QWORD *)(v2 + 16) = FightHandler::onAnimatorForceSetAirMoveNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AnimatorForceSetAirMoveNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AnimatorForceSetAirMoveNotify const>(
         (const std::shared_ptr<const proto::AnimatorForceSetAirMoveNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onAnimatorForceSetAirMoveNotify",
      1039);
    common::milog::MiLogStream::operator()(&v13, off_24F3BC60);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::AnimatorForceSetAirMoveNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AnimatorForceSetAirMoveNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fight_handler.cpp",
        "onAnimatorForceSetAirMoveNotify",
        1043);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v5 = -1;
    }
    else
    {
      memset(&peer_id_set, 0, sizeof(peer_id_set));
      std::set<unsigned int>::set(&peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::AnimatorForceSetAirMoveNotify const,void>(
        &p_msg_ptr,
        (const std::shared_ptr<const proto::AnimatorForceSetAirMoveNotify> *)(v2 + 32));
      type = proto::AnimatorForceSetAirMoveNotify::forward_type(notify);
      v6 = proto::AnimatorForceSetAirMoveNotify::entity_id(notify);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      FightHandler::forwardSendPacket(v8, player, v6, type, &p_msg_ptr, 0, &peer_id_set);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
      std::set<unsigned int>::~set(&peer_id_set);
      v5 = 0;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AnimatorForceSetAirMoveNotify const>::~shared_ptr((std::shared_ptr<const proto::AnimatorForceSetAirMoveNotify> *const)(v2 + 32));
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 1051: range 00000000131258F8-0000000013125DC4
int32_t __cdecl FightHandler::onEvtAiSyncSkillCdNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(unsigned __int64, unsigned __int64, _QWORD); // r8
  Entity *v10; // rax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::EvtAiSyncSkillCdNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+10h] [rbp-130h]
  const google::protobuf::Map<unsigned int,proto::AiSkillCdInfo> *__for_range; // [rsp+20h] [rbp-120h]
  google::protobuf::Map<unsigned int,proto::AiSkillCdInfo>::const_reference p_entity_id; // [rsp+28h] [rbp-118h]
  google::protobuf::Map<unsigned int,proto::AiSkillCdInfo>::const_iterator __for_begin; // [rsp+30h] [rbp-110h] BYREF
  google::protobuf::Map<unsigned int,proto::AiSkillCdInfo>::const_iterator __for_end; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v17; // [rsp+70h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 15 notify_ptr:1052 64 16 14 scene_ptr:1053 96 16 15 entity_ptr:1062";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtAiSyncSkillCdNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtAiSyncSkillCdNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtAiSyncSkillCdNotify const>(
         (const std::shared_ptr<const proto::EvtAiSyncSkillCdNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtAiSyncSkillCdNotify",
      1052);
    common::milog::MiLogStream::operator()(&v17, off_24F3BD60);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtAiSyncSkillCdNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtAiSyncSkillCdNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtAiSyncSkillCdNotify",
        1056);
      v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v17,
             (const char (*)[18])"scene_ptr is null");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v5 = -1;
    }
    else
    {
      __for_range = proto::EvtAiSyncSkillCdNotify::ai_cd_map(notify);
      google::protobuf::Map<unsigned int,proto::AiSkillCdInfo>::begin(&__for_begin, __for_range);
      google::protobuf::Map<unsigned int,proto::AiSkillCdInfo>::end(&__for_end, __for_range);
      while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
      {
        p_entity_id = google::protobuf::Map<unsigned int,proto::AiSkillCdInfo>::const_iterator::operator*(&__for_begin);
        v7 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        v8 = *(_QWORD *)v7 + 120LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        v9 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v8;
        if ( *(_BYTE *)(((unsigned __int64)p_entity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)p_entity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v9(v2 + 96, v7, p_entity_id->first);
        if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 96), 0LL) )
        {
          v10 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          Entity::updateAiSkillCdInfo(v10, &p_entity_id->second);
        }
        std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 96));
        google::protobuf::Map<unsigned int,proto::AiSkillCdInfo>::const_iterator::operator++(&__for_begin);
      }
      v5 = 0;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtAiSyncSkillCdNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtAiSyncSkillCdNotify> *const)(v2 + 32));
  result = v5;
  if ( v18 == (char *)v2 )
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

// Line 1072: range 0000000013126048-0000000013126554
int32_t __cdecl FightHandler::onEvtAvatarLockChairReq(
        FightHandler *const this,
        const proto::EvtAvatarLockChairReq *req,
        proto::EvtAvatarLockChairRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  proto::Vector *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t EntityId; // edx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  Avatar *v13; // rdx
  Avatar *v14; // rax
  int32_t result; // eax
  proto::Vector *from; // [rsp+10h] [rbp-100h]
  Scene *froma; // [rsp+10h] [rbp-100h]
  uint64_t chair_id; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 23 is_chair_available:1094 64 16 19 cur_avatar_ptr:1076 96 16 14 scene_ptr:1083";
  *(_QWORD *)(v3 + 16) = FightHandler::onEvtAvatarLockChairReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  chair_id = proto::EvtAvatarLockChairReq::chair_id(req);
  proto::EvtAvatarLockChairRsp::set_chair_id(rsp_0, chair_id);
  from = (proto::Vector *)proto::EvtAvatarLockChairReq::position(req);
  v6 = proto::EvtAvatarLockChairRsp::mutable_position(rsp_0);
  proto::Vector::operator=(v6, from);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getCurAvatar((Player *const)(v3 + 64));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtAvatarLockChairReq",
      1079);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v20, (const char (*)[19])"getCurAvatar fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    EntityId = Entity::getEntityId((const Entity *const)v9);
    proto::EvtAvatarLockChairRsp::set_entity_id(rsp_0, EntityId);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtAvatarLockChairReq",
        1086);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v20, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v8 = -1;
    }
    else
    {
      v11 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      v12 = *(_QWORD *)v11 + 392LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v12)(v11) != 1 )
      {
        v8 = 0;
      }
      else
      {
        *(_BYTE *)(v3 + 48) = 1;
        froma = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        std::function<ForeachPolicy ()(Player &)>::function<FightHandler::onEvtAvatarLockChairReq(proto::EvtAvatarLockChairReq const&,proto::EvtAvatarLockChairRsp &)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v20,
          (FightHandler::onEvtAvatarLockChairReq::<lambda(Player&)>)__PAIR128__(v3 + 48, chair_id));
        Scene::foreachPlayer(froma, (std::function<ForeachPolicy(Player&)> *)&v20);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v20);
        if ( *(_BYTE *)(v3 + 48) != 1 )
        {
          v8 = -1;
        }
        else
        {
          v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Avatar::setSitOnChairId(v13, chair_id);
          v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Avatar::startUnlockChairTimer(v14);
          v8 = 0;
        }
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
  result = v8;
  if ( v21 == (char *)v3 )
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

// Line 1095: range 0000000013125DC6-0000000013126047
ForeachPolicy __cdecl FightHandler::onEvtAvatarLockChairReq(proto::EvtAvatarLockChairReq const&,proto::EvtAvatarLockChairRsp &)::{lambda(Player &)#1}::operator()(
        const FightHandler::onEvtAvatarLockChairReq::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint64_t SitOnChairId; // rdx
  char v7; // al
  bool *is_chair_available; // rdx
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rdx
  ForeachPolicy v11; // r14d
  ForeachPolicy result; // eax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-90h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 avatar_ptr:1097";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtAvatarLockChairReq(proto::EvtAvatarLockChairReq const&,proto::EvtAvatarLockChairRsp &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getCurAvatar((Player *const)(v2 + 32));
  if ( !std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
    goto LABEL_9;
  v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  SitOnChairId = Avatar::getSitOnChairId(v5);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( SitOnChairId == __closure->__chair_id )
    v7 = 1;
  else
LABEL_9:
    v7 = 0;
  if ( v7 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_chair_available >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_chair_available = __closure->__is_chair_available;
    if ( *(_BYTE *)(((unsigned __int64)is_chair_available >> 3) + 0x7FFF8000) != 0
      && ((__int64)__closure->__is_chair_available & 7) >= *(_BYTE *)(((unsigned __int64)is_chair_available >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_store1(__closure->__is_chair_available);
    }
    *is_chair_available = 0;
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/fight_handler.cpp",
      "operator()",
      1101);
    v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v13,
           (const char (*)[31])"chair not available chair_id: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &__closure->__chair_id);
    operator<<(v10, player);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v11 = FOREACH_BREAK;
  }
  else
  {
    v11 = FOREACH_CONTINUE;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = v11;
  if ( v14 == (char *)v2 )
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

// Line 1116: range 0000000013126556-0000000013126A63
int32_t __cdecl FightHandler::onEvtAvatarSitDownNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rcx
  Avatar *v7; // rax
  Avatar *v8; // r14
  uint64_t v9; // rax
  PlayerWatcherComp *WatcherComp; // r14
  const proto::Vector *v11; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t SceneId; // eax
  Scene *v14; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::EvtAvatarSitDownNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-E8h]
  Vector3 pos; // [rsp+24h] [rbp-DCh] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 15 notify_ptr:1117 64 16 14 scene_ptr:1118 96 16 19 cur_avatar_ptr:1124";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtAvatarSitDownNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtAvatarSitDownNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtAvatarSitDownNotify const>(
         (const std::shared_ptr<const proto::EvtAvatarSitDownNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtAvatarSitDownNotify",
      1117);
    common::milog::MiLogStream::operator()(&v18, off_24F3BF60);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtAvatarSitDownNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtAvatarSitDownNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fight_handler.cpp",
        "onEvtAvatarSitDownNotify",
        1121);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v18, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v18);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getCurAvatar((Player *const)(v2 + 96));
      if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/fight_handler.cpp",
          "onEvtAvatarSitDownNotify",
          1127);
        v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v18,
               (const char (*)[19])"getCurAvatar fails");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v6, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v18);
        v5 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Avatar::stopUnlockChairTimer(v7);
        v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v9 = proto::EvtAvatarSitDownNotify::chair_id(notify);
        Avatar::setSitOnChairId(v8, v9);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = Player::getWatcherComp(this->player_);
        v11 = proto::EvtAvatarSitDownNotify::position(notify);
        Vector3::Vector3(&pos, v11);
        v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        SceneId = Scene::getSceneId(v12);
        PlayerWatcherComp::triggerSitDown(WatcherComp, SceneId, pos);
        v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v5 = Scene::notifyAllPlayer<proto::EvtAvatarSitDownNotify const>(v14, notify, 0);
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtAvatarSitDownNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtAvatarSitDownNotify> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 1137: range 0000000013126A64-0000000013126EB6
int32_t __cdecl FightHandler::onEvtAvatarStandUpNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rcx
  Avatar *v7; // rax
  Scene *v8; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<const proto::EvtAvatarStandUpNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 15 notify_ptr:1138 64 16 14 scene_ptr:1139 96 16 19 cur_avatar_ptr:1145";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtAvatarStandUpNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EvtAvatarStandUpNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EvtAvatarStandUpNotify const>(
         (const std::shared_ptr<const proto::EvtAvatarStandUpNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtAvatarStandUpNotify",
      1138);
    common::milog::MiLogStream::operator()(&v11, off_24F3C060);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtAvatarStandUpNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EvtAvatarStandUpNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtAvatarStandUpNotify",
        1142);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v11, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getCurAvatar((Player *const)(v2 + 96));
      if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/fight_handler.cpp",
          "onEvtAvatarStandUpNotify",
          1148);
        v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v11,
               (const char (*)[19])"getCurAvatar fails");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v6, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v11);
        v5 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Avatar::setSitOnChairId(v7, 0LL);
        v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v5 = Scene::notifyAllPlayer<proto::EvtAvatarStandUpNotify const>(v8, notify, 0);
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EvtAvatarStandUpNotify const>::~shared_ptr((std::shared_ptr<const proto::EvtAvatarStandUpNotify> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 1156: range 0000000013126EB8-00000000131276F7
int32_t __cdecl FightHandler::onCreateMassiveEntityReq(
        FightHandler *const this,
        const proto::CreateMassiveEntityReq *req,
        proto::CreateMassiveEntityRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  Scene *v7; // r14
  int64_t v8; // r15
  uint32_t v9; // eax
  uint32_t v10; // r14d
  google::protobuf::uint32 v11; // eax
  std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  proto::ServerMassiveEntity *v13; // rax
  Scene *v14; // rax
  PlayerSceneComp *SceneComp; // rax
  proto::ClientMassiveEntity::EntityInfoCase v16; // eax
  const proto::MassiveWaterInfo *v17; // rax
  const proto::MassiveGrassInfo *v18; // rax
  const proto::MassiveBoxInfo *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  unsigned __int64 v22; // rax
  void (__fastcall *v23)(std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  proto::ServerMassiveEntity *v26; // rax
  common::milog::MiLogStream *v27; // r14
  Scene *v28; // rax
  int32_t result; // eax
  int val; // [rsp+2Ch] [rbp-1B4h] BYREF
  google::protobuf::RepeatedPtrField<proto::ClientMassiveEntity>::const_iterator __for_begin; // [rsp+30h] [rbp-1B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::ClientMassiveEntity>::const_iterator __for_end; // [rsp+38h] [rbp-1A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ClientMassiveEntity> *__for_range; // [rsp+40h] [rbp-1A0h]
  const proto::ClientMassiveEntity *client_massive_entity; // [rsp+48h] [rbp-198h]
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-190h] BYREF
  char v36[368]; // [rsp+70h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 14 scene_ptr:1157 64 16 23 massive_entity_ptr:1196 96 48 11 notify:1163 176 112 10 param:1176";
  *(_QWORD *)(v3 + 16) = FightHandler::onCreateMassiveEntityReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onCreateMassiveEntityReq",
      1160);
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v35, (const char (*)[13])off_24F3C1A0);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v6 = -1;
  }
  else
  {
    proto::CreateMassiveEntityNotify::CreateMassiveEntityNotify((proto::CreateMassiveEntityNotify *const)(v3 + 96));
    __for_range = proto::CreateMassiveEntityReq::massive_entity_list(req);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ClientMassiveEntity>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ClientMassiveEntity>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ClientMassiveEntity const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      client_massive_entity = google::protobuf::internal::RepeatedPtrIterator<proto::ClientMassiveEntity const>::operator*(&__for_begin);
      v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v8 = proto::ClientMassiveEntity::obj_id(client_massive_entity);
      v9 = proto::ClientMassiveEntity::entity_type(client_massive_entity);
      if ( Scene::hasMassiveEntity(v7, v9, v8) )
      {
        v10 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        proto::ClientMassiveEntity::obj_id(client_massive_entity);
        v11 = proto::ClientMassiveEntity::entity_type(client_massive_entity);
        Scene::findMassiveEntity((Scene *const)(v3 + 64), v10, v11);
        if ( std::operator!=<MassiveEntity>(0LL, (const std::shared_ptr<MassiveEntity> *)(v3 + 64)) )
        {
          v12 = std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v13 = proto::CreateMassiveEntityNotify::add_massive_entity_list((proto::CreateMassiveEntityNotify *const)(v3 + 96));
          MassiveEntity::toClient(v12, v13);
        }
        std::shared_ptr<MassiveEntity>::~shared_ptr((std::shared_ptr<MassiveEntity> *const)(v3 + 64));
      }
      else
      {
        MassiveEntityParam::MassiveEntityParam((MassiveEntityParam *const)(v3 + 176));
        *(_DWORD *)(v3 + 176) = proto::ClientMassiveEntity::config_id(client_massive_entity);
        *(_DWORD *)(v3 + 180) = proto::ClientMassiveEntity::entity_type(client_massive_entity);
        *(_QWORD *)(v3 + 192) = proto::ClientMassiveEntity::obj_id(client_massive_entity);
        v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        *(_DWORD *)(v3 + 184) = Scene::genNewEntityId(v14, PROT_ENTITY_MASSIVE_ENTITY);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        *(_DWORD *)(v3 + 200) = PlayerSceneComp::getPeerId(SceneComp);
        v16 = proto::ClientMassiveEntity::entity_info_case(client_massive_entity);
        if ( v16 == kBoxInfo )
        {
          v19 = proto::ClientMassiveEntity::box_info(client_massive_entity);
          std::variant<proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>::operator=<proto::MassiveBoxInfo const&>(
            (std::variant<proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo> *const)(v3 + 208),
            v19);
        }
        else if ( v16 <= kBoxInfo )
        {
          if ( v16 == kWaterInfo )
          {
            v17 = proto::ClientMassiveEntity::water_info(client_massive_entity);
            std::variant<proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>::operator=<proto::MassiveWaterInfo const&>(
              (std::variant<proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo> *const)(v3 + 208),
              v17);
          }
          else if ( v16 == kGrassInfo )
          {
            v18 = proto::ClientMassiveEntity::grass_info(client_massive_entity);
            std::variant<proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>::operator=<proto::MassiveGrassInfo const&>(
              (std::variant<proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo> *const)(v3 + 208),
              v18);
          }
        }
        MassiveEntity::create((const MassiveEntityParam *)(v3 + 64));
        if ( std::operator==<MassiveEntity>(0LL, (const std::shared_ptr<MassiveEntity> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/fight_handler.cpp",
            "onCreateMassiveEntityReq",
            1199);
          v20 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v35,
                  (const char (*)[34])"craete MassiveEntity fail, obj_id");
          common::milog::MiLogStream::operator<<<long,(long *)0>(v20, (const __int64 *)(v3 + 192));
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
        else
        {
          v21 = std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v22 = *(_QWORD *)v21->baseclass_0 + 56LL;
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8();
          v23 = *(void (__fastcall **)(std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v22;
          v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          v23(v21, v24, &VisionContext::meet_context);
          v25 = std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v26 = proto::CreateMassiveEntityNotify::add_massive_entity_list((proto::CreateMassiveEntityNotify *const)(v3 + 96));
          MassiveEntity::toClient(v25, v26);
        }
        std::shared_ptr<MassiveEntity>::~shared_ptr((std::shared_ptr<MassiveEntity> *const)(v3 + 64));
        MassiveEntityParam::~MassiveEntityParam((MassiveEntityParam *const)(v3 + 176));
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::ClientMassiveEntity const>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/fight_handler.cpp",
      "onCreateMassiveEntityReq",
      1205);
    v27 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
            &v35,
            (const char (*)[59])"[MASSIVE_ENTITY][PERF][CREATE] create_massive_entity_num: ");
    val = proto::CreateMassiveEntityNotify::massive_entity_list_size((const proto::CreateMassiveEntityNotify *const)(v3 + 96));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v27, &val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    if ( proto::CreateMassiveEntityNotify::massive_entity_list_size((const proto::CreateMassiveEntityNotify *const)(v3 + 96)) )
    {
      v28 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Scene::notifyAllPlayer<proto::CreateMassiveEntityNotify>(v28, (proto::CreateMassiveEntityNotify *)(v3 + 96), 0);
    }
    v6 = 0;
    proto::CreateMassiveEntityNotify::~CreateMassiveEntityNotify((proto::CreateMassiveEntityNotify *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v6;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1214: range 00000000131276F8-0000000013127D6D
int32_t __cdecl FightHandler::onDestroyMassiveEntityNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  Scene *v6; // r14
  int64_t v7; // r15
  uint32_t v8; // eax
  uint32_t v9; // r14d
  google::protobuf::uint32 v10; // eax
  Creature *v11; // rax
  std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  proto::ClientMassiveEntity *v15; // rax
  common::milog::MiLogStream *v16; // r14
  Scene *v17; // rax
  int32_t result; // eax
  int val; // [rsp+24h] [rbp-16Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::ClientMassiveEntity>::const_iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  google::protobuf::RepeatedPtrField<proto::ClientMassiveEntity>::const_iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  const proto::DestroyMassiveEntityNotify *notify; // [rsp+38h] [rbp-158h]
  const google::protobuf::RepeatedPtrField<proto::ClientMassiveEntity> *__for_range; // [rsp+40h] [rbp-150h]
  const proto::ClientMassiveEntity *client_massive_entity; // [rsp+48h] [rbp-148h]
  VisionContext v25; // [rsp+54h] [rbp-13Ch] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-130h] BYREF
  char v27[272]; // [rsp+80h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 15 notify_ptr:1215 80 16 14 scene_ptr:1216 112 16 23 massive_entity_ptr:1229 144 48 16 sync_notify:1222";
  *(_QWORD *)(v2 + 16) = FightHandler::onDestroyMassiveEntityNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DestroyMassiveEntityNotify>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::DestroyMassiveEntityNotify const>(
         (const std::shared_ptr<const proto::DestroyMassiveEntityNotify> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onDestroyMassiveEntityNotify",
      1215);
    common::milog::MiLogStream::operator()(&v26, off_24F3C360);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::DestroyMassiveEntityNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DestroyMassiveEntityNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fight_handler.cpp",
        "onDestroyMassiveEntityNotify",
        1219);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v26, (const char (*)[13])off_24F3C1A0);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v5 = -1;
    }
    else
    {
      proto::DestroyMassiveEntityNotify::DestroyMassiveEntityNotify((proto::DestroyMassiveEntityNotify *const)(v2 + 144));
      __for_range = proto::DestroyMassiveEntityNotify::massive_entity_list(notify);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ClientMassiveEntity>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ClientMassiveEntity>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::ClientMassiveEntity const>::operator!=(
                &__for_begin,
                &__for_end) )
      {
        client_massive_entity = google::protobuf::internal::RepeatedPtrIterator<proto::ClientMassiveEntity const>::operator*(&__for_begin);
        v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        v7 = proto::ClientMassiveEntity::obj_id(client_massive_entity);
        v8 = proto::ClientMassiveEntity::entity_type(client_massive_entity);
        if ( Scene::hasMassiveEntity(v6, v8, v7) )
        {
          v9 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          proto::ClientMassiveEntity::obj_id(client_massive_entity);
          v10 = proto::ClientMassiveEntity::entity_type(client_massive_entity);
          Scene::findMassiveEntity((Scene *const)(v2 + 112), v9, v10);
          if ( std::operator!=<MassiveEntity>(0LL, (const std::shared_ptr<MassiveEntity> *)(v2 + 112)) )
          {
            v11 = (Creature *)std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            Creature::changeLifeState(v11, LIFE_DEAD, 0LL, 1);
            v12 = std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v13 = *(_QWORD *)v12->baseclass_0 + 128LL;
            if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
              v13 = __asan_report_load8();
            v14 = *(void (__fastcall **)(std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v13;
            VisionContext::VisionContext(&v25, VISION_DIE);
            v14(v12, &v25);
            v15 = proto::DestroyMassiveEntityNotify::add_massive_entity_list((proto::DestroyMassiveEntityNotify *const)(v2 + 144));
            proto::ClientMassiveEntity::CopyFrom(v15, client_massive_entity);
          }
          std::shared_ptr<MassiveEntity>::~shared_ptr((std::shared_ptr<MassiveEntity> *const)(v2 + 112));
        }
        google::protobuf::internal::RepeatedPtrIterator<proto::ClientMassiveEntity const>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onDestroyMassiveEntityNotify",
        1237);
      v16 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v26,
              (const char (*)[61])"[MASSIVE_ENTITY][PERF][DESTORY] destroy_massive_entity_num: ");
      val = proto::DestroyMassiveEntityNotify::massive_entity_list_size(notify);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      if ( proto::DestroyMassiveEntityNotify::massive_entity_list_size((const proto::DestroyMassiveEntityNotify *const)(v2 + 144)) )
      {
        v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        Scene::notifyAllPlayer<proto::DestroyMassiveEntityNotify>(
          v17,
          (proto::DestroyMassiveEntityNotify *)(v2 + 144),
          0);
      }
      v5 = 0;
      proto::DestroyMassiveEntityNotify::~DestroyMassiveEntityNotify((proto::DestroyMassiveEntityNotify *const)(v2 + 144));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
  }
  std::shared_ptr<proto::DestroyMassiveEntityNotify const>::~shared_ptr((std::shared_ptr<const proto::DestroyMassiveEntityNotify> *const)(v2 + 48));
  result = v5;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 1246: range 0000000013127D6E-000000001312832B
int32_t __cdecl FightHandler::onMassiveEntityStateChangedNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t v6; // r14d
  google::protobuf::uint32 v7; // eax
  MassiveEntity *v8; // r14
  uint32_t v9; // eax
  proto::MassiveEntityState *v10; // rax
  common::milog::MiLogStream *v11; // r14
  Scene *v12; // rax
  int32_t result; // eax
  int val; // [rsp+24h] [rbp-15Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::MassiveEntityState>::const_iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  google::protobuf::RepeatedPtrField<proto::MassiveEntityState>::const_iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  const proto::MassiveEntityStateChangedNotify *notify; // [rsp+38h] [rbp-148h]
  const google::protobuf::RepeatedPtrField<proto::MassiveEntityState> *__for_range; // [rsp+40h] [rbp-140h]
  const proto::MassiveEntityState *entity_state; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-130h] BYREF
  char v21[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 15 notify_ptr:1247 80 16 14 scene_ptr:1248 112 16 23 massive_entity_ptr:1257 144 48 16 sync_notify:1254";
  *(_QWORD *)(v2 + 16) = FightHandler::onMassiveEntityStateChangedNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MassiveEntityStateChangedNotify>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::MassiveEntityStateChangedNotify const>(
         (const std::shared_ptr<const proto::MassiveEntityStateChangedNotify> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onMassiveEntityStateChangedNotify",
      1247);
    common::milog::MiLogStream::operator()(&v20, off_24F3C500);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MassiveEntityStateChangedNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MassiveEntityStateChangedNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fight_handler.cpp",
        "onMassiveEntityStateChangedNotify",
        1251);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v20, (const char (*)[13])off_24F3C1A0);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v5 = -1;
    }
    else
    {
      proto::MassiveEntityStateChangedNotify::MassiveEntityStateChangedNotify((proto::MassiveEntityStateChangedNotify *const)(v2 + 144));
      __for_range = proto::MassiveEntityStateChangedNotify::massive_entity_state_list(notify);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MassiveEntityState>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MassiveEntityState>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::MassiveEntityState const>::operator!=(
                &__for_begin,
                &__for_end) )
      {
        entity_state = google::protobuf::internal::RepeatedPtrIterator<proto::MassiveEntityState const>::operator*(&__for_begin);
        v6 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        proto::MassiveEntityState::obj_id(entity_state);
        v7 = proto::MassiveEntityState::entity_type(entity_state);
        Scene::findMassiveEntity((Scene *const)(v2 + 112), v6, v7);
        if ( !std::operator==<MassiveEntity>((const std::shared_ptr<MassiveEntity> *)(v2 + 112), 0LL) )
        {
          v8 = std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v9 = proto::MassiveEntityState::element_state(entity_state);
          MassiveEntity::setElementState(v8, v9);
          v10 = proto::MassiveEntityStateChangedNotify::add_massive_entity_state_list((proto::MassiveEntityStateChangedNotify *const)(v2 + 144));
          proto::MassiveEntityState::CopyFrom(v10, entity_state);
        }
        std::shared_ptr<MassiveEntity>::~shared_ptr((std::shared_ptr<MassiveEntity> *const)(v2 + 112));
        google::protobuf::internal::RepeatedPtrIterator<proto::MassiveEntityState const>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onMassiveEntityStateChangedNotify",
        1265);
      v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v20,
              (const char (*)[59])"[MASSIVE_ENTITY][PERF][CHANGE] change_massive_entity_num: ");
      val = proto::MassiveEntityStateChangedNotify::massive_entity_state_list_size(notify);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      if ( proto::MassiveEntityStateChangedNotify::massive_entity_state_list_size((const proto::MassiveEntityStateChangedNotify *const)(v2 + 144)) )
      {
        v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        Scene::notifyAllPlayer<proto::MassiveEntityStateChangedNotify>(
          v12,
          (proto::MassiveEntityStateChangedNotify *)(v2 + 144),
          0);
      }
      v5 = 0;
      proto::MassiveEntityStateChangedNotify::~MassiveEntityStateChangedNotify((proto::MassiveEntityStateChangedNotify *const)(v2 + 144));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
  }
  std::shared_ptr<proto::MassiveEntityStateChangedNotify const>::~shared_ptr((std::shared_ptr<const proto::MassiveEntityStateChangedNotify> *const)(v2 + 48));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 1274: range 000000001312832C-000000001312E20C
int32_t __cdecl FightHandler::onCombatInvocationsNotify(
        FightHandler *const this,
        const proto::CombatInvocationsNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  const std::string *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  Scene *v16; // rax
  const proto::AttackResult *v17; // rax
  uint32_t v18; // r15d
  Player *player; // r14
  Scene *v20; // rax
  proto::CombatTypeArgument v21; // eax
  proto::ForwardType v22; // eax
  std::string *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  uint32_t *v25; // rdx
  GameserverService *v26; // rax
  PlayerSendPacketController *p_player_send_packet_controller; // r14
  const char *v28; // r14
  uint32_t v29; // eax
  int32_t v30; // r14d
  uint32_t v31; // eax
  const std::string *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  const std::string *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  const std::string *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rcx
  uint32_t v42; // r15d
  Player *v43; // r14
  Scene *v44; // rax
  uint32_t *v45; // rdx
  GameserverService *v46; // rax
  PlayerSendPacketController *v47; // r14
  const std::string *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  const std::string *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  const std::string *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rcx
  uint32_t v58; // r15d
  Player *v59; // r14
  Scene *v60; // rax
  uint32_t *v61; // rdx
  GameserverService *v62; // rax
  PlayerSendPacketController *v63; // r14
  const std::string *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // r14
  const std::string *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  const std::string *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rcx
  uint32_t v74; // r15d
  Player *v75; // r14
  Scene *v76; // rax
  uint32_t *v77; // rdx
  GameserverService *v78; // rax
  PlayerSendPacketController *v79; // r14
  uint32_t v80; // r14d
  Monster *v81; // rax
  const std::string *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // r14
  const std::string *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // r14
  const std::string *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rcx
  uint32_t v92; // r15d
  Player *v93; // r14
  Scene *v94; // rax
  uint32_t *v95; // rdx
  GameserverService *v96; // rax
  PlayerSendPacketController *v97; // r14
  const std::string *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // r14
  const std::string *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // r14
  const std::string *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rcx
  uint32_t v108; // r15d
  Player *v109; // r14
  Scene *v110; // rax
  uint32_t *v111; // rdx
  GameserverService *v112; // rax
  PlayerSendPacketController *v113; // r14
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rdx
  Entity *v116; // rax
  EntityAnimatorComp *AnimatorComp; // r14
  const proto::AnimatorParameterValueInfo *v118; // r15
  int32_t v119; // eax
  const std::string *v120; // rax
  common::milog::MiLogStream *v121; // rax
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // r14
  const std::string *v124; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // r14
  const std::string *v127; // rax
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rcx
  Player *v130; // r14
  Scene *v131; // r15
  proto::CombatTypeArgument v132; // eax
  proto::ForwardType v133; // eax
  std::string *v134; // rax
  common::milog::MiLogStream *v135; // rcx
  int v136; // r14d
  uint32_t *v137; // rdx
  GameserverService *v138; // rax
  PlayerSendPacketController *v139; // r14
  const char *v140; // r14
  uint32_t v141; // eax
  int32_t v142; // r14d
  uint32_t v143; // eax
  const std::string *v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // r14
  const std::string *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // r14
  const std::string *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rcx
  uint32_t v154; // r15d
  Player *v155; // r14
  Scene *v156; // rax
  uint32_t *v157; // rdx
  GameserverService *v158; // rax
  PlayerSendPacketController *v159; // r14
  const std::string *v160; // rax
  common::milog::MiLogStream *v161; // rax
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // r14
  const std::string *v164; // rax
  common::milog::MiLogStream *v165; // rax
  common::milog::MiLogStream *v166; // r14
  const std::string *v167; // rax
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rcx
  uint32_t v170; // r15d
  Player *v171; // r14
  Scene *v172; // rax
  uint32_t *v173; // rdx
  GameserverService *v174; // rax
  PlayerSendPacketController *v175; // r14
  const std::string *v176; // rax
  common::milog::MiLogStream *v177; // rax
  common::milog::MiLogStream *v178; // rax
  common::milog::MiLogStream *v179; // r14
  const std::string *v180; // rax
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // r14
  const std::string *v183; // rax
  common::milog::MiLogStream *v184; // rax
  common::milog::MiLogStream *v185; // rcx
  uint32_t v186; // r15d
  Player *v187; // r14
  Scene *v188; // rax
  uint32_t *v189; // rdx
  GameserverService *v190; // rax
  PlayerSendPacketController *v191; // r14
  uint32_t v192; // r14d
  Scene *v193; // r14
  const proto::Vector *v194; // rax
  Entity *v195; // rax
  const std::string *v196; // rax
  common::milog::MiLogStream *v197; // rax
  common::milog::MiLogStream *v198; // rax
  common::milog::MiLogStream *v199; // r14
  const std::string *v200; // rax
  common::milog::MiLogStream *v201; // rax
  common::milog::MiLogStream *v202; // r14
  const std::string *v203; // rax
  common::milog::MiLogStream *v204; // rax
  common::milog::MiLogStream *v205; // rcx
  uint32_t v206; // r15d
  Player *v207; // r14
  Scene *v208; // rax
  uint32_t *v209; // rdx
  GameserverService *v210; // rax
  PlayerSendPacketController *v211; // r14
  const std::string *v212; // rax
  common::milog::MiLogStream *v213; // rax
  common::milog::MiLogStream *v214; // rax
  common::milog::MiLogStream *v215; // r14
  const std::string *v216; // rax
  common::milog::MiLogStream *v217; // rax
  common::milog::MiLogStream *v218; // r14
  const std::string *v219; // rax
  common::milog::MiLogStream *v220; // rax
  common::milog::MiLogStream *v221; // rcx
  uint32_t v222; // r15d
  Player *v223; // r14
  Scene *v224; // rax
  uint32_t *v225; // rdx
  GameserverService *v226; // rax
  PlayerSendPacketController *v227; // r14
  const std::string *v228; // rax
  common::milog::MiLogStream *v229; // rax
  common::milog::MiLogStream *v230; // rax
  common::milog::MiLogStream *v231; // r14
  const std::string *v232; // rax
  common::milog::MiLogStream *v233; // rax
  common::milog::MiLogStream *v234; // r14
  const std::string *v235; // rax
  common::milog::MiLogStream *v236; // rax
  common::milog::MiLogStream *v237; // rcx
  uint32_t v238; // r15d
  Player *v239; // r14
  Scene *v240; // rax
  uint32_t *v241; // rdx
  GameserverService *v242; // rax
  PlayerSendPacketController *v243; // r14
  const std::string *v244; // rax
  common::milog::MiLogStream *v245; // rax
  common::milog::MiLogStream *v246; // rax
  common::milog::MiLogStream *v247; // r14
  const std::string *v248; // rax
  common::milog::MiLogStream *v249; // rax
  common::milog::MiLogStream *v250; // r14
  const std::string *v251; // rax
  common::milog::MiLogStream *v252; // rax
  common::milog::MiLogStream *v253; // rcx
  uint32_t v254; // r15d
  Player *v255; // r14
  Scene *v256; // rax
  uint32_t *v257; // rdx
  GameserverService *v258; // rax
  PlayerSendPacketController *v259; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v260; // r14
  unsigned __int64 v261; // rax
  void (__fastcall *v262)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r15
  google::protobuf::uint32 v263; // eax
  unsigned __int64 v264; // rax
  unsigned __int64 v265; // rdx
  char v266; // al
  common::milog::MiLogStream *v267; // r14
  unsigned __int64 v268; // rax
  unsigned __int64 v269; // rdx
  const proto::Vector *v270; // rax
  common::milog::MiLogStream *v271; // rax
  common::milog::MiLogStream *v272; // rax
  common::milog::MiLogStream *v273; // rax
  common::milog::MiLogStream *v274; // rax
  common::milog::MiLogStream *v275; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v276; // r14
  unsigned __int64 v277; // rax
  void (__fastcall *v278)(std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Vector3 *); // r15
  const proto::Vector *v279; // rax
  Entity *v280; // r14
  const proto::Vector *v281; // rax
  const std::string *v282; // rax
  common::milog::MiLogStream *v283; // rax
  common::milog::MiLogStream *v284; // rax
  common::milog::MiLogStream *v285; // r14
  const std::string *v286; // rax
  common::milog::MiLogStream *v287; // rax
  common::milog::MiLogStream *v288; // r14
  const std::string *v289; // rax
  common::milog::MiLogStream *v290; // rax
  common::milog::MiLogStream *v291; // rcx
  uint32_t v292; // r15d
  Player *v293; // r14
  Scene *v294; // rax
  uint32_t *v295; // rdx
  GameserverService *v296; // rax
  PlayerSendPacketController *v297; // r14
  const std::string *v298; // rax
  common::milog::MiLogStream *v299; // rax
  common::milog::MiLogStream *v300; // rax
  common::milog::MiLogStream *v301; // r14
  const std::string *v302; // rax
  common::milog::MiLogStream *v303; // rax
  common::milog::MiLogStream *v304; // r14
  const std::string *v305; // rax
  common::milog::MiLogStream *v306; // rax
  common::milog::MiLogStream *v307; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v308; // r14
  unsigned __int64 v309; // rax
  void (__fastcall *v310)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r15
  google::protobuf::uint32 v311; // eax
  Entity *v312; // r14
  const proto::Vector *v313; // rax
  const std::string *v314; // rax
  common::milog::MiLogStream *v315; // rax
  common::milog::MiLogStream *v316; // rax
  common::milog::MiLogStream *v317; // r14
  const std::string *v318; // rax
  common::milog::MiLogStream *v319; // rax
  common::milog::MiLogStream *v320; // r14
  const std::string *v321; // rax
  common::milog::MiLogStream *v322; // rax
  common::milog::MiLogStream *v323; // rcx
  uint32_t v324; // r15d
  Player *v325; // r14
  Scene *v326; // rax
  uint32_t *v327; // rdx
  GameserverService *v328; // rax
  PlayerSendPacketController *v329; // r14
  common::milog::MiLogStream *v330; // rcx
  GameserverService *v331; // rax
  GameThreadLocal *GameThreadLocal; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v334; // r14
  unsigned __int64 v335; // rax
  void (__fastcall *v336)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::tuple_element<0,std::tuple<HurtContext> >::type *); // r15
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v337; // rsi
  int32_t result; // eax
  proto::ForwardType type; // [rsp+8h] [rbp-618h]
  proto::ForwardType typea; // [rsp+8h] [rbp-618h]
  proto::ForwardType typeb; // [rsp+8h] [rbp-618h]
  proto::ForwardType typec; // [rsp+8h] [rbp-618h]
  proto::ForwardType typed; // [rsp+8h] [rbp-618h]
  proto::ForwardType typee; // [rsp+8h] [rbp-618h]
  Avatar *typef; // [rsp+8h] [rbp-618h]
  proto::ForwardType typeg; // [rsp+8h] [rbp-618h]
  proto::ForwardType typeh; // [rsp+8h] [rbp-618h]
  proto::ForwardType typei; // [rsp+8h] [rbp-618h]
  proto::ForwardType typej; // [rsp+8h] [rbp-618h]
  proto::ForwardType typek; // [rsp+8h] [rbp-618h]
  proto::ForwardType typel; // [rsp+8h] [rbp-618h]
  proto::ForwardType typem; // [rsp+8h] [rbp-618h]
  proto::ForwardType typen; // [rsp+8h] [rbp-618h]
  proto::ForwardType typeo; // [rsp+8h] [rbp-618h]
  std::allocator<char> v355; // [rsp+26h] [rbp-5FAh] BYREF
  std::allocator<char> __a; // [rsp+27h] [rbp-5F9h] BYREF
  proto::ProtEntityType val; // [rsp+28h] [rbp-5F8h] BYREF
  uint32_t uid_14; // [rsp+2Ch] [rbp-5F4h]
  uint32_t uid_13; // [rsp+30h] [rbp-5F0h]
  uint32_t uid_12; // [rsp+34h] [rbp-5ECh]
  uint32_t uid_11; // [rsp+38h] [rbp-5E8h]
  uint32_t uid_10; // [rsp+3Ch] [rbp-5E4h]
  uint32_t uid_9; // [rsp+40h] [rbp-5E0h]
  uint32_t uid_8; // [rsp+44h] [rbp-5DCh]
  uint32_t uid_7; // [rsp+48h] [rbp-5D8h]
  uint32_t uid_6; // [rsp+4Ch] [rbp-5D4h]
  uint32_t start_time_0; // [rsp+50h] [rbp-5D0h]
  int32_t retcode_0; // [rsp+54h] [rbp-5CCh]
  uint32_t uid_5; // [rsp+58h] [rbp-5C8h]
  int32_t time_cost_0; // [rsp+5Ch] [rbp-5C4h]
  uint32_t entity_id; // [rsp+60h] [rbp-5C0h]
  uint32_t uid_4; // [rsp+64h] [rbp-5BCh]
  uint32_t uid_3; // [rsp+68h] [rbp-5B8h]
  uint32_t uid_2; // [rsp+6Ch] [rbp-5B4h]
  uint32_t uid_1; // [rsp+70h] [rbp-5B0h]
  uint32_t uid_0; // [rsp+74h] [rbp-5ACh]
  uint32_t start_time; // [rsp+78h] [rbp-5A8h]
  int32_t retcode; // [rsp+7Ch] [rbp-5A4h]
  int32_t time_cost; // [rsp+80h] [rbp-5A0h]
  uint32_t uid; // [rsp+84h] [rbp-59Ch]
  google::protobuf::RepeatedPtrField<proto::CombatInvokeEntry>::const_iterator __for_begin; // [rsp+88h] [rbp-598h] BYREF
  google::protobuf::RepeatedPtrField<proto::CombatInvokeEntry>::const_iterator __for_end; // [rsp+90h] [rbp-590h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+98h] [rbp-588h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+A0h] [rbp-580h] BYREF
  const google::protobuf::RepeatedPtrField<proto::CombatInvokeEntry> *__for_range; // [rsp+A8h] [rbp-578h]
  std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *__for_range_16; // [rsp+B0h] [rbp-570h]
  std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *__t; // [rsp+B8h] [rbp-568h]
  std::tuple_element<0,std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> >::type *attacker_ptr; // [rsp+C0h] [rbp-560h]
  std::tuple_element<0,std::tuple<std::shared_ptr<Creature>,HurtContext> >::type *defenser_ptr; // [rsp+C8h] [rbp-558h]
  std::tuple_element<0,std::tuple<HurtContext> >::type *hurt_ctx; // [rsp+D0h] [rbp-550h]
  const proto::CombatInvokeEntry *invoke; // [rsp+D8h] [rbp-548h]
  std::vector<unsigned int> *__for_range_15; // [rsp+E0h] [rbp-540h]
  std::vector<unsigned int> *__for_range_14; // [rsp+E8h] [rbp-538h]
  std::vector<unsigned int> *__for_range_13; // [rsp+F0h] [rbp-530h]
  std::vector<unsigned int> *__for_range_12; // [rsp+F8h] [rbp-528h]
  std::vector<unsigned int> *__for_range_11; // [rsp+100h] [rbp-520h]
  std::vector<unsigned int> *__for_range_10; // [rsp+108h] [rbp-518h]
  std::vector<unsigned int> *__for_range_9; // [rsp+110h] [rbp-510h]
  std::vector<unsigned int> *__for_range_8; // [rsp+118h] [rbp-508h]
  std::vector<unsigned int> *__for_range_7; // [rsp+120h] [rbp-500h]
  std::vector<unsigned int> *__for_range_6; // [rsp+128h] [rbp-4F8h]
  const std::string *retcode_name_0; // [rsp+130h] [rbp-4F0h]
  std::vector<unsigned int> *__for_range_5; // [rsp+138h] [rbp-4E8h]
  std::vector<unsigned int> *__for_range_4; // [rsp+140h] [rbp-4E0h]
  std::vector<unsigned int> *__for_range_3; // [rsp+148h] [rbp-4D8h]
  std::vector<unsigned int> *__for_range_2; // [rsp+150h] [rbp-4D0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+158h] [rbp-4C8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+160h] [rbp-4C0h]
  const std::string *retcode_name; // [rsp+168h] [rbp-4B8h]
  Vector3 pos; // [rsp+174h] [rbp-4ACh] BYREF
  common::milog::MiLogStream v411; // [rsp+180h] [rbp-4A0h] BYREF
  common::milog::MiLogStream v412; // [rsp+1A0h] [rbp-480h] BYREF
  proto::CombatInvokeEntry p_invoke; // [rsp+1C0h] [rbp-460h] BYREF
  char v414[1072]; // [rsp+1F0h] [rbp-430h] BYREF

  v2 = (unsigned __int64)v414;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 12 8 rot:1451 64 16 14 scene_ptr:1275 96 16 15 avatar_ptr:1289 128 16 14 scene_ptr:1356 16"
                        "0 16 15 entity_ptr:1474 192 24 13 hurt_vec:1298 256 24 20 forward_uid_vec:1483 320 32 9 info:147"
                        "3 384 40 9 info:1306 464 40 9 info:1442 544 48 9 info:1467 624 48 9 info:1381 704 56 9 info:1328"
                        " 800 72 9 info:1437 912 80 9 info:1483";
  *(_QWORD *)(v2 + 16) = FightHandler::onCombatInvocationsNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959360;
  v4[536862734] = 62194;
  v4[536862735] = -234881024;
  v4[536862736] = -218959118;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862741] = -218959118;
  v4[536862743] = -234881024;
  v4[536862744] = -218959118;
  v4[536862747] = -218959360;
  v4[536862748] = 62194;
  v4[536862751] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v412,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/fight_handler.cpp",
      "onCombatInvocationsNotify",
      1278);
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v412, (const char (*)[13])off_24F3C1A0);
    common::milog::MiLogStream::~MiLogStream(&v412);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getCurAvatar((Player *const)(v2 + 96));
    std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::vector((std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *const)(v2 + 192));
    __for_range = proto::CombatInvocationsNotify::invoke_list(notify);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CombatInvokeEntry>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CombatInvokeEntry>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::CombatInvokeEntry const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      invoke = google::protobuf::internal::RepeatedPtrIterator<proto::CombatInvokeEntry const>::operator*(&__for_begin);
      switch ( proto::CombatInvokeEntry::argument_type(invoke) )
      {
        case COMBAT_EVT_BEING_HIT:
          start_time = CoroutineHelper::time();
          proto::EvtBeingHitInfo::EvtBeingHitInfo((proto::EvtBeingHitInfo *const)(v2 + 384));
          v6 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 384, v6) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1306);
            v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                   &v411,
                   (const char (*)[21])"combat invoke type: ");
            v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                   v7,
                   (const char (*)[23])"proto::EvtBeingHitInfo");
            v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                   v8,
                   (const char (*)[21])" fail to parse, len:");
            v10 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v10);
            v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v9,
                    (const unsigned __int64 *)&__for_end_0);
            v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" base64:");
            v13 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v13);
            v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v412);
            v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v15, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            retcode = FightHandler::processEvtBeingHitInfo(
                        this,
                        (proto::EvtBeingHitInfo *)(v2 + 384),
                        v16,
                        (std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *)(v2 + 192));
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            type = proto::CombatInvokeEntry::forward_type(invoke);
            v17 = proto::EvtBeingHitInfo::attack_result((const proto::EvtBeingHitInfo *const)(v2 + 384));
            v18 = proto::AttackResult::defense_id(v17);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            player = this->player_;
            v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v20,
              player,
              v18,
              type,
              0,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            proto::CombatInvokeEntry::CombatInvokeEntry((proto::CombatInvokeEntry *const)(v2 + 464));
            v21 = proto::CombatInvokeEntry::argument_type(invoke);
            proto::CombatInvokeEntry::set_argument_type((proto::CombatInvokeEntry *const)(v2 + 464), v21);
            v22 = proto::CombatInvokeEntry::forward_type(invoke);
            proto::CombatInvokeEntry::set_forward_type((proto::CombatInvokeEntry *const)(v2 + 464), v22);
            v23 = proto::CombatInvokeEntry::mutable_combat_data[abi:cxx11]((proto::CombatInvokeEntry *const)(v2 + 464));
            if ( !google::protobuf::MessageLite::SerializeToString(
                    (const google::protobuf::MessageLite *const)(v2 + 384),
                    v23) )
            {
              common::milog::MiLogStream::create(
                &v412,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/fight_handler.cpp",
                "onCombatInvocationsNotify",
                1314);
              v24 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v412,
                      (const char (*)[35])"SerializeToString failed, player_:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              operator<<(v24, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v412);
            }
            else
            {
              __for_range_0 = (std::vector<unsigned int> *)(v2 + 256);
              __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
              __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
              {
                v25 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
                if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                uid = *v25;
                v26 = ServiceBox::findService<GameserverService>();
                p_player_send_packet_controller = &GameserverService::getGameThreadLocal(v26)->player_send_packet_controller;
                proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, (const proto::CombatInvokeEntry *)(v2 + 464));
                PlayerSendPacketController::addCombatInvoke(p_player_send_packet_controller, uid, &p_invoke);
                proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
              }
              time_cost = CoroutineHelper::time() - start_time;
              retcode_name = ProtoUtils::getRetcodeName[abi:cxx11](retcode);
              v28 = (const char *)std::string::c_str(retcode_name);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v29 = Player::getUid(this->player_);
              common::milog::MiLog::writeLog(
                &common::milog::MiLogDefault::default_log_obj_,
                0xBu,
                "|%s|%u|%u|%s|%d|%s|%d",
                "subCmd",
                v29,
                0LL,
                "processEvtBeingHitInfo",
                (unsigned int)retcode,
                v28,
                (unsigned int)time_cost);
              v30 = time_cost;
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v412, "processEvtBeingHitInfo", &__a);
              std::allocator<char>::allocator(&v355);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v411, "subCmd", &v355);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v31 = Player::getUid(this->player_);
              CmdReport::addCmdRecord(v31, (const std::string *)&v411, (const std::string *)&v412, v30, 1u);
              std::string::~string(&v411);
              std::allocator<char>::~allocator(&v355);
              std::string::~string(&v412);
              std::allocator<char>::~allocator(&__a);
            }
            proto::CombatInvokeEntry::~CombatInvokeEntry((proto::CombatInvokeEntry *const)(v2 + 464));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtBeingHitInfo::~EvtBeingHitInfo((proto::EvtBeingHitInfo *const)(v2 + 384));
          break;
        case COMBAT_ANIMATOR_STATE_CHANGED:
          proto::EvtAnimatorStateChangedInfo::EvtAnimatorStateChangedInfo((proto::EvtAnimatorStateChangedInfo *const)(v2 + 704));
          v32 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 704, v32) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1328);
            v33 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v411,
                    (const char (*)[21])"combat invoke type: ");
            v34 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    v33,
                    (const char (*)[35])"proto::EvtAnimatorStateChangedInfo");
            v35 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v34,
                    (const char (*)[21])" fail to parse, len:");
            v36 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v36);
            v37 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v35,
                    (const unsigned __int64 *)&__for_end_0);
            v38 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v37, (const char (*)[9])" base64:");
            v39 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v39);
            v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v38, (const std::string *)&v412);
            v41 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v40, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v41, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typea = proto::CombatInvokeEntry::forward_type(invoke);
            v42 = proto::EvtAnimatorStateChangedInfo::entity_id((const proto::EvtAnimatorStateChangedInfo *const)(v2 + 704));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v43 = this->player_;
            v44 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v44,
              v43,
              v42,
              typea,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_1 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v45 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_0 = *v45;
              v46 = ServiceBox::findService<GameserverService>();
              v47 = &GameserverService::getGameThreadLocal(v46)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v47, uid_0, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtAnimatorStateChangedInfo::~EvtAnimatorStateChangedInfo((proto::EvtAnimatorStateChangedInfo *const)(v2 + 704));
          break;
        case COMBAT_FACE_TO_DIR:
          proto::EvtFaceToDirInfo::EvtFaceToDirInfo((proto::EvtFaceToDirInfo *const)(v2 + 320));
          v48 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 320, v48) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1335);
            v49 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v411,
                    (const char (*)[21])"combat invoke type: ");
            v50 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v49,
                    (const char (*)[24])"proto::EvtFaceToDirInfo");
            v51 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v50,
                    (const char (*)[21])" fail to parse, len:");
            v52 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v52);
            v53 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v51,
                    (const unsigned __int64 *)&__for_end_0);
            v54 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v53, (const char (*)[9])" base64:");
            v55 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v55);
            v56 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v54, (const std::string *)&v412);
            v57 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v56, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v57, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typeb = proto::CombatInvokeEntry::forward_type(invoke);
            v58 = proto::EvtFaceToDirInfo::entity_id((const proto::EvtFaceToDirInfo *const)(v2 + 320));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v59 = this->player_;
            v60 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v60,
              v59,
              v58,
              typeb,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_2 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_2)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v61 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_1 = *v61;
              v62 = ServiceBox::findService<GameserverService>();
              v63 = &GameserverService::getGameThreadLocal(v62)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v63, uid_1, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtFaceToDirInfo::~EvtFaceToDirInfo((proto::EvtFaceToDirInfo *const)(v2 + 320));
          break;
        case COMBAT_SET_ATTACK_TARGET:
          proto::EvtSetAttackTargetInfo::EvtSetAttackTargetInfo((proto::EvtSetAttackTargetInfo *const)(v2 + 320));
          v64 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 320, v64) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1340);
            v65 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v411,
                    (const char (*)[21])"combat invoke type: ");
            v66 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    v65,
                    (const char (*)[30])"proto::EvtSetAttackTargetInfo");
            v67 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v66,
                    (const char (*)[21])" fail to parse, len:");
            v68 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v68);
            v69 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v67,
                    (const unsigned __int64 *)&__for_end_0);
            v70 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v69, (const char (*)[9])" base64:");
            v71 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v71);
            v72 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v70, (const std::string *)&v412);
            v73 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v72, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v73, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typec = proto::CombatInvokeEntry::forward_type(invoke);
            v74 = proto::EvtSetAttackTargetInfo::entity_id((const proto::EvtSetAttackTargetInfo *const)(v2 + 320));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v75 = this->player_;
            v76 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v76,
              v75,
              v74,
              typec,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_3 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_3)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v77 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v77 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_2 = *v77;
              v78 = ServiceBox::findService<GameserverService>();
              v79 = &GameserverService::getGameThreadLocal(v78)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v79, uid_2, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            v80 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            proto::EvtSetAttackTargetInfo::entity_id((const proto::EvtSetAttackTargetInfo *const)(v2 + 320));
            Scene::findEntity<Monster>((const Scene *const)(v2 + 160), v80);
            if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v2 + 160), 0LL) )
            {
              v81 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              Monster::cacheAttackTargetInfo(v81, (const proto::EvtSetAttackTargetInfo *)(v2 + 320));
            }
            std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 160));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtSetAttackTargetInfo::~EvtSetAttackTargetInfo((proto::EvtSetAttackTargetInfo *const)(v2 + 320));
          break;
        case COMBAT_RUSH_MOVE:
          proto::EvtRushMoveInfo::EvtRushMoveInfo((proto::EvtRushMoveInfo *const)(v2 + 800));
          v82 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 800, v82) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1350);
            v83 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v411,
                    (const char (*)[21])"combat invoke type: ");
            v84 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v83,
                    (const char (*)[23])"proto::EvtRushMoveInfo");
            v85 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v84,
                    (const char (*)[21])" fail to parse, len:");
            v86 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v86);
            v87 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v85,
                    (const unsigned __int64 *)&__for_end_0);
            v88 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v87, (const char (*)[9])" base64:");
            v89 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v89);
            v90 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v88, (const std::string *)&v412);
            v91 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v90, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v91, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typed = proto::CombatInvokeEntry::forward_type(invoke);
            v92 = proto::EvtRushMoveInfo::entity_id((const proto::EvtRushMoveInfo *const)(v2 + 800));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v93 = this->player_;
            v94 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v94,
              v93,
              v92,
              typed,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_4 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_4)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v95 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v95 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_3 = *v95;
              v96 = ServiceBox::findService<GameserverService>();
              v97 = &GameserverService::getGameThreadLocal(v96)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v97, uid_3, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtRushMoveInfo::~EvtRushMoveInfo((proto::EvtRushMoveInfo *const)(v2 + 800));
          break;
        case COMBAT_ANIMATOR_PARAMETER_CHANGED:
          proto::EvtAnimatorParameterInfo::EvtAnimatorParameterInfo((proto::EvtAnimatorParameterInfo *const)(v2 + 464));
          v98 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 464, v98) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1355);
            v99 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v411,
                    (const char (*)[21])"combat invoke type: ");
            v100 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                     v99,
                     (const char (*)[32])"proto::EvtAnimatorParameterInfo");
            v101 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v100,
                     (const char (*)[21])" fail to parse, len:");
            v102 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v102);
            v103 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v101,
                     (const unsigned __int64 *)&__for_end_0);
            v104 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v103, (const char (*)[9])" base64:");
            v105 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v105);
            v106 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v104, (const std::string *)&v412);
            v107 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v106, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v107, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typee = proto::CombatInvokeEntry::forward_type(invoke);
            v108 = proto::EvtAnimatorParameterInfo::entity_id((const proto::EvtAnimatorParameterInfo *const)(v2 + 464));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v109 = this->player_;
            v110 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v110,
              v109,
              v108,
              typee,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_5 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_5)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v111 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v111 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v111 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v111 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_4 = *v111;
              v112 = ServiceBox::findService<GameserverService>();
              v113 = &GameserverService::getGameThreadLocal(v112)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v113, uid_4, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 128));
            if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v412,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/fight_handler.cpp",
                "onCombatInvocationsNotify",
                1359);
              common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v412,
                (const char (*)[18])"scene_ptr is null");
              common::milog::MiLogStream::~MiLogStream(&v412);
            }
            else
            {
              entity_id = proto::EvtAnimatorParameterInfo::entity_id((const proto::EvtAnimatorParameterInfo *const)(v2 + 464));
              if ( proto::EvtAnimatorParameterInfo::is_server_cache((const proto::EvtAnimatorParameterInfo *const)(v2 + 464)) )
              {
                v114 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                if ( *(_BYTE *)((v114 >> 3) + 0x7FFF8000) )
                  v114 = __asan_report_load8();
                v115 = *(_QWORD *)v114 + 120LL;
                if ( *(_BYTE *)((v115 >> 3) + 0x7FFF8000) )
                  v114 = __asan_report_load8();
                (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v115)(v2 + 160, v114, entity_id);
                if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 160), 0LL) )
                {
                  v116 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                  AnimatorComp = Entity::getAnimatorComp(v116);
                  v118 = proto::EvtAnimatorParameterInfo::value((const proto::EvtAnimatorParameterInfo *const)(v2 + 464));
                  v119 = proto::EvtAnimatorParameterInfo::name_id((const proto::EvtAnimatorParameterInfo *const)(v2 + 464));
                  EntityAnimatorComp::cacheAnimatorParam(AnimatorComp, v119, v118);
                }
                std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 160));
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtAnimatorParameterInfo::~EvtAnimatorParameterInfo((proto::EvtAnimatorParameterInfo *const)(v2 + 464));
          break;
        case ENTITY_MOVE:
          if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 96), 0LL) )
          {
            start_time_0 = CoroutineHelper::time();
            proto::EntityMoveInfo::EntityMoveInfo((proto::EntityMoveInfo *const)(v2 + 624));
            v120 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 624, v120) != 1 )
            {
              common::milog::MiLogStream::create(
                &v411,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/fight_handler.cpp",
                "onCombatInvocationsNotify",
                1381);
              v121 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                       &v411,
                       (const char (*)[21])"combat invoke type: ");
              v122 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                       v121,
                       (const char (*)[22])"proto::EntityMoveInfo");
              v123 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                       v122,
                       (const char (*)[21])" fail to parse, len:");
              v124 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
              __for_end_0._M_current = (unsigned int *)std::string::size(v124);
              v125 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                       v123,
                       (const unsigned __int64 *)&__for_end_0);
              v126 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v125, (const char (*)[9])" base64:");
              v127 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
              common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v127);
              v128 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                       v126,
                       (const std::string *)&v412);
              v129 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v128, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              operator<<(v129, this->player_);
              std::string::~string(&v412);
              common::milog::MiLogStream::~MiLogStream(&v411);
            }
            else
            {
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 256));
              typef = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v130 = this->player_;
              v131 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              CoroutineHelper::getContextPacketPtr();
              retcode_0 = SceneHandler::processEntityMoveInfo(
                            (common::minet::PacketPtr *)(v2 + 160),
                            v131,
                            v130,
                            typef,
                            (proto::EntityMoveInfo *)(v2 + 624),
                            (std::vector<unsigned int> *)(v2 + 256));
              std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 160));
              if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 256)) )
                goto LABEL_133;
              proto::CombatInvokeEntry::CombatInvokeEntry((proto::CombatInvokeEntry *const)(v2 + 464));
              v132 = proto::CombatInvokeEntry::argument_type(invoke);
              proto::CombatInvokeEntry::set_argument_type((proto::CombatInvokeEntry *const)(v2 + 464), v132);
              v133 = proto::CombatInvokeEntry::forward_type(invoke);
              proto::CombatInvokeEntry::set_forward_type((proto::CombatInvokeEntry *const)(v2 + 464), v133);
              v134 = proto::CombatInvokeEntry::mutable_combat_data[abi:cxx11]((proto::CombatInvokeEntry *const)(v2 + 464));
              if ( !google::protobuf::MessageLite::SerializeToString(
                      (const google::protobuf::MessageLite *const)(v2 + 624),
                      v134) )
              {
                common::milog::MiLogStream::create(
                  &v412,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/fight_handler.cpp",
                  "onCombatInvocationsNotify",
                  1391);
                v135 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                         &v412,
                         (const char (*)[35])"SerializeToString failed, player_:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                operator<<(v135, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v412);
                v136 = 0;
              }
              else
              {
                __for_range_6 = (std::vector<unsigned int> *)(v2 + 256);
                __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
                __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_6)._M_current;
                while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
                {
                  v137 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
                  if ( *(_BYTE *)(((unsigned __int64)v137 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v137 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v137 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  uid_5 = *v137;
                  v138 = ServiceBox::findService<GameserverService>();
                  v139 = &GameserverService::getGameThreadLocal(v138)->player_send_packet_controller;
                  proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, (const proto::CombatInvokeEntry *)(v2 + 464));
                  PlayerSendPacketController::addCombatInvoke(v139, uid_5, &p_invoke);
                  proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
                  __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
                }
                v136 = 1;
              }
              proto::CombatInvokeEntry::~CombatInvokeEntry((proto::CombatInvokeEntry *const)(v2 + 464));
              if ( v136 == 1 )
              {
LABEL_133:
                time_cost_0 = CoroutineHelper::time() - start_time_0;
                retcode_name_0 = ProtoUtils::getRetcodeName[abi:cxx11](retcode_0);
                v140 = (const char *)std::string::c_str(retcode_name_0);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v141 = Player::getUid(this->player_);
                common::milog::MiLog::writeLog(
                  &common::milog::MiLogDefault::default_log_obj_,
                  0xBu,
                  "|%s|%u|%u|%s|%d|%s|%d",
                  "subCmd",
                  v141,
                  0LL,
                  "processEntityMoveInfo",
                  (unsigned int)retcode_0,
                  v140,
                  (unsigned int)time_cost_0);
                v142 = time_cost_0;
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)&v412,
                  "processEntityMoveInfo",
                  &__a);
                std::allocator<char>::allocator(&v355);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v411, "subCmd", &v355);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v143 = Player::getUid(this->player_);
                CmdReport::addCmdRecord(v143, (const std::string *)&v411, (const std::string *)&v412, v142, 1u);
                std::string::~string(&v411);
                std::allocator<char>::~allocator(&v355);
                std::string::~string(&v412);
                std::allocator<char>::~allocator(&__a);
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
            }
            proto::EntityMoveInfo::~EntityMoveInfo((proto::EntityMoveInfo *const)(v2 + 624));
          }
          break;
        case SYNC_ENTITY_POSITION:
          proto::EvtSyncEntityPositionInfo::EvtSyncEntityPositionInfo((proto::EvtSyncEntityPositionInfo *const)(v2 + 544));
          v144 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 544, v144) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1407);
            v145 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     &v411,
                     (const char (*)[21])"combat invoke type: ");
            v146 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                     v145,
                     (const char (*)[33])"proto::EvtSyncEntityPositionInfo");
            v147 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v146,
                     (const char (*)[21])" fail to parse, len:");
            v148 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v148);
            v149 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v147,
                     (const unsigned __int64 *)&__for_end_0);
            v150 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v149, (const char (*)[9])" base64:");
            v151 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v151);
            v152 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v150, (const std::string *)&v412);
            v153 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v152, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v153, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typeg = proto::CombatInvokeEntry::forward_type(invoke);
            v154 = proto::EvtSyncEntityPositionInfo::entity_id((const proto::EvtSyncEntityPositionInfo *const)(v2 + 544));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v155 = this->player_;
            v156 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v156,
              v155,
              v154,
              typeg,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_7 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_7)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v157 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v157 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v157 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v157 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_6 = *v157;
              v158 = ServiceBox::findService<GameserverService>();
              v159 = &GameserverService::getGameThreadLocal(v158)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v159, uid_6, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtSyncEntityPositionInfo::~EvtSyncEntityPositionInfo((proto::EvtSyncEntityPositionInfo *const)(v2 + 544));
          break;
        case COMBAT_STEER_MOTION_INFO:
          proto::EvtCombatSteerMotionInfo::EvtCombatSteerMotionInfo((proto::EvtCombatSteerMotionInfo *const)(v2 + 544));
          v160 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 544, v160) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1412);
            v161 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     &v411,
                     (const char (*)[21])"combat invoke type: ");
            v162 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                     v161,
                     (const char (*)[32])"proto::EvtCombatSteerMotionInfo");
            v163 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v162,
                     (const char (*)[21])" fail to parse, len:");
            v164 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v164);
            v165 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v163,
                     (const unsigned __int64 *)&__for_end_0);
            v166 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v165, (const char (*)[9])" base64:");
            v167 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v167);
            v168 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v166, (const std::string *)&v412);
            v169 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v168, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v169, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typeh = proto::CombatInvokeEntry::forward_type(invoke);
            v170 = proto::EvtCombatSteerMotionInfo::entity_id((const proto::EvtCombatSteerMotionInfo *const)(v2 + 544));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v171 = this->player_;
            v172 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v172,
              v171,
              v170,
              typeh,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_8 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_8)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v173 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v173 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v173 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v173 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_7 = *v173;
              v174 = ServiceBox::findService<GameserverService>();
              v175 = &GameserverService::getGameThreadLocal(v174)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v175, uid_7, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtCombatSteerMotionInfo::~EvtCombatSteerMotionInfo((proto::EvtCombatSteerMotionInfo *const)(v2 + 544));
          break;
        case COMBAT_FORCE_SET_POS_INFO:
          proto::EvtCombatForceSetPosInfo::EvtCombatForceSetPosInfo((proto::EvtCombatForceSetPosInfo *const)(v2 + 464));
          v176 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 464, v176) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1417);
            v177 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     &v411,
                     (const char (*)[21])"combat invoke type: ");
            v178 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                     v177,
                     (const char (*)[32])"proto::EvtCombatForceSetPosInfo");
            v179 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v178,
                     (const char (*)[21])" fail to parse, len:");
            v180 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v180);
            v181 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v179,
                     (const unsigned __int64 *)&__for_end_0);
            v182 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v181, (const char (*)[9])" base64:");
            v183 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v183);
            v184 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v182, (const std::string *)&v412);
            v185 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v184, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v185, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typei = proto::CombatInvokeEntry::forward_type(invoke);
            v186 = proto::EvtCombatForceSetPosInfo::entity_id((const proto::EvtCombatForceSetPosInfo *const)(v2 + 464));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v187 = this->player_;
            v188 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v188,
              v187,
              v186,
              typei,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_9 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_9)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v189 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v189 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v189 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v189 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_8 = *v189;
              v190 = ServiceBox::findService<GameserverService>();
              v191 = &GameserverService::getGameThreadLocal(v190)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v191, uid_8, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            v192 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            proto::EvtCombatForceSetPosInfo::entity_id((const proto::EvtCombatForceSetPosInfo *const)(v2 + 464));
            Scene::findEntity<Monster>((const Scene *const)(v2 + 160), v192);
            if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 160)) )
            {
              v193 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              v194 = proto::EvtCombatForceSetPosInfo::target_pos((const proto::EvtCombatForceSetPosInfo *const)(v2 + 464));
              Vector3::Vector3(&pos, v194);
              v195 = (Entity *)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              Scene::entityMoveTo(v193, v195, &pos);
            }
            std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 160));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtCombatForceSetPosInfo::~EvtCombatForceSetPosInfo((proto::EvtCombatForceSetPosInfo *const)(v2 + 464));
          break;
        case COMBAT_COMPENSATE_POS_DIFF:
          proto::EvtCompensatePosDiffInfo::EvtCompensatePosDiffInfo((proto::EvtCompensatePosDiffInfo *const)(v2 + 544));
          v196 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 544, v196) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1427);
            v197 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     &v411,
                     (const char (*)[21])"combat invoke type: ");
            v198 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                     v197,
                     (const char (*)[32])"proto::EvtCompensatePosDiffInfo");
            v199 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v198,
                     (const char (*)[21])" fail to parse, len:");
            v200 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v200);
            v201 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v199,
                     (const unsigned __int64 *)&__for_end_0);
            v202 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v201, (const char (*)[9])" base64:");
            v203 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v203);
            v204 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v202, (const std::string *)&v412);
            v205 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v204, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v205, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typej = proto::CombatInvokeEntry::forward_type(invoke);
            v206 = proto::EvtCompensatePosDiffInfo::entity_id((const proto::EvtCompensatePosDiffInfo *const)(v2 + 544));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v207 = this->player_;
            v208 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v208,
              v207,
              v206,
              typej,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_10 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_10)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v209 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v209 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v209 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v209 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_9 = *v209;
              v210 = ServiceBox::findService<GameserverService>();
              v211 = &GameserverService::getGameThreadLocal(v210)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v211, uid_9, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtCompensatePosDiffInfo::~EvtCompensatePosDiffInfo((proto::EvtCompensatePosDiffInfo *const)(v2 + 544));
          break;
        case COMBAT_MONSTER_DO_BLINK:
          proto::EvtMonsterDoBlink::EvtMonsterDoBlink((proto::EvtMonsterDoBlink *const)(v2 + 464));
          v212 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 464, v212) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1432);
            v213 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     &v411,
                     (const char (*)[21])"combat invoke type: ");
            v214 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                     v213,
                     (const char (*)[25])"proto::EvtMonsterDoBlink");
            v215 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v214,
                     (const char (*)[21])" fail to parse, len:");
            v216 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v216);
            v217 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v215,
                     (const unsigned __int64 *)&__for_end_0);
            v218 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v217, (const char (*)[9])" base64:");
            v219 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v219);
            v220 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v218, (const std::string *)&v412);
            v221 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v220, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v221, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typek = proto::CombatInvokeEntry::forward_type(invoke);
            v222 = proto::EvtMonsterDoBlink::entity_id((const proto::EvtMonsterDoBlink *const)(v2 + 464));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v223 = this->player_;
            v224 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v224,
              v223,
              v222,
              typek,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_11 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_11)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v225 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v225 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v225 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v225 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_10 = *v225;
              v226 = ServiceBox::findService<GameserverService>();
              v227 = &GameserverService::getGameThreadLocal(v226)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v227, uid_10, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtMonsterDoBlink::~EvtMonsterDoBlink((proto::EvtMonsterDoBlink *const)(v2 + 464));
          break;
        case COMBAT_FIXED_RUSH_MOVE:
          proto::EvtFixedRushMove::EvtFixedRushMove((proto::EvtFixedRushMove *const)(v2 + 800));
          v228 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 800, v228) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1437);
            v229 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     &v411,
                     (const char (*)[21])"combat invoke type: ");
            v230 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                     v229,
                     (const char (*)[24])"proto::EvtFixedRushMove");
            v231 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v230,
                     (const char (*)[21])" fail to parse, len:");
            v232 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v232);
            v233 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v231,
                     (const unsigned __int64 *)&__for_end_0);
            v234 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v233, (const char (*)[9])" base64:");
            v235 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v235);
            v236 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v234, (const std::string *)&v412);
            v237 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v236, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v237, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typel = proto::CombatInvokeEntry::forward_type(invoke);
            v238 = proto::EvtFixedRushMove::entity_id((const proto::EvtFixedRushMove *const)(v2 + 800));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v239 = this->player_;
            v240 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v240,
              v239,
              v238,
              typel,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_12 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_12)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v241 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v241 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v241 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v241 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_11 = *v241;
              v242 = ServiceBox::findService<GameserverService>();
              v243 = &GameserverService::getGameThreadLocal(v242)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v243, uid_11, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtFixedRushMove::~EvtFixedRushMove((proto::EvtFixedRushMove *const)(v2 + 800));
          break;
        case COMBAT_SYNC_TRANSFORM:
          proto::EvtSyncTransform::EvtSyncTransform((proto::EvtSyncTransform *const)(v2 + 464));
          v244 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 464, v244) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1442);
            v245 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     &v411,
                     (const char (*)[21])"combat invoke type: ");
            v246 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                     v245,
                     (const char (*)[24])"proto::EvtSyncTransform");
            v247 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v246,
                     (const char (*)[21])" fail to parse, len:");
            v248 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v248);
            v249 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v247,
                     (const unsigned __int64 *)&__for_end_0);
            v250 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v249, (const char (*)[9])" base64:");
            v251 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v251);
            v252 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v250, (const std::string *)&v412);
            v253 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v252, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v253, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typem = proto::CombatInvokeEntry::forward_type(invoke);
            v254 = proto::EvtSyncTransform::entity_id((const proto::EvtSyncTransform *const)(v2 + 464));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v255 = this->player_;
            v256 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v256,
              v255,
              v254,
              typem,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_13 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_13)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v257 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v257 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v257 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v257 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_12 = *v257;
              v258 = ServiceBox::findService<GameserverService>();
              v259 = &GameserverService::getGameThreadLocal(v258)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v259, uid_12, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            v260 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( *(_BYTE *)(((unsigned __int64)v260 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v261 = (unsigned __int64)(v260->_vptr_DescribalBase + 15);
            if ( *(_BYTE *)((v261 >> 3) + 0x7FFF8000) )
              v261 = __asan_report_load8();
            v262 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v261;
            v263 = proto::EvtSyncTransform::entity_id((const proto::EvtSyncTransform *const)(v2 + 464));
            v262(v2 + 160, v260, v263);
            if ( !std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 160), 0LL) )
              goto LABEL_242;
            v264 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            if ( *(_BYTE *)((v264 >> 3) + 0x7FFF8000) )
              v264 = __asan_report_load8();
            v265 = *(_QWORD *)v264 + 24LL;
            if ( *(_BYTE *)((v265 >> 3) + 0x7FFF8000) )
              v264 = __asan_report_load8();
            if ( (*(unsigned int (__fastcall **)(unsigned __int64))v265)(v264) == 4 )
LABEL_242:
              v266 = 0;
            else
              v266 = 1;
            if ( v266 )
            {
              common::milog::MiLogStream::create(
                &v412,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/fight_handler.cpp",
                "onCombatInvocationsNotify",
                1447);
              v267 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                       &v412,
                       (const char (*)[52])"COMBAT_SYNC_TRANSFORM used by invalid entity type: ");
              v268 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              if ( *(_BYTE *)((v268 >> 3) + 0x7FFF8000) )
                v268 = __asan_report_load8();
              v269 = *(_QWORD *)v268 + 24LL;
              if ( *(_BYTE *)((v269 >> 3) + 0x7FFF8000) )
                v268 = __asan_report_load8();
              val = (*(unsigned int (__fastcall **)(unsigned __int64))v269)(v268);
              common::milog::MiLogStream::operator<<<proto::ProtEntityType,(proto::ProtEntityType*)0>(v267, &val);
              common::milog::MiLogStream::~MiLogStream(&v412);
            }
            v270 = proto::EvtSyncTransform::entity_rot((const proto::EvtSyncTransform *const)(v2 + 464));
            Vector3::Vector3((Vector3 *const)(v2 + 32), v270);
            if ( !Vector3::isValidRot((const Vector3 *const)(v2 + 32)) )
            {
              common::milog::MiLogStream::create(
                &v412,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/fight_handler.cpp",
                "onCombatInvocationsNotify",
                1454);
              v271 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                       &v412,
                       (const char (*)[17])"invalid rot, x: ");
              v272 = common::milog::MiLogStream::operator<<<float,(float *)0>(v271, (const float *)(v2 + 32));
              v273 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                       v272,
                       (const char (*)[5])off_24F3CDA0);
              v274 = common::milog::MiLogStream::operator<<<float,(float *)0>(v273, (const float *)(v2 + 36));
              v275 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v274, (const char (*)[9])" rot.z: ");
              common::milog::MiLogStream::operator<<<float,(float *)0>(v275, (const float *)(v2 + 40));
              common::milog::MiLogStream::~MiLogStream(&v412);
            }
            else if ( std::operator!=<Entity>(0LL, (const std::shared_ptr<Entity> *)(v2 + 160)) )
            {
              v276 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              if ( *(_BYTE *)(((unsigned __int64)v276 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v277 = (unsigned __int64)(v276->_vptr_DescribalBase + 10);
              if ( *(_BYTE *)((v277 >> 3) + 0x7FFF8000) )
                v277 = __asan_report_load8();
              v278 = *(void (__fastcall **)(std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Vector3 *))v277;
              v279 = proto::EvtSyncTransform::entity_pos((const proto::EvtSyncTransform *const)(v2 + 464));
              Vector3::Vector3(&pos, v279);
              v278(v276, &pos);
              v280 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              v281 = proto::EvtSyncTransform::entity_rot((const proto::EvtSyncTransform *const)(v2 + 464));
              Vector3::Vector3(&pos, v281);
              Entity::setRotation(v280, &pos);
            }
            std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 160));
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtSyncTransform::~EvtSyncTransform((proto::EvtSyncTransform *const)(v2 + 464));
          break;
        case COMBAT_LIGHT_CORE_MOVE:
          proto::EvtLightCoreMove::EvtLightCoreMove((proto::EvtLightCoreMove *const)(v2 + 544));
          v282 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 544, v282) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1467);
            v283 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     &v411,
                     (const char (*)[21])"combat invoke type: ");
            v284 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                     v283,
                     (const char (*)[24])"proto::EvtLightCoreMove");
            v285 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v284,
                     (const char (*)[21])" fail to parse, len:");
            v286 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v286);
            v287 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v285,
                     (const unsigned __int64 *)&__for_end_0);
            v288 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v287, (const char (*)[9])" base64:");
            v289 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v289);
            v290 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v288, (const std::string *)&v412);
            v291 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v290, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v291, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typen = proto::CombatInvokeEntry::forward_type(invoke);
            v292 = proto::EvtLightCoreMove::entity_id((const proto::EvtLightCoreMove *const)(v2 + 544));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v293 = this->player_;
            v294 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v294,
              v293,
              v292,
              typen,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_14 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_14)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v295 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v295 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v295 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v295 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_13 = *v295;
              v296 = ServiceBox::findService<GameserverService>();
              v297 = &GameserverService::getGameThreadLocal(v296)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v297, uid_13, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtLightCoreMove::~EvtLightCoreMove((proto::EvtLightCoreMove *const)(v2 + 544));
          break;
        case COMBAT_SKILL_ANCHOR_POSITION_NTF:
          proto::EvtSyncSkillAnchorPosition::EvtSyncSkillAnchorPosition((proto::EvtSyncSkillAnchorPosition *const)(v2 + 320));
          v298 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 320, v298) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1473);
            v299 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     &v411,
                     (const char (*)[21])"combat invoke type: ");
            v300 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                     v299,
                     (const char (*)[34])"proto::EvtSyncSkillAnchorPosition");
            v301 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v300,
                     (const char (*)[21])" fail to parse, len:");
            v302 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v302);
            v303 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v301,
                     (const unsigned __int64 *)&__for_end_0);
            v304 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v303, (const char (*)[9])" base64:");
            v305 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v305);
            v306 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v304, (const std::string *)&v412);
            v307 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v306, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v307, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            v308 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( *(_BYTE *)(((unsigned __int64)v308 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v309 = (unsigned __int64)(v308->_vptr_DescribalBase + 15);
            if ( *(_BYTE *)((v309 >> 3) + 0x7FFF8000) )
              v309 = __asan_report_load8();
            v310 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v309;
            v311 = proto::EvtSyncSkillAnchorPosition::entity_id((const proto::EvtSyncSkillAnchorPosition *const)(v2 + 320));
            v310(v2 + 160, v308, v311);
            if ( std::operator!=<Entity>(0LL, (const std::shared_ptr<Entity> *)(v2 + 160)) )
            {
              v312 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              v313 = proto::EvtSyncSkillAnchorPosition::skill_anchor_position((const proto::EvtSyncSkillAnchorPosition *const)(v2 + 320));
              Vector3::Vector3(&pos, v313);
              Entity::setSkillAnchorPosition(v312, &pos);
            }
            std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 160));
          }
          proto::EvtSyncSkillAnchorPosition::~EvtSyncSkillAnchorPosition((proto::EvtSyncSkillAnchorPosition *const)(v2 + 320));
          break;
        case COMBAT_GRAPPLING_HOOK_MOVE:
          proto::EvtGrapplingHookMove::EvtGrapplingHookMove((proto::EvtGrapplingHookMove *const)(v2 + 912));
          v314 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
          if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 912, v314) != 1 )
          {
            common::milog::MiLogStream::create(
              &v411,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onCombatInvocationsNotify",
              1483);
            v315 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     &v411,
                     (const char (*)[21])"combat invoke type: ");
            v316 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                     v315,
                     (const char (*)[28])"proto::EvtGrapplingHookMove");
            v317 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v316,
                     (const char (*)[21])" fail to parse, len:");
            v318 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            __for_end_0._M_current = (unsigned int *)std::string::size(v318);
            v319 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v317,
                     (const unsigned __int64 *)&__for_end_0);
            v320 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v319, (const char (*)[9])" base64:");
            v321 = proto::CombatInvokeEntry::combat_data[abi:cxx11](invoke);
            common::minet::Packet::encodeShortStringToBase64((std::string *)&v412, v321);
            v322 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v320, (const std::string *)&v412);
            v323 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v322, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v323, this->player_);
            std::string::~string(&v412);
            common::milog::MiLogStream::~MiLogStream(&v411);
          }
          else
          {
            *(_QWORD *)(v2 + 624) = 0LL;
            *(_QWORD *)(v2 + 632) = 0LL;
            *(_QWORD *)(v2 + 640) = 0LL;
            *(_QWORD *)(v2 + 648) = 0LL;
            *(_QWORD *)(v2 + 656) = 0LL;
            *(_QWORD *)(v2 + 664) = 0LL;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
            typeo = proto::CombatInvokeEntry::forward_type(invoke);
            v324 = proto::EvtGrapplingHookMove::entity_id((const proto::EvtGrapplingHookMove *const)(v2 + 912));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v325 = this->player_;
            v326 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            FightHandler::getForwardSendPlayerUidVec(
              (std::vector<unsigned int> *)(v2 + 256),
              v326,
              v325,
              v324,
              typeo,
              1,
              (const std::set<unsigned int> *)(v2 + 624));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
            __for_range_15 = (std::vector<unsigned int> *)(v2 + 256);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 256))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_15)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v327 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              if ( *(_BYTE *)(((unsigned __int64)v327 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v327 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v327 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              uid_14 = *v327;
              v328 = ServiceBox::findService<GameserverService>();
              v329 = &GameserverService::getGameThreadLocal(v328)->player_send_packet_controller;
              proto::CombatInvokeEntry::CombatInvokeEntry(&p_invoke, invoke);
              PlayerSendPacketController::addCombatInvoke(v329, uid_14, &p_invoke);
              proto::CombatInvokeEntry::~CombatInvokeEntry(&p_invoke);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
          }
          proto::EvtGrapplingHookMove::~EvtGrapplingHookMove((proto::EvtGrapplingHookMove *const)(v2 + 912));
          break;
        default:
          common::milog::MiLogStream::create(
            &v412,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/fight_handler.cpp",
            "onCombatInvocationsNotify",
            1489);
          v330 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                   &v412,
                   (const char (*)[27])"wrong combat type, player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v330, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v412);
          break;
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::CombatInvokeEntry const>::operator++(&__for_begin);
    }
    v331 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = GameserverService::getGameThreadLocal(v331);
    PlayerSendPacketController::flushAll(&GameThreadLocal->player_send_packet_controller);
    __for_range_16 = (std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *)(v2 + 192);
    __for_begin_0._M_current = (unsigned int *)std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::begin((std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *const)(v2 + 192))._M_current;
    __for_end_0._M_current = (unsigned int *)std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::end(__for_range_16)._M_current;
    while ( __gnu_cxx::operator!=<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>>(
              (const __gnu_cxx::__normal_iterator<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>*,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> > *)&__for_begin_0,
              (const __gnu_cxx::__normal_iterator<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>*,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> > *)&__for_end_0) )
    {
      __t = __gnu_cxx::__normal_iterator<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>>::operator*((const __gnu_cxx::__normal_iterator<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>*,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> > *const)&__for_begin_0);
      attacker_ptr = std::get<0ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
      defenser_ptr = std::get<1ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
      hurt_ctx = std::get<2ul,std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>(__t);
      if ( std::operator!=<Creature>(defenser_ptr, 0LL) && std::operator!=<Creature>(attacker_ptr, 0LL) )
      {
        v334 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)defenser_ptr);
        if ( *(_BYTE *)(((unsigned __int64)v334 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v335 = *(_QWORD *)v334->baseclass_0 + 336LL;
        if ( *(_BYTE *)((v335 >> 3) + 0x7FFF8000) )
          v335 = __asan_report_load8();
        v336 = *(void (__fastcall **)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::tuple_element<0,std::tuple<HurtContext> >::type *))v335;
        v337 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)attacker_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v336(v334, this->player_, v337, hurt_ctx);
      }
      __gnu_cxx::__normal_iterator<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext> *,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>>::operator++((__gnu_cxx::__normal_iterator<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>*,std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> > *const)&__for_begin_0);
    }
    v5 = 0;
    std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>>::~vector((std::vector<std::tuple<std::shared_ptr<Creature>,std::shared_ptr<Creature>,HurtContext>> *const)(v2 + 192));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  result = v5;
  if ( v414 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF807C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1510: range 000000001312E20E-000000001312ED15
int32_t __cdecl FightHandler::onEvtAiSyncCombatThreatInfoNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  void (__fastcall *v8)(unsigned __int64, unsigned __int64, _QWORD); // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  Entity *v15; // r14
  google::protobuf::Map<unsigned int,unsigned int> *v16; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Monster *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  void (__fastcall *v22)(unsigned __int64, unsigned __int64, _QWORD); // r8
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rcx
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  Monster *v32; // rax
  int32_t result; // eax
  unsigned int __args_0; // [rsp+14h] [rbp-23Ch] BYREF
  proto::EvtAiSyncCombatThreatInfoNotify *notify; // [rsp+18h] [rbp-238h]
  google::protobuf::Map<unsigned int,proto::AiThreatInfo> *__for_range; // [rsp+20h] [rbp-230h]
  const unsigned int *p_entity_id; // [rsp+28h] [rbp-228h]
  google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+30h] [rbp-220h]
  const unsigned int *p_threat_entity_id; // [rsp+38h] [rbp-218h]
  google::protobuf::Map<unsigned int,proto::AiThreatInfo>::iterator __for_begin; // [rsp+40h] [rbp-210h] BYREF
  google::protobuf::Map<unsigned int,proto::AiThreatInfo>::iterator __for_end; // [rsp+60h] [rbp-1F0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+80h] [rbp-1D0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+A0h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v44; // [rsp+C0h] [rbp-190h] BYREF
  char v45[368]; // [rsp+E0h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 16 15 notify_ptr:1511 80 16 14 scene_ptr:1512 112 16 15 entity_ptr:1520 144 16 16 monster_p"
                        "tr:1528 176 16 22 threat_entity_ptr:1543 208 16 23 threat_monster_ptr:1549 240 48 24 threat_partner_list:1534";
  *(_QWORD *)(v2 + 16) = FightHandler::onEvtAiSyncCombatThreatInfoNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::EvtAiSyncCombatThreatInfoNotify>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::EvtAiSyncCombatThreatInfoNotify>(
         (const std::shared_ptr<proto::EvtAiSyncCombatThreatInfoNotify> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEvtAiSyncCombatThreatInfoNotify",
      1511);
    common::milog::MiLogStream::operator()(&v44, off_24F3D0C0);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EvtAiSyncCombatThreatInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EvtAiSyncCombatThreatInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEvtAiSyncCombatThreatInfoNotify",
        1515);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v44, (const char (*)[13])off_24F3C1A0);
      common::milog::MiLogStream::~MiLogStream(&v44);
      v5 = -1;
    }
    else
    {
      __for_range = proto::EvtAiSyncCombatThreatInfoNotify::mutable_combat_threat_info_map(notify);
      google::protobuf::Map<unsigned int,proto::AiThreatInfo>::begin(&__for_begin, __for_range);
      google::protobuf::Map<unsigned int,proto::AiThreatInfo>::end(&__for_end, __for_range);
      while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
      {
        p_entity_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::AiThreatInfo>::iterator::operator*(&__for_begin);
        v6 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8();
        v7 = *(_QWORD *)v6 + 120LL;
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8();
        v8 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v7;
        if ( *(_BYTE *)(((unsigned __int64)p_entity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)p_entity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v8(v2 + 112, v6, *p_entity_id);
        if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v2 + 112), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/fight_handler.cpp",
            "onEvtAiSyncCombatThreatInfoNotify",
            1523);
          v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                 &v44,
                 (const char (*)[28])"findEntity fail, entity_id:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, p_entity_id);
          v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" scene:");
          v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          v13 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v11, v12);
          v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v14, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        else
        {
          v15 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v16 = proto::AiThreatInfo::mutable_ai_threat_map((proto::AiThreatInfo *const)(p_entity_id + 2));
          Entity::setAiThreatMap(v15, v16);
          std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v2 + 144));
          if ( !std::operator==<Monster>((const std::shared_ptr<Monster> *)(v2 + 144), 0LL) )
          {
            v17 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            if ( Monster::getMonsterType(v17) != MONSTER_PARTNER )
            {
              std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 240));
              __for_range_0 = proto::AiThreatInfo::mutable_ai_threat_map((proto::AiThreatInfo *const)(p_entity_id + 2));
              google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_0);
              google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
              while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
              {
                p_threat_entity_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::iterator::operator*(&__for_begin_0);
                v19 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
                if ( *(_BYTE *)(((unsigned __int64)p_threat_entity_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_threat_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_threat_entity_id >> 3)
                                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( Monster::isInPartnerAlertSet(v19, *p_threat_entity_id) )
                {
                  std::set<unsigned int>::emplace<unsigned int const&>(
                    (std::set<unsigned int> *const)(v2 + 240),
                    p_threat_entity_id,
                    p_threat_entity_id);
                }
                else
                {
                  v20 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
                    v20 = __asan_report_load8();
                  v21 = *(_QWORD *)v20 + 120LL;
                  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                    v20 = __asan_report_load8();
                  v22 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v21;
                  if ( *(_BYTE *)(((unsigned __int64)p_threat_entity_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_threat_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_threat_entity_id >> 3)
                                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v22(v2 + 176, v20, *p_threat_entity_id);
                  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v2 + 176), 0LL) )
                  {
                    common::milog::MiLogStream::create(
                      &v44,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/handler/fight_handler.cpp",
                      "onEvtAiSyncCombatThreatInfoNotify",
                      1546);
                    v23 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                            &v44,
                            (const char (*)[28])"findEntity fail, entity_id:");
                    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v23,
                            p_threat_entity_id);
                    v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                            v24,
                            (const char (*)[8])" scene:");
                    v26 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                    v27 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v25, v26);
                    v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                            v27,
                            (const char (*)[9])" player:");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    operator<<(v28, this->player_);
                    common::milog::MiLogStream::~MiLogStream(&v44);
                  }
                  else
                  {
                    std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v2 + 208));
                    if ( !std::operator==<Monster>((const std::shared_ptr<Monster> *)(v2 + 208), 0LL) )
                    {
                      v29 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                      if ( Monster::getMonsterType(v29) == MONSTER_PARTNER )
                      {
                        v31 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
                        __args_0 = Entity::getEntityId((const Entity *const)v31);
                        std::set<unsigned int>::emplace<unsigned int>(
                          (std::set<unsigned int> *const)(v2 + 240),
                          &__args_0,
                          &__args_0);
                      }
                    }
                    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 208));
                  }
                  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 176));
                }
                google::protobuf::Map<unsigned int,unsigned int>::iterator::operator++(&__for_begin_0);
              }
              v32 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              Monster::onMonsterPartnerAlertChange(v32, (const std::set<unsigned int> *)(v2 + 240));
              std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 240));
            }
          }
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 144));
        }
        std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 112));
        google::protobuf::Map<unsigned int,proto::AiThreatInfo>::iterator::operator++(&__for_begin);
      }
      v5 = 0;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
  }
  std::shared_ptr<proto::EvtAiSyncCombatThreatInfoNotify>::~shared_ptr((std::shared_ptr<proto::EvtAiSyncCombatThreatInfoNotify> *const)(v2 + 48));
  result = v5;
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1563: range 000000001312ED16-000000001312F262
int32_t __cdecl FightHandler::onMassiveEntityElementOpBatchNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  float v6; // xmm0_4
  const proto::ShapeSphere *v7; // rax
  const proto::Vector *v8; // rax
  const proto::ShapeSphere *v9; // rax
  float v10; // xmm0_4
  const proto::ShapeBox *v11; // rax
  const proto::Vector *v12; // rax
  const proto::ShapeBox *v13; // rax
  const proto::Vector *v14; // rax
  const proto::ShapeBox *v15; // rax
  const proto::Vector *v16; // rax
  const proto::ShapeBox *v17; // rax
  const proto::Vector *v18; // rax
  const proto::ShapeBox *v19; // rax
  const proto::Vector *v20; // rax
  char v21; // al
  Scene *v22; // rax
  uint32_t NextMassiveEntityOpIndex; // edx
  Scene *v24; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<proto::MassiveEntityElementOpBatchNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+10h] [rbp-100h]
  Vector3 v27; // [rsp+18h] [rbp-F8h] BYREF
  Vector3 v28; // [rsp+24h] [rbp-ECh] BYREF
  Vector3 v29; // [rsp+30h] [rbp-E0h] BYREF
  Vector3 v30; // [rsp+3Ch] [rbp-D4h] BYREF
  Vector3 v31; // [rsp+48h] [rbp-C8h] BYREF
  Vector3 v32; // [rsp+54h] [rbp-BCh] BYREF
  common::milog::MiLogStream v33; // [rsp+60h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 notify_ptr:1564 64 16 14 scene_ptr:1576";
  *(_QWORD *)(v2 + 16) = FightHandler::onMassiveEntityElementOpBatchNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::MassiveEntityElementOpBatchNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MassiveEntityElementOpBatchNotify>(
         (const std::shared_ptr<proto::MassiveEntityElementOpBatchNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onMassiveEntityElementOpBatchNotify",
      1564);
    common::milog::MiLogStream::operator()(&v33, off_24F3D240);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MassiveEntityElementOpBatchNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MassiveEntityElementOpBatchNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::MassiveEntityElementOpBatchNotify::attack_element_durability(notify);
    if ( !std::isfinite(v6) )
      goto LABEL_16;
    if ( proto::MassiveEntityElementOpBatchNotify::has_shape_sphere(notify) )
    {
      v7 = proto::MassiveEntityElementOpBatchNotify::shape_sphere(notify);
      v8 = proto::ShapeSphere::center(v7);
      Vector3::Vector3(&v27, v8);
      if ( !Vector3::isValid(&v27) )
        goto LABEL_16;
      v9 = proto::MassiveEntityElementOpBatchNotify::shape_sphere(notify);
      v10 = proto::ShapeSphere::radius(v9);
      if ( !std::isfinite(v10) )
        goto LABEL_16;
    }
    if ( !proto::MassiveEntityElementOpBatchNotify::has_shape_box(notify) )
      goto LABEL_17;
    v11 = proto::MassiveEntityElementOpBatchNotify::shape_box(notify);
    v12 = proto::ShapeBox::center(v11);
    Vector3::Vector3(&v28, v12);
    if ( !Vector3::isValid(&v28) )
      goto LABEL_16;
    v13 = proto::MassiveEntityElementOpBatchNotify::shape_box(notify);
    v14 = proto::ShapeBox::axis0(v13);
    Vector3::Vector3(&v29, v14);
    if ( !Vector3::isValid(&v29) )
      goto LABEL_16;
    v15 = proto::MassiveEntityElementOpBatchNotify::shape_box(notify);
    v16 = proto::ShapeBox::axis1(v15);
    Vector3::Vector3(&v30, v16);
    if ( !Vector3::isValid(&v30)
      || (v17 = proto::MassiveEntityElementOpBatchNotify::shape_box(notify),
          v18 = proto::ShapeBox::axis2(v17),
          Vector3::Vector3(&v31, v18),
          !Vector3::isValid(&v31))
      || (v19 = proto::MassiveEntityElementOpBatchNotify::shape_box(notify),
          v20 = proto::ShapeBox::extents(v19),
          Vector3::Vector3(&v32, v20),
          !Vector3::isValid(&v32)) )
    {
LABEL_16:
      v21 = 1;
    }
    else
    {
LABEL_17:
      v21 = 0;
    }
    if ( v21 )
    {
      v5 = 201;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onMassiveEntityElementOpBatchNotify",
          1579);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v33,
          (const char (*)[21])"scene_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v33);
        v5 = -1;
      }
      else
      {
        v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        NextMassiveEntityOpIndex = Scene::getNextMassiveEntityOpIndex(v22);
        proto::MassiveEntityElementOpBatchNotify::set_op_idx(notify, NextMassiveEntityOpIndex);
        v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v5 = Scene::notifyAllPlayer<proto::MassiveEntityElementOpBatchNotify>(v24, notify, 0);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  std::shared_ptr<proto::MassiveEntityElementOpBatchNotify>::~shared_ptr((std::shared_ptr<proto::MassiveEntityElementOpBatchNotify> *const)(v2 + 32));
  result = v5;
  if ( v34 == (char *)v2 )
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

// Line 1587: range 000000001312F264-0000000013130489
int32_t __cdecl FightHandler::onEntityAiSyncNotify(FightHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerAvatarComp *AvatarComp; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Monster *v15; // rax
  Monster *v16; // r14
  uint32_t Uid; // eax
  Monster *v18; // r14
  uint32_t v19; // eax
  PlayerAvatarComp *v20; // rax
  PlayerAvatarComp *v21; // r15
  uint32_t v22; // r14d
  PlayerAvatarComp *v23; // rax
  PlayerAvatarComp *v24; // rcx
  PlayerAvatarComp *v25; // r15
  uint32_t v26; // r14d
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  unsigned __int64 v31; // rax
  void (__fastcall *v32)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r8
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // rax
  Monster *v38; // rax
  Monster *v39; // r14
  uint32_t v40; // eax
  Monster *v41; // r14
  uint32_t v42; // eax
  common::milog::MiLogStream *v43; // r14
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  Scene *v46; // r14
  uint32_t v47; // eax
  int32_t result; // eax
  std::string v49; // [rsp+0h] [rbp-240h]
  uint32_t combat_end_reason; // [rsp+2Ch] [rbp-214h]
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-210h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-208h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-200h]
  proto::EntityAiSyncNotify *notify; // [rsp+48h] [rbp-1F8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+50h] [rbp-1F0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-1E8h]
  std::set<unsigned int> *__for_range_0; // [rsp+60h] [rbp-1E0h]
  const unsigned int *monster_entity_id; // [rsp+68h] [rbp-1D8h]
  common::milog::MiLogStream v59; // [rsp+70h] [rbp-1D0h] BYREF
  char v60[432]; // [rsp+90h] [rbp-1B0h] BYREF

  *(&v49._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v49._anon_0._M_allocated_capacity = (std::string::size_type)p_packet_ptr;
  v2 = (unsigned __int64)v60;
  v49._M_string_length = (std::string::size_type)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 1 11 holder:1598 48 4 22 monster_entity_id:1606 64 16 15 notify_ptr:1588 96 16 14 scene_ptr"
                        ":1590 128 16 15 entity_ptr:1608 160 16 15 entity_ptr:1658 192 16 16 monster_ptr:1664 224 48 18 n"
                        "ew_alert_set:1605 304 48 21 new_set_have_not:1642";
  *(_QWORD *)(v2 + 16) = FightHandler::onEntityAiSyncNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862731] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::EntityAiSyncNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::EntityAiSyncNotify>((const std::shared_ptr<proto::EntityAiSyncNotify> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEntityAiSyncNotify",
      1588);
    common::milog::MiLogStream::operator()(&v59, off_24F3D420);
    common::milog::MiLogStream::~MiLogStream(&v59);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EntityAiSyncNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EntityAiSyncNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEntityAiSyncNotify",
        1593);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v59, (const char (*)[21])"scene_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v59);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v59, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x51Fu, v49);
      std::string::~string(&v59);
      combat_end_reason = 2;
      if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(*(Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
      if ( PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
        combat_end_reason = 4;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 224));
      __for_range = proto::EntityAiSyncNotify::local_avatar_alerted_monster_list(notify);
      __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
      __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
      while ( __for_begin != __for_end )
      {
        if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *__for_begin;
        v8 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        v9 = *(_QWORD *)v8 + 120LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v9)(
          v2 + 128,
          v8,
          *(unsigned int *)(v2 + 48));
        if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v2 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/fight_handler.cpp",
            "onEntityAiSyncNotify",
            1611);
          v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v59, (const char (*)[8])"entity ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" not found");
          common::milog::MiLogStream::~MiLogStream(&v59);
        }
        else
        {
          std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v2 + 160));
          if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/handler/fight_handler.cpp",
              "onEntityAiSyncNotify",
              1617);
            v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v59, (const char (*)[8])"entity ");
            v13 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v14 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v12, v13);
            common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])off_24F3B8C0);
            common::milog::MiLogStream::~MiLogStream(&v59);
          }
          else
          {
            v15 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            if ( !Monster::isLogIgnored(v15) )
            {
              v16 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(*(const Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
              if ( !Monster::isExitInAlertSet(v16, Uid) )
              {
                v18 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v19 = Player::getUid(*(const Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
                Monster::onMonsterAlertChange(v18, v19, 1);
              }
              if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v20 = Player::getAvatarComp(*(Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
              if ( !PlayerAvatarComp::isMonsterExitInAlertSet(v20, *(_DWORD *)(v2 + 48)) )
              {
                if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v21 = Player::getAvatarComp(*(Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
                v22 = *(_DWORD *)(v2 + 48);
                std::shared_ptr<Monster>::shared_ptr(
                  (std::shared_ptr<Monster> *const)(v2 + 192),
                  (const std::shared_ptr<Monster> *)(v2 + 160));
                PlayerAvatarComp::onMonsterAlertChange(v21, 1, (MonsterPtr *)(v2 + 192), v22, combat_end_reason, 0LL);
                std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 192));
              }
              std::set<unsigned int>::insert(
                (std::set<unsigned int> *const)(v2 + 224),
                (const std::set<unsigned int>::value_type *)(v2 + 48));
            }
          }
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 160));
        }
        std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 128));
        ++__for_begin;
      }
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 304));
      if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = Player::getAvatarComp(*(Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
      PlayerAvatarComp::getDiffMonsterAlertSet(
        v23,
        (const std::set<unsigned int> *)(v2 + 224),
        (std::set<unsigned int> *)(v2 + 304));
      __for_range_0 = (std::set<unsigned int> *)(v2 + 304);
      __for_begin_0._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 304))._M_node;
      __for_end_0._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 304))._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        monster_entity_id = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v24 = Player::getAvatarComp(*(Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
        if ( *(_BYTE *)(((unsigned __int64)monster_entity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)monster_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_entity_id >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( PlayerAvatarComp::isMonsterExitInAlertSet(v24, *monster_entity_id) )
        {
          if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v25 = Player::getAvatarComp(*(Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
          if ( *(_BYTE *)(((unsigned __int64)monster_entity_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)monster_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_entity_id >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v26 = *monster_entity_id;
          std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)(v2 + 128), 0LL);
          PlayerAvatarComp::onMonsterAlertChange(v25, 0, (MonsterPtr *)(v2 + 128), v26, combat_end_reason, 0LL);
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 128));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/fight_handler.cpp",
            "onEntityAiSyncNotify",
            1653);
          v27 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(&v59, (const char (*)[62])byte_24F3D460);
          if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v2 + 48) = Player::getUid(*(const Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v2 + 48));
          v29 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v28,
                  (const char (*)[20])" monster_entity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, monster_entity_id);
          common::milog::MiLogStream::~MiLogStream(&v59);
        }
        v30 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v31 = (unsigned __int64)(v30->_vptr_DescribalBase + 15);
        if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
          v31 = __asan_report_load8();
        v32 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v31;
        if ( *(_BYTE *)(((unsigned __int64)monster_entity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)monster_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_entity_id >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v32(v2 + 160, v30, *monster_entity_id);
        if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v2 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/fight_handler.cpp",
            "onEntityAiSyncNotify",
            1661);
          v33 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v59, (const char (*)[8])"entity ");
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, monster_entity_id);
          common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v34, (const char (*)[11])" not found");
          common::milog::MiLogStream::~MiLogStream(&v59);
        }
        else
        {
          std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v2 + 192));
          if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 192)) )
          {
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/fight_handler.cpp",
              "onEntityAiSyncNotify",
              1667);
            v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v59, (const char (*)[8])"entity ");
            v36 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            v37 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v35, v36);
            common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v37, (const char (*)[16])off_24F3B8C0);
            common::milog::MiLogStream::~MiLogStream(&v59);
          }
          else
          {
            v38 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            if ( !Monster::isLogIgnored(v38) )
            {
              v39 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v40 = Player::getUid(*(const Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
              if ( Monster::isExitInAlertSet(v39, v40) )
              {
                v41 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v42 = Player::getUid(*(const Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
                Monster::onMonsterAlertChange(v41, v42, 0);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v59,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/fight_handler.cpp",
                  "onEntityAiSyncNotify",
                  1682);
                v43 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                        &v59,
                        (const char (*)[62])byte_24F3D460);
                if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                *(_DWORD *)(v2 + 48) = Player::getUid(*(const Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1)
                                                                             + 8));
                v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v43,
                        (const unsigned int *)(v2 + 48));
                v45 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v44,
                        (const char (*)[20])" monster_entity_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, monster_entity_id);
                common::milog::MiLogStream::~MiLogStream(&v59);
              }
            }
          }
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 192));
        }
        std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 160));
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
      }
      v46 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v47 = Player::getUid(*(const Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 8));
      v5 = Scene::notifyAllPlayer<proto::EntityAiSyncNotify>(v46, notify, v47);
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 304));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 224));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  }
  std::shared_ptr<proto::EntityAiSyncNotify>::~shared_ptr((std::shared_ptr<proto::EntityAiSyncNotify> *const)(v2 + 64));
  result = v5;
  if ( v49._M_string_length == v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 1692: range 000000001313048A-0000000013130ADE
int32_t __cdecl FightHandler::onEntityAiKillSelfNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-18Ch] BYREF
  proto::EntityAiKillSelfNotify *notify; // [rsp+18h] [rbp-188h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-180h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-170h] BYREF
  char v21[336]; // [rsp+50h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 15 monster_id:1706 64 16 15 notify_ptr:1693 96 16 14 scene_ptr:1694 128 16 16 monster_ptr"
                        ":1700 160 96 15 hp_context:1712";
  *(_QWORD *)(v2 + 16) = FightHandler::onEntityAiKillSelfNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862728] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::EntityAiKillSelfNotify>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::EntityAiKillSelfNotify>(
         (const std::shared_ptr<proto::EntityAiKillSelfNotify> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onEntityAiKillSelfNotify",
      1693);
    common::milog::MiLogStream::operator()(&v20, off_24F3D5C0);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::EntityAiKillSelfNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EntityAiKillSelfNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onEntityAiKillSelfNotify",
        1697);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v20, (const char (*)[21])"scene_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v5 = -1;
    }
    else
    {
      v6 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto::EntityAiKillSelfNotify::entity_id(notify);
      Scene::findEntity<Monster>((const Scene *const)(v2 + 128), v6);
      if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/fight_handler.cpp",
          "onEntityAiKillSelfNotify",
          1703);
        v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v20, (const char (*)[11])"entity_id=");
        val = proto::EntityAiKillSelfNotify::entity_id(notify);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])off_24F3B8C0);
        common::milog::MiLogStream::~MiLogStream(&v20);
        v5 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        *(_DWORD *)(v2 + 48) = Monster::getMonsterId(v9);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v19);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
        v11 = !HomeWorldExcelConfigMgr::isHomeAnimal(
                 &v10->design_config.txt_config_mgr.home_config_mgr,
                 *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v19);
        if ( v11 )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/fight_handler.cpp",
            "onEntityAiKillSelfNotify",
            1709);
          v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v20, (const char (*)[12])"monster_id=");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 48));
          v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v13, (const char (*)[26])off_24F3D6A0);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v20);
          v5 = -1;
        }
        else
        {
          ChangeHpContext::ChangeHpContext((ChangeHpContext *const)(v2 + 160));
          *(_DWORD *)(v2 + 160) = 12;
          v15 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          Creature::subCurHpToZero(v15, (ChangeHpContext *)(v2 + 160), 1);
          v5 = 0;
          ChangeHpContext::~ChangeHpContext((ChangeHpContext *const)(v2 + 160));
        }
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 128));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  }
  std::shared_ptr<proto::EntityAiKillSelfNotify>::~shared_ptr((std::shared_ptr<proto::EntityAiKillSelfNotify> *const)(v2 + 64));
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 1719: range 0000000013130AE0-0000000013131044
int32_t __cdecl FightHandler::onReportFightAntiCheatNotify(
        FightHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  bool *p_is_client_anticheat_report_open; // rax
  char v8; // al
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientFightReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  google::protobuf::uint32 v14; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientFightReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  google::protobuf::uint32 v16; // eax
  Player *player; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-F0h] BYREF
  unsigned int Uid; // [rsp+14h] [rbp-ECh] BYREF
  proto::ReportFightAntiCheatNotify *notify; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 15 notify_ptr:1720 64 16 15 config_ptr:1723 96 16 12 log_ptr:1730";
  *(_QWORD *)(v2 + 16) = FightHandler::onReportFightAntiCheatNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::ReportFightAntiCheatNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ReportFightAntiCheatNotify>(
         (const std::shared_ptr<proto::ReportFightAntiCheatNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fight_handler.cpp",
      "onReportFightAntiCheatNotify",
      1720);
    common::milog::MiLogStream::operator()(&v23, off_24F3D780);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ReportFightAntiCheatNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ReportFightAntiCheatNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    if ( !std::operator!=<Config>(0LL, (const std::shared_ptr<Config> *)(v2 + 64)) )
      goto LABEL_11;
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    p_is_client_anticheat_report_open = &v6->is_client_anticheat_report_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_client_anticheat_report_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_client_anticheat_report_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_client_anticheat_report_open >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_client_anticheat_report_open);
    }
    if ( !v6->is_client_anticheat_report_open )
      v8 = 1;
    else
LABEL_11:
      v8 = 0;
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/fight_handler.cpp",
        "onReportFightAntiCheatNotify",
        1726);
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v23,
             (const char (*)[24])"[AntiCheat] cheat_type:");
      val = proto::ReportFightAntiCheatNotify::cheat_type(notify);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" cheat_count:");
      Uid = proto::ReportFightAntiCheatNotify::cheat_count(notify);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v5 = 0;
    }
    else
    {
      common::tools::perf::make_shared<proto_log::AntiCheatBodyClientFightReport>();
      if ( std::operator==<proto_log::AntiCheatBodyClientFightReport>(
             0LL,
             (const std::shared_ptr<proto_log::AntiCheatBodyClientFightReport> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/fight_handler.cpp",
          "onReportFightAntiCheatNotify",
          1733);
        v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v23,
                (const char (*)[38])"client report anticheat log null uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &Uid);
        common::milog::MiLogStream::~MiLogStream(&v23);
        v5 = -1;
      }
      else
      {
        v13 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientFightReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientFightReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v14 = proto::ReportFightAntiCheatNotify::cheat_type(notify);
        proto_log::AntiCheatBodyClientFightReport::set_cheat_type(v13, v14);
        v15 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientFightReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientFightReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v16 = proto::ReportFightAntiCheatNotify::cheat_count(notify);
        proto_log::AntiCheatBodyClientFightReport::set_cheat_count(v15, v16);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyClientFightReport,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::AntiCheatBodyClientFightReport> *)(v2 + 96));
        Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_CLIENT_FIGHT_REPORT, &p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        v5 = 0;
      }
      std::shared_ptr<proto_log::AntiCheatBodyClientFightReport>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyClientFightReport> *const)(v2 + 96));
    }
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ReportFightAntiCheatNotify>::~shared_ptr((std::shared_ptr<proto::ReportFightAntiCheatNotify> *const)(v2 + 32));
  result = v5;
  if ( v24 == (char *)v2 )
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
