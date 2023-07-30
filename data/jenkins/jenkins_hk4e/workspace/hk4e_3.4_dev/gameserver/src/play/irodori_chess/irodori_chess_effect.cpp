// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/irodori_chess/irodori_chess_effect.cpp

// Line 21: range 00000000161BD336-00000000161BD659
std::string *__cdecl IrodoriChessEffectBase::getDesc[abi:cxx11](
        std::string *retstr,
        const IrodoriChessEffectBase *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  IrodoriChessCardInfo *card_info; // rdx
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // r14
  const char *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  std::string v; // [rsp+10h] [rbp-90h] BYREF
  char v16[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:22";
  *(_QWORD *)(v2 + 16) = IrodoriChessEffectBase::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = this->card_info_;
  v6 = (unsigned __int64 *)card_info;
  if ( *(_BYTE *)(((unsigned __int64)card_info >> 3) + 0x7FFF8000) )
    v6 = (unsigned __int64 *)__asan_report_load8();
  v7 = *v6;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(std::string *, IrodoriChessCardInfo *))v7)(&v, card_info);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         &v);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " <efffect_index:");
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->index_);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, ", type: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v12 = data::enumValToStr(this->effect_type_);
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, v12);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, ">");
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
  if ( v16 == (char *)v2 )
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

// Line 28: range 00000000161BD65A-00000000161BD7C4
int32_t __cdecl IrodoriChessEffectBase::doInit(
        IrodoriChessEffectBase *const this,
        const data::IrodoriChessCardEffect *effect)
{
  uint32_t effect_index; // ecx
  data::IrodoriChessCardEffectType effect_type; // ecx
  unsigned __int64 v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)effect + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  effect_index = effect->effect_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->index_);
  }
  this->index_ = effect_index;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_type = effect->effect_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_type_);
  }
  this->effect_type_ = effect_type;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  return (*(__int64 (__fastcall **)(IrodoriChessEffectBase *const, const data::IrodoriChessCardEffect *))v4)(
           this,
           effect);
};

// Line 35: range 00000000161BD7C6-00000000161BD89A
void __cdecl IrodoriChessEffectBase::start(IrodoriChessEffectBase *const this)
{
  unsigned __int64 v1; // rax
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/irodori_chess/irodori_chess_effect.cpp",
    "start",
    36);
  common::milog::MiLogStream::operator<<<IrodoriChessEffectBase,(IrodoriChessEffectBase*)0>(&v2, this);
  common::milog::MiLogStream::~MiLogStream(&v2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 4);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  (*(void (__fastcall **)(IrodoriChessEffectBase *const))v1)(this);
};

// Line 49: range 00000000161BD89C-00000000161BD9F8
int32_t __cdecl IrodoriChessEffectAddServerGlobalValue::init(
        IrodoriChessEffectAddServerGlobalValue *const this,
        const data::IrodoriChessCardEffect *effect)
{
  float effect_param1; // xmm0_4
  std::set<unsigned int>::iterator v3; // rax
  std::insert_iterator<std::set<unsigned int> > v4; // rax
  std::set<unsigned int> *container; // r12
  const std::_Rb_tree_node_base *M_node; // r13
  const unsigned int *M_current; // rbx
  std::vector<unsigned int>::const_iterator v8; // rax
  std::insert_iterator<std::set<unsigned int> > v9; // rdx

  std::string::operator=(&this->key_, &effect->effect_str_param);
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  effect_param1 = (float)effect->effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value_);
  }
  this->value_ = effect_param1;
  if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->target_type == IRODORI_CHESS_CARD_TARGET_GADGETS )
  {
    v3._M_node = std::set<unsigned int>::end(&this->gadget_set_)._M_node;
    v4 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(&this->gadget_set_, v3);
    container = v4.container;
    M_node = v4.iter._M_node;
    M_current = std::vector<unsigned int>::end(&effect->target_param_list)._M_current;
    v8._M_current = std::vector<unsigned int>::begin(&effect->target_param_list)._M_current;
    v9.container = container;
    v9.iter._M_node = M_node;
    std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::set<unsigned int>>>(
      v8,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
      v9);
  }
  return 0;
};

