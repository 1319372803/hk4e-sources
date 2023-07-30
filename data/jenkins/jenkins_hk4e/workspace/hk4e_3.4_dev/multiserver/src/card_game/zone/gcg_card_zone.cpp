// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/zone/gcg_card_zone.cpp

// Line 25: range 000000000DE9654C-000000000DE967B5
std::string *__cdecl GCGSCardZoneRuntimeData::getRuntimeDesc[abi:cxx11](
        std::string *retstr,
        const GCGSCardZoneRuntimeData *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int Id; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned int Guid; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+20h] [rbp-80h]
  const std::shared_ptr<GCGCard> *card_ptr; // [rsp+28h] [rbp-78h]
  char v18[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:26";
  *(_QWORD *)(v2 + 16) = GCGSCardZoneRuntimeData::getRuntimeDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  __for_range = &this->card_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(&this->card_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end(&this->card_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin,
            &__for_end) )
  {
    card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
    v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           "[id:");
    v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
    Id = GCGCard::getId(v6);
    v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, Id);
    v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " guid:");
    v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
    Guid = GCGCard::getGuid(v10);
    v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, Guid);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, "]");
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
  }
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
  if ( v18 == (char *)v2 )
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

// Line 35: range 000000000DE967B6-000000000DE969CD
std::string *__cdecl GCGCharacterZoneRuntimeData::getRuntimeDesc[abi:cxx11](
        std::string *retstr,
        const GCGCharacterZoneRuntimeData *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:36";
  *(_QWORD *)(v2 + 16) = GCGCharacterZoneRuntimeData::getRuntimeDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "cur_order_index_:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->cur_order_index_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ", cur_onstage_guid_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_onstage_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_onstage_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_onstage_guid_);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->cur_onstage_guid_);
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
  if ( v9 == (char *)v2 )
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

// Line 42: range 000000000DE969CE-000000000DE96A2D
int32_t __cdecl GCGCardZone::init(GCGCardZone *const this, GCGControllerValue controller_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = controller_id;
  return 0;
};

// Line 48: range 000000000DE96A2E-000000000DE96A4B
std::vector<std::shared_ptr<GCGCard>> *__cdecl GCGCardZone::getCardVec(GCGCardZone *const this)
{
  return (std::vector<std::shared_ptr<GCGCard>> *)GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>);
};

// Line 53: range 000000000DE96A4C-000000000DE96A69
const std::vector<std::shared_ptr<GCGCard>> *__cdecl GCGCardZone::getCardVec(const GCGCardZone *const this)
{
  return (const std::vector<std::shared_ptr<GCGCard>> *)GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>);
};

// Line 58: range 000000000DE96ACE-000000000DE96B56
std::vector<unsigned int> *__cdecl GCGCardZone::getCardIdVec(
        std::vector<unsigned int> *retstr,
        const GCGCardZone *const this)
{
  std::function<ForeachPolicy(const GCGCard&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::vector<unsigned int>::vector(retstr);
  std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGCardZone::getCardIdVec(void)::{lambda(GCGCard const&)#1},void,void>(
    &p_func,
    (GCGCardZone::getCardIdVec::<lambda(const GCGCard&)>)retstr);
  GCGCardZone::foreachCard(this, &p_func);
  std::function<ForeachPolicy ()(GCGCard const&)>::~function(&p_func);
  return retstr;
};

// Line 60: range 000000000DE96A6A-000000000DE96ACC
ForeachPolicy __cdecl GCGCardZone::getCardIdVec(void)const::{lambda(GCGCard const&)#1}::operator()(
        const GCGCardZone::getCardIdVec::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *card)
{
  std::vector<unsigned int> *card_id_vec; // rbx
  unsigned int *v3; // rdx
  unsigned int v5[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  card_id_vec = __closure->__card_id_vec;
  v5[0] = GCGCard::getId(card);
  std::vector<unsigned int>::emplace_back<unsigned int>(card_id_vec, v5, v3);
  return 0;
};

// Line 69: range 000000000DE96B58-000000000DE96B79
std::unordered_multiset<GCGEffectCategoryType> *__cdecl GCGCardZone::getEffectCategorySet(GCGCardZone *const this)
{
  return &GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>)->zone_skill_category_set_;
};

// Line 74: range 000000000DE96B7A-000000000DE96B9B
const std::unordered_multiset<GCGEffectCategoryType> *__cdecl GCGCardZone::getEffectCategorySet(
        const GCGCardZone *const this)
{
  return &GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>)->zone_skill_category_set_;
};

// Line 79: range 000000000DE96B9C-000000000DE96BBD
size_t __cdecl GCGCardZone::getSize(const GCGCardZone *const this)
{
  const std::vector<std::shared_ptr<GCGCard>> *CardVec; // rax

  CardVec = GCGCardZone::getCardVec(this);
  return std::vector<std::shared_ptr<GCGCard>>::size(CardVec);
};

// Line 84: range 000000000DE96BBE-000000000DE96C7D
int32_t __cdecl GCGCardZone::toClient(GCGCardZone *const this, GCGControllerValue controller_id, proto::GCGZone *proto)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Guid; // edx
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_begin; // [rsp+28h] [rbp-28h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_end; // [rsp+30h] [rbp-20h] BYREF
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+38h] [rbp-18h]
  const std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+40h] [rbp-10h]
  const std::shared_ptr<GCGCard> *card_ptr; // [rsp+48h] [rbp-8h]

  card_vec = GCGCardZone::getCardVec(this);
  __for_range = card_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin,
            &__for_end) )
  {
    card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
    if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      Guid = GCGCard::getGuid(v3);
      proto::GCGZone::add_card_list(proto, Guid);
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 97: range 000000000DE96C7E-000000000DE96E5F
void __cdecl GCGCardZone::shuffle(GCGCardZone *const this)
{
  common::milog::MiLogStream *v1; // rbx
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *v2; // r12
  std::shared_ptr<GCGCard> *M_current; // rbx
  std::vector<std::shared_ptr<GCGCard>>::iterator v4; // rax
  common::milog::MiLogStream *v5; // rbx
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+18h] [rbp-58h]
  std::vector<unsigned int> vec; // [rsp+20h] [rbp-50h] BYREF
  common::milog::MiLogStream v8; // [rsp+40h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_card_zone.cpp",
    "shuffle",
    98);
  v1 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v8,
         (const char (*)[26])"[RANDOM] shuffle before: ");
  GCGCardZone::getCardGuidVec(&vec, this);
  common::milog::MiLogStream::operator<<<unsigned int>(v1, &vec);
  std::vector<unsigned int>::~vector(&vec);
  common::milog::MiLogStream::~MiLogStream(&v8);
  card_vec = GCGCardZone::getCardVec(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v2 = GCGGameMode::gen(this->game_mode_);
  M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  v4._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  std::shuffle<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>,std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &>(
    v4,
    (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)M_current,
    v2);
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_card_zone.cpp",
    "shuffle",
    101);
  v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v8,
         (const char (*)[25])"[RANDOM] shuffle after: ");
  GCGCardZone::getCardGuidVec(&vec, this);
  common::milog::MiLogStream::operator<<<unsigned int>(v5, &vec);
  std::vector<unsigned int>::~vector(&vec);
  common::milog::MiLogStream::~MiLogStream(&v8);
};

// Line 105: range 000000000DE96E60-000000000DE96E8A
void __cdecl GCGCardZone::reset(GCGCardZone *const this)
{
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+18h] [rbp-8h]

  card_vec = GCGCardZone::getCardVec(this);
  std::vector<std::shared_ptr<GCGCard>>::clear(card_vec);
};

// Line 111: range 000000000DE96E8C-000000000DE9704D
std::vector<unsigned int> *__cdecl GCGCardZone::getCardGuidVec(
        std::vector<unsigned int> *retstr,
        const GCGCardZone *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-78h]
  const std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+30h] [rbp-70h]
  const std::shared_ptr<GCGCard> *card_ptr; // [rsp+38h] [rbp-68h]
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 guid:116";
  *(_QWORD *)(v2 + 16) = GCGCardZone::getCardGuidVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::vector<unsigned int>::vector(retstr);
  card_vec = GCGCardZone::getCardVec(this);
  __for_range = card_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin,
            &__for_end) )
  {
    card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
    {
      v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      *(_DWORD *)(v2 + 32) = GCGCard::getGuid(v5);
    }
    std::vector<unsigned int>::push_back(retstr, (const std::vector<unsigned int>::value_type *)(v2 + 32));
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  if ( v12 == (char *)v2 )
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

// Line 127: range 000000000DE9704E-000000000DE97146
uint32_t __cdecl GCGCardZone::getCardGuid(const GCGCardZone *const this, uint32_t index)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+10h] [rbp-40h]
  const std::shared_ptr<GCGCard> *card_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  card_vec = GCGCardZone::getCardVec(this);
  if ( index >= std::vector<std::shared_ptr<GCGCard>>::size(card_vec) )
    return 0;
  card_ptr = std::vector<std::shared_ptr<GCGCard>>::operator[](card_vec, index);
  if ( std::operator==<GCGCard>(card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "getCardGuid",
      136);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v6, (const char (*)[21])"card_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
  else
  {
    v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
    return GCGCard::getGuid(v3);
  }
};

// Line 143: range 000000000DE97148-000000000DE9749A
int32_t __cdecl GCGCardZone::checkCanAdd(GCGCardZone *const this, uint32_t card_id)
{
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // rax
  bool v5; // bl
  bool v6; // bl
  bool v7; // bl
  std::vector<std::shared_ptr<GCGCard>>::size_type v8; // rbx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  data::GCGTagType value; // [rsp+18h] [rbp-78h] BYREF
  uint32_t extra_size; // [rsp+1Ch] [rbp-74h]
  const std::set<data::GCGTagType> *tag_set; // [rsp+20h] [rbp-70h]
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-68h]
  std::shared_ptr<GCGCard> __a; // [rsp+30h] [rbp-60h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-50h] BYREF
  std::string val; // [rsp+60h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Config = GCGGameMode::getConfig(this->game_mode_);
  GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
  tag_set = GCGGameExcelConfigMgr::getCardTagSet(GCGGameExcelConfigMgr, card_id);
  card_vec = GCGCardZone::getCardVec(this);
  extra_size = 0;
  if ( GCGCardZone::getZoneType(this) == GCG_ZONE_MODIFY
    || GCGCardZone::getZoneType(this) == GCG_ZONE_SUMMON
    || GCGCardZone::getZoneType(this) == GCG_ZONE_ONSTAGE )
  {
    GCGCardZone::findCardById((GCGCardZone *const)&__a, (uint32_t)this);
    v5 = std::operator!=<GCGCard>(&__a, 0LL);
    std::shared_ptr<GCGCard>::~shared_ptr(&__a);
    if ( v5 )
      extra_size = 1;
  }
  if ( GCGCardZone::getZoneType(this) == GCG_ZONE_MODIFY )
  {
    value = GCG_TAG_WEAPON;
    if ( common::tools::MiscUtils::isContains<std::set<data::GCGTagType> const,data::GCGTagType>(tag_set, &value) )
    {
      GCGCardZone::findCardByTag((GCGCardZone *const)&__a, (GCGTagType)this);
      v6 = std::operator!=<GCGCard>(&__a, 0LL);
      std::shared_ptr<GCGCard>::~shared_ptr(&__a);
      if ( v6 )
        extra_size = 1;
    }
    value = GCG_TAG_ARTIFACT;
    if ( common::tools::MiscUtils::isContains<std::set<data::GCGTagType> const,data::GCGTagType>(tag_set, &value) )
    {
      GCGCardZone::findCardByTag((GCGCardZone *const)&__a, (GCGTagType)this);
      v7 = std::operator!=<GCGCard>(&__a, 0LL);
      std::shared_ptr<GCGCard>::~shared_ptr(&__a);
      if ( v7 )
        extra_size = 1;
    }
  }
  v8 = std::vector<std::shared_ptr<GCGCard>>::size(card_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_size_);
  }
  if ( v8 < SAFE_ADD<unsigned int,unsigned int>(this->max_size_, extra_size) )
    return 0;
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_card_zone.cpp",
    "checkCanAdd",
    175);
  GCGCardZone::getDesc[abi:cxx11](&val, this);
  v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v17, &val);
  v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          v9,
          (const char (*)[33])"check addCard fail. out of size:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->max_size_);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v17);
  return 1;
};

// Line 182: range 000000000DE9749C-000000000DE97665
int32_t __cdecl GCGCardZone::checkCanAdd(GCGCardZone *const this, GCGCardPtr *p_card_ptr, bool is_check_zone)
{
  common::milog::MiLogStream *v3; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Id; // edx
  unsigned int ZoneType; // [rsp+2Ch] [rbp-54h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-50h] BYREF
  std::string val; // [rsp+50h] [rbp-30h] BYREF

  if ( std::operator==<GCGCard>(p_card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "checkCanAdd",
      185);
    GCGCardZone::getDesc[abi:cxx11](&val, this);
    v3 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v12, &val);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v3,
      (const char (*)[32])"addCard fail. card_ptr is null.");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else if ( is_check_zone
         && (v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr),
             GCGCard::getZoneType(v5)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "checkCanAdd",
      192);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[32])"card_ptr already in some zone. ");
    v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
    ZoneType = GCGCard::getZoneType(v7);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &ZoneType);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    return -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
    Id = GCGCard::getId(v8);
    return GCGCardZone::checkCanAdd(this, Id);
  }
};

// Line 200: range 000000000DE976D2-000000000DE9806D
std::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard> > *__cdecl GCGCardZone::preAddCard(
        std::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard> > *retstr,
        GCGCardZone *const this,
        uint32_t card_id,
        GCGReason reason,
        uint32_t preview_replace_card_id)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *GCGGameExcelConfigMgr; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGCard *v12; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t Id; // r15d
  GCGZoneType ZoneType; // r14d
  unsigned int ControllerId; // eax
  GCGStatistics *Statistics; // r14
  GCGControllerValue v21; // eax
  int v22; // r14d
  common::milog::MiLogStream *card_guida; // [rsp+8h] [rbp-148h]
  GCGCard *card_guidb; // [rsp+8h] [rbp-148h]
  GCGGameMode *card_guidc; // [rsp+8h] [rbp-148h]
  uint32_t card_guid; // [rsp+8h] [rbp-148h]
  std::allocator<unsigned int> __a; // [rsp+3Fh] [rbp-111h] BYREF
  uint32_t __args_1; // [rsp+40h] [rbp-110h] BYREF
  uint32_t owner_card_guid; // [rsp+44h] [rbp-10Ch]
  GCGCardZone::PreAddReason __args_0[2]; // [rsp+48h] [rbp-108h] BYREF
  const std::set<data::GCGTagType> *tag_set; // [rsp+50h] [rbp-100h]
  GCGSkillPreviewContext *preview_context; // [rsp+58h] [rbp-F8h]
  std::vector<std::shared_ptr<GCGCard>> v37; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v38; // [rsp+80h] [rbp-D0h] BYREF
  std::function<bool(GCGCard&)> p_pred; // [rsp+A0h] [rbp-B0h] BYREF
  char v40[144]; // [rsp+C0h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 12 card_ptr:220 64 16 18 owner_card_ptr:236";
  *(_QWORD *)(v5 + 16) = GCGCardZone::preAddCard;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->zone_type_);
  }
  if ( this->zone_type_ == GCG_ZONE_DECK || this->zone_type_ == GCG_ZONE_HAND )
  {
    *(_QWORD *)__args_0 = 0LL;
    __args_1 = 0;
    std::make_tuple<GCGCardZone::PreAddReason,decltype(nullptr)>(
      (GCGCardZone::PreAddReason *)(v5 + 64),
      &__args_1,
      __args_0,
      &__args_1);
    std::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard>>::tuple<GCGCardZone::PreAddReason,decltype(nullptr),true>(
      retstr,
      (std::tuple<GCGCardZone::PreAddReason,std::nullptr_t> *)(v5 + 64));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Config = GCGGameMode::getConfig(this->game_mode_);
    GCGGameExcelConfigMgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
    tag_set = GCGGameExcelConfigMgr::getCardTagSet(GCGGameExcelConfigMgr, card_id);
    __args_1 = 3;
    if ( common::tools::MiscUtils::isContains<std::set<data::GCGTagType> const,data::GCGTagType>(
           tag_set,
           (const data::GCGTagType *)&__args_1) )
    {
      std::function<bool ()(GCGCard &)>::function<GCGCardZone::preAddCard(unsigned int,proto::GCGReason,unsigned int)::{lambda(GCGCard &)#1},void,void>(
        &p_pred,
        (GCGCardZone::preAddCard::<lambda(GCGCard&)>)&__args_1);
      GCGCardZone::popCard(&v37, this, &p_pred, reason, 1);
      std::vector<std::shared_ptr<GCGCard>>::~vector(&v37);
      std::function<bool ()(GCGCard &)>::~function(&p_pred);
    }
    __args_1 = 4;
    if ( common::tools::MiscUtils::isContains<std::set<data::GCGTagType> const,data::GCGTagType>(
           tag_set,
           (const data::GCGTagType *)&__args_1) )
    {
      std::function<bool ()(GCGCard &)>::function<GCGCardZone::preAddCard(unsigned int,proto::GCGReason,unsigned int)::{lambda(GCGCard &)#2},void,void>(
        &p_pred,
        (GCGCardZone::preAddCard::<lambda(GCGCard&)>)&__args_1);
      GCGCardZone::popCard(&v37, this, &p_pred, reason, 1);
      std::vector<std::shared_ptr<GCGCard>>::~vector(&v37);
      std::function<bool ()(GCGCard &)>::~function(&p_pred);
    }
    if ( GCGCardZone::getZoneType(this) != GCG_ZONE_SUMMON
      && GCGCardZone::getZoneType(this) != GCG_ZONE_ONSTAGE
      && GCGCardZone::getZoneType(this) != GCG_ZONE_MODIFY )
    {
      goto LABEL_42;
    }
    GCGCardZone::findCardById((GCGCardZone *const)(v5 + 32), (uint32_t)this);
    if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v5 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/zone/gcg_card_zone.cpp",
        "preAddCard",
        223);
      card_guida = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                     &v38,
                     (const char (*)[25])"same id card. reset it. ");
      v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
      GCGCard::getDesc[abi:cxx11]((std::string *)&p_pred, v11);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(card_guida, (const std::string *)&p_pred);
      std::string::~string(&p_pred);
      common::milog::MiLogStream::~MiLogStream(&v38);
      v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
      GCGCard::resetToken(v12, reason);
      card_guidb = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
      std::function<ForeachPolicy ()(GCGSkill &)>::function<GCGCardZone::preAddCard(unsigned int,proto::GCGReason,unsigned int)::{lambda(GCGSkill &)#3},void,void>(
        (std::function<ForeachPolicy(GCGSkill&)> *const)&p_pred,
        (GCGCardZone::preAddCard::<lambda(GCGSkill&)>)reason);
      GCGCard::foreachSkill(card_guidb, (std::function<ForeachPolicy(GCGSkill&)> *)&p_pred);
      std::function<ForeachPolicy ()(GCGSkill &)>::~function((std::function<ForeachPolicy(GCGSkill&)> *const)&p_pred);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      card_guidc = this->game_mode_;
      v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
      __args_1 = GCGCard::getGuid(v13);
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)&v37,
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__args_1),
        &__a);
      GCGGameMode::sendClientPerform(card_guidc, GCG_PERFORM_CARD_EXCHANGE, (const std::vector<unsigned int> *)&v37);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&v37);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      if ( GCGGameMode::isDuringSnapshot(this->game_mode_) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        preview_context = GCGGameMode::getSkillPreviewContext(this->game_mode_);
        std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        GCGCard::getOwnerCard((GCGCard *const)(v5 + 64));
        owner_card_guid = 0;
        if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v5 + 64), 0LL) )
        {
          v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          owner_card_guid = GCGCard::getGuid(v14);
        }
        v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        card_guid = GCGCard::getGuid(v15);
        v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
        Id = GCGCard::getId(v16);
        ZoneType = GCGCardZone::getZoneType(this);
        ControllerId = GCGCardZone::getControllerId(this);
        if ( preview_replace_card_id )
          GCGSkillPreviewContext::recordPreviewAddCardForFull(
            preview_context,
            ControllerId,
            ZoneType,
            Id,
            card_guid,
            owner_card_guid,
            preview_replace_card_id);
        else
          GCGSkillPreviewContext::recordPreviewAddCardRefresh(
            preview_context,
            ControllerId,
            ZoneType,
            Id,
            card_guid,
            owner_card_guid,
            0);
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 64));
      }
      if ( GCGCardZone::getZoneType(this) == GCG_ZONE_SUMMON )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        Statistics = GCGGameMode::getStatistics(this->game_mode_);
        v21 = GCGCardZone::getControllerId(this);
        GCGStatistics::reportStatisticSpecifyDataUint(Statistics, v21, SUMMON_TIMES, 1u, 1);
      }
      __args_1 = 2;
      std::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard>>::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard>&,true>(
        retstr,
        (GCGCardZone::PreAddReason *)&__args_1,
        (std::shared_ptr<GCGCard> *)(v5 + 32));
      v22 = 0;
    }
    else
    {
      v22 = 1;
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 32));
    if ( v22 == 1 )
    {
LABEL_42:
      *(_QWORD *)__args_0 = 0LL;
      __args_1 = 0;
      std::make_tuple<GCGCardZone::PreAddReason,decltype(nullptr)>(
        (GCGCardZone::PreAddReason *)(v5 + 64),
        &__args_1,
        __args_0,
        &__args_1);
      std::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard>>::tuple<GCGCardZone::PreAddReason,decltype(nullptr),true>(
        retstr,
        (std::tuple<GCGCardZone::PreAddReason,std::nullptr_t> *)(v5 + 64));
    }
  }
  if ( v40 == (char *)v5 )
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
  return retstr;
};

