// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/ability_handler.cpp

// Line 33: range 00000000130DDFFC-00000000130DE5DF
int32_t __cdecl AbilityHandler::addPacketFuncToMap(AbilityHandler *const this, PacketFuncMap *process_packet_func_map)
{
  AbilityHandler **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  AbilityHandler **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  AbilityHandler **v9; // r8
  const std::_Placeholder<1> *v10; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v11; // rax
  AbilityHandler **v12; // r8
  const std::_Placeholder<1> *v13; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v14; // rax
  __m128i v15; // [rsp+0h] [rbp-D0h] BYREF
  __m128i v16; // [rsp+10h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+20h] [rbp-B0h]
  AbilityHandler *thisa; // [rsp+28h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+3Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v20; // [rsp+40h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+48h] [rbp-88h] BYREF
  int (*__f[2])(AbilityHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+50h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (AbilityHandler::*)(std::shared_ptr<common::minet::Packet>),AbilityHandler*,const std::_Placeholder<1>&>::type v23; // [rsp+60h] [rbp-70h] BYREF
  common::milog::MiLogStream v24; // [rsp+80h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 1135;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v20._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v20, &__y) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/ability_handler.cpp",
      "addPacketFuncToMap",
      36);
    common::milog::MiLogStream::operator()(&v24, format, 1135LL);
    common::milog::MiLogStream::~MiLogStream(&v24);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    v15.m128i_i64[0] = (__int64)AbilityHandler::onClientAbilityInitFinishNotify;
    v15.m128i_i64[1] = 0LL;
    *(__m128i *)__f = _mm_load_si128(&v15);
    std::bind<int (AbilityHandler::*)(std::shared_ptr<common::minet::Packet>),AbilityHandler*,std::_Placeholder<1> const&>(
      &v23,
      __f,
      (AbilityHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v2,
      v3);
    __x = 1135;
    v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (AbilityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(AbilityHandler*,std::_Placeholder<1>)>>(
      v5,
      &v23);
    __x = 1103;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v20._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v20, &__y) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/ability_handler.cpp",
        "addPacketFuncToMap",
        37);
      common::milog::MiLogStream::operator()(&v24, format, 1103LL);
      common::milog::MiLogStream::~MiLogStream(&v24);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      v16.m128i_i64[0] = (__int64)AbilityHandler::onClientAbilitiesInitFinishCombineNotify;
      v16.m128i_i64[1] = 0LL;
      *(__m128i *)__f = _mm_load_si128(&v16);
      std::bind<int (AbilityHandler::*)(std::shared_ptr<common::minet::Packet>),AbilityHandler*,std::_Placeholder<1> const&>(
        &v23,
        __f,
        (AbilityHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v6,
        v7);
      __x = 1103;
      v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (AbilityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(AbilityHandler*,std::_Placeholder<1>)>>(
        v8,
        &v23);
      __x = 1175;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v20._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v20, &__y) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/ability_handler.cpp",
          "addPacketFuncToMap",
          38);
        common::milog::MiLogStream::operator()(&v24, format, 1175LL);
        common::milog::MiLogStream::~MiLogStream(&v24);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        __f[0] = (int (*)(AbilityHandler *, std::shared_ptr<common::minet::Packet>))AbilityHandler::onClientAbilityChangeNotify;
        __f[1] = 0LL;
        std::bind<int (AbilityHandler::*)(std::shared_ptr<common::minet::Packet>),AbilityHandler*,std::_Placeholder<1> const&>(
          &v23,
          __f,
          (AbilityHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v9,
          v10);
        __x = 1175;
        v11 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (AbilityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(AbilityHandler*,std::_Placeholder<1>)>>(
          v11,
          &v23);
        __x = 1182;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v20._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v20, &__y) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/ability_handler.cpp",
            "addPacketFuncToMap",
            39);
          common::milog::MiLogStream::operator()(&v24, format, 1182LL);
          common::milog::MiLogStream::~MiLogStream(&v24);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          __f[0] = (int (*)(AbilityHandler *, std::shared_ptr<common::minet::Packet>))AbilityHandler::onClientRemoveCombatEndModifierNotify;
          __f[1] = 0LL;
          std::bind<int (AbilityHandler::*)(std::shared_ptr<common::minet::Packet>),AbilityHandler*,std::_Placeholder<1> const&>(
            &v23,
            __f,
            (AbilityHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v12,
            v13);
          __x = 1182;
          v14 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (AbilityHandler::*)(std::shared_ptr<common::minet::Packet>) ()(AbilityHandler*,std::_Placeholder<1>)>>(
            v14,
            &v23);
          return 0;
        }
      }
    }
  }
};

// Line 44: range 00000000130DE9D4-00000000130DEBFA
int32_t __cdecl AbilityHandler::addBytesFuncToMap(AbilityHandler *const this, BytesFuncMap *process_bytes_func_map)
{
  std::function<int(const std::string&)> *v3; // rax
  std::function<int(const std::string&)> *v4; // rax
  std::unordered_map<unsigned int,std::function<int(const std::string&)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<int(const std::string&)> >,false> v6; // [rsp+20h] [rbp-40h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<int(const std::string&)> >,false> __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  __x = 1198;
  __y._M_cur = std::unordered_map<unsigned int,std::function<int ()(std::string const&)>>::find(
                 process_bytes_func_map,
                 &__x)._M_cur;
  v6._M_cur = std::unordered_map<unsigned int,std::function<int ()(std::string const&)>>::end(process_bytes_func_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::function<int ()(std::string const&)>>,false>(
         &v6,
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/ability_handler.cpp",
      "addBytesFuncToMap",
      45);
    common::milog::MiLogStream::operator()(&v8, format, 1198LL);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<int(const std::string&)> >,false>::__node_type *)this;
    __x = 1198;
    v3 = std::unordered_map<unsigned int,std::function<int ()(std::string const&)>>::operator[](
           process_bytes_func_map,
           &__x);
    std::function<int ()(std::string const&)>::operator=<AbilityHandler::addBytesFuncToMap(std::unordered_map<unsigned int,std::function<int ()(std::string const&)>> &)::{lambda(std::string const&)#1}>(
      v3,
      (AbilityHandler::addBytesFuncToMap::<lambda(const string&)> *)&__y);
    __x = 1181;
    __y._M_cur = std::unordered_map<unsigned int,std::function<int ()(std::string const&)>>::find(
                   process_bytes_func_map,
                   &__x)._M_cur;
    v6._M_cur = std::unordered_map<unsigned int,std::function<int ()(std::string const&)>>::end(process_bytes_func_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::function<int ()(std::string const&)>>,false>(
           &v6,
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/ability_handler.cpp",
        "addBytesFuncToMap",
        46);
      common::milog::MiLogStream::operator()(&v8, format, 1181LL);
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    else
    {
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::function<int(const std::string&)> >,false>::__node_type *)this;
      __x = 1181;
      v4 = std::unordered_map<unsigned int,std::function<int ()(std::string const&)>>::operator[](
             process_bytes_func_map,
             &__x);
      std::function<int ()(std::string const&)>::operator=<AbilityHandler::addBytesFuncToMap(std::unordered_map<unsigned int,std::function<int ()(std::string const&)>> &)::{lambda(std::string const&)#2}>(
        v4,
        (AbilityHandler::addBytesFuncToMap::<lambda(const string&)> *)&__y);
      return 0;
    }
  }
};

