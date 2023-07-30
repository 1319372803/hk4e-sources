// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/tower_defense_effect.cpp

// Line 23: range 00000000161A3F56-00000000161A42CE
std::string *__cdecl CardEffectBase::getDesc[abi:cxx11](std::string *retstr, const CardEffectBase *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  CardInfo *card_info; // rdx
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rax
  std::string v; // [rsp+10h] [rbp-80h] BYREF
  char v18[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:24";
  *(_QWORD *)(v2 + 16) = CardEffectBase::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = this->card_info;
  v6 = (unsigned __int64 *)card_info;
  if ( *(_BYTE *)(((unsigned __int64)card_info >> 3) + 0x7FFF8000) )
    v6 = (unsigned __int64 *)__asan_report_load8();
  v7 = *v6;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(std::string *, CardInfo *))v7)(&v, card_info);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         &v);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "<effect_index:");
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->index);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, " rounds:[");
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, this->begin_round);
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, ",");
  if ( *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, this->end_round);
  v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, "]");
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, ">");
  std::string::~string(&v);
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

// Line 32: range 00000000161A42D0-00000000161A4554
int32_t __cdecl CardEffectBase::init(CardEffectBase *const this, const data::ChessCardEffect *effect)
{
  uint32_t effect_index; // ecx
  CardInfo *card_info; // rdx
  uint32_t round; // ecx
  uint32_t v5; // ecx
  uint32_t v6; // ecx
  data::ChessCardEffectType effect_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  effect_index = effect->effect_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index);
  }
  this->index = effect_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)&card_info->round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)card_info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_info->round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  round = card_info->round;
  if ( *(_BYTE *)(((unsigned __int64)&effect->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->begin_round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v5 = effect->begin_round + round;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_round);
  }
  this->begin_round = v5;
  if ( *(_BYTE *)(((unsigned __int64)&effect->active_rounds >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->active_rounds >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->active_rounds )
  {
    v6 = this->begin_round + effect->active_rounds - 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->end_round);
    }
    this->end_round = v6;
  }
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_type = effect->effect_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_type);
  }
  this->effect_type = effect_type;
  return 0;
};

// Line 44: range 00000000161A4556-00000000161A468B
void __cdecl CardEffectBase::start(CardEffectBase *const this)
{
  __int64 card_info; // rax
  unsigned __int64 v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_effect.cpp",
    "start",
    45);
  common::milog::MiLogStream::operator<<<CardEffectBase,(CardEffectBase*)0>(&v3, this);
  common::milog::MiLogStream::~MiLogStream(&v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  TowerDefensePlay::addToCardEffectMap(*(TowerDefensePlay *const *)(card_info + 24), this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 4);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(CardEffectBase *const))v2)(this);
};

// Line 51: range 00000000161A468C-00000000161A4801
void __cdecl CardEffectBase::stop(CardEffectBase *const this)
{
  __int64 card_info; // rax
  unsigned __int64 v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  TowerDefensePlay::delFromCardEffectMap(*(TowerDefensePlay *const *)(card_info + 24), this);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_expired);
  }
  this->is_expired = 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 5);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(CardEffectBase *const))v2)(this);
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_effect.cpp",
    "stop",
    55);
  common::milog::MiLogStream::operator<<<CardEffectBase,(CardEffectBase*)0>(&v3, this);
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 59: range 00000000161A4802-00000000161A49E6
bool __cdecl CardEffectBase::tryExpire(CardEffectBase *const this)
{
  uint32_t begin_round; // esi
  CardInfo *card_info; // rdx
  uint32_t end_round; // esi
  CardInfo *v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  begin_round = this->begin_round;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)&card_info->round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)card_info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_info->round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( begin_round > card_info->round )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_expired);
  }
  if ( this->is_expired )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->end_round )
    return 0;
  end_round = this->end_round;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)&v5->round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v5 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( end_round >= v5->round )
    return 0;
  CardEffectBase::stop(this);
  return 1;
};

// Line 77: range 00000000161A49E8-00000000161A4ABD
bool __cdecl CardEffectBase::tryEnable(CardEffectBase *const this)
{
  uint32_t begin_round; // esi
  CardInfo *card_info; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  begin_round = this->begin_round;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)&card_info->round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)card_info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_info->round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( begin_round != card_info->round )
    return 0;
  CardEffectBase::start(this);
  return 1;
};

// Line 87: range 00000000161A4ABE-00000000161A4CE0
bool __cdecl CardEffectBase::isActive(const CardEffectBase *const this)
{
  uint32_t begin_round; // esi
  CardInfo *card_info; // rdx
  uint32_t end_round; // esi
  CardInfo *v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_expired);
  }
  if ( this->is_expired )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_instant >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_instant >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_instant);
  }
  if ( this->is_instant )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  begin_round = this->begin_round;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)&card_info->round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)card_info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_info->round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( begin_round > card_info->round )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->end_round )
    return 1;
  end_round = this->end_round;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)&v5->round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v5 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->round >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return end_round >= v5->round;
};

// Line 116: range 00000000161A4CE2-00000000161A4E64
int32_t __cdecl EffectServerGlobalValue::init(EffectServerGlobalValue *const this, const data::ChessCardEffect *effect)
{
  float effect_param1; // xmm0_4
  std::set<unsigned int>::iterator v4; // rax
  std::insert_iterator<std::set<unsigned int> > v5; // rax
  std::set<unsigned int> *container; // r12
  const std::_Rb_tree_node_base *M_node; // r13
  const unsigned int *M_current; // rbx
  std::vector<unsigned int>::const_iterator v9; // rax
  std::insert_iterator<std::set<unsigned int> > v10; // rdx

  if ( CardEffectBase::init(this, effect) )
    return -1;
  std::string::operator=(&this->key, &effect->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = (float)effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->target_type == CHESS_CARD_TARGET_GADGETS )
  {
    v4._M_node = std::set<unsigned int>::end(&this->gadget_set)._M_node;
    v5 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(&this->gadget_set, v4);
    container = v5.container;
    M_node = v5.iter._M_node;
    M_current = std::vector<unsigned int>::end(&effect->target_param_list)._M_current;
    v9._M_current = std::vector<unsigned int>::begin(&effect->target_param_list)._M_current;
    v10.container = container;
    v10.iter._M_node = M_node;
    std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::set<unsigned int>>>(
      v9,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
      v10);
  }
  return 0;
};