// Line 209: range 000000000DE97666-000000000DE97688
bool __cdecl GCGCardZone::preAddCard(unsigned int,proto::GCGReason,unsigned int)::{lambda(GCGCard &)#1}::operator()(
        const GCGCardZone::preAddCard::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  return GCGCard::isHasTag(card, GCG_TAG_WEAPON);
};

// Line 213: range 000000000DE9768A-000000000DE976AC
bool __cdecl GCGCardZone::preAddCard(unsigned int,proto::GCGReason,unsigned int)::{lambda(GCGCard &)#2}::operator()(
        const GCGCardZone::preAddCard::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  return GCGCard::isHasTag(card, GCG_TAG_ARTIFACT);
};

// Line 225: range 000000000DE976AE-000000000DE976D0
ForeachPolicy __cdecl GCGCardZone::preAddCard(unsigned int,proto::GCGReason,unsigned int)::{lambda(GCGSkill &)#3}::operator()(
        const GCGCardZone::preAddCard::<lambda(GCGSkill&)> *const __closure,
        GCGSkill *skill)
{
  GCGSkill::reset(skill);
  return 0;
};

// Line 269: range 000000000DE9806E-000000000DE980C2
bool __cdecl GCGCardZone::isCanDel(GCGCardZone *const this, GCGCardPtr *p_card_ptr, GCGReason reason)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t Guid; // edx

  if ( std::operator==<GCGCard>(p_card_ptr, 0LL) )
    return 0;
  v4 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
  Guid = GCGCard::getGuid(v4);
  return GCGCardZone::isHasCard(this, Guid);
};

// Line 276: range 000000000DE980C4-000000000DE985DB
GCGCardZone *__fastcall GCGCardZone::addNewCardWithRefreshOperation(
        GCGCardZone *const this,
        uint32_t card_id,
        GCGReason reason,
        signed int parent_card_guid,
        GCGAddCardRefreshOperator refresh_operator,
        __int64 preview_replace_card_id,
        int a7)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  int v10; // eax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  GCGTokenType ShowTokenType; // eax
  uint32_t *v14; // rax
  uint32_t *v15; // rdx
  GCGCard *v17; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  GCGTokenType v19; // eax
  common::milog::MiLogStream *v20; // rcx
  data::GCGRefreshOperatorType parent_card_guida; // [rsp+4h] [rbp-ECh]
  unsigned int __a; // [rsp+28h] [rbp-C8h] BYREF
  uint32_t show_token_value; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<GCGCard> __r; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+60h] [rbp-90h] BYREF

  parent_card_guida = refresh_operator.refresh_operator_type;
  v7 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 12 20 refresh_operator:275 64 16 16 old_card_ptr:287";
  *(_QWORD *)(v7 + 16) = GCGCardZone::addNewCardWithRefreshOperation;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -219020288;
  v9[536862722] = -202178560;
  *(_QWORD *)(v7 + 32) = preview_replace_card_id;
  *(_DWORD *)(v7 + 40) = a7;
  std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) != 0
    && (char)(((v7 + 32) & 7) + 3) >= *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7 + 32);
  }
  v10 = *(_DWORD *)(v7 + 32);
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      GCGCardZone::findCardById((GCGCardZone *const)(v7 + 64), card_id);
      show_token_value = 0;
      if ( std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v7 + 64)) )
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
        v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
        ShowTokenType = GCGCard::getShowTokenType(v12);
        show_token_value = GCGCard::getToken(v11, ShowTokenType);
        if ( *(_BYTE *)(((v7 + 40) >> 3) + 0x7FFF8000) != 0
          && (char)(((v7 + 40) & 7) + 3) >= *(_BYTE *)(((v7 + 40) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7 + 40);
        }
        if ( show_token_value < *(_DWORD *)(v7 + 40) )
        {
          if ( *(_BYTE *)(((v7 + 36) >> 3) + 0x7FFF8000) != 0
            && (char)(((v7 + 36) & 7) + 3) >= *(_BYTE *)(((v7 + 36) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v7 + 36);
          }
          __a = *(_DWORD *)(v7 + 36) + show_token_value;
          v14 = (uint32_t *)std::min<unsigned int>(&__a, (const unsigned int *)(v7 + 40));
          v15 = v14;
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v14);
          }
          show_token_value = *v15;
        }
      }
      GCGCardZone::addNewCard((GCGCardZone *const)&__r, card_id, reason, parent_card_guid, parent_card_guida);
      std::shared_ptr<GCGCard>::operator=((std::shared_ptr<GCGCard> *const)this, &__r);
      std::shared_ptr<GCGCard>::~shared_ptr(&__r);
      if ( std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)this)
        && std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v7 + 64)) )
      {
        v17 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
        v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
        v19 = GCGCard::getShowTokenType(v18);
        GCGCard::setToken(v17, v19, show_token_value, (GCGReason)parent_card_guid);
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v7 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/zone/gcg_card_zone.cpp",
        "addNewCardWithRefreshOperation",
        309);
      v20 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v28,
              (const char (*)[31])"invalid refresh_operator_type:");
      if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) != 0
        && (char)(((v7 + 32) & 7) + 3) >= *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7 + 32);
      }
      __a = *(_DWORD *)(v7 + 32);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &__a);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
  }
  else
  {
    GCGCardZone::addNewCard((GCGCardZone *const)(v7 + 64), card_id, reason, parent_card_guid, parent_card_guida);
    std::shared_ptr<GCGCard>::operator=((std::shared_ptr<GCGCard> *const)this, (std::shared_ptr<GCGCard> *)(v7 + 64));
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v7 + 64));
  }
  if ( v29 == (char *)v7 )
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
  return this;
};

// Line 316: range 000000000DE985DC-000000000DE98D4F
GCGCardZone *__fastcall GCGCardZone::addNewCard(
        GCGCardZone *const this,
        GCGCardZone *card_id,
        GCGReason reason,
        GCGReason parent_card_guid,
        uint32_t preview_replace_card_id,
        uint32_t a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // rax
  int v10; // r14d
  GCGCardMgr *CardMgr; // rsi
  common::milog::MiLogStream *v12; // rax
  GCGCardMgr *v14; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t Guid; // eax
  std::tuple_element<0,std::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard> > >::type *check_result; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,std::tuple<std::shared_ptr<GCGCard> > >::type *ret_card_ptr_0; // [rsp+30h] [rbp-100h]
  std::tuple_element<0,std::tuple<int,std::shared_ptr<GCGCard> > >::type *ret; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::tuple<std::shared_ptr<GCGCard> > >::type *ret_card_ptr; // [rsp+40h] [rbp-F0h]
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+50h] [rbp-E0h] BYREF
  std::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard> > __t; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v29; // [rsp+80h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+A0h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 11 card_id:315 64 16 12 card_ptr:329";
  *(_QWORD *)(v6 + 16) = GCGCardZone::addNewCard;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202178560;
  *(_DWORD *)(v6 + 48) = reason;
  if ( GCGCardZone::checkCanAdd(card_id, *(_DWORD *)(v6 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "addNewCard",
      319);
    v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v29,
           (const char (*)[28])"checkCanAdd fail. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    GCGCardZone::preAddCard(&__t, card_id, *(_DWORD *)(v6 + 48), parent_card_guid, a6);
    check_result = std::get<0ul,GCGCardZone::PreAddReason,std::shared_ptr<GCGCard>>(&__t);
    ret_card_ptr_0 = std::get<1ul,GCGCardZone::PreAddReason,std::shared_ptr<GCGCard>>(&__t);
    if ( *(_BYTE *)(((unsigned __int64)check_result >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)check_result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)check_result >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(check_result);
    }
    if ( *check_result )
    {
      std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, ret_card_ptr_0);
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
    std::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard>>::~tuple(&__t);
    if ( v10 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_id->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&card_id->game_mode_);
      CardMgr = GCGGameMode::getCardMgr(card_id->game_mode_);
      if ( *(_BYTE *)(((unsigned __int64)&card_id->controller_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_id + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_id->controller_id_ >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&card_id->controller_id_);
      }
      GCGCardMgr::createCard(
        (GCGCardMgr *const)(v6 + 64),
        CardMgr,
        *(GCGControllerValue *)(v6 + 48),
        card_id->controller_id_);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v6 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/zone/gcg_card_zone.cpp",
          "addNewCard",
          332);
        v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v29,
                (const char (*)[28])"create card fail. card_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v6 + 48));
        common::milog::MiLogStream::~MiLogStream(&v29);
        std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
      }
      else
      {
        std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v6 + 64));
        GCGCardZone::addCard(
          (std::tuple<int,std::shared_ptr<GCGCard> > *)&__t,
          card_id,
          &p_card_ptr,
          parent_card_guid,
          0,
          a6);
        std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
        ret = std::get<0ul,int,std::shared_ptr<GCGCard>>((std::tuple<int,std::shared_ptr<GCGCard> > *)&__t);
        ret_card_ptr = std::get<1ul,int,std::shared_ptr<GCGCard>>((std::tuple<int,std::shared_ptr<GCGCard> > *)&__t);
        if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(ret);
        }
        if ( *ret || std::operator==<GCGCard>(ret_card_ptr, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/zone/gcg_card_zone.cpp",
            "addNewCard",
            338);
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v29, (const char (*)[15])off_1BB4BDE0);
          common::milog::MiLogStream::~MiLogStream(&v29);
          std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
        }
        else if ( std::operator!=<GCGCard,GCGCard>(ret_card_ptr, (const std::shared_ptr<GCGCard> *)(v6 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/zone/gcg_card_zone.cpp",
            "addNewCard",
            343);
          common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v29, (const char (*)[14])off_1BB4BE20);
          common::milog::MiLogStream::~MiLogStream(&v29);
          std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, ret_card_ptr);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&card_id->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&card_id->game_mode_);
          v14 = GCGGameMode::getCardMgr(card_id->game_mode_);
          std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v6 + 64));
          GCGCardMgr::notifyNewCard(v14, &p_card_ptr);
          std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
          card_vec = GCGCardZone::getCardVec(card_id);
          LODWORD(v14) = std::vector<std::shared_ptr<GCGCard>>::size(card_vec) - 1;
          v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
          Guid = GCGCard::getGuid(v15);
          GCGCardZone::notifyAddCard(card_id, Guid, (uint32_t)v14, parent_card_guid);
          std::shared_ptr<GCGCard>::shared_ptr(
            (std::shared_ptr<GCGCard> *const)this,
            (std::shared_ptr<GCGCard> *)(v6 + 64));
        }
        std::tuple<int,std::shared_ptr<GCGCard>>::~tuple((std::tuple<int,std::shared_ptr<GCGCard> > *const)&__t);
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v6 + 64));
    }
  }
  if ( v30 == (char *)v6 )
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
  return this;
};

// Line 355: range 000000000DE98D50-000000000DE994E9
std::tuple<int,std::shared_ptr<GCGCard> > *__cdecl GCGCardZone::addCard(
        std::tuple<int,std::shared_ptr<GCGCard> > *retstr,
        GCGCardZone *const this,
        GCGCardPtr *p_card_ptr,
        GCGReason reason,
        bool is_notify,
        uint32_t preview_replace_card_id)
{
  bool v6; // bl
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t Id; // eax
  std::shared_ptr<GCGCard> *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::vector<std::shared_ptr<GCGCard>> *CardVec; // rax
  std::vector<std::shared_ptr<GCGCard>> *v17; // rdx
  unsigned __int64 v18; // rax
  void (__fastcall *v19)(GCGCardZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, bool, _QWORD); // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rsi
  std::shared_ptr<GCGCard> *v21; // r8
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t Guid; // esi
  int __args_1; // [rsp+30h] [rbp-C0h] BYREF
  uint32_t pos; // [rsp+34h] [rbp-BCh]
  int __args_0[2]; // [rsp+38h] [rbp-B8h] BYREF
  std::tuple_element<0,std::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard> > >::type *check_result; // [rsp+40h] [rbp-B0h]
  std::tuple_element<0,std::tuple<std::shared_ptr<GCGCard> > >::type *ret_card_ptr; // [rsp+48h] [rbp-A8h]
  std::tuple<int,std::nullptr_t> __in; // [rsp+50h] [rbp-A0h] BYREF
  std::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard> > __t; // [rsp+60h] [rbp-90h] BYREF
  common::milog::MiLogStream v37; // [rsp+80h] [rbp-70h] BYREF
  std::string val; // [rsp+A0h] [rbp-50h] BYREF
  common::milog::MiLogStream v39; // [rsp+C0h] [rbp-30h] BYREF

  if ( std::operator==<GCGCard>(p_card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "addCard",
      358);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v39, (const char (*)[21])"card_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v39);
    *(_QWORD *)__args_0 = 0LL;
    __args_1 = -1;
    std::make_tuple<int,decltype(nullptr)>((int *)&__in, &__args_1, __args_0, &__args_1);
    std::tuple<int,std::shared_ptr<GCGCard>>::tuple<int,decltype(nullptr),true>(retstr, &__in);
  }
  else
  {
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)&__in, p_card_ptr);
    v6 = GCGCardZone::checkCanAdd(this, (GCGCardPtr *)&__in, 1) != 0;
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&__in);
    if ( v6 )
    {
      *(_QWORD *)__args_0 = 0LL;
      __args_1 = -1;
      std::make_tuple<int,decltype(nullptr)>((int *)&__in, &__args_1, __args_0, &__args_1);
      std::tuple<int,std::shared_ptr<GCGCard>>::tuple<int,decltype(nullptr),true>(retstr, &__in);
    }
    else
    {
      v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
      Id = GCGCard::getId(v7);
      GCGCardZone::preAddCard(&__t, this, Id, reason, preview_replace_card_id);
      check_result = std::get<0ul,GCGCardZone::PreAddReason,std::shared_ptr<GCGCard>>(&__t);
      ret_card_ptr = std::get<1ul,GCGCardZone::PreAddReason,std::shared_ptr<GCGCard>>(&__t);
      if ( *(_BYTE *)(((unsigned __int64)check_result >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)check_result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)check_result >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(check_result);
      }
      if ( *check_result == FAIL_0 )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/zone/gcg_card_zone.cpp",
          "addCard",
          368);
        GCGCardZone::getDesc[abi:cxx11](&val, this);
        v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v37, &val);
        v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])"addCard fail: ");
        v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
        GCGCard::getDesc[abi:cxx11]((std::string *)&v39, v12);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)&v39);
        std::string::~string(&v39);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v37);
        *(_QWORD *)__args_0 = 0LL;
        __args_1 = -1;
        std::make_tuple<int,decltype(nullptr)>((int *)&__in, &__args_1, __args_0, &__args_1);
        std::tuple<int,std::shared_ptr<GCGCard>>::tuple<int,decltype(nullptr),true>(retstr, &__in);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)check_result >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)check_result & 7) + 3) >= *(_BYTE *)(((unsigned __int64)check_result >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(check_result);
        }
        if ( *check_result == EXCHANGE )
        {
          __args_1 = 0;
          if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false> + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false>
                                                                  + 7) >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store_n(retstr, 24LL);
          }
          std::make_tuple<int,std::shared_ptr<GCGCard> &>(retstr, &__args_1, ret_card_ptr, &__args_1, v9);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/zone/gcg_card_zone.cpp",
            "addCard",
            375);
          GCGCardZone::getDesc[abi:cxx11](&val, this);
          v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v37, &val);
          v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])"addCard: ");
          v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
          GCGCard::getDesc[abi:cxx11]((std::string *)&v39, v15);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)&v39);
          std::string::~string(&v39);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v37);
          CardVec = GCGCardZone::getCardVec(this);
          pos = std::vector<std::shared_ptr<GCGCard>>::size(CardVec);
          v17 = GCGCardZone::getCardVec(this);
          std::vector<std::shared_ptr<GCGCard>>::push_back(v17, p_card_ptr);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v18 = (unsigned __int64)(this->_vptr_GCGCardZone + 5);
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            __asan_report_load8(this->_vptr_GCGCardZone + 5);
          v19 = *(void (__fastcall **)(GCGCardZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, bool, _QWORD))v18;
          v20 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
          v19(this, v20, is_notify, preview_replace_card_id);
          if ( is_notify )
          {
            v22 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
            Guid = GCGCard::getGuid(v22);
            GCGCardZone::notifyAddCard(this, Guid, pos, reason);
          }
          __args_1 = 0;
          if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false> + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false>
                                                                  + 7) >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store_n(retstr, 24LL);
          }
          std::make_tuple<int,std::shared_ptr<GCGCard> &>(retstr, &__args_1, p_card_ptr, &__args_1, v21);
        }
      }
      std::tuple<GCGCardZone::PreAddReason,std::shared_ptr<GCGCard>>::~tuple(&__t);
    }
  }
  return retstr;
};