// Line 45: range 00000000130DE5E0-00000000130DE7E3
int __cdecl AbilityHandler::addBytesFuncToMap(std::unordered_map<unsigned int,std::function<int ()(std::string const&)>> &)::{lambda(std::string const&)#1}::operator()(
        const AbilityHandler::addBytesFuncToMap::<lambda(const string&)> *const __closure,
        const std::string *bs)
{
  proto::AbilityInvocationsNotify *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // r14d
  int result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-D0h] BYREF
  char v8[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (proto::AbilityInvocationsNotify *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (proto::AbilityInvocationsNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 48 48 9 notify:45";
  v2->invokes_.arena_ = (google::protobuf::Arena *)AbilityHandler::addBytesFuncToMap(std::unordered_map<unsigned int,std::function<int ()(std::string const&)>> &)::{lambda(std::string const&)#1}::operator();
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::AbilityInvocationsNotify::AbilityInvocationsNotify(v2 + 1);
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(&v2[1], bs) != 1 )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ability_handler.cpp",
      "operator()",
      45);
    common::milog::MiLogStream::operator()(&v7, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = AbilityHandler::onAbilityInvocationsNotify(__closure->__this, v2 + 1);
  }
  proto::AbilityInvocationsNotify::~AbilityInvocationsNotify(v2 + 1);
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

// Line 46: range 00000000130DE7E4-00000000130DE9D2
int __cdecl AbilityHandler::addBytesFuncToMap(std::unordered_map<unsigned int,std::function<int ()(std::string const&)>> &)::{lambda(std::string const&)#2}::operator()(
        const AbilityHandler::addBytesFuncToMap::<lambda(const string&)> *const __closure,
        const std::string *bs)
{
  proto::ClientAIStateNotify *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  int result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-B0h] BYREF
  char v8[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (proto::ClientAIStateNotify *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (proto::ClientAIStateNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 32 32 9 notify:46";
  *(_QWORD *)&v2->entity_id_ = AbilityHandler::addBytesFuncToMap(std::unordered_map<unsigned int,std::function<int ()(std::string const&)>> &)::{lambda(std::string const&)#2}::operator();
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::ClientAIStateNotify::ClientAIStateNotify(v2 + 1);
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(&v2[1], bs) != 1 )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ability_handler.cpp",
      "operator()",
      46);
    common::milog::MiLogStream::operator()(&v7, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = AbilityHandler::onClientAIStateNotify(__closure->__this, v2 + 1);
  }
  proto::ClientAIStateNotify::~ClientAIStateNotify(v2 + 1);
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 51: range 00000000130DEBFB-00000000130DEC88
bool __cdecl canHandleAbilityInvoke(Player *player, Creature *creature)
{
  Creature *v2; // rdx
  unsigned __int64 v3; // rax

  v2 = creature;
  if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)creature->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  return (*(unsigned int (__fastcall **)(Creature *))v3)(v2) - 7 <= 2 || Player::isAuthorityOf(player, creature);
};

// Line 65: range 00000000130DEC8A-00000000130E0F9C
int32_t __cdecl AbilityHandler::onAbilityInvocationFixedNotify(
        AbilityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerBasicComp *BasicComp; // rax
  const proto::AbilityInvokeEntry *v7; // rax
  uint32_t v8; // eax
  const proto::AbilityInvokeEntry *v9; // rax
  Creature *v10; // rcx
  char v11; // al
  Creature *v12; // rax
  Creature *v13; // rax
  AbilityComp *AbilityComp; // r15
  Player *v15; // r14
  const proto::AbilityInvokeEntry *v16; // rax
  common::milog::MiLogStream *v17; // rax
  Scene *v18; // r14
  const proto::AbilityInvokeEntry *v19; // rax
  const proto::AbilityInvokeEntry *v20; // rax
  const proto::AbilityInvokeEntry *v21; // rax
  const proto::AbilityInvokeEntry *v22; // rax
  uint32_t v23; // r15d
  Player *v24; // r14
  Scene *v25; // rax
  uint32_t *v26; // rdx
  GameserverService *v27; // rax
  PlayerSendPacketController *p_player_send_packet_controller; // r14
  const proto::AbilityInvokeEntry *v29; // rax
  const proto::AbilityInvokeEntry *v30; // rax
  uint32_t v31; // eax
  const proto::AbilityInvokeEntry *v32; // rax
  Creature *v33; // rcx
  char v34; // al
  Creature *v35; // rax
  Creature *v36; // rax
  AbilityComp *v37; // r15
  Player *v38; // r14
  const proto::AbilityInvokeEntry *v39; // rax
  common::milog::MiLogStream *v40; // rax
  Scene *v41; // r14
  const proto::AbilityInvokeEntry *v42; // rax
  const proto::AbilityInvokeEntry *v43; // rax
  const proto::AbilityInvokeEntry *v44; // rax
  const proto::AbilityInvokeEntry *v45; // rax
  uint32_t v46; // r15d
  Player *v47; // r14
  Scene *v48; // rax
  uint32_t *v49; // rdx
  GameserverService *v50; // rax
  PlayerSendPacketController *v51; // r14
  const proto::AbilityInvokeEntry *v52; // rax
  const proto::AbilityInvokeEntry *v53; // rax
  uint32_t v54; // eax
  const proto::AbilityInvokeEntry *v55; // rax
  Creature *v56; // rcx
  char v57; // al
  Creature *v58; // rax
  Creature *v59; // rax
  AbilityComp *v60; // r15
  Player *v61; // r14
  const proto::AbilityInvokeEntry *v62; // rax
  common::milog::MiLogStream *v63; // rax
  Scene *v64; // r14
  const proto::AbilityInvokeEntry *v65; // rax
  const proto::AbilityInvokeEntry *v66; // rax
  const proto::AbilityInvokeEntry *v67; // rax
  const proto::AbilityInvokeEntry *v68; // rax
  uint32_t v69; // r15d
  Player *v70; // r14
  Scene *v71; // rax
  uint32_t *v72; // rdx
  GameserverService *v73; // rax
  PlayerSendPacketController *v74; // r14
  const proto::AbilityInvokeEntry *v75; // rax
  const proto::AbilityInvokeEntry *v76; // rax
  uint32_t v77; // eax
  const proto::AbilityInvokeEntry *v78; // rax
  Creature *v79; // rcx
  char v80; // al
  Creature *v81; // rax
  Creature *v82; // rax
  AbilityComp *v83; // r15
  Player *v84; // r14
  const proto::AbilityInvokeEntry *v85; // rax
  common::milog::MiLogStream *v86; // rax
  Scene *v87; // r14
  const proto::AbilityInvokeEntry *v88; // rax
  const proto::AbilityInvokeEntry *v89; // rax
  const proto::AbilityInvokeEntry *v90; // rax
  const proto::AbilityInvokeEntry *v91; // rax
  uint32_t v92; // r15d
  Player *v93; // r14
  Scene *v94; // rax
  uint32_t *v95; // rdx
  GameserverService *v96; // rax
  PlayerSendPacketController *v97; // r14
  const proto::AbilityInvokeEntry *v98; // rax
  const proto::AbilityInvokeEntry *v99; // rax
  uint32_t v100; // eax
  const proto::AbilityInvokeEntry *v101; // rax
  Creature *v102; // rcx
  char v103; // al
  Creature *v104; // rax
  Creature *v105; // rax
  AbilityComp *v106; // r15
  Player *v107; // r14
  const proto::AbilityInvokeEntry *v108; // rax
  common::milog::MiLogStream *v109; // rax
  Scene *v110; // r14
  const proto::AbilityInvokeEntry *v111; // rax
  const proto::AbilityInvokeEntry *v112; // rax
  const proto::AbilityInvokeEntry *v113; // rax
  const proto::AbilityInvokeEntry *v114; // rax
  uint32_t v115; // r15d
  Player *v116; // r14
  Scene *v117; // rax
  uint32_t *v118; // rdx
  GameserverService *v119; // rax
  PlayerSendPacketController *v120; // r14
  const proto::AbilityInvokeEntry *v121; // rax
  const proto::AbilityInvokeEntry *v122; // rax
  uint32_t v123; // eax
  const proto::AbilityInvokeEntry *v124; // rax
  Creature *v125; // rcx
  char v126; // al
  Creature *v127; // rax
  Creature *v128; // rax
  AbilityComp *v129; // r15
  Player *v130; // r14
  const proto::AbilityInvokeEntry *v131; // rax
  common::milog::MiLogStream *v132; // rax
  Scene *v133; // r14
  const proto::AbilityInvokeEntry *v134; // rax
  const proto::AbilityInvokeEntry *v135; // rax
  const proto::AbilityInvokeEntry *v136; // rax
  const proto::AbilityInvokeEntry *v137; // rax
  uint32_t v138; // r15d
  Player *v139; // r14
  Scene *v140; // rax
  uint32_t *v141; // rdx
  GameserverService *v142; // rax
  PlayerSendPacketController *v143; // r14
  const proto::AbilityInvokeEntry *v144; // rax
  GameserverService *v145; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t result; // eax
  std::string v148; // [rsp+0h] [rbp-310h]
  bool is_ignore_auth; // [rsp+26h] [rbp-2EAh]
  bool is_ignore_auth_0; // [rsp+27h] [rbp-2E9h]
  bool is_ignore_auth_1; // [rsp+28h] [rbp-2E8h]
  bool is_ignore_auth_2; // [rsp+29h] [rbp-2E7h]
  bool is_ignore_auth_3; // [rsp+2Ah] [rbp-2E6h]
  bool is_ignore_auth_4; // [rsp+2Bh] [rbp-2E5h]
  std::set<unsigned int>::value_type __x; // [rsp+2Ch] [rbp-2E4h] BYREF
  uint32_t uid; // [rsp+30h] [rbp-2E0h]
  uint32_t uid_0; // [rsp+34h] [rbp-2DCh]
  uint32_t uid_1; // [rsp+38h] [rbp-2D8h]
  uint32_t uid_2; // [rsp+3Ch] [rbp-2D4h]
  uint32_t uid_3; // [rsp+40h] [rbp-2D0h]
  uint32_t uid_4; // [rsp+44h] [rbp-2CCh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-2C8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-2C0h] BYREF
  const proto::AbilityInvocationFixedNotify *notify; // [rsp+58h] [rbp-2B8h]
  std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-2B0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-2A8h]
  std::vector<unsigned int> *__for_range_1; // [rsp+70h] [rbp-2A0h]
  std::vector<unsigned int> *__for_range_2; // [rsp+78h] [rbp-298h]
  std::vector<unsigned int> *__for_range_3; // [rsp+80h] [rbp-290h]
  std::vector<unsigned int> *__for_range_4; // [rsp+88h] [rbp-288h]
  common::milog::MiLogStream v171; // [rsp+90h] [rbp-280h] BYREF
  proto::AbilityInvokeEntry p_invoke; // [rsp+B0h] [rbp-260h] BYREF
  char v173[528]; // [rsp+100h] [rbp-210h] BYREF

  *(&v148._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v148._anon_0._M_allocated_capacity = (std::string::size_type)p_packet_ptr;
  v2 = (unsigned __int64)v173;
  v148._M_dataplus._M_p = v173;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 holder:74 64 4 13 entity_id:125 80 16 13 notify_ptr:66 112 16 12 scene_ptr:68 144 16 16"
                        " creature_ptr:125 176 24 19 forward_uid_vec:125 240 48 13 notify_map:75 320 48 19 fight_prop_gua"
                        "rd:76 400 48 15 peer_id_set:125";
  *(_QWORD *)(v2 + 16) = AbilityHandler::onAbilityInvocationFixedNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862729] = -218959118;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862734] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AbilityInvocationFixedNotify>((common::minet::Packet *const)(v2 + 80));
  if ( std::operator==<proto::AbilityInvocationFixedNotify const>(
         (const std::shared_ptr<const proto::AbilityInvocationFixedNotify> *)(v2 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v171,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ability_handler.cpp",
      "onAbilityInvocationFixedNotify",
      66);
    common::milog::MiLogStream::operator()(&v171, off_24F2A8E0);
    common::milog::MiLogStream::~MiLogStream(&v171);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::AbilityInvocationFixedNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AbilityInvocationFixedNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 112));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 112), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v171,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/ability_handler.cpp",
        "onAbilityInvocationFixedNotify",
        71);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v171, (const char (*)[18])"scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v171);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v171, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x51Eu, v148);
      std::string::~string(&v171);
      std::map<unsigned int,proto::AbilityInvocationsNotify>::map((std::map<unsigned int,proto::AbilityInvocationsNotify> *const)(v2 + 240));
      FightPropGuard::FightPropGuard((FightPropGuard *const)(v2 + 320));
      if ( proto::AbilityInvocationFixedNotify::has_invoke1st(notify) )
      {
        v7 = proto::AbilityInvocationFixedNotify::invoke1st(notify);
        *(_DWORD *)(v2 + 64) = proto::AbilityInvokeEntry::entity_id(v7);
        v8 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        Scene::findEntityWithDead<Creature>((const Scene *const)(v2 + 144), v8);
        v9 = proto::AbilityInvocationFixedNotify::invoke1st(notify);
        is_ignore_auth = proto::AbilityInvokeEntry::is_ignore_auth(v9);
        if ( !std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
          goto LABEL_19;
        if ( is_ignore_auth )
          goto LABEL_18;
        v10 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( canHandleAbilityInvoke(*(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8), v10) )
LABEL_18:
          v11 = 1;
        else
LABEL_19:
          v11 = 0;
        if ( v11 )
        {
          v12 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          FightPropGuard::addCreature((FightPropGuard *const)(v2 + 320), v12, 1);
          v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          AbilityComp = Creature::getAbilityComp(v13);
          if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v15 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
          v16 = proto::AbilityInvocationFixedNotify::invoke1st(notify);
          AbilityComp::dispatchSingleAbilityInvoke(AbilityComp, v16, v15);
        }
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v171,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/ability_handler.cpp",
            "onAbilityInvocationFixedNotify",
            105);
          v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v171,
                  (const char (*)[29])"creature is null, entity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v171);
          v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v19 = proto::AbilityInvocationFixedNotify::invoke1st(notify);
          Scene::tryUpdateDieCreatureRecord(v18, v19);
        }
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 400));
        v20 = proto::AbilityInvocationFixedNotify::invoke1st(notify);
        if ( proto::AbilityInvokeEntry::forward_peer(v20) )
        {
          v21 = proto::AbilityInvocationFixedNotify::invoke1st(notify);
          __x = proto::AbilityInvokeEntry::forward_peer(v21);
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 400), &__x);
        }
        v22 = proto::AbilityInvocationFixedNotify::invoke1st(notify);
        LODWORD(v148._M_string_length) = proto::AbilityInvokeEntry::forward_type(v22);
        v23 = *(_DWORD *)(v2 + 64);
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v24 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
        v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        FightHandler::getForwardSendPlayerUidVec(
          (std::vector<unsigned int> *)(v2 + 176),
          v25,
          v24,
          v23,
          v148._M_string_length,
          !is_ignore_auth,
          (const std::set<unsigned int> *)(v2 + 400));
        __for_range = (std::vector<unsigned int> *)(v2 + 176);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 176))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v26 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          uid = *v26;
          v27 = ServiceBox::findService<GameserverService>();
          p_player_send_packet_controller = &GameserverService::getGameThreadLocal(v27)->player_send_packet_controller;
          v29 = proto::AbilityInvocationFixedNotify::invoke1st(notify);
          proto::AbilityInvokeEntry::AbilityInvokeEntry(&p_invoke, v29);
          PlayerSendPacketController::addAbilityInvoke(p_player_send_packet_controller, uid, &p_invoke);
          proto::AbilityInvokeEntry::~AbilityInvokeEntry(&p_invoke);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 400));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 144));
      }
      if ( proto::AbilityInvocationFixedNotify::has_invoke2nd(notify) )
      {
        v30 = proto::AbilityInvocationFixedNotify::invoke2nd(notify);
        *(_DWORD *)(v2 + 64) = proto::AbilityInvokeEntry::entity_id(v30);
        v31 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        Scene::findEntityWithDead<Creature>((const Scene *const)(v2 + 144), v31);
        v32 = proto::AbilityInvocationFixedNotify::invoke2nd(notify);
        is_ignore_auth_0 = proto::AbilityInvokeEntry::is_ignore_auth(v32);
        if ( !std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
          goto LABEL_43;
        if ( is_ignore_auth_0 )
          goto LABEL_42;
        v33 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( canHandleAbilityInvoke(*(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8), v33) )
LABEL_42:
          v34 = 1;
        else
LABEL_43:
          v34 = 0;
        if ( v34 )
        {
          v35 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          FightPropGuard::addCreature((FightPropGuard *const)(v2 + 320), v35, 1);
          v36 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          v37 = Creature::getAbilityComp(v36);
          if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v38 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
          v39 = proto::AbilityInvocationFixedNotify::invoke2nd(notify);
          AbilityComp::dispatchSingleAbilityInvoke(v37, v39, v38);
        }
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v171,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/ability_handler.cpp",
            "onAbilityInvocationFixedNotify",
            109);
          v40 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v171,
                  (const char (*)[29])"creature is null, entity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v171);
          v41 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v42 = proto::AbilityInvocationFixedNotify::invoke2nd(notify);
          Scene::tryUpdateDieCreatureRecord(v41, v42);
        }
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 400));
        v43 = proto::AbilityInvocationFixedNotify::invoke2nd(notify);
        if ( proto::AbilityInvokeEntry::forward_peer(v43) )
        {
          v44 = proto::AbilityInvocationFixedNotify::invoke2nd(notify);
          __x = proto::AbilityInvokeEntry::forward_peer(v44);
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 400), &__x);
        }
        v45 = proto::AbilityInvocationFixedNotify::invoke2nd(notify);
        LODWORD(v148._M_string_length) = proto::AbilityInvokeEntry::forward_type(v45);
        v46 = *(_DWORD *)(v2 + 64);
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v47 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
        v48 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        FightHandler::getForwardSendPlayerUidVec(
          (std::vector<unsigned int> *)(v2 + 176),
          v48,
          v47,
          v46,
          v148._M_string_length,
          !is_ignore_auth_0,
          (const std::set<unsigned int> *)(v2 + 400));
        __for_range_0 = (std::vector<unsigned int> *)(v2 + 176);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 176))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v49 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          uid_0 = *v49;
          v50 = ServiceBox::findService<GameserverService>();
          v51 = &GameserverService::getGameThreadLocal(v50)->player_send_packet_controller;
          v52 = proto::AbilityInvocationFixedNotify::invoke2nd(notify);
          proto::AbilityInvokeEntry::AbilityInvokeEntry(&p_invoke, v52);
          PlayerSendPacketController::addAbilityInvoke(v51, uid_0, &p_invoke);
          proto::AbilityInvokeEntry::~AbilityInvokeEntry(&p_invoke);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 400));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 144));
      }
      if ( proto::AbilityInvocationFixedNotify::has_invoke3rd(notify) )
      {
        v53 = proto::AbilityInvocationFixedNotify::invoke3rd(notify);
        *(_DWORD *)(v2 + 64) = proto::AbilityInvokeEntry::entity_id(v53);
        v54 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        Scene::findEntityWithDead<Creature>((const Scene *const)(v2 + 144), v54);
        v55 = proto::AbilityInvocationFixedNotify::invoke3rd(notify);
        is_ignore_auth_1 = proto::AbilityInvokeEntry::is_ignore_auth(v55);
        if ( !std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
          goto LABEL_67;
        if ( is_ignore_auth_1 )
          goto LABEL_66;
        v56 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( canHandleAbilityInvoke(*(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8), v56) )
LABEL_66:
          v57 = 1;
        else
LABEL_67:
          v57 = 0;
        if ( v57 )
        {
          v58 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          FightPropGuard::addCreature((FightPropGuard *const)(v2 + 320), v58, 1);
          v59 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          v60 = Creature::getAbilityComp(v59);
          if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v61 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
          v62 = proto::AbilityInvocationFixedNotify::invoke3rd(notify);
          AbilityComp::dispatchSingleAbilityInvoke(v60, v62, v61);
        }
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v171,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/ability_handler.cpp",
            "onAbilityInvocationFixedNotify",
            113);
          v63 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v171,
                  (const char (*)[29])"creature is null, entity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v171);
          v64 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v65 = proto::AbilityInvocationFixedNotify::invoke3rd(notify);
          Scene::tryUpdateDieCreatureRecord(v64, v65);
        }
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 400));
        v66 = proto::AbilityInvocationFixedNotify::invoke3rd(notify);
        if ( proto::AbilityInvokeEntry::forward_peer(v66) )
        {
          v67 = proto::AbilityInvocationFixedNotify::invoke3rd(notify);
          __x = proto::AbilityInvokeEntry::forward_peer(v67);
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 400), &__x);
        }
        v68 = proto::AbilityInvocationFixedNotify::invoke3rd(notify);
        LODWORD(v148._M_string_length) = proto::AbilityInvokeEntry::forward_type(v68);
        v69 = *(_DWORD *)(v2 + 64);
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v70 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
        v71 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        FightHandler::getForwardSendPlayerUidVec(
          (std::vector<unsigned int> *)(v2 + 176),
          v71,
          v70,
          v69,
          v148._M_string_length,
          !is_ignore_auth_1,
          (const std::set<unsigned int> *)(v2 + 400));
        __for_range_1 = (std::vector<unsigned int> *)(v2 + 176);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 176))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v72 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v72 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          uid_1 = *v72;
          v73 = ServiceBox::findService<GameserverService>();
          v74 = &GameserverService::getGameThreadLocal(v73)->player_send_packet_controller;
          v75 = proto::AbilityInvocationFixedNotify::invoke3rd(notify);
          proto::AbilityInvokeEntry::AbilityInvokeEntry(&p_invoke, v75);
          PlayerSendPacketController::addAbilityInvoke(v74, uid_1, &p_invoke);
          proto::AbilityInvokeEntry::~AbilityInvokeEntry(&p_invoke);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 400));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 144));
      }
      if ( proto::AbilityInvocationFixedNotify::has_invoke4th(notify) )
      {
        v76 = proto::AbilityInvocationFixedNotify::invoke4th(notify);
        *(_DWORD *)(v2 + 64) = proto::AbilityInvokeEntry::entity_id(v76);
        v77 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        Scene::findEntityWithDead<Creature>((const Scene *const)(v2 + 144), v77);
        v78 = proto::AbilityInvocationFixedNotify::invoke4th(notify);
        is_ignore_auth_2 = proto::AbilityInvokeEntry::is_ignore_auth(v78);
        if ( !std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
          goto LABEL_91;
        if ( is_ignore_auth_2 )
          goto LABEL_90;
        v79 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( canHandleAbilityInvoke(*(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8), v79) )
LABEL_90:
          v80 = 1;
        else
LABEL_91:
          v80 = 0;
        if ( v80 )
        {
          v81 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          FightPropGuard::addCreature((FightPropGuard *const)(v2 + 320), v81, 1);
          v82 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          v83 = Creature::getAbilityComp(v82);
          if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v84 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
          v85 = proto::AbilityInvocationFixedNotify::invoke4th(notify);
          AbilityComp::dispatchSingleAbilityInvoke(v83, v85, v84);
        }
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v171,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/ability_handler.cpp",
            "onAbilityInvocationFixedNotify",
            117);
          v86 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v171,
                  (const char (*)[29])"creature is null, entity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v171);
          v87 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v88 = proto::AbilityInvocationFixedNotify::invoke4th(notify);
          Scene::tryUpdateDieCreatureRecord(v87, v88);
        }
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 400));
        v89 = proto::AbilityInvocationFixedNotify::invoke4th(notify);
        if ( proto::AbilityInvokeEntry::forward_peer(v89) )
        {
          v90 = proto::AbilityInvocationFixedNotify::invoke4th(notify);
          __x = proto::AbilityInvokeEntry::forward_peer(v90);
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 400), &__x);
        }
        v91 = proto::AbilityInvocationFixedNotify::invoke4th(notify);
        LODWORD(v148._M_string_length) = proto::AbilityInvokeEntry::forward_type(v91);
        v92 = *(_DWORD *)(v2 + 64);
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v93 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
        v94 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        FightHandler::getForwardSendPlayerUidVec(
          (std::vector<unsigned int> *)(v2 + 176),
          v94,
          v93,
          v92,
          v148._M_string_length,
          !is_ignore_auth_2,
          (const std::set<unsigned int> *)(v2 + 400));
        __for_range_2 = (std::vector<unsigned int> *)(v2 + 176);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 176))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range_2)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v95 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v95 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          uid_2 = *v95;
          v96 = ServiceBox::findService<GameserverService>();
          v97 = &GameserverService::getGameThreadLocal(v96)->player_send_packet_controller;
          v98 = proto::AbilityInvocationFixedNotify::invoke4th(notify);
          proto::AbilityInvokeEntry::AbilityInvokeEntry(&p_invoke, v98);
          PlayerSendPacketController::addAbilityInvoke(v97, uid_2, &p_invoke);
          proto::AbilityInvokeEntry::~AbilityInvokeEntry(&p_invoke);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 400));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 144));
      }
      if ( proto::AbilityInvocationFixedNotify::has_invoke5th(notify) )
      {
        v99 = proto::AbilityInvocationFixedNotify::invoke5th(notify);
        *(_DWORD *)(v2 + 64) = proto::AbilityInvokeEntry::entity_id(v99);
        v100 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        Scene::findEntityWithDead<Creature>((const Scene *const)(v2 + 144), v100);
        v101 = proto::AbilityInvocationFixedNotify::invoke5th(notify);
        is_ignore_auth_3 = proto::AbilityInvokeEntry::is_ignore_auth(v101);
        if ( !std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
          goto LABEL_115;
        if ( is_ignore_auth_3 )
          goto LABEL_114;
        v102 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( canHandleAbilityInvoke(*(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8), v102) )
LABEL_114:
          v103 = 1;
        else
LABEL_115:
          v103 = 0;
        if ( v103 )
        {
          v104 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          FightPropGuard::addCreature((FightPropGuard *const)(v2 + 320), v104, 1);
          v105 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          v106 = Creature::getAbilityComp(v105);
          if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v107 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
          v108 = proto::AbilityInvocationFixedNotify::invoke5th(notify);
          AbilityComp::dispatchSingleAbilityInvoke(v106, v108, v107);
        }
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v171,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/ability_handler.cpp",
            "onAbilityInvocationFixedNotify",
            121);
          v109 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   &v171,
                   (const char (*)[29])"creature is null, entity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v109, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v171);
          v110 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v111 = proto::AbilityInvocationFixedNotify::invoke5th(notify);
          Scene::tryUpdateDieCreatureRecord(v110, v111);
        }
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 400));
        v112 = proto::AbilityInvocationFixedNotify::invoke5th(notify);
        if ( proto::AbilityInvokeEntry::forward_peer(v112) )
        {
          v113 = proto::AbilityInvocationFixedNotify::invoke5th(notify);
          __x = proto::AbilityInvokeEntry::forward_peer(v113);
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 400), &__x);
        }
        v114 = proto::AbilityInvocationFixedNotify::invoke5th(notify);
        LODWORD(v148._M_string_length) = proto::AbilityInvokeEntry::forward_type(v114);
        v115 = *(_DWORD *)(v2 + 64);
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v116 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
        v117 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        FightHandler::getForwardSendPlayerUidVec(
          (std::vector<unsigned int> *)(v2 + 176),
          v117,
          v116,
          v115,
          v148._M_string_length,
          !is_ignore_auth_3,
          (const std::set<unsigned int> *)(v2 + 400));
        __for_range_3 = (std::vector<unsigned int> *)(v2 + 176);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 176))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range_3)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v118 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v118 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v118 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v118 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          uid_3 = *v118;
          v119 = ServiceBox::findService<GameserverService>();
          v120 = &GameserverService::getGameThreadLocal(v119)->player_send_packet_controller;
          v121 = proto::AbilityInvocationFixedNotify::invoke5th(notify);
          proto::AbilityInvokeEntry::AbilityInvokeEntry(&p_invoke, v121);
          PlayerSendPacketController::addAbilityInvoke(v120, uid_3, &p_invoke);
          proto::AbilityInvokeEntry::~AbilityInvokeEntry(&p_invoke);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 400));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 144));
      }
      if ( proto::AbilityInvocationFixedNotify::has_invoke6th(notify) )
      {
        v122 = proto::AbilityInvocationFixedNotify::invoke6th(notify);
        *(_DWORD *)(v2 + 64) = proto::AbilityInvokeEntry::entity_id(v122);
        v123 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        Scene::findEntityWithDead<Creature>((const Scene *const)(v2 + 144), v123);
        v124 = proto::AbilityInvocationFixedNotify::invoke6th(notify);
        is_ignore_auth_4 = proto::AbilityInvokeEntry::is_ignore_auth(v124);
        if ( !std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
          goto LABEL_139;
        if ( is_ignore_auth_4 )
          goto LABEL_138;
        v125 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( canHandleAbilityInvoke(*(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8), v125) )
LABEL_138:
          v126 = 1;
        else
LABEL_139:
          v126 = 0;
        if ( v126 )
        {
          v127 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          FightPropGuard::addCreature((FightPropGuard *const)(v2 + 320), v127, 1);
          v128 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          v129 = Creature::getAbilityComp(v128);
          if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v130 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
          v131 = proto::AbilityInvocationFixedNotify::invoke6th(notify);
          AbilityComp::dispatchSingleAbilityInvoke(v129, v131, v130);
        }
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v171,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/ability_handler.cpp",
            "onAbilityInvocationFixedNotify",
            125);
          v132 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   &v171,
                   (const char (*)[29])"creature is null, entity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v132, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v171);
          v133 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v134 = proto::AbilityInvocationFixedNotify::invoke6th(notify);
          Scene::tryUpdateDieCreatureRecord(v133, v134);
        }
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 400));
        v135 = proto::AbilityInvocationFixedNotify::invoke6th(notify);
        if ( proto::AbilityInvokeEntry::forward_peer(v135) )
        {
          v136 = proto::AbilityInvocationFixedNotify::invoke6th(notify);
          __x = proto::AbilityInvokeEntry::forward_peer(v136);
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 400), &__x);
        }
        v137 = proto::AbilityInvocationFixedNotify::invoke6th(notify);
        LODWORD(v148._M_string_length) = proto::AbilityInvokeEntry::forward_type(v137);
        v138 = *(_DWORD *)(v2 + 64);
        if ( *(_BYTE *)(((*(&v148._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v139 = *(Player **)(*(&v148._anon_0._M_allocated_capacity + 1) + 8);
        v140 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        FightHandler::getForwardSendPlayerUidVec(
          (std::vector<unsigned int> *)(v2 + 176),
          v140,
          v139,
          v138,
          v148._M_string_length,
          !is_ignore_auth_4,
          (const std::set<unsigned int> *)(v2 + 400));
        __for_range_4 = (std::vector<unsigned int> *)(v2 + 176);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 176))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range_4)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v141 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v141 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v141 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v141 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          uid_4 = *v141;
          v142 = ServiceBox::findService<GameserverService>();
          v143 = &GameserverService::getGameThreadLocal(v142)->player_send_packet_controller;
          v144 = proto::AbilityInvocationFixedNotify::invoke6th(notify);
          proto::AbilityInvokeEntry::AbilityInvokeEntry(&p_invoke, v144);
          PlayerSendPacketController::addAbilityInvoke(v143, uid_4, &p_invoke);
          proto::AbilityInvokeEntry::~AbilityInvokeEntry(&p_invoke);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 400));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 144));
      }
      v145 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = GameserverService::getGameThreadLocal(v145);
      PlayerSendPacketController::flushAll(&GameThreadLocal->player_send_packet_controller);
      v5 = 0;
      FightPropGuard::~FightPropGuard((FightPropGuard *const)(v2 + 320));
      std::map<unsigned int,proto::AbilityInvocationsNotify>::~map((std::map<unsigned int,proto::AbilityInvocationsNotify> *const)(v2 + 240));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
  }
  std::shared_ptr<proto::AbilityInvocationFixedNotify const>::~shared_ptr((std::shared_ptr<const proto::AbilityInvocationFixedNotify> *const)(v2 + 80));
  result = v5;
  if ( v148._M_dataplus._M_p == (std::string::pointer)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 132: range 00000000130E0F9E-00000000130E1A0A
int32_t __cdecl AbilityHandler::onAbilityInvocationsNotify(
        AbilityHandler *const this,
        const proto::AbilityInvocationsNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rcx
  int v9; // eax
  const proto::AbilityInvokeEntry *v10; // rax
  uint32_t v11; // eax
  const proto::AbilityInvokeEntry *v12; // rax
  Creature *v13; // rcx
  char v14; // al
  Creature *v15; // rax
  Creature *v16; // rax
  AbilityComp *AbilityComp; // r15
  Player *v18; // r14
  const proto::AbilityInvokeEntry *v19; // rax
  common::milog::MiLogStream *v20; // rax
  Scene *v21; // r14
  const proto::AbilityInvokeEntry *v22; // rax
  const proto::AbilityInvokeEntry *v23; // rax
  const proto::AbilityInvokeEntry *v24; // rax
  const proto::AbilityInvokeEntry *v25; // rax
  uint32_t v26; // r15d
  Player *v27; // r14
  Scene *v28; // rax
  uint32_t *v29; // rdx
  GameserverService *v30; // rax
  PlayerSendPacketController *p_player_send_packet_controller; // r14
  const proto::AbilityInvokeEntry *v32; // rax
  GameserverService *v33; // rax
  GameThreadLocal *GameThreadLocal; // rax
  int32_t result; // eax
  std::string v36; // [rsp+0h] [rbp-2B0h]
  bool is_ignore_auth; // [rsp+2Bh] [rbp-285h]
  int val; // [rsp+2Ch] [rbp-284h] BYREF
  int i; // [rsp+30h] [rbp-280h]
  uint32_t uid; // [rsp+34h] [rbp-27Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-278h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-270h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-268h]
  common::milog::MiLogStream v44; // [rsp+50h] [rbp-260h] BYREF
  proto::AbilityInvokeEntry p_invoke; // [rsp+70h] [rbp-240h] BYREF
  char v46[496]; // [rsp+C0h] [rbp-1F0h] BYREF

  *(&v36._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v36._anon_0._M_allocated_capacity = (std::string::size_type)notify;
  v2 = (unsigned __int64)v46;
  v36._M_dataplus._M_p = v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 10 holder:140 64 4 13 entity_id:150 80 16 13 scene_ptr:134 112 16 16 creature_ptr:150 144"
                        " 24 19 forward_uid_vec:150 208 48 14 notify_map:141 288 48 20 fight_prop_guard:142 368 48 15 peer_id_set:150";
  *(_QWORD *)(v2 + 16) = AbilityHandler::onAbilityInvocationsNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862728] = -218959118;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862733] = -202116109;
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
      "./src/handler/ability_handler.cpp",
      "onAbilityInvocationsNotify",
      137);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v44, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v44);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v44, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x51Eu, v36);
    std::string::~string(&v44);
    std::map<unsigned int,proto::AbilityInvocationsNotify>::map((std::map<unsigned int,proto::AbilityInvocationsNotify> *const)(v2 + 208));
    FightPropGuard::FightPropGuard((FightPropGuard *const)(v2 + 288));
    if ( proto::AbilityInvocationsNotify::invokes_size((const proto::AbilityInvocationsNotify *const)v36._anon_0._M_allocated_capacity) <= 49 )
    {
      for ( i = 0; ; ++i )
      {
        v9 = proto::AbilityInvocationsNotify::invokes_size((const proto::AbilityInvocationsNotify *const)v36._anon_0._M_allocated_capacity);
        if ( i >= v9 )
          break;
        v10 = proto::AbilityInvocationsNotify::invokes(
                (const proto::AbilityInvocationsNotify *const)v36._anon_0._M_allocated_capacity,
                i);
        *(_DWORD *)(v2 + 64) = proto::AbilityInvokeEntry::entity_id(v10);
        v11 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        Scene::findEntityWithDead<Creature>((const Scene *const)(v2 + 112), v11);
        v12 = proto::AbilityInvocationsNotify::invokes(
                (const proto::AbilityInvocationsNotify *const)v36._anon_0._M_allocated_capacity,
                i);
        is_ignore_auth = proto::AbilityInvokeEntry::is_ignore_auth(v12);
        if ( !std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 112)) )
          goto LABEL_22;
        if ( is_ignore_auth )
          goto LABEL_21;
        v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( canHandleAbilityInvoke(*(Player **)(*(&v36._anon_0._M_allocated_capacity + 1) + 8), v13) )