// Line 132: range 00000000161A4E66-00000000161A5233
void __cdecl EffectServerGlobalValue::enable(EffectServerGlobalValue *const this)
{
  std::map<std::string,std::map<unsigned int,float>> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 card_info; // rax
  TowerDefensePlay *v5; // rcx
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(TowerDefensePlay *, std::set<unsigned int> *, std::string *, double); // r8
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(TowerDefensePlay *, std::set<unsigned int> *, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *); // r15
  std::map<std::string,std::map<unsigned int,float>>::mapped_type *v10; // rax
  TowerDefensePlay *v11; // rdx
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  TowerDefensePlay *play; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (std::map<std::string,std::map<unsigned int,float>> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<std::string,std::map<unsigned int,float>> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 18 sgv_gadget_map:135";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)EffectServerGlobalValue::enable;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  v5 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(play->_vptr_DescribalBase + 18);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  v7 = *(void (__fastcall **)(TowerDefensePlay *, std::set<unsigned int> *, std::string *, double))v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v7(v5, &this->gadget_set, &this->key, *(double *)_mm_cvtsi32_si128(LODWORD(this->value)).m128i_i64);
  std::map<std::string,std::map<unsigned int,float>>::map(v1 + 1);
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(play->_vptr_DescribalBase + 20);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  v9 = *(void (__fastcall **)(TowerDefensePlay *, std::set<unsigned int> *, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *))v8;
  v10 = std::map<std::string,std::map<unsigned int,float>>::operator[](v1 + 1, &this->key);
  v9(play, &this->gadget_set, &this->key, v10);
  v11 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (unsigned __int64)(play->_vptr_DescribalBase + 21);
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8();
  (*(void (__fastcall **)(TowerDefensePlay *, __int8 *))v12)(v11, v1[1]._M_t._M_impl.gap0);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_effect.cpp",
    "enable",
    138);
  v13 = common::milog::MiLogStream::operator<<<EffectServerGlobalValue,(EffectServerGlobalValue*)0>(&v15, this);
  common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" enabled.");
  common::milog::MiLogStream::~MiLogStream(&v15);
  std::map<std::string,std::map<unsigned int,float>>::~map(v1 + 1);
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 142: range 00000000161A5234-00000000161A560D
void __cdecl EffectServerGlobalValue::disable(EffectServerGlobalValue *const this)
{
  std::map<std::string,std::map<unsigned int,float>> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 card_info; // rax
  TowerDefensePlay *v5; // rcx
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(TowerDefensePlay *, std::set<unsigned int> *, std::string *, double); // r8
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(TowerDefensePlay *, std::set<unsigned int> *, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *); // r15
  std::map<std::string,std::map<unsigned int,float>>::mapped_type *v10; // rax
  TowerDefensePlay *v11; // rdx
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  TowerDefensePlay *play; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (std::map<std::string,std::map<unsigned int,float>> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<std::string,std::map<unsigned int,float>> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 18 sgv_gadget_map:145";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)EffectServerGlobalValue::disable;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  v5 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(play->_vptr_DescribalBase + 18);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  v7 = *(void (__fastcall **)(TowerDefensePlay *, std::set<unsigned int> *, std::string *, double))v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v7(v5, &this->gadget_set, &this->key, COERCE_DOUBLE(LODWORD(this->value) ^ 0x80000000LL));
  std::map<std::string,std::map<unsigned int,float>>::map(v1 + 1);
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(play->_vptr_DescribalBase + 20);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  v9 = *(void (__fastcall **)(TowerDefensePlay *, std::set<unsigned int> *, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *))v8;
  v10 = std::map<std::string,std::map<unsigned int,float>>::operator[](v1 + 1, &this->key);
  v9(play, &this->gadget_set, &this->key, v10);
  v11 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (unsigned __int64)(play->_vptr_DescribalBase + 21);
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8();
  (*(void (__fastcall **)(TowerDefensePlay *, __int8 *))v12)(v11, v1[1]._M_t._M_impl.gap0);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_effect.cpp",
    "disable",
    148);
  v13 = common::milog::MiLogStream::operator<<<EffectServerGlobalValue,(EffectServerGlobalValue*)0>(&v15, this);
  common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" disabled.");
  common::milog::MiLogStream::~MiLogStream(&v15);
  std::map<std::string,std::map<unsigned int,float>>::~map(v1 + 1);
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 153: range 00000000161A560E-00000000161A5767
int32_t __cdecl EffectModifyBuildCost::init(EffectModifyBuildCost *const this, const data::ChessCardEffect *effect)
{
  int v3; // eax
  double effect_param1; // xmm0_8
  std::set<unsigned int>::iterator v5; // rax
  std::insert_iterator<std::set<unsigned int> > v6; // rax
  std::set<unsigned int> *container; // r12
  const std::_Rb_tree_node_base *M_node; // r13
  const unsigned int *M_current; // rbx
  std::vector<unsigned int>::const_iterator v10; // rax
  std::insert_iterator<std::set<unsigned int> > v11; // rdx

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  effect_param1 = (double)effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    effect_param1 = __asan_report_store8(&this->factor);
  this->factor = effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->target_type == CHESS_CARD_TARGET_GADGETS )
  {
    v5._M_node = std::set<unsigned int>::end(&this->gadget_set)._M_node;
    v6 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(&this->gadget_set, v5);
    container = v6.container;
    M_node = v6.iter._M_node;
    M_current = std::vector<unsigned int>::end(&effect->target_param_list)._M_current;
    v10._M_current = std::vector<unsigned int>::begin(&effect->target_param_list)._M_current;
    v11.container = container;
    v11.iter._M_node = M_node;
    std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::set<unsigned int>>>(
      v10,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
      v11);
  }
  return 0;
};

// Line 168: range 00000000161A5768-00000000161A586F
void __cdecl EffectModifyBuildCost::enable(EffectModifyBuildCost *const this)
{
  __int64 card_info; // rax
  EffectModifyBuildCost *v2; // rdx
  TowerDefensePlay *v3; // rdx
  unsigned __int64 v4; // rax
  TowerDefensePlay *play; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerDefensePlay::modifyGadgetBuildCost(play, &this->gadget_set, this->factor, v2);
  v3 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(play->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(TowerDefensePlay *))v4)(v3);
};

// Line 175: range 00000000161A5870-00000000161A5982
void __cdecl EffectModifyBuildCost::disable(EffectModifyBuildCost *const this)
{
  __int64 card_info; // rax
  EffectModifyBuildCost *v2; // rdx
  TowerDefensePlay *v3; // rdx
  unsigned __int64 v4; // rax
  TowerDefensePlay *play; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerDefensePlay::modifyGadgetBuildCost(play, &this->gadget_set, -this->factor, v2);
  v3 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(play->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(TowerDefensePlay *))v4)(v3);
};

// Line 183: range 00000000161A5984-00000000161A5ADD
int32_t __cdecl EffectModifyRefund::init(EffectModifyRefund *const this, const data::ChessCardEffect *effect)
{
  int v3; // eax
  double effect_param1; // xmm0_8
  std::set<unsigned int>::iterator v5; // rax
  std::insert_iterator<std::set<unsigned int> > v6; // rax
  std::set<unsigned int> *container; // r12
  const std::_Rb_tree_node_base *M_node; // r13
  const unsigned int *M_current; // rbx
  std::vector<unsigned int>::const_iterator v10; // rax
  std::insert_iterator<std::set<unsigned int> > v11; // rdx

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  effect_param1 = (double)effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    effect_param1 = __asan_report_store8(&this->factor);
  this->factor = effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->target_type == CHESS_CARD_TARGET_GADGETS )
  {
    v5._M_node = std::set<unsigned int>::end(&this->gadget_set)._M_node;
    v6 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(&this->gadget_set, v5);
    container = v6.container;
    M_node = v6.iter._M_node;
    M_current = std::vector<unsigned int>::end(&effect->target_param_list)._M_current;
    v10._M_current = std::vector<unsigned int>::begin(&effect->target_param_list)._M_current;
    v11.container = container;
    v11.iter._M_node = M_node;
    std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::set<unsigned int>>>(
      v10,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
      v11);
  }
  return 0;
};

// Line 198: range 00000000161A5ADE-00000000161A5BE5
void __cdecl EffectModifyRefund::enable(EffectModifyRefund *const this)
{
  __int64 card_info; // rax
  EffectModifyRefund *v2; // rdx
  TowerDefensePlay *v3; // rdx
  unsigned __int64 v4; // rax
  TowerDefensePlay *play; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerDefensePlay::modifyGadgetRefund(play, &this->gadget_set, this->factor, v2);
  v3 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(play->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(TowerDefensePlay *))v4)(v3);
};

// Line 205: range 00000000161A5BE6-00000000161A5CF8
void __cdecl EffectModifyRefund::disable(EffectModifyRefund *const this)
{
  __int64 card_info; // rax
  EffectModifyRefund *v2; // rdx
  TowerDefensePlay *v3; // rdx
  unsigned __int64 v4; // rax
  TowerDefensePlay *play; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerDefensePlay::modifyGadgetRefund(play, &this->gadget_set, -this->factor, v2);
  v3 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(play->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(TowerDefensePlay *))v4)(v3);
};

