// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/roguelike/roguelike_misc_mgr.h

// Line 35: range 0000000015A1CEDE-0000000015A1D037
void __cdecl RoguelikeEfffectCellParam::RoguelikeEfffectCellParam(RoguelikeEfffectCellParam *const this)
{
  __int64 v1; // rsi
  uint32_t *p_expected_max_trap_count; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  std::map<data::RogueCreateGadgetType,int>::map(&this->gadget_delta_map);
  p_expected_max_trap_count = &this->expected_max_trap_count;
  if ( *(_BYTE *)(((unsigned __int64)p_expected_max_trap_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_expected_max_trap_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->expected_max_trap_count, v1, p_expected_max_trap_count);
  }
  this->expected_max_trap_count = -1;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->expected_min_store_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expected_min_store_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->expected_min_store_count, v3, v4);
  this->expected_min_store_count = 0;
  if ( *(char *)(((unsigned __int64)&this->is_spring_next_to_boss >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_spring_next_to_boss, v3, &this->is_spring_next_to_boss);
  this->is_spring_next_to_boss = 0;
  v5 = ((_BYTE)this + 57) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_ban_guardian >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_ban_guardian >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_ban_guardian, v5, v6);
  this->is_ban_guardian = 0;
  v7 = ((_BYTE)this + 58) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_ban_spring >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_ban_spring >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_ban_spring, v7, v8);
  this->is_ban_spring = 0;
};

// Line 35: range 0000000015A1C4EC-0000000015A1C781
void __cdecl RoguelikeEfffectCellParam::RoguelikeEfffectCellParam(
        RoguelikeEfffectCellParam *const this,
        const RoguelikeEfffectCellParam *a2)
{
  uint32_t expected_max_trap_count; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t expected_min_store_count; // ecx
  char v6; // dl
  __int64 v7; // rdx
  bool is_spring_next_to_boss; // cl
  char v9; // al
  __int64 v10; // rsi
  bool is_ban_guardian; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  bool is_ban_spring; // cl
  char v16; // dl
  __int64 v17; // rdx
  const RoguelikeEfffectCellParam *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  std::map<data::RogueCreateGadgetType,int>::map(&this->gadget_delta_map, &a2->gadget_delta_map);
  if ( *(_BYTE *)(((unsigned __int64)&v18->expected_max_trap_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->expected_max_trap_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->expected_max_trap_count);
  }
  expected_max_trap_count = a2->expected_max_trap_count;
  v3 = *(_BYTE *)(((unsigned __int64)&this->expected_max_trap_count >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->expected_max_trap_count, a2, &this->expected_max_trap_count);
  }
  this->expected_max_trap_count = expected_max_trap_count;
  v4 = (((_BYTE)v18 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->expected_min_store_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->expected_min_store_count >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->expected_min_store_count);
  }
  expected_min_store_count = v18->expected_min_store_count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->expected_min_store_count >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->expected_min_store_count, v4, v7);
  this->expected_min_store_count = expected_min_store_count;
  if ( *(char *)(((unsigned __int64)&v18->is_spring_next_to_boss >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v18->is_spring_next_to_boss);
  is_spring_next_to_boss = v18->is_spring_next_to_boss;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_spring_next_to_boss >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store1(&this->is_spring_next_to_boss, v4, &this->is_spring_next_to_boss);
  }
  this->is_spring_next_to_boss = is_spring_next_to_boss;
  v10 = ((_BYTE)v18 + 57) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v18->is_ban_guardian >> 3) + 0x7FFF8000) != 0
    && (char)v10 >= *(_BYTE *)(((unsigned __int64)&v18->is_ban_guardian >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v18->is_ban_guardian);
  }
  is_ban_guardian = v18->is_ban_guardian;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_ban_guardian >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 57) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_ban_guardian, v10, v13);
  this->is_ban_guardian = is_ban_guardian;
  v14 = ((_BYTE)v18 + 58) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v18->is_ban_spring >> 3) + 0x7FFF8000) != 0
    && (char)v14 >= *(_BYTE *)(((unsigned __int64)&v18->is_ban_spring >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v18->is_ban_spring);
  }
  is_ban_spring = v18->is_ban_spring;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_ban_spring >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 58) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_ban_spring, v14, v17);
  this->is_ban_spring = is_ban_spring;
};

// Line 35: range 0000000015A1BA36-0000000015A1BA50
void __cdecl RoguelikeEfffectCellParam::~RoguelikeEfffectCellParam(RoguelikeEfffectCellParam *const this)
{
  std::map<data::RogueCreateGadgetType,int>::~map(&this->gadget_delta_map);
};