LABEL_21:
          v14 = 1;
        else
LABEL_22:
          v14 = 0;
        if ( v14 )
        {
          v15 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          FightPropGuard::addCreature((FightPropGuard *const)(v2 + 288), v15, 1);
          v16 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          AbilityComp = Creature::getAbilityComp(v16);
          if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v18 = *(Player **)(*(&v36._anon_0._M_allocated_capacity + 1) + 8);
          v19 = proto::AbilityInvocationsNotify::invokes(
                  (const proto::AbilityInvocationsNotify *const)v36._anon_0._M_allocated_capacity,
                  i);
          AbilityComp::dispatchSingleAbilityInvoke(AbilityComp, v19, v18);
        }
        if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/ability_handler.cpp",
            "onAbilityInvocationsNotify",
            150);
          v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v44,
                  (const char (*)[29])"creature is null, entity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v44);
          v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          v22 = proto::AbilityInvocationsNotify::invokes(
                  (const proto::AbilityInvocationsNotify *const)v36._anon_0._M_allocated_capacity,
                  i);
          Scene::tryUpdateDieCreatureRecord(v21, v22);
        }
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 368));
        v23 = proto::AbilityInvocationsNotify::invokes(
                (const proto::AbilityInvocationsNotify *const)v36._anon_0._M_allocated_capacity,
                i);
        if ( proto::AbilityInvokeEntry::forward_peer(v23) )
        {
          v24 = proto::AbilityInvocationsNotify::invokes(
                  (const proto::AbilityInvocationsNotify *const)v36._anon_0._M_allocated_capacity,
                  i);
          val = proto::AbilityInvokeEntry::forward_peer(v24);
          std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v2 + 368),
            (std::set<unsigned int>::value_type *)&val);
        }
        v25 = proto::AbilityInvocationsNotify::invokes(
                (const proto::AbilityInvocationsNotify *const)v36._anon_0._M_allocated_capacity,
                i);
        LODWORD(v36._M_string_length) = proto::AbilityInvokeEntry::forward_type(v25);
        v26 = *(_DWORD *)(v2 + 64);
        if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v27 = *(Player **)(*(&v36._anon_0._M_allocated_capacity + 1) + 8);
        v28 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        FightHandler::getForwardSendPlayerUidVec(
          (std::vector<unsigned int> *)(v2 + 144),
          v28,
          v27,
          v26,
          v36._M_string_length,
          !is_ignore_auth,
          (const std::set<unsigned int> *)(v2 + 368));
        __for_range = (std::vector<unsigned int> *)(v2 + 144);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 144))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v29 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          uid = *v29;
          v30 = ServiceBox::findService<GameserverService>();
          p_player_send_packet_controller = &GameserverService::getGameThreadLocal(v30)->player_send_packet_controller;
          v32 = proto::AbilityInvocationsNotify::invokes(
                  (const proto::AbilityInvocationsNotify *const)v36._anon_0._M_allocated_capacity,
                  i);
          proto::AbilityInvokeEntry::AbilityInvokeEntry(&p_invoke, v32);
          PlayerSendPacketController::addAbilityInvoke(p_player_send_packet_controller, uid, &p_invoke);
          proto::AbilityInvokeEntry::~AbilityInvokeEntry(&p_invoke);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 368));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 112));
      }
      v33 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = GameserverService::getGameThreadLocal(v33);
      PlayerSendPacketController::flushAll(&GameThreadLocal->player_send_packet_controller);
      v5 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/ability_handler.cpp",
        "onAbilityInvocationsNotify",
        145);
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v44,
             (const char (*)[24])"invokes_size too large:");
      val = proto::AbilityInvocationsNotify::invokes_size((const proto::AbilityInvocationsNotify *const)v36._anon_0._M_allocated_capacity);
      v8 = common::milog::MiLogStream::operator<<<int,(int *)0>(v7, &val);
      if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v8, *(const Player **)(*(&v36._anon_0._M_allocated_capacity + 1) + 8));
      common::milog::MiLogStream::~MiLogStream(&v44);
      v5 = -1;
    }
    FightPropGuard::~FightPropGuard((FightPropGuard *const)(v2 + 288));
    std::map<unsigned int,proto::AbilityInvocationsNotify>::~map((std::map<unsigned int,proto::AbilityInvocationsNotify> *const)(v2 + 208));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
  result = v5;
  if ( v36._M_dataplus._M_p == (std::string::pointer)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 157: range 00000000130E1A0C-00000000130E1FA2
int32_t __cdecl AbilityHandler::onClientAbilityInitBeginNotify(
        AbilityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  uint32_t v7; // eax
  Creature *v8; // rax
  Creature *v9; // rax
  char v10; // r14
  bool v11; // r15
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ClientAbilityInitBeginNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+20h] [rbp-150h]
  AbilityComp *ability_comp; // [rsp+28h] [rbp-148h]
  std::shared_ptr<Scene> p_scene_ptr; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-130h] BYREF
  char v19[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 13 entity_id:160 48 16 14 notify_ptr:158 80 16 13 scene_ptr:161 112 16 16 creature_ptr:17"
                        "1 144 48 20 fight_prop_guard:170";
  *(_QWORD *)(v2 + 16) = AbilityHandler::onClientAbilityInitBeginNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientAbilityInitBeginNotify>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ClientAbilityInitBeginNotify const>(
         (const std::shared_ptr<const proto::ClientAbilityInitBeginNotify> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ability_handler.cpp",
      "onClientAbilityInitBeginNotify",
      158);
    common::milog::MiLogStream::operator()(&v18, off_24F2AC00);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
    goto LABEL_25;
  }
  notify = std::__shared_ptr_access<proto::ClientAbilityInitBeginNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientAbilityInitBeginNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  *(_DWORD *)(v2 + 32) = proto::ClientAbilityInitBeginNotify::entity_id(notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 80), 0LL) )
  {
    if ( *(_DWORD *)(v2 + 32) != 327155713 )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/ability_handler.cpp",
        "onClientAbilityInitBeginNotify",
        166);
      v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v18,
             (const char (*)[30])"scene_ptr is null, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    v5 = -1;
    goto LABEL_24;
  }
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v2 + 144));
  v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  Scene::findEntity<Creature>((const Scene *const)(v2 + 112), v7);
  if ( !std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 112), 0LL) )
    goto LABEL_22;
  v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  FightPropGuard::addCreature((FightPropGuard *const)(v2 + 144), v8, 1);
  v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  ability_comp = Creature::getAbilityComp(v9);
  v10 = 0;
  v11 = 0;
  if ( !AbilityComp::getIsInitFinish(ability_comp) )
  {
    std::shared_ptr<Scene>::shared_ptr(&p_scene_ptr, (const std::shared_ptr<Scene> *)(v2 + 80));
    v10 = 1;
    if ( AbilityComp::init(ability_comp, &p_scene_ptr) )
      v11 = 1;
  }
  if ( v10 )
    std::shared_ptr<Scene>::~shared_ptr(&p_scene_ptr);
  if ( !v11 )
  {
    AbilityComp::onClientInitBegin(ability_comp);
LABEL_22:
    v5 = 0;
    goto LABEL_23;
  }
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/ability_handler.cpp",
    "onClientAbilityInitBeginNotify",
    178);
  v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v18,
          (const char (*)[24])"ability_comp init fails");
  v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v12, v13);
  common::milog::MiLogStream::~MiLogStream(&v18);
  v5 = -1;