// Line 213: range 00000000161A5CFA-00000000161A5E16
int32_t __cdecl EffectModifyKillPoints::init(EffectModifyKillPoints *const this, const data::ChessCardEffect *effect)
{
  int v3; // eax
  double effect_param1; // xmm0_8
  double effect_param2; // xmm0_8

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  effect_param1 = (double)effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    effect_param1 = __asan_report_store8(&this->factor);
  this->factor = effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  effect_param2 = (double)effect->effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) )
    effect_param2 = __asan_report_store8(&this->delta);
  this->delta = effect_param2;
  return 0;
};

// Line 224: range 00000000161A5E18-00000000161A5EED
void __cdecl EffectModifyKillPoints::enable(EffectModifyKillPoints *const this)
{
  __int64 card_info; // rax
  TowerDefensePlay *v2; // rax
  EffectModifyKillPoints *v3; // rcx
  double factor; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  v2 = *(TowerDefensePlay **)(card_info + 24);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    v2 = (TowerDefensePlay *)__asan_report_load8();
  factor = this->factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) )
    v2 = (TowerDefensePlay *)__asan_report_load8();
  TowerDefensePlay::modifyKillPoints(v2, this->delta, factor, v3);
};

// Line 229: range 00000000161A5EEE-00000000161A5FDB
void __cdecl EffectModifyKillPoints::disable(EffectModifyKillPoints *const this)
{
  __int64 card_info; // rax
  TowerDefensePlay *v2; // rax
  EffectModifyKillPoints *v3; // rdx
  double v4; // xmm2_8

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  v2 = *(TowerDefensePlay **)(card_info + 24);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    v2 = (TowerDefensePlay *)__asan_report_load8();
  v4 = -this->factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) )
    v2 = (TowerDefensePlay *)__asan_report_load8();
  TowerDefensePlay::modifyKillPoints(v2, -this->delta, v4, v3);
};

// Line 235: range 00000000161A5FDC-00000000161A6081
int32_t __cdecl EffectAddGearNum::init(EffectAddGearNum *const this, const data::ChessCardEffect *effect)
{
  int v3; // eax
  double effect_param1; // xmm0_8

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  effect_param1 = (double)effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) )
    effect_param1 = __asan_report_store8(&this->delta);
  this->delta = effect_param1;
  return 0;
};

// Line 245: range 00000000161A6082-00000000161A6184
void __cdecl EffectAddGearNum::enable(EffectAddGearNum *const this)
{
  __int64 card_info; // rax
  EffectAddGearNum *v2; // rcx
  TowerDefensePlay *v3; // rdx
  unsigned __int64 v4; // rax
  TowerDefensePlay *play; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerDefensePlay::modifyGearNum(play, this->delta, v2);
  v3 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(play->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(TowerDefensePlay *))v4)(v3);
};

// Line 252: range 00000000161A6186-00000000161A6290
void __cdecl EffectAddGearNum::disable(EffectAddGearNum *const this)
{
  __int64 card_info; // rax
  EffectAddGearNum *v2; // rdx
  TowerDefensePlay *v3; // rdx
  unsigned __int64 v4; // rax
  TowerDefensePlay *play; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerDefensePlay::modifyGearNum(play, -this->delta, v2);
  v3 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(play->_vptr_DescribalBase + 16);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(TowerDefensePlay *))v4)(v3);
};

// Line 260: range 00000000161A6292-00000000161A63CC
int32_t __cdecl EffectGrantPoints::init(EffectGrantPoints *const this, const data::ChessCardEffect *effect)
{
  int v3; // eax
  int32_t effect_param1; // esi

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  if ( effect->effect_param1 <= 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_instant >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_instant >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_instant);
  }
  this->is_instant = 1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->points);
  }
  this->points = effect_param1;
  return 0;
};

// Line 275: range 00000000161A63CE-00000000161A6571
void __cdecl EffectGrantPoints::onAdd(EffectGrantPoints *const this, Player *player)
{
  __int64 card_info; // rax
  common::milog::MiLogStream *v3; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  TowerDefensePlay *play; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  if ( *(_BYTE *)(((unsigned __int64)&this->points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  TowerDefensePlay::addAllBuildingPoints(play, this->points);
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_effect.cpp",
    "onAdd",
    278);
  v3 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v9, (const char (*)[7])" card:");
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->card_info->card_id);
  v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v4, (const char (*)[13])" add points:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->points);
  v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_25B7ABC0);
  operator<<(v7, player);
  common::milog::MiLogStream::~MiLogStream(&v9);
};

// Line 281: range 00000000161A6572-00000000161A657C
void __cdecl EffectGrantPoints::enable(EffectGrantPoints *const this)
{
  ;
};

// Line 283: range 00000000161A657E-00000000161A6588
void __cdecl EffectGrantPoints::disable(EffectGrantPoints *const this)
{
  ;
};

// Line 287: range 00000000161A658A-00000000161A66C4
int32_t __cdecl EffectKillGears::init(EffectKillGears *const this, const data::ChessCardEffect *effect)
{
  int v3; // eax
  int32_t effect_param1; // esi

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  if ( effect->effect_param1 <= 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_instant >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_instant >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_instant);
  }
  this->is_instant = 1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_num);
  }
  this->kill_num = effect_param1;
  return 0;
};

// Line 302: range 00000000161A66C6-00000000161A6776
void __cdecl EffectKillGears::onAdd(EffectKillGears *const this, Player *player)
{
  __int64 card_info; // rax
  TowerDefensePlay *play; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  TowerDefensePlay::randomKillGears(play, this->kill_num);
};

// Line 307: range 00000000161A6778-00000000161A6782
void __cdecl EffectKillGears::enable(EffectKillGears *const this)
{
  ;
};

// Line 309: range 00000000161A6784-00000000161A678E
void __cdecl EffectKillGears::disable(EffectKillGears *const this)
{
  ;
};

// Line 313: range 00000000161A6790-00000000161A69A0
int32_t __cdecl EffectRandomRemove::init(EffectRandomRemove *const this, const data::ChessCardEffect *effect)
{
  int v3; // eax
  int32_t effect_param1; // edi
  int32_t effect_param2; // esi

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  if ( effect->effect_param1 < 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) )
  {
    effect_param1 = (_DWORD)this + 60;
    __asan_report_store4(&this->card_type);
  }
  this->card_type = effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param2 <= 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_instant >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_instant >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_instant);
  }
  this->is_instant = 1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  effect_param2 = effect->effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->num);
  }
  this->num = effect_param2;
  return 0;
};

// Line 333: range 00000000161A6CEE-00000000161A70CD
void __cdecl EffectRandomRemove::onAdd(EffectRandomRemove *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 card_info; // rax
  uint32_t *v6; // rdx
  EffectRandomRemove::onAdd::<lambda(CardInfo&)> v7; // [rsp-20h] [rbp-170h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  const ActivityChessExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-128h]
  TowerDefensePlay *play; // [rsp+30h] [rbp-120h]
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-118h]
  std::shared_ptr<Config> v13; // [rsp+40h] [rbp-110h] BYREF
  EffectRandomRemove::onAdd::<lambda(CardInfo&)> __f; // [rsp+50h] [rbp-100h]
  std::function<ForeachPolicy(CardInfo&)> p_func; // [rsp+70h] [rbp-E0h] BYREF
  char v16[192]; // [rsp+90h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 17 candidate_vec:335 96 24 14 remove_vec:362";
  *(_QWORD *)(v2 + 16) = EffectRandomRemove::onAdd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_chess_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  __f.__candidate_vec = (std::vector<unsigned int> *)(v2 + 32);
  __f.__config_mgr = config_mgr;
  __f.__this = this;
  v7.__this = this;
  v7.__config_mgr = config_mgr;
  v7.__candidate_vec = (std::vector<unsigned int> *)(v2 + 32);
  std::function<ForeachPolicy ()(CardInfo &)>::function<EffectRandomRemove::onAdd(Player &)::{lambda(CardInfo &)#1},void,void>(
    &p_func,
    v7);
  TowerDefensePlay::foreachActiveCard(play, &p_func);
  std::function<ForeachPolicy ()(CardInfo &)>::~function(&p_func);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  common::tools::RandomUtils::randomSelect<unsigned int>(
    (const std::vector<unsigned int> *)(v2 + 32),
    (std::vector<unsigned int> *)(v2 + 96),
    this->num);
  __for_range = (std::vector<unsigned int> *)(v2 + 96);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 96))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 96))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    TowerDefensePlay::removeCard(play, player, *v6);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 32));
  if ( v16 == (char *)v2 )
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
};