// Line 387: range 000000000DE99946-000000000DE99B33
__int64 __fastcall GCGCardZone::delCardById(
        GCGCardZone *const this,
        uint32_t card_id,
        GCGReason reason,
        char is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 result; // rax
  GCGCardZone::delCardById::<lambda(GCGCard&)> v8; // [rsp-30h] [rbp-140h]
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+20h] [rbp-F0h] BYREF
  GCGCardZone::delCardById::<lambda(GCGCard&)> __f; // [rsp+40h] [rbp-D0h]
  char v13[160]; // [rsp+70h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 13 is_notify:386 64 4 7 ret:388 80 4 11 card_id:386 96 4 10 reason:386";
  *(_QWORD *)(v4 + 16) = GCGCardZone::delCardById;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -202116348;
  *(_DWORD *)(v4 + 80) = card_id;
  *(_DWORD *)(v4 + 96) = reason;
  *(_BYTE *)(v4 + 48) = is_notify;
  *(_DWORD *)(v4 + 64) = 0;
  __f.__card_id = (uint32_t *)(v4 + 80);
  __f.__reason = (GCGReason *)(v4 + 96);
  __f.__is_notify = (bool *)(v4 + 48);
  __f.__this = this;
  __f.__ret = (int32_t *)(v4 + 64);
  v8.__ret = (int32_t *)(v4 + 64);
  v8.__this = this;
  v8.__is_notify = (bool *)(v4 + 48);
  v8.__reason = (GCGReason *)(v4 + 96);
  v8.__card_id = (uint32_t *)(v4 + 80);
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGCardZone::delCardById(unsigned int,proto::GCGReason,bool)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    v8);
  GCGCardZone::foreachCard(this, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  result = *(unsigned int *)(v4 + 64);
  if ( v13 == (char *)v4 )
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

// Line 389: range 000000000DE994EA-000000000DE99944
ForeachPolicy __cdecl GCGCardZone::delCardById(unsigned int,proto::GCGReason,bool)::{lambda(GCGCard &)#1}::operator()(
        const GCGCardZone::delCardById::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t *card_id; // rdx
  uint32_t v6; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  char v8; // al
  GCGCardZone *this; // r14
  bool *v10; // rdx
  GCGReason *reason; // rdx
  GCGReason v12; // r15d
  bool v13; // r14
  common::milog::MiLogStream *v14; // rcx
  int32_t *ret; // rdx
  ForeachPolicy v16; // r14d
  ForeachPolicy result; // eax
  bool is_notify; // [rsp+Ch] [rbp-B4h]
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-90h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 card_ptr:391";
  *(_QWORD *)(v2 + 16) = GCGCardZone::delCardById(unsigned int,proto::GCGReason,bool)::{lambda(GCGCard &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  toPtr<GCGCard,GCGCard>((GCGCard *)(v2 + 32));
  if ( !std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v2 + 32)) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  card_id = __closure->__card_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__card_id >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__card_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__card_id);
  }
  v6 = *card_id;
  v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( v6 == GCGCard::getId(v7) )
    v8 = 1;
  else
LABEL_11:
    v8 = 0;
  if ( !v8 )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_notify >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_notify);
  v10 = __closure->__is_notify;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_notify & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__closure->__is_notify);
  }
  is_notify = *v10;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__reason >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__reason);
  reason = __closure->__reason;
  if ( *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__reason);
  }
  v12 = *reason;
  std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v2 + 32));
  v13 = GCGCardZone::delCard(this, &p_card_ptr, v12, is_notify) != 0;
  std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
  if ( v13 )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "operator()",
      396);
    v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v20,
            (const char (*)[23])"delCard fail, card_id:");
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, __closure->__card_id);
    common::milog::MiLogStream::~MiLogStream(&v20);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__ret >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__ret);
    ret = __closure->__ret;
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(__closure->__ret);
    }
    *ret = -1;
    v16 = FOREACH_BREAK;
  }
  else
  {
LABEL_31:
    v16 = FOREACH_CONTINUE;
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  result = v16;
  if ( v21 == (char *)v2 )
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

// Line 407: range 000000000DE99B34-000000000DE9A176
int32_t __cdecl GCGCardZone::delCard(GCGCardZone *const this, GCGCardPtr *p_card_ptr, GCGReason reason, bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(GCGCardZone *const, std::shared_ptr<GCGCard> *, _QWORD); // r14
  std::shared_ptr<GCGCard> *M_current; // r14
  std::shared_ptr<GCGCard> *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned __int64 v19; // rax
  void (__fastcall *v20)(GCGCardZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r13
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t Guid; // ecx
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __rhs; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<GCGCard> v28; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-B0h] BYREF
  std::string val; // [rsp+80h] [rbp-90h] BYREF
  char v32[112]; // [rsp+A0h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 iter:418";
  *(_QWORD *)(v4 + 16) = GCGCardZone::delCard;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( std::operator==<GCGCard>(p_card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "delCard",
      410);
    GCGCardZone::getDesc[abi:cxx11](&val, this);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v30, &val);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v7,
      (const char (*)[32])"delCard fail. card_ptr is null.");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v9 = (unsigned __int64)(this->_vptr_GCGCardZone + 2);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGCardZone + 2);
    v10 = *(__int64 (__fastcall **)(GCGCardZone *const, std::shared_ptr<GCGCard> *, _QWORD))v9;
    std::shared_ptr<GCGCard>::shared_ptr(&v28, p_card_ptr);
    LOBYTE(v10) = v10(this, &v28, (unsigned int)reason) ^ 1;
    std::shared_ptr<GCGCard>::~shared_ptr(&v28);
    if ( (_BYTE)v10 )
    {
      result = -1;
    }
    else
    {
      card_vec = GCGCardZone::getCardVec(this);
      M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
      v12 = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
      *(__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v4 + 32) = std::find<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>,std::shared_ptr<GCGCard>>((__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)v12, (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)M_current, p_card_ptr);
      __rhs._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
      if ( __gnu_cxx::operator==<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
             (const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v4 + 32),
             &__rhs) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/zone/gcg_card_zone.cpp",
          "delCard",
          421);
        GCGCardZone::getDesc[abi:cxx11]((std::string *)&v30, this);
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v29, (const std::string *)&v30);
        v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v13,
                (const char (*)[18])"can't find card. ");
        v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
        GCGCard::getDesc[abi:cxx11](&val, v15);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &val);
        std::string::~string(&val);
        std::string::~string(&v30);
        common::milog::MiLogStream::~MiLogStream(&v29);
        result = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/zone/gcg_card_zone.cpp",
          "delCard",
          424);
        GCGCardZone::getDesc[abi:cxx11]((std::string *)&v30, this);
        v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v29, (const std::string *)&v30);
        v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])"delCard: ");
        v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
        GCGCard::getDesc[abi:cxx11](&val, v18);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
        std::string::~string(&val);
        std::string::~string(&v30);
        common::milog::MiLogStream::~MiLogStream(&v29);
        __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::__normal_iterator<std::shared_ptr<GCGCard>*>(
          (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *const)&__rhs,
          (const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v4 + 32));
        std::vector<std::shared_ptr<GCGCard>>::erase(
          card_vec,
          (std::vector<std::shared_ptr<GCGCard>>::const_iterator)__rhs._M_current);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v19 = (unsigned __int64)(this->_vptr_GCGCardZone + 6);
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          __asan_report_load8(this->_vptr_GCGCardZone + 6);
        v20 = *(void (__fastcall **)(GCGCardZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v19;
        v21 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
        v20(this, v21);
        if ( is_notify )
        {
          v22 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
          Guid = GCGCard::getGuid(v22);
          GCGCardZone::notifyDelCard(this, Guid, reason);
        }
        result = 0;
      }
    }
  }
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 436: range 000000000DE9A178-000000000DE9A3BE
__int64 __fastcall GCGCardZone::delCard(GCGCardZone *const this, uint32_t card_guid, GCGReason reason, bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  __int64 result; // rax
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 card_guid:435 64 16 12 card_ptr:437";
  *(_QWORD *)(v4 + 16) = GCGCardZone::delCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = card_guid;
  GCGCardZone::findCard((GCGCardZone *const)(v4 + 64), (uint32_t)this);
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "delCard",
      440);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v13,
           (const char (*)[22])"findCard fail. guid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v4 + 64));
    v8 = GCGCardZone::delCard(this, &p_card_ptr, reason, is_notify);
    std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
  result = v8;
  if ( v14 == (char *)v4 )
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

// Line 447: range 000000000DE9A448-000000000DE9A87C
// local variable allocation has failed, the output may be wrong!
GCGCardPtr __cdecl GCGCardZone::popCard(GCGCardZone *const this, uint32_t guid, GCGReason reason, bool is_notify)
{
  bool v4; // r8
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::shared_ptr<GCGCard> *M_current; // r15
  std::vector<std::shared_ptr<GCGCard>>::iterator v9; // rax
  GCGCardPtr result; // rax
  const std::shared_ptr<GCGCard> *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  GCGCard *v15; // rax
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(uint32_t, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t v20; // ecx
  bool is_notifya; // [rsp+14h] [rbp-11Ch]
  _BOOL4 reasona; // [rsp+18h] [rbp-118h]
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __rhs; // [rsp+30h] [rbp-100h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-F0h] BYREF
  std::string val; // [rsp+60h] [rbp-D0h] BYREF
  std::string v28; // [rsp+80h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+A0h] [rbp-90h] BYREF

  reasona = is_notify;
  is_notifya = v4;
  v5 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 8 iter:449 64 16 12 card_ptr:461";
  *(_QWORD *)(v5 + 16) = GCGCardZone::popCard;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -202178560;
  card_vec = GCGCardZone::getCardVec(*(GCGCardZone *const *)&guid);
  M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  v9._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v5 + 32) = std::find_if<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>,GCGCardZone::popCard(unsigned int,proto::GCGReason,bool)::{lambda(std::shared_ptr<GCGCard>&)#1}>(v9, (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)M_current, (GCGCardZone::popCard::<lambda(GCGCardPtr&)>)reason);
  __rhs._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  if ( __gnu_cxx::operator==<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
         (const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v5 + 32),
         &__rhs) )
  {
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    v11 = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *const)(v5 + 32));
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 64), v11);
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::__normal_iterator<std::shared_ptr<GCGCard>*>(
      (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *const)&__rhs,
      (const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v5 + 32));
    std::vector<std::shared_ptr<GCGCard>>::erase(
      card_vec,
      (std::vector<std::shared_ptr<GCGCard>>::const_iterator)__rhs._M_current);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v5 + 64), 0LL) )
    {
      std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/zone/gcg_card_zone.cpp",
        "popCard",
        467);
      GCGCardZone::getDesc[abi:cxx11](&val, *(const GCGCardZone *const *)&guid);
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v26, &val);
      v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])"popCard: ");
      v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      GCGCard::getDesc[abi:cxx11](&v28, v14);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &v28);
      std::string::~string(&v28);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      GCGCard::resetZone(v15);
      if ( *(_BYTE *)((*(_QWORD *)&guid >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(guid);
      v16 = **(_QWORD **)&guid + 48LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        __asan_report_load8(**(_QWORD **)&guid + 48LL);
      v17 = *(void (__fastcall **)(uint32_t, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v16;
      v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      v17(guid, v18);
      if ( is_notifya )
      {
        v19 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        v20 = GCGCard::getGuid(v19);
        GCGCardZone::notifyDelCard(*(const GCGCardZone *const *)&guid, v20, (GCGReason)reasona);
      }
      std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, (std::shared_ptr<GCGCard> *)(v5 + 64));
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 64));
  }
  if ( v29 == (char *)v5 )
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
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 449: range 000000000DE9A3C0-000000000DE9A446
bool __cdecl GCGCardZone::popCard(unsigned int,proto::GCGReason,bool)::{lambda(std::shared_ptr<GCGCard> &)#1}::operator()(
        const GCGCardZone::popCard::<lambda(GCGCardPtr&)> *const __closure,
        GCGCardPtr *card_ptr)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Guid; // ecx

  if ( std::operator==<GCGCard>(card_ptr, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  Guid = GCGCard::getGuid(v3);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return Guid == __closure->__guid;
};

// Line 478: range 000000000DE9A9D6-000000000DE9AEC6
std::vector<std::shared_ptr<GCGCard>> *__cdecl GCGCardZone::popCard(
        std::vector<std::shared_ptr<GCGCard>> *retstr,
        GCGCardZone *const this,
        const std::vector<unsigned int> *card_guid_vec,
        GCGReason reason,
        bool is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  std::shared_ptr<GCGCard> *M_current; // r14
  std::vector<std::shared_ptr<GCGCard>>::iterator v11; // rax
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(GCGCardZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  unsigned __int64 v15; // rax
  void (__fastcall *v16)(GCGCardZone *const, std::vector<unsigned int> *, _QWORD); // r14
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > v23; // [rsp+30h] [rbp-130h] BYREF
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __i; // [rsp+38h] [rbp-128h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_begin_0; // [rsp+40h] [rbp-120h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_end_0; // [rsp+48h] [rbp-118h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+50h] [rbp-110h]
  const std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-108h]
  std::vector<std::shared_ptr<GCGCard>> *__for_range_0; // [rsp+60h] [rbp-100h]
  std::shared_ptr<GCGCard> *card_ptr; // [rsp+68h] [rbp-F8h]
  std::vector<unsigned int> v31; // [rsp+70h] [rbp-F0h] BYREF
  GCGCardZone::popCard::<lambda(GCGCardPtr&)>_0 __pred; // [rsp+90h] [rbp-D0h]
  char v33[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 8 guid:482 64 24 24 delete_card_guid_vec:480";
  *(_QWORD *)(v5 + 16) = GCGCardZone::popCard;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  std::vector<std::shared_ptr<GCGCard>>::vector(retstr);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 64));
  card_vec = GCGCardZone::getCardVec(this);
  __for_range = card_guid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(card_guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(card_guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v5 + 48) = *v9;
    __i._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::__normal_iterator<std::shared_ptr<GCGCard>*>(
      (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *const)&__for_end_0,
      &__i);
    __pred.__delete_card_vec = retstr;
    __pred.__delete_card_guid_vec = (std::vector<unsigned int> *)(v5 + 64);
    __pred.__guid = (uint32_t *)(v5 + 48);
    M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
    v11._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
    v23._M_current = std::remove_if<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>,GCGCardZone::popCard(std::vector const&<unsigned int,std::allocator<unsigned int>>,proto::GCGReason,bool)::{lambda(std::shared_ptr<GCGCard>&)#1}>(
                       v11,
                       (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)M_current,
                       __pred)._M_current;
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::__normal_iterator<std::shared_ptr<GCGCard>*>(
      (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *const)&__for_begin_0,
      &v23);
    std::vector<std::shared_ptr<GCGCard>>::erase(
      card_vec,
      (std::vector<std::shared_ptr<GCGCard>>::const_iterator)__for_begin_0._M_current,
      (std::vector<std::shared_ptr<GCGCard>>::const_iterator)__for_end_0._M_current);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = retstr;
  __for_begin_0._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(retstr)._M_current;
  __for_end_0._M_current = std::vector<std::shared_ptr<GCGCard>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin_0,
            &__for_end_0) )
  {
    card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin_0);
    if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v12 = (unsigned __int64)(this->_vptr_GCGCardZone + 6);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->_vptr_GCGCardZone + 6);
      v13 = *(void (__fastcall **)(GCGCardZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12;
      v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      v13(this, v14);
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin_0);
  }
  if ( is_notify )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v15 = (unsigned __int64)(this->_vptr_GCGCardZone + 4);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGCardZone + 4);
    v16 = *(void (__fastcall **)(GCGCardZone *const, std::vector<unsigned int> *, _QWORD))v15;
    std::vector<unsigned int>::vector(&v31, (const std::vector<unsigned int> *)(v5 + 64));
    v16(this, &v31, (unsigned int)reason);
    std::vector<unsigned int>::~vector(&v31);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 64));
  if ( v33 == (char *)v5 )
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
  return retstr;
};

// Line 484: range 000000000DE9A87E-000000000DE9A9D5
bool __cdecl GCGCardZone::popCard(std::vector<unsigned int> const&,proto::GCGReason,bool)::{lambda(std::shared_ptr<GCGCard> &)#1}::operator()(
        const GCGCardZone::popCard::<lambda(GCGCardPtr&)>_0 *const __closure,
        GCGCardPtr *card_ptr)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Guid; // esi
  uint32_t *v5; // rdx
  std::vector<unsigned int> *delete_card_guid_vec; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( std::operator==<GCGCard>(card_ptr, 0LL) )
    return 1;
  v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  Guid = GCGCard::getGuid(v3);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__guid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__guid);
  v5 = __closure->__guid;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__guid);
  }
  if ( Guid != *v5 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::vector<std::shared_ptr<GCGCard>>::push_back(__closure->__delete_card_vec, card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__delete_card_guid_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__delete_card_guid_vec);
  delete_card_guid_vec = __closure->__delete_card_guid_vec;
  v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  __x[0] = GCGCard::getGuid(v7);
  std::vector<unsigned int>::push_back(delete_card_guid_vec, __x);
  return 1;
};

// Line 514: range 000000000DE9AEC8-000000000DE9B241
// local variable allocation has failed, the output may be wrong!
GCGCardPtr __cdecl GCGCardZone::popCard(GCGCardZone *const this, GCGReason reason, bool is_notify)
{
  bool v3; // cl
  std::shared_ptr<GCGCard> *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  GCGCardPtr result; // rax
  const std::shared_ptr<GCGCard> *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(GCGReason, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t Guid; // ecx
  bool is_notifya; // [rsp+8h] [rbp-F8h]
  _BOOL4 reasona; // [rsp+Ch] [rbp-F4h]
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-D0h] BYREF
  std::string val; // [rsp+50h] [rbp-B0h] BYREF
  std::string v22; // [rsp+70h] [rbp-90h] BYREF
  char v23[112]; // [rsp+90h] [rbp-70h] BYREF

  reasona = is_notify;
  is_notifya = v3;
  v4 = (std::shared_ptr<GCGCard> *)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = (std::shared_ptr<GCGCard> *)v5;
  }
  v4->_M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v4->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 card_ptr:520";
  v4[1]._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)GCGCardZone::popCard;
  v6 = (unsigned __int64)v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  card_vec = GCGCardZone::getCardVec(*(GCGCardZone *const *)&reason);
  if ( std::vector<std::shared_ptr<GCGCard>>::empty(card_vec) )
  {
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    v8 = std::vector<std::shared_ptr<GCGCard>>::back(card_vec);
    std::shared_ptr<GCGCard>::shared_ptr(v4 + 2, v8);
    if ( std::operator==<GCGCard>(v4 + 2, 0LL) )
    {
      std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
    }
    else
    {
      std::vector<std::shared_ptr<GCGCard>>::pop_back(card_vec);
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/zone/gcg_card_zone.cpp",
        "popCard",
        526);
      GCGCardZone::getDesc[abi:cxx11](&val, *(const GCGCardZone *const *)&reason);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v20, &val);
      v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])"popCard: ");
      v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4[2]);
      GCGCard::getDesc[abi:cxx11](&v22, v11);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &v22);
      std::string::~string(&v22);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      if ( *(_BYTE *)((*(_QWORD *)&reason >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(reason);
      v12 = **(_QWORD **)&reason + 48LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(**(_QWORD **)&reason + 48LL);
      v13 = *(void (__fastcall **)(GCGReason, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12;
      v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4[2]);
      v13(reason, v14);
      if ( is_notifya )
      {
        v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4[2]);
        Guid = GCGCard::getGuid(v15);
        GCGCardZone::notifyDelCard(*(const GCGCardZone *const *)&reason, Guid, (GCGReason)reasona);
      }
      std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, v4 + 2);
    }
    std::shared_ptr<GCGCard>::~shared_ptr(v4 + 2);
  }
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v4->_M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 536: range 000000000DE9B242-000000000DE9B6CF
std::vector<std::shared_ptr<GCGCard>> *__cdecl GCGCardZone::popAllCard(
        std::vector<std::shared_ptr<GCGCard>> *retstr,
        GCGCardZone *const this,
        GCGReason reason,
        bool is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(GCGCardZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(GCGCardZone *const, std::vector<unsigned int> *, _QWORD); // r14
  std::vector<unsigned int>::value_type __x; // [rsp+24h] [rbp-11Ch] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+38h] [rbp-108h]
  std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+40h] [rbp-100h]
  std::shared_ptr<GCGCard> *card_ptr; // [rsp+48h] [rbp-F8h]
  std::vector<unsigned int> v22; // [rsp+50h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+70h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 24 24 delete_card_guid_vec:542 96 24 19 delete_card_vec:543";
  *(_QWORD *)(v4 + 16) = GCGCardZone::popAllCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234881024;
  v6[536862722] = -218959118;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  card_vec = GCGCardZone::getCardVec(this);
  if ( std::vector<std::shared_ptr<GCGCard>>::empty(card_vec) )
  {
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
    std::vector<std::shared_ptr<GCGCard>>::vector(retstr);
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 32));
    std::vector<std::shared_ptr<GCGCard>>::vector((std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 96));
    std::vector<std::shared_ptr<GCGCard>>::swap(card_vec, (std::vector<std::shared_ptr<GCGCard>> *)(v4 + 96));
    __for_range = (std::vector<std::shared_ptr<GCGCard>> *)(v4 + 96);
    __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin((std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 96))._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end((std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 96))._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
              &__for_begin,
              &__for_end) )
    {
      card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
      if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v7 = (unsigned __int64)(this->_vptr_GCGCardZone + 6);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          __asan_report_load8(this->_vptr_GCGCardZone + 6);
        v8 = *(void (__fastcall **)(GCGCardZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7;
        v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
        v8(this, v9);
        v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
        __x = GCGCard::getGuid(v10);
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v4 + 32), &__x);
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
    }
    if ( is_notify )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v11 = (unsigned __int64)(this->_vptr_GCGCardZone + 4);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->_vptr_GCGCardZone + 4);
      v12 = *(void (__fastcall **)(GCGCardZone *const, std::vector<unsigned int> *, _QWORD))v11;
      std::vector<unsigned int>::vector(&v22, (const std::vector<unsigned int> *)(v4 + 32));
      v12(this, &v22, (unsigned int)reason);
      std::vector<unsigned int>::~vector(&v22);
    }
    std::vector<std::shared_ptr<GCGCard>>::vector(retstr, (std::vector<std::shared_ptr<GCGCard>> *)(v4 + 96));
    std::vector<std::shared_ptr<GCGCard>>::~vector((std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 96));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 32));
  }
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 561: range 000000000DE9B7EA-000000000DE9BC0B
std::vector<std::shared_ptr<GCGCard>> *__cdecl GCGCardZone::popCard(
        std::vector<std::shared_ptr<GCGCard>> *retstr,
        GCGCardZone *const this,
        std::function<bool(GCGCard&)> *p_pred,
        GCGReason reason,
        bool is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::shared_ptr<GCGCard> *M_current; // r14
  std::vector<std::shared_ptr<GCGCard>>::iterator v9; // rax
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(GCGCardZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(GCGCardZone *const, std::vector<unsigned int> *, _QWORD); // r14
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > v19; // [rsp+28h] [rbp-108h] BYREF
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __i; // [rsp+30h] [rbp-100h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_begin; // [rsp+38h] [rbp-F8h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_end; // [rsp+40h] [rbp-F0h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+48h] [rbp-E8h]
  std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+50h] [rbp-E0h]
  std::shared_ptr<GCGCard> *card_ptr; // [rsp+58h] [rbp-D8h]
  std::vector<unsigned int> v26; // [rsp+60h] [rbp-D0h] BYREF
  GCGCardZone::popCard::<lambda(GCGCardPtr&)>_1 __pred; // [rsp+80h] [rbp-B0h]
  char v28[144]; // [rsp+A0h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 24 delete_card_guid_vec:563";
  *(_QWORD *)(v5 + 16) = GCGCardZone::popCard;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218103808;
  v7[536862722] = -202116109;
  std::vector<std::shared_ptr<GCGCard>>::vector(retstr);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 32));
  card_vec = GCGCardZone::getCardVec(this);
  __i._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::__normal_iterator<std::shared_ptr<GCGCard>*>(
    (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *const)&__for_end,
    &__i);
  __pred.__delete_card_vec = retstr;
  __pred.__delete_card_guid_vec = (std::vector<unsigned int> *)(v5 + 32);
  __pred.__pred = p_pred;
  M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  v9._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  v19._M_current = std::remove_if<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>,GCGCardZone::popCard(std::function<bool ()(GCGCard&)>,proto::GCGReason,bool)::{lambda(std::shared_ptr<GCGCard>&)#1}>(
                     v9,
                     (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)M_current,
                     __pred)._M_current;
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::__normal_iterator<std::shared_ptr<GCGCard>*>(
    (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *const)&__for_begin,
    &v19);
  std::vector<std::shared_ptr<GCGCard>>::erase(
    card_vec,
    (std::vector<std::shared_ptr<GCGCard>>::const_iterator)__for_begin._M_current,
    (std::vector<std::shared_ptr<GCGCard>>::const_iterator)__for_end._M_current);
  __for_range = retstr;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(retstr)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin,
            &__for_end) )
  {
    card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
    if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v10 = (unsigned __int64)(this->_vptr_GCGCardZone + 6);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->_vptr_GCGCardZone + 6);
      v11 = *(void (__fastcall **)(GCGCardZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v10;
      v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      v11(this, v12);
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  if ( is_notify )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v13 = (unsigned __int64)(this->_vptr_GCGCardZone + 4);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGCardZone + 4);
    v14 = *(void (__fastcall **)(GCGCardZone *const, std::vector<unsigned int> *, _QWORD))v13;
    std::vector<unsigned int>::vector(&v26, (const std::vector<unsigned int> *)(v5 + 32));
    v14(this, &v26, (unsigned int)reason);
    std::vector<unsigned int>::~vector(&v26);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 32));
  if ( v28 == (char *)v5 )
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
  return retstr;
};