LABEL_23:
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 112));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v2 + 144));
LABEL_24:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
LABEL_25:
  std::shared_ptr<proto::ClientAbilityInitBeginNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientAbilityInitBeginNotify> *const)(v2 + 48));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 187: range 00000000130E1FA4-00000000130E2DAA
int32_t __cdecl AbilityHandler::onClientAbilityInitFinishNotify(
        AbilityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  bool v6; // r14
  PlayerBasicComp *BasicComp; // rax
  uint32_t v8; // eax
  Creature *v9; // rcx
  char v10; // al
  Creature *v11; // rax
  Creature *v12; // rax
  char v13; // r14
  bool v14; // r15
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t v26; // r14d
  const proto::AbilityInvokeEntry *v27; // rax
  Creature *v28; // rcx
  char v29; // al
  Creature *v30; // rax
  Creature *v31; // rax
  AbilityComp *AbilityComp; // r15
  Player *v33; // r14
  const proto::AbilityInvokeEntry *v34; // rax
  Player *v35; // r14
  Scene *v36; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v38; // rax
  GameserverService *v39; // rax
  PlayerMgr *p_player_mgr; // r14
  int32_t result; // eax
  std::string v42; // [rsp+0h] [rbp-200h]
  int val; // [rsp+28h] [rbp-1D8h] BYREF
  uint32_t max_invoke_size; // [rsp+2Ch] [rbp-1D4h]
  int i; // [rsp+30h] [rbp-1D0h]
  uint32_t entity_id; // [rsp+34h] [rbp-1CCh]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v47; // [rsp+38h] [rbp-1C8h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+40h] [rbp-1C0h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __first; // [rsp+48h] [rbp-1B8h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __last; // [rsp+50h] [rbp-1B0h] BYREF
  const proto::ClientAbilityInitFinishNotify *notify; // [rsp+58h] [rbp-1A8h]
  AbilityComp *ability_comp; // [rsp+60h] [rbp-1A0h]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+68h] [rbp-198h]
  common::milog::MiLogStream v54; // [rsp+70h] [rbp-190h] BYREF
  char v55[368]; // [rsp+90h] [rbp-170h] BYREF

  *(&v42._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v42._anon_0._M_allocated_capacity = (std::string::size_type)p_packet_ptr;
  v2 = (unsigned __int64)v55;
  v42._M_string_length = (std::string::size_type)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 10 holder:200 48 16 14 notify_ptr:188 80 16 13 scene_ptr:190 112 16 16 creature_ptr:203 1"
                        "44 16 15 monster_ptr:216 176 24 11 uid_vec:246 240 48 20 fight_prop_guard:201";
  *(_QWORD *)(v2 + 16) = AbilityHandler::onClientAbilityInitFinishNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientAbilityInitFinishNotify>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ClientAbilityInitFinishNotify const>(
         (const std::shared_ptr<const proto::ClientAbilityInitFinishNotify> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ability_handler.cpp",
      "onClientAbilityInitFinishNotify",
      188);
    common::milog::MiLogStream::operator()(&v54, off_24F2ADE0);
    common::milog::MiLogStream::~MiLogStream(&v54);
    v5 = -1;
    goto LABEL_74;
  }
  notify = std::__shared_ptr_access<proto::ClientAbilityInitFinishNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientAbilityInitFinishNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 80), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v2 + 144));
    v6 = std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 144), 0LL);
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 144));
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/ability_handler.cpp",
        "onClientAbilityInitFinishNotify",
        196);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v54,
        (const char (*)[37])"scene_ptr and dest_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v54);
    }
    v5 = -1;
    goto LABEL_73;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v54, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x51Eu, v42);
  std::string::~string(&v54);
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v2 + 240));
  entity_id = proto::ClientAbilityInitFinishNotify::entity_id(notify);
  v8 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  Scene::findEntity<Creature>((const Scene *const)(v2 + 112), v8);
  if ( !std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 112), 0LL) )
    goto LABEL_21;
  v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  if ( *(_BYTE *)(((*(&v42._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( canHandleAbilityInvoke(*(Player **)(*(&v42._anon_0._M_allocated_capacity + 1) + 8), v9) )
    v10 = 1;
  else
LABEL_21:
    v10 = 0;
  if ( !v10 )
    goto LABEL_71;
  v11 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  FightPropGuard::addCreature((FightPropGuard *const)(v2 + 240), v11, 1);
  v12 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  ability_comp = Creature::getAbilityComp(v12);
  v13 = 0;
  v14 = 0;
  if ( !AbilityComp::getIsInitFinish(ability_comp) )
  {
    std::shared_ptr<Scene>::shared_ptr(
      (std::shared_ptr<Scene> *const)(v2 + 144),
      (const std::shared_ptr<Scene> *)(v2 + 80));
    v13 = 1;
    if ( AbilityComp::init(ability_comp, (ScenePtr *)(v2 + 144)) )
      v14 = 1;
  }
  if ( v13 )
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 144));
  if ( !v14 )
  {
    max_invoke_size = 50;
    if ( (unsigned int)proto::ClientAbilityInitFinishNotify::invokes_size(notify) > 0x32 )
    {
      std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v2 + 144));
      if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 144)) )
      {
        v17 = (unsigned __int64)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8();
        v18 = *(_QWORD *)v17 + 312LL;
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8();
        monster_config_ptr = (const data::MonsterExcelConfig *)(*(__int64 (__fastcall **)(unsigned __int64))v18)(v17);
        if ( monster_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->security_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->security_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( monster_config_ptr->security_level == BOSS )
            max_invoke_size = 200;
        }
      }
      else
      {
        v19 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8();
        v20 = *(_QWORD *)v19 + 24LL;
        if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64))v20)(v19) == 9 )
          max_invoke_size = 500;
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 144));
    }
    for ( i = 0; i < proto::ClientAbilityInitFinishNotify::invokes_size(notify); ++i )
    {
      if ( max_invoke_size <= i )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/ability_handler.cpp",
          "onClientAbilityInitFinishNotify",
          235);
        v21 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v54,
                (const char (*)[37])"[INVOKE SIZE]invokes_size too large:");
        val = proto::ClientAbilityInitFinishNotify::invokes_size(notify);
        v22 = common::milog::MiLogStream::operator<<<int,(int *)0>(v21, &val);
        if ( *(_BYTE *)(((*(&v42._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = operator<<(v22, *(const Player **)(*(&v42._anon_0._M_allocated_capacity + 1) + 8));
        v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" creature");
        v25 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v24, v25);
        common::milog::MiLogStream::~MiLogStream(&v54);
        break;
      }
      v26 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      v27 = proto::ClientAbilityInitFinishNotify::invokes(notify, i);
      proto::AbilityInvokeEntry::entity_id(v27);
      Scene::findEntity<Creature>((const Scene *const)(v2 + 144), v26);
      if ( !std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 144), 0LL) )
        goto LABEL_60;
      v28 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      if ( *(_BYTE *)(((*(&v42._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( canHandleAbilityInvoke(*(Player **)(*(&v42._anon_0._M_allocated_capacity + 1) + 8), v28) )
        v29 = 1;
      else
LABEL_60:
        v29 = 0;
      if ( v29 )
      {
        v30 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        FightPropGuard::addCreature((FightPropGuard *const)(v2 + 240), v30, 1);
        v31 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        AbilityComp = Creature::getAbilityComp(v31);
        if ( *(_BYTE *)(((*(&v42._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v33 = *(Player **)(*(&v42._anon_0._M_allocated_capacity + 1) + 8);
        v34 = proto::ClientAbilityInitFinishNotify::invokes(notify, i);
        AbilityComp::dispatchSingleAbilityInvoke(AbilityComp, v34, v33);
      }
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 144));
    }
    AbilityComp::onClientInitFinish(ability_comp);
    std::shared_ptr<Creature>::shared_ptr(
      (std::shared_ptr<Creature> *const)(v2 + 144),
      (const std::shared_ptr<Creature> *)(v2 + 112));
    if ( *(_BYTE *)(((*(&v42._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v35 = *(Player **)(*(&v42._anon_0._M_allocated_capacity + 1) + 8);
    v36 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    FightHandler::getCreatureNotifyPlayerUid(
      (std::vector<unsigned int> *)(v2 + 176),
      v36,
      v35,
      (CreaturePtr *)(v2 + 144),
      1);
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 144));
    __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 176))._M_current;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      &__last,
      &__i);
    if ( *(_BYTE *)(((*(&v42._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(*(const Player *const *)(*(&v42._anon_0._M_allocated_capacity + 1) + 8));
    M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 176))._M_current;
    v38._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 176))._M_current;
    v47._M_current = std::remove<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                       v38,
                       (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                       (const unsigned int *)&val)._M_current;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      &__first,
      &v47);
    std::vector<unsigned int>::erase((std::vector<unsigned int> *const)(v2 + 176), __first, __last);
    v39 = ServiceBox::findService<GameserverService>();
    p_player_mgr = &GameserverService::getGameThreadLocal(v39)->player_mgr;
    std::shared_ptr<proto::ClientAbilityInitFinishNotify const>::shared_ptr(
      (std::shared_ptr<const proto::ClientAbilityInitFinishNotify> *const)(v2 + 144),
      (const std::shared_ptr<const proto::ClientAbilityInitFinishNotify> *)(v2 + 48));
    PlayerMgr::sendToPlayerList<proto::ClientAbilityInitFinishNotify>(
      p_player_mgr,
      (const std::vector<unsigned int> *)(v2 + 176),
      (std::shared_ptr<const proto::ClientAbilityInitFinishNotify> *)(v2 + 144));
    std::shared_ptr<proto::ClientAbilityInitFinishNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientAbilityInitFinishNotify> *const)(v2 + 144));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
LABEL_71:
    v5 = 0;
    goto LABEL_72;
  }
  common::milog::MiLogStream::create(
    &v54,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/ability_handler.cpp",
    "onClientAbilityInitFinishNotify",
    210);
  v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v54,
          (const char (*)[24])"ability_comp init fails");
  v16 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v15, v16);
  common::milog::MiLogStream::~MiLogStream(&v54);
  v5 = -1;
LABEL_72:
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 112));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v2 + 240));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
LABEL_73:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
LABEL_74:
  std::shared_ptr<proto::ClientAbilityInitFinishNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientAbilityInitFinishNotify> *const)(v2 + 48));
  result = v5;
  if ( v42._M_string_length == v2 )
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