// Line 337: range 00000000161A69A2-00000000161A6CEC
ForeachPolicy __cdecl EffectRandomRemove::onAdd(Player &)::{lambda(CardInfo &)#1}::operator()(
        const EffectRandomRemove::onAdd::<lambda(CardInfo&)> *const __closure,
        CardInfo *info)
{
  uint32_t pick_index; // esi
  __int64 this; // rax
  __int64 v4; // rdx
  const data::ActivityChessExcelConfigMgrBase *config_mgr; // rdi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  data::ChessCardType card_type; // esi
  EffectRandomRemove *v10; // rdx
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&info->pick_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)info + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->pick_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  pick_index = info->pick_index;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = (__int64)__closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)(this + 40) >> 3) + 0x7FFF8000) )
    this = __asan_report_load8();
  v4 = *(_QWORD *)(this + 40);
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 36) >> 3) + 0x7FFF8000) != 0
    && (char)(((v4 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v4 + 36) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( pick_index == *(_DWORD *)(v4 + 36) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_mgr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  config_mgr = __closure->__config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&info->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&info->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    config_mgr = (const data::ActivityChessExcelConfigMgrBase *)&info->card_id;
    __asan_report_load4();
  }
  card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(config_mgr, info->card_id);
  if ( card_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( card_config_ptr->card_quality_type == CARD_QUALITY_PERCECT )
    {
      return 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      card_type = card_config_ptr->card_type;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&v10->card_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->card_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( card_type == v10->card_type )
      {
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        std::vector<unsigned int>::push_back(__closure->__candidate_vec, &info->pick_index);
        return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_effect.cpp",
      "operator()",
      346);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v14, (const char (*)[7])" card:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &info->card_id);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream(&v14);
    return 0;
  }
};

// Line 370: range 00000000161A70CE-00000000161A70D8
void __cdecl EffectRandomRemove::enable(EffectRandomRemove *const this)
{
  ;
};

// Line 372: range 00000000161A70DA-00000000161A70E4
void __cdecl EffectRandomRemove::disable(EffectRandomRemove *const this)
{
  ;
};

// Line 376: range 00000000161A70E6-00000000161A71D3
int32_t __cdecl EffectPointsOnRoundEnd::init(EffectPointsOnRoundEnd *const this, const data::ChessCardEffect *effect)
{
  int v3; // eax
  double effect_param1; // xmm0_8

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  if ( effect->effect_param1 <= 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = (double)effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->points >> 3) + 0x7FFF8000) )
    effect_param1 = __asan_report_store8(&this->points);
  this->points = effect_param1;
  return 0;
};

// Line 390: range 00000000161A71D4-00000000161A727D
void __cdecl EffectPointsOnRoundEnd::enable(EffectPointsOnRoundEnd *const this)
{
  __int64 card_info; // rax
  EffectPointsOnRoundEnd *v2; // rcx
  TowerDefensePlay *play; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->points >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerDefensePlay::modifyPointsOnRoundEnd(play, this->points, v2);
};

// Line 396: range 00000000161A727E-00000000161A732F
void __cdecl EffectPointsOnRoundEnd::disable(EffectPointsOnRoundEnd *const this)
{
  __int64 card_info; // rax
  EffectPointsOnRoundEnd *v2; // rdx
  TowerDefensePlay *play; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->points >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerDefensePlay::modifyPointsOnRoundEnd(play, -this->points, v2);
};

// Line 404: range 00000000161A7330-00000000161A7573
int32_t __cdecl EffectPickCardLTEServerGlobalValue::init(
        EffectPickCardLTEServerGlobalValue *const this,
        const data::ChessCardEffect *effect)
{
  float effect_param1; // xmm0_4
  int32_t effect_param2; // esi
  CardInfo *card_info; // rax

  if ( CardEffectBase::init(this, effect) )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param2 < 0 )
    return -1;
  std::string::operator=(&this->key, &effect->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = (float)effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  effect_param2 = effect->effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_num);
  }
  this->max_num = effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->index )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    card_info = this->card_info;
    if ( *(_BYTE *)(((unsigned __int64)&card_info->stack >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_info->stack >> 3) + 0x7FFF8000) <= 3 )
    {
      card_info = (CardInfo *)__asan_report_store4(&card_info->stack);
    }
    card_info->stack = 0;
  }
  return 0;
};

// Line 424: range 00000000161A7574-00000000161A7E7A
void __cdecl EffectPickCardLTEServerGlobalValue::refreshStack(EffectPickCardLTEServerGlobalValue *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 card_info; // rax
  __int64 v5; // xmm0_8
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  TowerDefensePlay *v9; // rcx
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(TowerDefensePlay *, unsigned __int64, std::string *, float); // r8
  double v12; // xmm0_8
  double v13; // xmm1_8
  float v14; // xmm0_4
  TowerDefensePlay *v15; // r14
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(TowerDefensePlay *, unsigned __int64, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *); // r15
  std::map<std::string,std::map<unsigned int,float>>::mapped_type *v18; // rax
  TowerDefensePlay *v19; // rdx
  unsigned __int64 v20; // rax
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
  double v31; // xmm0_8
  CardInfo *v32; // rax
  int v33; // edi
  double v34; // xmm0_8
  std::less<unsigned int> __comp; // [rsp+16h] [rbp-19Ah] BYREF
  std::allocator<unsigned int> __a; // [rsp+17h] [rbp-199h] BYREF
  TowerDefensePlay *play; // [rsp+18h] [rbp-198h]
  common::milog::MiLogStream v39; // [rsp+20h] [rbp-190h] BYREF
  char v40[368]; // [rsp+40h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 9 count:427 48 8 13 new_stack:428 80 48 20 exclude_type_set:426 160 48 14 gadget_set:432 "
                        "240 48 18 sgv_gadget_map:434";
  *(_QWORD *)(v1 + 16) = EffectPickCardLTEServerGlobalValue::refreshStack;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862724] = -218959118;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 52) = 2;
  std::allocator<unsigned int>::allocator(&__a);
  std::set<unsigned int>::set(
    (std::set<unsigned int> *const)(v1 + 80),
    (std::initializer_list<unsigned int>)__PAIR128__(2LL, v1 + 48),
    &__comp,
    &__a);
  std::allocator<unsigned int>::~allocator(&__a);
  *(_DWORD *)(v1 + 32) = TowerDefensePlay::countUniqueActiveCardsById(play, (const std::set<unsigned int> *)(v1 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_expired);
  }
  if ( this->is_expired )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->max_num >= *(_DWORD *)(v1 + 32) )
    v5 = 0x3FF0000000000000LL;
  else
