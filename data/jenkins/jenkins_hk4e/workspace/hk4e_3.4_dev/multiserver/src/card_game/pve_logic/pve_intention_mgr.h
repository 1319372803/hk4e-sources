// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/pve_logic/pve_intention_mgr.h

// Line 22: range 000000000DCC2912-000000000DCC293C
void __cdecl PVEIntention::PVEIntention(PVEIntention *const this)
{
  std::vector<unsigned int>::vector(&this->skill_vec);
  std::unordered_map<unsigned int,int>::unordered_map(&this->skill_priority_map);
};

// Line 22: range 000000000DBC0C26-000000000DBC0C50
void __cdecl PVEIntention::~PVEIntention(PVEIntention *const this)
{
  std::unordered_map<unsigned int,int>::~unordered_map(&this->skill_priority_map);
  std::vector<unsigned int>::~vector(&this->skill_vec);
};

// Line 28: range 000000000DA82840-000000000DA82A4A
PVEIntentionBriefInfo *__cdecl PVEIntentionBriefInfo::operator=(
        PVEIntentionBriefInfo *const this,
        PVEIntentionBriefInfo *a2)
{
  int32_t priority; // ecx
  uint32_t card_guid; // ecx
  uint32_t skill_id; // ecx
  uint32_t cost_energy; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  priority = a2->priority;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->priority = priority;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_guid);
  }
  card_guid = a2->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = skill_id;
  std::map<data::GCGVirtualDiceType,unsigned int>::operator=(&this->choose_map, &a2->choose_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_energy);
  }
  cost_energy = a2->cost_energy;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_energy);
  }
  this->cost_energy = cost_energy;
  return this;
};

// Line 28: range 000000000D8336EC-000000000D833805
void __cdecl PVEIntentionBriefInfo::PVEIntentionBriefInfo(PVEIntentionBriefInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->priority = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
  std::map<data::GCGVirtualDiceType,unsigned int>::map(&this->choose_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_energy);
  }
  this->cost_energy = 0;
};

// Line 28: range 000000000DA8260E-000000000DA82815
void __cdecl PVEIntentionBriefInfo::PVEIntentionBriefInfo(PVEIntentionBriefInfo *const this, PVEIntentionBriefInfo *a2)
{
  int32_t priority; // ecx
  uint32_t card_guid; // ecx
  uint32_t skill_id; // ecx
  uint32_t cost_energy; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  priority = a2->priority;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->priority = priority;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_guid);
  }
  card_guid = a2->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = skill_id;
  std::map<data::GCGVirtualDiceType,unsigned int>::map(&this->choose_map, &a2->choose_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_energy);
  }
  cost_energy = a2->cost_energy;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_energy);
  }
  this->cost_energy = cost_energy;
};

// Line 28: range 000000000D9BE4D0-000000000D9BE6D7
void __cdecl PVEIntentionBriefInfo::PVEIntentionBriefInfo(
        PVEIntentionBriefInfo *const this,
        const PVEIntentionBriefInfo *a2)
{
  int32_t priority; // ecx
  uint32_t card_guid; // ecx
  uint32_t skill_id; // ecx
  uint32_t cost_energy; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  priority = a2->priority;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->priority = priority;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_guid);
  }
  card_guid = a2->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = skill_id;
  std::map<data::GCGVirtualDiceType,unsigned int>::map(&this->choose_map, &a2->choose_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_energy);
  }
  cost_energy = a2->cost_energy;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_energy);
  }
  this->cost_energy = cost_energy;
};

// Line 28: range 000000000D833806-000000000D833824
void __cdecl PVEIntentionBriefInfo::~PVEIntentionBriefInfo(PVEIntentionBriefInfo *const this)
{
  std::map<data::GCGVirtualDiceType,unsigned int>::~map(&this->choose_map);
};