// Line 565: range 000000000DE9B6D0-000000000DE9B7E8
bool __cdecl GCGCardZone::popCard(std::function<bool ()(GCGCard &)>,proto::GCGReason,bool)::{lambda(std::shared_ptr<GCGCard> &)#1}::operator()(
        const GCGCardZone::popCard::<lambda(GCGCardPtr&)>_1 *const __closure,
        GCGCardPtr *card_ptr)
{
  std::function<bool(GCGCard&)> *pred; // rbx
  GCGCard *v4; // rax
  std::vector<unsigned int> *delete_card_guid_vec; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( std::operator==<GCGCard>(card_ptr, 0LL) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__pred >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__pred);
  pred = __closure->__pred;
  v4 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  if ( !std::function<bool ()(GCGCard &)>::operator()(pred, v4) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::vector<std::shared_ptr<GCGCard>>::push_back(__closure->__delete_card_vec, card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__delete_card_guid_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__delete_card_guid_vec);
  delete_card_guid_vec = __closure->__delete_card_guid_vec;
  v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  __x[0] = GCGCard::getGuid(v6);
  std::vector<unsigned int>::push_back(delete_card_guid_vec, __x);
  return 1;
};

// Line 594: range 000000000DE9BC0C-000000000DE9BD1D
void __cdecl GCGCardZone::notifyAddCard(
        const GCGCardZone *const this,
        uint32_t card_guid,
        uint32_t pos,
        GCGReason reason)
{
  unsigned __int64 v4; // rax
  void (__fastcall *v5)(const GCGCardZone *const, char *, _QWORD, _QWORD); // rbx
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-45h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+2Ch] [rbp-44h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = (unsigned __int64)(this->_vptr_GCGCardZone + 3);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_GCGCardZone + 3);
  v5 = *(void (__fastcall **)(const GCGCardZone *const, char *, _QWORD, _QWORD))v4;
  LODWORD(__l._M_array) = card_guid;
  std::allocator<unsigned int>::allocator(&__a);
  std::vector<unsigned int>::vector(
    (std::vector<unsigned int> *const)((char *)&__l._M_array + 4),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
    &__a);
  v5(this, (char *)&__l._M_array + 4, pos, (unsigned int)reason);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)((char *)&__l._M_array + 4));
  std::allocator<unsigned int>::~allocator(&__a);
};

// Line 599: range 000000000DE9BD1E-000000000DE9BE2C
void __cdecl GCGCardZone::notifyDelCard(const GCGCardZone *const this, uint32_t card_guid, GCGReason reason)
{
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(const GCGCardZone *const, char *, _QWORD); // rbx
  std::allocator<unsigned int> __a; // [rsp+1Bh] [rbp-45h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+1Ch] [rbp-44h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_GCGCardZone + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_GCGCardZone + 4);
  v4 = *(void (__fastcall **)(const GCGCardZone *const, char *, _QWORD))v3;
  LODWORD(__l._M_array) = card_guid;
  std::allocator<unsigned int>::allocator(&__a);
  std::vector<unsigned int>::vector(
    (std::vector<unsigned int> *const)((char *)&__l._M_array + 4),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
    &__a);
  v4(this, (char *)&__l._M_array + 4, (unsigned int)reason);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)((char *)&__l._M_array + 4));
  std::allocator<unsigned int>::~allocator(&__a);
};

// Line 604: range 000000000DE9BE2E-000000000DE9C17E
void __cdecl GCGCardZone::notifyAddCard(
        const GCGCardZone *const this,
        std::vector<unsigned int> *p_card_guid_vec,
        uint32_t pos,
        GCGReason reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::vector<unsigned int> *v7; // r14
  std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGZoneType zone_type; // r14d
  std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  GCGZoneType *p_zone; // rax
  std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  GCGReason *p_reason; // rax
  std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+20h] [rbp-80h] BYREF
  char v21[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 15 message_ptr:605";
  *(_QWORD *)(v4 + 16) = GCGCardZone::notifyAddCard;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::tools::perf::make_shared<GCGMsgAddCards>();
  if ( !std::operator==<GCGMsgAddCards>((const std::shared_ptr<GCGMsgAddCards> *)(v4 + 32), 0LL) )
  {
    v7 = std::move<std::vector<unsigned int> &>(p_card_guid_vec);
    v8 = std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    std::vector<unsigned int>::operator=(&v8->card_guid_vec, v7);
    ControllerId = GCGCardZone::getControllerId(this);
    v10 = std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->controller_id);
    }
    v10->controller_id = ControllerId;
    if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->zone_type_);
    }
    zone_type = this->zone_type_;
    v12 = std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    p_zone = &v12->zone;
    if ( *(_BYTE *)(((unsigned __int64)p_zone >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_zone & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_zone >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_zone);
    }
    v12->zone = zone_type;
    v14 = std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    p_reason = &v14->reason;
    if ( *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_reason);
    }
    v14->reason = reason;
    v16 = std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v16->pos >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v16->pos >> 3) + 0x7FFF8000) <= 3 )
    {
      v16 = (std::__shared_ptr_access<GCGMsgAddCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v16->pos);
    }
    v16->pos = pos;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    game_mode = this->game_mode_;
    std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgAddCards,void>(
      &p_msg,
      (const std::shared_ptr<GCGMsgAddCards> *)(v4 + 32));
    GCGGameMode::sendMessage(game_mode, &p_msg);
    std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  }
  std::shared_ptr<GCGMsgAddCards>::~shared_ptr((std::shared_ptr<GCGMsgAddCards> *const)(v4 + 32));
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 619: range 000000000DE9C180-000000000DE9C479
void __cdecl GCGCardZone::notifyDelCard(
        const GCGCardZone *const this,
        std::vector<unsigned int> *p_card_guid_vec,
        GCGReason reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::vector<unsigned int> *v6; // r14
  std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GCGZoneType zone_type; // r14d
  std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  GCGZoneType *p_zone; // rax
  std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+20h] [rbp-80h] BYREF
  char v17[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 message_ptr:620";
  *(_QWORD *)(v3 + 16) = GCGCardZone::notifyDelCard;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<GCGMsgRemoveCards>();
  if ( !std::operator==<GCGMsgRemoveCards>((const std::shared_ptr<GCGMsgRemoveCards> *)(v3 + 32), 0LL) )
  {
    v6 = std::move<std::vector<unsigned int> &>(p_card_guid_vec);
    v7 = std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    std::vector<unsigned int>::operator=(&v7->card_guid_vec, v6);
    ControllerId = GCGCardZone::getControllerId(this);
    v9 = std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v9->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v9->controller_id);
    }
    v9->controller_id = ControllerId;
    if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->zone_type_);
    }
    zone_type = this->zone_type_;
    v11 = std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    p_zone = &v11->zone;
    if ( *(_BYTE *)(((unsigned __int64)p_zone >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_zone & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_zone >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_zone);
    }
    v11->zone = zone_type;
    v13 = std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v13->reason >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v13->reason >> 3) + 0x7FFF8000) <= 3 )
    {
      v13 = (std::__shared_ptr_access<GCGMsgRemoveCards,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v13->reason);
    }
    v13->reason = reason;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    game_mode = this->game_mode_;
    std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgRemoveCards,void>(
      &p_msg,
      (const std::shared_ptr<GCGMsgRemoveCards> *)(v3 + 32));
    GCGGameMode::sendMessage(game_mode, &p_msg);
    std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  }
  std::shared_ptr<GCGMsgRemoveCards>::~shared_ptr((std::shared_ptr<GCGMsgRemoveCards> *const)(v3 + 32));
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

// Line 633: range 000000000DE9C502-000000000DE9C634
bool __cdecl GCGCardZone::isHasCard(const GCGCardZone *const this, uint32_t guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::shared_ptr<GCGCard> *M_current; // r15
  std::vector<std::shared_ptr<GCGCard>>::const_iterator v6; // rax
  bool result; // al
  __gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __rhs; // [rsp+20h] [rbp-80h] BYREF
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-78h]
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:635";
  *(_QWORD *)(v2 + 16) = GCGCardZone::isHasCard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  card_vec = GCGCardZone::getCardVec(this);
  M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  v6._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v2 + 32) = std::find_if<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>,GCGCardZone::isHasCard(unsigned int)::{lambda(std::shared_ptr<GCGCard> const&)#1}>(v6, (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)M_current, (GCGCardZone::isHasCard::<lambda(const GCGCardPtr&)>)guid);
  __rhs._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  result = __gnu_cxx::operator!=<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>(
             (const __gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v2 + 32),
             &__rhs);
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

// Line 635: range 000000000DE9C47A-000000000DE9C500
bool __cdecl GCGCardZone::isHasCard(unsigned int)const::{lambda(std::shared_ptr<GCGCard> const&)#1}::operator()(
        const GCGCardZone::isHasCard::<lambda(const GCGCardPtr&)> *const __closure,
        const GCGCardPtr *card_ptr)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Guid; // ecx

  if ( std::operator==<GCGCard>(card_ptr, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  Guid = GCGCard::getGuid(v3);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return Guid == __closure->__guid;
};

// Line 647: range 000000000DE9C6BE-000000000DE9C7F0
bool __cdecl GCGCardZone::isHasCardById(const GCGCardZone *const this, uint32_t card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::shared_ptr<GCGCard> *M_current; // r15
  std::vector<std::shared_ptr<GCGCard>>::const_iterator v6; // rax
  bool result; // al
  __gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __rhs; // [rsp+20h] [rbp-80h] BYREF
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-78h]
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:649";
  *(_QWORD *)(v2 + 16) = GCGCardZone::isHasCardById;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  card_vec = GCGCardZone::getCardVec(this);
  M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  v6._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v2 + 32) = std::find_if<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>,GCGCardZone::isHasCardById(unsigned int)::{lambda(std::shared_ptr<GCGCard> const&)#1}>(v6, (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)M_current, (GCGCardZone::isHasCardById::<lambda(const GCGCardPtr&)>)card_id);
  __rhs._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  result = __gnu_cxx::operator!=<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>(
             (const __gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v2 + 32),
             &__rhs);
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

// Line 649: range 000000000DE9C636-000000000DE9C6BC
bool __cdecl GCGCardZone::isHasCardById(unsigned int)const::{lambda(std::shared_ptr<GCGCard> const&)#1}::operator()(
        const GCGCardZone::isHasCardById::<lambda(const GCGCardPtr&)> *const __closure,
        const GCGCardPtr *card_ptr)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Id; // ecx

  if ( std::operator==<GCGCard>(card_ptr, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  Id = GCGCard::getId(v3);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return Id == __closure->__card_id;
};

// Line 661: range 000000000DE9C878-000000000DE9C9AA
bool __cdecl GCGCardZone::isHasCardByTag(const GCGCardZone *const this, GCGTagType tag)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::shared_ptr<GCGCard> *M_current; // r15
  std::vector<std::shared_ptr<GCGCard>>::const_iterator v6; // rax
  bool result; // al
  __gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __rhs; // [rsp+20h] [rbp-80h] BYREF
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-78h]
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:663";
  *(_QWORD *)(v2 + 16) = GCGCardZone::isHasCardByTag;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  card_vec = GCGCardZone::getCardVec(this);
  M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  v6._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v2 + 32) = std::find_if<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>,GCGCardZone::isHasCardByTag(data::GCGTagType)::{lambda(std::shared_ptr<GCGCard> const&)#1}>(v6, (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)M_current, (GCGCardZone::isHasCardByTag::<lambda(const GCGCardPtr&)>)tag);
  __rhs._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  result = __gnu_cxx::operator!=<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>(
             (const __gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v2 + 32),
             &__rhs);
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

// Line 663: range 000000000DE9C7F2-000000000DE9C876
bool __cdecl GCGCardZone::isHasCardByTag(data::GCGTagType)const::{lambda(std::shared_ptr<GCGCard> const&)#1}::operator()(
        const GCGCardZone::isHasCardByTag::<lambda(const GCGCardPtr&)> *const __closure,
        const GCGCardPtr *card_ptr)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rcx

  if ( std::operator==<GCGCard>(card_ptr, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return GCGCard::isHasTag(v3, __closure->__tag);
};

// Line 675: range 000000000DE9CA34-000000000DE9CBAF
// local variable allocation has failed, the output may be wrong!
GCGCardPtr __cdecl GCGCardZone::findCard(GCGCardZone *const this, uint32_t guid)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<GCGCard> *M_current; // r15
  std::vector<std::shared_ptr<GCGCard>>::iterator v7; // rax
  GCGCardPtr result; // rax
  const std::shared_ptr<GCGCard> *v9; // rdx
  uint32_t guida; // [rsp+Ch] [rbp-94h]
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __rhs; // [rsp+20h] [rbp-80h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-78h]
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  guida = v2;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:677";
  *(_QWORD *)(v3 + 16) = GCGCardZone::findCard;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  card_vec = GCGCardZone::getCardVec(*(GCGCardZone *const *)&guid);
  M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  v7._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v3 + 32) = std::find_if<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>,GCGCardZone::findCard(unsigned int)::{lambda(std::shared_ptr<GCGCard>&)#1}>(v7, (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)M_current, (GCGCardZone::findCard::<lambda(GCGCardPtr&)>)guida);
  __rhs._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  if ( __gnu_cxx::operator==<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
         (const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v3 + 32),
         &__rhs) )
  {
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    v9 = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *const)(v3 + 32));
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, v9);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 677: range 000000000DE9C9AC-000000000DE9CA32
bool __cdecl GCGCardZone::findCard(unsigned int)::{lambda(std::shared_ptr<GCGCard> &)#1}::operator()(
        const GCGCardZone::findCard::<lambda(GCGCardPtr&)> *const __closure,
        GCGCardPtr *card_ptr)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Guid; // ecx

  if ( std::operator==<GCGCard>(card_ptr, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  Guid = GCGCard::getGuid(v3);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return Guid == __closure->__guid;
};

// Line 693: range 000000000DE9CBB0-000000000DE9CC2E
// local variable allocation has failed, the output may be wrong!
GCGCardPtr __cdecl GCGCardZone::findCardByIndex(GCGCardZone *const this, uint32_t index)
{
  uint32_t v2; // edx
  GCGCardPtr result; // rax
  const std::shared_ptr<GCGCard> *v4; // rdx
  uint32_t indexa; // [rsp+Ch] [rbp-34h]
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-18h]

  indexa = v2;
  card_vec = GCGCardZone::getCardVec(*(GCGCardZone *const *)&index);
  if ( indexa < std::vector<std::shared_ptr<GCGCard>>::size(card_vec) )
  {
    v4 = std::vector<std::shared_ptr<GCGCard>>::operator[](card_vec, indexa);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, v4);
  }
  else
  {
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 703: range 000000000DE9CCB8-000000000DE9CE33
// local variable allocation has failed, the output may be wrong!
GCGCardPtr __cdecl GCGCardZone::findCardById(GCGCardZone *const this, uint32_t card_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<GCGCard> *M_current; // r15
  std::vector<std::shared_ptr<GCGCard>>::iterator v7; // rax
  GCGCardPtr result; // rax
  const std::shared_ptr<GCGCard> *v9; // rdx
  uint32_t card_ida; // [rsp+Ch] [rbp-94h]
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __rhs; // [rsp+20h] [rbp-80h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-78h]
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  card_ida = v2;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:705";
  *(_QWORD *)(v3 + 16) = GCGCardZone::findCardById;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  card_vec = GCGCardZone::getCardVec(*(GCGCardZone *const *)&card_id);
  M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  v7._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v3 + 32) = std::find_if<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>,GCGCardZone::findCardById(unsigned int)::{lambda(std::shared_ptr<GCGCard>&)#1}>(v7, (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)M_current, (GCGCardZone::findCardById::<lambda(GCGCardPtr&)>)card_ida);
  __rhs._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  if ( __gnu_cxx::operator==<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
         (const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v3 + 32),
         &__rhs) )
  {
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    v9 = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *const)(v3 + 32));
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, v9);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 705: range 000000000DE9CC30-000000000DE9CCB6
bool __cdecl GCGCardZone::findCardById(unsigned int)::{lambda(std::shared_ptr<GCGCard> &)#1}::operator()(
        const GCGCardZone::findCardById::<lambda(GCGCardPtr&)> *const __closure,
        GCGCardPtr *card_ptr)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Id; // ecx

  if ( std::operator==<GCGCard>(card_ptr, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  Id = GCGCard::getId(v3);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return Id == __closure->__card_id;
};

// Line 721: range 000000000DE9CEBA-000000000DE9D035
// local variable allocation has failed, the output may be wrong!
GCGCardPtr __cdecl GCGCardZone::findCardByTag(GCGCardZone *const this, GCGTagType tag)
{
  GCGTagType v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<GCGCard> *M_current; // r15
  std::vector<std::shared_ptr<GCGCard>>::iterator v7; // rax
  GCGCardPtr result; // rax
  const std::shared_ptr<GCGCard> *v9; // rdx
  GCGTagType taga; // [rsp+Ch] [rbp-94h]
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __rhs; // [rsp+20h] [rbp-80h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-78h]
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  taga = v2;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:723";
  *(_QWORD *)(v3 + 16) = GCGCardZone::findCardByTag;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  card_vec = GCGCardZone::getCardVec(*(GCGCardZone *const *)&tag);
  M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  v7._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  *(__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v3 + 32) = std::find_if<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>,GCGCardZone::findCardByTag(data::GCGTagType)::{lambda(std::shared_ptr<GCGCard>&)#1}>(v7, (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >)M_current, (GCGCardZone::findCardByTag::<lambda(GCGCardPtr&)>)taga);
  __rhs._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  if ( __gnu_cxx::operator==<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
         (const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *)(v3 + 32),
         &__rhs) )
  {
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    v9 = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > *const)(v3 + 32));
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, v9);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 723: range 000000000DE9CE34-000000000DE9CEB8
bool __cdecl GCGCardZone::findCardByTag(data::GCGTagType)::{lambda(std::shared_ptr<GCGCard> &)#1}::operator()(
        const GCGCardZone::findCardByTag::<lambda(GCGCardPtr&)> *const __closure,
        GCGCardPtr *card_ptr)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rcx

  if ( std::operator==<GCGCard>(card_ptr, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return GCGCard::isHasTag(v3, __closure->__tag);
};

// Line 739: range 000000000DE9D036-000000000DE9D239
void __cdecl GCGCardZone::foreachCard(GCGCardZone *const this, std::function<ForeachPolicy(GCGCard&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<std::shared_ptr<GCGCard>> *CardVec; // rax
  GCGCard *v6; // rdx
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+20h] [rbp-90h]
  const std::shared_ptr<GCGCard> *card_ptr; // [rsp+28h] [rbp-88h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 17 copy_card_vec:740";
  *(_QWORD *)(v2 + 16) = GCGCardZone::foreachCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  CardVec = GCGCardZone::getCardVec(this);
  std::vector<std::shared_ptr<GCGCard>>::vector((std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32), CardVec);
  __for_range = (const std::vector<std::shared_ptr<GCGCard>> *)(v2 + 32);
  __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin((const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end((const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin,
            &__for_end) )
  {
    card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
    if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
    {
      v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      if ( std::function<ForeachPolicy ()(GCGCard &)>::operator()(p_func, v6) == FOREACH_BREAK )
        break;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  std::vector<std::shared_ptr<GCGCard>>::~vector((std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32));
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
};

// Line 751: range 000000000DE9D23A-000000000DE9D302
void __cdecl GCGCardZone::foreachCard(
        const GCGCardZone *const this,
        std::function<ForeachPolicy(const GCGCard&)> *p_func)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-18h]
  const std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+30h] [rbp-10h]
  const std::shared_ptr<GCGCard> *card_ptr; // [rsp+38h] [rbp-8h]

  card_vec = GCGCardZone::getCardVec(this);
  __for_range = card_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin,
            &__for_end) )
  {
    card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
    if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
    {
      v2 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      if ( std::function<ForeachPolicy ()(GCGCard const&)>::operator()(p_func, v2) == FOREACH_BREAK )
        break;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
  }
};

// Line 763: range 000000000DE9D304-000000000DE9DB91
void __cdecl GCGCardZone::onAddCard(
        GCGCardZone *const this,
        GCGCard *card,
        bool is_notify,
        uint32_t preview_replace_card_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  GCGCardMgr *CardMgr; // r14
  GCGCardShowState CardShowStateByZoneType; // eax
  GCGZoneType zone_type; // eax
  GCGStatistics *Statistics; // r14
  GCGControllerValue ControllerId; // eax
  common::milog::MiLogStream *v12; // rcx
  uint32_t Id; // r15d
  unsigned int ZoneType; // r14d
  unsigned int v16; // eax
  std::__detail::_Node_const_iterator<GCGEffectCategoryType,true,false>::reference v17; // rax
  _DWORD *v18; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // r14
  unsigned __int64 v21; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v22; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v23; // r14
  uint32_t card_guid; // [rsp+14h] [rbp-11Ch]
  std::unordered_multiset<GCGEffectCategoryType>::const_iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::unordered_multiset<GCGEffectCategoryType>::const_iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  GCGSkillPreviewContext *preview_context; // [rsp+40h] [rbp-F0h]
  const std::unordered_multiset<GCGEffectCategoryType> *card_effect_category_set; // [rsp+48h] [rbp-E8h]
  std::unordered_multiset<GCGEffectCategoryType> *zone_skill_category_set; // [rsp+50h] [rbp-E0h]
  const std::unordered_multiset<GCGEffectCategoryType> *__for_range; // [rsp+58h] [rbp-D8h]
  std::string v; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+A0h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 17 category_type:812 64 16 6 ss:809";
  *(_QWORD *)(v4 + 16) = GCGCardZone::onAddCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  std::enable_shared_from_this<GCGCardZone>::shared_from_this((std::enable_shared_from_this<GCGCardZone> *const)(v4 + 64));
  GCGCard::setZone(card, (GCGCardZonePtr *)(v4 + 64));
  std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  CardMgr = GCGGameMode::getCardMgr(this->game_mode_);
  std::enable_shared_from_this<GCGCard>::shared_from_this((std::enable_shared_from_this<GCGCard> *const)(v4 + 64));
  GCGCardMgr::recordAddCard(CardMgr, (GCGCardPtr *)(v4 + 64));
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->zone_type_);
  }
  CardShowStateByZoneType = GCGUtils::getCardShowStateByZoneType(this->zone_type_);
  GCGCard::setShowState(card, CardShowStateByZoneType);
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->zone_type_);
  }
  zone_type = this->zone_type_;
  if ( zone_type <= GCG_ZONE_RULE )
  {
    if ( zone_type >= GCG_ZONE_ASSIST )
    {
LABEL_24:
      GCGCard::setActive(card, 1);
      goto LABEL_28;
    }
    if ( zone_type <= GCG_ZONE_HAND )
    {
      if ( zone_type > GCG_ZONE_INVALID )
      {
        GCGCard::setActive(card, 0);
        goto LABEL_28;
      }
      goto LABEL_25;
    }
    if ( (unsigned int)(zone_type - 3) <= 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->zone_type_);
      }
      if ( this->zone_type_ == GCG_ZONE_SUMMON )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        Statistics = GCGGameMode::getStatistics(this->game_mode_);
        ControllerId = GCGCardZone::getControllerId(this);
        GCGStatistics::reportStatisticSpecifyDataUint(Statistics, ControllerId, SUMMON_TIMES, 1u, 1);
      }
      goto LABEL_24;
    }
  }