LABEL_15:
    v5 = 0LL;
  *(_QWORD *)(v1 + 48) = v5;
  common::milog::MiLogStream::create(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_effect.cpp",
    "refreshStack",
    429);
  v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v39, (const char (*)[12])" NEW STACK:");
  v7 = common::milog::MiLogStream::operator<<<double,(double *)0>(v6, (const double *)(v1 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" LAST_STACK:");
  common::milog::MiLogStream::operator<<<double,(double *)0>(v8, &this->last_stack);
  common::milog::MiLogStream::~MiLogStream(&v39);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->last_stack != *(double *)(v1 + 48) )
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 160));
    v9 = play;
    if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (unsigned __int64)(play->_vptr_DescribalBase + 18);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    v11 = *(void (__fastcall **)(TowerDefensePlay *, unsigned __int64, std::string *, float))v10;
    v12 = *(double *)(v1 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = v12 - this->last_stack;
    if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v14 = this->value * v13;
    v11(v9, v1 + 160, &this->key, v14);
    std::map<std::string,std::map<unsigned int,float>>::map((std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 240));
    v15 = play;
    if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = (unsigned __int64)(play->_vptr_DescribalBase + 20);
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8();
    v17 = *(void (__fastcall **)(TowerDefensePlay *, unsigned __int64, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *))v16;
    v18 = std::map<std::string,std::map<unsigned int,float>>::operator[](
            (std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 240),
            &this->key);
    v17(v15, v1 + 160, &this->key, v18);
    v19 = play;
    if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = (unsigned __int64)(play->_vptr_DescribalBase + 21);
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      v20 = __asan_report_load8();
    (*(void (__fastcall **)(TowerDefensePlay *, unsigned __int64))v20)(v19, v1 + 240);
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_effect.cpp",
      "refreshStack",
      437);
    v21 = common::milog::MiLogStream::operator<<<EffectPickCardLTEServerGlobalValue,(EffectPickCardLTEServerGlobalValue*)0>(
            &v39,
            this);
    v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" key:");
    v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &this->key);
    v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" value:");
    v25 = common::milog::MiLogStream::operator<<<float,(float *)0>(v24, &this->value);
    v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" stacks:");
    v27 = common::milog::MiLogStream::operator<<<double,(double *)0>(v26, &this->last_stack);
    v28 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v27, (const char (*)[3])"=>");
    v29 = common::milog::MiLogStream::operator<<<double,(double *)0>(v28, (const double *)(v1 + 48));
    v30 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v29, (const char (*)[8])" count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v39);
    if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !this->index )
    {
      v31 = *(double *)(v1 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = this->card_info;
      v33 = (int)v31;
      if ( *(_BYTE *)(((unsigned __int64)&v32->stack >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v32->stack >> 3) + 0x7FFF8000) <= 3 )
      {
        v33 = (_DWORD)v32 + 48;
        v32 = (CardInfo *)__asan_report_store4(&v32->stack);
      }
      v32->stack = v33;
    }
    v34 = *(double *)(v1 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
      v34 = __asan_report_store8(&this->last_stack);
    this->last_stack = v34;
    TowerDefensePlay::broadcastSelectedCards(play);
    std::map<std::string,std::map<unsigned int,float>>::~map((std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 240));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 160));
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 80));
  if ( v40 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
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
};

// Line 448: range 00000000161A7E7C-00000000161A7E96
void __cdecl EffectPickCardLTEServerGlobalValue::enable(EffectPickCardLTEServerGlobalValue *const this)
{
  EffectPickCardLTEServerGlobalValue::refreshStack(this);
};

// Line 453: range 00000000161A7E98-00000000161A7EB2
void __cdecl EffectPickCardLTEServerGlobalValue::disable(EffectPickCardLTEServerGlobalValue *const this)
{
  EffectPickCardLTEServerGlobalValue::refreshStack(this);
};

// Line 459: range 00000000161A7EB4-00000000161A802A
int32_t __cdecl EffectModifyCardCost::init(EffectModifyCardCost *const this, const data::ChessCardEffect *effect)
{
  double effect_param1; // xmm0_8
  int32_t effect_param2; // esi

  if ( CardEffectBase::init(this, effect) )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param2 < 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = (double)effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    effect_param1 = __asan_report_store8(&this->factor);
  this->factor = effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  effect_param2 = effect->effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_type);
  }
  this->card_type = effect_param2;
  return 0;
};

// Line 473: range 00000000161A802C-00000000161A8036
void __cdecl EffectModifyCardCost::enable(EffectModifyCardCost *const this)
{
  ;
};

// Line 475: range 00000000161A8038-00000000161A8042
void __cdecl EffectModifyCardCost::disable(EffectModifyCardCost *const this)
{
  ;
};

// Line 479: range 00000000161A8044-00000000161A8376
int32_t __cdecl EffectCardTypeCountNoCost::init(
        EffectCardTypeCountNoCost *const this,
        const data::ChessCardEffect *effect)
{
  int v3; // eax
  int32_t effect_param1; // esi
  int32_t effect_param2; // edi
  int32_t effect_param3; // esi
  CardInfo *card_info; // rax

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  if ( effect->effect_param1 < 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param2 < 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param3 < 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_type);
  }
  this->card_type = effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  effect_param2 = effect->effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&this->goal >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->goal >> 3) + 0x7FFF8000) )
  {
    effect_param2 = (_DWORD)this + 60;
    __asan_report_store4(&this->goal);
  }
  this->goal = effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param3 = effect->effect_param3;
  if ( *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quality);
  }
  this->quality = effect_param3;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->index )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    card_info = this->card_info;
    if ( *(_BYTE *)(((unsigned __int64)&card_info->stack >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_info->stack >> 3) + 0x7FFF8000) <= 3 )
    {
      card_info = (CardInfo *)__asan_report_store4(&card_info->stack);
    }
    card_info->stack = 0;
  }
  return 0;
};

// Line 506: range 00000000161A8378-00000000161A8382
void __cdecl EffectCardTypeCountNoCost::enable(EffectCardTypeCountNoCost *const this)
{
  ;
};

// Line 508: range 00000000161A8384-00000000161A838E
void __cdecl EffectCardTypeCountNoCost::disable(EffectCardTypeCountNoCost *const this)
{
  ;
};

// Line 512: range 00000000161A8390-00000000161A84D5
int32_t __cdecl EffectModifyCandidateCards::init(
        EffectModifyCandidateCards *const this,
        const data::ChessCardEffect *effect)
{
  int v3; // eax
  int32_t effect_param1; // ecx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  effect_param1 = effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delta);
  }
  this->delta = effect_param1;
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/tower_defense_effect.cpp",
    "init",
    518);
  v5 = common::milog::MiLogStream::operator<<<EffectModifyCandidateCards,(EffectModifyCandidateCards*)0>(&v7, this);
  v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v5, (const char (*)[8])" delta:");
  common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &this->delta);
  common::milog::MiLogStream::~MiLogStream(&v7);
  return 0;
};

// Line 523: range 00000000161A84D6-00000000161A853E
void __cdecl EffectModifyCandidateCards::enable(EffectModifyCandidateCards *const this)
{
  __int64 card_info; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  TowerDefensePlay::notifyAllPlayerInfo(*(const TowerDefensePlay *const *)(card_info + 24));
};

// Line 528: range 00000000161A8540-00000000161A85A8
void __cdecl EffectModifyCandidateCards::disable(EffectModifyCandidateCards *const this)
{
  __int64 card_info; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  TowerDefensePlay::notifyAllPlayerInfo(*(const TowerDefensePlay *const *)(card_info + 24));
};

// Line 534: range 00000000161A85AA-00000000161A8816
int32_t __cdecl EffectModifyQualityProb::init(EffectModifyQualityProb *const this, const data::ChessCardEffect *effect)
{
  int v3; // eax
  int32_t effect_param1; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rax
  int32_t *v6; // rdx
  int32_t effect_param2; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  int32_t *v9; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  std::map<unsigned int,unsigned int>::key_type __k[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  if ( effect->effect_param1 < 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param2 < 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = effect->effect_param1;
  __k[0] = 2;
  v5 = std::map<unsigned int,unsigned int>::operator[](&this->mod_weight_map, __k);
  v6 = (int32_t *)v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v5);
  }
  *v6 = effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  effect_param2 = effect->effect_param2;
  __k[0] = 1;
  v8 = std::map<unsigned int,unsigned int>::operator[](&this->mod_weight_map, __k);
  v9 = (int32_t *)v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v8);
  }
  *v9 = effect_param2;
  __k[0] = 0;
  v10 = std::map<unsigned int,unsigned int>::operator[](&this->mod_weight_map, __k);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = 0;
  return 0;
};