// Line 61: range 00000000161BD9FA-00000000161BDDC7
void __cdecl IrodoriChessEffectAddServerGlobalValue::enable(IrodoriChessEffectAddServerGlobalValue *const this)
{
  std::map<std::string,std::map<unsigned int,float>> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 card_info; // rax
  IrodoriTowerDefensePlay *v5; // rcx
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(IrodoriTowerDefensePlay *, std::set<unsigned int> *, std::string *, double); // r8
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(IrodoriTowerDefensePlay *, std::set<unsigned int> *, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *); // r15
  std::map<std::string,std::map<unsigned int,float>>::mapped_type *v10; // rax
  IrodoriTowerDefensePlay *v11; // rdx
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  IrodoriTowerDefensePlay *play; // [rsp+18h] [rbp-D8h]
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
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 17 sgv_gadget_map:64";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)IrodoriChessEffectAddServerGlobalValue::enable;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info_;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 80) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  play = *(IrodoriTowerDefensePlay **)(card_info + 80);
  v5 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(play->_vptr_DescribalBase + 18);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  v7 = *(void (__fastcall **)(IrodoriTowerDefensePlay *, std::set<unsigned int> *, std::string *, double))v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v7(v5, &this->gadget_set_, &this->key_, *(double *)_mm_cvtsi32_si128(LODWORD(this->value_)).m128i_i64);
  std::map<std::string,std::map<unsigned int,float>>::map(v1 + 1);
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(play->_vptr_DescribalBase + 20);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  v9 = *(void (__fastcall **)(IrodoriTowerDefensePlay *, std::set<unsigned int> *, std::string *, std::map<std::string,std::map<unsigned int,float>>::mapped_type *))v8;
  v10 = std::map<std::string,std::map<unsigned int,float>>::operator[](v1 + 1, &this->key_);
  v9(play, &this->gadget_set_, &this->key_, v10);
  v11 = play;
  if ( *(_BYTE *)(((unsigned __int64)play >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (unsigned __int64)(play->_vptr_DescribalBase + 21);
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8();
  (*(void (__fastcall **)(IrodoriTowerDefensePlay *, __int8 *))v12)(v11, v1[1]._M_t._M_impl.gap0);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/play/irodori_chess/irodori_chess_effect.cpp",
    "enable",
    67);
  v13 = common::milog::MiLogStream::operator<<<IrodoriChessEffectAddServerGlobalValue,(IrodoriChessEffectAddServerGlobalValue*)0>(
          &v15,
          this);
  common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])"enabled.");
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

// Line 72: range 00000000161BDDC8-00000000161BDE6D
int32_t __cdecl IrodoriChessEffectModifyRefundByCost::init(
        IrodoriChessEffectModifyRefundByCost *const this,
        const data::IrodoriChessCardEffect *effect)
{
  int32_t effect_param1; // esi

  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param1 > 0 && effect->effect_param1 <= 10000 )
  {
    effect_param1 = effect->effect_param1;
    if ( *(_BYTE *)(((unsigned __int64)&this->factor_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->factor_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->factor_);
    }
    this->factor_ = effect_param1;
  }
  return 0;
};

// Line 81: range 00000000161BDE6E-00000000161BDF17
void __cdecl IrodoriChessEffectModifyRefundByCost::enable(IrodoriChessEffectModifyRefundByCost *const this)
{
  __int64 card_info; // rax
  IrodoriTowerDefensePlay *v2; // rcx
  IrodoriChessEffectModifyRefundByCost *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info_;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 80) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  v2 = *(IrodoriTowerDefensePlay **)(card_info + 80);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  IrodoriTowerDefensePlay::onEffectModifyRefundByCost(v2, this->factor_, v3);
};

// Line 87: range 00000000161BDF18-00000000161BE1A7
int32_t __cdecl IrodoriChessEffectAddAbilityGroup::init(
        IrodoriChessEffectAddAbilityGroup *const this,
        const data::IrodoriChessCardEffect *effect)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  std::string *M_current; // r15
  std::vector<std::string>::iterator v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-B1h] BYREF
  std::string sep; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 20 ability_group_vec:88";
  *(_QWORD *)(v2 + 16) = IrodoriChessEffectAddAbilityGroup::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&sep, ",", &__a);
  v5 = common::tools::StringUtils::split(&effect->effect_str_param, &sep, (std::vector<std::string> *)(v2 + 32), 1) != 0;
  std::string::~string(&sep);
  std::allocator<char>::~allocator(&__a);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&sep,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/play/irodori_chess/irodori_chess_effect.cpp",
      "init",
      91);
    v6 = common::milog::MiLogStream::operator<<<IrodoriChessEffectAddAbilityGroup,(IrodoriChessEffectAddAbilityGroup*)0>(
           (common::milog::MiLogStream *const)&sep,
           this);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v6,
      (const char (*)[45])"parse str param as ability group vec faield.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
    v7 = -1;
  }
  else
  {
    M_current = std::vector<std::string>::end((std::vector<std::string> *const)(v2 + 32))._M_current;
    v9._M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v2 + 32))._M_current;
    std::set<std::string>::insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string>>>(
      &this->ability_group_set_,
      v9,
      (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_current);
    v7 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 32));
  result = v7;
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
  return result;
};