// Line 48: range 000000000D82A6FA-000000000D82AA08
std::string *__cdecl PVEIntentionBriefInfo::getDesc[abi:cxx11](std::string *retstr, PVEIntentionBriefInfo *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  std::string v; // [rsp+10h] [rbp-90h] BYREF
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:50";
  *(_QWORD *)(v2 + 16) = PVEIntentionBriefInfo::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[card:");
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_guid);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->card_guid);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ", skill:");
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id);
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->skill_id);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, ", priority:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->priority);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, ", choose_dice:");
  PVEIntentionBriefInfo::getDiceMapDesc[abi:cxx11](&v, &this->choose_map);
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, &v);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, "]");
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
  if ( v15 == (char *)v2 )
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

// Line 59: range 000000000D82AA0A-000000000D82AB0C
void __cdecl PVEIntentionMgr::PVEIntentionMgr(
        PVEIntentionMgr *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_controller_id_);
  }
  this->cur_controller_id_ = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->advanture_rule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->advanture_rule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->advanture_rule_id_);
  }
  this->advanture_rule_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gen_intention_epoch_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gen_intention_epoch_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gen_intention_epoch_);
  }
  this->gen_intention_epoch_ = 0;
};

// Line 75: range 000000000D82A38A-000000000D82A6F8
std::string *__cdecl PVEIntentionBriefInfo::getDiceMapDesc[abi:cxx11](
        std::string *retstr,
        const std::map<data::GCGVirtualDiceType,unsigned int> *dice_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::pair<const data::GCGVirtualDiceType,unsigned int> *v5; // rax
  std::pair<const data::GCGVirtualDiceType,unsigned int> *v6; // rdx
  const char *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  std::map<data::GCGVirtualDiceType,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<data::GCGVirtualDiceType,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const std::map<data::GCGVirtualDiceType,unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  std::tuple_element<0,std::pair<const data::GCGVirtualDiceType,unsigned int> >::type *dice_type; // [rsp+28h] [rbp-78h]
  std::tuple_element<1,std::pair<const data::GCGVirtualDiceType,unsigned int> >::type *count; // [rsp+30h] [rbp-70h]
  std::pair<const data::GCGVirtualDiceType,unsigned int> __in; // [rsp+38h] [rbp-68h] BYREF
  char v18[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:38";
  *(_QWORD *)(v2 + 16) = PVEIntentionBriefInfo::getDiceMapDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "[");
  __for_range = dice_map;
  __for_begin._M_node = std::map<data::GCGVirtualDiceType,unsigned int>::begin(dice_map)._M_node;
  __for_end._M_node = std::map<data::GCGVirtualDiceType,unsigned int>::end(dice_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = (std::pair<const data::GCGVirtualDiceType,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<data::GCGVirtualDiceType const,unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v5, 8LL);
    }
    __in = *v6;
    dice_type = std::get<0ul,data::GCGVirtualDiceType const,unsigned int>(&__in);
    count = std::get<1ul,data::GCGVirtualDiceType const,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)dice_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dice_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dice_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dice_type);
    }
    v7 = data::enumValToStr(*dice_type);
    v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           v7);
    v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, ":");
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count);
    }
    v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, *count);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, ",");
    std::_Rb_tree_const_iterator<std::pair<data::GCGVirtualDiceType const,unsigned int>>::operator++(&__for_begin);
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

// Line 84: range 000000000D82AB0E-000000000D82AB43
GCGGameMode *__cdecl PVEIntentionMgr::getGameMode(PVEIntentionMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->game_mode_;
};

// Line 86: range 000000000D82AB44-000000000D82AB93
uint32_t __cdecl PVEIntentionMgr::getConfigRuleId(const PVEIntentionMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->advanture_rule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->advanture_rule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->advanture_rule_id_);
  }
  return this->advanture_rule_id_;
};

// Line 88: range 000000000DF46686-000000000DF466CD
uint32_t __cdecl PVEIntentionMgr::getCurIntentionEpoch(const PVEIntentionMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gen_intention_epoch_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gen_intention_epoch_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gen_intention_epoch_);
  }
  return this->gen_intention_epoch_;
};