// Line 44: range 0000000015A1B620-0000000015A1B7F5
__int64 __fastcall RoguelikeEfffectCellParam::findGadgetReviseNum(
        const RoguelikeEfffectCellParam *const this,
        data::RogueCreateGadgetType gadget_type,
        uint32_t original_num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,int> >::pointer v7; // rdx
  int *p_second; // rax
  uint32_t original_numb; // [rsp+0h] [rbp-A0h]
  int delta; // [rsp+14h] [rbp-8Ch]
  std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 gadget_type:44 64 8 7 iter:46";
  *(_QWORD *)(v3 + 16) = RoguelikeEfffectCellParam::findGadgetReviseNum;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = gadget_type;
  *(std::map<data::RogueCreateGadgetType,int>::const_iterator *)(v3 + 64) = std::map<data::RogueCreateGadgetType,int>::find(
                                                                              &this->gadget_delta_map,
                                                                              (const std::map<data::RogueCreateGadgetType,int>::key_type *)(v3 + 48));
  __y._M_node = std::map<data::RogueCreateGadgetType,int>::end(&this->gadget_delta_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,int> >::_Self *)(v3 + 64),
         &__y) )
  {
    result = original_num;
  }
  else
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<data::RogueCreateGadgetType const,int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,int> > *const)(v3 + 64));
    p_second = &v7->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    delta = v7->second;
    if ( delta >= 0 || original_num > abs32(delta) )
      original_numb = delta + original_num;
    else
      original_numb = 0;
    result = original_numb;
  }
  if ( v13 == (char *)v3 )
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

// Line 64: range 0000000016D65340-0000000016D654C4
void __cdecl RoguelikeMiscMgr::~RoguelikeMiscMgr(RoguelikeMiscMgr *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->gacha_cell_set_);
  std::map<unsigned int,unsigned int>::~map(&this->chosen_card_type_count_map_);
  std::unordered_set<unsigned long>::~unordered_set(&this->add_talent_guid_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->viewed_curse_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->viewed_card_set_);
  std::unordered_set<unsigned long>::~unordered_set(&this->noheal_guid_set_);
  std::unordered_map<std::string,float>::~unordered_map(&this->dynamic_team_sgv_map_);
  std::map<unsigned int,unsigned int>::~map(&this->trigger_curse_map_);
  std::vector<unsigned int>::~vector(&this->optional_card_vec_);
  std::map<unsigned int,unsigned int>::~map(&this->select_card_map_);
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::~vector(&this->chosen_rune_tuple_vec_);
  std::unordered_map<data::RoguelikeCardType,unsigned int>::~unordered_map(&this->refresh_cell_card_add_weight_map_);
  std::unordered_map<data::RoguelikeCardType,unsigned int>::~unordered_map(&this->card_add_weight_map_);
  std::vector<unsigned int>::~vector(&this->gm_wish_card_vec_);
  RoguelikeEfffectCellParam::~RoguelikeEfffectCellParam(&this->cell_param_);
  std::unordered_map<std::string,float>::~unordered_map(&this->team_sgv_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::~unordered_map(&this->curse_pool_weight_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->curse_count_map_);
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::~unordered_map(&this->depot_card_type_weight_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->card_count_map_);
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::~unordered_map(&this->card_depot_map_);
};

// Line 111: range 0000000016D65222-0000000016D65244
bool __cdecl RoguelikeMiscMgr::canSelectRoguelikeCard(const RoguelikeMiscMgr *const this)
{
  return !std::vector<unsigned int>::empty(&this->optional_card_vec_);
};

// Line 114: range 0000000015A1B7F6-0000000015A1B844
float __cdecl RoguelikeMiscMgr::getResourceBonusProp(const RoguelikeMiscMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->bonus_resource_prop_);
  }
  return this->bonus_resource_prop_;
};

// Line 117: range 000000001384A51C-000000001384A5F0
bool __fastcall RoguelikeMiscMgr::isAvatarBanHeal(const RoguelikeMiscMgr *const this, uint64_t guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 guid:117";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::isAvatarBanHeal;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = guid;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned long> const,unsigned long>(
             &this->noheal_guid_set_,
             (const unsigned __int64 *)(v2 + 32));
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

// Line 120: range 0000000015A1B846-0000000015A1B859
const RoguelikeEfffectCellParam *__cdecl RoguelikeMiscMgr::getRoguelikeEfffectCellParam(RoguelikeMiscMgr *const this)
{
  return &this->cell_param_;
};

// Line 143: range 0000000016D65246-0000000016D65298
bool __cdecl RoguelikeMiscMgr::isCanRefreshGacha(const RoguelikeMiscMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_optional_card_can_refresh_);
  }
  return this->is_optional_card_can_refresh_;
};

// Line 288: range 0000000015A1B85A-0000000015A1B8B0
void __cdecl RoguelikeMiscMgr::setIsPostEnterRoguelikeDungeon(
        RoguelikeMiscMgr *const this,
        bool is_post_enter_roguelike_dungeon__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 18) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_post_enter_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_post_enter_roguelike_dungeon_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_post_enter_roguelike_dungeon_, v2, v3);
  this->is_post_enter_roguelike_dungeon_ = is_post_enter_roguelike_dungeon__out;
};

// Line 289: range 0000000016D6529A-0000000016D652E9
uint32_t __cdecl RoguelikeMiscMgr::getTriggerCurseSubWeight(const RoguelikeMiscMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->trigger_curse_sub_weight_);
  }
  return this->trigger_curse_sub_weight_;
};

// Line 315: range 0000000016D652EA-0000000016D6533E
uint32_t __cdecl RoguelikeMiscMgr::getCardCellId(const RoguelikeMiscMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_cell_id_);
  }
  return this->card_cell_id_;
};

// Line 316: range 0000000015A1B8B2-0000000015A1B8FE
uint32_t __cdecl RoguelikeMiscMgr::getCurDungeonLevel(const RoguelikeMiscMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_dungeon_level_);
  }
  return this->cur_dungeon_level_;
};