// Line 553: range 00000000161A8818-00000000161A8822
void __cdecl EffectModifyQualityProb::enable(EffectModifyQualityProb *const this)
{
  ;
};

// Line 555: range 00000000161A8824-00000000161A882E
void __cdecl EffectModifyQualityProb::disable(EffectModifyQualityProb *const this)
{
  ;
};

// Line 559: range 00000000161A8830-00000000161A8927
int32_t __cdecl EffectFreeCardOnRefresh::init(EffectFreeCardOnRefresh *const this, const data::ChessCardEffect *effect)
{
  int v3; // eax
  int32_t effect_param1; // esi

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  if ( effect->effect_param1 <= 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->step);
  }
  this->step = effect_param1;
  return 0;
};

// Line 572: range 00000000161A8928-00000000161A8932
void __cdecl EffectFreeCardOnRefresh::enable(EffectFreeCardOnRefresh *const this)
{
  ;
};

// Line 574: range 00000000161A8934-00000000161A893E
void __cdecl EffectFreeCardOnRefresh::disable(EffectFreeCardOnRefresh *const this)
{
  ;
};

// Line 578: range 00000000161A8940-00000000161A89E5
int32_t __cdecl EffectModifyRefreshCost::init(EffectModifyRefreshCost *const this, const data::ChessCardEffect *effect)
{
  int v3; // eax
  double effect_param1; // xmm0_8

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  effect_param1 = (double)effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    effect_param1 = __asan_report_store8(&this->factor);
  this->factor = effect_param1;
  return 0;
};

// Line 588: range 00000000161A89E6-00000000161A8A4E
void __cdecl EffectModifyRefreshCost::enable(EffectModifyRefreshCost *const this)
{
  __int64 card_info; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  TowerDefensePlay::notifyAllPlayerInfo(*(const TowerDefensePlay *const *)(card_info + 24));
};

// Line 593: range 00000000161A8A50-00000000161A8AB8
void __cdecl EffectModifyRefreshCost::disable(EffectModifyRefreshCost *const this)
{
  __int64 card_info; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  TowerDefensePlay::notifyAllPlayerInfo(*(const TowerDefensePlay *const *)(card_info + 24));
};

// Line 599: range 00000000161A8ABA-00000000161A8D9D
int32_t __cdecl EffectCardsCountStackServerGlobalValue::init(
        EffectCardsCountStackServerGlobalValue *const this,
        const data::ChessCardEffect *effect)
{
  common::milog::MiLogStream *v3; // rax
  float effect_param1; // xmm0_4
  int32_t effect_param2; // edi
  int32_t effect_param3; // esi
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-30h] BYREF

  if ( CardEffectBase::init(this, effect) )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param2 < 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param3 > 0 )
  {
    std::string::operator=(&this->key, &effect->effect_str_param);
    if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    effect_param1 = (float)effect->effect_param1;
    if ( *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->stack_value);
    }
    this->stack_value = effect_param1;
    if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    effect_param2 = effect->effect_param2;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) )
    {
      effect_param2 = (_DWORD)this + 92;
      __asan_report_store4(&this->max_stack);
    }
    this->max_stack = effect_param2;
    if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    effect_param3 = effect->effect_param3;
    if ( *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->step);
    }
    this->step = effect_param3;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_effect.cpp",
      "init",
      610);
    v3 = common::milog::MiLogStream::operator<<<EffectCardsCountStackServerGlobalValue,(EffectCardsCountStackServerGlobalValue*)0>(
           &v8,
           this);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v3, (const char (*)[26])" param3 must be positive.");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 621: range 00000000161A8D9E-00000000161A9738
void __cdecl EffectCardsCountStackServerGlobalValue::refreshStack(EffectCardsCountStackServerGlobalValue *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  __int64 card_info; // rax
  uint32_t active; // eax
  const unsigned int *v8; // rdx
  TowerDefensePlay *v9; // rcx
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(TowerDefensePlay *, unsigned __int64, std::string *, float); // r8
  double stack_value; // xmm1_8
  double v13; // xmm0_8
  float v14; // xmm0_4
  TowerDefensePlay *v15; // r14
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(TowerDefensePlay *, unsigned __int64, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *); // r15
  std::map<std::string,std::map<unsigned int,float>>::mapped_type *v18; // rax
  TowerDefensePlay *v19; // rdx
  unsigned __int64 v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  double v29; // xmm0_8
  CardInfo *v30; // rax
  int v31; // edi
  double v32; // xmm0_8
  std::less<unsigned int> __comp; // [rsp+1Eh] [rbp-1A2h] BYREF
  std::allocator<unsigned int> __a; // [rsp+1Fh] [rbp-1A1h] BYREF
  unsigned int __b; // [rsp+20h] [rbp-1A0h] BYREF
  uint32_t total_pick_count; // [rsp+24h] [rbp-19Ch]
  TowerDefensePlay *play; // [rsp+28h] [rbp-198h]
  common::milog::MiLogStream v39; // [rsp+30h] [rbp-190h] BYREF
  char v40[368]; // [rsp+50h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 8 13 new_stack:631 80 48 20 exclude_type_set:628 160 48 14 gadget_set:635 240 48 18 sgv_gadget_map:637";
  *(_QWORD *)(v1 + 16) = EffectCardsCountStackServerGlobalValue::refreshStack;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862724] = -218959118;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->step )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    card_info = (__int64)this->card_info;
    if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
      card_info = __asan_report_load8();
    play = *(TowerDefensePlay **)(card_info + 24);
    *(_DWORD *)(v1 + 48) = 0;
    *(_DWORD *)(v1 + 52) = 2;
    std::allocator<unsigned int>::allocator(&__a);
    std::set<unsigned int>::set(
      (std::set<unsigned int> *const)(v1 + 80),
      (std::initializer_list<unsigned int>)__PAIR128__(2LL, v1 + 48),
      &__comp,
      &__a);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_expired);
    }
    if ( this->is_expired )
      active = 0;
    else
      active = TowerDefensePlay::countUniqueActiveCardsById(play, (const std::set<unsigned int> *)(v1 + 80));
    total_pick_count = active;
    if ( *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    __b = total_pick_count / this->step;
    v8 = std::min<unsigned int>(&this->max_stack, &__b);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(double *)(v1 + 48) = (double)*(int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->last_stack != *(double *)(v1 + 48) )
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 160));
      v9 = play;
      if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = (unsigned __int64)(play->_vptr_DescribalBase + 18);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(void (__fastcall **)(TowerDefensePlay *, unsigned __int64, std::string *, float))v10;
      if ( *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      stack_value = this->stack_value;
      v13 = *(double *)(v1 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = (v13 - this->last_stack) * stack_value;
      v11(v9, v1 + 160, &this->key, v14);
      std::map<std::string,std::map<unsigned int,float>>::map((std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 240));
      v15 = play;
      if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = (unsigned __int64)(play->_vptr_DescribalBase + 20);
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8();
      v17 = *(void (__fastcall **)(TowerDefensePlay *, unsigned __int64, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *))v16;
      v18 = std::map<std::string,std::map<unsigned int,float>>::operator[](
              (std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 240),
              &this->key);
      v17(v15, v1 + 160, &this->key, v18);
      v19 = play;
      if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (unsigned __int64)(play->_vptr_DescribalBase + 21);
      if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        v20 = __asan_report_load8();
      (*(void (__fastcall **)(TowerDefensePlay *, unsigned __int64))v20)(v19, v1 + 240);
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_effect.cpp",
        "refreshStack",
        640);
      v21 = common::milog::MiLogStream::operator<<<EffectCardsCountStackServerGlobalValue,(EffectCardsCountStackServerGlobalValue*)0>(
              &v39,
              this);
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" key:");
      v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &this->key);
      v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" value:");
      v25 = common::milog::MiLogStream::operator<<<float,(float *)0>(v24, &this->stack_value);
      v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" stacks:");
      v27 = common::milog::MiLogStream::operator<<<double,(double *)0>(v26, &this->last_stack);
      v28 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v27, (const char (*)[3])"=>");
      common::milog::MiLogStream::operator<<<double,(double *)0>(v28, (const double *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v39);
      if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( !this->index )
      {
        v29 = *(double *)(v1 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v30 = this->card_info;
        v31 = (int)v29;
        if ( *(_BYTE *)(((unsigned __int64)&v30->stack >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v30->stack >> 3) + 0x7FFF8000) <= 3 )
        {
          v31 = (_DWORD)v30 + 48;
          v30 = (CardInfo *)__asan_report_store4(&v30->stack);
        }
        v30->stack = v31;
      }
      v32 = *(double *)(v1 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
        v32 = __asan_report_store8(&this->last_stack);
      this->last_stack = v32;
      TowerDefensePlay::broadcastSelectedCards(play);
      std::map<std::string,std::map<unsigned int,float>>::~map((std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 240));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 160));
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 80));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/tower_defense_effect.cpp",
      "refreshStack",
      624);
    v4 = common::milog::MiLogStream::operator<<<EffectCardsCountStackServerGlobalValue,(EffectCardsCountStackServerGlobalValue*)0>(
           &v39,
           this);
    v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v4, (const char (*)[15])" invalid step:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->step);
    common::milog::MiLogStream::~MiLogStream(&v39);
  }
  if ( v40 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
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
};