LABEL_25:
  common::milog::MiLogStream::create(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/zone/gcg_card_zone.cpp",
    "onAddCard",
    795);
  v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v33, (const char (*)[24])off_1BB4C420);
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->zone_type_);
  }
  *(_DWORD *)(v4 + 48) = this->zone_type_;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v33);
LABEL_28:
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  if ( GCGGameMode::isDuringSnapshot(this->game_mode_) && GCGCardZone::getZoneType(this) != GCG_ZONE_MODIFY )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    preview_context = GCGGameMode::getSkillPreviewContext(this->game_mode_);
    card_guid = GCGCard::getGuid(card);
    Id = GCGCard::getId(card);
    ZoneType = GCGCardZone::getZoneType(this);
    v16 = GCGCardZone::getControllerId(this);
    GCGSkillPreviewContext::recordPreviewAddCard(
      preview_context,
      v16,
      ZoneType,
      Id,
      card_guid,
      0,
      preview_replace_card_id);
  }
  card_effect_category_set = GCGCard::getEffectCategorySet(card);
  zone_skill_category_set = GCGCardZone::getEffectCategorySet(this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 64));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 64),
    "[CATEGORY] add:[");
  __for_range = card_effect_category_set;
  __for_begin._M_cur = std::unordered_multiset<GCGEffectCategoryType>::begin(card_effect_category_set)._M_cur;
  __for_end._M_cur = std::unordered_multiset<GCGEffectCategoryType>::end(card_effect_category_set)._M_cur;
  while ( std::__detail::operator!=<GCGEffectCategoryType,false>(&__for_begin, &__for_end) )
  {
    v17 = std::__detail::_Node_const_iterator<GCGEffectCategoryType,true,false>::operator*(&__for_begin);
    v18 = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    *(_DWORD *)(v4 + 48) = *v18;
    std::unordered_multiset<GCGEffectCategoryType>::insert(
      zone_skill_category_set,
      (const std::unordered_multiset<GCGEffectCategoryType>::value_type *)(v4 + 48));
    v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 64),
            *(_DWORD *)(v4 + 48));
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, " ");
    std::__detail::_Node_const_iterator<GCGEffectCategoryType,true,false>::operator++(&__for_begin);
  }
  v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 64),
          "] size:");
  v21 = std::unordered_multiset<GCGEffectCategoryType>::size(zone_skill_category_set);
  v22 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, v21);
  GCGCard::getDesc[abi:cxx11](&v, card);
  v23 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v22, &v);
  GCGCardZone::getDesc[abi:cxx11]((std::string *)&v33, this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v23, (const std::string *)&v33);
  std::string::~string(&v33);
  std::string::~string(&v);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_card_zone.cpp",
    "onAddCard",
    821);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    (std::string *)&v33,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 64));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
    (common::milog::MiLogStream *const)&v,
    (const std::string *)&v33);
  std::string::~string(&v33);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 64));
  if ( v34 == (char *)v4 )
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

// Line 826: range 000000000DE9DB92-000000000DE9E619
void __cdecl GCGCardZone::onDelCard(GCGCardZone *const this, GCGCard *card)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // r14d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGSkillLogic *SkillLogic; // r14
  int v12; // r14d
  std::__detail::_Node_const_iterator<GCGEffectCategoryType,true,false>::reference v13; // rax
  _DWORD *v14; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // r14
  unsigned __int64 v17; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v18; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // r14
  GCGCardMgr *CardMgr; // r14
  uint32_t Guid; // eax
  uint32_t Id; // r15d
  unsigned int ZoneType; // r14d
  unsigned int v25; // eax
  uint32_t card_guid; // [rsp+Ch] [rbp-1B4h]
  std::unordered_multiset<GCGEffectCategoryType>::const_iterator __for_begin; // [rsp+28h] [rbp-198h] BYREF
  std::unordered_multiset<GCGEffectCategoryType>::const_iterator __for_end; // [rsp+30h] [rbp-190h] BYREF
  std::__detail::_Node_iterator_base<GCGEffectCategoryType,false> __y; // [rsp+38h] [rbp-188h] BYREF
  const std::unordered_multiset<GCGEffectCategoryType> *card_effect_category_set; // [rsp+40h] [rbp-180h]
  std::unordered_multiset<GCGEffectCategoryType> *zone_skill_category_set; // [rsp+48h] [rbp-178h]
  const std::unordered_multiset<GCGEffectCategoryType> *__for_range; // [rsp+50h] [rbp-170h]
  GCGSkillPreviewContext *preview_context; // [rsp+58h] [rbp-168h]
  std::shared_ptr<GCGCard> __r; // [rsp+60h] [rbp-160h] BYREF
  std::vector<unsigned int> vec; // [rsp+70h] [rbp-150h] BYREF
  std::string v; // [rsp+90h] [rbp-130h] BYREF
  common::milog::MiLogStream v37; // [rsp+B0h] [rbp-110h] BYREF
  char v38[240]; // [rsp+D0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 17 category_type:855 64 8 26 find_category_set_iter:857 96 16 17 cur_phase_ptr:832 128 16"
                        " 29 trigger_windows_param_ptr:835 160 16 6 ss:850";
  *(_QWORD *)(v2 + 16) = GCGCardZone::onDelCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  common::milog::MiLogStream::create(
    &v37,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_card_zone.cpp",
    "onDelCard",
    827);
  GCGCardZone::getCardGuidVec(&vec, this);
  common::milog::MiLogStream::operator<<<unsigned int>(&v37, &vec);
  std::vector<unsigned int>::~vector(&vec);
  common::milog::MiLogStream::~MiLogStream(&v37);
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->zone_type_);
  }
  if ( this->zone_type_ == GCG_ZONE_DECK || this->zone_type_ == GCG_ZONE_HAND )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 96));
  if ( !std::operator!=<GCGPhaseBase>(0LL, (const std::shared_ptr<GCGPhaseBase> *)(v2 + 96)) )
    goto LABEL_22;
  common::tools::perf::make_shared<GCGSkillUseParam>();
  if ( std::operator==<GCGSkillUseParam>(0LL, (const std::shared_ptr<GCGSkillUseParam> *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "onDelCard",
      838);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v37,
      (const char (*)[37])"trigger_windows_param_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v37);
    v5 = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v6->trigger_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->trigger_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v6->trigger_type);
    }
    v6->trigger_type = GCG_TRIGGER_ON_CARD_DIE;
    ControllerId = GCGCardZone::getControllerId(this);
    v8 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v8->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v8->controller_id);
    }
    v8->controller_id = ControllerId;
    toPtr<GCGCard,GCGCard>((GCGCard *)&__r);
    v9 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    std::shared_ptr<GCGCard>::operator=(&v9->die_card_ptr, &__r);
    std::shared_ptr<GCGCard>::~shared_ptr(&__r);
    GCGCard::getOwnerCard((GCGCard *const)(v2 + 160));
    v10 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    std::shared_ptr<GCGCard>::operator=(&v10->die_card_owner_ptr, (std::shared_ptr<GCGCard> *)(v2 + 160));
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
    std::shared_ptr<GCGSkillUseParam>::shared_ptr(
      (std::shared_ptr<GCGSkillUseParam> *const)(v2 + 160),
      (const std::shared_ptr<GCGSkillUseParam> *)(v2 + 128));
    std::shared_ptr<GCGPhaseBase>::shared_ptr(
      (std::shared_ptr<GCGPhaseBase> *const)&__r,
      (const std::shared_ptr<GCGPhaseBase> *)(v2 + 96));
    GCGSkillLogic::trigger(
      SkillLogic,
      (GCGPhaseBasePtr *)&__r,
      GCG_TRIGGER_ON_CARD_DIE,
      (GCGSkillUseParamPtr *)(v2 + 160));
    std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)&__r);
    std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v2 + 160));
    v5 = 1;
  }
  std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v2 + 128));
  if ( v5 == 1 )
LABEL_22:
    v12 = 1;
  else
    v12 = 0;
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 96));
  if ( v12 == 1 )
  {
LABEL_24:
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 160));
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 160),
      "[CATEGORY] rm:[");
    card_effect_category_set = GCGCard::getEffectCategorySet(card);
    zone_skill_category_set = GCGCardZone::getEffectCategorySet(this);
    __for_range = card_effect_category_set;
    __for_begin._M_cur = std::unordered_multiset<GCGEffectCategoryType>::begin(card_effect_category_set)._M_cur;
    __for_end._M_cur = std::unordered_multiset<GCGEffectCategoryType>::end(card_effect_category_set)._M_cur;
    while ( std::__detail::operator!=<GCGEffectCategoryType,false>(&__for_begin, &__for_end) )
    {
      v13 = std::__detail::_Node_const_iterator<GCGEffectCategoryType,true,false>::operator*(&__for_begin);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      *(_DWORD *)(v2 + 48) = *v14;
      *(std::unordered_multiset<GCGEffectCategoryType>::iterator *)(v2 + 64) = std::unordered_multiset<GCGEffectCategoryType>::find(
                                                                                 zone_skill_category_set,
                                                                                 (const std::unordered_multiset<GCGEffectCategoryType>::key_type *)(v2 + 48));
      __y._M_cur = std::unordered_multiset<GCGEffectCategoryType>::end(zone_skill_category_set)._M_cur;
      if ( std::__detail::operator!=<GCGEffectCategoryType,false>(
             (const std::__detail::_Node_iterator_base<GCGEffectCategoryType,false> *)(v2 + 64),
             &__y) )
      {
        std::unordered_multiset<GCGEffectCategoryType>::erase(
          zone_skill_category_set,
          *(std::unordered_multiset<GCGEffectCategoryType>::iterator *)(v2 + 64));
      }
      v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 160),
              *(_DWORD *)(v2 + 48));
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, " ");
      std::__detail::_Node_const_iterator<GCGEffectCategoryType,true,false>::operator++(&__for_begin);
    }
    v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 160),
            "] size:");
    v17 = std::unordered_multiset<GCGEffectCategoryType>::size(zone_skill_category_set);
    v18 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, v17);
    GCGCard::getDesc[abi:cxx11](&v, card);
    v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v18, &v);
    GCGCardZone::getDesc[abi:cxx11]((std::string *)&v37, this);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, (const std::string *)&v37);
    std::string::~string(&v37);
    std::string::~string(&v);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "onDelCard",
      868);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      (std::string *)&v37,
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 160));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
      (common::milog::MiLogStream *const)&v,
      (const std::string *)&v37);
    std::string::~string(&v37);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v);
    GCGCard::resetZone(card);
    GCGCard::setActive(card, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    CardMgr = GCGGameMode::getCardMgr(this->game_mode_);
    Guid = GCGCard::getGuid(card);
    GCGCardMgr::removeRecordCard(CardMgr, Guid);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    if ( GCGGameMode::isDuringSnapshot(this->game_mode_) && GCGCardZone::getZoneType(this) != GCG_ZONE_MODIFY )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      preview_context = GCGGameMode::getSkillPreviewContext(this->game_mode_);
      card_guid = GCGCard::getGuid(card);
      Id = GCGCard::getId(card);
      ZoneType = GCGCardZone::getZoneType(this);
      v25 = GCGCardZone::getControllerId(this);
      GCGSkillPreviewContext::recordPreviewRmCard(preview_context, v25, ZoneType, Id, card_guid, 0);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 160));
  }
  if ( v38 == (char *)v2 )
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
};