// Line 255: range 00000000130E2DAC-00000000130E3D7B
int32_t __cdecl AbilityHandler::onClientAbilitiesInitFinishCombineNotify(
        AbilityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r14
  PlayerBasicComp *BasicComp; // rax
  int v8; // eax
  uint32_t v9; // eax
  unsigned __int64 v10; // rax
  void (__fastcall **v11)(common::milog::MiLogStream *, unsigned __int64); // rdx
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t v18; // eax
  Creature *v19; // rcx
  char v20; // al
  Creature *v21; // rax
  Creature *v22; // rax
  char v23; // r14
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  int v26; // r14d
  int v27; // eax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rcx
  Player *v30; // r14
  const proto::AbilityInvokeEntry *v31; // rax
  Player *v32; // r14
  Scene *v33; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v35; // rax
  unsigned int *v36; // r14
  unsigned int *v37; // r14
  std::vector<unsigned int>::iterator v38; // rax
  unsigned int *v39; // r14
  std::vector<unsigned int>::iterator v40; // rax
  GameserverService *v41; // rax
  PlayerMgr *p_player_mgr; // r14
  int32_t result; // eax
  std::string v44; // [rsp+0h] [rbp-2A0h]
  bool v45; // [rsp+8h] [rbp-298h]
  unsigned int *v46; // [rsp+8h] [rbp-298h]
  int val; // [rsp+20h] [rbp-280h] BYREF
  int i; // [rsp+24h] [rbp-27Ch]
  int j; // [rsp+28h] [rbp-278h]
  uint32_t entity_id; // [rsp+2Ch] [rbp-274h]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v51; // [rsp+30h] [rbp-270h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+38h] [rbp-268h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __first; // [rsp+40h] [rbp-260h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __last; // [rsp+48h] [rbp-258h] BYREF
  const proto::ClientAbilitiesInitFinishCombineNotify *notify; // [rsp+50h] [rbp-250h]
  const proto::EntityAbilityInvokeEntry *entity_invoke; // [rsp+58h] [rbp-248h]
  AbilityComp *ability_comp; // [rsp+60h] [rbp-240h]
  const proto::EntityAbilityInvokeEntry *entity_invoke_0; // [rsp+68h] [rbp-238h]
  common::milog::MiLogStream v59; // [rsp+70h] [rbp-230h] BYREF
  char v60[528]; // [rsp+90h] [rbp-210h] BYREF

  *(&v44._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v44._anon_0._M_allocated_capacity = (std::string::size_type)p_packet_ptr;
  v3 = (unsigned __int64)v60;
  v44._M_dataplus._M_p = v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 1 10 holder:268 64 4 13 entity_id:276 80 16 14 notify_ptr:256 112 16 13 scene_ptr:258 144 "
                        "16 16 creature_ptr:290 176 16 16 creature_ptr:277 208 24 19 forward_uid_vec:270 272 24 11 uid_ve"
                        "c:310 336 32 7 msg:278 400 48 20 fight_prop_guard:269";
  *(_QWORD *)(v3 + 16) = AbilityHandler::onClientAbilitiesInitFinishCombineNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862729] = -218959360;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862734] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientAbilitiesInitFinishCombineNotify>((common::minet::Packet *const)(v3 + 80));
  if ( std::operator==<proto::ClientAbilitiesInitFinishCombineNotify const>(
         (const std::shared_ptr<const proto::ClientAbilitiesInitFinishCombineNotify> *)(v3 + 80),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ability_handler.cpp",
      "onClientAbilitiesInitFinishCombineNotify",
      256);
    common::milog::MiLogStream::operator()(&v59, off_24F2B0A0);
    common::milog::MiLogStream::~MiLogStream(&v59);
    v2 = -1;
    goto LABEL_63;
  }
  notify = std::__shared_ptr_access<proto::ClientAbilitiesInitFinishCombineNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientAbilitiesInitFinishCombineNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 112));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 112), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v3 + 176));
    v6 = std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 176), 0LL);
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 176));
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/ability_handler.cpp",
        "onClientAbilitiesInitFinishCombineNotify",
        264);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v59,
        (const char (*)[37])"scene_ptr and dest_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v59);
    }
    v2 = -1;
    goto LABEL_62;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v59, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x51Eu, v44);
  std::string::~string(&v59);
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v3 + 400));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 208));
  for ( i = 0; ; ++i )
  {
    v8 = proto::ClientAbilitiesInitFinishCombineNotify::entity_invoke_list_size(notify);
    if ( i >= v8 )
      break;
    if ( i > 49 )
    {
      entity_invoke_0 = proto::ClientAbilitiesInitFinishCombineNotify::entity_invoke_list(notify, i);
      *(_DWORD *)(v3 + 64) = proto::EntityAbilityInvokeEntry::entity_id(entity_invoke_0);
      v9 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      Scene::findEntity<Creature>((const Scene *const)(v3 + 176), v9);
      std::string::basic_string(v3 + 336);
      if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v3 + 176), 0LL) )
      {
        v10 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v11 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v10;
        if ( *(_BYTE *)((*(_QWORD *)v10 >> 3) + 0x7FFF8000LL) )
          v10 = __asan_report_load8();
        (*v11)(&v59, v10);
        std::string::operator=(v3 + 336, &v59);
        std::string::~string(&v59);
      }
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/ability_handler.cpp",
        "onClientAbilitiesInitFinishCombineNotify",
        283);
      v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v59,
              (const char (*)[35])"entity_invoke_list_size too large:");
      val = proto::ClientAbilitiesInitFinishCombineNotify::entity_invoke_list_size(notify);
      v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &val);
      if ( *(_BYTE *)(((*(&v44._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = operator<<(v13, *(const Player **)(*(&v44._anon_0._M_allocated_capacity + 1) + 8));
      v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])"entity_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
      v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" creture:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 336));
      common::milog::MiLogStream::~MiLogStream(&v59);
      std::string::~string((void *)(v3 + 336));
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 176));
      break;
    }
    entity_invoke = proto::ClientAbilitiesInitFinishCombineNotify::entity_invoke_list(notify, i);
    entity_id = proto::EntityAbilityInvokeEntry::entity_id(entity_invoke);
    v18 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    Scene::findEntity<Creature>((const Scene *const)(v3 + 144), v18);
    if ( !std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v3 + 144), 0LL) )
      goto LABEL_33;
    v19 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    if ( *(_BYTE *)(((*(&v44._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( canHandleAbilityInvoke(*(Player **)(*(&v44._anon_0._M_allocated_capacity + 1) + 8), v19) )
      v20 = 1;
    else
LABEL_33:
      v20 = 0;
    if ( v20 )
    {
      v21 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
      FightPropGuard::addCreature((FightPropGuard *const)(v3 + 400), v21, 1);
      v22 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
      ability_comp = Creature::getAbilityComp(v22);
      v23 = 0;
      v45 = 0;
      if ( !AbilityComp::getIsInitFinish(ability_comp) )
      {
        std::shared_ptr<Scene>::shared_ptr(
          (std::shared_ptr<Scene> *const)(v3 + 176),
          (const std::shared_ptr<Scene> *)(v3 + 112));
        v23 = 1;
        if ( AbilityComp::init(ability_comp, (ScenePtr *)(v3 + 176)) )
          v45 = 1;
      }
      if ( v23 )
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 176));
      if ( v45 )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/ability_handler.cpp",
          "onClientAbilitiesInitFinishCombineNotify",
          297);
        v24 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v59,
                (const char (*)[24])"ability_comp init fails");
        v25 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v24, v25);
        common::milog::MiLogStream::~MiLogStream(&v59);
        v2 = -1;
        v26 = 0;
        goto LABEL_58;
      }
      for ( j = 0; ; ++j )
      {
        v27 = proto::EntityAbilityInvokeEntry::invokes_size(entity_invoke);
        if ( j >= v27 )
          break;
        if ( j > 49 )
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/ability_handler.cpp",
            "onClientAbilitiesInitFinishCombineNotify",
            304);
          v28 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v59,
                  (const char (*)[24])"invokes_size too large:");
          val = proto::EntityAbilityInvokeEntry::invokes_size(entity_invoke);
          v29 = common::milog::MiLogStream::operator<<<int,(int *)0>(v28, &val);
          if ( *(_BYTE *)(((*(&v44._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v29, *(const Player **)(*(&v44._anon_0._M_allocated_capacity + 1) + 8));
          common::milog::MiLogStream::~MiLogStream(&v59);
          break;
        }
        if ( *(_BYTE *)(((*(&v44._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v30 = *(Player **)(*(&v44._anon_0._M_allocated_capacity + 1) + 8);
        v31 = proto::EntityAbilityInvokeEntry::invokes(entity_invoke, j);
        AbilityComp::dispatchSingleAbilityInvoke(ability_comp, v31, v30);
      }
      AbilityComp::onClientInitFinish(ability_comp);
      std::shared_ptr<Creature>::shared_ptr(
        (std::shared_ptr<Creature> *const)(v3 + 176),
        (const std::shared_ptr<Creature> *)(v3 + 144));
      if ( *(_BYTE *)(((*(&v44._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = *(Player **)(*(&v44._anon_0._M_allocated_capacity + 1) + 8);
      v33 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      FightHandler::getCreatureNotifyPlayerUid(
        (std::vector<unsigned int> *)(v3 + 272),
        v33,
        v32,
        (CreaturePtr *)(v3 + 176),
        1);
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 176));
      __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 272))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        &__last,
        &__i);
      if ( *(_BYTE *)(((*(&v44._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(*(const Player *const *)(*(&v44._anon_0._M_allocated_capacity + 1) + 8));
      M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 272))._M_current;
      v35._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 272))._M_current;
      v51._M_current = std::remove<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                         v35,
                         (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                         (const unsigned int *)&val)._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        &__first,
        &v51);
      std::vector<unsigned int>::erase((std::vector<unsigned int> *const)(v3 + 272), __first, __last);
      v46 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 272))._M_current;
      v36 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 272))._M_current;
      __first._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 208))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        &__last,
        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__first);
      std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
        (std::vector<unsigned int> *const)(v3 + 208),
        __last,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v36,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v46);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 272));
    }
    v26 = 1;