// Line 651: range 00000000161A973A-00000000161A9754
void __cdecl EffectCardsCountStackServerGlobalValue::enable(EffectCardsCountStackServerGlobalValue *const this)
{
  EffectCardsCountStackServerGlobalValue::refreshStack(this);
};

// Line 656: range 00000000161A9756-00000000161A9770
void __cdecl EffectCardsCountStackServerGlobalValue::disable(EffectCardsCountStackServerGlobalValue *const this)
{
  EffectCardsCountStackServerGlobalValue::refreshStack(this);
};

// Line 662: range 00000000161A9772-00000000161A99CF
int32_t __cdecl EffectPointsStackServerGlobalValue::init(
        EffectPointsStackServerGlobalValue *const this,
        const data::ChessCardEffect *effect)
{
  int v3; // eax
  int32_t effect_param1; // esi
  float effect_param2; // xmm0_4
  int32_t effect_param3; // esi

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  if ( effect->effect_param1 <= 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param3 <= 0 )
    return -1;
  std::string::operator=(&this->key, &effect->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stack_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stack_points);
  }
  this->stack_points = effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  effect_param2 = (float)effect->effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stack_value);
  }
  this->stack_value = effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param3 = effect->effect_param3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_stack);
  }
  this->max_stack = effect_param3;
  return 0;
};

// Line 683: range 00000000161A99D0-00000000161AA1F8
void __cdecl EffectPointsStackServerGlobalValue::refreshStack(EffectPointsStackServerGlobalValue *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 card_info; // rax
  uint32_t TotalBuildlingPoints; // eax
  unsigned int v6; // ecx
  const unsigned int *v7; // rdx
  TowerDefensePlay *v8; // rcx
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(TowerDefensePlay *, unsigned __int64, std::string *, float); // r8
  double stack_value; // xmm1_8
  double v12; // xmm0_8
  float v13; // xmm0_4
  TowerDefensePlay *v14; // r14
  unsigned __int64 v15; // rax
  void (__fastcall *v16)(TowerDefensePlay *, unsigned __int64, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *); // r15
  std::map<std::string,std::map<unsigned int,float>>::mapped_type *v17; // rax
  TowerDefensePlay *v18; // rdx
  unsigned __int64 v19; // rax
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
  double v30; // xmm0_8
  CardInfo *v31; // rax
  int v32; // edi
  double v33; // xmm0_8
  unsigned int __b; // [rsp+14h] [rbp-15Ch] BYREF
  TowerDefensePlay *play; // [rsp+18h] [rbp-158h]
  common::milog::MiLogStream v37; // [rsp+20h] [rbp-150h] BYREF
  char v38[304]; // [rsp+40h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 16 total_points:689 64 8 13 new_stack:690 96 48 14 gadget_set:693 176 48 18 sgv_gadget_map:695";
  *(_QWORD *)(v1 + 16) = EffectPointsStackServerGlobalValue::refreshStack;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862724] = -219021312;
  v3[536862725] = 62194;
  v3[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stack_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stack_points )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_expired);
    }
    if ( this->is_expired )
      TotalBuildlingPoints = 0;
    else
      TotalBuildlingPoints = TowerDefensePlay::getTotalBuildlingPoints(play);
    *(_DWORD *)(v1 + 48) = TotalBuildlingPoints;
    v6 = *(_DWORD *)(v1 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->stack_points >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stack_points >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    __b = v6 / this->stack_points;
    v7 = std::min<unsigned int>(&this->max_stack, &__b);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(double *)(v1 + 64) = (double)*(int *)v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->last_stack != *(double *)(v1 + 64) )
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 96));
      v8 = play;
      if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = (unsigned __int64)(play->_vptr_DescribalBase + 18);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v10 = *(void (__fastcall **)(TowerDefensePlay *, unsigned __int64, std::string *, float))v9;
      if ( *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      stack_value = this->stack_value;
      v12 = *(double *)(v1 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = (v12 - this->last_stack) * stack_value;
      v10(v8, v1 + 96, &this->key, v13);
      std::map<std::string,std::map<unsigned int,float>>::map((std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 176));
      v14 = play;
      if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = (unsigned __int64)(play->_vptr_DescribalBase + 20);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      v16 = *(void (__fastcall **)(TowerDefensePlay *, unsigned __int64, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *))v15;
      v17 = std::map<std::string,std::map<unsigned int,float>>::operator[](
              (std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 176),
              &this->key);
      v16(v14, v1 + 96, &this->key, v17);
      v18 = play;
      if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = (unsigned __int64)(play->_vptr_DescribalBase + 21);
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8();
      (*(void (__fastcall **)(TowerDefensePlay *, unsigned __int64))v19)(v18, v1 + 176);
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/play/tower_defense_effect.cpp",
        "refreshStack",
        698);
      v20 = common::milog::MiLogStream::operator<<<EffectPointsStackServerGlobalValue,(EffectPointsStackServerGlobalValue*)0>(
              &v37,
              this);
      v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" key:");
      v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &this->key);
      v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" value:");
      v24 = common::milog::MiLogStream::operator<<<float,(float *)0>(v23, &this->stack_value);
      v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" stacks:");
      v26 = common::milog::MiLogStream::operator<<<double,(double *)0>(v25, &this->last_stack);
      v27 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v26, (const char (*)[3])"=>");
      v28 = common::milog::MiLogStream::operator<<<double,(double *)0>(v27, (const double *)(v1 + 64));
      v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" points:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v37);
      if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( !this->index )
      {
        v30 = *(double *)(v1 + 64);
        if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v31 = this->card_info;
        v32 = (int)v30;
        if ( *(_BYTE *)(((unsigned __int64)&v31->stack >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v31->stack >> 3) + 0x7FFF8000) <= 3 )
        {
          v32 = (_DWORD)v31 + 48;
          v31 = (CardInfo *)__asan_report_store4(&v31->stack);
        }
        v31->stack = v32;
      }
      v33 = *(double *)(v1 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
        v33 = __asan_report_store8(&this->last_stack);
      this->last_stack = v33;
      TowerDefensePlay::broadcastSelectedCards(play);
      std::map<std::string,std::map<unsigned int,float>>::~map((std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 176));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 96));
    }
  }
  if ( v38 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 709: range 00000000161AA1FA-00000000161AA214
void __cdecl EffectPointsStackServerGlobalValue::enable(EffectPointsStackServerGlobalValue *const this)
{
  EffectPointsStackServerGlobalValue::refreshStack(this);
};

// Line 714: range 00000000161AA216-00000000161AA230
void __cdecl EffectPointsStackServerGlobalValue::disable(EffectPointsStackServerGlobalValue *const this)
{
  EffectPointsStackServerGlobalValue::refreshStack(this);
};

// Line 720: range 00000000161AA232-00000000161AA533
int32_t __cdecl EffectCardTypeStackServerGlobalValue::init(
        EffectCardTypeStackServerGlobalValue *const this,
        const data::ChessCardEffect *effect)
{
  int v3; // eax
  int32_t effect_param1; // edi
  float effect_param2; // xmm0_4
  int32_t effect_param3; // esi
  CardInfo *card_info; // rax

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  if ( effect->effect_param1 < 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param3 <= 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) )
  {
    effect_param1 = (_DWORD)this + 92;
    __asan_report_store4(&this->card_type);
  }
  this->card_type = effect_param1;
  std::string::operator=(&this->key, &effect->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  effect_param2 = (float)effect->effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stack_value);
  }
  this->stack_value = effect_param2;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param3 = effect->effect_param3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_stack);
  }
  this->max_stack = effect_param3;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->index )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    card_info = this->card_info;
    if ( *(_BYTE *)(((unsigned __int64)&card_info->stack >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_info->stack >> 3) + 0x7FFF8000) <= 3 )
    {
      card_info = (CardInfo *)__asan_report_store4(&card_info->stack);
    }
    card_info->stack = 0;
  }
  return 0;
};