// Line 886: range 000000000DE9E61A-000000000DE9E66C
uint32_t __cdecl GCGCharacterZone::getCurOrderIndex(const GCGCharacterZone *const this)
{
  unsigned __int64 RuntimeData; // rax

  RuntimeData = (unsigned __int64)GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  if ( *(_BYTE *)((RuntimeData >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((RuntimeData >> 3) + 0x7FFF8000) <= 3 )
    RuntimeData = __asan_report_load4(RuntimeData);
  return *(_DWORD *)RuntimeData;
};

// Line 891: range 000000000DE9E66E-000000000DE9E6C2
uint32_t __cdecl GCGCharacterZone::getCurOnstageGuid(const GCGCharacterZone *const this)
{
  const GCGCharacterZoneRuntimeData *RuntimeData; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  if ( *(_BYTE *)(((unsigned __int64)&RuntimeData->cur_onstage_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&RuntimeData->cur_onstage_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    RuntimeData = (const GCGCharacterZoneRuntimeData *)__asan_report_load4(&RuntimeData->cur_onstage_guid_);
  }
  return RuntimeData->cur_onstage_guid_;
};

// Line 896: range 000000000DE9E6C4-000000000DE9E7DB
void __cdecl GCGCharacterZone::recalcOrderCharacterGuidVec(GCGCharacterZone *const this)
{
  size_t v1; // rax
  size_t v2; // rbx
  std::vector<std::shared_ptr<GCGCard>>::size_type v3; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::vector<unsigned int>::value_type __x; // [rsp+18h] [rbp-38h] BYREF
  uint32_t cur_order_index_; // [rsp+1Ch] [rbp-34h]
  size_t i; // [rsp+20h] [rbp-30h]
  std::vector<unsigned int> *character_guid_vec; // [rsp+28h] [rbp-28h]
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+30h] [rbp-20h]
  std::shared_ptr<GCGCard> *card_ptr; // [rsp+38h] [rbp-18h]

  character_guid_vec = &GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_)->cur_order_guid_vec_;
  std::vector<unsigned int>::clear(character_guid_vec);
  card_vec = GCGCardZone::getCardVec(this);
  if ( !std::vector<std::shared_ptr<GCGCard>>::empty(card_vec) )
  {
    cur_order_index_ = GCGCharacterZone::getCurOrderIndex(this);
    for ( i = 0LL; ; ++i )
    {
      v1 = std::vector<std::shared_ptr<GCGCard>>::size(card_vec);
      if ( i >= v1 )
        break;
      v2 = cur_order_index_ + i;
      v3 = std::vector<std::shared_ptr<GCGCard>>::size(card_vec);
      card_ptr = std::vector<std::shared_ptr<GCGCard>>::operator[](card_vec, v2 % v3);
      if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
      {
        v4 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
        __x = GCGCard::getGuid(v4);
        std::vector<unsigned int>::push_back(character_guid_vec, &__x);
      }
    }
  }
};

// Line 916: range 000000000DE9E7DC-000000000DE9E985
void __cdecl GCGCharacterZone::setCurOnstageGuid(GCGCharacterZone *const this, uint32_t guid)
{
  GCGCharacterZoneRuntimeData *RuntimeData; // rax
  GCGCharacterZoneRuntimeData *v3; // rax
  GCGCharacterZoneRuntimeData *v4; // rdx
  uint32_t *p_cur_onstage_use_skill_count; // rax
  GCGDuel *Duel; // rcx
  GCGField *Field; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  if ( *(_BYTE *)(((unsigned __int64)&RuntimeData->cur_onstage_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&RuntimeData->cur_onstage_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    RuntimeData = (GCGCharacterZoneRuntimeData *)__asan_report_load4(&RuntimeData->cur_onstage_guid_);
  }
  if ( guid != RuntimeData->cur_onstage_guid_ )
  {
    v3 = GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
    if ( *(_BYTE *)(((unsigned __int64)&v3->cur_onstage_guid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v3->cur_onstage_guid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      v3 = (GCGCharacterZoneRuntimeData *)__asan_report_store4(&v3->cur_onstage_guid_);
    }
    v3->cur_onstage_guid_ = guid;
    v4 = GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
    p_cur_onstage_use_skill_count = &v4->cur_onstage_use_skill_count_;
    if ( *(_BYTE *)(((unsigned __int64)p_cur_onstage_use_skill_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_cur_onstage_use_skill_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cur_onstage_use_skill_count >> 3)
                                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(p_cur_onstage_use_skill_count);
    }
    v4->cur_onstage_use_skill_count_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->controller_id_);
    }
    Field = GCGDuel::getField(Duel, this->controller_id_);
    GCGField::setChangeOnStageCharacterGuid(Field, guid);
  }
};

// Line 926: range 000000000DE9E986-000000000DE9EBD0
void __fastcall GCGCharacterZone::setCurOrderIndex(GCGCharacterZone *const this, uint32_t index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // r14d
  unsigned __int64 RuntimeData; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  GCGCharacterZoneRuntimeData *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  std::vector<unsigned int> vec; // [rsp+10h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 index:925";
  *(_QWORD *)(v2 + 16) = GCGCharacterZone::setCurOrderIndex;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = index;
  v5 = *(_DWORD *)(v2 + 32);
  RuntimeData = (unsigned __int64)GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  if ( *(_BYTE *)((RuntimeData >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((RuntimeData >> 3) + 0x7FFF8000) <= 3 )
    RuntimeData = __asan_report_store4(RuntimeData);
  *(_DWORD *)RuntimeData = v5;
  GCGCharacterZone::recalcOrderCharacterGuidVec(this);
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_card_zone.cpp",
    "setCurOrderIndex",
    929);
  v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v14, (const char (*)[20])" cur_order_index_: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" order_vec: ");
  v10 = GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  v11 = common::milog::MiLogStream::operator<<<unsigned int>(v9, &v10->cur_order_guid_vec_);
  v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" card_vec: ");
  GCGCardZone::getCardGuidVec(&vec, this);
  common::milog::MiLogStream::operator<<<unsigned int>(v12, &vec);
  std::vector<unsigned int>::~vector(&vec);
  common::milog::MiLogStream::~MiLogStream(&v14);
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

// Line 933: range 000000000DE9EBD2-000000000DE9EC33
void __cdecl GCGCharacterZone::addCurOnstageUseSkillCount(GCGCharacterZone *const this)
{
  GCGCharacterZoneRuntimeData *RuntimeData; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  if ( *(_BYTE *)(((unsigned __int64)&RuntimeData->cur_onstage_use_skill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)RuntimeData + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&RuntimeData->cur_onstage_use_skill_count_ >> 3)
                                                               + 0x7FFF8000) )
  {
    RuntimeData = (GCGCharacterZoneRuntimeData *)__asan_report_load4(&RuntimeData->cur_onstage_use_skill_count_);
  }
  ++RuntimeData->cur_onstage_use_skill_count_;
};

// Line 938: range 000000000DE9EC34-000000000DE9EC91
uint32_t __cdecl GCGCharacterZone::getCurOnstageUseSkillCount(const GCGCharacterZone *const this)
{
  const GCGCharacterZoneRuntimeData *RuntimeData; // rdx
  uint32_t *p_cur_onstage_use_skill_count; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  p_cur_onstage_use_skill_count = &RuntimeData->cur_onstage_use_skill_count_;
  if ( *(_BYTE *)(((unsigned __int64)p_cur_onstage_use_skill_count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_cur_onstage_use_skill_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cur_onstage_use_skill_count >> 3)
                                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(p_cur_onstage_use_skill_count);
  }
  return RuntimeData->cur_onstage_use_skill_count_;
};

// Line 943: range 000000000DE9EC92-000000000DE9F10B
__int64 __fastcall GCGCharacterZone::setOnStage(
        GCGCharacterZone *const this,
        uint32_t guid,
        GCGReason reason,
        bool is_notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::vector<std::shared_ptr<GCGCard>>::size_type v7; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+28h] [rbp-E8h] BYREF
  unsigned int CurOnstageGuid; // [rsp+2Ch] [rbp-E4h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+30h] [rbp-E0h]
  std::shared_ptr<GCGCard> *card_ptr; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-D0h] BYREF
  std::string v30; // [rsp+60h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+80h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 5 i:945 64 4 8 guid:942";
  *(_QWORD *)(v4 + 16) = GCGCharacterZone::setOnStage;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = guid;
  card_vec = GCGCardZone::getCardVec(this);
  for ( *(_DWORD *)(v4 + 48) = 0; ; ++*(_DWORD *)(v4 + 48) )
  {
    v7 = *(unsigned int *)(v4 + 48);
    if ( v7 >= std::vector<std::shared_ptr<GCGCard>>::size(card_vec) )
      goto LABEL_17;
    card_ptr = std::vector<std::shared_ptr<GCGCard>>::operator[](card_vec, *(unsigned int *)(v4 + 48));
    if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
    {
      v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      if ( GCGCard::getGuid(v8) == *(_DWORD *)(v4 + 64) )
        break;
    }
  }
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/zone/gcg_card_zone.cpp",
    "setOnStage",
    950);
  v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(&v29, (const char (*)[49])off_1BB4C820);
  val = GCGCharacterZone::getCurOrderIndex(this);
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
  v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v11, (const char (*)[21])" cur_onstage_guid_: ");
  CurOnstageGuid = GCGCharacterZone::getCurOnstageGuid(this);
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &CurOnstageGuid);
  v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          v13,
          (const char (*)[26])" after cur_order_index_: ");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
  v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v15, (const char (*)[21])" cur_onstage_guid_: ");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
  v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  GCGCard::getDesc[abi:cxx11](&v30, v18);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &v30);
  std::string::~string(&v30);
  common::milog::MiLogStream::~MiLogStream(&v29);
  v19 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
  if ( !GCGCard::isActivated(v19) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "setOnStage",
      956);
    v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v29,
            (const char (*)[22])"card is deactivated. ");
    v21 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
    GCGCard::getDesc[abi:cxx11](&v30, v21);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &v30);
    std::string::~string(&v30);
    common::milog::MiLogStream::~MiLogStream(&v29);
LABEL_17:
    result = 0xFFFFFFFFLL;
    goto LABEL_18;
  }
  GCGCharacterZone::setCurOrderIndex(this, *(_DWORD *)(v4 + 48));
  GCGCharacterZone::setCurOnstageGuid(this, *(_DWORD *)(v4 + 64));
  if ( is_notify )
    GCGCharacterZone::notifySetOnStage(this, reason);
  result = 0LL;
LABEL_18:
  if ( v31 == (char *)v4 )
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

// Line 972: range 000000000DE9F10C-000000000DE9F155
int32_t __cdecl GCGCharacterZone::setOnStageBySkill(
        GCGCharacterZone *const this,
        uint32_t card_guid,
        uint32_t skill_id)
{
  int32_t ret; // [rsp+1Ch] [rbp-4h]

  ret = GCGCharacterZone::setOnStage(this, card_guid, GCG_REASON_EFFECT, 0);
  if ( !ret )
    GCGCharacterZone::notifySetOnStageBySkill(this, skill_id);
  return ret;
};

// Line 982: range 000000000DE9F156-000000000DE9F660
__int64 __fastcall GCGCharacterZone::getFirstAliveCardGuidByOrderIndexReverse(
        GCGCharacterZone *const this,
        uint32_t order_index,
        unsigned __int64 card_guid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 RuntimeData; // rax
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::vector<std::shared_ptr<GCGCard>>::size_type v10; // r14
  std::vector<std::shared_ptr<GCGCard>>::size_type v11; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t Guid; // ecx
  common::milog::MiLogStream *v16; // rax
  bool find_valid_card; // [rsp+2Fh] [rbp-B1h]
  size_t i; // [rsp+30h] [rbp-B0h]
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+38h] [rbp-A8h]
  size_t cur_index; // [rsp+40h] [rbp-A0h]
  std::shared_ptr<GCGCard> *card_ptr; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-90h] BYREF
  char v24[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 order_index:981";
  *(_QWORD *)(v3 + 16) = GCGCharacterZone::getFirstAliveCardGuidByOrderIndexReverse;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = order_index;
  RuntimeData = (unsigned __int64)GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  if ( *(_BYTE *)((RuntimeData >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((RuntimeData >> 3) + 0x7FFF8000) <= 3 )
    RuntimeData = __asan_report_load4(RuntimeData);
  if ( *(_DWORD *)RuntimeData == *(_DWORD *)(v3 + 32) )
  {
    v7 = GCGCharacterZone::getOnStageCardGuid(this);
    if ( *(_BYTE *)((card_guid >> 3) + 0x7FFF8000) != 0
      && (char)((card_guid & 7) + 3) >= *(_BYTE *)((card_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(card_guid);
    }
    *(_DWORD *)card_guid = v7;
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "getFirstAliveCardGuidByOrderIndexReverse",
      986);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v23,
           (const char (*)[36])"order_index equal cur_order_index_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0LL;
  }
  else
  {
    card_vec = GCGCardZone::getCardVec(this);
    if ( std::vector<std::shared_ptr<GCGCard>>::size(card_vec) )
    {
      v10 = *(unsigned int *)(v3 + 32);
      if ( v10 >= std::vector<std::shared_ptr<GCGCard>>::size(card_vec) )
        *(_DWORD *)(v3 + 32) = std::vector<std::shared_ptr<GCGCard>>::size(card_vec) - 1;
      find_valid_card = 0;
      for ( i = 0LL; i < std::vector<std::shared_ptr<GCGCard>>::size(card_vec); ++i )
      {
        v11 = *(unsigned int *)(v3 + 32) + std::vector<std::shared_ptr<GCGCard>>::size(card_vec) - i;
        cur_index = v11 % std::vector<std::shared_ptr<GCGCard>>::size(card_vec);
        if ( cur_index < std::vector<std::shared_ptr<GCGCard>>::size(card_vec) )
        {
          card_ptr = std::vector<std::shared_ptr<GCGCard>>::operator[](card_vec, cur_index);
          if ( std::operator!=<GCGCard>(0LL, card_ptr) )
          {
            v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
            if ( GCGCard::isAlive(v12) )
            {
              v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
              Guid = GCGCard::getGuid(v14);
              if ( *(_BYTE *)((card_guid >> 3) + 0x7FFF8000) != 0
                && (char)((card_guid & 7) + 3) >= *(_BYTE *)((card_guid >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(card_guid);
              }
              *(_DWORD *)card_guid = Guid;
              find_valid_card = 1;
              break;
            }
          }
        }
      }
      if ( !find_valid_card )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/zone/gcg_card_zone.cpp",
          "getFirstAliveCardGuidByOrderIndexReverse",
          1017);
        v16 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v23,
                (const char (*)[40])"cannot find invalid card, order_index: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v23);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/zone/gcg_card_zone.cpp",
        "getFirstAliveCardGuidByOrderIndexReverse",
        992);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v23, (const char (*)[18])"card_vec is empty");
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v24 == (char *)v3 )
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

// Line 1024: range 000000000DE9F662-000000000DE9F8D6
int32_t __cdecl GCGCharacterZone::onGMDefaultOnStage(GCGCharacterZone *const this)
{
  std::shared_ptr<GCGCard> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<GCGCard> *v4; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t Guid; // edx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int32_t result; // eax
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  std::string val; // [rsp+40h] [rbp-90h] BYREF
  char v13[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<GCGCard> *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<GCGCard> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 13 card_ptr:1029";
  v1[1]._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)GCGCharacterZone::onGMDefaultOnStage;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  card_vec = GCGCardZone::getCardVec(this);
  if ( std::vector<std::shared_ptr<GCGCard>>::size(card_vec) > 1 )
  {
    GCGCharacterZone::setCurOrderIndex(this, 0);
    v4 = std::vector<std::shared_ptr<GCGCard>>::operator[](card_vec, 0LL);
    std::shared_ptr<GCGCard>::shared_ptr(v1 + 2, v4);
    if ( std::operator!=<GCGCard>(v1 + 2, 0LL) )
    {
      v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      Guid = GCGCard::getGuid(v5);
      GCGCharacterZone::setCurOnstageGuid(this, Guid);
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/zone/gcg_card_zone.cpp",
        "onGMDefaultOnStage",
        1033);
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v11, (const char (*)[24])off_1BB4CB20);
      v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
      GCGCard::getDesc[abi:cxx11](&val, v8);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      GCGCharacterZone::notifySetOnStage(this, GCG_REASON_GM);
    }
    std::shared_ptr<GCGCard>::~shared_ptr(v1 + 2);
  }
  result = 0;
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1041: range 000000000DE9F8D8-000000000DE9FF2C
GCGCardPtr __cdecl GCGCharacterZone::getOnStageCard(GCGCharacterZone *const this)
{
  GCGCharacterZone *v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GCGCardPtr result; // rax
  std::vector<std::shared_ptr<GCGCard>>::size_type v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  const std::shared_ptr<GCGCard> *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // r14
  uint32_t v21; // ecx
  __int64 v22; // rsi
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t Guid; // edx
  unsigned int CurOrderIndex; // [rsp+1Ch] [rbp-E4h] BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-D8h]
  std::vector<unsigned int> vec; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 21 cur_onstage_guid:1043 48 4 20 cur_order_index:1050 64 16 13 card_ptr:1056";
  *(_QWORD *)(v2 + 16) = GCGCharacterZone::getOnStageCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 32) = GCGCharacterZone::getCurOnstageGuid(v1);
  if ( !*(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "getOnStageCard",
      1046);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v29, (const char (*)[23])"cur_onstage_guid is 0.");
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
    goto LABEL_18;
  }
  card_vec = GCGCardZone::getCardVec(v1);
  *(_DWORD *)(v2 + 48) = GCGCharacterZone::getCurOrderIndex(v1);
  v6 = *(unsigned int *)(v2 + 48);
  if ( v6 >= std::vector<std::shared_ptr<GCGCard>>::size(card_vec) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "getOnStageCard",
      1053);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v29,
           (const char (*)[57])"cur_order_index larger than card size. cur_order_index: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" size: ");
    val = std::vector<std::shared_ptr<GCGCard>>::size(card_vec);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
    goto LABEL_18;
  }
  v10 = std::vector<std::shared_ptr<GCGCard>>::operator[](card_vec, *(unsigned int *)(v2 + 48));
  std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 64), v10);
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "getOnStageCard",
      1060);
    v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v29,
            (const char (*)[51])"cur_order_index card is nullptr. cur_order_index: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" size: ");
    val = std::vector<std::shared_ptr<GCGCard>>::size(card_vec);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( GCGCard::getGuid(v14) != *(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/zone/gcg_card_zone.cpp",
        "getOnStageCard",
        1066);
      v15 = common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(
              &v29,
              (const char (*)[84])"on_stage card error. cur_order_index not match cur_onstage_guid. cur_onstage_guid: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v16,
              (const char (*)[18])" cur_order_index:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" card_vec: ");
      GCGCardZone::getCardGuidVec(&vec, v1);
      common::milog::MiLogStream::operator<<<unsigned int>(v19, &vec);
      std::vector<unsigned int>::~vector(&vec);
      common::milog::MiLogStream::~MiLogStream(&v29);
      if ( !(unsigned int)GCGCharacterZone::setOnStage(v1, *(_DWORD *)(v2 + 32), GCG_REASON_DEFAULT, 0) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/zone/gcg_card_zone.cpp",
          "getOnStageCard",
          1072);
        v20 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(&v29, (const char (*)[44])off_1BB4CE00);
        CurOrderIndex = GCGCharacterZone::getCurOrderIndex(v1);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &CurOrderIndex);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v21 = (unsigned int)v1;
        v22 = *(unsigned __int16 *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
        if ( (_WORD)v22 )
          __asan_report_store16(this, v22);
        GCGCardZone::findCard(this, v21);
        goto LABEL_17;
      }
      v23 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Guid = GCGCard::getGuid(v23);
      GCGCharacterZone::setCurOnstageGuid(v1, Guid);
    }
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, (std::shared_ptr<GCGCard> *)(v2 + 64));
  }
LABEL_17:
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 64));
LABEL_18:
  if ( v30 == (char *)v2 )
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
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1082: range 000000000DE9FFF4-000000000DEA00CC
GCGCardPtr __cdecl GCGCharacterZone::getNextBackStageCard(GCGCharacterZone *const this)
{
  GCGCharacterZone *v1; // rsi
  GCGCardPtr result; // rax
  GCGCharacterZone *thisa; // [rsp+0h] [rbp-60h]
  uint32_t cur_onstage_guid; // [rsp+14h] [rbp-4Ch]
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+20h] [rbp-40h] BYREF
  GCGCharacterZone::getNextBackStageCard::<lambda(GCGCard&)> v6; // 0:esi.4,8:rdx.8

  thisa = v1;
  GCGCardZone::getCardVec(v1);
  cur_onstage_guid = GCGCharacterZone::getOnStageCardGuid(v1);
  std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  v6.__card_ptr = (GCGCardPtr *)this;
  v6.__cur_onstage_guid = cur_onstage_guid;
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGCharacterZone::getNextBackStageCard(void)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    v6);
  GCGCharacterZone::foreachAliveCharacter(thisa, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1086: range 000000000DE9FF2E-000000000DE9FFF3
ForeachPolicy __cdecl GCGCharacterZone::getNextBackStageCard(void)::{lambda(GCGCard &)#1}::operator()(
        const GCGCharacterZone::getNextBackStageCard::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  uint32_t Guid; // ecx
  std::shared_ptr<GCGCard> __r; // [rsp+10h] [rbp-10h] BYREF

  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Guid == __closure->__cur_onstage_guid )
    return 0;
  toPtr<GCGCard,GCGCard>((GCGCard *)&__r);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__card_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__card_ptr);
  std::shared_ptr<GCGCard>::operator=(__closure->__card_ptr, &__r);
  std::shared_ptr<GCGCard>::~shared_ptr(&__r);
  return 1;
};

// Line 1099: range 000000000DEA00CE-000000000DEA0122
uint32_t __cdecl GCGCharacterZone::getOnStageCardGuid(GCGCharacterZone *const this)
{
  GCGCharacterZoneRuntimeData *RuntimeData; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  if ( *(_BYTE *)(((unsigned __int64)&RuntimeData->cur_onstage_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&RuntimeData->cur_onstage_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    RuntimeData = (GCGCharacterZoneRuntimeData *)__asan_report_load4(&RuntimeData->cur_onstage_guid_);
  }
  return RuntimeData->cur_onstage_guid_;
};

// Line 1104: range 000000000DEA0124-000000000DEA0231
uint32_t __cdecl GCGCharacterZone::getOnStageCardId(GCGCharacterZone *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t Id; // r14d
  uint32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 card_ptr:1105";
  *(_QWORD *)(v1 + 16) = GCGCharacterZone::getOnStageCardId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v1 + 32));
  if ( std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v1 + 32)) )
  {
    v4 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Id = GCGCard::getId(v4);
  }
  else
  {
    Id = 0;
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 32));
  result = Id;
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

// Line 1114: range 000000000DEA0232-000000000DEA0284
uint32_t __cdecl GCGCharacterZone::getOnStageOrderIndex(GCGCharacterZone *const this)
{
  unsigned __int64 RuntimeData; // rax

  RuntimeData = (unsigned __int64)GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  if ( *(_BYTE *)((RuntimeData >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((RuntimeData >> 3) + 0x7FFF8000) <= 3 )
    RuntimeData = __asan_report_load4(RuntimeData);
  return *(_DWORD *)RuntimeData;
};

// Line 1119: range 000000000DEA0286-000000000DEA0321
bool __cdecl GCGCharacterZone::isCanDel(GCGCharacterZone *const this, GCGCardPtr *p_card_ptr, GCGReason reason)
{
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( reason == GCG_REASON_REMOVE_AFTER_DIE || reason == GCG_REASON_GM )
    return 1;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/zone/gcg_card_zone.cpp",
    "isCanDel",
    1125);
  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
    &v4,
    (const char (*)[31])"character zone can't del card.");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};

// Line 1130: range 000000000DEA0322-000000000DEA0399
void __cdecl GCGCharacterZone::onAddCard(
        GCGCharacterZone *const this,
        GCGCard *card,
        bool is_notify,
        uint32_t preview_replace_card_id)
{
  std::vector<unsigned int> *p_new_add_character_guid_vec; // rbx
  unsigned int *v5; // rdx
  unsigned int v8[5]; // [rsp+2Ch] [rbp-14h] BYREF

  GCGCharacterZone::recalcCurOrderIndex(this);
  GCGCardZone::onAddCard(this, card, is_notify, preview_replace_card_id);
  p_new_add_character_guid_vec = &GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_)->new_add_character_guid_vec_;
  v8[0] = GCGCard::getGuid(card);
  std::vector<unsigned int>::emplace_back<unsigned int>(p_new_add_character_guid_vec, v8, v5);
};

// Line 1139: range 000000000DEA039A-000000000DEA0420
void __cdecl GCGCharacterZone::onDelCard(GCGCharacterZone *const this, GCGCard *card)
{
  uint32_t cur_onstage_guid; // [rsp+10h] [rbp-10h]

  GCGCardZone::onDelCard(this, card);
  cur_onstage_guid = GCGCharacterZone::getCurOnstageGuid(this);
  GCGCharacterZone::getCurOrderIndex(this);
  GCGCardZone::getCardVec(this);
  if ( cur_onstage_guid == GCGCard::getGuid(card) )
    GCGCharacterZone::setCurOnstageGuid(this, 0);
  GCGCharacterZone::recalcCurOrderIndex(this);
};