LABEL_58:
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 144));
    if ( v26 != 1 )
      goto LABEL_61;
  }
  v37 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 208))._M_current;
  v38._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 208))._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v38,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v37);
  __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 208))._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    &__last,
    &__i);
  v39 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 208))._M_current;
  v40._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 208))._M_current;
  v51._M_current = std::unique<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
                     v40,
                     (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v39)._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    &__first,
    &v51);
  std::vector<unsigned int>::erase((std::vector<unsigned int> *const)(v3 + 208), __first, __last);
  v41 = ServiceBox::findService<GameserverService>();
  p_player_mgr = &GameserverService::getGameThreadLocal(v41)->player_mgr;
  std::shared_ptr<proto::ClientAbilitiesInitFinishCombineNotify const>::shared_ptr(
    (std::shared_ptr<const proto::ClientAbilitiesInitFinishCombineNotify> *const)(v3 + 176),
    (const std::shared_ptr<const proto::ClientAbilitiesInitFinishCombineNotify> *)(v3 + 80));
  PlayerMgr::sendToPlayerList<proto::ClientAbilitiesInitFinishCombineNotify>(
    p_player_mgr,
    (const std::vector<unsigned int> *)(v3 + 208),
    (std::shared_ptr<const proto::ClientAbilitiesInitFinishCombineNotify> *)(v3 + 176));
  std::shared_ptr<proto::ClientAbilitiesInitFinishCombineNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientAbilitiesInitFinishCombineNotify> *const)(v3 + 176));
  v2 = 0;