// Line 745: range 00000000161AA534-00000000161AACEF
void __cdecl EffectCardTypeStackServerGlobalValue::refreshStack(EffectCardTypeStackServerGlobalValue *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 card_info; // rax
  uint32_t count; // eax
  const unsigned int *v6; // rdx
  TowerDefensePlay *v7; // rcx
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(TowerDefensePlay *, unsigned __int64, std::string *, float); // r8
  double stack_value; // xmm1_8
  double v11; // xmm0_8
  float v12; // xmm0_4
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(TowerDefensePlay *, unsigned __int64, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *); // r15
  std::map<std::string,std::map<unsigned int,float>>::mapped_type *v15; // rax
  TowerDefensePlay *v16; // rdx
  unsigned __int64 v17; // rax
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
  double v28; // xmm0_8
  CardInfo *v29; // rax
  int v30; // edi
  double v31; // xmm0_8
  TowerDefensePlay *play; // [rsp+18h] [rbp-158h]
  common::milog::MiLogStream v34; // [rsp+20h] [rbp-150h] BYREF
  char v35[304]; // [rsp+40h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 9 stack:747 64 8 13 new_stack:748 96 48 14 gadget_set:751 176 48 18 sgv_gadget_map:753";
  *(_QWORD *)(v1 + 16) = EffectCardTypeStackServerGlobalValue::refreshStack;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862724] = -219021312;
  v3[536862725] = 62194;
  v3[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 24) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(TowerDefensePlay **)(card_info + 24);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_expired);
  }
  if ( this->is_expired )
  {
    count = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    count = this->count;
  }
  *(_DWORD *)(v1 + 48) = count;
  v6 = std::min<unsigned int>(&this->max_stack, (const unsigned int *)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(double *)(v1 + 64) = (double)*(int *)v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->last_stack != *(double *)(v1 + 64) )
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 96));
    v7 = play;
    if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(play->_vptr_DescribalBase + 18);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    v9 = *(void (__fastcall **)(TowerDefensePlay *, unsigned __int64, std::string *, float))v8;
    if ( *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    stack_value = this->stack_value;
    v11 = *(double *)(v1 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (v11 - this->last_stack) * stack_value;
    v9(v7, v1 + 96, &this->key, v12);
    std::map<std::string,std::map<unsigned int,float>>::map((std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 176));
    if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)(play->_vptr_DescribalBase + 20);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8();
    v14 = *(void (__fastcall **)(TowerDefensePlay *, unsigned __int64, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *))v13;
    v15 = std::map<std::string,std::map<unsigned int,float>>::operator[](
            (std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 176),
            &this->key);
    v14(play, v1 + 96, &this->key, v15);
    v16 = play;
    if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = (unsigned __int64)(play->_vptr_DescribalBase + 21);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8();
    (*(void (__fastcall **)(TowerDefensePlay *, unsigned __int64))v17)(v16, v1 + 176);
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/play/tower_defense_effect.cpp",
      "refreshStack",
      756);
    v18 = common::milog::MiLogStream::operator<<<EffectCardTypeStackServerGlobalValue,(EffectCardTypeStackServerGlobalValue*)0>(
            &v34,
            this);
    v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" key:");
    v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &this->key);
    v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" value:");
    v22 = common::milog::MiLogStream::operator<<<float,(float *)0>(v21, &this->stack_value);
    v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" stacks:");
    v24 = common::milog::MiLogStream::operator<<<double,(double *)0>(v23, &this->last_stack);
    v25 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v24, (const char (*)[3])"=>");
    v26 = common::milog::MiLogStream::operator<<<double,(double *)0>(v25, (const double *)(v1 + 64));
    v27 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])" stack:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v34);
    if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !this->index )
    {
      v28 = *(double *)(v1 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v29 = this->card_info;
      v30 = (int)v28;
      if ( *(_BYTE *)(((unsigned __int64)&v29->stack >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v29->stack >> 3) + 0x7FFF8000) <= 3 )
      {
        v30 = (_DWORD)v29 + 48;
        v29 = (CardInfo *)__asan_report_store4(&v29->stack);
      }
      v29->stack = v30;
    }
    v31 = *(double *)(v1 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
      v31 = __asan_report_store8(&this->last_stack);
    this->last_stack = v31;
    TowerDefensePlay::broadcastSelectedCards(play);
    std::map<std::string,std::map<unsigned int,float>>::~map((std::map<std::string,std::map<unsigned int,float>> *const)(v1 + 176));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 96));
  }
  if ( v35 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 767: range 00000000161AACF0-00000000161AAD0A
void __cdecl EffectCardTypeStackServerGlobalValue::enable(EffectCardTypeStackServerGlobalValue *const this)
{
  EffectCardTypeStackServerGlobalValue::refreshStack(this);
};

// Line 772: range 00000000161AAD0C-00000000161AAD26
void __cdecl EffectCardTypeStackServerGlobalValue::disable(EffectCardTypeStackServerGlobalValue *const this)
{
  EffectCardTypeStackServerGlobalValue::refreshStack(this);
};

// Line 778: range 00000000161AAD28-00000000161AAE1F
int32_t __cdecl EffectCardTypeForceCurse::init(
        EffectCardTypeForceCurse *const this,
        const data::ChessCardEffect *effect)
{
  int v3; // eax
  int32_t effect_param1; // esi

  if ( CardEffectBase::init(this, effect) )
    return -1;
  v3 = *(unsigned __int8 *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v3 != 0 && (char)v3 <= 3 )
    __asan_report_load4();
  if ( effect->effect_param1 < 0 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_type);
  }
  this->card_type = effect_param1;
  return 0;
};

// Line 791: range 00000000161AAE20-00000000161AAE2A
void __cdecl EffectCardTypeForceCurse::enable(EffectCardTypeForceCurse *const this)
{
  ;
};

// Line 793: range 00000000161AAE2C-00000000161AAE36
void __cdecl EffectCardTypeForceCurse::disable(EffectCardTypeForceCurse *const this)
{
  ;
};