// Line 1154: range 000000000DEA0422-000000000DEA04E5
bool __cdecl GCGCharacterZone::isAllCharacterDie(GCGCharacterZone *const this)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-18h]
  const std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+30h] [rbp-10h]
  const std::shared_ptr<GCGCard> *card_ptr; // [rsp+38h] [rbp-8h]

  card_vec = GCGCardZone::getCardVec(this);
  __for_range = card_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin,
            &__for_end) )
  {
    card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
    if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      if ( GCGCard::isAlive(v1) )
        return 0;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  return 1;
};

// Line 1167: range 000000000DEA04E6-000000000DEA05AB
uint32_t __cdecl GCGCharacterZone::getAliveCharacterNum(GCGCharacterZone *const this)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t count; // [rsp+14h] [rbp-2Ch]
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-18h]
  std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+30h] [rbp-10h]
  std::shared_ptr<GCGCard> *card_ptr; // [rsp+38h] [rbp-8h]

  card_vec = GCGCardZone::getCardVec(this);
  count = 0;
  __for_range = card_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin,
            &__for_end) )
  {
    card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
    if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      if ( GCGCard::isAlive(v1) )
        ++count;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  return count;
};

// Line 1181: range 000000000DEA05AC-000000000DEA069C
uint32_t __cdecl GCGCharacterZone::getAliveBackstageCharacterNum(GCGCharacterZone *const this)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t count; // [rsp+10h] [rbp-30h]
  uint32_t cur_onstage_guid; // [rsp+14h] [rbp-2Ch]
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-18h]
  std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+30h] [rbp-10h]
  std::shared_ptr<GCGCard> *card_ptr; // [rsp+38h] [rbp-8h]

  cur_onstage_guid = GCGCharacterZone::getCurOnstageGuid(this);
  card_vec = GCGCardZone::getCardVec(this);
  count = 0;
  __for_range = card_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end(card_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin,
            &__for_end) )
  {
    card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
    if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      if ( GCGCard::isAlive(v1) )
      {
        v2 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
        if ( cur_onstage_guid != GCGCard::getGuid(v2) )
          ++count;
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  return count;
};

// Line 1196: range 000000000DEA069E-000000000DEA0988
void __cdecl GCGCharacterZone::notifySetOnStage(GCGCharacterZone *const this, GCGReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t Guid; // r14d
  std::__shared_ptr_access<GCGMsgSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  uint32_t *p_card_guid; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGMsgSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-A0h] BYREF
  char v14[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 card_ptr:1197 64 16 16 message_ptr:1198";
  *(_QWORD *)(v2 + 16) = GCGCharacterZone::notifySetOnStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v2 + 32));
  common::tools::perf::make_shared<GCGMsgSelectOnStage>();
  if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Guid = GCGCard::getGuid(v5);
    v7 = std::__shared_ptr_access<GCGMsgSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    p_card_guid = &v7->card_guid;
    if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_card_guid);
    }
    v7->card_guid = Guid;
  }
  ControllerId = GCGCardZone::getControllerId(this);
  v10 = std::__shared_ptr_access<GCGMsgSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v10 = (std::__shared_ptr_access<GCGMsgSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->controller_id);
  }
  v10->controller_id = ControllerId;
  v11 = std::__shared_ptr_access<GCGMsgSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v11->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    v11 = (std::__shared_ptr_access<GCGMsgSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v11->reason);
  }
  v11->reason = reason;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgSelectOnStage,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgSelectOnStage> *)(v2 + 64));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgSelectOnStage>::~shared_ptr((std::shared_ptr<GCGMsgSelectOnStage> *const)(v2 + 64));
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
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
};

// Line 1209: range 000000000DEA098A-000000000DEA0C74
void __cdecl GCGCharacterZone::notifySetOnStageBySkill(GCGCharacterZone *const this, uint32_t skill_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t Guid; // r14d
  std::__shared_ptr_access<GCGMsgSelectOnStageByEffect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  uint32_t *p_card_guid; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgSelectOnStageByEffect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGMsgSelectOnStageByEffect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-A0h] BYREF
  char v14[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 card_ptr:1210 64 16 16 message_ptr:1211";
  *(_QWORD *)(v2 + 16) = GCGCharacterZone::notifySetOnStageBySkill;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v2 + 32));
  common::tools::perf::make_shared<GCGMsgSelectOnStageByEffect>();
  if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Guid = GCGCard::getGuid(v5);
    v7 = std::__shared_ptr_access<GCGMsgSelectOnStageByEffect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSelectOnStageByEffect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    p_card_guid = &v7->card_guid;
    if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_card_guid);
    }
    v7->card_guid = Guid;
  }
  ControllerId = GCGCardZone::getControllerId(this);
  v10 = std::__shared_ptr_access<GCGMsgSelectOnStageByEffect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSelectOnStageByEffect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v10 = (std::__shared_ptr_access<GCGMsgSelectOnStageByEffect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->controller_id);
  }
  v10->controller_id = ControllerId;
  v11 = std::__shared_ptr_access<GCGMsgSelectOnStageByEffect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSelectOnStageByEffect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v11->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v11 = (std::__shared_ptr_access<GCGMsgSelectOnStageByEffect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v11->skill_id);
  }
  v11->skill_id = skill_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgSelectOnStageByEffect,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgSelectOnStageByEffect> *)(v2 + 64));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgSelectOnStageByEffect>::~shared_ptr((std::shared_ptr<GCGMsgSelectOnStageByEffect> *const)(v2 + 64));
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
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
};

// Line 1222: range 000000000DEA0C76-000000000DEA0EF6
void __cdecl GCGCharacterZone::foreachCharacter(
        GCGCharacterZone *const this,
        std::function<ForeachPolicy(GCGCard&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<std::shared_ptr<GCGCard>>::size_type v5; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGCard *v7; // rdx
  uint32_t cur_order_index; // [rsp+14h] [rbp-ACh]
  size_t i; // [rsp+18h] [rbp-A8h]
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+20h] [rbp-A0h]
  const std::shared_ptr<GCGCard> *card_ptr; // [rsp+28h] [rbp-98h]
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 18 copy_card_vec:1230";
  *(_QWORD *)(v2 + 16) = GCGCharacterZone::foreachCharacter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  card_vec = GCGCardZone::getCardVec(this);
  if ( !std::vector<std::shared_ptr<GCGCard>>::empty(card_vec) )
  {
    std::vector<std::shared_ptr<GCGCard>>::vector((std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32), card_vec);
    cur_order_index = GCGCharacterZone::getCurOrderIndex(this);
    if ( !std::vector<std::shared_ptr<GCGCard>>::empty((const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32)) )
    {
      for ( i = 0LL;
            i < std::vector<std::shared_ptr<GCGCard>>::size((const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32));
            ++i )
      {
        v5 = std::vector<std::shared_ptr<GCGCard>>::size((const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32));
        card_ptr = std::vector<std::shared_ptr<GCGCard>>::operator[](
                     (const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32),
                     (cur_order_index + i) % v5);
        if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
        {
          v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
          if ( GCGCard::isActivated(v6) )
          {
            v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
            if ( std::function<ForeachPolicy ()(GCGCard &)>::operator()(p_func, v7) == FOREACH_BREAK )
              break;
          }
        }
      }
    }
    std::vector<std::shared_ptr<GCGCard>>::~vector((std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32));
  }
  if ( v13 == (char *)v2 )
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
};

// Line 1249: range 000000000DEA0F58-000000000DEA0FBF
void __cdecl GCGCharacterZone::foreachAliveCharacter(
        GCGCharacterZone *const this,
        std::function<ForeachPolicy(GCGCard&)> *p_func)
{
  std::function<ForeachPolicy(GCGCard&)> v2; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGCharacterZone::foreachAliveCharacter(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1},void,void>(
    &v2,
    (GCGCharacterZone::foreachAliveCharacter::<lambda(GCGCard&)>)p_func);
  GCGCharacterZone::foreachCharacter(this, &v2);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&v2);
};

// Line 1250: range 000000000DEA0EF8-000000000DEA0F57
ForeachPolicy __cdecl GCGCharacterZone::foreachAliveCharacter(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1}::operator()(
        const GCGCharacterZone::foreachAliveCharacter::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  if ( !GCGCard::isAlive(card) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return std::function<ForeachPolicy ()(GCGCard &)>::operator()(__closure->__func, card);
};

// Line 1261: range 000000000DEA1020-000000000DEA1087
void __cdecl GCGCharacterZone::foreachAliveCharacterBackward(
        GCGCharacterZone *const this,
        std::function<ForeachPolicy(GCGCard&)> *p_func)
{
  std::function<ForeachPolicy(GCGCard&)> v2; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGCharacterZone::foreachAliveCharacterBackward(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1},void,void>(
    &v2,
    (GCGCharacterZone::foreachAliveCharacterBackward::<lambda(GCGCard&)>)p_func);
  GCGCharacterZone::foreachCharacterBackward(this, &v2);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&v2);
};

// Line 1262: range 000000000DEA0FC0-000000000DEA101F
ForeachPolicy __cdecl GCGCharacterZone::foreachAliveCharacterBackward(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1}::operator()(
        const GCGCharacterZone::foreachAliveCharacterBackward::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  if ( !GCGCard::isAlive(card) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return std::function<ForeachPolicy ()(GCGCard &)>::operator()(__closure->__func, card);
};

// Line 1274: range 000000000DEA1088-000000000DEA133E
void __cdecl GCGCharacterZone::foreachCharacterBackward(
        GCGCharacterZone *const this,
        std::function<ForeachPolicy(GCGCard&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<std::shared_ptr<GCGCard>>::size_type v5; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGCard *v7; // rdx
  uint32_t cur_order_index; // [rsp+1Ch] [rbp-B4h]
  size_t i; // [rsp+20h] [rbp-B0h]
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-A8h]
  size_t cur_index; // [rsp+30h] [rbp-A0h]
  const std::shared_ptr<GCGCard> *card_ptr; // [rsp+38h] [rbp-98h]
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 18 copy_card_vec:1281";
  *(_QWORD *)(v2 + 16) = GCGCharacterZone::foreachCharacterBackward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  card_vec = GCGCardZone::getCardVec(this);
  if ( !std::vector<std::shared_ptr<GCGCard>>::empty(card_vec) )
  {
    std::vector<std::shared_ptr<GCGCard>>::vector((std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32), card_vec);
    cur_order_index = GCGCharacterZone::getCurOrderIndex(this);
    if ( !std::vector<std::shared_ptr<GCGCard>>::empty((const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32)) )
    {
      for ( i = 0LL;
            i < std::vector<std::shared_ptr<GCGCard>>::size((const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32));
            ++i )
      {
        v5 = cur_order_index
           + std::vector<std::shared_ptr<GCGCard>>::size((const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32))
           - i;
        cur_index = v5
                  % std::vector<std::shared_ptr<GCGCard>>::size((const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32));
        if ( cur_index < std::vector<std::shared_ptr<GCGCard>>::size((const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32)) )
        {
          card_ptr = std::vector<std::shared_ptr<GCGCard>>::operator[](
                       (const std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32),
                       cur_index);
          if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
          {
            v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
            if ( GCGCard::isActivated(v6) )
            {
              v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
              if ( std::function<ForeachPolicy ()(GCGCard &)>::operator()(p_func, v7) == FOREACH_BREAK )
                break;
            }
          }
        }
      }
    }
    std::vector<std::shared_ptr<GCGCard>>::~vector((std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 32));
  }
  if ( v14 == (char *)v2 )
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
};

// Line 1305: range 000000000DEA1340-000000000DEA1786
std::vector<std::shared_ptr<GCGCard>> *__cdecl GCGCharacterZone::getOnstageNeighbourCardVec(
        std::vector<std::shared_ptr<GCGCard>> *retstr,
        GCGCharacterZone *const this)
{
  std::shared_ptr<GCGCard> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::vector<std::shared_ptr<GCGCard>>::size_type v7; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t Guid; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t i; // [rsp+20h] [rbp-A0h]
  uint32_t i_0; // [rsp+24h] [rbp-9Ch]
  uint32_t cur_order_index; // [rsp+28h] [rbp-98h]
  uint32_t cur_onstage_guid; // [rsp+2Ch] [rbp-94h]
  uint32_t cur_index; // [rsp+30h] [rbp-90h]
  uint32_t cur_index_0; // [rsp+34h] [rbp-8Ch]
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+38h] [rbp-88h]
  std::shared_ptr<GCGCard> *cur_card_ptr; // [rsp+40h] [rbp-80h]
  std::shared_ptr<GCGCard> *cur_card_ptr_0; // [rsp+48h] [rbp-78h]
  char v23[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<GCGCard> *)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<GCGCard> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 29 right_neighbour_card_ptr:1315";
  v2[1]._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)GCGCharacterZone::getOnstageNeighbourCardVec;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  card_vec = GCGCardZone::getCardVec(this);
  std::vector<std::shared_ptr<GCGCard>>::vector(retstr);
  if ( std::vector<std::shared_ptr<GCGCard>>::size(card_vec) > 1 )
  {
    cur_order_index = GCGCharacterZone::getCurOrderIndex(this);
    cur_onstage_guid = GCGCharacterZone::getCurOnstageGuid(this);
    std::shared_ptr<GCGCard>::shared_ptr(v2 + 2, 0LL);
    for ( i = cur_onstage_guid != 0; i < std::vector<std::shared_ptr<GCGCard>>::size(card_vec); ++i )
    {
      cur_index = (i + cur_order_index) % std::vector<std::shared_ptr<GCGCard>>::size(card_vec);
      if ( cur_index < std::vector<std::shared_ptr<GCGCard>>::size(card_vec) )
      {
        cur_card_ptr = std::vector<std::shared_ptr<GCGCard>>::operator[](card_vec, cur_index);
        if ( !std::operator==<GCGCard>(cur_card_ptr, 0LL) )
        {
          v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)cur_card_ptr);
          if ( GCGCard::isAlive(v5) )
          {
            std::shared_ptr<GCGCard>::operator=(v2 + 2, cur_card_ptr);
            break;
          }
        }
      }
    }
    if ( !std::operator==<GCGCard>(v2 + 2, 0LL) )
    {
      std::vector<std::shared_ptr<GCGCard>>::push_back(retstr, v2 + 2);
      for ( i_0 = 1; i_0 < std::vector<std::shared_ptr<GCGCard>>::size(card_vec); ++i_0 )
      {
        v7 = std::vector<std::shared_ptr<GCGCard>>::size(card_vec) + cur_order_index - i_0;
        cur_index_0 = v7 % std::vector<std::shared_ptr<GCGCard>>::size(card_vec);
        if ( cur_index_0 < std::vector<std::shared_ptr<GCGCard>>::size(card_vec) )
        {
          cur_card_ptr_0 = std::vector<std::shared_ptr<GCGCard>>::operator[](card_vec, cur_index_0);
          if ( !std::operator==<GCGCard>(cur_card_ptr_0, 0LL) )
          {
            v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)cur_card_ptr_0);
            if ( GCGCard::isAlive(v8) )
            {
              v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)cur_card_ptr_0);
              Guid = GCGCard::getGuid(v10);
              v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
              if ( Guid != GCGCard::getGuid(v12) )
              {
                std::vector<std::shared_ptr<GCGCard>>::push_back(retstr, cur_card_ptr_0);
                break;
              }
            }
          }
        }
      }
    }
    std::shared_ptr<GCGCard>::~shared_ptr(v2 + 2);
  }
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1368: range 000000000DEA1788-000000000DEA1D48
GCGCharacterZone *__fastcall GCGCharacterZone::addNewCharacter(
        GCGCharacterZone *const this,
        GCGCharacterZone *card_id,
        GCGReason reason,
        GCGReason a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  GCGCardMgr *CardMgr; // rsi
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGCardMgr *v14; // r14
  uint32_t v15; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t Guid; // eax
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+80h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 10 index:1380 48 4 12 card_id:1367 64 16 13 card_ptr:1374";
  *(_QWORD *)(v4 + 16) = GCGCharacterZone::addNewCharacter;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = reason;
  if ( GCGCardZone::checkCanAdd(card_id, *(_DWORD *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "addNewCharacter",
      1371);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v25,
           (const char (*)[28])"checkCanAdd fail. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v25);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&card_id->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&card_id->game_mode_);
    CardMgr = GCGGameMode::getCardMgr(card_id->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&card_id->controller_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_id + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_id->controller_id_ >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&card_id->controller_id_);
    }
    GCGCardMgr::createCard(
      (GCGCardMgr *const)(v4 + 64),
      CardMgr,
      *(GCGControllerValue *)(v4 + 48),
      card_id->controller_id_);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/zone/gcg_card_zone.cpp",
        "addNewCharacter",
        1377);
      v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v25,
             (const char (*)[28])"create card fail. card_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
      std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
    }
    else
    {
      *(_DWORD *)(v4 + 32) = GCGCharacterZone::getCurOrderIndex(card_id);
      card_vec = GCGCardZone::getCardVec(card_id);
      if ( !*(_DWORD *)(v4 + 32) )
        *(_DWORD *)(v4 + 32) = std::vector<std::shared_ptr<GCGCard>>::size(card_vec);
      v10 = *(_DWORD *)(v4 + 32);
      std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v4 + 64));
      LOBYTE(v10) = GCGCharacterZone::addCharacterByIndex(card_id, &p_card_ptr, v10, a4, 0) != 0;
      std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
      if ( (_BYTE)v10 )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/zone/gcg_card_zone.cpp",
          "addNewCharacter",
          1389);
        v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v24,
                (const char (*)[34])"addCharacterByIndex fail. index: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v4 + 32));
        v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        GCGCard::getDesc[abi:cxx11]((std::string *)&v25, v13);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v25);
        std::string::~string(&v25);
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&card_id->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&card_id->game_mode_);
        v14 = GCGGameMode::getCardMgr(card_id->game_mode_);
        std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v4 + 64));
        GCGCardMgr::notifyNewCard(v14, &p_card_ptr);
        std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
        v15 = *(_DWORD *)(v4 + 32);
        v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        Guid = GCGCard::getGuid(v16);
        GCGCardZone::notifyAddCard(card_id, Guid, v15, a4);
        std::shared_ptr<GCGCard>::shared_ptr(
          (std::shared_ptr<GCGCard> *const)this,
          (std::shared_ptr<GCGCard> *)(v4 + 64));
      }
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
  }
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
  return this;
};

// Line 1398: range 000000000DEA1D4A-000000000DEA1DFB
int32_t __cdecl GCGCharacterZone::addCharacter(
        GCGCharacterZone *const this,
        GCGCardPtr *p_card_ptr,
        GCGReason reason,
        bool is_notify)
{
  int32_t v4; // ebx
  uint32_t index; // [rsp+24h] [rbp-2Ch]
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+28h] [rbp-28h]
  std::shared_ptr<GCGCard> v10; // [rsp+30h] [rbp-20h] BYREF

  index = GCGCharacterZone::getCurOrderIndex(this);
  card_vec = GCGCardZone::getCardVec(this);
  if ( !index )
    index = std::vector<std::shared_ptr<GCGCard>>::size(card_vec);
  std::shared_ptr<GCGCard>::shared_ptr(&v10, p_card_ptr);
  v4 = GCGCharacterZone::addCharacterByIndex(this, &v10, index, reason, is_notify);
  std::shared_ptr<GCGCard>::~shared_ptr(&v10);
  return v4;
};