LABEL_61:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 208));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v3 + 400));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
LABEL_62:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 112));
LABEL_63:
  std::shared_ptr<proto::ClientAbilitiesInitFinishCombineNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientAbilitiesInitFinishCombineNotify> *const)(v3 + 80));
  result = v2;
  if ( v44._M_dataplus._M_p == (std::string::pointer)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 324: range 00000000130E3E32-00000000130E4BB8
int32_t __cdecl AbilityHandler::onClientAbilityChangeNotify(
        AbilityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  bool v6; // r14
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char v13; // al
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  Creature *v18; // rcx
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  Creature *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  common::milog::MiLogStream *v24; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  const proto::AbilityInvokeEntry *v26; // rax
  uint32_t v27; // eax
  Creature *v28; // rcx
  char v29; // al
  Creature *v30; // rax
  Creature *v31; // rax
  const proto::AbilityInvokeEntry *v32; // rax
  Creature *v33; // rax
  AbilityComp *v34; // rax
  Creature *v35; // rax
  AbilityComp *v36; // rax
  Creature *v38; // rax
  AbilityComp *v39; // rax
  GameserverService *v40; // rax
  PlayerMgr *p_player_mgr; // r14
  int32_t result; // eax
  Player *from_player; // [rsp+10h] [rbp-1D0h]
  unsigned int v44; // [rsp+18h] [rbp-1C8h]
  common::milog::MiLogStream *v45; // [rsp+18h] [rbp-1C8h]
  common::milog::MiLogStream *v46; // [rsp+18h] [rbp-1C8h]
  AbilityComp *AbilityComp; // [rsp+18h] [rbp-1C8h]
  Scene *v48; // [rsp+18h] [rbp-1C8h]
  bool is_inited_before; // [rsp+37h] [rbp-1A9h]
  unsigned int val; // [rsp+38h] [rbp-1A8h] BYREF
  int i; // [rsp+3Ch] [rbp-1A4h]
  uint32_t entity_id; // [rsp+40h] [rbp-1A0h]
  uint32_t exclude_uid; // [rsp+44h] [rbp-19Ch]
  const proto::ClientAbilityChangeNotify *notify; // [rsp+48h] [rbp-198h]
  common::milog::MiLogStream v55; // [rsp+50h] [rbp-190h] BYREF
  char v56[368]; // [rsp+70h] [rbp-170h] BYREF
  AbilityHandler::onClientAbilityChangeNotify::<lambda(Player&)> v57; // 0:esi.4,8:rdx.8

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 16 14 notify_ptr:325 80 16 13 scene_ptr:327 112 16 16 creature_ptr:338 144 16 23 detach_cre"
                        "ature_ptr:365 176 24 11 uid_vec:384 240 48 20 fight_prop_guard:355";
  *(_QWORD *)(v2 + 16) = AbilityHandler::onClientAbilityChangeNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientAbilityChangeNotify>((common::minet::Packet *const)(v2 + 48));
  if ( std::operator==<proto::ClientAbilityChangeNotify const>(
         (const std::shared_ptr<const proto::ClientAbilityChangeNotify> *)(v2 + 48),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ability_handler.cpp",
      "onClientAbilityChangeNotify",
      325);
    common::milog::MiLogStream::operator()(&v55, off_24F2B2E0);
    common::milog::MiLogStream::~MiLogStream(&v55);
    v5 = -1;
    goto LABEL_66;
  }
  notify = std::__shared_ptr_access<proto::ClientAbilityChangeNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientAbilityChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 80), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v2 + 144));
    v6 = std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 144), 0LL);
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 144));
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/ability_handler.cpp",
        "onClientAbilityChangeNotify",
        333);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v55,
        (const char (*)[37])"scene_ptr and dest_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v55);
    }
    v5 = -1;
    goto LABEL_65;
  }
  v44 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  proto::ClientAbilityChangeNotify::entity_id(notify);
  Scene::findEntity<Creature>((const Scene *const)(v2 + 112), v44);
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 112), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/ability_handler.cpp",
      "onClientAbilityChangeNotify",
      341);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v55, (const char (*)[11])"entity_id:");
    val = proto::ClientAbilityChangeNotify::entity_id(notify);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" not found!");
    common::milog::MiLogStream::~MiLogStream(&v55);
    v5 = -1;
  }
  else
  {
    v9 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(_QWORD *)v9 + 24LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v10)(v9) == 9 )
      goto LABEL_27;
    v11 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v12 = *(_QWORD *)v11 + 24LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v12)(v11) == 1 )