// Line 99: range 00000000161BE1A8-00000000161BE21F
void __cdecl IrodoriChessEffectAddAbilityGroup::enable(IrodoriChessEffectAddAbilityGroup *const this)
{
  __int64 card_info; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info_;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 80) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  IrodoriTowerDefensePlay::onEffectAddAbilityGroup(
    *(IrodoriTowerDefensePlay *const *)(card_info + 80),
    &this->ability_group_set_,
    this);
};

// Line 105: range 00000000161BE220-00000000161BE2B7
int32_t __cdecl IrodoriChessEffectAddGearNum::init(
        IrodoriChessEffectAddGearNum *const this,
        const data::IrodoriChessCardEffect *effect)
{
  int32_t effect_param1; // esi

  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param1 > 0 )
  {
    effect_param1 = effect->effect_param1;
    if ( *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->add_value_);
    }
    this->add_value_ = effect_param1;
  }
  return 0;
};

// Line 114: range 00000000161BE2B8-00000000161BE361
void __cdecl IrodoriChessEffectAddGearNum::enable(IrodoriChessEffectAddGearNum *const this)
{
  __int64 card_info; // rax
  IrodoriTowerDefensePlay *v2; // rcx
  IrodoriChessEffectAddGearNum *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info_;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 80) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  v2 = *(IrodoriTowerDefensePlay **)(card_info + 80);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  IrodoriTowerDefensePlay::onEffectAddTotalTowerLimit(v2, this->add_value_, v3);
};

// Line 120: range 00000000161BE362-00000000161BE4AA
int32_t __cdecl IrodoriChessEffectAddTargetGearNum::init(
        IrodoriChessEffectAddTargetGearNum *const this,
        const data::IrodoriChessCardEffect *effect)
{
  int32_t effect_param1; // esi
  std::set<unsigned int>::iterator v3; // rax
  std::insert_iterator<std::set<unsigned int> > v4; // rax
  std::set<unsigned int> *container; // r12
  const std::_Rb_tree_node_base *M_node; // r13
  const unsigned int *M_current; // rbx
  std::vector<unsigned int>::const_iterator v8; // rax
  std::insert_iterator<std::set<unsigned int> > v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->effect_param1 > 0 )
  {
    effect_param1 = effect->effect_param1;
    if ( *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->add_value_);
    }
    this->add_value_ = effect_param1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( effect->target_type == IRODORI_CHESS_CARD_TARGET_GADGETS )
  {
    v3._M_node = std::set<unsigned int>::end(&this->gadget_set_)._M_node;
    v4 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(&this->gadget_set_, v3);
    container = v4.container;
    M_node = v4.iter._M_node;
    M_current = std::vector<unsigned int>::end(&effect->target_param_list)._M_current;
    v8._M_current = std::vector<unsigned int>::begin(&effect->target_param_list)._M_current;
    v9.container = container;
    v9.iter._M_node = M_node;
    std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::set<unsigned int>>>(
      v8,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
      v9);
  }
  return 0;
};

// Line 134: range 00000000161BE4AC-00000000161BE55D
void __cdecl IrodoriChessEffectAddTargetGearNum::enable(IrodoriChessEffectAddTargetGearNum *const this)
{
  __int64 card_info; // rax
  uint32_t *p_add_value; // rdi
  IrodoriChessEffectAddTargetGearNum *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->card_info_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  card_info = (__int64)this->card_info_;
  if ( *(_BYTE *)(((unsigned __int64)(card_info + 80) >> 3) + 0x7FFF8000) )
    card_info = __asan_report_load8();
  p_add_value = *(uint32_t **)(card_info + 80);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_add_value = &this->add_value_;
    __asan_report_load4();
  }
  IrodoriTowerDefensePlay::onEffectAddTargetTowersLimit(
    (IrodoriTowerDefensePlay *const)p_add_value,
    &this->gadget_set_,
    this->add_value_,
    v3);
};