// Line 1410: range 000000000DEA1DFC-000000000DEA2644
__int64 __fastcall GCGCharacterZone::addCharacterByIndex(
        GCGCharacterZone *const this,
        const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *p_card_ptr,
        uint32_t index,
        GCGReason reason,
        bool is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  __int64 result; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::vector<std::shared_ptr<GCGCard>>::size_type v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r12
  common::milog::MiLogStream *v22; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> >::difference_type v28; // r14
  unsigned __int64 v29; // rax
  void (__fastcall *v30)(GCGCharacterZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, bool, _QWORD); // r15
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  uint32_t v32; // r12d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t Guid; // eax
  unsigned int val; // [rsp+3Ch] [rbp-104h] BYREF
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > v39; // [rsp+40h] [rbp-100h] BYREF
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __i; // [rsp+48h] [rbp-F8h] BYREF
  __gnu_cxx::__normal_iterator<const std::shared_ptr<GCGCard>*,std::vector<std::shared_ptr<GCGCard>> > __position; // [rsp+50h] [rbp-F0h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<GCGCard> v43; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v44; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v45; // [rsp+90h] [rbp-B0h] BYREF
  common::milog::MiLogStream v46; // [rsp+B0h] [rbp-90h] BYREF
  char v47[112]; // [rsp+D0h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 10 index:1409";
  *(_QWORD *)(v5 + 16) = GCGCharacterZone::addCharacterByIndex;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  *(_DWORD *)(v5 + 32) = index;
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)p_card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "addCharacterByIndex",
      1413);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v46, (const char (*)[21])"card_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v46);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_card_ptr);
    if ( GCGCard::getCardType(v9) == GCG_CARD_CHARACTER )
    {
      v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_card_ptr);
      if ( GCGCard::getZoneType(v12) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/zone/gcg_card_zone.cpp",
          "addCharacterByIndex",
          1423);
        v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v46,
                (const char (*)[32])"card_ptr already in some zone. ");
        v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_card_ptr);
        val = GCGCard::getZoneType(v14);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v46);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        std::shared_ptr<GCGCard>::shared_ptr(&v43, (const std::shared_ptr<GCGCard> *)p_card_ptr);
        v15 = GCGCardZone::checkCanAdd(this, &v43, 1) != 0;
        std::shared_ptr<GCGCard>::~shared_ptr(&v43);
        if ( v15 )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/zone/gcg_card_zone.cpp",
            "addCharacterByIndex",
            1428);
          v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v45,
                  (const char (*)[19])"checkCanAdd fail. ");
          v17 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_card_ptr);
          GCGCard::getDesc[abi:cxx11]((std::string *)&v46, v17);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v46);
          std::string::~string(&v46);
          common::milog::MiLogStream::~MiLogStream(&v45);
          result = 0xFFFFFFFFLL;
        }
        else
        {
          card_vec = GCGCardZone::getCardVec(this);
          v18 = *(unsigned int *)(v5 + 32);
          if ( v18 <= std::vector<std::shared_ptr<GCGCard>>::size(card_vec) )
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/zone/gcg_card_zone.cpp",
              "addCharacterByIndex",
              1438);
            GCGCardZone::getDesc[abi:cxx11]((std::string *)&v45, this);
            v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v44, (const std::string *)&v45);
            v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v24,
                    (const char (*)[19])"addCard by index: ");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v5 + 32));
            v27 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_card_ptr);
            GCGCard::getDesc[abi:cxx11]((std::string *)&v46, v27);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)&v46);
            std::string::~string(&v46);
            std::string::~string(&v45);
            common::milog::MiLogStream::~MiLogStream(&v44);
            v28 = *(unsigned int *)(v5 + 32);
            v39._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(card_vec)._M_current;
            __i._M_current = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator+(
                               &v39,
                               v28)._M_current;
            __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> const*,std::vector<std::shared_ptr<GCGCard>>>::__normal_iterator<std::shared_ptr<GCGCard>*>(
              &__position,
              &__i);
            std::vector<std::shared_ptr<GCGCard>>::insert(
              card_vec,
              __position,
              (const std::vector<std::shared_ptr<GCGCard>>::value_type *)p_card_ptr);
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v29 = (unsigned __int64)(this->_vptr_GCGCardZone + 5);
            if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
              __asan_report_load8(this->_vptr_GCGCardZone + 5);
            v30 = *(void (__fastcall **)(GCGCharacterZone *const, std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, bool, _QWORD))v29;
            v31 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*(p_card_ptr);
            v30(this, v31, is_notify, 0LL);
            if ( is_notify )
            {
              v32 = *(_DWORD *)(v5 + 32);
              v33 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_card_ptr);
              Guid = GCGCard::getGuid(v33);
              GCGCardZone::notifyAddCard(this, Guid, v32, reason);
            }
            result = 0LL;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/zone/gcg_card_zone.cpp",
              "addCharacterByIndex",
              1434);
            v19 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v46,
                    (const char (*)[23])"index invalid. index: ");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v5 + 32));
            v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" size: ");
            __position._M_current = (const std::shared_ptr<GCGCard> *)std::vector<std::shared_ptr<GCGCard>>::size(card_vec);
            v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v21,
                    (const unsigned __int64 *)&__position);
            v23 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_card_ptr);
            val = GCGCard::getZoneType(v23);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
            common::milog::MiLogStream::~MiLogStream(&v46);
            result = 0xFFFFFFFFLL;
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/zone/gcg_card_zone.cpp",
        "addCharacterByIndex",
        1418);
      v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v45,
              (const char (*)[25])"card must be character. ");
      v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_card_ptr);
      GCGCard::getDesc[abi:cxx11]((std::string *)&v46, v11);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&v46);
      std::string::~string(&v46);
      common::milog::MiLogStream::~MiLogStream(&v45);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v47 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1449: range 000000000DEA2646-000000000DEA27E9
void __cdecl GCGCharacterZone::recalcCurOrderIndex(GCGCharacterZone *const this)
{
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v1; // rax
  uint32_t *v2; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool is_find; // [rsp+1Bh] [rbp-45h]
  uint32_t new_order_index_; // [rsp+1Ch] [rbp-44h]
  uint32_t i; // [rsp+20h] [rbp-40h]
  uint32_t guid; // [rsp+24h] [rbp-3Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-38h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-30h] BYREF
  const std::vector<std::shared_ptr<GCGCard>> *card_vec; // [rsp+38h] [rbp-28h]
  std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-20h]
  const std::shared_ptr<GCGCard> *card_ptr; // [rsp+48h] [rbp-18h]

  card_vec = GCGCardZone::getCardVec(this);
  if ( std::vector<std::shared_ptr<GCGCard>>::empty(card_vec) )
  {
    GCGCharacterZone::setCurOrderIndex(this, 0);
  }
  else
  {
    new_order_index_ = 0;
    is_find = 0;
    __for_range = &GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_)->cur_order_guid_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v1 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v2 = v1;
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v1);
      }
      guid = *v2;
      for ( i = 0; i < std::vector<std::shared_ptr<GCGCard>>::size(card_vec); ++i )
      {
        card_ptr = std::vector<std::shared_ptr<GCGCard>>::operator[](card_vec, i);
        if ( std::operator!=<GCGCard>(card_ptr, 0LL) )
        {
          v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
          if ( guid == GCGCard::getGuid(v3) )
          {
            is_find = 1;
            new_order_index_ = i;
            break;
          }
        }
      }
      if ( is_find )
        break;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    GCGCharacterZone::setCurOrderIndex(this, new_order_index_);
  }
};

// Line 1488: range 000000000DEA288E-000000000DEA29A6
uint32_t __cdecl GCGCharacterZone::getDefaultOnstageGuid(GCGCharacterZone *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t result; // eax
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+10h] [rbp-80h] BYREF
  char v6[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 card_guid:1489";
  *(_QWORD *)(v1 + 16) = GCGCharacterZone::getDefaultOnstageGuid;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGCharacterZone::getDefaultOnstageGuid(void)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    (GCGCharacterZone::getDefaultOnstageGuid::<lambda(GCGCard&)>)(v1 + 32));
  GCGCharacterZone::foreachCharacter(this, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  result = *(_DWORD *)(v1 + 32);
  if ( v6 == (char *)v1 )
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

// Line 1490: range 000000000DEA27EA-000000000DEA288C
ForeachPolicy __cdecl GCGCharacterZone::getDefaultOnstageGuid(void)::{lambda(GCGCard &)#1}::operator()(
        const GCGCharacterZone::getDefaultOnstageGuid::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  uint32_t *card_guid; // rbx
  uint32_t Guid; // ecx

  if ( !GCGCard::isAlive(card) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  card_guid = __closure->__card_guid;
  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(card_guid);
  }
  *card_guid = Guid;
  return 1;
};

// Line 1504: range 000000000DEA2A4A-000000000DEA2AED
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGCharacterZone::foreachBackStageCharater(
        GCGCharacterZone *const this,
        std::function<ForeachPolicy(GCGCard&)> *p_func)
{
  uint32_t CurOnstageGuid; // edx
  std::function<ForeachPolicy(GCGCard&)> v3; // [rsp+20h] [rbp-40h] BYREF

  CurOnstageGuid = GCGCharacterZone::getCurOnstageGuid(this);
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGCharacterZone::foreachBackStageCharater(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1},void,void>(
    &v3,
    *(GCGCharacterZone::foreachBackStageCharater::<lambda(GCGCard&)> *)&p_func);
  GCGCharacterZone::foreachCharacter(this, &v3);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&v3);
};

// Line 1507: range 000000000DEA29A8-000000000DEA2A49
ForeachPolicy __cdecl GCGCharacterZone::foreachBackStageCharater(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1}::operator()(
        const GCGCharacterZone::foreachBackStageCharater::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  uint32_t Guid; // ecx

  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__cur_onstage_guid);
  }
  if ( Guid == __closure->__cur_onstage_guid )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return std::function<ForeachPolicy ()(GCGCard &)>::operator()(__closure->__func, card);
};

// Line 1519: range 000000000DEA2B4E-000000000DEA2BB5
void __cdecl GCGCharacterZone::foreachAliveBackStageCharater(
        GCGCharacterZone *const this,
        std::function<ForeachPolicy(GCGCard&)> *p_func)
{
  std::function<ForeachPolicy(GCGCard&)> v2; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGCharacterZone::foreachAliveBackStageCharater(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1},void,void>(
    &v2,
    (GCGCharacterZone::foreachAliveBackStageCharater::<lambda(GCGCard&)>)p_func);
  GCGCharacterZone::foreachBackStageCharater(this, &v2);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&v2);
};

// Line 1520: range 000000000DEA2AEE-000000000DEA2B4D
ForeachPolicy __cdecl GCGCharacterZone::foreachAliveBackStageCharater(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1}::operator()(
        const GCGCharacterZone::foreachAliveBackStageCharater::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  if ( !GCGCard::isAlive(card) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return std::function<ForeachPolicy ()(GCGCard &)>::operator()(__closure->__func, card);
};

// Line 1532: range 000000000DEA2BB6-000000000DEA31B9
void __cdecl GCGCharacterZone::triggerAllNewAddCharacters(GCGCharacterZone *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  GCGCharacterZoneRuntimeData *RuntimeData; // rax
  GCGCharacterZoneRuntimeData *v5; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  GCGSkillLogic *SkillLogic; // r14
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-138h]
  std::shared_ptr<GCGPhaseBase> p_phase_ptr; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<GCGSkillUseParam> p_trigger_windows_param_ptr; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-110h] BYREF
  char v20[240]; // [rsp+70h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 13 card_ptr:1538 64 16 18 cur_phase_ptr:1541 96 16 30 trigger_windows_param_ptr:1544 128"
                        " 24 31 new_add_character_guid_vec:1533";
  *(_QWORD *)(v1 + 16) = GCGCharacterZone::triggerAllNewAddCharacters;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 128));
  RuntimeData = GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  std::swap<unsigned int>((std::vector<unsigned int> *)(v1 + 128), &RuntimeData->new_add_character_guid_vec_);
  v5 = GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(&this->cur_runtime_data_);
  std::vector<unsigned int>::clear(&v5->new_add_character_guid_vec_);
  __for_range = (std::vector<unsigned int> *)(v1 + 128);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 128))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 128))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    GCGCardZone::findCard((GCGCardZone *const)(v1 + 32), (uint32_t)this);
    if ( std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v1 + 32)) )
    {
      v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( GCGCard::isAlive(v7) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        GCGGameMode::getPhaseMgr(this->game_mode_);
        GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 64));
        if ( std::operator!=<GCGPhaseBase>(0LL, (const std::shared_ptr<GCGPhaseBase> *)(v1 + 64)) )
        {
          common::tools::perf::make_shared<GCGSkillUseParam>();
          if ( std::operator==<GCGSkillUseParam>(0LL, (const std::shared_ptr<GCGSkillUseParam> *)(v1 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v19,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/zone/gcg_card_zone.cpp",
              "triggerAllNewAddCharacters",
              1547);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v19,
              (const char (*)[37])"trigger_windows_param_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v19);
          }
          else
          {
            v9 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v9->trigger_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v9->trigger_type >> 3) + 0x7FFF8000) <= 3 )
            {
              v9 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v9->trigger_type);
            }
            v9->trigger_type = GCG_TRIGGER_ON_ADD_CHARACTER;
            ControllerId = GCGCardZone::getControllerId(this);
            v11 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v11->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v11->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v11 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v11->controller_id);
            }
            v11->controller_id = ControllerId;
            v12 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            std::shared_ptr<GCGCard>::operator=(&v12->source_card_ptr, (const std::shared_ptr<GCGCard> *)(v1 + 32));
            if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->game_mode_);
            SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
            std::shared_ptr<GCGSkillUseParam>::shared_ptr(
              &p_trigger_windows_param_ptr,
              (const std::shared_ptr<GCGSkillUseParam> *)(v1 + 96));
            std::shared_ptr<GCGPhaseBase>::shared_ptr(&p_phase_ptr, (const std::shared_ptr<GCGPhaseBase> *)(v1 + 64));
            GCGSkillLogic::trigger(SkillLogic, &p_phase_ptr, GCG_TRIGGER_ON_ADD_CHARACTER, &p_trigger_windows_param_ptr);
            std::shared_ptr<GCGPhaseBase>::~shared_ptr(&p_phase_ptr);
            std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&p_trigger_windows_param_ptr);
          }
          std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v1 + 96));
        }
        std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 64));
      }
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 32));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 128));
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1560: range 000000000DEA31BA-000000000DEA329D
int32_t __cdecl GCGModifyZone::init(GCGModifyZone *const this, GCGCardPtr *p_card_ptr)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  GCGControllerValue controller_id_; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<GCGCard>(p_card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "init",
      1563);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v5, (const char (*)[21])"card_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
    controller_id_ = GCGCard::getControllerId(v3);
    GCGCardZone::init(this, controller_id_);
    std::weak_ptr<GCGCard>::operator=<GCGCard>(&this->owner_card_wtr_, p_card_ptr);
    return 0;
  }
};

// Line 1574: range 000000000DEA329E-000000000DEA36B4
void __cdecl GCGModifyZone::onAddCard(
        GCGModifyZone *const this,
        GCGCard *card,
        bool is_notify,
        uint32_t preview_replace_card_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  common::milog::MiLogStream *v7; // r14
  GCGGameMode *game_mode; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t Id; // r15d
  unsigned int ZoneType; // r14d
  unsigned int ControllerId; // eax
  uint32_t card_guid; // [rsp+14h] [rbp-ECh]
  uint32_t owner_card_guid; // [rsp+34h] [rbp-CCh]
  GCGSkillPreviewContext *preview_context; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-B0h] BYREF
  std::string val; // [rsp+70h] [rbp-90h] BYREF
  char v22[112]; // [rsp+90h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 19 owner_card_ptr:1576";
  *(_QWORD *)(v4 + 16) = GCGModifyZone::onAddCard;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  GCGCardZone::onAddCard(this, card, is_notify, preview_replace_card_id);
  std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v4 + 32));
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/zone/gcg_card_zone.cpp",
      "onAddCard",
      1579);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v20,
           (const char (*)[34])"owner_ptr is nullptr, added card:");
    GCGCard::getDesc[abi:cxx11](&val, card);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v4 + 32));
    GCGCard::setOwner(card, &p_card_ptr);
    std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
    if ( GCGUtils::isCardBlockAttack(card) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      game_mode = this->game_mode_;
      v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      GCGGameMode::onCardModifiedBlockAttackCard(game_mode, v9, card);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    if ( GCGGameMode::isDuringSnapshot(this->game_mode_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      preview_context = GCGGameMode::getSkillPreviewContext(this->game_mode_);
      v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      owner_card_guid = GCGCard::getGuid(v10);
      card_guid = GCGCard::getGuid(card);
      Id = GCGCard::getId(card);
      ZoneType = GCGCardZone::getZoneType(this);
      ControllerId = GCGCardZone::getControllerId(this);
      GCGSkillPreviewContext::recordPreviewAddCard(
        preview_context,
        ControllerId,
        ZoneType,
        Id,
        card_guid,
        owner_card_guid,
        preview_replace_card_id);
    }
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 32));
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1599: range 000000000DEA36B6-000000000DEA395C
void __cdecl GCGModifyZone::onDelCard(GCGModifyZone *const this, GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t Id; // r15d
  unsigned int ZoneType; // r14d
  unsigned int ControllerId; // esi
  uint32_t card_guid; // [rsp+Ch] [rbp-94h]
  uint32_t owner_card_guid; // [rsp+24h] [rbp-7Ch]
  GCGSkillPreviewContext *preview_context; // [rsp+28h] [rbp-78h]
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 owner_card_ptr:1603";
  *(_QWORD *)(v2 + 16) = GCGModifyZone::onDelCard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  if ( GCGGameMode::isDuringSnapshot(this->game_mode_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    preview_context = GCGGameMode::getSkillPreviewContext(this->game_mode_);
    std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v2 + 32));
    owner_card_guid = 0;
    if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL) )
    {
      v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      owner_card_guid = GCGCard::getGuid(v5);
    }
    card_guid = GCGCard::getGuid(card);
    Id = GCGCard::getId(card);
    ZoneType = GCGCardZone::getZoneType(this);
    ControllerId = GCGCardZone::getControllerId(this);
    GCGSkillPreviewContext::recordPreviewRmCard(preview_context, ControllerId, ZoneType, Id, card_guid, owner_card_guid);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  }
  GCGCardZone::onDelCard(this, card);
  std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32), 0LL);
  GCGCard::setOwner(card, (GCGCardPtr *)(v2 + 32));
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1616: range 000000000DEA395E-000000000DEA3CD6
void __cdecl GCGModifyZone::notifyAddCard(
        const GCGModifyZone *const this,
        std::vector<unsigned int> *p_card_guid_vec,
        uint32_t pos,
        GCGReason reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::vector<unsigned int> *v7; // r14
  std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  GCGReason *p_reason; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t Guid; // r14d
  std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  uint32_t *p_owner_card_guid; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+20h] [rbp-A0h] BYREF
  char v22[144]; // [rsp+30h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 16 message_ptr:1617 64 16 19 owner_card_ptr:1622";
  *(_QWORD *)(v4 + 16) = GCGModifyZone::notifyAddCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  common::tools::perf::make_shared<GCGMsgModifyAdd>();
  v7 = std::move<std::vector<unsigned int> &>(p_card_guid_vec);
  v8 = std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  std::vector<unsigned int>::operator=(&v8->card_guid_vec, v7);
  ControllerId = GCGCardZone::getControllerId(this);
  v10 = std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v10 = (std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->controller_id);
  }
  v10->controller_id = ControllerId;
  v11 = std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v11->pos >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->pos >> 3) + 0x7FFF8000) <= 3 )
  {
    v11 = (std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v11->pos);
  }
  v11->pos = pos;
  v12 = std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  p_reason = &v12->reason;
  if ( *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_reason);
  }
  v12->reason = reason;
  std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v4 + 64));
  if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
  {
    v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    Guid = GCGCard::getGuid(v14);
    v16 = std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgModifyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    p_owner_card_guid = &v16->owner_card_guid;
    if ( *(_BYTE *)(((unsigned __int64)p_owner_card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_owner_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_owner_card_guid >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(p_owner_card_guid);
    }
    v16->owner_card_guid = Guid;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgModifyAdd,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgModifyAdd> *)(v4 + 32));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
  std::shared_ptr<GCGMsgModifyAdd>::~shared_ptr((std::shared_ptr<GCGMsgModifyAdd> *const)(v4 + 32));
  if ( v22 == (char *)v4 )
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

// Line 1631: range 000000000DEA3CD8-000000000DEA3FF8
void __cdecl GCGModifyZone::notifyDelCard(
        const GCGModifyZone *const this,
        std::vector<unsigned int> *p_card_guid_vec,
        GCGReason reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<unsigned int> *v6; // r14
  std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t Guid; // r14d
  std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  uint32_t *p_owner_card_guid; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+20h] [rbp-A0h] BYREF
  char v18[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 16 message_ptr:1632 64 16 19 owner_card_ptr:1636";
  *(_QWORD *)(v3 + 16) = GCGModifyZone::notifyDelCard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  common::tools::perf::make_shared<GCGMsgModifyRemove>();
  v6 = std::move<std::vector<unsigned int> &>(p_card_guid_vec);
  v7 = std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  std::vector<unsigned int>::operator=(&v7->card_guid_vec, v6);
  ControllerId = GCGCardZone::getControllerId(this);
  v9 = std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v9->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v9 = (std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v9->controller_id);
  }
  v9->controller_id = ControllerId;
  v10 = std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v10->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    v10 = (std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->reason);
  }
  v10->reason = reason;
  std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v3 + 64));
  if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 64), 0LL) )
  {
    v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Guid = GCGCard::getGuid(v11);
    v13 = std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgModifyRemove,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    p_owner_card_guid = &v13->owner_card_guid;
    if ( *(_BYTE *)(((unsigned __int64)p_owner_card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_owner_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_owner_card_guid >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(p_owner_card_guid);
    }
    v13->owner_card_guid = Guid;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgModifyRemove,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgModifyRemove> *)(v3 + 32));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 64));
  std::shared_ptr<GCGMsgModifyRemove>::~shared_ptr((std::shared_ptr<GCGMsgModifyRemove> *const)(v3 + 32));
  if ( v18 == (char *)v3 )
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