LABEL_27:
      v13 = 0;
    else
      v13 = 1;
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/ability_handler.cpp",
        "onClientAbilityChangeNotify",
        346);
      v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v55,
              (const char (*)[41])"entity cannot initability, creature_ptr:");
      v15 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      v16 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v14, v15);
      v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v18 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( canHandleAbilityInvoke(this->player_, v18) )
      {
        FightPropGuard::FightPropGuard((FightPropGuard *const)(v2 + 240));
        v22 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        FightPropGuard::addCreature((FightPropGuard *const)(v2 + 240), v22, 1);
        for ( i = 0; i < proto::ClientAbilityChangeNotify::invokes_size(notify); ++i )
        {
          if ( i > 499 )
          {
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/ability_handler.cpp",
              "onClientAbilityChangeNotify",
              361);
            v45 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    &v55,
                    (const char (*)[24])"invokes_size too large:");
            val = proto::ClientAbilityChangeNotify::invokes_size(notify);
            v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v45, (const int *)&val);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v24 = operator<<(v23, this->player_);
            v46 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v24,
                    (const char (*)[15])" creature_ptr:");
            v25 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v46, v25);
            common::milog::MiLogStream::~MiLogStream(&v55);
            break;
          }
          v26 = proto::ClientAbilityChangeNotify::invokes(notify, i);
          entity_id = proto::AbilityInvokeEntry::entity_id(v26);
          v27 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          Scene::findEntity<Creature>((const Scene *const)(v2 + 144), v27);
          if ( !std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 144)) )
            goto LABEL_49;
          v28 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( canHandleAbilityInvoke(this->player_, v28) )
            v29 = 1;
          else
LABEL_49:
            v29 = 0;
          if ( v29 )
          {
            v30 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            FightPropGuard::addCreature((FightPropGuard *const)(v2 + 240), v30, 1);
            v31 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            AbilityComp = Creature::getAbilityComp(v31);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            from_player = this->player_;
            v32 = proto::ClientAbilityChangeNotify::invokes(notify, i);
            AbilityComp::dispatchSingleAbilityInvoke(AbilityComp, v32, from_player);
          }
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 144));
        }
        v33 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        v34 = Creature::getAbilityComp(v33);
        is_inited_before = AbilityComp::getIsClientInited(v34);
        v35 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        v36 = Creature::getAbilityComp(v35);
        AbilityComp::onClientInitFinish(v36);
        if ( is_inited_before && proto::ClientAbilityChangeNotify::is_init_hash(notify) )
        {
          v38 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v39 = Creature::getAbilityComp(v38);
          AbilityComp::initAbilityConfigHashValue(v39);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        exclude_uid = Player::getUid(this->player_);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 176));
        v48 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        v57.__uid_vec = (std::vector<unsigned int> *)(v2 + 176);
        v57.__exclude_uid = exclude_uid;
        std::function<ForeachPolicy ()(Player &)>::function<AbilityHandler::onClientAbilityChangeNotify(std::shared_ptr<common::minet::Packet>)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v55,
          v57);
        Scene::foreachPlayer(v48, (std::function<ForeachPolicy(Player&)> *)&v55);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v55);
        v40 = ServiceBox::findService<GameserverService>();
        p_player_mgr = &GameserverService::getGameThreadLocal(v40)->player_mgr;
        std::shared_ptr<proto::ClientAbilityChangeNotify const>::shared_ptr(
          (std::shared_ptr<const proto::ClientAbilityChangeNotify> *const)(v2 + 144),
          (const std::shared_ptr<const proto::ClientAbilityChangeNotify> *)(v2 + 48));
        PlayerMgr::sendToPlayerList<proto::ClientAbilityChangeNotify>(
          p_player_mgr,
          (const std::vector<unsigned int> *)(v2 + 176),
          (std::shared_ptr<const proto::ClientAbilityChangeNotify> *)(v2 + 144));
        std::shared_ptr<proto::ClientAbilityChangeNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientAbilityChangeNotify> *const)(v2 + 144));
        v5 = 0;
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
        FightPropGuard::~FightPropGuard((FightPropGuard *const)(v2 + 240));
        goto LABEL_64;
      }
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/ability_handler.cpp",
        "onClientAbilityChangeNotify",
        351);
      v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v55,
              (const char (*)[43])"canHandleAbilityInvoke fail, creature_ptr:");
      v20 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      v21 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v19, v20);
      v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    operator<<(v17, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v55);
    v5 = -1;
  }
LABEL_64:
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 112));
LABEL_65:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
LABEL_66:
  std::shared_ptr<proto::ClientAbilityChangeNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientAbilityChangeNotify> *const)(v2 + 48));
  result = v5;
  if ( v56 == (char *)v2 )
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

// Line 385: range 00000000130E3D7C-00000000130E3E30
ForeachPolicy __cdecl AbilityHandler::onClientAbilityChangeNotify(std::shared_ptr<common::minet::Packet>)::{lambda(Player &)#1}::operator()(
        const AbilityHandler::onClientAbilityChangeNotify::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  std::vector<unsigned int> *uid_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid != __closure->__exclude_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    uid_vec = __closure->__uid_vec;
    __x[0] = Player::getUid(player);
    std::vector<unsigned int>::push_back(uid_vec, __x);
  }
  return 0;
};

// Line 399: range 00000000130E4BBA-00000000130E4FDC
int32_t __cdecl AbilityHandler::onClientAIStateNotify(
        AbilityHandler *const this,
        const proto::ClientAIStateNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  uint32_t v6; // r14d
  Creature *v7; // rcx
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  Entity *v12; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 scene_ptr:400 64 16 16 creature_ptr:406";
  *(_QWORD *)(v2 + 16) = AbilityHandler::onClientAIStateNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/ability_handler.cpp",
      "onClientAIStateNotify",
      403);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v14, (const char (*)[18])off_24F2B540);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else
  {
    v6 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::ClientAIStateNotify::entity_id(notify);
    Scene::findEntity<Creature>((const Scene *const)(v2 + 64), v6);
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/ability_handler.cpp",
        "onClientAIStateNotify",
        409);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v14, (const char (*)[24])off_24F2B580);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v5 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( !canHandleAbilityInvoke(this->player_, v7) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/ability_handler.cpp",
          "onClientAIStateNotify",
          414);
        v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               &v14,
               (const char (*)[39])"canHandleAbilityInvoke fail, creature:");
        v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v10 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v8, v9);
        v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v11, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v14);
        v5 = -1;
      }
      else
      {
        v12 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Entity::updateAIState(v12, notify);
        v5 = 0;
      }
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
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

// Line 423: range 00000000130E4FDE-00000000130E526C
int32_t __cdecl AbilityHandler::onClientRemoveCombatEndModifierNotify(
        AbilityHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  PlayerAvatarComp *AvatarComp; // rax
  int32_t result; // eax
  std::__shared_ptr_access<const proto::ClientRemoveCombatEndModifierNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 notify_ptr:424 64 24 18 combat_end_vec:425";
  *(_QWORD *)(v2 + 16) = AbilityHandler::onClientRemoveCombatEndModifierNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ClientRemoveCombatEndModifierNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ClientRemoveCombatEndModifierNotify const>(
         (const std::shared_ptr<const proto::ClientRemoveCombatEndModifierNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/ability_handler.cpp",
      "onClientRemoveCombatEndModifierNotify",
      424);
    common::milog::MiLogStream::operator()(&v10, off_24F2B6C0);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::ClientRemoveCombatEndModifierNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ClientRemoveCombatEndModifierNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    v6 = proto::ClientRemoveCombatEndModifierNotify::combat_end_type_list(notify);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, (std::vector<unsigned int> *)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::onClientFinishedCombatEndList(AvatarComp, (const std::vector<unsigned int> *)(v2 + 64));
    v5 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ClientRemoveCombatEndModifierNotify const>::~shared_ptr((std::shared_ptr<const proto::ClientRemoveCombatEndModifierNotify> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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
